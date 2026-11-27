// 003d1160 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_>
          (longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  switch(*(undefined1 *)(param_1 + 0x80)) {
  case 0:
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
    puVar1 = (undefined8 *)(param_1 + 0x20);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1);
    plVar2 = (longlong *)*puVar1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
    break;
  default:
    goto switchD_003d1187_caseD_1;
  case 4:
  case 5:
    if (*(longlong *)(param_1 + 0x68) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d1187::switchdataD_00192e6c,1);
    }
  case 3:
  case 6:
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x30);
    if (*(int *)(param_1 + 0x48) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x30);
    puVar1 = (undefined8 *)(param_1 + 0x20);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1);
    plVar2 = (longlong *)*puVar1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0x28);
    return;
  }
switchD_003d1187_caseD_1:
  return;
}


