// 006165e0 is_pool_active

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::is_pool_active */

byte __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::is_pool_active(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  int *local_30;
  byte local_28;
  
  cVar5 = <craggemini_core[66f3c71560d70857]::pool::PoolManager>::has_accounts
                    (*(longlong *)(param_1 + 0x2e0) + 0x10);
  if (cVar5 == '\0') {
    bVar6 = 0;
  }
  else {
    piVar1 = (int *)(param_1 + 0x310);
    LOCK();
    bVar7 = *(int *)(param_1 + 0x310) == 0;
    if (bVar7) {
      *(int *)(param_1 + 0x310) = 1;
    }
    UNLOCK();
    if (!bVar7) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      local_28 = 0;
      cVar5 = *(char *)(param_1 + 0x314);
    }
    else {
      local_28 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      local_28 = local_28 ^ 1;
      cVar5 = *(char *)(param_1 + 0x314);
    }
    if (cVar5 != '\0') {
      local_30 = piVar1;
      (*(code *)PTR_unwrap_failed_00799028)
                (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_30,
                 &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar6 = *(byte *)(param_1 + 1000);
    if (((local_28 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 0x314) = 1;
    }
    bVar6 = bVar6 ^ 1;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  return bVar6;
}


