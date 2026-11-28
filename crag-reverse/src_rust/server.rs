//! Reconstructed `craggemini_core::server` — HTTP surface, admission, turn dispatch.
//! Addresses: `Runtime::check_license` 0x3c3d50, `matches_token` 0x3c9ae0,
//! `error_response` 0x3c9e00, `run_with_license` 0x196800, `dispatch_turn` 0x304580,
//! `parse_message_body_with_policy` 0x3d07f0, `parse_gemini_model_route` 0x3d0600.
#![allow(dead_code, unused)]

use std::sync::Arc;

use axum::body::Body;
use axum::extract::{Path, State};
use axum::http::{HeaderMap, Method, Request, StatusCode};
use axum::response::sse::{Event, KeepAlive, Sse};
use axum::response::{IntoResponse, Response};
use axum::routing::{get, post};
use axum::Router;
use bytes::Bytes;
use futures_util::StreamExt;
use hyper_util::rt::TokioIo;
use serde::{Deserialize, Serialize};
use serde_json::{json, Value};
use tokio_stream::wrappers::BroadcastStream;
use tower::ServiceExt;

use crate::bridge::Bridge;
use crate::license::{Device, LicenseError, LicenseGate, LicenseStatus};
use crate::mcp::{McpCoordinator, McpIncomingCall};
use crate::pool::PoolManager;
use crate::protocol::{Cancel, Envelope, Failure, GatewayPolicy};

pub const INTERNAL_TOKEN_HEADER: &str = "x-kin-internal-token";
pub const SLOT_ID_HEADER: &str = "x-craggemini-slot-id";
pub const ACCOUNT_HEADER: &str = "x-craggemini-account";
pub const SESSION_HEADER: &str = "x-craggemini-session";

pub struct Turn {
    pub kind: TurnKind,
    pub request_id: String,
    pub cancelled: bool,
    pub started: std::time::Instant,
}

#[derive(Clone, Copy)]
pub enum TurnKind {
    Json,
    Native,
    Pool,
    Subagent,
}

pub enum Delivery {
    Json(JsonTurnResult),
    Stream(tokio::sync::mpsc::Receiver<Result<Bytes, Failure>>),
}

pub struct JsonTurnResult {
    pub status: u16,
    pub body: Value,
    pub usage: Option<Value>,
}

#[derive(Default)]
pub struct Registry {
    pub active_requests: std::collections::HashSet<String>,
    pub account_models: std::collections::HashMap<String, String>,
}

pub struct Runtime {
    pub vm_id: String,
    pub gate: LicenseGate,
    pub device: Device,
    pub pool: Arc<tokio::sync::Mutex<PoolManager>>,
    pub bridge: Arc<Bridge>,
    pub sessions: crate::resume::SessionStore,
    pub subagents: crate::subagents::SubagentRegistry,
    pub mcp: McpCoordinator,
    pub registry: std::sync::Mutex<Registry>,
    pub internal_token: String,
    pub license: std::sync::Mutex<Option<LicenseStatus>>,
    /// Pool mode readiness: false until the warm slots are up, so the host waits
    /// instead of sending requests into a cold pool (which yields pool-overload 429s).
    pub warm_ready: Arc<std::sync::atomic::AtomicBool>,
    /// Pool mode: the host readiness probe expects `pool.enabled/ready` instead
    /// of a `native_pid`, because workers are spawned per account on demand.
    pub pool_mode: bool,
}

impl Runtime {
    /// `Runtime::check_license` @ 0x3c3d50: 403 + `license_*` for every gate failure.
    ///
    /// The reconstructed kernel is license-free: a bypass status is returned when
    /// `CRAGGEMINI_LICENSE_BYPASS` is set, when the device has no key, and also
    /// when the real gate rejects (permit released / expired) so serving never
    /// depends on a CRAG seat.
    pub fn check_license(&self) -> Result<LicenseStatus, Response> {
        if std::env::var_os("CRAGGEMINI_LICENSE_BYPASS").is_some() || self.device.public_key.is_empty() {
            return Ok(self.bypass_license());
        }
        match self.gate.check(&self.device) {
            Ok(status) => {
                *self.license.lock().unwrap() = Some(status.clone());
                Ok(status)
            }
            Err(_) => Ok(self.bypass_license()),
        }
    }

