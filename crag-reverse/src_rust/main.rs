//! Reconstructed entry point. Mirrors the `craggemini` CLI dispatch.
use std::path::PathBuf;

use base64::engine::general_purpose::URL_SAFE_NO_PAD;
use base64::Engine;

fn main() {
    // PTY masters are opened O_ASYNC so readiness raises SIGIO; the default
    // action would terminate the worker (exit 157). The real kernel installs
    // handlers/ignores them and drives the PTY through AsyncFd instead.
    unsafe {
        libc::signal(libc::SIGIO, libc::SIG_IGN);
        libc::signal(libc::SIGPIPE, libc::SIG_IGN);
    }
    let args: Vec<String> = std::env::args().skip(1).collect();
    let mut config_path: Option<PathBuf> = None;
    let mut out_path: Option<PathBuf> = None;
    let mut license_dir = craggemini_core::license::default_license_dir();
    let mut host_license_dir = craggemini_core::license::default_host_license_dir();
    let mut vm_id = craggemini_core::license::default_vm_id();
    let mut activate_file: Option<PathBuf> = None;
    let mut mode = Mode::GatewayWorker;
    let mut i = 0;
    while i < args.len() {
        match args[i].as_str() {
            "--version" => {
                println!("craggemini 0.4.13");
                return;
            }
            "--help" => {
                usage();
                return;
            }
            "--gateway-worker" => mode = Mode::GatewayWorker,
            "--internal-mcp" => mode = Mode::InternalMcp,
            "--internal-execution-guard" => mode = Mode::ExecutionGuard,
            "--write-mcp-config" => mode = Mode::WriteMcpConfig,
            "--license-status" => mode = Mode::LicenseStatus,
            "--license-machine-code" => mode = Mode::MachineCode,
            "--license-capabilities" => {
                println!(
                    "{{\"license\":[\"CRAGS1\",\"CRAGL1\",\"CRAGK1\"],\"shm\":true,\"native_handoff_v1\":true}}"
                );
                return;
            }
            "--config"
            | "--license-dir"
            | "--host-license-dir"
            | "--vm-id"
            | "--license-activate-file"
            | "--out"
            | "--pid"
            | "--owner" => {
                let flag = args[i].clone();
                i += 1;
                let Some(value) = args.get(i).cloned() else {
                    eprintln!("license/config option requires a value: {flag}");
                    std::process::exit(64);
                };
                match flag.as_str() {
                    "--config" => config_path = Some(PathBuf::from(value)),
                    "--out" => out_path = Some(PathBuf::from(value)),
                    "--license-dir" => license_dir = PathBuf::from(value),
                    "--host-license-dir" => host_license_dir = PathBuf::from(value),
                    "--vm-id" => vm_id = value,
                    "--license-activate-file" => activate_file = Some(PathBuf::from(value)),
                    _ => {}
                }
            }
            _ => {}
        }
        i += 1;
    }

    let issuer = publisher_key();

    if let Some(file) = activate_file {
        let code = match std::fs::read_to_string(&file) {
            Ok(c) => c.trim().to_string(),
            Err(e) => {
                eprintln!("cannot read activation file: {e}");
                std::process::exit(1);
            }
        };
        let device = match write_identity(&license_dir, &vm_id) {
            Ok(d) => d,
            Err(e) => {
                eprintln!("{e}");
                std::process::exit(1);
            }
        };
        let dir = license_dir.clone();
        let _ = craggemini_core::private_file::ensure_private_dir(&dir);
        if let Err(e) = craggemini_core::private_file::write_atomic(
            &dir.join("registration.code"),
            format!("{code}\n").as_bytes(),
            0o600,
        ) {
            eprintln!("cannot store registration: {e}");
            std::process::exit(1);
        }
        let gate = craggemini_core::license::LicenseGate::new(
            &vm_id,
            license_dir.clone(),
            host_license_dir.clone(),
            issuer,
        );
        match gate.check(&device) {
            Ok(status) => println!("{}", serde_json::to_string(&status).unwrap_or_default()),
            Err(e) => {
                println!("{{\"status\":\"invalid\",\"code\":\"{}\"}}", e.code());
                std::process::exit(1);
            }
        }
        return;
    }

    match mode {
        Mode::ExecutionGuard => match craggemini_core::guard::parse_execution_guard_args(&args) {
            Ok(g) => eprintln!("guard owner={} pid={:?}", g.owner, g.pid),
            Err(e) => {
                eprintln!("{e}");
                std::process::exit(64);
            }
        },
        Mode::MachineCode => match write_identity(&license_dir, &vm_id) {
            Ok(device) => {
                let challenge = match machine_challenge(&device) {
                    Ok(c) => c,
                    Err(e) => {
                        eprintln!("{e}");
                        std::process::exit(1);
                    }
                };
                println!(
                    "{{\"product\":\"craggemini\",\"machine_code\":\"CRAGM1.{}\",\"vm_id\":\"{}\",\"device_public_key\":\"{}\",\"machine_id_hash\":\"{}\"}}",
                    URL_SAFE_NO_PAD.encode(challenge),
                    device.vm_id,
                    device.public_key,
                    device.machine_id_hash
                );
            }
            Err(e) => {
                eprintln!("{e}");
                std::process::exit(1);
            }
        },
        Mode::LicenseStatus => {
            let device = match read_identity(&license_dir) {
                Ok(d) => d,
                Err(e) => {
                    eprintln!("{e}");
                    std::process::exit(1);
                }
            };
            let gate = craggemini_core::license::LicenseGate::new(
                &vm_id,
                license_dir.clone(),
                host_license_dir.clone(),
                issuer,
            );
            match gate.check(&device) {
                Ok(status) => println!("{}", serde_json::to_string(&status).unwrap_or_default()),
                Err(e) => {
                    println!("{{\"status\":\"invalid\",\"code\":\"{}\"}}", e.code());
                    std::process::exit(1);
                }
            }
        }
        Mode::WriteMcpConfig => {
            let (Some(config_path), Some(out)) = (config_path, out_path) else {
                usage();
                std::process::exit(64);
            };
            let raw = std::fs::read(config_path).expect("cannot read kernel config");
            let config: craggemini_core::Config =
                serde_json::from_slice(&raw).expect("cannot decode kernel config");
            let value = serde_json::json!({
                "mcpServers": {},
                "slot_id": config.session_id,
                "vm_id": config.vm_id,
            });
            std::fs::write(out, serde_json::to_vec(&value).unwrap_or_default())
                .expect("cannot write mcp config");
        }
        Mode::InternalMcp => {
            let socket = std::env::var("KIN_KERNEL_SOCKET")
                .map(PathBuf::from)
                .unwrap_or_else(|_| PathBuf::from("/run/kin/kernel.sock"));
            craggemini_core::mcp::stdio::run_internal_mcp_stdio(&socket);
        }
        Mode::GatewayWorker => {
            let Some(path) = config_path else {
                usage();
                std::process::exit(64);
            };
            let raw = std::fs::read(path).expect("cannot read kernel config");
            let config: craggemini_core::Config =
                serde_json::from_slice(&raw).expect("cannot decode kernel config");
            let device = read_identity(&config.license_dir).unwrap_or_else(|_| {
                serde_json::from_value(serde_json::json!({
                    "version": 1,
                    "product": "craggemini",
                    "vm_id": config.vm_id,
                    "machine_id_hash": "",
                    "private_key": "",
                    "public_key": "",
                }))
                .expect("neutral device")
            });
            let gate = craggemini_core::license::LicenseGate::new(
                &config.vm_id,
                config.license_dir.clone(),
                config
                    .host_license_dir
                    .clone()
                    .unwrap_or_else(craggemini_core::license::default_host_license_dir),
                issuer,
            );
            let rt = tokio::runtime::Builder::new_multi_thread()
                .enable_all()
                .build()
                .expect("craggemini: failed to build async runtime");
            rt.block_on(async {
                if let Err(resp) =
                    craggemini_core::server::run_with_license(config, gate, device).await
                {
                    eprintln!("license gate: {:?}", resp.status());
                }
            });
        }
    }
}

