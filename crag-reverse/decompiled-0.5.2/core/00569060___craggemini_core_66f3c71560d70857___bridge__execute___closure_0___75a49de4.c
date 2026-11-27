// 00569060 <craggemini_core[66f3c71560d70857]::bridge::execute::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00569263 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::execute::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::execute::_closure_0_>(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switch(*(undefined1 *)((longlong)param_1 + 0xe9)) {
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x36] != 0) {
      (**(code **)(param_1[0x36] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x3f] != 0) {
      (**(code **)(param_1[0x3f] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x48] != 0) {
      (**(code **)(param_1[0x48] + 0x18))();
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>>
              (param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x1d) = 0;
    if (param_1[0x2e] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>(param_1 + 0x1f);
    break;
  case 4:
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>)>
              (param_1 + 0x1f);
    *(undefined1 *)((longlong)param_1 + 0xe7) = 0;
    if (param_1[0x72] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 5:
    lVar2 = 0xe6;
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>)>
              (param_1 + 0x1f);
LAB_00569196:
    *(undefined1 *)((longlong)param_1 + lVar2) = 0;
    break;
  case 6:
    <craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>(param_1 + 0x1f);
    plVar1 = (longlong *)param_1[0x1e];
    if (plVar1 != (longlong *)0x0) {
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x1e);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(param_1 + 0x1e);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xe5) = 0;
    if (*param_1 == 0) {
      lVar2 = 0xe2;
      goto LAB_00569196;
    }
    break;
  default:
    goto switchD_0056908c_default;
  }
  *(undefined2 *)((longlong)param_1 + 0xe2) = 0;
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_1[0x14];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_1[0x13];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  if (param_1[0x10] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  if ((param_1[0xd] != -1) && (param_1[0xd] != 0)) {
    (*(code *)PTR_free_0079adc8)();
    return;
  }
switchD_0056908c_default:
  return;
}