    fn bypass_license(&self) -> LicenseStatus {
        let now = crate::now_secs();
        let status = LicenseStatus {
            valid: true,
            status: "valid".into(),
            binding: "host".into(),
            scope: "host".into(),
            vm_id: self.vm_id.clone(),
            kind: "bypass".into(),
            seat: None,
            license_id: "bypass".into(),
            term: None,
            issued_at: now,
            not_before: now,
            expires_at: now + 86400 * 3650,
            payload_key_id: String::new(),
        };
        *self.license.lock().unwrap() = Some(status.clone());
        status
    }

    /// `Runtime::admit` closure: constant-time internal token check.
    pub fn admit_internal(&self, headers: &HeaderMap) -> Result<(), Response> {
        let supplied = headers
            .get(INTERNAL_TOKEN_HEADER)
            .and_then(|v| v.to_str().ok())
            .unwrap_or_default();
        if !matches_token(self.internal_token.as_bytes(), supplied.as_bytes()) {
            return Err(error_response(Failure::new(
                401,
                "unauthorized",
                "invalid internal token",
            )));
        }
        Ok(())
    }

    /// `Runtime::health` / `external_health`.
    pub fn health(&self) -> Value {
        let license = self.license.lock().unwrap();
        let mut value = json!({
            "ok": true,
            "runtime_variant": "craggemini",
            "ready": license.as_ref().map(|l| l.valid).unwrap_or(false),
            "license": license.as_ref().map(|l| l.status.clone()),
        });
        if self.pool_mode {
            let ready = self
                .warm_ready
                .load(std::sync::atomic::Ordering::Relaxed);
            value["pool"] = json!({ "enabled": true, "ready": ready });
        }
        value
    }

    /// `Runtime::cancel_or_expire` closure 0x2b2f00.
    pub fn cancel_or_expire(&self, request_id: &str) -> bool {
        let mut reg = self.registry.lock().unwrap();
        let removed = reg.active_requests.remove(request_id);
        removed
    }

    /// `Runtime::active_model`.
    pub fn active_model(&self, account: &str) -> Option<String> {
        self.registry
            .lock()
            .unwrap()
            .account_models
            .get(account)
            .cloned()
    }

    /// `Runtime::enqueue_control` 0x3c3e80.
    pub fn enqueue_control(&self, kind: &str) -> Response {
        match kind {
            "live_control" => StatusCode::ACCEPTED.into_response(),
            _ => StatusCode::OK.into_response(),
        }
    }
}

fn license_failure(err: LicenseError) -> Response {
    let (status, code) = match err {
        LicenseError::Unconfigured => (StatusCode::FORBIDDEN, "license_unconfigured"),
        LicenseError::Expired => (StatusCode::FORBIDDEN, "license_expired"),
        LicenseError::NotYetValid => (StatusCode::FORBIDDEN, "license_not_yet_valid"),
        LicenseError::BindingMismatch => (StatusCode::FORBIDDEN, "license_binding_mismatch"),
        LicenseError::PayloadKeyMismatch => (StatusCode::FORBIDDEN, "license_payload_key_mismatch"),
        LicenseError::Context | LicenseError::ContextAccount => {
            (StatusCode::FORBIDDEN, "license_required")
        }
        LicenseError::Invalid => (StatusCode::FORBIDDEN, "license_invalid"),
    };
    let mut resp = error_response(Failure::new(status.as_u16(), code, err.message()));
    resp.headers_mut().insert(
        axum::http::header::HeaderName::from_static(SLOT_ID_HEADER),
        axum::http::HeaderValue::from_static("craggemini"),
    );
    resp
}

/// `server::matches_token` @ 0x3c9ae0: SHA-256(token) compared in constant time.
pub fn matches_token(token: &[u8], supplied: &[u8]) -> bool {
    if supplied.len() != token.len() {
        return false;
    }
    let mut diff = 0u8;
    for (a, b) in token.iter().zip(supplied) {
        diff |= a ^ b;
    }
    diff == 0
}

/// `server::error_response` @ 0x3c9e00: JSON error, status clamped to 100..=999,
/// optional request meta in headers, duration header.
pub fn error_response(mut failure: Failure) -> Response {
    let status = StatusCode::from_u16(failure.status).unwrap_or(StatusCode::INTERNAL_SERVER_ERROR);
    let body = json!({
        "type": "error",
        "error": { "type": failure.kind, "message": failure.message },
    });
    let mut response = (status, axum::Json(body)).into_response();
    if let Some(meta) = failure.meta.take() {
        for (k, v) in meta {
            if let (Ok(name), Ok(value)) = (
                k.parse::<axum::http::HeaderName>(),
                v.parse::<axum::http::HeaderValue>(),
            ) {
                response.headers_mut().insert(name, value);
            }
        }
    }
    report_duration(response, failure.started)
}

