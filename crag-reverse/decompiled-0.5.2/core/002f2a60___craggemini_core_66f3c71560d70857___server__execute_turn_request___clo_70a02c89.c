// 002f2a60 <craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::execute_turn_request::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  switch(*(undefined1 *)(param_1 + 0x6b6)) {
  case 0:
    if ((*(longlong *)(param_1 + 0x48) != -1) && (*(longlong *)(param_1 + 0x48) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002f2a8b::switchdataD_0018f19c,1);
    }
    if ((*(longlong *)(param_1 + 0x60) != -1) && (*(longlong *)(param_1 + 0x60) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0x78) != -1) && (*(longlong *)(param_1 + 0x78) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0x90) != -1) && (*(longlong *)(param_1 + 0x90) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xa8) != -1) && (*(longlong *)(param_1 + 0xa8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xc0) != -1) && (*(longlong *)(param_1 + 0xc0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xd8) != -1) && (*(longlong *)(param_1 + 0xd8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xf0);
    return;
  default:
    return;
  case 3:
    goto switchD_002f2a8b_caseD_3;
  case 4:
    if (*(longlong *)(param_1 + 0x788) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002f2a8b::switchdataD_0018f19c,1);
    }
    break;
  case 5:
    <craggemini_core[66f3c71560d70857]::server::dispatch_pool_turn::_closure_0_>(param_1 + 0x6e0);
    break;
  case 6:
    <craggemini_core[66f3c71560d70857]::server::dispatch_turn::_closure_0_>(param_1 + 0x6e0);
  }
  if (((*(char *)(param_1 + 0x6cd) != '\0') && (*(longlong *)(param_1 + 0x770) != -1)) &&
     (*(longlong *)(param_1 + 0x770) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6cd) = 0;
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x6ce) != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x768);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x760) + 0x20;
      do {
        if (*(longlong *)(lVar4 + -0x20) != 0) {
          (*(code *)puVar2)();
        }
        if (*(longlong *)(lVar4 + -8) != 0) {
          (*(code *)puVar2)();
        }
        lVar4 = lVar4 + 0x30;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(longlong *)(param_1 + 0x758) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x6ce) = 0;
  if (*(char *)(param_1 + 0x6cf) != '\0') {
    <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x7a0);
  }
  *(undefined1 *)(param_1 + 0x6cf) = 0;
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x6d0) != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x750);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x748) + 8;
      do {
        if (*(longlong *)(lVar4 + -8) != 0) {
          (*(code *)puVar2)();
        }
        lVar4 = lVar4 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(longlong *)(param_1 + 0x740) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  if (((*(char *)(param_1 + 0x6d1) != '\0') && (*(longlong *)(param_1 + 0x728) != -1)) &&
     (*(longlong *)(param_1 + 0x728) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6d1) = 0;
  if (((*(char *)(param_1 + 0x6d2) != '\0') && (*(longlong *)(param_1 + 0x698) != -1)) &&
     (*(longlong *)(param_1 + 0x698) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6d2) = 0;
  if ((*(char *)(param_1 + 0x6d3) != '\0') && (*(longlong *)(param_1 + 0x710) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6d3) = 0;
  if (((*(char *)(param_1 + 0x6d4) != '\0') && (*(longlong *)(param_1 + 0x6f8) != -1)) &&
     (<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                (*(undefined8 *)(param_1 + 0x700),*(undefined8 *)(param_1 + 0x708)),
     *(longlong *)(param_1 + 0x6f8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6d4) = 0;
  if ((*(longlong *)(param_1 + 0x680) != -1) && (*(longlong *)(param_1 + 0x680) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x550) != -1) {
    if (*(longlong *)(param_1 + 0x5c8) != -1) {
      if (*(longlong *)(param_1 + 0x5c8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x5e0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x5f8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if ((*(longlong *)(param_1 + 0x630) != -1) && (*(longlong *)(param_1 + 0x630) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x6dd) = 0;
  *(undefined8 *)(param_1 + 0x6d5) = 0;
  if ((*(char *)(param_1 + 0x6c1) != '\0') && (*(longlong *)(param_1 + 0x538) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6c1) = 0;
  if (((*(char *)(param_1 + 0x6c2) != '\0') && (1 < *(byte *)(param_1 + 2000))) &&
     (*(longlong *)(param_1 + 0x7d8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6c2) = 0;
  if (((*(char *)(param_1 + 0x6c3) != '\0') && (*(longlong *)(param_1 + 0x6e0) != -1)) &&
     (*(longlong *)(param_1 + 0x6e0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6c3) = 0;
  if ((*(char *)(param_1 + 0x6c0) != '\0') && (*(longlong *)(param_1 + 0x518) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6c0) = 0;
  if ((*(char *)(param_1 + 0x6c4) != '\0') && (*(longlong *)(param_1 + 0x500) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6c4) = 0;
  if (((*(char *)(param_1 + 0x6c6) != '\0') && (*(longlong *)(param_1 + 0x4b0) != -1)) &&
     (*(longlong *)(param_1 + 0x4b0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar3 = *(longlong *)(param_1 + 0x248);
  for (lVar4 = *(longlong *)(param_1 + 0x250) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>(lVar3);
    lVar3 = lVar3 + 0x90;
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 0x268);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x260) + 0x38;
    do {
      if (*(longlong *)(lVar4 + -0x38) != 0) {
        (*(code *)puVar2)();
      }
      if (*(longlong *)(lVar4 + -0x20) != 0) {
        (*(code *)puVar2)();
      }
      if ((*(longlong *)(lVar4 + -8) != -1) && (*(longlong *)(lVar4 + -8) != 0)) {
        (*(code *)puVar2)();
      }
      lVar4 = lVar4 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(char *)(param_1 + 0x6c5) != '\0') {
    <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x270);
  }
  if ((*(longlong *)(param_1 + 0x4c8) != -1) && (*(longlong *)(param_1 + 0x4c8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x488) != -1) && (*(longlong *)(param_1 + 0x488) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x4e0) != -1) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined2 *)(param_1 + 0x6c5) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  plVar1 = *(longlong **)(param_1 + 0x218);
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x6c8) != '\0') {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x218);
      }
    }
    if (*(char *)(param_1 + 0x6c7) != '\0') {
      plVar1 = *(longlong **)(param_1 + 0x220);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow((undefined8 *)(param_1 + 0x220));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x6c7) = 0;
switchD_002f2a8b_caseD_3:
  if ((*(longlong *)(param_1 + 0x200) != -1) && (*(longlong *)(param_1 + 0x200) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x1e8) != -1) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x1d0) != -1) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6de) = 0;
  if ((*(longlong *)(param_1 + 0x1b8) != -1) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x1a0) != -1) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x180);
  if ((*(longlong *)(param_1 + 0x138) != -1) && (*(longlong *)(param_1 + 0x138) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(char *)(param_1 + 0x6c9) != '\0') && (*(longlong *)(param_1 + 0x120) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined4 *)(param_1 + 0x6c9) = 0;
  return;
}


