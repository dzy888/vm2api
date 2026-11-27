// 0063c140 <<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::ready::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::ready::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::ready::_closure_0_>
          (longlong param_1)

{
  if (((*(char *)(param_1 + 0x88) == '\x03') && (*(char *)(param_1 + 0x80) == '\x03')) &&
     (*(char *)(param_1 + 0x78) == '\x03')) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0063c17d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x50) + 0x18))();
      return;
    }
  }
  return;
}