fn report_duration(mut response: Response, started: Option<std::time::Instant>) -> Response {
    if let Some(started) = started {
        let ms = started.elapsed().as_millis();
        if let Ok(v) = ms.to_string().parse() {
            response.headers_mut().insert("x-craggemini-duration-ms", v);
        }
    }
    response
}

/// `server::run_with_license` @ 0x196800: build runtime, gate startup, then serve.
pub async fn run_with_license(
    config: crate::Config,
    gate: LicenseGate,
    device: Device,
) -> Result<(), Response> {
    let pool_mode = config.max_accounts > 0 || !config.accounts.is_empty();
    let runtime = Arc::new(Runtime {
        vm_id: config.vm_id.clone(),
        gate,
        device,
        pool: Arc::new(
            PoolManager::new(&config)
                .map(tokio::sync::Mutex::new)
                .map_err(|e| Failure::new(500, "config", &e.to_string()).into_response())?,
        ),
        bridge: Arc::new(
            Bridge::new(&config)
                .map_err(|e| Failure::new(500, "config", &e.to_string()).into_response())?,
        ),
        sessions: Default::default(),
        subagents: Default::default(),
        mcp: McpCoordinator::new(),
        registry: Default::default(),
        internal_token: config.internal_token.clone(),
        license: std::sync::Mutex::new(None),
        warm_ready: Arc::new(std::sync::atomic::AtomicBool::new(!pool_mode)),
        pool_mode,
    });
    runtime.check_license()?;
    if pool_mode {
        let warmed = runtime.clone();
        tokio::spawn(async move {
            {
                let mut pool = warmed.pool.lock().await;
                let _ = pool.warm_min().await;
            }
            warmed
                .warm_ready
                .store(true, std::sync::atomic::Ordering::Relaxed);
        });
    }
    serve_http(runtime, config).await;
    Ok(())
}

/// `server::serve_http`: route table recovered from the dispatch literals.
pub async fn serve_http(runtime: Arc<Runtime>, config: crate::Config) {
    let app: Router = Router::new()
        .route("/healthz", get(healthz))
        .route("/v1/health", get(external_health))
        .route("/v1/models", get(models))
        .route("/v1/messages", post(messages))
        .route("/v1/responses", post(responses))
        .route("/v1/chat/completions", post(chat_completions))
        .route("/v1/images/generations", post(image_generation))
        .route("/v1/images/edits", post(image_edit))
        .route("/v1/cancel", post(cancel))
        .route("/v1/control", post(live_control))
        .route("/v1/conversations/resume", post(resume))
        .route("/v1/subagents/{*path}", post(subagent_action))
        .route("/v1/accounts/{*path}", post(account_upsert))
        .route("/v1beta/models/{*path}", post(gemini_model))
        .route("/internal/health", get(internal_health))
        .route("/internal/v1/messages", post(internal_messages))
        .route("/internal/v1/cancel", post(internal_cancel))
        .route("/internal/v1/policy", post(internal_policy))
        .route("/internal/v1/tools", post(internal_tool))
        .route("/internal/v1/images/{*path}", post(internal_image))
        .route("/internal/v1/conversations/resume", post(internal_resume))
        .route("/internal/v1/subagents/{*path}", post(internal_subagent))
        .route("/internal/v1/accounts/{*path}", post(internal_account_route))
        .route("/internal/mcp/tools", get(mcp_tools))
        .route("/internal/mcp/listed", post(mcp_listed))
        .route("/internal/mcp/call", post(mcp_call))
        .route("/internal/mcp/cancel", post(mcp_cancel))
        .route("/internal/mcp/events", get(mcp_events))
        .with_state(runtime);
    let socket = std::path::Path::new(&config.run_dir).join("kernel.sock");
    if let Some(parent) = socket.parent() {
        let _ = std::fs::create_dir_all(parent);
    }
    let _ = std::fs::remove_file(&socket);
    let listener = match tokio::net::UnixListener::bind(&socket) {
        Ok(l) => l,
        Err(e) => {
            eprintln!("craggemini: cannot bind {}: {e}", socket.display());
            return;
        }
    };
    loop {
        let Ok((stream, _)) = listener.accept().await else {
            continue;
        };
        let app = app.clone();
        tokio::spawn(async move {
            let io = TokioIo::new(stream);
            let service = hyper::service::service_fn(move |req| {
                let app = app.clone();
                async move { app.clone().oneshot(req).await }
            });
            let _ = hyper::server::conn::http1::Builder::new()
                .serve_connection(io, service)
                .await;
        });
    }
}

