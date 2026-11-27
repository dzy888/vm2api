// 00368990 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00368b2f */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0x223)) {
  case 3:
    <craggemini_core[66f3c71560d70857]::bridge::execute_continuation::_closure_0_>(param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x280) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x211) = 0;
    *(undefined1 *)(param_1 + 0x222) = 0;
    goto LAB_00368ad7;
  case 4:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x280) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x2a8);
    goto LAB_00368ad7;
  case 5:
    <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::_closure_0_>
              (param_1 + 0x228);
    goto LAB_00368ad7;
  case 6:
    <craggemini_core[66f3c71560d70857]::bridge::execute::_closure_0_>(param_1 + 0x228);
    goto LAB_00368ad7;
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
    goto switchD_003689b8_default;
  }
  <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1);
  *(undefined1 *)(param_1 + 0x213) = 0;
LAB_00368ad7:
  *(undefined1 *)(param_1 + 0x212) = 0;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined8 *)(param_1 + 0x21a) = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x90);
  }
  if ((*(longlong *)(param_1 + 0x78) != -1) && (*(longlong *)(param_1 + 0x78) != 0)) {
    (*(code *)PTR_free_0079adc8)();
    return;
  }
switchD_003689b8_default:
  return;
}


