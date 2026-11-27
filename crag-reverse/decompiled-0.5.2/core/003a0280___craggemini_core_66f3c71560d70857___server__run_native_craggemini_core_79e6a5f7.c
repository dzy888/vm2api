// 003a0280 <craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>
          (longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
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
    lVar7 = param_1[0x11];
    (*(code *)PTR_munmap_007990b8)();
    param_1 = param_1 + 0x1b;
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1,lVar7);
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
    goto switchD_003a02ab_caseD_1;
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x1c8] != 0) {
      (**(code **)(param_1[0x1c8] + 0x18))();
    }
    goto LAB_003a0cfb;
  case 4:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x1c6] != 0) {
      (**(code **)(param_1[0x1c6] + 0x18))();
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>>
              (param_1 + 0x1ca);
    goto LAB_003a0cad;
  case 5:
    cVar1 = *(char *)((longlong)param_1 + 0xfd9);
    if (cVar1 == '\x05') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                (param_1 + 0x1fc);
LAB_003a0a1f:
      if ((char)param_1[0x1fb] != '\0') {
        uVar6 = param_1[0x1e8];
        uVar5 = uVar6 ^ 0x8000000000000000;
        uVar4 = 2;
        if (uVar5 < 5) {
          uVar4 = uVar5;
        }
        if (uVar4 == 1) {
          uVar6 = param_1[0x1e9];
        }
        else if (uVar4 != 2) goto LAB_003a0dfb;
        if ((uVar6 < 0xfffffffffffffffe) && (uVar6 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
        }
      }
LAB_003a0dfb:
      *(undefined1 *)(param_1 + 0x1fb) = 0;
    }
    else {
      if (cVar1 == '\x04') {
        <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>(param_1 + 0x1fc);
        goto LAB_003a0a1f;
      }
      if (cVar1 == '\x03') {
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>>
                  (param_1 + 0x1ff);
        if (param_1[0x1fc] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        goto LAB_003a0a1f;
      }
    }
    <craggemini_core[66f3c71560d70857]::server::ControlJob>(param_1 + 0x1cd);
    *(undefined1 *)((longlong)param_1 + 0xdfe) = 0;
    lVar7 = param_1[0x67];
    goto joined_r0x003a0c88;
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
    break;
  case 7:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x1c3);
    if (param_1[0x1c0] == 0) break;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    lVar7 = param_1[0x67];
    goto joined_r0x003a0c88;
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
    break;
  case 9:
    if (*(char *)((longlong)param_1 + 0x1a99) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>(param_1 + 0x1e6);
      if (param_1[0x1e3] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (param_1[0x1e2] != 0) {
        plVar2 = param_1 + 0x1e2;
        <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(plVar2);
        plVar3 = (longlong *)*plVar2;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
          ::drop_slow(plVar2);
        }
      }
      *(undefined1 *)(param_1 + 0x353) = 0;
    }
    else if (*(char *)((longlong)param_1 + 0x1a99) == '\0') {
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x1d6);
    }
    if (param_1[0x1cb] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0xdec) = 0;
    *(undefined8 *)((longlong)param_1 + 0xdf6) = 0;
    param_1[0x1be] = 0;
    cVar1 = *(char *)((longlong)param_1 + 0xdef);
    goto joined_r0x003a088f;
  case 10:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x1d6);
    if (param_1[0x1cb] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x1d0);
    goto switchD_003a039f_default;
  case 0xb:
    if ((char)param_1[0x1cd] == '\x04') {
      if ((char)param_1[0x1ce] == '\0') {
        plVar2 = (longlong *)param_1[0x1cf];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = (longlong *)param_1[0x1cf];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x1d0);
    }
    else if (((char)param_1[0x1cd] == '\x03') && ((char)param_1[0x1f0] == '\x03')) {
      (*(code *)PTR_drop_007990e8)();
      if (param_1[0x1ec] != 0) {
        (**(code **)(param_1[0x1ec] + 0x18))();
      }
      if (param_1[0x1da] != 2) {
        if (param_1[0x1da] == 0) {
          plVar2 = (longlong *)param_1[0x1db];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar2 = (longlong *)param_1[0x1db];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x1dc);
      }
      *(undefined1 *)((longlong)param_1 + 0xf81) = 0;
      *(undefined8 *)((longlong)param_1 + 0xdf6) = 0;
      param_1[0x1be] = 0;
      cVar1 = *(char *)((longlong)param_1 + 0xdef);
      goto joined_r0x003a088f;
    }
switchD_003a039f_default:
    *(undefined8 *)((longlong)param_1 + 0xdf6) = 0;
    param_1[0x1be] = 0;
    cVar1 = *(char *)((longlong)param_1 + 0xdef);
