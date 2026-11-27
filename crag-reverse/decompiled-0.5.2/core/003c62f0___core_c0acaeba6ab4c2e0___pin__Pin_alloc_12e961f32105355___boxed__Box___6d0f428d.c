// 003c62f0 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>>

/* WARNING: Switch with 1 destination removed at 0x003c69ef */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  switch(*(undefined1 *)(param_1 + 0x42)) {
  case 0:
    (*(code *)PTR_drop_007990c8)();
    plVar1 = (longlong *)*param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    (*(code *)PTR_drop_007990c8)();
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    goto LAB_003c69b8;
  default:
    goto switchD_003c631b_caseD_1;
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x4b] != 0) {
      (**(code **)(param_1[0x4b] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0x54] != 0) {
      (**(code **)(param_1[0x54] + 0x18))();
    }
    if (*(char *)(param_1 + 0x58) == '\0') {
      plVar1 = (longlong *)param_1[0x59];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = (longlong *)param_1[0x59];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x5a);
    goto LAB_003c697e;
  case 4:
    if (*(char *)((longlong)param_1 + 0x10b9) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x9b);
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x43);
      *(undefined1 *)(param_1 + 0x217) = 0;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x4a) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_>
                (param_1 + 0x4d);
    }
    else {
      if (*(char *)(param_1 + 0x4a) != '\x03') break;
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_>
                (param_1 + 0x4d);
    }
    if (param_1[0x49] != 0) {
      puVar5 = (undefined8 *)param_1[0x48];
      lVar3 = 1 - param_1[0x49];
      do {
        plVar1 = (longlong *)*puVar5;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(puVar5);
        }
        puVar5 = puVar5 + 1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
    if (param_1[0x47] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 6:
    if (*(char *)((longlong)param_1 + 0x36a) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
                (param_1 + 0x8b);
      plVar1 = (longlong *)param_1[0x8a];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x8a);
      }
      <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(param_1 + 0x6e);
      if (*(int *)(param_1 + 0x50) == 2) {
        <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 0x51);
      }
    }
    else {
      if (*(char *)((longlong)param_1 + 0x36a) != '\x03') goto LAB_003c695f;
      if (*(char *)(param_1 + 0x2e5) == '\x03') {
        <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
                  (param_1 + 0x75);
        plVar1 = (longlong *)param_1[0x74];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x74);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x6d) = 0;
    if (param_1[0x4d] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    lVar3 = param_1[0x44];
    *(undefined1 *)((longlong)param_1 + 0x369) = 0;
    puVar2 = PTR___rust_dealloc_00798fc8;
    if (param_1[0x46] != lVar3) {
      uVar4 = (ulonglong)(param_1[0x46] - lVar3) / 0x18;
      lVar3 = lVar3 + 8;
      do {
        if (*(longlong *)(lVar3 + -8) != 0) {
          (*(code *)puVar2)();
        }
        lVar3 = lVar3 + 0x18;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[0x45] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_003c695f;
  case 7:
    switch(*(undefined1 *)(param_1 + 0x55)) {
    case 3:
      switch(*(undefined1 *)((longlong)param_1 + 0x35f)) {
      case 3:
        <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                  (param_1 + 0x70);
        if (0 < (longlong)param_1[0x6d]) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)((longlong)param_1 + 0x35c) = 0;
        plVar1 = (longlong *)param_1[0x6c];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
          ::drop_slow(param_1 + 0x6c);
        }
        break;
      case 4:
        if (*(char *)(param_1 + 0x79) == '\x04') {
          <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                    (param_1 + 0x7a);
        }
        else if (*(char *)(param_1 + 0x79) == '\x03') {
          <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                    (param_1 + 0x7c);
        }
        if (param_1[0x70] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (0 < (longlong)param_1[0x6d]) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)((longlong)param_1 + 0x35b) = 0;
        plVar1 = (longlong *)param_1[0x6c];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
          ::drop_slow(param_1 + 0x6c);
        }
        break;
      case 5:
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
                  (param_1 + 0x6c);
        break;
      case 6:
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
                  (param_1 + 0x6c);
        break;
      default:
        goto switchD_003c63b5_default;
      }
      if (param_1[0x5b] != -2) {
        if (*(char *)((longlong)param_1 + 0x35a) != '\0') {
          plVar1 = (longlong *)param_1[0x5a];
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
            ::drop_slow();
          }
        }
        if ((*(char *)((longlong)param_1 + 0x359) != '\0') && (0 < (longlong)param_1[0x5b])) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      *(undefined2 *)((longlong)param_1 + 0x359) = 0;
      *(undefined2 *)((longlong)param_1 + 0x35d) = 0;
      break;
    case 4:
      if (*(char *)((longlong)param_1 + 0x3399) == '\x03') {
        if (*(char *)(param_1 + 0x55d) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                    (param_1 + 0x26a);
          <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(param_1 + 0x269);
          *(undefined1 *)((longlong)param_1 + 0x2ae9) = 0;
        }
        else if (*(char *)(param_1 + 0x55d) == '\0') {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x56);
        }
        <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x55e);
        *(undefined1 *)(param_1 + 0x673) = 0;
      }
      break;
    case 5:
      if (*(char *)((longlong)param_1 + 0x391) == '\x04') {
        if (*(char *)(param_1 + 0x683) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                    (param_1 + 0x390);
          <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(param_1 + 0x38f);
          *(undefined1 *)((longlong)param_1 + 0x3419) = 0;
        }
        else if (*(char *)(param_1 + 0x683) == '\0') {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x17c);
        }
        *(undefined1 *)(param_1 + 0x72) = 0;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x391) != '\x03') break;
        if (*(char *)(param_1 + 0x2a4) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                    (param_1 + 0x78);
        }
      }
      if (param_1[0x6b] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (param_1[0x68] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,usize)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x56);
      break;
    case 6:
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::_closure_0_>
                (param_1 + 0x56);
    }
switchD_003c63b5_default:
    plVar1 = (longlong *)param_1[0x46];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x46);
    }
    plVar1 = (longlong *)param_1[0x44];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x44);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x895);
LAB_003c695f:
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x14);
  }
  plVar1 = (longlong *)param_1[3];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::
    drop_slow(param_1 + 3);
  }
LAB_003c697e:
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
LAB_003c69b8:
  if (param_1[2] != -1) {
    LOCK();
    plVar1 = (longlong *)(param_1[2] + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
switchD_003c631b_caseD_1:
  (*(code *)PTR_free_0079adc8)();
  return;
}


