// 00705af0 begin_shutdown

/* <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::begin_shutdown */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::begin_shutdown
          (undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  undefined8 local_38;
  
  LOCK();
  bVar6 = *(int *)(param_2 + 0x300) == 0;
  if (bVar6) {
    *(int *)(param_2 + 0x300) = 1;
  }
  UNLOCK();
  if (!bVar6) {
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
  <tokio[d7d91d38da47d894]::runtime::blocking::pool::ThreadManagementState>::begin_shutdown
            (&local_78,param_2 + 0x308);
  if (CONCAT44(uStack_5c,uStack_60) == 0) {
    param_1[3] = 0;
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_2 + 0x304) = 1;
    }
    LOCK();
    iVar1 = *(int *)(param_2 + 0x300);
    *(int *)(param_2 + 0x300) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x37c) = 1;
    (*(code *)PTR_notify_all_00799d78)();
    lVar2 = *param_3;
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_2 + 0x304) = 1;
    }
    LOCK();
    iVar1 = *(int *)(param_2 + 0x300);
    *(int *)(param_2 + 0x300) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    if (lVar2 == 0) {
      drain_and_seal(param_2,param_3,0);
    }
    param_1[8] = local_38;
    param_1[6] = CONCAT44(uStack_44,local_48);
    param_1[7] = CONCAT44(uStack_3c,uStack_40);
    param_1[4] = CONCAT44(uStack_54,local_58);
    param_1[5] = CONCAT44(uStack_4c,uStack_50);
    param_1[2] = CONCAT44(uStack_64,local_68);
    param_1[3] = CONCAT44(uStack_5c,uStack_60);
    *param_1 = CONCAT44(uStack_74,local_78);
    param_1[1] = CONCAT44(uStack_6c,uStack_70);
  }
  return param_1;
}


