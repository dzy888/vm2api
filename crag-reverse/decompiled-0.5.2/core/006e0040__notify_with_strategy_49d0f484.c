// 006e0040 notify_with_strategy

/* WARNING: Switch with 1 destination removed at 0x006e0136 */
/* <tokio[d7d91d38da47d894]::sync::notify::Notify>::notify_with_strategy */

void __rustcall
<tokio[d7d91d38da47d894]::sync::notify::Notify>::notify_with_strategy
          (ulonglong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar6 = *param_1;
  do {
    if ((uVar6 & 1) != 0) {
      puVar1 = param_1 + 1;
      LOCK();
      bVar8 = (int)param_1[1] == 0;
      if (bVar8) {
        *(int *)(param_1 + 1) = 1;
      }
      UNLOCK();
      if (!bVar8) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar4 = 0;
      }
      else {
        bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar4 = bVar4 ^ 1;
      }
      lVar7 = tokio[d7d91d38da47d894]::sync::notify::notify_locked
                        (param_1 + 2,param_1,*param_1,param_2);
      if (lVar7 != 0) {
        if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
           (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
          *(undefined1 *)((longlong)param_1 + 0xc) = 1;
        }
        LOCK();
        uVar6 = *puVar1;
        *(int *)puVar1 = 0;
        UNLOCK();
        if ((int)uVar6 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
                    /* WARNING: Could not recover jumptable at 0x006e0107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 8))();
        return;
      }
      if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      }
      LOCK();
      uVar6 = *puVar1;
      *(int *)puVar1 = 0;
      UNLOCK();
      if ((int)uVar6 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
      return;
    }
    LOCK();
    uVar2 = *param_1;
    bVar8 = uVar6 == uVar2;
    if (bVar8) {
      *param_1 = uVar6 & 0xfffffffffffffffc | 2;
    }
    else {
      uVar6 = uVar2;
    }
    UNLOCK();
  } while (!bVar8);
  return;
}


