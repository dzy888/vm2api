// 004b1720 reset_circuit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::reset_circuit */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::reset_circuit(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  bool bVar9;
  char local_38;
  longlong local_30;
  uint local_28;
  
  record_success();
  LOCK();
  bVar9 = *(int *)(param_1 + 0xf0) == 0;
  if (bVar9) {
    *(int *)(param_1 + 0xf0) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
  }
  (*(code *)PTR_now_007993f0)();
  (*(code *)PTR_duration_since_007993f8)(0,0);
  uVar4 = _UNK_00183aec;
  uVar3 = _UNK_00183ae8;
  uVar2 = _UNK_00183ae4;
  if (local_38 == '\0') {
    lVar8 = (ulonglong)local_28 / 1000000 + local_30 * 1000;
  }
  else {
    lVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = _DAT_00183ae0;
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  *(undefined4 *)(param_1 + 0x100) = uVar3;
  *(undefined4 *)(param_1 + 0x104) = uVar4;
  *(undefined8 *)(param_1 + 0x108) = 0x3ff0000000000000;
  *(longlong *)(param_1 + 0x118) = lVar8;
  if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(param_1 + 0xf4) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xf0) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


