// 00588fb0 drop

/* <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int local_1c;
  undefined1 local_18;
  longlong local_10;
  
  local_1c = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (local_1c != -1) {
    uVar1 = (*(code *)PTR_handle_00799f38)();
    uVar2 = <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::
            <mio[4b4dae02747c797f]::sys::unix::pipe::Sender>(uVar1,param_1 + 0x10,&local_1c);
    if (uVar2 != 0) {
      if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
        local_10 = uVar2 - 1;
        local_18 = 3;
        (*(code *)PTR_drop_00799040)();
      }
    }
    (*(code *)PTR_close_00799030)();
  }
  return;
}


