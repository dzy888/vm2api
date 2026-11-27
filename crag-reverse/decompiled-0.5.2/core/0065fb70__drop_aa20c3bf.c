// 0065fb70 drop

/* <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int local_2c;
  int *local_28;
  undefined1 local_20;
  longlong local_18;
  
  local_2c = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (local_2c != -1) {
    local_28 = &local_2c;
    uVar1 = (*(code *)PTR_handle_00799f38)();
    uVar2 = <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::
            <mio[4b4dae02747c797f]::sys::unix::sourcefd::SourceFd>(uVar1,param_1 + 0x10,&local_28);
    if (uVar2 != 0) {
      if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
        local_18 = uVar2 - 1;
        local_20 = 3;
        (*(code *)PTR_drop_00799040)();
      }
    }
    (*(code *)PTR_close_00799030)();
  }
  return;
}


