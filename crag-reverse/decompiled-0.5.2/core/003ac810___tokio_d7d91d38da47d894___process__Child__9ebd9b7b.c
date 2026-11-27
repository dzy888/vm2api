// 003ac810 <tokio[d7d91d38da47d894]::process::Child>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Child> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Child>(int *param_1)

{
  ulonglong uVar1;
  
  if (param_1[0x18] != -2) {
    if ((char)param_1[0x28] == '\x01') {
      uVar1 = (*(code *)PTR_kill_00799138)();
      if (uVar1 == 0) {
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      else if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    <tokio[d7d91d38da47d894]::process::imp::Child>(param_1 + 0x18);
  }
  if (*param_1 != 2) {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    if (param_1[6] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  }
  if (param_1[8] != 2) {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 8);
    if (param_1[0xe] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 8);
  }
  if (param_1[0x10] == 2) {
    return;
  }
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x10);
  if (param_1[0x16] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x10);
  return;
}


