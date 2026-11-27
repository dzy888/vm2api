//! Linux-only libc items with macOS fallbacks so `cargo check` runs on a Mac.
#![allow(dead_code, unused)]

#[cfg(target_os = "linux")]
pub use libc::{
    eventfd, execvpe, memfd_create, pipe2, prctl, EFD_CLOEXEC, EFD_NONBLOCK, F_ADD_SEALS,
    F_SEAL_GROW, F_SEAL_SEAL, F_SEAL_SHRINK, MFD_ALLOW_SEALING, MFD_CLOEXEC, PR_SET_PDEATHSIG,
};

#[cfg(not(target_os = "linux"))]
pub const MFD_CLOEXEC: libc::c_uint = 0x0001;
#[cfg(not(target_os = "linux"))]
pub const MFD_ALLOW_SEALING: libc::c_uint = 0x0002;
#[cfg(not(target_os = "linux"))]
pub const F_ADD_SEALS: libc::c_int = 1033;
#[cfg(not(target_os = "linux"))]
pub const F_SEAL_SEAL: libc::c_int = 0x0001;
#[cfg(not(target_os = "linux"))]
pub const F_SEAL_SHRINK: libc::c_int = 0x0002;
#[cfg(not(target_os = "linux"))]
pub const F_SEAL_GROW: libc::c_int = 0x0004;
#[cfg(not(target_os = "linux"))]
pub const EFD_CLOEXEC: libc::c_int = 0o2000000;
#[cfg(not(target_os = "linux"))]
pub const EFD_NONBLOCK: libc::c_int = 0o0004;
#[cfg(not(target_os = "linux"))]
pub const PR_SET_PDEATHSIG: libc::c_int = 1;

#[cfg(not(target_os = "linux"))]
pub unsafe fn memfd_create(_name: *const libc::c_char, _flags: libc::c_uint) -> libc::c_int {
    -1
}

#[cfg(not(target_os = "linux"))]
pub unsafe fn eventfd(_init: libc::c_uint, _flags: libc::c_int) -> libc::c_int {
    -1
}

#[cfg(not(target_os = "linux"))]
pub unsafe fn prctl(_option: libc::c_int, _arg2: libc::c_ulong) -> libc::c_int {
    0
}

#[cfg(not(target_os = "linux"))]
pub unsafe fn execvpe(
    file: *const libc::c_char,
    argv: *const *const libc::c_char,
    _envp: *const *const libc::c_char,
) -> libc::c_int {
    libc::execvp(file, argv)
}

#[cfg(not(target_os = "linux"))]
pub unsafe fn pipe2(fds: *mut libc::c_int, flags: libc::c_int) -> libc::c_int {
    if libc::pipe(fds) != 0 {
        return -1;
    }
    libc::fcntl(*fds, libc::F_SETFD, flags & libc::O_CLOEXEC);
    libc::fcntl(*fds.add(1), libc::F_SETFD, flags & libc::O_CLOEXEC);
    0
}
