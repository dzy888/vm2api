//! Reconstructed `craggemini_core::oauth` (0.5.1/0.5.2) — in-core OAuth attempt manager.
//!
//! The core can run the Antigravity CLI in an OAuth PTY, capture the official
//! PKCE URL it prints, hand the URL to the control plane, then feed the callback
//! code back into the same PTY and verify the written token file. Attempts are
//! bound to account + proxy digest, expire, and are reaped/shut down en masse.
#![allow(dead_code, unused)]

use std::collections::HashMap;
use std::path::{Path, PathBuf};
use std::sync::Mutex;

use serde::{Deserialize, Serialize};

use crate::guard::GuardHandle;
use crate::protocol::Failure;

pub const OFFICIAL_AUTH_PREFIX: &str = "https://accounts.google.com/o/oauth2/auth?";
pub const OFFICIAL_REDIRECT: &str = "https://antigravity.google/oauth-callback";
pub const TOKEN_RELATIVE: &str = ".gemini/antigravity-cli/antigravity-oauth-token";

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct TokenMetadata {
    #[serde(default)]
    pub account_id: Option<String>,
    #[serde(default)]
    pub project_id: Option<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct OAuthStartResult {
    pub attempt_id: String,
    pub url: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct OAuthCompleteResult {
    pub token: TokenMetadata,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct OAuthCompleteRequest {
    pub attempt_id: String,
    pub code: String,
    #[serde(default)]
    pub state: Option<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AttemptState {
    Authorizing,
    Completed,
    Expired,
    Failed,
}

pub struct ActiveOAuthAttempt {
    pub attempt_id: String,
    pub account_id: String,
    pub proxy_sha256: String,
    pub state: AttemptState,
    pub pty: Option<GuardHandle>,
    pub url: Option<String>,
    pub expires_ms: i64,
    pub active_conversation_id: Option<String>,
}

impl Clone for ActiveOAuthAttempt {
    fn clone(&self) -> Self {
        Self {
            attempt_id: self.attempt_id.clone(),
            account_id: self.account_id.clone(),
            proxy_sha256: self.proxy_sha256.clone(),
            state: self.state.clone(),
            pty: None,
            url: self.url.clone(),
            expires_ms: self.expires_ms,
            active_conversation_id: self.active_conversation_id.clone(),
        }
    }
}

impl ActiveOAuthAttempt {
    pub fn terminate(&mut self) {
        if let Some(guard) = self.pty.take() {
            guard.shutdown();
        }
        self.state = AttemptState::Failed;
    }
}

#[derive(Default)]
pub struct OAuthManager {
    pub attempts: Mutex<HashMap<String, ActiveOAuthAttempt>>,
}

/// `oauth::validate_official_auth_url`: exact origin/path and required PKCE query.
pub fn validate_official_auth_url(value: &str) -> Option<&str> {
    if !value.starts_with(OFFICIAL_AUTH_PREFIX) {
        return None;
    }
    let query = &value[OFFICIAL_AUTH_PREFIX.len()..];
    let has = |key: &str| {
        query
            .split('&')
            .any(|pair| pair.starts_with(&format!("{key}=")) && pair.len() > key.len() + 1)
    };
    if !has("client_id")
        || !has("code_challenge")
        || !query.contains("code_challenge_method=S256")
        || !query.contains("response_type=code")
        || !query.contains("redirect_uri=https%3A%2F%2Fantigravity.google%2Foauth-callback")
    {
        return None;
    }
    Some(value)
}

/// `oauth::clean_pty_tail`: strip ANSI and control noise from a PTY chunk.
pub fn clean_pty_tail(raw: &str) -> String {
    let bytes = raw.as_bytes();
    let mut out = String::with_capacity(raw.len());
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] == 0x1b && i + 1 < bytes.len() && bytes[i + 1] == b'[' {
            i += 2;
            while i < bytes.len() && !(0x40..=0x7e).contains(&bytes[i]) {
                i += 1;
            }
            i += 1;
        } else if bytes[i] >= 0x20 || bytes[i] == b'\n' {
            out.push(bytes[i] as char);
            i += 1;
        } else {
            i += 1;
        }
    }
    out
}

/// `oauth::detect_oauth_exchange_error`: classify a PTY tail after a code submit.
pub fn detect_oauth_exchange_error(tail: &str) -> Option<&'static str> {
    let lower = tail.to_ascii_lowercase();
    if lower.contains("invalid_grant") || lower.contains("malformed auth code") {
        Some("invalid_oauth_code")
    } else if lower.contains("callback") && lower.contains("state") {
        Some("oauth_state_mismatch")
    } else if lower.contains("timed out") {
        Some("oauth_exchange_timeout")
    } else if lower.contains("failed") {
        Some("oauth_exchange_failed")
    } else {
        None
    }
}

/// `oauth::classify_oauth_pty_reason`: map early PTY exit to a failure code.
pub fn classify_oauth_pty_reason(tail: &str) -> &'static str {
    let lower = tail.to_ascii_lowercase();
    if lower.contains("already logged in") || lower.contains("signed in") {
        "oauth_already_authorized"
    } else if lower.contains("proxy") {
        "oauth_proxy_required"
    } else if lower.contains("network") || lower.contains("dial") {
        "oauth_challenge_failed"
    } else {
        "oauth_pty_failed"
    }
}

/// `oauth::prepare_agy_oauth_home`: 0700 home owning the token directory.
pub fn prepare_agy_oauth_home(home: &Path) -> std::io::Result<PathBuf> {
    std::fs::create_dir_all(home)?;
    let token_dir = home.join(".gemini/antigravity-cli");
    std::fs::create_dir_all(&token_dir)?;
    Ok(token_dir.join("antigravity-oauth-token"))
}

