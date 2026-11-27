//! Reconstructed `craggemini_core::license::files` — private directory access and
//! package fingerprints. Addresses: `walk_directory` 0x300010, `machine_fingerprint`
//! 0x300420, `open_read_at` 0x2ffeb0.
#![allow(dead_code, unused)]

use std::fs::{File, OpenOptions};
use std::io::{Read, Seek, SeekFrom};
use std::os::unix::fs::{MetadataExt, OpenOptionsExt};
use std::path::{Path, PathBuf};

use base64::Engine;
use sha2::{Digest, Sha256};

use super::LicenseError;

/// A directory that must be owned by the runtime UID and mode `0700`.
pub struct PrivateDir {
    path: PathBuf,
    dir: File,
}

/// A host directory readable by the gate; entries are fingerprinted individually.
pub struct HostDir {
    path: PathBuf,
    dir: File,
}

fn open_dir(path: &Path) -> Result<File, LicenseError> {
    OpenOptions::new()
        .read(true)
        .custom_flags(libc::O_DIRECTORY | libc::O_NOFOLLOW)
        .open(path)
        .map_err(|_| LicenseError::Unconfigured)
}

fn open_private(path: &Path) -> Result<File, LicenseError> {
    let f = OpenOptions::new()
        .read(true)
        .custom_flags(libc::O_NOFOLLOW | libc::O_NONBLOCK)
        .open(path)
        .map_err(|_| LicenseError::Unconfigured)?;
    let m = f.metadata().map_err(|_| LicenseError::Invalid)?;
    if !m.is_file() || (m.mode() & 0o777) != 0o600 || m.size() > 32 * 1024 {
        return Err(LicenseError::Invalid);
    }
    Ok(f)
}

impl PrivateDir {
    /// `PrivateDir::open` @ 0x2fb000: directory must be `0700` and runtime-owned.
    pub fn open(path: &Path) -> Result<Self, LicenseError> {
        let m = std::fs::symlink_metadata(path).map_err(|_| LicenseError::Unconfigured)?;
        if !m.is_dir() || (m.mode() & 0o777) != 0o700 {
            return Err(LicenseError::Unconfigured);
        }
        Ok(Self {
            path: path.into(),
            dir: open_dir(path)?,
        })
    }

    pub fn read(&self, name: &str) -> Result<String, LicenseError> {
        let mut f = open_private(&self.path.join(name))?;
        let mut s = String::new();
        f.read_to_string(&mut s)
            .map_err(|_| LicenseError::Invalid)?;
        Ok(s)
    }

    pub fn open_file(&self, name: &str) -> Result<File, LicenseError> {
        open_private(&self.path.join(name))
    }

    /// `PrivateDir::fingerprint` @ 0x2faf20.
    pub fn fingerprint(&self, name: &str) -> Result<[u8; 32], LicenseError> {
        let mut f = open_private(&self.path.join(name))?;
        let mut h = Sha256::new();
        std::io::copy(&mut f, &mut h).map_err(|_| LicenseError::Invalid)?;
        Ok(h.finalize().into())
    }
}

impl HostDir {
    /// `HostDir::open` @ 0x2fd870.
    pub fn open(path: &Path) -> Result<Self, LicenseError> {
        Ok(Self {
            path: path.into(),
            dir: open_dir(path)?,
        })
    }

    pub fn exists(&self, name: &str) -> bool {
        self.path.join(name).exists()
    }

    pub fn read(&self, name: &str) -> Result<String, LicenseError> {
        let mut f = File::open(self.path.join(name)).map_err(|_| LicenseError::Unconfigured)?;
        let mut s = String::new();
        f.read_to_string(&mut s)
            .map_err(|_| LicenseError::Invalid)?;
        Ok(s)
    }

    /// `HostDir::check_ready` @ 0x2fd750.
    pub fn check_ready(&self) -> Result<(), LicenseError> {
        if self.exists("sync-pending") {
            return Err(LicenseError::Context);
        }
        Ok(())
    }

    /// `HostDir::fingerprint` @ 0x2fd790.
    pub fn fingerprint(&self, name: &str) -> Result<[u8; 32], LicenseError> {
        let mut f = File::open(self.path.join(name)).map_err(|_| LicenseError::Unconfigured)?;
        let mut h = Sha256::new();
        std::io::copy(&mut f, &mut h).map_err(|_| LicenseError::Invalid)?;
        Ok(h.finalize().into())
    }

    pub fn roster_json(&self) -> Result<String, LicenseError> {
        self.read("entitlement.code")
    }

    pub fn roster(&self) -> Result<super::host::RosterEntitlement, LicenseError> {
        let raw = self.roster_json()?;
        let code = raw.trim();
        let parts: Vec<&str> = code.split('.').collect();
        if parts.len() != 3 || !matches!(parts[0], "CRAGH1" | "CRAGH2") {
            return Err(LicenseError::Invalid);
        }
        let claims = base64::engine::general_purpose::URL_SAFE_NO_PAD
            .decode(parts[1])
            .map_err(|_| LicenseError::Invalid)?;
        serde_json::from_slice(&claims).map_err(|_| LicenseError::Invalid)
    }
}

/// `open_read_at` @ 0x2ffeb0 — open a directory entry relative to a dirfd, read at offset.
pub fn open_read_at(dir: &File, name: &str, offset: u64) -> Result<Vec<u8>, LicenseError> {
    let mut f = File::open(format!(
        "/proc/self/fd/{}/{}",
        dir.metadata().map_err(|_| LicenseError::Invalid)?.ino(),
        name
    ))
    .map_err(|_| LicenseError::Unconfigured)?;
    f.seek(SeekFrom::Start(offset))
        .map_err(|_| LicenseError::Invalid)?;
    let mut out = Vec::new();
    f.read_to_end(&mut out).map_err(|_| LicenseError::Invalid)?;
    Ok(out)
}

/// `walk_directory` @ 0x300010 — hash every entry (path, metadata, content) in order.
pub fn walk_directory(root: &Path) -> Result<[u8; 32], LicenseError> {
    fn visit(dir: &Path, rel: &Path, h: &mut Sha256) {
        h.update(rel.as_os_str().as_encoded_bytes());
        h.update([0]);
        let mut entries: Vec<_> = std::fs::read_dir(dir).unwrap().flatten().collect();
        entries.sort_by_key(|e| e.file_name());
        for entry in entries {
            let path = entry.path();
            let rel = rel.join(entry.file_name());
            let Ok(meta) = std::fs::symlink_metadata(&path) else {
                continue;
            };
            h.update(meta.mode().to_le_bytes());
            h.update(meta.uid().to_le_bytes());
            h.update(meta.gid().to_le_bytes());
            h.update(meta.size().to_le_bytes());
            if meta.is_dir() {
                visit(&path, &rel, h);
            } else if meta.is_file() {
                if let Ok(mut f) = File::open(&path) {
                    let _ = std::io::copy(&mut f, h);
                }
            }
        }
    }
    let mut h = Sha256::new();
    visit(root, Path::new(""), &mut h);
    Ok(h.finalize().into())
}

/// `machine_fingerprint` @ 0x300420 — hash of the package tree plus the machine id.
pub fn machine_fingerprint(package_root: &Path) -> Result<[u8; 32], LicenseError> {
    let tree = walk_directory(package_root)?;
    let machine = std::fs::read("/etc/machine-id").unwrap_or_default();
    let mut h = Sha256::new();
    h.update(tree);
    h.update(machine);
    Ok(h.finalize().into())
}
