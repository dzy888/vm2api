// 002f0a60 <craggemini_core[66f3c71560d70857]::server::dispatch_turn::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002f1021 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::dispatch_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::dispatch_turn::_closure_0_>
          (undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
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
  
  switch(*(undefined1 *)(param_2 + 0x4ad)) {
  case 0:
    if (*(longlong *)(param_2 + 0x30) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002f0a8f::switchdataD_0018f184,1);
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x290) != -1) && (*(longlong *)(param_2 + 0x290) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x2a8) != -1) && (*(longlong *)(param_2 + 0x2a8) != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    puVar3 = PTR___rust_dealloc_00798fc8;
    lVar5 = *(longlong *)(param_2 + 0x70);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_2 + 0x68) + 0x20;
      do {
        if (*(longlong *)(lVar6 + -0x20) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        if (*(longlong *)(lVar6 + -8) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        lVar6 = lVar6 + 0x30;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(longlong *)(param_2 + 0x60) != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    if ((1 < *(byte *)(param_2 + 0x358)) && (*(longlong *)(param_2 + 0x360) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((*(longlong *)(param_2 + 0x2c0) != -1) &&
       (uVar9 = <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                          (*(undefined8 *)(param_2 + 0x2c8),*(undefined8 *)(param_2 + 0x2d0)),
       *(longlong *)(param_2 + 0x2c0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,8);
    }
    uVar9 = <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_2 + 0x78);
    if ((*(longlong *)(param_2 + 0x2d8) != -1) && (*(longlong *)(param_2 + 0x2d8) != 0)) {
      uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
    }
    lVar5 = *(longlong *)(param_2 + 0x2f0);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
    }
    puVar3 = PTR___rust_dealloc_00798fc8;
    lVar6 = *(longlong *)(param_2 + 600);
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(param_2 + 0x250) + 8;
      do {
        lVar5 = *(longlong *)(lVar7 + -8);
        if (lVar5 != 0) {
          uVar9 = (*(code *)puVar3)(uVar9,1);
        }
        lVar7 = lVar7 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (*(longlong *)(param_2 + 0x248) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x248) * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,8);
    }
    uVar9 = <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_2 + 0x260,lVar5);
    if ((*(longlong *)(param_2 + 0x308) != -1) && (*(longlong *)(param_2 + 0x308) != 0)) {
      uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
    }
    if ((*(longlong *)(param_2 + 800) != -1) && (*(longlong *)(param_2 + 800) != 0)) {
      uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
    }
    if (*(longlong *)(param_2 + 0x338) == -1) {
      return;
    }
    if (*(longlong *)(param_2 + 0x338) == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)(uVar9,1);
    return;
  default:
    goto switchD_002f0a8f_caseD_1;
  case 3:
    uVar9 = <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::_closure_0_>
                      (param_2 + 0x4c8);
    lVar5 = *(longlong *)(param_2 + 0x420);
    goto joined_r0x002f0eaf;
  case 4:
    <(&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio[d7d91d38da47d894]::time::sleep::Sleep,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)>
              (param_2 + 0x4d8);
    break;
  case 5:
    lVar5 = *(longlong *)(param_2 + 0x4c8);
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + 0x10);
      uVar4 = *(ulonglong *)(lVar5 + 0x70);
      do {
        LOCK();
        uVar2 = *(ulonglong *)(lVar5 + 0x70);
        bVar8 = uVar4 == uVar2;
        if (bVar8) {
          *(ulonglong *)(lVar5 + 0x70) = uVar4 | 4;
        }
        else {
          uVar4 = uVar2;
        }
        UNLOCK();
      } while (!bVar8);
      if (((uint)uVar4 & 10) == 8) {
        (**(code **)(*(longlong *)(lVar5 + 0x50) + 0x10))();
      }
      if (((uint)uVar4 & 3) == 1) {
        LOCK();
        *(ulonglong *)(lVar5 + 0x70) = *(ulonglong *)(lVar5 + 0x70) & 0xfffffffffffffffe;
        UNLOCK();
        (*(code *)PTR_drop_task_00799060)();
      }
      if ((uVar4 & 2) != 0) {
        local_68 = *(undefined4 *)plVar1;
        uStack_64 = *(undefined4 *)(lVar5 + 0x14);
        lVar6 = *plVar1;
        uStack_60 = *(undefined4 *)(lVar5 + 0x18);
        uStack_5c = *(undefined4 *)(lVar5 + 0x1c);
        local_58 = *(undefined4 *)(lVar5 + 0x20);
        uStack_54 = *(undefined4 *)(lVar5 + 0x24);
        uStack_50 = *(undefined4 *)(lVar5 + 0x28);
        uStack_4c = *(undefined4 *)(lVar5 + 0x2c);
        local_48 = *(undefined4 *)(lVar5 + 0x30);
        uStack_44 = *(undefined4 *)(lVar5 + 0x34);
        uStack_40 = *(undefined4 *)(lVar5 + 0x38);
        uStack_3c = *(undefined4 *)(lVar5 + 0x3c);
        local_38 = *(undefined4 *)(lVar5 + 0x40);
        uStack_34 = *(undefined4 *)(lVar5 + 0x44);
        uStack_30 = *(undefined4 *)(lVar5 + 0x48);
        uStack_2c = *(undefined4 *)(lVar5 + 0x4c);
        *plVar1 = -3;
        if (lVar6 != -3) {
          <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                    (&local_68);
        }
      }
      plVar1 = *(longlong **)(param_2 + 0x4c8);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          ::drop_slow((undefined8 *)(param_2 + 0x4c8));
        }
      }
    }
  }
  if ((*(char *)(param_2 + 0x4af) != '\0') && (lVar5 = *(longlong *)(param_2 + 0x460), lVar5 != 0))
  {
    plVar1 = (longlong *)(lVar5 + 0x10);
    uVar4 = *(ulonglong *)(lVar5 + 0x70);
    do {
      LOCK();
      uVar2 = *(ulonglong *)(lVar5 + 0x70);
      bVar8 = uVar4 == uVar2;
      if (bVar8) {
        *(ulonglong *)(lVar5 + 0x70) = uVar4 | 4;
      }
      else {
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (!bVar8);
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar5 + 0x50) + 0x10))();
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar5 + 0x70) = *(ulonglong *)(lVar5 + 0x70) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar4 & 2) != 0) {
      local_68 = *(undefined4 *)plVar1;
      uStack_64 = *(undefined4 *)(lVar5 + 0x14);
      lVar6 = *plVar1;
      uStack_60 = *(undefined4 *)(lVar5 + 0x18);
      uStack_5c = *(undefined4 *)(lVar5 + 0x1c);
      local_58 = *(undefined4 *)(lVar5 + 0x20);
      uStack_54 = *(undefined4 *)(lVar5 + 0x24);
      uStack_50 = *(undefined4 *)(lVar5 + 0x28);
      uStack_4c = *(undefined4 *)(lVar5 + 0x2c);
      local_48 = *(undefined4 *)(lVar5 + 0x30);
      uStack_44 = *(undefined4 *)(lVar5 + 0x34);
      uStack_40 = *(undefined4 *)(lVar5 + 0x38);
      uStack_3c = *(undefined4 *)(lVar5 + 0x3c);
      local_38 = *(undefined4 *)(lVar5 + 0x40);
      uStack_34 = *(undefined4 *)(lVar5 + 0x44);
      uStack_30 = *(undefined4 *)(lVar5 + 0x48);
      uStack_2c = *(undefined4 *)(lVar5 + 0x4c);
      *plVar1 = -3;
      if (lVar6 != -3) {
        <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                  (&local_68);
      }
    }
    plVar1 = *(longlong **)(param_2 + 0x460);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_2 + 0x460));
      }
    }
  }
  *(undefined1 *)(param_2 + 0x4af) = 0;
  *(undefined1 *)(param_2 + 0x4b1) = 0;
  plVar1 = *(longlong **)(param_2 + 0x458);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_2 + 0x458);
  }
  uVar9 = <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>
                    (param_2 + 0x450);
  *(undefined2 *)(param_2 + 0x4b2) = 0;
  lVar5 = *(longlong *)(param_2 + 0x420);
joined_r0x002f0eaf:
  if ((lVar5 != -1) && (lVar5 != 0)) {
    uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
  }
  *(undefined2 *)(param_2 + 0x4b4) = 0;
  if ((*(longlong *)(param_2 + 0x408) != -1) && (*(longlong *)(param_2 + 0x408) != 0)) {
    uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
  }
  *(undefined8 *)(param_2 + 0x4b6) = 0;
  if ((1 < *(byte *)(param_2 + 0x3a0)) && (*(longlong *)(param_2 + 0x3a8) != 0)) {
    uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
  }
  *(undefined1 *)(param_2 + 0x4c2) = 0;
  *(undefined4 *)(param_2 + 0x4be) = 0;
  if ((*(char *)(param_2 + 0x4b0) != '\0') && (*(longlong *)(param_2 + 0x388) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
  }
  *(undefined1 *)(param_2 + 0x4b0) = 0;
switchD_002f0a8f_caseD_1:
  return;
}


