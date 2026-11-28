//! Reconstructed `craggemini_core::guard` / `guard_exec` — PTY launcher and execution guard.
//! Addresses: `open_pty` 0x175e70, `child_pre_exec_attach` 0x175a30,
//! `start_guard` 0x175470, `kill_process_group` 0x2fecd0, `run_execution_guard` 0x2fed00.
#![allow(dead_code, unused)]

use std::os::fd::{AsRawFd, FromRawFd, OwnedFd, RawFd};
use std::path::Path;

use crate::protocol::Failure;

pub struct GuardHandle {
    pub pid: libc::pid_t,
    pub master: OwnedFd,
    pub slave: OwnedFd,
}

impl GuardHandle {
    /// `GuardHandle::shutdown`: SIGTERM the process group, then SIGKILL after a grace period.
    pub fn shutdown(&self) {
        kill_process_group(self.pid as u32, libc::SIGTERM);
    }
}

impl Drop for GuardHandle {
    fn drop(&mut self) {
        // The real drop runs the shutdown closure; a bare kill avoids orphaned agy.
        kill_process_group(self.pid as u32, libc::SIGKILL);
    }
}

/// `guard::open_pty` @ 0x175e70: `openpty`, O_NONBLOCK on both ends, O_ASYNC on master.
pub fn open_pty(
    bin: &Path,
    args: &[String],
    binding: &crate::binding::AccountBindingConfig,
    extra_env: &[(String, String)],
) -> Result<(OwnedFd, libc::pid_t, GuardHandle), Failure> {
    let mut master: RawFd = -1;
    let mut slave: RawFd = -1;
    let winsize = libc::winsize {
        ws_row: 40,
        ws_col: 120,
        ws_xpixel: 0,
        ws_ypixel: 0,
    };
    let rc = unsafe {
        libc::openpty(
            &mut master,
            &mut slave,
            std::ptr::null_mut(),
            std::ptr::null_mut(),
            &winsize as *const _ as *mut _,
        )
    };
    if rc != 0 {
        return Err(Failure::new(
            500,
            "oauth_pty_failed",
            &std::io::Error::last_os_error().to_string(),
        ));
    }
    for fd in [master, slave] {
        unsafe {
            let fl = libc::fcntl(fd, libc::F_GETFL);
            libc::fcntl(fd, libc::F_SETFL, fl | libc::O_NONBLOCK);
        }
    }
    unsafe {
        let fl = libc::fcntl(master, libc::F_GETFL);
        libc::fcntl(master, libc::F_SETFL, fl | libc::O_ASYNC);
    }
    let (pid, status_fd) = start_guard(bin, args, binding, extra_env, slave)?;
    // The child reports its PID before exec; the pipe is CLOEXEC. Read it, then
    // probe liveness shortly after so a failed exec is still detected.
    let mut status = [0u8; 32];
    let n = unsafe { libc::read(status_fd, status.as_mut_ptr().cast(), status.len()) };
    unsafe { libc::close(status_fd) };
    std::thread::sleep(std::time::Duration::from_millis(80));
    let alive = unsafe { libc::kill(pid, 0) } == 0;
    if n <= 0 || !alive {
        kill_process_group(pid as u32, libc::SIGKILL);
        return Err(Failure::new(500, "slot_guard_error", "agy exec failed"));
    }
    let master = unsafe { OwnedFd::from_raw_fd(master) };
    let slave = unsafe { OwnedFd::from_raw_fd(slave) };
    let guard_master = master
        .try_clone()
        .map_err(|e| Failure::new(500, "slot_guard_error", &e.to_string()))?;
    Ok((
        master,
        pid,
        GuardHandle {
            pid,
            master: guard_master,
            slave,
        },
    ))
}

