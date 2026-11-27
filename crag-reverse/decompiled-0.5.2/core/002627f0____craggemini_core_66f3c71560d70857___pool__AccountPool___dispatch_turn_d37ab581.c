// 002627f0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_>
          (longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  switch(*(undefined1 *)(param_1 + 0x3b98)) {
  case 0:
    plVar5 = *(longlong **)(param_1 + 0x3c8);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x3c8);
    }
    <craggemini_core[66f3c71560d70857]::server::Turn>(param_1);
    plVar5 = *(longlong **)(param_1 + 0x3f8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
        ::drop_slow(param_1 + 0x3f8);
      }
    }
    plVar5 = *(longlong **)(param_1 + 0x400);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
      ::drop_slow(param_1 + 0x400);
      return;
    }
    return;
  default:
    goto switchD_0026281a_caseD_1;
  case 3:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_>
              (param_1 + 0x3bb8);
    goto LAB_00262e59;
  case 4:
    if (*(char *)(param_1 + 0x3dc8) == '\x03') {
      <(<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::_closure_0_,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep)>
                (param_1 + 0x3bf8);
      *(undefined1 *)(param_1 + 0x3dca) = 0;
    }
    goto LAB_00262df7;
  case 5:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::_closure_0_>
              (param_1 + 0x3bb8);
    if (*(char *)(param_1 + 0x3ba4) == '\0') goto LAB_00262df7;
    goto LAB_00262dc4;
  case 6:
    if ((*(char *)(param_1 + 0x3f48) == '\x03') &&
       (<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
                  (param_1 + 0x3c00), *(longlong *)(param_1 + 0x3be8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    cVar7 = *(char *)(param_1 + 0x3ba9);
    goto joined_r0x0026298d;
  case 7:
    if ((*(char *)(param_1 + 0x4fd8) == '\x03') &&
       (<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
                  (param_1 + 0x4c90), *(longlong *)(param_1 + 0x4c78) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x4400);
    *(undefined1 *)(param_1 + 0x3baf) = 0;
    cVar7 = *(char *)(param_1 + 0x3ba9);
joined_r0x0026298d:
    if (cVar7 != '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x21c8);
    }
    *(undefined1 *)(param_1 + 0x3ba9) = 0;
    break;
  case 8:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
              (param_1 + 0x3bb8);
    break;
  case 9:
    if (*(char *)(param_1 + 0x4d40) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0x3be0);
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x4d40) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0x3be0);
    }
    if ((*(longlong *)(param_1 + 0x4d48) != -1) && (*(longlong *)(param_1 + 0x4d48) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0x4d60) != -1) && (*(longlong *)(param_1 + 0x4d60) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
              (*(undefined8 *)(param_1 + 0x4d78));
    break;
  case 0xb:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::_closure_0_>
              (param_1 + 0x3bb8);
    if (*(char *)(param_1 + 0x3ba8) == '\0') break;
    goto LAB_00262d1b;
  case 0xc:
    if (*(char *)(param_1 + 0x63f0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x4c58);
      piVar3 = *(int **)(param_1 + 0x4c50);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        uVar4 = *(ulonglong *)puVar6;
joined_r0x002633f5:
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          if (cVar7 == '\0') {
            *(undefined1 *)(piVar3 + 1) = 1;
          }
        }
      }
      else {
        cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        if (cVar7 != '\0') {
          uVar4 = *(ulonglong *)puVar6;
          goto joined_r0x002633f5;
        }
      }
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      lVar9 = 0x63f1;
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      goto LAB_00262c99;
    }
    if (*(char *)(param_1 + 0x63f0) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x3bb8);
    }
    goto LAB_00262a37;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
              (param_1 + 0x3bb8);
    goto LAB_002629b3;
  case 0xe:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::_closure_0_>
              (param_1 + 0x4400);
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x3bb8);
    *(undefined1 *)(param_1 + 0x3bae) = 0;
