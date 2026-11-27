// 0055a9c0 <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_>::_closure_0_>
          (longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1 + 0x10;
  if (*(char *)(param_1 + 0x1050) == '\0') {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(lVar1);
    if (*(int *)(param_1 + 0x28) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(lVar1);
  }
  else {
    if (*(char *)(param_1 + 0x1050) != '\x03') {
      return;
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(lVar1);
    if (*(int *)(param_1 + 0x28) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(lVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::acp_backend::StderrRing>>>
    ::drop_slow(param_1 + 0x30);
    return;
  }
  return;
}


