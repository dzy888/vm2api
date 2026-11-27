// 00361ae0 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#10}>>

/* WARNING: Switch with 1 destination removed at 0x00361bfc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#10}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_10_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar3 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      if (puVar3[1] != 0) {
        (*(code *)PTR_free_0079adc8)(param_4,puVar3[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x3c] == '\0') {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 2);
      if (param_1[8] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 2);
      plVar2 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>>>
        ::drop_slow(param_1 + 10);
      }
      plVar2 = *(longlong **)(param_1 + 0xc);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>>>>
        ::drop_slow(param_1 + 0xc);
      }
      piVar1 = param_1 + 0xe;
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
      plVar2 = *(longlong **)piVar1;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(piVar1);
      }
    }
    else {
      if ((char)param_1[0x3c] != '\x03') {
        return;
      }
      if (*(longlong *)(param_1 + 0x26) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x12);
      if (param_1[0x18] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x12);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      plVar2 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>>>
        ::drop_slow(param_1 + 10);
      }
      plVar2 = *(longlong **)(param_1 + 0xc);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>>>>
        ::drop_slow(param_1 + 0xc);
      }
      piVar1 = param_1 + 0xe;
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
      plVar2 = *(longlong **)piVar1;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(piVar1);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x10);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
      drop_slow(param_1 + 0x10);
      return;
    }
  }
  return;
}


