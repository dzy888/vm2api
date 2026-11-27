//! Reconstructed `craggemini_core::raw` — raw fd helpers.
#![allow(dead_code, unused)]

use std::os::fd::RawFd;

pub fn set_nonblocking(fd: RawFd, enabled: bool) -> std::io::Result<()> {
    unsafe {
        let fl = libc::fcntl(fd, libc::F_GETFL);
        if fl < 0 {
            return Err(std::io::Error::last_os_error());
        }
        let next = if enabled {
            fl | libc::O_NONBLOCK
        } else {
            fl & !libc::O_NONBLOCK
        };
        if libc::fcntl(fd, libc::F_SETFL, next) < 0 {
            return Err(std::io::Error::last_os_error());
        }
    }
    Ok(())
}

pub fn close(fd: RawFd) {
    unsafe {
        libc::close(fd);
    }
}
