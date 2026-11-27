// 004ccac0 slots_for

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::slots_for */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::slots_for
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  plVar5 = (longlong *)get_pool(param_2,param_3,param_4);
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "account_not_found";
    param_1[2] = 0x11;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "bound account not found";
    param_1[5] = 0x17;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0x6020194;
  }
  else {
    LOCK();
    bVar7 = *(int *)(param_2 + 0x270) == 0;
    if (bVar7) {
      *(int *)(param_2 + 0x270) = 1;
    }
    UNLOCK();
    local_58 = plVar5;
    if (!bVar7) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar2 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar3 = bVar3 ^ 1;
    }
    uVar6 = <craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>::
            slot_rss_soft_limit_bytes(param_2 + 0x278);
    if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
      *(undefined1 *)(param_2 + 0x274) = 1;
    }
    LOCK();
    iVar1 = *(int *)(param_2 + 0x270);
    *(int *)(param_2 + 0x270) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    <craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit
              (&local_50,plVar5 + 2,uVar6);
    *(undefined4 *)(param_1 + 3) = local_40;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
    *(undefined4 *)(param_1 + 4) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_34;
    *(undefined4 *)(param_1 + 1) = local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_4c;
    *(undefined4 *)(param_1 + 2) = uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
    *param_1 = 0xfffffffffffffffe;
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(&local_58);
    }
  }
  return param_1;
}