LAB_002629b3:
    if ((*(longlong *)(param_1 + 0x3338) != -1) && (*(longlong *)(param_1 + 0x3338) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x32d0) != -1) {
      if (*(longlong *)(param_1 + 0x32d0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x32e8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x3300) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
LAB_00262a37:
    lVar9 = *(longlong *)(param_1 + 0x3258);
joined_r0x00262ca6:
    if (lVar9 == -1) {
      if (*(char *)(param_1 + 0x3ba3) != '\0') {
        if ((*(longlong *)(param_1 + 0x3260) != -1) && (*(longlong *)(param_1 + 0x3260) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x3278) != -1) && (*(longlong *)(param_1 + 0x3278) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (*(undefined8 *)(param_1 + 0x3290));
      }
    }
    else if (*(char *)(param_1 + 0x3ba2) != '\0') {
      <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(param_1 + 0x3258);
    }
    *(undefined2 *)(param_1 + 0x3ba2) = 0;
    if (*(char *)(param_1 + 0x3ba8) != '\0') {
LAB_00262d1b:
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x1138);
    }
    break;
  case 0xf:
    if (*(char *)(param_1 + 0x6c58) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x54c0);
      piVar3 = *(int **)(param_1 + 0x54b8);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        uVar4 = *(ulonglong *)puVar6;
joined_r0x0026338c:
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          if (cVar7 == '\0') {
            *(undefined1 *)(piVar3 + 1) = 1;
          }
        }
      }
      else {
        cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        if (cVar7 != '\0') {
          uVar4 = *(ulonglong *)puVar6;
          goto joined_r0x0026338c;
        }
      }
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x6c59) = 0;
    }
    else if (*(char *)(param_1 + 0x6c58) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x4420);
    }
    *(undefined1 *)(param_1 + 0x3bac) = 0;
    lVar9 = 0x3bad;
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x4400);
LAB_00262c99:
    *(undefined1 *)(param_1 + lVar9) = 0;
    lVar9 = *(longlong *)(param_1 + 0x3258);
    goto joined_r0x00262ca6;
  }
  *(undefined1 *)(param_1 + 0x3ba8) = 0;
  if ((*(longlong *)(param_1 + 0x1120) != -1) && (*(longlong *)(param_1 + 0x1120) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x10b8) != -1) {
    if (*(longlong *)(param_1 + 0x10b8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x10d0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x10e8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined2 *)(param_1 + 0x3bb0) = 0;
  if (*(char *)(param_1 + 0x3ba4) != '\0') {
LAB_00262dc4:
    if (*(longlong *)(param_1 + 0x858) != 0) {
      (*(code *)PTR_release_00799050)();
      plVar5 = *(longlong **)(param_1 + 0x858);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::
        drop_slow((undefined8 *)(param_1 + 0x858),1);
      }
    }
  }
LAB_00262df7:
  *(undefined1 *)(param_1 + 0x3ba4) = 0;
  plVar5 = *(longlong **)(param_1 + 0x850);
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_1 + 0x850);
  }
  if ((*(longlong *)(param_1 + 0x838) != -1) && (*(longlong *)(param_1 + 0x838) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x820) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_00262e59:
  if ((*(char *)(param_1 + 0x3ba5) != '\0') &&
     (plVar5 = *(longlong **)(param_1 + 0x800), plVar5 != (longlong *)0x0)) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
      ::drop_slow(param_1 + 0x800);
    }
  }
  *(undefined1 *)(param_1 + 0x3ba5) = 0;
  if ((*(char *)(param_1 + 0x3ba6) != '\0') &&
     (plVar5 = *(longlong **)(param_1 + 0x7f8), plVar5 != (longlong *)0x0)) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
      ::drop_slow(param_1 + 0x7f8);
    }
  }
  *(undefined1 *)(param_1 + 0x3ba6) = 0;
  if ((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 0x490) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(char *)(param_1 + 0x3bab) != '\0') && (*(longlong *)(param_1 + 0x4a8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') &&
      (((*(longlong *)(param_1 + 0x6f0) == -1 || (*(longlong *)(param_1 + 0x6f0) == 0)) ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) == '\x01')))) &&
     (((*(longlong *)(param_1 + 0x708) == -1 || (*(longlong *)(param_1 + 0x708) == 0)) ||
      ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) == '\x01')))) {
    puVar6 = PTR___rust_dealloc_00798fc8;
    lVar9 = *(longlong *)(param_1 + 0x4d0);
    if (lVar9 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x4c8) + 0x20;
      do {
        if (*(longlong *)(lVar10 + -0x20) != 0) {
          (*(code *)puVar6)();
        }
        if (*(longlong *)(lVar10 + -8) != 0) {
          (*(code *)puVar6)();
        }
        lVar10 = lVar10 + 0x30;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(char *)(param_1 + 0x3baa) == '\x01') {
      if (*(longlong *)(param_1 + 0x720) != -1) {
        <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                  (*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730));
        if (*(longlong *)(param_1 + 0x720) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(char *)(param_1 + 0x3baa) == '\0') goto LAB_0026311d;
      }
      <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x4d8);
      if ((*(char *)(param_1 + 0x3baa) != '\0') &&
         ((((*(longlong *)(param_1 + 0x738) == -1 || (*(longlong *)(param_1 + 0x738) == 0)) ||
           ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')) &&
          (((*(longlong *)(param_1 + 0x750) == -1 || (*(longlong *)(param_1 + 0x750) == 0)) ||
           ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')))))) {
        <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop((longlong *)(param_1 + 0x6a8));
        if (*(longlong *)(param_1 + 0x6a8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(char *)(param_1 + 0x3baa) != '\0') {
          plVar5 = *(longlong **)(param_1 + 0x7c8);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
            ::drop_slow(param_1 + 0x7c8);
          }
        }
      }
    }
  }
LAB_0026311d:
  if ((*(char *)(param_1 + 0x3baa) != '\0') &&
     ((((*(longlong *)(param_1 + 0x768) == -1 || (*(longlong *)(param_1 + 0x768) == 0)) ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')) &&
      ((((*(longlong *)(param_1 + 0x780) == -1 || (*(longlong *)(param_1 + 0x780) == 0)) ||
        ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')) &&
       (((((*(longlong *)(param_1 + 0x798) == -1 || (*(longlong *)(param_1 + 0x798) == 0)) ||
          ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')) &&
         ((<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x6c0),
          *(char *)(param_1 + 0x3baa) != '\0' && (*(longlong *)(param_1 + 0x430) != 0)))) &&
        (lVar9 = *(longlong *)(param_1 + 0x438), lVar9 != 0)))))))) {
    uVar8 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar8 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar9 + 0x60) + 0x10))();
    }
    plVar5 = *(longlong **)(param_1 + 0x438);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x438));
      }
    }
  }
  if ((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 2000) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 2000);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1);
    plVar5 = (longlong *)*puVar1;
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 0x440) != 0)) &&
     (lVar9 = *(longlong *)(param_1 + 0x448), lVar9 != 0)) {
    uVar8 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar8 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar9 + 0x60) + 0x10))();
    }
    plVar5 = *(longlong **)(param_1 + 0x448);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x448));
      }
    }
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 0x450) != 0)) &&
     (lVar9 = *(longlong *)(param_1 + 0x458), lVar9 != 0)) {
    uVar8 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar8 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x10))();
    }
    plVar5 = *(longlong **)(param_1 + 0x458);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x458));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x3baa) = 0;
  if (*(char *)(param_1 + 0x3ba7) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x410);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x410);
    }
  }
  *(undefined1 *)(param_1 + 0x3ba7) = 0;
switchD_0026281a_caseD_1:
  return;
}


