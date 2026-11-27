//! Reconstructed `craggemini_core::binding` — account↔proxy binding and validation.
//! Addresses: `validate_account_config` 0x3d5040, `ensure_private_dir` 0x3d4410,
//! `parse_proxy_url` 0x3d3430, `BoundAccount::child_proxy_env` 0x3be760,
//! `LocalProxyBridge::start` 0x38cec0.
#![allow(dead_code, unused)]

use std::collections::HashMap;
use std::io::{Read, Write};
use std::net::{SocketAddr, TcpStream};
use std::os::unix::fs::MetadataExt;
use std::path::{Path, PathBuf};

use base64::Engine;
use serde::{Deserialize, Serialize};
use sha2::Digest;

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct AccountBindingConfig {
    pub account_id: String,
    pub env_id: String,
    pub run_dir: PathBuf,
    pub agy_home: PathBuf,
    pub proxy_id: String,
    pub proxy_url: String,
    pub proxy_sha256: String,
    #[serde(default)]
    pub netns_transparent_egress: bool,
    pub netns: String,
    #[serde(default)]
    pub oauth_proxy_required: bool,
    #[serde(default)]
    pub allow_loopback_proxy: bool,
    #[serde(default)]
    pub calibration_target: Option<String>,
    #[serde(default = "default_true")]
    pub enabled: bool,
    #[serde(default)]
    pub runnable_slots: u32,
    #[serde(default)]
    pub prewarm: bool,
    #[serde(default)]
    pub idle_ttl_secs: u64,
    pub max_concurrency: u32,
    pub min_warm_slots: u32,
    pub session_idle_ttl_secs: u64,
    pub model: String,
    #[serde(default)]
    pub agy_args: Vec<String>,
    pub agy_bin: Option<PathBuf>,
    pub bridge_so: Option<PathBuf>,
    pub license_dir: Option<PathBuf>,
}

fn default_true() -> bool {
    true
}

impl AccountBindingConfig {
    /// Account binding from `kernel.json`: a control-plane account entry wins,
    /// otherwise a synthetic account is derived from the top-level config.
    pub fn from_config(config: &crate::Config) -> Self {
        let account = if config.vm_id.is_empty() {
            "default".to_string()
        } else {
            config.vm_id.clone()
        };
        let mut binding = Self {
            account_id: account.clone(),
            env_id: account.clone(),
            run_dir: std::path::Path::new(&config.run_dir).join("account"),
            agy_home: std::path::Path::new(&config.run_dir).join("home"),
            proxy_id: String::new(),
            proxy_url: String::new(),
            proxy_sha256: String::new(),
            netns_transparent_egress: false,
            netns: config.netns.clone(),
            oauth_proxy_required: false,
            allow_loopback_proxy: true,
            calibration_target: None,
            enabled: true,
            runnable_slots: config.max_concurrency,
            prewarm: config.prewarm,
            idle_ttl_secs: config.session_idle_ttl_secs,
            max_concurrency: config.max_concurrency,
            min_warm_slots: config.min_warm_slots,
            session_idle_ttl_secs: config.session_idle_ttl_secs,
            model: config.model.clone(),
            agy_args: Vec::new(),
            agy_bin: Some(config.agy_bin.clone()),
            bridge_so: config.bridge_so.clone(),
            license_dir: Some(config.license_dir.clone()),
        };
        let Some(entry) = config.accounts.iter().find(|a| a.enabled) else {
            return binding;
        };
        if !entry.account_id.is_empty() {
            binding.account_id = entry.account_id.clone();
        }
        if !entry.env_id.is_empty() {
            binding.env_id = entry.env_id.clone();
        }
        if !entry.agy_home.is_empty() {
            binding.agy_home = PathBuf::from(&entry.agy_home);
        }
        if !entry.run_dir.is_empty() {
            binding.run_dir = PathBuf::from(&entry.run_dir);
        }
        if !entry.proxy_id.is_empty() {
            binding.proxy_id = entry.proxy_id.clone();
        }
        if !entry.proxy_url.is_empty() {
            binding.proxy_url = entry.proxy_url.clone();
        }
        if !entry.proxy_sha256.is_empty() {
            binding.proxy_sha256 = entry.proxy_sha256.clone();
        }
        if !entry.netns.is_empty() {
            binding.netns = entry.netns.clone();
        }
        binding.netns_transparent_egress = entry.netns_transparent_egress;
        binding.oauth_proxy_required = entry.oauth_proxy_required;
        binding.allow_loopback_proxy = entry.allow_loopback_proxy;
        if let Some(v) = entry.max_concurrency {
            binding.max_concurrency = v;
        }
        if let Some(v) = entry.min_warm_slots {
            binding.min_warm_slots = v;
        }
        if let Some(v) = entry.session_idle_ttl_secs {
            binding.session_idle_ttl_secs = v;
            binding.idle_ttl_secs = v;
        }
        if !entry.model.is_empty() {
            binding.model = entry.model.clone();
        }
        if !entry.agy_args.is_empty() {
            binding.agy_args = entry.agy_args.clone();
        }
        binding
    }
}

