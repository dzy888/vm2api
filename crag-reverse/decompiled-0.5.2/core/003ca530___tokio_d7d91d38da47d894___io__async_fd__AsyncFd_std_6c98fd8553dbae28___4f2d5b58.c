// 003ca530 <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>
          (longlong param_1)

{
  <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  if (*(int *)(param_1 + 0x18) == -1) {
    return;
  }
  (*(code *)PTR_close_00799030)();
  return;
}