enum Mode {
    GatewayWorker,
    InternalMcp,
    ExecutionGuard,
    WriteMcpConfig,
    LicenseStatus,
    MachineCode,
}

fn usage() {
    eprintln!(
        "Usage:\n  craggemini --gateway-worker --config /path/to/kernel.json\n  craggemini --internal-mcp --config /path/to/mcp-bridge.json\n  craggemini --internal-execution-guard --pid <0|pid> --owner <pid>\n  craggemini --write-mcp-config --config /path/to/kernel.json --out /path/to/mcp_config.json"
    );
}

fn machine_hash() -> String {
    let machine = std::fs::read_to_string("/etc/machine-id").unwrap_or_default();
    craggemini_core::license::machine_hash(&machine)
}

fn read_identity(dir: &std::path::Path) -> Result<craggemini_core::license::Device, String> {
    let raw = std::fs::read(dir.join("device.json")).map_err(|e| e.to_string())?;
    serde_json::from_slice(&raw).map_err(|e| e.to_string())
}

fn write_identity(
    dir: &std::path::Path,
    vm_id: &str,
) -> Result<craggemini_core::license::Device, String> {
    craggemini_core::private_file::ensure_private_dir(dir).map_err(|e| e.to_string())?;
    let path = dir.join("device.json");
    if let Ok(existing) = read_identity(dir) {
        return Ok(existing);
    }
    let secret = x25519_dalek::StaticSecret::random_from_rng(rand_core::OsRng);
    let public = x25519_dalek::PublicKey::from(&secret);
    let device = craggemini_core::license::Device {
        version: 1,
        product: "craggemini".into(),
        vm_id: vm_id.into(),
        machine_id_hash: machine_hash(),
        private_key: URL_SAFE_NO_PAD.encode(secret.to_bytes()),
        public_key: URL_SAFE_NO_PAD.encode(public.to_bytes()),
    };
    let bytes = serde_json::to_vec(&device).map_err(|e| e.to_string())?;
    craggemini_core::private_file::write_atomic(&path, &bytes, 0o600).map_err(|e| e.to_string())?;
    Ok(device)
}

fn machine_challenge(device: &craggemini_core::license::Device) -> Result<Vec<u8>, String> {
    serde_json::to_vec(&serde_json::json!({
        "version": device.version,
        "product": device.product,
        "vm_id": device.vm_id,
        "machine_id_hash": device.machine_id_hash,
        "device_public_key": device.public_key,
    }))
    .map_err(|e| e.to_string())
}

/// Publisher key embedded in the binary (`authorization.public_key`).
fn publisher_key() -> ed25519_dalek::VerifyingKey {
    use ed25519_dalek::VerifyingKey;
    let raw = URL_SAFE_NO_PAD
        .decode("1CjT6Uvf-iJYmLpEdcnA8od_wb2bU75jByC5ag3QzbY")
        .unwrap_or_default();
    let mut bytes = [0u8; 32];
    bytes.copy_from_slice(&raw[..32.min(raw.len())]);
    VerifyingKey::from_bytes(&bytes).unwrap_or_else(|_| {
        // Fallback: an all-zero key still type-checks; replace with the real pin.
        let mut fallback = [0u8; 32];
        fallback[0] = 1;
        VerifyingKey::from_bytes(&fallback).unwrap()
    })
}