/// `guard::start_guard` @ 0x175470: fork, child runs `child_pre_exec_attach` then execvp.
fn start_guard(
    bin: &Path,
    args: &[String],
    binding: &crate::binding::AccountBindingConfig,
    extra_env: &[(String, String)],
    slave: RawFd,
) -> Result<(libc::pid_t, RawFd), Failure> {
    let mut pipe = [0i32; 2];
    if unsafe { crate::syscompat::pipe2(pipe.as_mut_ptr(), libc::O_CLOEXEC) } != 0 {
        return Err(Failure::new(500, "slot_guard_error", "pipe2 failed"));
    }
    let parent = unsafe { libc::getpid() };
    // Build the child environment before forking: the runtime is multi-threaded,
    // so allocating or locking inside the child is unsafe.
    let mut env_pairs: Vec<(String, String)> = std::env::vars().collect();
    let mut set = |pairs: &mut Vec<(String, String)>, key: &str, value: String| {
        pairs.retain(|(k, _)| k != key);
        pairs.push((key.to_string(), value));
    };
    if let Some(so) = &binding.bridge_so {
        set(&mut env_pairs, "LD_PRELOAD", so.display().to_string());
    }
    if !binding.env_id.is_empty() {
        set(&mut env_pairs, "CRAGGEMINI_SLOT_ID", binding.env_id.clone());
    }
    set(&mut env_pairs, "HOME", binding.agy_home.display().to_string());
    set(
        &mut env_pairs,
        "XDG_CONFIG_HOME",
        binding.agy_home.join(".config").display().to_string(),
    );
    set(
        &mut env_pairs,
        "XDG_CACHE_HOME",
        binding.agy_home.join(".cache").display().to_string(),
    );
    set(&mut env_pairs, "CRAGGEMINI_ACCOUNT_ID", binding.account_id.clone());
    set(&mut env_pairs, "CRAGGEMINI_ENV_ID", binding.env_id.clone());
    if !binding.proxy_id.is_empty() {
        set(&mut env_pairs, "CRAGGEMINI_PROXY_ID", binding.proxy_id.clone());
        set(
            &mut env_pairs,
            "CRAGGEMINI_PROXY_SHA256",
            binding.proxy_sha256.clone(),
        );
    }
    for (k, v) in extra_env {
        set(&mut env_pairs, k, v.clone());
    }
    // The TUI needs a terminal description; without TERM bubbletea quits at once.
    if !env_pairs.iter().any(|(k, v)| k == "TERM" && !v.is_empty()) {
        set(&mut env_pairs, "TERM", "xterm-256color".to_string());
    }
    set(&mut env_pairs, "USER", "agy".to_string());
    set(&mut env_pairs, "LOGNAME", "agy".to_string());
    set(&mut env_pairs, "LANG", "C.UTF-8".to_string());
    set(
        &mut env_pairs,
        "AGY_CLI_DISABLE_AUTO_UPDATE",
        "true".to_string(),
    );
    let pid = unsafe { libc::fork() };
    if pid < 0 {
        return Err(Failure::new(500, "slot_guard_error", "fork failed"));
    }
    if pid == 0 {
        unsafe { libc::close(pipe[0]) };
        child_pre_exec_attach(parent, true, slave, pipe[1]);
        // The guarded process runs inside the account work directory.
        if !binding.work_dir.as_os_str().is_empty() {
            if let Ok(dir) = std::ffi::CString::new(binding.work_dir.display().to_string()) {
                unsafe { libc::chdir(dir.as_ptr()) };
            }
        }
        let envs: Vec<std::ffi::CString> = env_pairs
            .iter()
            .filter_map(|(k, v)| std::ffi::CString::new(format!("{k}={v}")).ok())
            .collect();
        let mut argv: Vec<std::ffi::CString> =
            vec![std::ffi::CString::new(bin.display().to_string()).unwrap()];
        argv.extend(
            args.iter()
                .map(|a| std::ffi::CString::new(a.as_str()).unwrap()),
        );
        let mut envp: Vec<*const libc::c_char> = envs.iter().map(|e| e.as_ptr()).collect();
        envp.push(std::ptr::null());
        let mut argvp: Vec<*const libc::c_char> = argv.iter().map(|e| e.as_ptr()).collect();
        argvp.push(std::ptr::null());
        unsafe { crate::syscompat::execvpe(argvp[0], argvp.as_ptr(), envp.as_ptr()) };
        unsafe { libc::_exit(127) };
    }
    unsafe { libc::close(pipe[1]) };
    Ok((pid, pipe[0]))
}

