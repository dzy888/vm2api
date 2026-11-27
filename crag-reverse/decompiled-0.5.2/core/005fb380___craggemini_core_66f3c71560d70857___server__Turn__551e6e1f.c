// 005fb380 <craggemini_core[66f3c71560d70857]::server::Turn>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
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
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    lVar6 = param_1[0x13] + 0x20;
    do {
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        (*(code *)puVar3)(param_4,1);
      }
      if (*(longlong *)(lVar6 + -8) != 0) {
        (*(code *)puVar3)(param_4,1);
      }
      lVar6 = lVar6 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[0x12] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (param_1[0x5e] != -1) {
    <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>(param_1[0x5f],param_1[0x60]);
    if (param_1[0x5e] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x15);
  if ((param_1[0x61] != -1) && (param_1[0x61] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar5 = param_1[100];
  if ((lVar5 != -1) && (lVar5 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar6 = param_1[0x51];
  if (lVar6 != 0) {
    lVar7 = param_1[0x50] + 8;
    do {
      lVar5 = *(longlong *)(lVar7 + -8);
      if (lVar5 != 0) {
        (*(code *)puVar3)(param_4,1);
      }
      lVar7 = lVar7 + 0x18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (param_1[0x4f] != 0) {
    lVar5 = param_1[0x4f] * 0x18;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  plVar1 = (longlong *)param_1[0x73];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_1 + 0x73,lVar5);
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
  if ((*param_1 != 0) && (lVar5 = param_1[1], lVar5 != 0)) {
    uVar4 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar5 + 0x60) + 0x10))();
    }
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow(param_1 + 1);
      }
    }
  }
  if (param_1[0x74] != 0) {
    plVar1 = param_1 + 0x74;
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(plVar1);
    plVar2 = (longlong *)*plVar1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(plVar1);
    }
  }
  if ((param_1[2] != 0) && (lVar5 = param_1[3], lVar5 != 0)) {
    uVar4 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar5 + 0x60) + 0x10))();
    }
    plVar1 = (longlong *)param_1[3];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow(param_1 + 3);
      }
    }
  }
  if ((param_1[4] != 0) && (lVar5 = param_1[5], lVar5 != 0)) {
    uVar4 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))();
    }
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow(param_1 + 5);
        return;
      }
    }
  }
  return;
}


