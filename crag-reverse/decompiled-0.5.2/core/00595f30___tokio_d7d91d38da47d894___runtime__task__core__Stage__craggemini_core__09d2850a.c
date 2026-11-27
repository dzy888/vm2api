// 00595f30 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8}>>

/* WARNING: Switch with 1 destination removed at 0x00595f89 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_>>
          (int *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    switch((char)param_1[0x22]) {
    case '\0':
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 2);
      if (param_1[8] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 2);
      piVar1 = param_1 + 10;
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
      plVar4 = *(longlong **)piVar1;
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(piVar1);
      }
      break;
    default:
      goto switchD_00595fae_caseD_1;
    case '\x04':
    case '\x05':
      if (*(longlong *)(param_1 + 0x1c) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00595fae::switchdataD_0019cb48,1);
      }
    case '\x03':
    case '\x06':
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0xe);
      if (param_1[0x14] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xe);
      piVar1 = param_1 + 10;
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
      plVar4 = *(longlong **)piVar1;
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(piVar1);
      }
    }
    plVar4 = *(longlong **)(param_1 + 0xc);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
      drop_slow(param_1 + 0xc);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (*(longlong *)(param_1 + 4) != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar3 = (code *)*puVar2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
switchD_00595fae_caseD_1:
  return;
}


