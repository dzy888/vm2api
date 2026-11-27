// 0025dc20 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0025de43 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::_closure_0_>(longlong *param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)((longlong)param_1 + 0x223)) {
  case 3:
    <craggemini_core[66f3c71560d70857]::bridge::execute_continuation::_closure_0_>(param_1 + 0x5b);
    if (param_1[0x50] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0x211) = 0;
    *(undefined1 *)((longlong)param_1 + 0x222) = 0;
    goto LAB_0025ddeb;
  case 4:
    if ((char)param_1[0xc3] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_::_closure_0_>>
                (param_1 + 0x60);
    }
    if (param_1[0x50] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x55);
    goto LAB_0025ddeb;
  case 5:
    <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::_closure_0_>
              (param_1 + 0x45);
    goto LAB_0025ddeb;
  case 6:
    <craggemini_core[66f3c71560d70857]::bridge::execute::_closure_0_>(param_1 + 0x45);
    goto LAB_0025ddeb;
  case 7:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
              (param_1 + 0x45);
    break;
  case 8:
    if ((char)param_1[0xad] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_::_closure_0_>>
                (param_1 + 0x4a);
    }
    break;
  case 9:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
              (param_1 + 0x45);
    break;
  case 10:
    if ((char)param_1[0xad] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_::_closure_0_>>
                (param_1 + 0x4a);
    }
    break;
  case 0xb:
    if ((char)param_1[0xad] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_::_closure_0_>>
                (param_1 + 0x4a);
    }
    break;
  case 0xc:
    if ((char)param_1[0xad] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_::_closure_0_>>
                (param_1 + 0x4a);
    }
    break;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
              (param_1 + 0x45);
    break;
  case 0xe:
    if ((char)param_1[0xad] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_::_closure_0_>>
                (param_1 + 0x4a);
    }
    break;
  default:
    goto switchD_0025dc48_default;
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
            (param_1[6]);
  *(undefined1 *)((longlong)param_1 + 0x213) = 0;
LAB_0025ddeb:
  *(undefined1 *)((longlong)param_1 + 0x212) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21a) = 0;
  plVar1 = (longlong *)param_1[0x12];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x12);
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    (*(code *)PTR_free_0079adc8)();
    return;
  }
switchD_0025dc48_default:
  return;
}