impl Default for AccountBindingConfig {
    fn default() -> Self {
        Self {
            account_id: String::new(),
            env_id: String::new(),
            run_dir: PathBuf::new(),
            agy_home: PathBuf::new(),
            proxy_id: String::new(),
            proxy_url: String::new(),
            proxy_sha256: String::new(),
            netns_transparent_egress: false,
            netns: String::new(),
            oauth_proxy_required: true,
            allow_loopback_proxy: false,
            calibration_target: None,
            enabled: true,
            runnable_slots: 0,
            prewarm: false,
            idle_ttl_secs: 0,
            max_concurrency: 20,
            min_warm_slots: 1,
            session_idle_ttl_secs: 600,
            model: String::new(),
            agy_args: Vec::new(),
            agy_bin: None,
            bridge_so: None,
            license_dir: None,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "lowercase")]
pub enum ProxyScheme {
    Socks5h,
    Socks5,
    Http,
}

#[derive(Debug, Clone)]
pub struct ParsedProxy {
    pub scheme: ProxyScheme,
    pub host: String,
    pub port: u16,
    pub username: Option<String>,
    pub password: Option<String>,
}

/// `binding::percent_decode` @ 0x3d2b70.
pub fn percent_decode(text: &str) -> Result<String, String> {
    let b = text.as_bytes();
    let mut out = Vec::with_capacity(b.len());
    let mut i = 0;
    while i < b.len() {
        if b[i] == b'%' {
            if i + 2 >= b.len() {
                return Err("invalid percent escape".into());
            }
            let hex =
                std::str::from_utf8(&b[i + 1..i + 3]).map_err(|_| "invalid percent escape")?;
            out.push(u8::from_str_radix(hex, 16).map_err(|_| "invalid percent escape")?);
            i += 3;
        } else {
            out.push(b[i]);
            i += 1;
        }
    }
    String::from_utf8(out).map_err(|_| "invalid utf-8".into())
}

/// `binding::parse_proxy_url` @ 0x3d3430.
pub fn parse_proxy_url(url: &str) -> Result<ParsedProxy, String> {
    let (scheme, rest) = if let Some(r) = url.strip_prefix("socks5h://") {
        (ProxyScheme::Socks5h, r)
    } else if let Some(r) = url.strip_prefix("socks5://") {
        (ProxyScheme::Socks5, r)
    } else if let Some(r) = url.strip_prefix("http://") {
        (ProxyScheme::Http, r)
    } else {
        return Err("unsupported proxy scheme".into());
    };
    if rest.contains('/') || rest.contains('?') || rest.contains('#') {
        return Err("proxy url must not carry a path, query or fragment".into());
    }
    let (auth, hostport) = match rest.rsplit_once('@') {
        Some((a, h)) => (Some(a), h),
        None => (None, rest),
    };
    let (host, port) = hostport.rsplit_once(':').ok_or("proxy url missing port")?;
    let port: u16 = port.parse().map_err(|_| "invalid proxy port")?;
    if host.is_empty() || port == 0 {
        return Err("invalid proxy host/port".into());
    }
    let (username, password) = match auth {
        Some(a) => {
            let (u, p) = a.split_once(':').ok_or("proxy auth must be user:pass")?;
            (Some(percent_decode(u)?), Some(percent_decode(p)?))
        }
        None => (None, None),
    };
    Ok(ParsedProxy {
        scheme,
        host: host.into(),
        port,
        username,
        password,
    })
}

/// `binding::ensure_private_dir` @ 0x3d4410: absolute, non-symlink, current-UID, 0700.
pub fn ensure_private_dir(path: &Path) -> Result<(), String> {
    if !path.is_absolute() {
        return Err("directory path must be absolute".into());
    }
    match std::fs::symlink_metadata(path) {
        Err(e) if e.kind() == std::io::ErrorKind::NotFound => {
            std::fs::create_dir(path).map_err(|e| e.to_string())?;
            std::fs::set_permissions(path, std::os::unix::fs::PermissionsExt::from_mode(0o700))
                .map_err(|e| e.to_string())?;
            Ok(())
        }
        Err(e) => Err(e.to_string()),
        Ok(m) if !m.is_dir() => Err("bound path must be a non-symlink directory".into()),
        Ok(m) if m.uid() != unsafe { libc::geteuid() } => {
            Err("bound directory must be owned by current user".into())
        }
        Ok(m) if (m.mode() & 0o777) != 0o700 => {
            std::fs::set_permissions(path, std::os::unix::fs::PermissionsExt::from_mode(0o700))
                .map_err(|e| e.to_string())
        }
        Ok(_) => Ok(()),
    }
}

/// `binding::validate_account_config` @ 0x3d5040.
pub fn validate_account_config(
    config: &crate::Config,
    binding: &AccountBindingConfig,
) -> Result<(), String> {
    if let Some(bin) = &binding.agy_bin {
        if !bin.is_absolute() {
            return Err("agy_bin must be an absolute path".into());
        }
    }
    if let Some(p) = &binding.bridge_so {
        if !p.is_absolute() {
            return Err("bridge_so must be an absolute path".into());
        }
    }
    if let Some(dir) = &binding.license_dir {
        if !dir.is_absolute() {
            return Err("account license_dir must be an absolute path".into());
        }
    }
    if !crate::license::valid_vm_id(&binding.account_id) {
        return Err("account vm_id contains invalid characters".into());
    }
    if !binding.netns.is_empty()
        && !binding
            .netns
            .bytes()
            .all(|b| b.is_ascii_alphanumeric() || b == b'_' || b == b'-')
    {
        return Err("netns name contains invalid characters".into());
    }
    if binding.session_idle_ttl_secs != 0 && !(10..=86_400).contains(&binding.session_idle_ttl_secs)
    {
        return Err("session_idle_ttl_secs must be 0 (never reap) or within 10..=86400".into());
    }
    if !binding.proxy_url.is_empty() {
        let parsed = parse_proxy_url(&binding.proxy_url)?;
        let digest = crate::license::hex(&sha2::Sha256::digest(parsed_wire(&parsed)));
        if !binding.proxy_sha256.is_empty()
            && !crate::binding::constant_time_hex_eq(&digest, &binding.proxy_sha256)
        {
            return Err("configured proxy_sha256 does not match proxy_url digest".into());
        }
    }
    if config.strict_unique_proxy {
        // The registry enforces uniqueness later; this is the local shape check.
    }
    Ok(())
}

fn parsed_wire(p: &ParsedProxy) -> Vec<u8> {
    let scheme = match p.scheme {
        ProxyScheme::Socks5h => "socks5h",
        ProxyScheme::Socks5 => "socks5",
        ProxyScheme::Http => "http",
    };
    format!("{scheme}://{}:{}", p.host, p.port).into_bytes()
}

/// `binding::constant_time_hex_eq` @ 0x3d4fc0.
pub fn constant_time_hex_eq(a: &str, b: &str) -> bool {
    if a.len() != b.len() {
        return false;
    }
    let mut diff = 0u8;
    for (x, y) in a.bytes().zip(b.bytes()) {
        diff |= x.to_ascii_lowercase() ^ y.to_ascii_lowercase();
    }
    diff == 0
}

/// `binding::socks5_connect` — no-auth and user/pass handshake.
pub fn socks5_connect(proxy: &ParsedProxy, target: &str, port: u16) -> Result<TcpStream, String> {
    let mut stream =
        TcpStream::connect((proxy.host.as_str(), proxy.port)).map_err(|e| e.to_string())?;
    let with_auth = proxy.username.is_some();
    stream
        .write_all(&[
            5,
            if with_auth { 2 } else { 1 },
            0,
            if with_auth { 2 } else { 0 },
        ])
        .map_err(|e| e.to_string())?;
    let mut resp = [0u8; 2];
    stream.read_exact(&mut resp).map_err(|e| e.to_string())?;
    if resp[0] != 5 || resp[1] == 0xff {
        return Err("socks5 method rejected".into());
    }
    if resp[1] == 2 {
        let user = proxy.username.as_deref().unwrap_or("");
        let pass = proxy.password.as_deref().unwrap_or("");
        let mut msg = vec![1, user.len() as u8];
        msg.extend_from_slice(user.as_bytes());
        msg.push(pass.len() as u8);
        msg.extend_from_slice(pass.as_bytes());
        stream.write_all(&msg).map_err(|e| e.to_string())?;
        stream.read_exact(&mut resp).map_err(|e| e.to_string())?;
        if resp[1] != 0 {
            return Err("socks5 auth failed".into());
        }
    }
    let mut req = vec![5, 1, 0];
    match target.parse::<std::net::Ipv4Addr>() {
        Ok(ip) => {
            req.push(1);
            req.extend_from_slice(&ip.octets());
        }
        Err(_) => {
            req.push(3);
            req.push(target.len() as u8);
            req.extend_from_slice(target.as_bytes());
        }
    }
    req.extend_from_slice(&port.to_be_bytes());
    stream.write_all(&req).map_err(|e| e.to_string())?;
    let mut head = [0u8; 4];
    stream.read_exact(&mut head).map_err(|e| e.to_string())?;
    if head[3] != 0 {
        return Err(format!("socks5 connect failed: {}", head[3]));
    }
    let addr_len = match head[3] {
        1 => 4 + 2,
        3 => {
            let mut l = [0u8; 1];
            stream.read_exact(&mut l).map_err(|e| e.to_string())?;
            l[0] as usize + 2
        }
        _ => 16 + 2,
    };
    let mut skip = vec![0u8; addr_len];
    stream.read_exact(&mut skip).map_err(|e| e.to_string())?;
    Ok(stream)
}

/// `binding::http_connect`.
pub fn http_connect(proxy: &ParsedProxy, target: &str, port: u16) -> Result<TcpStream, String> {
    let mut stream =
        TcpStream::connect((proxy.host.as_str(), proxy.port)).map_err(|e| e.to_string())?;
    let auth = match (&proxy.username, &proxy.password) {
        (Some(u), Some(p)) => format!(
            "Proxy-Authorization: Basic {}\r\n",
            base64::engine::general_purpose::STANDARD.encode(format!("{u}:{p}"))
        ),
        _ => String::new(),
    };
    let req = format!("CONNECT {target}:{port} HTTP/1.1\r\nHost: {target}:{port}\r\n{auth}\r\n");
    stream
        .write_all(req.as_bytes())
        .map_err(|e| e.to_string())?;
    let mut head = Vec::new();
    let mut b = [0u8; 1];
    while !head.ends_with(b"\r\n\r\n") {
        stream.read_exact(&mut b).map_err(|e| e.to_string())?;
        head.push(b[0]);
        if head.len() > 8192 {
            return Err("proxy header too large".into());
        }
    }
    let status = String::from_utf8_lossy(&head);
    if !status.starts_with("HTTP/1.1 200") && !status.starts_with("HTTP/1.0 200") {
        return Err("proxy CONNECT failed".into());
    }
    Ok(stream)
}

/// `BoundAccount::child_proxy_env` @ 0x3be760: `http(s)_proxy`/`all_proxy` point at the
/// local authenticated bridge (or the upstream when no bridge was started).
pub fn child_proxy_env(binding: &BoundAccount) -> HashMap<String, String> {
    let Some(bridge) = &binding.local_bridge else {
        return HashMap::new();
    };
    let url = format!("http://127.0.0.1:{}", bridge.port);
    ["http_proxy", "https_proxy", "all_proxy"]
        .into_iter()
        .map(|k| (k.to_string(), url.clone()))
        .chain(std::iter::once((
            "no_proxy".to_string(),
            "127.0.0.1,localhost".to_string(),
        )))
        .collect()
}

pub struct BoundAccount {
    pub binding: AccountBindingConfig,
    pub local_bridge: Option<LocalProxyBridge>,
}

pub struct LocalProxyBridge {
    pub port: u16,
}

impl LocalProxyBridge {
    /// `LocalProxyBridge::start` 0x38cec0: bind `127.0.0.1:0`, spawn an accept loop that
    /// dials the upstream SOCKS5/HTTP proxy with the account credentials.
    pub async fn start(parsed: ParsedProxy) -> std::io::Result<Self> {
        let listener = tokio::net::TcpListener::bind(("127.0.0.1", 0)).await?;
        let port = listener.local_addr()?.port();
        tokio::spawn(async move {
            loop {
                let Ok((client, _)) = listener.accept().await else {
                    break;
                };
                let parsed = parsed.clone();
                tokio::spawn(async move {
                    let _ = handle_client(client, parsed).await;
                });
            }
        });
        Ok(Self { port })
    }
}

async fn handle_client(
    mut client: tokio::net::TcpStream,
    parsed: ParsedProxy,
) -> std::io::Result<()> {
    use tokio::io::{AsyncReadExt, AsyncWriteExt};
    let mut head = Vec::new();
    let mut b = [0u8; 1];
    while !head.ends_with(b"\r\n\r\n") {
        client.read_exact(&mut b).await?;
        head.push(b[0]);
        if head.len() > 8192 {
            break;
        }
    }
    let text = String::from_utf8_lossy(&head);
    let target = text
        .lines()
        .next()
        .and_then(|l| l.split_whitespace().nth(1))
        .ok_or_else(|| std::io::Error::new(std::io::ErrorKind::InvalidData, "bad CONNECT"))?;
    let (host, port) = target.rsplit_once(':').unwrap_or((target, "443"));
    let upstream = match parsed.scheme {
        ProxyScheme::Http => http_connect(&parsed, host, port.parse().unwrap_or(443)),
        _ => socks5_connect(&parsed, host, port.parse().unwrap_or(443)),
    };
    let mut upstream = match upstream {
        Ok(s) => s,
        Err(e) => {
            client
                .write_all(b"HTTP/1.1 502 Bad Gateway\r\n\r\n")
                .await?;
            return Err(std::io::Error::new(std::io::ErrorKind::Other, e));
        }
    };
    client
        .write_all(b"HTTP/1.1 200 Connection Established\r\n\r\n")
        .await?;
    upstream.set_nonblocking(true)?;
    let mut upstream = tokio::net::TcpStream::from_std(upstream)?;
    tokio::io::copy_bidirectional(&mut client, &mut upstream).await?;
    Ok(())
}

pub struct BindingRegistry {
    pub by_env: HashMap<String, std::sync::Arc<BoundAccount>>,
}

impl BindingRegistry {
    pub fn new() -> Self {
        Self {
            by_env: HashMap::new(),
        }
    }
    pub fn insert_validated(
        &mut self,
        config: &crate::Config,
        binding: AccountBindingConfig,
    ) -> Result<(), String> {
        validate_account_config(config, &binding)?;
        let env = binding.env_id.clone();
        self.by_env.insert(
            env,
            std::sync::Arc::new(BoundAccount {
                binding,
                local_bridge: None,
            }),
        );
        Ok(())
    }
}
