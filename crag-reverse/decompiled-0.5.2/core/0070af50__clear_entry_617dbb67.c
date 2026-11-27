// 0070af50 clear_entry

/* <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::clear_entry */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::clear_entry(int *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    lVar7 = *(longlong *)(param_2 + 0x18);
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
    lVar7 = *(longlong *)(param_2 + 0x18);
  }
  if (lVar7 != -1) {
    <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::remove(param_1 + 2,param_2);
  }
  if (*(longlong *)(param_2 + 0x18) != -1) {
    *(undefined1 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
    uVar6 = *(ulonglong *)(param_2 + 0x30);
    do {
      LOCK();
      uVar2 = *(ulonglong *)(param_2 + 0x30);
      bVar8 = uVar6 == uVar2;
      if (bVar8) {
        *(ulonglong *)(param_2 + 0x30) = uVar6 | 2;
      }
      else {
        uVar6 = uVar2;
      }
      UNLOCK();
    } while (!bVar8);
    if (uVar6 == 0) {
      lVar7 = *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = 0;
      LOCK();
      *(undefined8 *)(param_2 + 0x30) = 0;
      UNLOCK();
      goto joined_r0x0070afda;
    }
  }
  lVar7 = 0;
joined_r0x0070afda:
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0070b02e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x18))();
  return;
}


