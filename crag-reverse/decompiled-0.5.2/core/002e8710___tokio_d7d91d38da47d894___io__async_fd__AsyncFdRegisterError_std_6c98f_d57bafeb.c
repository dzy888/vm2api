// 002e8710 <tokio[d7d91d38da47d894]::io::async_fd::AsyncFdRegisterError<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::io::async_fd::AsyncFdRegisterError<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::io::async_fd::AsyncFdRegisterError<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>
          (uint param_1)

{
  (*(code *)PTR_close_00799030)();
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


