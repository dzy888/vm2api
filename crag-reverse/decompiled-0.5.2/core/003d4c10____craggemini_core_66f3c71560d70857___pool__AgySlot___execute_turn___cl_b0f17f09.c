// 003d4c10 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003d4e51 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::_closure_0_>(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  switch(*(undefined1 *)(param_1 + 0x223)) {
  case 3:
    if (*(char *)(param_1 + 0xec1) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>(param_1 + 0x358);
      if (*(longlong *)(param_1 + 0x340) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x338) != 0) {
        puVar1 = (undefined8 *)(param_1 + 0x338);
        <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar1);
        plVar2 = (longlong *)*puVar1;
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
          ::drop_slow(puVar1);
        }
      }
      *(undefined1 *)(param_1 + 0xec0) = 0;
    }
    else if (*(char *)(param_1 + 0xec1) == '\0') {
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x2d8);
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x211) = 0;
    *(undefined1 *)(param_1 + 0x222) = 0;
    goto switchD_003d4cc9_default;
  case 4:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x280) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x2a8);
    goto switchD_003d4cc9_default;
  case 5:
    <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::_closure_0_>
              (param_1 + 0x228);
    goto switchD_003d4cc9_default;
  case 6:
    switch(*(undefined1 *)(param_1 + 0x311)) {
    case 3:
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x3d8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x3d8) + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x420) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x420) + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x468) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x468) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>>
                (param_1 + 0x488);
      *(undefined1 *)(param_1 + 0x310) = 0;
      if (*(longlong *)(param_1 + 0x398) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>(param_1 + 800);
      break;
    case 4:
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>)>
                (param_1 + 800);
      *(undefined1 *)(param_1 + 0x30f) = 0;
      if (*(longlong *)(param_1 + 0x5b8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      break;
    case 5:
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>)>
                (param_1 + 800);
      *(undefined1 *)(param_1 + 0x30e) = 0;
      break;
    case 6:
      <craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>(param_1 + 800);
      if (*(longlong *)(param_1 + 0x318) != 0) {
        puVar1 = (undefined8 *)(param_1 + 0x318);
        <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar1);
        plVar2 = (longlong *)*puVar1;
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
          ::drop_slow(puVar1);
        }
      }
      *(undefined1 *)(param_1 + 0x30d) = 0;
      if (*(char *)(param_1 + 0x228) == '\0') {
        *(undefined1 *)(param_1 + 0x30a) = 0;
      }
      break;
    default:
      goto switchD_003d4cc9_default;
    }
    *(undefined2 *)(param_1 + 0x30a) = 0;
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0x2c8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0x2c0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x30c) = 0;
    if (0 < *(longlong *)(param_1 + 0x290)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto switchD_003d4cc9_default;
  case 7:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
              (param_1 + 0x228);
    break;
  case 8:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x228);
    break;
  case 9:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
              (param_1 + 0x228);
    break;
  case 10:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x228);
    break;
  case 0xb:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x228);
    break;
  case 0xc:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x228);
    break;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
              (param_1 + 0x228);
    break;
  case 0xe:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x228);
    break;
  default:
    goto switchD_003d4c39_default;
  }
  <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1);
  *(undefined1 *)(param_1 + 0x213) = 0;
switchD_003d4cc9_default:
  *(undefined1 *)(param_1 + 0x212) = 0;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined8 *)(param_1 + 0x21a) = 0;
  plVar2 = *(longlong **)(param_1 + 0x90);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x90);
  }
  if (0 < *(longlong *)(param_1 + 0x78)) {
    (*(code *)PTR_free_0079adc8)();
    return;
  }
switchD_003d4c39_default:
  return;
}