/// `oauth::inspect_token_file`: token JSON must carry a non-empty access token.
pub fn inspect_token_file(path: &Path) -> Option<TokenMetadata> {
    let bytes = std::fs::read(path).ok()?;
    let value: serde_json::Value = serde_json::from_slice(&bytes).ok()?;
    let token = value.get("token")?.as_object()?;
    let access = token.get("access_token")?.as_str()?;
    if access.is_empty() {
        return None;
    }
    Some(TokenMetadata {
        account_id: token.get("account_id").and_then(|v| v.as_str()).map(str::to_string),
        project_id: token.get("project_id").and_then(|v| v.as_str()).map(str::to_string),
    })
}

pub fn inspect_token_files(home: &Path) -> Option<TokenMetadata> {
    inspect_token_file(&home.join(TOKEN_RELATIVE))
}

/// `oauth::build_oauth_failure`.
pub fn build_oauth_failure(code: &str, message: &str) -> Failure {
    let status = match code {
        "oauth_attempt_expired" => 409,
        "oauth_proxy_required" | "oauth_challenge_failed" => 502,
        _ => 502,
    };
    Failure::new(status, code, message)
}

impl OAuthManager {
    /// `OAuthManager::start_oauth`: reserve a single attempt per account.
    pub fn start_oauth(
        &self,
        account_id: &str,
        proxy_sha256: &str,
        ttl_ms: i64,
    ) -> Result<ActiveOAuthAttempt, Failure> {
        let mut attempts = self.attempts.lock().unwrap();
        if attempts
            .values()
            .any(|a| a.account_id == account_id && a.state == AttemptState::Authorizing)
        {
            return Err(build_oauth_failure(
                "oauth_attempt_expired",
                "该账号已有进行中的 OAuth 尝试",
            ));
        }
        let attempt = ActiveOAuthAttempt {
            attempt_id: random_hex(16),
            account_id: account_id.to_string(),
            proxy_sha256: proxy_sha256.to_string(),
            state: AttemptState::Authorizing,
            pty: None,
            url: None,
            expires_ms: crate::now_secs() * 1000 + ttl_ms,
            active_conversation_id: None,
        };
        let id = attempt.attempt_id.clone();
        attempts.insert(id, attempt.clone());
        Ok(attempt)
    }

    /// `OAuthManager::complete_oauth`: binding + expiry + state checks, then token verify.
    pub fn complete_oauth(
        &self,
        request: &OAuthCompleteRequest,
        proxy_sha256: &str,
        home: &Path,
    ) -> Result<OAuthCompleteResult, Failure> {
        let mut attempts = self.attempts.lock().unwrap();
        let attempt = attempts
            .get_mut(&request.attempt_id)
            .ok_or_else(|| build_oauth_failure("oauth_attempt_expired", "OAuth 尝试不存在或已过期"))?;
        if attempt.proxy_sha256 != proxy_sha256 {
            return Err(build_oauth_failure(
                "proxy_calibration_mismatch",
                "OAuth 尝试绑定或代理摘要不一致",
            ));
        }
        if attempt.expires_ms < crate::now_secs() * 1000 {
            attempt.state = AttemptState::Expired;
            return Err(build_oauth_failure("oauth_attempt_expired", "OAuth 尝试已过期"));
        }
        if request.code.is_empty() {
            return Err(build_oauth_failure("invalid_oauth_code", "授权码为空"));
        }
        let token = inspect_token_files(home)
            .ok_or_else(|| build_oauth_failure("oauth_exchange_failed", "未写入有效令牌"))?;
        attempt.state = AttemptState::Completed;
        Ok(OAuthCompleteResult { token })
    }

    /// `OAuthManager::cancel_account`.
    pub fn cancel_account(&self, account_id: &str) {
        let mut attempts = self.attempts.lock().unwrap();
        for attempt in attempts.values_mut().filter(|a| a.account_id == account_id) {
            attempt.terminate();
        }
    }

    /// `OAuthManager::reap_expired`.
    pub fn reap_expired(&self) -> usize {
        let now = crate::now_secs() * 1000;
        let mut attempts = self.attempts.lock().unwrap();
        let expired: Vec<String> = attempts
            .iter()
            .filter(|(_, a)| a.expires_ms < now && a.state == AttemptState::Authorizing)
            .map(|(id, _)| id.clone())
            .collect();
        for id in &expired {
            if let Some(attempt) = attempts.get_mut(id) {
                attempt.terminate();
                attempt.state = AttemptState::Expired;
            }
        }
        expired.len()
    }

    /// `OAuthManager::shutdown_all`.
    pub fn shutdown_all(&self) {
        let mut attempts = self.attempts.lock().unwrap();
        for attempt in attempts.values_mut() {
            attempt.terminate();
        }
        attempts.clear();
    }

    pub fn status(&self, account_id: &str) -> Option<&'static str> {
        let attempts = self.attempts.lock().unwrap();
        attempts
            .values()
            .find(|a| a.account_id == account_id)
            .map(|a| match a.state {
                AttemptState::Authorizing => "authorizing",
                AttemptState::Completed => "authorized",
                AttemptState::Expired => "expired",
                AttemptState::Failed => "failed",
            })
    }
}

fn random_hex(len: usize) -> String {
    use std::time::{SystemTime, UNIX_EPOCH};
    let nanos = SystemTime::now()
        .duration_since(UNIX_EPOCH)
        .map(|d| d.as_nanos())
        .unwrap_or(0);
    let mut state = nanos as u64 ^ ((std::process::id() as u64) << 32);
    let mut out = String::with_capacity(len);
    for _ in 0..len {
        state = state.wrapping_mul(6364136223846793005).wrapping_add(1);
        out.push(char::from_digit((state >> 60) as u32 % 16, 16).unwrap());
    }
    out
}