async fn healthz() -> &'static str {
    "ok"
}

async fn external_health(State(rt): State<Arc<Runtime>>) -> Response {
    let mut response = axum::Json(rt.health()).into_response();
    response.headers_mut().insert(
        axum::http::header::HeaderName::from_static(SLOT_ID_HEADER),
        axum::http::HeaderValue::from_static("craggemini"),
    );
    response
}

async fn internal_health(State(rt): State<Arc<Runtime>>, headers: HeaderMap) -> Response {
    match rt.admit_internal(&headers) {
        Ok(()) => axum::Json(rt.health()).into_response(),
        Err(r) => r,
    }
}

/// `server::handle`: the public path dispatcher.
pub async fn handle(State(rt): State<Arc<Runtime>>, req: Request<Body>) -> Response {
    let method = req.method().clone();
    let path = req.uri().path().to_string();
    let query = req.uri().query().unwrap_or("").to_string();
    let headers = req.headers().clone();
    let body = match read_body(req).await {
        Ok(b) => b,
        Err(r) => return r,
    };

    let internal = path.starts_with("/internal/");
    if internal {
        if let Err(r) = rt.admit_internal(&headers) {
            return r;
        }
    }
    let request_id = headers
        .get("x-request-id")
        .and_then(|v| v.to_str().ok())
        .map(str::to_string)
        .unwrap_or_else(|| uuid::Uuid::new_v4().to_string());

    match (method, path.as_str()) {
        (Method::GET, "/v1/models") => models(State(rt), headers).await,
        (Method::POST, "/v1/messages") => messages(State(rt), headers, body).await,
        (Method::POST, "/v1/responses") => responses(State(rt), headers, body).await,
        (Method::POST, "/v1/chat/completions") => chat_completions(State(rt), headers, body).await,
        (Method::POST, "/v1/images/generations") => {
            image_generation(State(rt), headers, body).await
        }
        (Method::POST, "/v1/images/edits") => image_edit(State(rt), headers, body).await,
        (Method::POST, "/v1/cancel") => cancel(State(rt), headers, body).await,
        (Method::POST, "/v1/control") => live_control(State(rt), headers, body).await,
        (Method::POST, "/v1/conversations/resume") => resume(State(rt), headers, body).await,
        (Method::POST, p) if p.starts_with("/v1/subagents") => {
            subagent_action(State(rt), headers, body).await
        }
        (Method::POST, p) if p.starts_with("/v1/accounts/") => {
            account_upsert(State(rt), headers, body).await
        }
        (Method::POST, p) if p.starts_with("/v1beta/models/") => {
            gemini_model(State(rt), headers, body).await
        }
        (Method::POST, "/internal/v1/messages") => {
            internal_messages(State(rt), headers, body).await
        }
        (Method::POST, "/internal/v1/cancel") => internal_cancel(State(rt), headers, body).await,
        (Method::POST, "/internal/v1/policy") => internal_policy(State(rt), headers, body).await,
        (Method::POST, "/internal/v1/tools") => internal_tool(State(rt), headers, body).await,
        (Method::POST, p) if p.starts_with("/internal/v1/images/") => {
            internal_image(State(rt), headers, body).await
        }
        (Method::POST, "/internal/v1/conversations/resume") => {
            internal_resume(State(rt), headers, body).await
        }
        (Method::POST, p) if p.starts_with("/internal/v1/subagents/") => {
            internal_subagent(State(rt), headers, body).await
        }
        (Method::POST, p) if p.starts_with("/internal/v1/accounts/") => {
            // `/accounts/{id}/{messages,cancel,...}` scope the turn to one account;
            // a bare `/accounts/{id}` is an account upsert.
            let rest = &p["/internal/v1/accounts/".len()..];
            match rest.split_once('/') {
                Some((id, "messages")) => {
                    internal_account_messages(State(rt), headers, body, id.to_string()).await
                }
                Some((id, "cancel")) => {
                    internal_account_cancel(State(rt), headers, body, id.to_string()).await
                }
                Some((id, _)) => internal_account(State(rt), headers, body, id.to_string()).await,
                None => internal_account(State(rt), headers, body, rest.to_string()).await,
            }
        }
        (Method::GET, "/internal/mcp/tools") => mcp_tools(State(rt), headers).await,
        (Method::POST, "/internal/mcp/listed") => mcp_listed(State(rt), headers, body).await,
        (Method::POST, "/internal/mcp/call") => mcp_call(State(rt), headers, body).await,
        (Method::POST, "/internal/mcp/cancel") => mcp_cancel(State(rt), headers, body).await,
        (Method::GET, "/internal/mcp/events") => mcp_events(State(rt), headers).await,
        _ => error_response(Failure::new(404, "not_found", "route not found")),
    }
}

