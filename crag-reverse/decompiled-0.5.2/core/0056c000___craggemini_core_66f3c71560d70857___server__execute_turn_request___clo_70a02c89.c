// 0056c000 <craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::execute_turn_request::_closure_0_>
          (longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  switch(*(undefined1 *)(param_1 + 0x6b6)) {
  case 0:
    if ((*(longlong *)(param_1 + 0x48) != -1) && (*(longlong *)(param_1 + 0x48) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0056c02b::switchdataD_0019c300,1);
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
    goto switchD_0056c02b_caseD_1;
  case 3:
    goto switchD_0056c02b_caseD_3;
  case 4:
    param_2 = *(longlong *)(param_1 + 0x788);
joined_r0x0056c92f:
    if (param_2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0xba5);
    if (cVar1 == '\x04') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0xc00) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xc00) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                (param_1 + 0xbc8);
      *(undefined1 *)(param_1 + 0xba6) = 0;
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          plVar2 = *(longlong **)(param_1 + 0xa78);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
            ::drop_slow(param_1 + 0xa78);
          }
          plVar2 = *(longlong **)(param_1 + 0xa80);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
            ::drop_slow(param_1 + 0xa80);
          }
          if (*(longlong *)(param_1 + 0x710) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if (*(longlong *)(param_1 + 0x728) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if (*(longlong *)(param_1 + 0x740) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if ((*(longlong *)(param_1 + 0x988) != -1) && (*(longlong *)(param_1 + 0x988) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if ((*(longlong *)(param_1 + 0x9a0) != -1) && (*(longlong *)(param_1 + 0x9a0) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          puVar3 = PTR___rust_dealloc_00798fc8;
          lVar4 = *(longlong *)(param_1 + 0x768);
          if (lVar4 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x760) + 0x20;
            do {
              if (*(longlong *)(lVar6 + -0x20) != 0) {
                (*(code *)puVar3)();
              }
              if (*(longlong *)(lVar6 + -8) != 0) {
                (*(code *)puVar3)();
              }
              lVar6 = lVar6 + 0x30;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          if (*(longlong *)(param_1 + 0x758) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if ((1 < *(byte *)(param_1 + 0xa50)) && (*(longlong *)(param_1 + 0xa58) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if ((*(longlong *)(param_1 + 0x9b8) != -1) &&
             (<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                        (*(undefined8 *)(param_1 + 0x9c0),*(undefined8 *)(param_1 + 0x9c8)),
             *(longlong *)(param_1 + 0x9b8) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x770);
          if ((*(longlong *)(param_1 + 0x9d0) != -1) && (*(longlong *)(param_1 + 0x9d0) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          lVar4 = *(longlong *)(param_1 + 0x9e8);
          if ((lVar4 != -1) && (lVar4 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          puVar3 = PTR___rust_dealloc_00798fc8;
          lVar6 = *(longlong *)(param_1 + 0x950);
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x948) + 8;
            do {
              lVar4 = *(longlong *)(lVar5 + -8);
              if (lVar4 != 0) {
                (*(code *)puVar3)();
              }
              lVar5 = lVar5 + 0x18;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          if (*(longlong *)(param_1 + 0x940) != 0) {
            lVar4 = *(longlong *)(param_1 + 0x940) * 0x18;
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x958,lVar4);
          if ((*(longlong *)(param_1 + 0xa00) != -1) && (*(longlong *)(param_1 + 0xa00) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if ((*(longlong *)(param_1 + 0xa18) != -1) && (*(longlong *)(param_1 + 0xa18) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          param_2 = *(longlong *)(param_1 + 0xa30);
          goto joined_r0x0056c926;
        }
        break;
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0xc00) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xc00) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                (param_1 + 0xbc8);
      *(undefined1 *)(param_1 + 0xba7) = 0;
    }
    if ((*(longlong *)(param_1 + 0xb88) != -1) && (*(longlong *)(param_1 + 0xb88) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xba8) = 0;
    if (*(longlong *)(param_1 + 0xb70) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0xb58) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0xb40) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    plVar2 = *(longlong **)(param_1 + 0xb38);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 0xb38);
    }
    <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>(param_1 + 0xb30);
    *(undefined2 *)(param_1 + 0xba9) = 0;
    *(undefined1 *)(param_1 + 0xbab) = 0;
    param_2 = *(longlong *)(param_1 + 0xb00);
    if ((param_2 != -1) && (param_2 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined8 *)(param_1 + 0xbac) = 0;
    if ((1 < *(byte *)(param_1 + 0xa98)) && (param_2 = *(longlong *)(param_1 + 0xaa0), param_2 != 0)
       ) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xbbc) = 0;
    *(undefined8 *)(param_1 + 0xbb4) = 0;
    break;
  case 6:
    switch(*(undefined1 *)(param_1 + 0xb8d)) {
    case 0:
      if (*(longlong *)(param_1 + 0x710) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0056c2e7::switchdataD_0019c31c,1);
      }
      if (*(longlong *)(param_1 + 0x728) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x970) != -1) && (*(longlong *)(param_1 + 0x970) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x988) != -1) && (*(longlong *)(param_1 + 0x988) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      puVar3 = PTR___rust_dealloc_00798fc8;
      lVar4 = *(longlong *)(param_1 + 0x750);
      if (lVar4 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x748) + 0x20;
        do {
          if (*(longlong *)(lVar6 + -0x20) != 0) {
            (*(code *)puVar3)();
          }
          if (*(longlong *)(lVar6 + -8) != 0) {
            (*(code *)puVar3)();
          }
          lVar6 = lVar6 + 0x30;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (*(longlong *)(param_1 + 0x740) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((1 < *(byte *)(param_1 + 0xa38)) && (*(longlong *)(param_1 + 0xa40) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x9a0) != -1) &&
         (<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                    (*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0x9b0)),
         *(longlong *)(param_1 + 0x9a0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x758);
      if ((*(longlong *)(param_1 + 0x9b8) != -1) && (*(longlong *)(param_1 + 0x9b8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      lVar4 = *(longlong *)(param_1 + 0x9d0);
      if ((lVar4 != -1) && (lVar4 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      puVar3 = PTR___rust_dealloc_00798fc8;
      lVar6 = *(longlong *)(param_1 + 0x938);
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x930) + 8;
        do {
          lVar4 = *(longlong *)(lVar5 + -8);
          if (lVar4 != 0) {
            (*(code *)puVar3)();
          }
          lVar5 = lVar5 + 0x18;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (*(longlong *)(param_1 + 0x928) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x928) * 0x18;
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x940,lVar4);
      if ((*(longlong *)(param_1 + 0x9e8) != -1) && (*(longlong *)(param_1 + 0x9e8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0xa00) != -1) && (*(longlong *)(param_1 + 0xa00) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      param_2 = *(longlong *)(param_1 + 0xa18);
joined_r0x0056c926:
      if (param_2 != -1) goto joined_r0x0056c92f;
      break;
    case 3:
      <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::_closure_0_>
                (param_1 + 0xba8);
      goto LAB_0056c9d0;
    case 4:
      if (*(char *)(param_1 + 3000) == '\0') {
        plVar2 = *(longlong **)(param_1 + 0xbc0);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0xbc0);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xbc8);
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0xc58) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xc58) + 0x18))();
      }
      goto LAB_0056c97f;
    case 5:
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                (param_1 + 0xba8);
LAB_0056c97f:
      if (*(char *)(param_1 + 0xb8f) != '\0') {
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                  (param_1 + 0xb40);
      }
      *(undefined1 *)(param_1 + 0xb8f) = 0;
      *(undefined1 *)(param_1 + 0xb91) = 0;
      plVar2 = *(longlong **)(param_1 + 0xb38);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(param_1 + 0xb38);
      }
      <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>(param_1 + 0xb30);
      *(undefined2 *)(param_1 + 0xb92) = 0;
LAB_0056c9d0:
      if ((*(longlong *)(param_1 + 0xb00) != -1) && (*(longlong *)(param_1 + 0xb00) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined2 *)(param_1 + 0xb94) = 0;
      param_2 = *(longlong *)(param_1 + 0xae8);
      if ((param_2 != -1) && (param_2 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined8 *)(param_1 + 0xb96) = 0;
      if ((1 < *(byte *)(param_1 + 0xa80)) &&
         (param_2 = *(longlong *)(param_1 + 0xa88), param_2 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0xba2) = 0;
      *(undefined4 *)(param_1 + 0xb9e) = 0;
      if ((*(char *)(param_1 + 0xb90) != '\0') &&
         (param_2 = *(longlong *)(param_1 + 0xa68), param_2 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0xb90) = 0;
    }
  }
  if (((*(char *)(param_1 + 0x6cd) != '\0') &&
      (param_2 = *(longlong *)(param_1 + 0x770), param_2 != -1)) && (param_2 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x6cd) = 0;
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x6ce) != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x768);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x760) + 0x20;
      do {
        if (*(longlong *)(lVar6 + -0x20) != 0) {
          (*(code *)puVar3)();
        }
        param_2 = *(longlong *)(lVar6 + -8);
        if (param_2 != 0) {
          (*(code *)puVar3)();
        }
        lVar6 = lVar6 + 0x30;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*(longlong *)(param_1 + 0x758) != 0) {
      param_2 = *(longlong *)(param_1 + 0x758) * 0x30;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x6ce) = 0;
  if (*(char *)(param_1 + 0x6cf) != '\0') {
    <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x7a0,param_2);
  }
  *(undefined1 *)(param_1 + 0x6cf) = 0;
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x6d0) != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x750);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x748) + 8;
      do {
        if (*(longlong *)(lVar6 + -8) != 0) {
          (*(code *)puVar3)();
        }
        lVar6 = lVar6 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
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
  lVar4 = *(longlong *)(param_1 + 0x248);
  for (lVar6 = *(longlong *)(param_1 + 0x250) + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
    <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>(lVar4);
    lVar4 = lVar4 + 0x90;
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar4 = *(longlong *)(param_1 + 0x268);
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x260) + 0x38;
    do {
      if (*(longlong *)(lVar6 + -0x38) != 0) {
        (*(code *)puVar3)();
      }
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        (*(code *)puVar3)();
      }
      if ((*(longlong *)(lVar6 + -8) != -1) && (*(longlong *)(lVar6 + -8) != 0)) {
        (*(code *)puVar3)();
      }
      lVar6 = lVar6 + 0x48;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
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
  plVar2 = *(longlong **)(param_1 + 0x218);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x6c8) != '\0') {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x218);
      }
    }
    if (*(char *)(param_1 + 0x6c7) != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x220);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow((undefined8 *)(param_1 + 0x220));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x6c7) = 0;
switchD_0056c02b_caseD_3:
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
switchD_0056c02b_caseD_1:
  return;
}