joined_r0x003a088f:
    if (cVar1 != '\0') {
      <craggemini_core[66f3c71560d70857]::server::Turn>(param_1 + 0x10e);
    }
    *(undefined1 *)((longlong)param_1 + 0xdef) = 0;
    break;
  case 0xc:
    switch(*(undefined1 *)((longlong)param_1 + 0xee9)) {
    case 3:
      (*(code *)PTR_drop_007990e8)();
      if (param_1[0x1f6] != 0) {
        (**(code **)(param_1[0x1f6] + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (param_1[0x1ff] != 0) {
        (**(code **)(param_1[0x1ff] + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (param_1[0x208] != 0) {
        (**(code **)(param_1[0x208] + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>>
                (param_1 + 0x20c);
      *(undefined1 *)(param_1 + 0x1dd) = 0;
      if (param_1[0x1ee] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>(param_1 + 0x1df);
      break;
    case 4:
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>)>
                (param_1 + 0x1df);
      *(undefined1 *)((longlong)param_1 + 0xee7) = 0;
      if (param_1[0x232] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      break;
    case 5:
      lVar7 = 0xe6;
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>)>
                (param_1 + 0x1df);
LAB_003a0acc:
      *(undefined1 *)((longlong)param_1 + lVar7 + 0xe00) = 0;
      break;
    case 6:
      <craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>(param_1 + 0x1df);
      if (param_1[0x1de] != 0) {
        plVar2 = param_1 + 0x1de;
        <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(plVar2);
        plVar3 = (longlong *)*plVar2;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
          ::drop_slow(plVar2);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0xee5) = 0;
      if (param_1[0x1c0] == 0) {
        lVar7 = 0xe2;
        goto LAB_003a0acc;
      }
      break;
    default:
      goto switchD_003a039f_default;
    }
    *(undefined2 *)((longlong)param_1 + 0xee2) = 0;
    (*(code *)PTR_drop_007990c8)();
    plVar2 = (longlong *)param_1[0x1d4];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    (*(code *)PTR_drop_007990c8)();
    plVar2 = (longlong *)param_1[0x1d3];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    if (param_1[0x1d0] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0xee4) = 0;
    lVar7 = param_1[0x1cd];
    if (lVar7 == -1) goto switchD_003a039f_default;
    goto joined_r0x003a085a;
  case 0xd:
    switch((char)param_1[0x1ce]) {
    case '\x03':
      <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::_closure_0_>
                (param_1 + 0x1dd);
      if (param_1[0x1cf] != 2) {
        if (param_1[0x1cf] == 0) {
          plVar2 = (longlong *)param_1[0x1d0];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar2 = (longlong *)param_1[0x1d0];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x1d1);
      }
      goto switchD_003a052c_default;
    case '\x04':
      if (param_1[0x1cf] != 2) {
        if (param_1[0x1cf] == 0) {
          plVar2 = (longlong *)param_1[0x1d0];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar2 = (longlong *)param_1[0x1d0];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x1d1);
      }
      break;
    case '\x05':
      if ((char)param_1[0x20e] == '\x03') {
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                  (param_1 + 0x1dd);
      }
      break;
    case '\x06':
      if (param_1[0x1cf] != 2) {
        if (param_1[0x1cf] == 0) {
          plVar2 = (longlong *)param_1[0x1d0];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar2 = (longlong *)param_1[0x1d0];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x1d1);
      }
      break;
    default:
      goto switchD_003a052c_default;
    }
    uVar6 = param_1[0x1cd];
    if (((uVar6 != 0 && (char)param_1[0x1cc] == '\0') && (1 < ((uint)uVar6 & 3) - 2)) &&
       ((uVar6 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto switchD_003a052c_default;
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
    goto LAB_003a07ce;
  case 0xf:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
              (param_1 + 0x1c0);
LAB_003a07ce:
    if (param_1[0x1ba] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
switchD_003a052c_default:
    if (*(char *)((longlong)param_1 + 0xdee) != '\0') {
      if ((param_1[0x1b2] != -1) && (param_1[0x1b2] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((param_1[0x1b5] != -1) && (param_1[0x1b5] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (param_1[0x1b8]);
    }
    *(undefined1 *)((longlong)param_1 + 0xdee) = 0;
    lVar7 = param_1[0x1af];
joined_r0x003a085a:
    if (lVar7 == 0) goto switchD_003a039f_default;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    *(undefined8 *)((longlong)param_1 + 0xdf6) = 0;
    param_1[0x1be] = 0;
    cVar1 = *(char *)((longlong)param_1 + 0xdef);
    goto joined_r0x003a088f;
  }
  lVar7 = param_1[0x67];
joined_r0x003a0c88:
  if (lVar7 != -1) {
    if (lVar7 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x6c);
  }
LAB_003a0cad:
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
LAB_003a0cfb:
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
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_003a02ab_caseD_1:
  return;
}


