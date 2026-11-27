// 004b5d90 preferred_warm_model

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::preferred_warm_model */

undefined4 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::preferred_warm_model
          (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  LOCK();
  bVar7 = *(int *)(param_2 + 0x70) == 0;
  if (bVar7) {
    *(int *)(param_2 + 0x70) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    lVar2 = *(longlong *)(param_2 + 0x90);
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
    lVar2 = *(longlong *)(param_2 + 0x90);
  }
  if (lVar2 == 0) {
    if (*(longlong *)(param_3 + 0x1b0) == -1) {
      (*(code *)PTR_clone_00798fd0)(param_4 + 0x50);
    }
    else {
      (*(code *)PTR_clone_00798fd0)(param_4,param_3 + 0x1b0);
      *(undefined8 *)(param_1 + 4) = local_38;
      *param_1 = local_48;
      param_1[1] = uStack_44;
      param_1[2] = uStack_40;
      param_1[3] = uStack_3c;
    }
  }
  else {
    uVar6 = 0;
    if (*(ulonglong *)(param_2 + 0x78) <= *(ulonglong *)(param_2 + 0x88)) {
      uVar6 = *(ulonglong *)(param_2 + 0x78);
    }
    (*(code *)PTR_clone_00798fd0)(*(ulonglong *)(param_2 + 0x88) - uVar6);
  }
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_2 + 0x74) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_2 + 0x70);
  *(int *)(param_2 + 0x70) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}


