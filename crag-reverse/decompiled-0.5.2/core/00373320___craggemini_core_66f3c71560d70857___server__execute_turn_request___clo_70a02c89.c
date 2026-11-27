// 00373320 <craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::execute_turn_request::_closure_0_>
          (undefined4 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  switch(*(undefined1 *)(param_2 + 0x6b6)) {
  case 0:
    if ((*(longlong *)(param_2 + 0x48) != -1) && (*(longlong *)(param_2 + 0x48) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0037334f::switchdataD_001920f8,1);
    }
    if ((*(longlong *)(param_2 + 0x60) != -1) && (*(longlong *)(param_2 + 0x60) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x78) != -1) && (*(longlong *)(param_2 + 0x78) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x90) != -1) && (*(longlong *)(param_2 + 0x90) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0xa8) != -1) && (*(longlong *)(param_2 + 0xa8) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0xc0) != -1) && (*(longlong *)(param_2 + 0xc0) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (*(longlong *)(param_2 + 0x30) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0xd8) != -1) && (*(longlong *)(param_2 + 0xd8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(param_2 + 0xf0);
    return;
  default:
    goto switchD_0037334f_caseD_1;
  case 3:
    goto switchD_0037334f_caseD_3;
  case 4:
    param_3 = *(longlong *)(param_2 + 0x788);
joined_r0x00373e13:
    if (param_3 != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    break;
  case 5:
    cVar3 = *(char *)(param_2 + 0xba5);
    if (cVar3 == '\x04') {
      uVar11 = (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_2 + 0xc00) != 0) {
        uVar11 = (**(code **)(*(longlong *)(param_2 + 0xc00) + 0x18))();
      }
      lVar7 = *(longlong *)(param_2 + 0xbc8);
      if (lVar7 != 0) {
        plVar4 = (longlong *)(lVar7 + 0x10);
        uVar6 = *(ulonglong *)(lVar7 + 0x70);
        do {
          LOCK();
          uVar2 = *(ulonglong *)(lVar7 + 0x70);
          bVar10 = uVar6 == uVar2;
          if (bVar10) {
            *(ulonglong *)(lVar7 + 0x70) = uVar6 | 4;
          }
          else {
            uVar6 = uVar2;
          }
          UNLOCK();
        } while (!bVar10);
        if (((uint)uVar6 & 10) == 8) {
          uVar11 = (**(code **)(*(longlong *)(lVar7 + 0x50) + 0x10))();
        }
        if (((uint)uVar6 & 3) == 1) {
          LOCK();
          *(ulonglong *)(lVar7 + 0x70) = *(ulonglong *)(lVar7 + 0x70) & 0xfffffffffffffffe;
          UNLOCK();
          uVar11 = (*(code *)PTR_drop_task_00799060)();
        }
        if ((uVar6 & 2) != 0) {
          uVar11 = *(undefined4 *)plVar4;
          uStack_64 = *(undefined4 *)(lVar7 + 0x14);
          lVar9 = *plVar4;
          uStack_60 = *(undefined4 *)(lVar7 + 0x18);
          uStack_5c = *(undefined4 *)(lVar7 + 0x1c);
          local_58 = *(undefined4 *)(lVar7 + 0x20);
          uStack_54 = *(undefined4 *)(lVar7 + 0x24);
          uStack_50 = *(undefined4 *)(lVar7 + 0x28);
          uStack_4c = *(undefined4 *)(lVar7 + 0x2c);
          local_48 = *(undefined4 *)(lVar7 + 0x30);
          uStack_44 = *(undefined4 *)(lVar7 + 0x34);
          uStack_40 = *(undefined4 *)(lVar7 + 0x38);
          uStack_3c = *(undefined4 *)(lVar7 + 0x3c);
          local_38 = *(undefined4 *)(lVar7 + 0x40);
          uStack_34 = *(undefined4 *)(lVar7 + 0x44);
          uStack_30 = *(undefined4 *)(lVar7 + 0x48);
          uStack_2c = *(undefined4 *)(lVar7 + 0x4c);
          *plVar4 = -3;
          local_68 = uVar11;
          if (lVar9 != -3) {
            uVar11 = <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                               (&local_68);
          }
        }
        plVar4 = *(longlong **)(param_2 + 0xbc8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            uVar11 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
                     ::drop_slow((undefined8 *)(param_2 + 0xbc8));
          }
        }
      }
      *(undefined1 *)(param_2 + 0xba6) = 0;
    }
    else {
      if (cVar3 != '\x03') {
        if (cVar3 == '\0') {
          plVar4 = *(longlong **)(param_2 + 0xa78);
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            param_1 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
                      ::drop_slow(param_2 + 0xa78);
          }
          plVar4 = *(longlong **)(param_2 + 0xa80);
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            param_1 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
                      ::drop_slow(param_2 + 0xa80);
          }
          if (*(longlong *)(param_2 + 0x710) != 0) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if (*(longlong *)(param_2 + 0x728) != 0) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if (*(longlong *)(param_2 + 0x740) != 0) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if ((*(longlong *)(param_2 + 0x988) != -1) && (*(longlong *)(param_2 + 0x988) != 0)) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if ((*(longlong *)(param_2 + 0x9a0) != -1) && (*(longlong *)(param_2 + 0x9a0) != 0)) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          puVar5 = PTR___rust_dealloc_00798fc8;
          lVar7 = *(longlong *)(param_2 + 0x768);
          if (lVar7 != 0) {
            lVar9 = *(longlong *)(param_2 + 0x760) + 0x20;
            do {
              if (*(longlong *)(lVar9 + -0x20) != 0) {
                param_1 = (*(code *)puVar5)(param_1,1);
              }
              if (*(longlong *)(lVar9 + -8) != 0) {
                param_1 = (*(code *)puVar5)(param_1,1);
              }
              lVar9 = lVar9 + 0x30;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (*(longlong *)(param_2 + 0x758) != 0) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
          }
          if ((1 < *(byte *)(param_2 + 0xa50)) && (*(longlong *)(param_2 + 0xa58) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if ((*(longlong *)(param_2 + 0x9b8) != -1) &&
             (uVar11 = <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                                 (*(undefined8 *)(param_2 + 0x9c0),*(undefined8 *)(param_2 + 0x9c8))
             , *(longlong *)(param_2 + 0x9b8) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
          }
          uVar11 = <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_2 + 0x770);
          if ((*(longlong *)(param_2 + 0x9d0) != -1) && (*(longlong *)(param_2 + 0x9d0) != 0)) {
            uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
          lVar7 = *(longlong *)(param_2 + 0x9e8);
          if ((lVar7 != -1) && (lVar7 != 0)) {
            uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
          puVar5 = PTR___rust_dealloc_00798fc8;
          lVar9 = *(longlong *)(param_2 + 0x950);
          if (lVar9 != 0) {
            lVar8 = *(longlong *)(param_2 + 0x948) + 8;
            do {
              lVar7 = *(longlong *)(lVar8 + -8);
              if (lVar7 != 0) {
                uVar11 = (*(code *)puVar5)(uVar11,1);
              }
              lVar8 = lVar8 + 0x18;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          if (*(longlong *)(param_2 + 0x940) != 0) {
            lVar7 = *(longlong *)(param_2 + 0x940) * 0x18;
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
          }
          param_1 = <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>
                              (param_2 + 0x958,lVar7);
          if ((*(longlong *)(param_2 + 0xa00) != -1) && (*(longlong *)(param_2 + 0xa00) != 0)) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if ((*(longlong *)(param_2 + 0xa18) != -1) && (*(longlong *)(param_2 + 0xa18) != 0)) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          param_3 = *(longlong *)(param_2 + 0xa30);
          goto joined_r0x00373e0a;
        }
        break;
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_2 + 0xc00) != 0) {
        (**(code **)(*(longlong *)(param_2 + 0xc00) + 0x18))();
      }
      puVar1 = (undefined8 *)(param_2 + 0xbc8);
      uVar11 = <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(puVar1);
      plVar4 = (longlong *)*puVar1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          uVar11 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
                   ::drop_slow(puVar1);
        }
      }
      *(undefined1 *)(param_2 + 0xba7) = 0;
    }
    if ((*(longlong *)(param_2 + 0xb88) != -1) && (*(longlong *)(param_2 + 0xb88) != 0)) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    *(undefined1 *)(param_2 + 0xba8) = 0;
    if (*(longlong *)(param_2 + 0xb70) != 0) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    if (*(longlong *)(param_2 + 0xb58) != 0) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    if (*(longlong *)(param_2 + 0xb40) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    plVar4 = *(longlong **)(param_2 + 0xb38);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_2 + 0xb38);
    }
    param_1 = <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>
                        (param_2 + 0xb30);
    *(undefined2 *)(param_2 + 0xba9) = 0;
    *(undefined1 *)(param_2 + 0xbab) = 0;
    param_3 = *(longlong *)(param_2 + 0xb00);
    if ((param_3 != -1) && (param_3 != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined8 *)(param_2 + 0xbac) = 0;
    if ((1 < *(byte *)(param_2 + 0xa98)) && (param_3 = *(longlong *)(param_2 + 0xaa0), param_3 != 0)
       ) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)(param_2 + 0xbbc) = 0;
    *(undefined8 *)(param_2 + 0xbb4) = 0;
    break;
  case 6:
    switch(*(undefined1 *)(param_2 + 0xb8d)) {
    case 0:
      if (*(longlong *)(param_2 + 0x710) != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00373617::switchdataD_00192114,1);
      }
      if (*(longlong *)(param_2 + 0x728) != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if ((*(longlong *)(param_2 + 0x970) != -1) && (*(longlong *)(param_2 + 0x970) != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if ((*(longlong *)(param_2 + 0x988) != -1) && (*(longlong *)(param_2 + 0x988) != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      puVar5 = PTR___rust_dealloc_00798fc8;
      lVar7 = *(longlong *)(param_2 + 0x750);
      if (lVar7 != 0) {
        lVar9 = *(longlong *)(param_2 + 0x748) + 0x20;
        do {
          if (*(longlong *)(lVar9 + -0x20) != 0) {
            param_1 = (*(code *)puVar5)(param_1,1);
          }
          if (*(longlong *)(lVar9 + -8) != 0) {
            param_1 = (*(code *)puVar5)(param_1,1);
          }
          lVar9 = lVar9 + 0x30;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*(longlong *)(param_2 + 0x740) != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
      }
      if ((1 < *(byte *)(param_2 + 0xa38)) && (*(longlong *)(param_2 + 0xa40) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if ((*(longlong *)(param_2 + 0x9a0) != -1) &&
         (uVar11 = <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                             (*(undefined8 *)(param_2 + 0x9a8),*(undefined8 *)(param_2 + 0x9b0)),
         *(longlong *)(param_2 + 0x9a0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
      }
      uVar11 = <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_2 + 0x758);
      if ((*(longlong *)(param_2 + 0x9b8) != -1) && (*(longlong *)(param_2 + 0x9b8) != 0)) {
        uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
      }
      lVar7 = *(longlong *)(param_2 + 0x9d0);
      if ((lVar7 != -1) && (lVar7 != 0)) {
        uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
      }
      puVar5 = PTR___rust_dealloc_00798fc8;
      lVar9 = *(longlong *)(param_2 + 0x938);
      if (lVar9 != 0) {
        lVar8 = *(longlong *)(param_2 + 0x930) + 8;
        do {
          lVar7 = *(longlong *)(lVar8 + -8);
          if (lVar7 != 0) {
            uVar11 = (*(code *)puVar5)(uVar11,1);
          }
          lVar8 = lVar8 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*(longlong *)(param_2 + 0x928) != 0) {
        lVar7 = *(longlong *)(param_2 + 0x928) * 0x18;
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
      }
      param_1 = <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_2 + 0x940,lVar7);
      if ((*(longlong *)(param_2 + 0x9e8) != -1) && (*(longlong *)(param_2 + 0x9e8) != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if ((*(longlong *)(param_2 + 0xa00) != -1) && (*(longlong *)(param_2 + 0xa00) != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      param_3 = *(longlong *)(param_2 + 0xa18);
joined_r0x00373e0a:
      if (param_3 != -1) goto joined_r0x00373e13;
      break;
    case 3:
      param_1 = <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::_closure_0_>
                          (param_2 + 0xba8);
      goto LAB_00373f74;
    case 4:
      if (*(char *)(param_2 + 3000) == '\0') {
        plVar4 = *(longlong **)(param_2 + 0xbc0);
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar4 = *(longlong **)(param_2 + 0xbc0);
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_2 + 0xbc8);
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_2 + 0xc58) != 0) {
        (**(code **)(*(longlong *)(param_2 + 0xc58) + 0x18))();
      }
      goto LAB_00373e63;
    case 5:
      lVar7 = *(longlong *)(param_2 + 0xba8);
      if (lVar7 != 0) {
        plVar4 = (longlong *)(lVar7 + 0x10);
        uVar6 = *(ulonglong *)(lVar7 + 0x70);
        do {
          LOCK();
          uVar2 = *(ulonglong *)(lVar7 + 0x70);
          bVar10 = uVar6 == uVar2;
          if (bVar10) {
            *(ulonglong *)(lVar7 + 0x70) = uVar6 | 4;
          }
          else {
            uVar6 = uVar2;
          }
          UNLOCK();
        } while (!bVar10);
        if (((uint)uVar6 & 10) == 8) {
          (**(code **)(*(longlong *)(lVar7 + 0x50) + 0x10))();
        }
        if (((uint)uVar6 & 3) == 1) {
          LOCK();
          *(ulonglong *)(lVar7 + 0x70) = *(ulonglong *)(lVar7 + 0x70) & 0xfffffffffffffffe;
          UNLOCK();
          (*(code *)PTR_drop_task_00799060)();
        }
        if ((uVar6 & 2) != 0) {
          local_68 = *(undefined4 *)plVar4;
          uStack_64 = *(undefined4 *)(lVar7 + 0x14);
          lVar9 = *plVar4;
          uStack_60 = *(undefined4 *)(lVar7 + 0x18);
          uStack_5c = *(undefined4 *)(lVar7 + 0x1c);
          local_58 = *(undefined4 *)(lVar7 + 0x20);
          uStack_54 = *(undefined4 *)(lVar7 + 0x24);
          uStack_50 = *(undefined4 *)(lVar7 + 0x28);
          uStack_4c = *(undefined4 *)(lVar7 + 0x2c);
          local_48 = *(undefined4 *)(lVar7 + 0x30);
          uStack_44 = *(undefined4 *)(lVar7 + 0x34);
          uStack_40 = *(undefined4 *)(lVar7 + 0x38);
          uStack_3c = *(undefined4 *)(lVar7 + 0x3c);
          local_38 = *(undefined4 *)(lVar7 + 0x40);
          uStack_34 = *(undefined4 *)(lVar7 + 0x44);
          uStack_30 = *(undefined4 *)(lVar7 + 0x48);
          uStack_2c = *(undefined4 *)(lVar7 + 0x4c);
          *plVar4 = -3;
          if (lVar9 != -3) {
            <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                      (&local_68);
          }
        }
        plVar4 = *(longlong **)(param_2 + 0xba8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
            ::drop_slow((undefined8 *)(param_2 + 0xba8));
          }
        }
      }
LAB_00373e63:
      if ((*(char *)(param_2 + 0xb8f) != '\0') &&
         (lVar7 = *(longlong *)(param_2 + 0xb40), lVar7 != 0)) {
        plVar4 = (longlong *)(lVar7 + 0x10);
        uVar6 = *(ulonglong *)(lVar7 + 0x70);
        do {
          LOCK();
          uVar2 = *(ulonglong *)(lVar7 + 0x70);
          bVar10 = uVar6 == uVar2;
          if (bVar10) {
            *(ulonglong *)(lVar7 + 0x70) = uVar6 | 4;
          }
          else {
            uVar6 = uVar2;
          }
          UNLOCK();
        } while (!bVar10);
        if (((uint)uVar6 & 10) == 8) {
          (**(code **)(*(longlong *)(lVar7 + 0x50) + 0x10))();
        }
        if (((uint)uVar6 & 3) == 1) {
          LOCK();
          *(ulonglong *)(lVar7 + 0x70) = *(ulonglong *)(lVar7 + 0x70) & 0xfffffffffffffffe;
          UNLOCK();
          (*(code *)PTR_drop_task_00799060)();
        }
        if ((uVar6 & 2) != 0) {
          local_68 = *(undefined4 *)plVar4;
          uStack_64 = *(undefined4 *)(lVar7 + 0x14);
          lVar9 = *plVar4;
          uStack_60 = *(undefined4 *)(lVar7 + 0x18);
          uStack_5c = *(undefined4 *)(lVar7 + 0x1c);
          local_58 = *(undefined4 *)(lVar7 + 0x20);
          uStack_54 = *(undefined4 *)(lVar7 + 0x24);
          uStack_50 = *(undefined4 *)(lVar7 + 0x28);
          uStack_4c = *(undefined4 *)(lVar7 + 0x2c);
          local_48 = *(undefined4 *)(lVar7 + 0x30);
          uStack_44 = *(undefined4 *)(lVar7 + 0x34);
          uStack_40 = *(undefined4 *)(lVar7 + 0x38);
          uStack_3c = *(undefined4 *)(lVar7 + 0x3c);
          local_38 = *(undefined4 *)(lVar7 + 0x40);
          uStack_34 = *(undefined4 *)(lVar7 + 0x44);
          uStack_30 = *(undefined4 *)(lVar7 + 0x48);
          uStack_2c = *(undefined4 *)(lVar7 + 0x4c);
          *plVar4 = -3;
          if (lVar9 != -3) {
            <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                      (&local_68);
          }
        }
        plVar4 = *(longlong **)(param_2 + 0xb40);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
            ::drop_slow((undefined8 *)(param_2 + 0xb40));
          }
        }
      }
      *(undefined1 *)(param_2 + 0xb8f) = 0;
      *(undefined1 *)(param_2 + 0xb91) = 0;
      plVar4 = *(longlong **)(param_2 + 0xb38);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(param_2 + 0xb38);
      }
      param_1 = <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>
                          (param_2 + 0xb30);
      *(undefined2 *)(param_2 + 0xb92) = 0;
LAB_00373f74:
      if ((*(longlong *)(param_2 + 0xb00) != -1) && (*(longlong *)(param_2 + 0xb00) != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      *(undefined2 *)(param_2 + 0xb94) = 0;
      param_3 = *(longlong *)(param_2 + 0xae8);
      if ((param_3 != -1) && (param_3 != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      *(undefined8 *)(param_2 + 0xb96) = 0;
      if ((1 < *(byte *)(param_2 + 0xa80)) &&
         (param_3 = *(longlong *)(param_2 + 0xa88), param_3 != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      *(undefined1 *)(param_2 + 0xba2) = 0;
      *(undefined4 *)(param_2 + 0xb9e) = 0;
      if ((*(char *)(param_2 + 0xb90) != '\0') &&
         (param_3 = *(longlong *)(param_2 + 0xa68), param_3 != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      *(undefined1 *)(param_2 + 0xb90) = 0;
    }
  }
  if (((*(char *)(param_2 + 0x6cd) != '\0') &&
      (param_3 = *(longlong *)(param_2 + 0x770), param_3 != -1)) && (param_3 != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6cd) = 0;
  puVar5 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_2 + 0x6ce) != '\0') {
    lVar7 = *(longlong *)(param_2 + 0x768);
    if (lVar7 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x760) + 0x20;
      do {
        if (*(longlong *)(lVar9 + -0x20) != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        param_3 = *(longlong *)(lVar9 + -8);
        if (param_3 != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        lVar9 = lVar9 + 0x30;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(longlong *)(param_2 + 0x758) != 0) {
      param_3 = *(longlong *)(param_2 + 0x758) * 0x30;
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
  }
  *(undefined1 *)(param_2 + 0x6ce) = 0;
  if (*(char *)(param_2 + 0x6cf) != '\0') {
    param_1 = <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_2 + 0x7a0,param_3);
  }
  *(undefined1 *)(param_2 + 0x6cf) = 0;
  puVar5 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_2 + 0x6d0) != '\0') {
    lVar7 = *(longlong *)(param_2 + 0x750);
    if (lVar7 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x748) + 8;
      do {
        if (*(longlong *)(lVar9 + -8) != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        lVar9 = lVar9 + 0x18;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(longlong *)(param_2 + 0x740) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
  }
  *(undefined1 *)(param_2 + 0x6d0) = 0;
  if (((*(char *)(param_2 + 0x6d1) != '\0') && (*(longlong *)(param_2 + 0x728) != -1)) &&
     (*(longlong *)(param_2 + 0x728) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6d1) = 0;
  if (((*(char *)(param_2 + 0x6d2) != '\0') && (*(longlong *)(param_2 + 0x698) != -1)) &&
     (*(longlong *)(param_2 + 0x698) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6d2) = 0;
  if ((*(char *)(param_2 + 0x6d3) != '\0') && (*(longlong *)(param_2 + 0x710) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6d3) = 0;
  if (((*(char *)(param_2 + 0x6d4) != '\0') && (*(longlong *)(param_2 + 0x6f8) != -1)) &&
     (param_1 = <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                          (*(undefined8 *)(param_2 + 0x700),*(undefined8 *)(param_2 + 0x708)),
     *(longlong *)(param_2 + 0x6f8) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)(param_2 + 0x6d4) = 0;
  if ((*(longlong *)(param_2 + 0x680) != -1) && (*(longlong *)(param_2 + 0x680) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if (*(longlong *)(param_2 + 0x668) != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if (*(longlong *)(param_2 + 0x550) != -1) {
    if (*(longlong *)(param_2 + 0x5c8) != -1) {
      if (*(longlong *)(param_2 + 0x5c8) != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if (*(longlong *)(param_2 + 0x5e0) != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if (*(longlong *)(param_2 + 0x5f8) != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
    }
    if ((*(longlong *)(param_2 + 0x630) != -1) && (*(longlong *)(param_2 + 0x630) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
  }
  *(undefined1 *)(param_2 + 0x6dd) = 0;
  *(undefined8 *)(param_2 + 0x6d5) = 0;
  if ((*(char *)(param_2 + 0x6c1) != '\0') && (*(longlong *)(param_2 + 0x538) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6c1) = 0;
  if (((*(char *)(param_2 + 0x6c2) != '\0') && (1 < *(byte *)(param_2 + 2000))) &&
     (*(longlong *)(param_2 + 0x7d8) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6c2) = 0;
  if (((*(char *)(param_2 + 0x6c3) != '\0') && (*(longlong *)(param_2 + 0x6e0) != -1)) &&
     (*(longlong *)(param_2 + 0x6e0) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6c3) = 0;
  if ((*(char *)(param_2 + 0x6c0) != '\0') && (*(longlong *)(param_2 + 0x518) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6c0) = 0;
  if ((*(char *)(param_2 + 0x6c4) != '\0') && (*(longlong *)(param_2 + 0x500) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6c4) = 0;
  if (((*(char *)(param_2 + 0x6c6) != '\0') && (*(longlong *)(param_2 + 0x4b0) != -1)) &&
     (*(longlong *)(param_2 + 0x4b0) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  lVar7 = *(longlong *)(param_2 + 0x248);
  for (lVar9 = *(longlong *)(param_2 + 0x250) + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
    param_1 = <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>(lVar7);
    lVar7 = lVar7 + 0x90;
  }
  if (*(longlong *)(param_2 + 0x240) != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  puVar5 = PTR___rust_dealloc_00798fc8;
  lVar7 = *(longlong *)(param_2 + 0x268);
  if (lVar7 != 0) {
    lVar9 = *(longlong *)(param_2 + 0x260) + 0x38;
    do {
      if (*(longlong *)(lVar9 + -0x38) != 0) {
        param_1 = (*(code *)puVar5)(param_1,1);
      }
      if (*(longlong *)(lVar9 + -0x20) != 0) {
        param_1 = (*(code *)puVar5)(param_1,1);
      }
      if ((*(longlong *)(lVar9 + -8) != -1) && (*(longlong *)(lVar9 + -8) != 0)) {
        param_1 = (*(code *)puVar5)(param_1,1);
      }
      lVar9 = lVar9 + 0x48;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (*(longlong *)(param_2 + 600) != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  if (*(char *)(param_2 + 0x6c5) != '\0') {
    param_1 = <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_2 + 0x270);
  }
  if ((*(longlong *)(param_2 + 0x4c8) != -1) && (*(longlong *)(param_2 + 0x4c8) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if (*(longlong *)(param_2 + 0x440) != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if (*(longlong *)(param_2 + 0x458) != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if (*(longlong *)(param_2 + 0x470) != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if ((*(longlong *)(param_2 + 0x488) != -1) && (*(longlong *)(param_2 + 0x488) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if ((*(longlong *)(param_2 + 0x4e0) != -1) && (*(longlong *)(param_2 + 0x4e0) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined2 *)(param_2 + 0x6c5) = 0;
  if (*(longlong *)(param_2 + 0x228) != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  plVar4 = *(longlong **)(param_2 + 0x218);
  if (plVar4 != (longlong *)0x0) {
    if (*(char *)(param_2 + 0x6c8) != '\0') {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        param_1 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
                  ::drop_slow(param_2 + 0x218);
      }
    }
    if (*(char *)(param_2 + 0x6c7) != '\0') {
      plVar4 = *(longlong **)(param_2 + 0x220);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        param_1 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
                  ::drop_slow((undefined8 *)(param_2 + 0x220));
      }
    }
  }
  *(undefined2 *)(param_2 + 0x6c7) = 0;
switchD_0037334f_caseD_3:
  if ((*(longlong *)(param_2 + 0x200) != -1) && (*(longlong *)(param_2 + 0x200) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if ((*(longlong *)(param_2 + 0x1e8) != -1) && (*(longlong *)(param_2 + 0x1e8) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if ((*(longlong *)(param_2 + 0x1d0) != -1) && (*(longlong *)(param_2 + 0x1d0) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(undefined1 *)(param_2 + 0x6de) = 0;
  if ((*(longlong *)(param_2 + 0x1b8) != -1) && (*(longlong *)(param_2 + 0x1b8) != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if ((*(longlong *)(param_2 + 0x1a0) != -1) && (*(longlong *)(param_2 + 0x1a0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  uVar11 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 0x180);
  if ((*(longlong *)(param_2 + 0x138) != -1) && (*(longlong *)(param_2 + 0x138) != 0)) {
    uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
  }
  if ((*(char *)(param_2 + 0x6c9) != '\0') && (*(longlong *)(param_2 + 0x120) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
  }
  *(undefined4 *)(param_2 + 0x6c9) = 0;
switchD_0037334f_caseD_1:
  return;
}


