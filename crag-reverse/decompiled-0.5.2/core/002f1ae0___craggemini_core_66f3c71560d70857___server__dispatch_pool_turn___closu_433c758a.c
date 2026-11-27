// 002f1ae0 <craggemini_core[66f3c71560d70857]::server::dispatch_pool_turn::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002f208c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::dispatch_pool_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::dispatch_pool_turn::_closure_0_>
          (undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
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
  
  cVar4 = *(char *)(param_2 + 0x4c5);
  if (cVar4 == '\0') {
    plVar1 = *(longlong **)(param_2 + 0x398);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      param_1 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
                ::drop_slow(param_2 + 0x398);
    }
    plVar1 = *(longlong **)(param_2 + 0x3a0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      param_1 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
                ::drop_slow(param_2 + 0x3a0);
    }
    if (*(longlong *)(param_2 + 0x30) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (*(longlong *)(param_2 + 0x60) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x2a8) != -1) && (*(longlong *)(param_2 + 0x2a8) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x2c0) != -1) && (*(longlong *)(param_2 + 0x2c0) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    puVar5 = PTR___rust_dealloc_00798fc8;
    lVar7 = *(longlong *)(param_2 + 0x88);
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(param_2 + 0x80) + 0x20;
      do {
        if (*(longlong *)(lVar8 + -0x20) != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        if (*(longlong *)(lVar8 + -8) != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        lVar8 = lVar8 + 0x30;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(longlong *)(param_2 + 0x78) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    if ((1 < *(byte *)(param_2 + 0x370)) && (*(longlong *)(param_2 + 0x378) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x2d8) != -1) &&
       (uVar11 = <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                           (*(undefined8 *)(param_2 + 0x2e0),*(undefined8 *)(param_2 + 0x2e8)),
       *(longlong *)(param_2 + 0x2d8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
    }
    uVar11 = <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_2 + 0x90);
    if ((*(longlong *)(param_2 + 0x2f0) != -1) && (*(longlong *)(param_2 + 0x2f0) != 0)) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    lVar7 = *(longlong *)(param_2 + 0x308);
    if ((lVar7 != -1) && (lVar7 != 0)) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    puVar5 = PTR___rust_dealloc_00798fc8;
    lVar8 = *(longlong *)(param_2 + 0x270);
    if (lVar8 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x268) + 8;
      do {
        lVar7 = *(longlong *)(lVar9 + -8);
        if (lVar7 != 0) {
          uVar11 = (*(code *)puVar5)(uVar11,1);
        }
        lVar9 = lVar9 + 0x18;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*(longlong *)(param_2 + 0x260) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x260) * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
    }
    uVar11 = <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_2 + 0x278,lVar7);
    if ((*(longlong *)(param_2 + 800) != -1) && (*(longlong *)(param_2 + 800) != 0)) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    if ((*(longlong *)(param_2 + 0x338) != -1) && (*(longlong *)(param_2 + 0x338) != 0)) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    if ((*(longlong *)(param_2 + 0x350) != -1) && (*(longlong *)(param_2 + 0x350) != 0)) {
      (*(code *)PTR_free_0079adc8)(uVar11,1);
      return;
    }
  }
  else {
    if (cVar4 == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_2 + 0x520) != 0) {
        (**(code **)(*(longlong *)(param_2 + 0x520) + 0x18))();
      }
      puVar2 = (undefined8 *)(param_2 + 0x4e8);
      uVar11 = <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(puVar2);
      plVar1 = (longlong *)*puVar2;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar11 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
                   ::drop_slow(puVar2);
        }
      }
      *(undefined1 *)(param_2 + 0x4c7) = 0;
      lVar7 = *(longlong *)(param_2 + 0x4a8);
    }
    else {
      if (cVar4 != '\x04') {
        return;
      }
      uVar11 = (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_2 + 0x520) != 0) {
        uVar11 = (**(code **)(*(longlong *)(param_2 + 0x520) + 0x18))();
      }
      lVar7 = *(longlong *)(param_2 + 0x4e8);
      if (lVar7 != 0) {
        plVar1 = (longlong *)(lVar7 + 0x10);
        uVar6 = *(ulonglong *)(lVar7 + 0x70);
        do {
          LOCK();
          uVar3 = *(ulonglong *)(lVar7 + 0x70);
          bVar10 = uVar6 == uVar3;
          if (bVar10) {
            *(ulonglong *)(lVar7 + 0x70) = uVar6 | 4;
          }
          else {
            uVar6 = uVar3;
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
          uVar11 = *(undefined4 *)plVar1;
          uStack_64 = *(undefined4 *)(lVar7 + 0x14);
          lVar8 = *plVar1;
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
          *plVar1 = -3;
          local_68 = uVar11;
          if (lVar8 != -3) {
            uVar11 = <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                               (&local_68);
          }
        }
        plVar1 = *(longlong **)(param_2 + 0x4e8);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            uVar11 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
                     ::drop_slow((undefined8 *)(param_2 + 0x4e8));
          }
        }
      }
      *(undefined1 *)(param_2 + 0x4c6) = 0;
      lVar7 = *(longlong *)(param_2 + 0x4a8);
    }
    if ((lVar7 != -1) && (lVar7 != 0)) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    *(undefined1 *)(param_2 + 0x4c8) = 0;
    if (*(longlong *)(param_2 + 0x490) != 0) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    if (*(longlong *)(param_2 + 0x478) != 0) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    if (*(longlong *)(param_2 + 0x460) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    plVar1 = *(longlong **)(param_2 + 0x458);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_2 + 0x458);
    }
    uVar11 = <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>
                       (param_2 + 0x450);
    *(undefined2 *)(param_2 + 0x4c9) = 0;
    *(undefined1 *)(param_2 + 0x4cb) = 0;
    if ((*(longlong *)(param_2 + 0x420) != -1) && (*(longlong *)(param_2 + 0x420) != 0)) {
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    *(undefined8 *)(param_2 + 0x4cc) = 0;
    if ((1 < *(byte *)(param_2 + 0x3b8)) && (*(longlong *)(param_2 + 0x3c0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    *(undefined1 *)(param_2 + 0x4dc) = 0;
    *(undefined8 *)(param_2 + 0x4d4) = 0;
  }
  return;
}


