//! Reconstructed `craggemini_core::private_file` — O_NOFOLLOW private file IO.
#![allow(dead_code, unused)]

use std::fs::{File, OpenOptions};
use std::io::{Read, Write};
use std::os::unix::fs::OpenOptionsExt;
use std::path::Path;

pub fn open_read(path: &Path) -> std::io::Result<File> {
    OpenOptions::new()
        .read(true)
        .custom_flags(libc::O_NOFOLLOW | libc::O_NONBLOCK)
        .open(path)
}

pub fn read_private(path: &Path, max: usize) -> std::io::Result<Vec<u8>> {
    let mut f = open_read(path)?;
    let meta = f.metadata()?;
    if !meta.is_file() || meta.len() as usize > max {
        return Err(std::io::Error::new(
            std::io::ErrorKind::InvalidData,
            "private file invalid",
        ));
    }
    let mut out = Vec::with_capacity(meta.len() as usize);
    f.read_to_end(&mut out)?;
    Ok(out)
}

pub fn write_atomic(path: &Path, bytes: &[u8], mode: u32) -> std::io::Result<()> {
    let tmp = path.with_extension(format!("tmp-{}", std::process::id()));
    let mut f = OpenOptions::new()
        .write(true)
        .create_new(true)
        .mode(mode)
        .custom_flags(libc::O_NOFOLLOW)
        .open(&tmp)?;
    f.write_all(bytes)?;
    f.sync_all()?;
    std::fs::rename(&tmp, path)
}

pub fn ensure_private_dir(path: &Path) -> std::io::Result<()> {
    std::fs::create_dir_all(path)?;
    std::fs::set_permissions(path, std::os::unix::fs::PermissionsExt::from_mode(0o700))
}