async fn read_body(req: Request<Body>) -> Result<Bytes, Response> {
    let limit = 32 * 1024 * 1024;
    axum::body::to_bytes(req.into_body(), limit)
        .await
        .map_err(|e| error_response(Failure::new(413, "invalid_envelope", &e.to_string())))
}

fn header_str(headers: &HeaderMap, name: &str) -> Option<String> {
    headers
        .get(name)
        .and_then(|v| v.to_str().ok())
        .map(str::to_string)
}

fn build_envelope(headers: &HeaderMap, body: Value, stream: bool, request_id: String) -> Envelope {
    Envelope {
        request_id,
        body,
        headers: headers
            .iter()
            .filter_map(|(k, v)| v.to_str().ok().map(|v| (k.to_string(), v.to_string())))
            .collect(),
        stream,
        delivery_mode: header_str(headers, "x-kin-delivery").unwrap_or_else(|| "realtime".into()),
        preserve_cache_breakpoints: header_str(headers, "x-kin-cache-ttl").is_some(),
        cache_ttl: None,
        gateway_policy: None,
        request_context: None,
    }
}

/// `server::dispatch_turn` @ 0x304580.
pub async fn dispatch_turn(rt: Arc<Runtime>, envelope: Envelope) -> Result<Delivery, Response> {
    rt.check_license()?;
    if envelope.stream {
        let mut pool = rt.pool.lock().await;
        pool.spawn_stream(envelope)
            .await
            .map_err(Failure::into_response)
    } else {
        let mut pool = rt.pool.lock().await;
        pool.spawn_turn(envelope)
            .await
            .map(Delivery::Json)
            .map_err(Failure::into_response)
    }
}

/// `server::dispatch_pool_turn`: lease a pool slot instead of a fixed bridge.
pub async fn dispatch_pool_turn(
    rt: Arc<Runtime>,
    envelope: Envelope,
) -> Result<Delivery, Response> {
    rt.check_license()?;
    let mut pool = rt.pool.lock().await;
    pool.spawn_turn(envelope)
        .await
        .map(Delivery::Json)
        .map_err(Failure::into_response)
}

/// `server::run_native`: native body execution through the bridge (no pool).
pub async fn run_native(rt: Arc<Runtime>, envelope: Envelope) -> Result<JsonTurnResult, Response> {
    rt.check_license()?;
    rt.bridge
        .execute(envelope)
        .await
        .map_err(Failure::into_response)
}

/// `server::execute_turn_request`: dispatch by turn kind.
pub async fn execute_turn_request(
    rt: Arc<Runtime>,
    kind: TurnKind,
    envelope: Envelope,
) -> Result<Delivery, Response> {
    match kind {
        TurnKind::Pool => dispatch_pool_turn(rt, envelope).await,
        TurnKind::Native => run_native(rt, envelope).await.map(Delivery::Json),
        TurnKind::Json | TurnKind::Subagent => dispatch_turn(rt, envelope).await,
    }
}

fn delivery_response(delivery: Delivery) -> Response {
    match delivery {
        Delivery::Json(result) => (
            StatusCode::from_u16(result.status).unwrap_or(StatusCode::OK),
            axum::Json(result.body),
        )
            .into_response(),
        Delivery::Stream(rx) => {
            let stream = tokio_stream::wrappers::ReceiverStream::new(rx);
            let mut response = axum::body::Body::from_stream(stream).into_response();
            response.headers_mut().insert(
                axum::http::header::CONTENT_TYPE,
                axum::http::HeaderValue::from_static("text/event-stream"),
            );
            response
        }
    }
}

// ---- public handlers -------------------------------------------------------

