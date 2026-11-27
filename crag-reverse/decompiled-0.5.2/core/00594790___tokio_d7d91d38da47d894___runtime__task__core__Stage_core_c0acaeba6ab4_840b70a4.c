// 00594790 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>>>

/* WARNING: Switch with 1 destination removed at 0x00594eeb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>>>>
          (int *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  if (*param_1 != 0) {
    if (((*param_1 != 1) || (*(longlong *)(param_1 + 2) == 0)) || (*(longlong *)(param_1 + 4) == 0))
    {
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 6);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    if (puVar1[1] == 0) {
      return;
    }
    goto LAB_00594edf;
  }
  puVar1 = *(undefined8 **)(param_1 + 2);
  switch(*(undefined1 *)(puVar1 + 0x42)) {
  case 0:
    (*(code *)PTR_drop_007990c8)();
    plVar3 = (longlong *)*puVar1;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    (*(code *)PTR_drop_007990c8)();
    plVar3 = (longlong *)puVar1[1];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    goto LAB_00594eb4;
  default:
    goto switchD_00594804_caseD_1;
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (puVar1[0x4b] != 0) {
      (**(code **)(puVar1[0x4b] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (puVar1[0x54] != 0) {
      (**(code **)(puVar1[0x54] + 0x18))();
    }
    if (*(char *)(puVar1 + 0x58) == '\0') {
      plVar3 = (longlong *)puVar1[0x59];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar3 = (longlong *)puVar1[0x59];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(puVar1 + 0x5a)
    ;
    goto LAB_00594e7a;
  case 4:
    if (*(char *)((longlong)puVar1 + 0x10b9) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (puVar1 + 0x9b);
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1 + 0x43);
      *(undefined1 *)(puVar1 + 0x217) = 0;
    }
    break;
  case 5:
    if (*(char *)(puVar1 + 0x4a) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_>
                (puVar1 + 0x4d);
    }
    else {
      if (*(char *)(puVar1 + 0x4a) != '\x03') break;
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_>
                (puVar1 + 0x4d);
    }
    if (puVar1[0x49] != 0) {
      puVar7 = (undefined8 *)puVar1[0x48];
      lVar5 = 1 - puVar1[0x49];
      do {
        plVar3 = (longlong *)*puVar7;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(puVar7);
        }
        puVar7 = puVar7 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 1);
    }
    if (puVar1[0x47] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 6:
    if (*(char *)((longlong)puVar1 + 0x36a) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
                (puVar1 + 0x8b);
      plVar3 = (longlong *)puVar1[0x8a];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(puVar1 + 0x8a);
      }
      <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(puVar1 + 0x6e);
      if (*(int *)(puVar1 + 0x50) == 2) {
        <craggemini_core[66f3c71560d70857]::protocol::Failure>(puVar1 + 0x51);
      }
    }
    else {
      if (*(char *)((longlong)puVar1 + 0x36a) != '\x03') goto LAB_00594e5b;
      if (*(char *)(puVar1 + 0x2e5) == '\x03') {
        <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
                  (puVar1 + 0x75);
        plVar3 = (longlong *)puVar1[0x74];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(puVar1 + 0x74);
        }
      }
    }
    *(undefined1 *)(puVar1 + 0x6d) = 0;
    if (puVar1[0x4d] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    lVar5 = puVar1[0x44];
    *(undefined1 *)((longlong)puVar1 + 0x369) = 0;
    puVar4 = PTR___rust_dealloc_00798fc8;
    if (puVar1[0x46] != lVar5) {
      uVar6 = (ulonglong)(puVar1[0x46] - lVar5) / 0x18;
      lVar5 = lVar5 + 8;
      do {
        if (*(longlong *)(lVar5 + -8) != 0) {
          (*(code *)puVar4)();
        }
        lVar5 = lVar5 + 0x18;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (puVar1[0x45] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_00594e5b;
  case 7:
    switch(*(undefined1 *)(puVar1 + 0x55)) {
    case 3:
      switch(*(undefined1 *)((longlong)puVar1 + 0x35f)) {
      case 3:
        <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                  (puVar1 + 0x70);
        if ((puVar1[0x6d] != -1) && (puVar1[0x6d] != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)((longlong)puVar1 + 0x35c) = 0;
        plVar3 = (longlong *)puVar1[0x6c];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
          ::drop_slow(puVar1 + 0x6c);
        }
        break;
      case 4:
        if (*(char *)(puVar1 + 0x79) == '\x04') {
          <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                    (puVar1 + 0x7a);
        }
        else if (*(char *)(puVar1 + 0x79) == '\x03') {
          <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                    (puVar1 + 0x7c);
        }
        if (puVar1[0x70] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((puVar1[0x6d] != -1) && (puVar1[0x6d] != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)((longlong)puVar1 + 0x35b) = 0;
        plVar3 = (longlong *)puVar1[0x6c];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
          ::drop_slow(puVar1 + 0x6c);
        }
        break;
      case 5:
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
                  (puVar1 + 0x6c);
        break;
      case 6:
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
                  (puVar1 + 0x6c);
        break;
      default:
        goto switchD_0059489e_default;
      }
      if (puVar1[0x5b] != -2) {
        if (*(char *)((longlong)puVar1 + 0x35a) != '\0') {
          plVar3 = (longlong *)puVar1[0x5a];
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
            ::drop_slow();
          }
        }
        if (((*(char *)((longlong)puVar1 + 0x359) != '\0') && (puVar1[0x5b] != -1)) &&
           (puVar1[0x5b] != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      *(undefined2 *)((longlong)puVar1 + 0x359) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x35d) = 0;
      break;
    case 4:
      if (*(char *)((longlong)puVar1 + 0x3399) == '\x03') {
        if (*(char *)(puVar1 + 0x55d) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                    (puVar1 + 0x26a);
          <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(puVar1 + 0x269);
          *(undefined1 *)((longlong)puVar1 + 0x2ae9) = 0;
        }
        else if (*(char *)(puVar1 + 0x55d) == '\0') {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(puVar1 + 0x56);
        }
        <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar1 + 0x55e);
        *(undefined1 *)(puVar1 + 0x673) = 0;
      }
      break;
    case 5:
      if (*(char *)((longlong)puVar1 + 0x391) == '\x04') {
        if (*(char *)(puVar1 + 0x683) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                    (puVar1 + 0x390);
          <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(puVar1 + 0x38f);
          *(undefined1 *)((longlong)puVar1 + 0x3419) = 0;
        }
        else if (*(char *)(puVar1 + 0x683) == '\0') {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(puVar1 + 0x17c);
        }
        *(undefined1 *)(puVar1 + 0x72) = 0;
      }
      else {
        if (*(char *)((longlong)puVar1 + 0x391) != '\x03') break;
        if (*(char *)(puVar1 + 0x2a4) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                    (puVar1 + 0x78);
        }
      }
      if (puVar1[0x6b] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (puVar1[0x68] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,usize)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1 + 0x56);
      break;
    case 6:
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::_closure_0_>
                (puVar1 + 0x56);
    }
switchD_0059489e_default:
    plVar3 = (longlong *)puVar1[0x46];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(puVar1 + 0x46);
    }
    plVar3 = (longlong *)puVar1[0x44];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(puVar1 + 0x44);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1 + 0x895);
LAB_00594e5b:
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(puVar1 + 0x14);
  }
  plVar3 = (longlong *)puVar1[3];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::
    drop_slow(puVar1 + 3);
  }
LAB_00594e7a:
  (*(code *)PTR_drop_007990c8)();
  plVar3 = (longlong *)*puVar1;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar3 = (longlong *)puVar1[1];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
LAB_00594eb4:
  if (puVar1[2] != -1) {
    LOCK();
    plVar3 = (longlong *)(puVar1[2] + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
switchD_00594804_caseD_1:
LAB_00594edf:
  (*(code *)PTR_free_0079adc8)();
  return;
}