/// `guard::child_pre_exec_attach` @ 0x175a30: new session, controlling TTY, dup2 to
/// stdio, `PR_SET_PDEATHSIG=SIGKILL`, verify parent, then report readiness on `status_fd`.
fn child_pre_exec_attach(expect_parent: libc::pid_t, attach: bool, tty: RawFd, status_fd: RawFd) {
    unsafe {
        libc::setsid();
        if attach {
            libc::ioctl(tty, libc::TIOCSCTTY as libc::c_ulong, 0);
            libc::dup2(tty, 0);
            libc::dup2(tty, 1);
            libc::dup2(tty, 2);
            if tty > 2 {
                libc::close(tty);
            }
        }
        crate::syscompat::prctl(
            crate::syscompat::PR_SET_PDEATHSIG,
            libc::SIGKILL as libc::c_ulong,
        );
        if libc::getppid() != expect_parent {
            libc::_exit(1);
        }
        // Report our own PID as ASCII, then the parent acknowledges after fork.
        let text = format!("{}\n", libc::getpid());
        libc::write(status_fd, text.as_ptr().cast(), text.len());
    }
}

pub fn pty_read(pty: &OwnedFd, buf: &mut [u8]) -> std::io::Result<usize> {
    let n = unsafe { libc::read(pty.as_raw_fd(), buf.as_mut_ptr().cast(), buf.len()) };
    if n < 0 {
        return Err(std::io::Error::last_os_error());
    }
    Ok(n as usize)
}

pub fn pty_write(pty: &OwnedFd, data: &[u8]) -> std::io::Result<usize> {
    let n = unsafe { libc::write(pty.as_raw_fd(), data.as_ptr().cast(), data.len()) };
    if n < 0 {
        return Err(std::io::Error::last_os_error());
    }
    Ok(n as usize)
}

/// `guard_exec::kill_process_group` @ 0x2fecd0: kill the group, then the PID itself.
pub fn kill_process_group(pid: u32, sig: i32) {
    if pid < 2 {
        return;
    }
    unsafe {
        libc::kill(-(pid as libc::pid_t), sig);
        libc::kill(pid as libc::pid_t, sig);
    }
}

/// `guard_exec::run_execution_guard` @ 0x2fed00: argv parser for `--pid`/`--owner`.
pub struct ExecutionGuardArgs {
    pub pid: Option<libc::pid_t>,
    pub owner: libc::pid_t,
}

pub fn parse_execution_guard_args(args: &[String]) -> Result<ExecutionGuardArgs, String> {
    let mut pid = None;
    let mut owner = None;
    let mut it = args.iter();
    while let Some(a) = it.next() {
        if a == "--pid" {
            pid = Some(
                it.next()
                    .ok_or("missing value for --pid")?
                    .parse()
                    .map_err(|_| "invalid --pid")?,
            );
        } else if a == "--owner" {
            owner = Some(
                it.next()
                    .ok_or("missing value for --owner")?
                    .parse()
                    .map_err(|_| "invalid --owner")?,
            );
        }
    }
    let owner = owner.ok_or("missing valid --owner PID for execution guard")?;
    Ok(ExecutionGuardArgs { pid, owner })
}

/// `guard_exec::resolve_self_executable` @ 0x2ff860.
pub fn resolve_self_executable() -> std::io::Result<std::path::PathBuf> {
    std::env::current_exe()
}
