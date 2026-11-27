// 00574c40 <craggemini_core[66f3c71560d70857]::server::Turn>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1[0xc] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[0xf] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[0x58] != -1) && (param_1[0x58] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[0x5b] != -1) && (param_1[0x5b] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar6 = param_1[0x14];
  if (lVar6 != 0) {
    lVar4 = param_1[0x13] + 0x20;
    do {
      if (*(longlong *)(lVar4 + -0x20) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      if (*(longlong *)(lVar4 + -8) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      lVar4 = lVar4 + 0x30;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (param_1[0x12] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  lVar6 = param_1[0x5e];
  if (lVar6 != -1) {
    <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>(param_1[0x5f],param_1[0x60]);
    if (lVar6 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x15);
  if ((param_1[0x61] != -1) && (param_1[0x61] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar6 = param_1[100];
  if ((lVar6 != -1) && (lVar6 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar4 = param_1[0x51];
  if (lVar4 != 0) {
    lVar5 = param_1[0x50] + 8;
    do {
      lVar6 = *(longlong *)(lVar5 + -8);
      if (lVar6 != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (param_1[0x4f] != 0) {
    lVar6 = param_1[0x4f] * 0x18;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  plVar1 = (longlong *)param_1[0x73];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_1 + 0x73,lVar6);
  }
  if ((param_1[0x67] != -1) && (param_1[0x67] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[0x6a] != -1) && (param_1[0x6a] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[0x6d] != -1) && (param_1[0x6d] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x52);
  if ((*param_1 != 0) && (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    uVar3 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar1[0xc] + 0x10))();
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1 + 1);
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<bytes[e9829e187354639b]::bytes::Bytes>>>
            (param_1 + 0x74);
  if ((param_1[2] != 0) && (plVar1 = (longlong *)param_1[3], plVar1 != (longlong *)0x0)) {
    uVar3 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar1[0xc] + 0x10))();
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1 + 3);
    }
  }
  if ((param_1[4] != 0) && (plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0)) {
    uVar3 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar1[4] + 0x10))();
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1 + 5);
      return;
    }
  }
  return;
}


