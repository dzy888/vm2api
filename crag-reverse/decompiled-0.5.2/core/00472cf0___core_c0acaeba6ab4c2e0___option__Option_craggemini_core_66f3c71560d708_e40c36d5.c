// 00472cf0 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::guard::GuardHandle>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::guard::GuardHandle>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::guard::GuardHandle>>
          (int *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*param_1 != -1) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop();
    if (param_1[0x10] != -1) {
      <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x10);
    }
    if (*param_1 != 2) {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1);
      if (param_1[6] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
    }
    plVar1 = *(longlong **)(param_1 + 0x3c);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799130)();
    }
    if (*(longlong *)(param_1 + 0x3e) != 0) {
      cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar2 != '\0') {
        (*(code *)PTR_drop_join_handle_slow_00799088)();
      }
    }
    if (param_1[8] != 2) {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 8);
      if (param_1[0xe] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 8);
      return;
    }
  }
  return;
}


