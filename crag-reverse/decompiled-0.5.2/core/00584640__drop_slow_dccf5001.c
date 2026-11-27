// 00584640 drop_slow

/* WARNING: Switch with 1 destination removed at 0x005847d9 */
/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar6 = PTR___rust_dealloc_00798fc8;
  uVar3 = *(ulonglong *)(lVar2 + 0xa0);
  if (uVar3 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 0x98);
    uVar5 = *(ulonglong *)(lVar2 + 0x88);
    lVar12 = *(longlong *)(lVar2 + 0x90);
    uVar7 = uVar5;
    if (uVar4 < uVar5) {
      uVar7 = 0;
    }
    lVar9 = uVar4 - uVar7;
    uVar10 = uVar5 - lVar9;
    lVar13 = uVar3 - uVar10;
    bVar14 = lVar13 != 0;
    if (uVar3 < uVar10) {
      lVar13 = 0;
    }
    uVar8 = lVar9 + uVar3;
    if (uVar3 >= uVar10 && bVar14) {
      uVar8 = uVar5;
    }
    lVar9 = uVar8 - lVar9;
    if (lVar9 != 0) {
      lVar11 = uVar4 * 0x18 + uVar7 * -0x18 + lVar12 + 8;
      do {
        if (*(longlong *)(lVar11 + -8) != 0) {
          (*(code *)puVar6)();
        }
        lVar11 = lVar11 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    puVar6 = PTR___rust_dealloc_00798fc8;
    if (uVar10 < uVar3) {
      lVar12 = lVar12 + 8;
      do {
        if (*(longlong *)(lVar12 + -8) != 0) {
          (*(code *)puVar6)();
        }
        lVar12 = lVar12 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  if (*(longlong *)(lVar2 + 0x88) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(lVar2 + 0xb0) != -1) && (*(longlong *)(lVar2 + 0xb0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::SessionStore>
            (lVar2 + 0x168);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>>
            (lVar2 + 0x218);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(lVar2 + 0x260);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>
            (lVar2 + 0x298);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AcpPoolState>>
            (lVar2 + 0x2a8);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AccountPoolState>>
            (lVar2 + 0x4a0);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


