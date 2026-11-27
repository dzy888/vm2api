// 00364fb0 <craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00365509 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>
          (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  switch(*(undefined1 *)((longlong)param_1 + 0xdea)) {
  case 0:
    (*(code *)PTR_close_00799030)();
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[3] != -1) && (param_1[3] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[6] != -1) && (param_1[6] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
    drop(param_1 + 0xd);
    if (param_1[0xd] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    lVar1 = param_1[0x11];
    (*(code *)PTR_munmap_007990b8)();
    param_1 = param_1 + 0x1b;
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1,lVar1);
    plVar2 = (longlong *)*param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(param_1);
      return;
    }
    return;
  default:
    goto switchD_00364fd7_caseD_1;
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x1c8] != 0) {
      (**(code **)(param_1[0x1c8] + 0x18))();
    }
    goto LAB_0036543b;
  case 4:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x1c6] != 0) {
      (**(code **)(param_1[0x1c6] + 0x18))();
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>>
              (param_1 + 0x1ca);
    goto LAB_003653ed;
  case 5:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
              (param_1 + 0x1da);
    <craggemini_core[66f3c71560d70857]::server::ControlJob>(param_1 + 0x1cd);
    *(undefined1 *)((longlong)param_1 + 0xdfe) = 0;
    goto LAB_003653bd;
  case 6:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x1d3] != 0) {
      (**(code **)(param_1[0x1d3] + 0x18))();
    }
    if ((char)param_1[0x1c0] == '\0') {
      plVar2 = (longlong *)param_1[0x1c1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar2 = (longlong *)param_1[0x1c1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x1c2);
    if ((((char)param_1[0x1da] == '\x03') && ((char)param_1[0x1f1] == '\x03')) &&
       (((char)param_1[0x1f0] == '\x03' &&
        (((char)param_1[0x1ef] == '\x03' && ((char)param_1[0x1ee] == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (param_1[0x1e9] != 0) {
        (**(code **)(param_1[0x1e9] + 0x18))();
      }
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x1fe] != 0) {
      (**(code **)(param_1[0x1fe] + 0x18))();
    }
    goto LAB_003653bd;
  case 7:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x1c3);
    if (param_1[0x1c0] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_003653bd;
  case 8:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x1c8] != 0) {
      (**(code **)(param_1[0x1c8] + 0x18))();
    }
    if (((((char)param_1[0x1cf] == '\x03') && ((char)param_1[0x1e6] == '\x03')) &&
        ((char)param_1[0x1e5] == '\x03')) &&
       (((char)param_1[0x1e4] == '\x03' && ((char)param_1[0x1e3] == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (param_1[0x1de] != 0) {
        (**(code **)(param_1[0x1de] + 0x18))();
      }
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_1[499] != 0) {
      (**(code **)(param_1[499] + 0x18))();
    }
    goto LAB_003653bd;
  case 9:
    <craggemini_core[66f3c71560d70857]::bridge::execute_continuation::_closure_0_>(param_1 + 0x1d6);
    if (param_1[0x1cb] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0xdec) = 0;
    break;
  case 10:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x1d6);
    if (param_1[0x1cb] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x1d0);
    break;
  case 0xb:
    <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::_closure_0_>
              (param_1 + 0x1c0);
    break;
  case 0xc:
    <craggemini_core[66f3c71560d70857]::bridge::execute::_closure_0_>(param_1 + 0x1c0);
    break;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
              (param_1 + 0x1c0);
    goto LAB_00365351;
  case 0xe:
    if ((char)param_1[0x1c0] == '\0') {
      plVar2 = (longlong *)param_1[0x1c1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar2 = (longlong *)param_1[0x1c1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x1c2);
    goto LAB_00365333;
  case 0xf:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x1c0);
LAB_00365333:
    if (param_1[0x1ba] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
LAB_00365351:
    if (*(char *)((longlong)param_1 + 0xdee) != '\0') {
      <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 0x1b2);
    }
    *(undefined1 *)((longlong)param_1 + 0xdee) = 0;
    if (param_1[0x1af] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined8 *)((longlong)param_1 + 0xdf6) = 0;
  param_1[0x1be] = 0;
  if (*(char *)((longlong)param_1 + 0xdef) != '\0') {
    <craggemini_core[66f3c71560d70857]::server::Turn>(param_1 + 0x10e);
  }
  *(undefined1 *)((longlong)param_1 + 0xdef) = 0;
LAB_003653bd:
  if (param_1[0x67] != -1) {
    if (param_1[0x67] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x6c);
  }
LAB_003653ed:
  <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x3b);
  plVar2 = (longlong *)param_1[0x3a];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x3a);
  }
  (*(code *)PTR_drop_007990f0)();
  plVar2 = (longlong *)param_1[0x38];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_007990d8)();
  }
  *(undefined1 *)((longlong)param_1 + 0xded) = 0;
LAB_0036543b:
  plVar2 = param_1 + 0x37;
  <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(plVar2);
  plVar3 = (longlong *)*plVar2;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(plVar2);
  }
  <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop(param_1 + 0x2a);
  if (param_1[0x2a] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  (*(code *)PTR_munmap_007990b8)();
  (*(code *)PTR_close_00799030)();
  if (param_1[0x1d] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[0x20] != -1) && (param_1[0x20] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[0x23] != -1) && (param_1[0x23] != 0)) {
    (*(code *)PTR_free_0079adc8)();
    return;
  }
switchD_00364fd7_caseD_1:
  return;
}


