// 00265a00 <craggemini_core[66f3c71560d70857]::bridge::execute::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00265b91 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::execute::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::execute::_closure_0_>(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  switch(*(undefined1 *)((longlong)param_1 + 0xe9)) {
  case 3:
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>)>
              (param_1 + 0x31);
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
    lVar3 = 0xe6;
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>)>
              (param_1 + 0x1f);
LAB_00265aca:
    *(undefined1 *)((longlong)param_1 + lVar3) = 0;
    break;
  case 6:
    <craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>(param_1 + 0x1f);
    if (param_1[0x1e] != 0) {
      plVar2 = param_1 + 0x1e;
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(plVar2);
      plVar1 = (longlong *)*plVar2;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(plVar2);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xe5) = 0;
    if (*param_1 == 0) {
      lVar3 = 0xe2;
      goto LAB_00265aca;
    }
    break;
  default:
    goto switchD_00265a29_default;
  }
  *(undefined2 *)((longlong)param_1 + 0xe2) = 0;
  (*(code *)PTR_drop_007990c8)();
  plVar2 = (longlong *)param_1[0x14];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar2 = (longlong *)param_1[0x13];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
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
switchD_00265a29_default:
  return;
}