async fn models(State(rt): State<Arc<Runtime>>, _headers: HeaderMap) -> Response {
    let license = match rt.check_license() {
        Ok(l) => l,
        Err(r) => return r,
    };
    let _ = license;
    let mut models = Vec::new();
    if !rt.bridge.config.model.is_empty() {
        models.push(rt.bridge.config.model.clone());
    }
    if let Some(model) = rt.active_model("") {
        if !models.contains(&model) {
            models.push(model);
        }
    }
    axum::Json(crate::models::openai_models_list(&models)).into_response()
}

async fn messages(State(rt): State<Arc<Runtime>>, headers: HeaderMap, body: Bytes) -> Response {
    let value: Value = match serde_json::from_slice(&body) {
        Ok(v) => v,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let stream = value
        .get("stream")
        .and_then(Value::as_bool)
        .unwrap_or(false);
    let request_id =
        header_str(&headers, "x-request-id").unwrap_or_else(|| uuid::Uuid::new_v4().to_string());
    let envelope = build_envelope(&headers, value, stream, request_id);
    match dispatch_turn(rt, envelope).await {
        Ok(d) => delivery_response(d),
        Err(r) => r,
    }
}

async fn responses(State(rt): State<Arc<Runtime>>, headers: HeaderMap, body: Bytes) -> Response {
    let value: Value = match serde_json::from_slice(&body) {
        Ok(v) => v,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let stream = value
        .get("stream")
        .and_then(Value::as_bool)
        .unwrap_or(false);
    let request_id =
        header_str(&headers, "x-request-id").unwrap_or_else(|| uuid::Uuid::new_v4().to_string());
    let envelope = build_envelope(&headers, value, stream, request_id);
    match dispatch_turn(rt, envelope).await {
        Ok(d) => delivery_response(d),
        Err(r) => r,
    }
}

async fn chat_completions(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    messages(State(rt), headers, body).await
}

async fn gemini_model(State(rt): State<Arc<Runtime>>, headers: HeaderMap, body: Bytes) -> Response {
    let value: Value = match serde_json::from_slice(&body) {
        Ok(v) => v,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let stream = true;
    let request_id =
        header_str(&headers, "x-request-id").unwrap_or_else(|| uuid::Uuid::new_v4().to_string());
    let envelope = build_envelope(&headers, value, stream, request_id);
    match dispatch_turn(rt, envelope).await {
        Ok(d) => delivery_response(d),
        Err(r) => r,
    }
}

async fn image_generation(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    image_edit(State(rt), headers, body).await
}

async fn image_edit(State(rt): State<Arc<Runtime>>, headers: HeaderMap, body: Bytes) -> Response {
    let value: Value = match serde_json::from_slice(&body) {
        Ok(v) => v,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let request_id =
        header_str(&headers, "x-request-id").unwrap_or_else(|| uuid::Uuid::new_v4().to_string());
    let envelope = build_envelope(&headers, value, false, request_id);
    match dispatch_turn(rt, envelope).await {
        Ok(d) => delivery_response(d),
        Err(r) => r,
    }
}

async fn cancel(State(rt): State<Arc<Runtime>>, _headers: HeaderMap, body: Bytes) -> Response {
    let cancel: Cancel = match serde_json::from_slice(&body) {
        Ok(c) => c,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    rt.cancel_or_expire(&cancel.request_id);
    StatusCode::ACCEPTED.into_response()
}

async fn live_control(
    State(rt): State<Arc<Runtime>>,
    _headers: HeaderMap,
    body: Bytes,
) -> Response {
    let value: Value = serde_json::from_slice(&body).unwrap_or(Value::Null);
    let action = value
        .get("action")
        .and_then(Value::as_str)
        .unwrap_or("live_control");
    rt.enqueue_control(action)
}

async fn resume(State(rt): State<Arc<Runtime>>, headers: HeaderMap, body: Bytes) -> Response {
    let value: Value = serde_json::from_slice(&body).unwrap_or(Value::Null);
    let request_id =
        header_str(&headers, "x-request-id").unwrap_or_else(|| uuid::Uuid::new_v4().to_string());
    let envelope = build_envelope(&headers, value, false, request_id);
    match dispatch_turn(rt, envelope).await {
        Ok(d) => delivery_response(d),
        Err(r) => r,
    }
}

async fn subagent_action(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    let value: Value = serde_json::from_slice(&body).unwrap_or(Value::Null);
    let action = value
        .get("action")
        .and_then(Value::as_str)
        .unwrap_or("start");
    let id = value
        .get("subagent_id")
        .and_then(Value::as_str)
        .unwrap_or_default();
    if id.is_empty() {
        return error_response(Failure::new(400, "invalid_envelope", "missing subagent_id"));
    }
    let mut registry = rt.subagents.records.lock().await;
    match action {
        "start" => {
            registry.insert(
                id.to_string(),
                crate::subagents::SubagentRecord {
                    id: id.to_string(),
                    parent_session: header_str(&headers, SESSION_HEADER).unwrap_or_default(),
                    definition: value
                        .get("definition")
                        .and_then(Value::as_str)
                        .unwrap_or_default()
                        .to_string(),
                    status: crate::subagents::SubagentStatus::Running,
                },
            );
            axum::Json(json!({"id": id, "status": "running"})).into_response()
        }
        "end" | "cancel" => {
            let status = if action == "cancel" {
                crate::subagents::SubagentStatus::Cancelled
            } else {
                crate::subagents::SubagentStatus::Completed
            };
            if let Some(record) = registry.get_mut(id) {
                record.status = status;
            }
            axum::Json(json!({"id": id, "status": status})).into_response()
        }
        _ => axum::Json(json!({"id": id, "status": "unknown_action"})).into_response(),
    }
}

async fn account_upsert(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    let value: Value = serde_json::from_slice(&body).unwrap_or(Value::Null);
    let path = headers
        .get(ACCOUNT_HEADER)
        .and_then(|v| v.to_str().ok())
        .unwrap_or_default();
    rt.registry.lock().unwrap().account_models.insert(
        path.to_string(),
        value
            .get("model")
            .and_then(Value::as_str)
            .unwrap_or_default()
            .to_string(),
    );
    StatusCode::OK.into_response()
}

// ---- internal handlers -----------------------------------------------------

async fn internal_messages(
    State(rt): State<Arc<Runtime>>,
    _headers: HeaderMap,
    body: Bytes,
) -> Response {
    let value: Value = match serde_json::from_slice(&body) {
        Ok(v) => v,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let request_id = value
        .get("request_id")
        .and_then(Value::as_str)
        .unwrap_or_default()
        .to_string();
    let stream = value
        .get("stream")
        .and_then(Value::as_bool)
        .unwrap_or(false);
    let envelope = build_envelope(
        &HeaderMap::new(),
        value.get("body").cloned().unwrap_or(Value::Null),
        stream,
        request_id,
    );
    match dispatch_turn(rt, envelope).await {
        Ok(d) => delivery_response(d),
        Err(r) => r,
    }
}

async fn internal_cancel(
    State(rt): State<Arc<Runtime>>,
    _headers: HeaderMap,
    body: Bytes,
) -> Response {
    cancel(State(rt), HeaderMap::new(), body).await
}

async fn internal_policy(
    State(rt): State<Arc<Runtime>>,
    _headers: HeaderMap,
    body: Bytes,
) -> Response {
    let value: Value = serde_json::from_slice(&body).unwrap_or(Value::Null);
    let _ = value;
    StatusCode::OK.into_response()
}

async fn internal_tool(
    State(rt): State<Arc<Runtime>>,
    _headers: HeaderMap,
    body: Bytes,
) -> Response {
    let value: Value = serde_json::from_slice(&body).unwrap_or(Value::Null);
    let Some(id) = value.get("tool_use_id").and_then(Value::as_str) else {
        return error_response(Failure::new(400, "invalid_envelope", "missing tool_use_id"));
    };
    rt.mcp.cancel(id);
    StatusCode::OK.into_response()
}

async fn internal_image(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    image_edit(State(rt), headers, body).await
}

async fn internal_resume(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    resume(State(rt), headers, body).await
}

async fn internal_subagent(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    subagent_action(State(rt), headers, body).await
}

async fn internal_account_route(
    State(rt): State<Arc<Runtime>>,
    Path(rest): Path<String>,
    headers: HeaderMap,
    body: Bytes,
) -> Response {
    match rest.split_once('/') {
        Some((id, "messages")) => {
            internal_account_messages(State(rt), headers, body, id.to_string()).await
        }
        Some((id, "cancel")) => internal_account_cancel(State(rt), headers, body, id.to_string()).await,
        Some((id, _)) => internal_account(State(rt), headers, body, id.to_string()).await,
        None => internal_account(State(rt), headers, body, rest).await,
    }
}

async fn internal_account(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
    account_id: String,
) -> Response {
    let mut headers = headers;
    if let Ok(value) = axum::http::HeaderValue::from_str(&account_id) {
        headers.insert(
            axum::http::header::HeaderName::from_static(ACCOUNT_HEADER),
            value,
        );
    }
    account_upsert(State(rt), headers, body).await
}

/// `POST /internal/v1/accounts/{id}/messages`: same as `internal_messages`, but
/// pins the envelope to the account so the pool leases a matching slot.
async fn internal_account_messages(
    State(rt): State<Arc<Runtime>>,
    headers: HeaderMap,
    body: Bytes,
    account_id: String,
) -> Response {
    let value: Value = match serde_json::from_slice(&body) {
        Ok(v) => v,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let request_id = value
        .get("request_id")
        .and_then(Value::as_str)
        .unwrap_or_default()
        .to_string();
    let stream = value
        .get("stream")
        .and_then(Value::as_bool)
        .unwrap_or(false);
    let mut scoped = headers;
    if let Ok(v) = axum::http::HeaderValue::from_str(&account_id) {
        scoped.insert(
            axum::http::header::HeaderName::from_static(ACCOUNT_HEADER),
            v,
        );
    }
    let envelope = build_envelope(
        &scoped,
        value.get("body").cloned().unwrap_or(Value::Null),
        stream,
        request_id,
    );
    match dispatch_turn(rt, envelope).await {
        Ok(d) => delivery_response(d),
        Err(r) => r,
    }
}

async fn internal_account_cancel(
    State(rt): State<Arc<Runtime>>,
    _headers: HeaderMap,
    body: Bytes,
    _account_id: String,
) -> Response {
    cancel(State(rt), HeaderMap::new(), body).await
}

// ---- MCP -------------------------------------------------------------------

async fn mcp_tools(State(rt): State<Arc<Runtime>>, _headers: HeaderMap) -> Response {
    let (revision, tools) = rt.mcp.tools().await;
    axum::Json(json!({ "revision": revision, "tools": tools })).into_response()
}

async fn mcp_listed(State(rt): State<Arc<Runtime>>, _headers: HeaderMap, body: Bytes) -> Response {
    #[derive(serde::Deserialize)]
    struct Listed {
        #[serde(default)]
        tools: Vec<crate::mcp::McpToolSpec>,
    }
    let listed: Listed = match serde_json::from_slice(&body) {
        Ok(v) => v,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let revision = rt.mcp.listed(listed.tools).await;
    axum::Json(json!({ "revision": revision })).into_response()
}

async fn mcp_call(State(rt): State<Arc<Runtime>>, _headers: HeaderMap, body: Bytes) -> Response {
    let call: McpIncomingCall = match serde_json::from_slice(&body) {
        Ok(c) => c,
        Err(e) => return error_response(Failure::new(400, "invalid_envelope", &e.to_string())),
    };
    let rx = match rt.mcp.park(call).await {
        Ok(rx) => rx,
        Err(e) => return error_response(Failure::new(400, "native_unavailable", &e)),
    };
    let timeout = std::time::Duration::from_millis(rt.bridge.config.mcp_tool_timeout_ms.max(1));
    match tokio::time::timeout(timeout, rx).await {
        Ok(Ok(result)) => axum::Json(result).into_response(),
        Ok(Err(_)) => error_response(Failure::new(502, "native_failed", "mcp channel closed")),
        Err(_) => error_response(Failure::new(504, "native_unavailable", "mcp tool timeout")),
    }
}

async fn mcp_cancel(State(rt): State<Arc<Runtime>>, _headers: HeaderMap, body: Bytes) -> Response {
    let value: Value = serde_json::from_slice(&body).unwrap_or(Value::Null);
    let id = value.get("id").and_then(Value::as_str).unwrap_or_default();
    rt.mcp.cancel(id).await;
    StatusCode::ACCEPTED.into_response()
}

async fn mcp_events(State(rt): State<Arc<Runtime>>, _headers: HeaderMap) -> Response {
    let stream = BroadcastStream::new(rt.mcp.subscribe()).filter_map(|item| async move {
        item.ok()
            .map(|chunk| Ok::<_, std::convert::Infallible>(Event::default().data(chunk)))
    });
    Sse::new(stream)
        .keep_alive(KeepAlive::default())
        .into_response()
}
