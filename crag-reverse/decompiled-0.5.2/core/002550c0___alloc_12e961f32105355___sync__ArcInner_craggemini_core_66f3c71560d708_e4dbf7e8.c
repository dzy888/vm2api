// 002550c0 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::pool::AccountPool>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          (longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar4 = PTR___rust_dealloc_00798fc8;
  uVar1 = *(ulonglong *)(param_1 + 0x88);
  uVar2 = *(ulonglong *)(param_1 + 0xa0);
  if (uVar2 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x90);
    uVar3 = *(ulonglong *)(param_1 + 0x98);
    uVar5 = uVar1;
    if (uVar3 < uVar1) {
      uVar5 = 0;
    }
    lVar7 = uVar3 - uVar5;
    uVar8 = uVar1 - lVar7;
    lVar9 = uVar2 - uVar8;
    bVar12 = lVar9 != 0;
    if (uVar2 < uVar8) {
      lVar9 = 0;
    }
    uVar6 = lVar7 + uVar2;
    if (uVar2 >= uVar8 && bVar12) {
      uVar6 = uVar1;
    }
    lVar7 = uVar6 - lVar7;
    if (lVar7 != 0) {
      lVar10 = uVar3 * 0x18 + uVar5 * -0x18 + lVar11 + 8;
      do {
        if (*(longlong *)(lVar10 + -8) != 0) {
          (*(code *)puVar4)();
        }
        lVar10 = lVar10 + 0x18;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar4 = PTR___rust_dealloc_00798fc8;
    if (uVar8 < uVar2) {
      lVar11 = lVar11 + 8;
      do {
        if (*(longlong *)(lVar11 + -8) != 0) {
          (*(code *)puVar4)();
        }
        lVar11 = lVar11 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  if (uVar1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0xb0) != -1) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <craggemini_core[66f3c71560d70857]::resume::SessionStore>(param_1 + 0x168);
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>>
            (param_1 + 0x218);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x260);
  <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>(param_1 + 0x298);
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AcpPoolState>>
            (param_1 + 0x2a8);
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AccountPoolState>>
            (param_1 + 0x4a0);
  return;
}


