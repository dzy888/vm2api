// 004c8a90 record_sticky_account

/* WARNING: Switch with 1 destination removed at 0x004c8c7c */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::record_sticky_account */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::record_sticky_account
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,longlong param_5,
          longlong param_6)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  int *local_40;
  uint local_38;
  
  if (((param_5 != 0) && (param_3 != 0)) && (param_6 != 0)) {
    piVar1 = (int *)(param_1 + 0x1d0);
    LOCK();
    bVar11 = *(int *)(param_1 + 0x1d0) == 0;
    if (bVar11) {
      *(int *)(param_1 + 0x1d0) = 1;
    }
    UNLOCK();
    if (!bVar11) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar4 = 0;
      cVar5 = *(char *)(param_1 + 0x1d4);
    }
    else {
      bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar4 = bVar4 ^ 1;
      cVar5 = *(char *)(param_1 + 0x1d4);
    }
    if (cVar5 != '\0') {
      uVar3 = local_38 >> 8;
      local_38 = CONCAT31((int3)uVar3,bVar4);
      local_40 = piVar1;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b590
                 ,&local_40,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bcb8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (*(code *)PTR_now_00799478)();
    iVar9 = (int)(uint)local_40 >> 0xd;
    iVar8 = iVar9 + -1;
    iVar6 = 0;
    if (iVar9 < 1) {
      iVar6 = (1U - iVar9) / 400 + 1;
      iVar8 = iVar8 + iVar6 * 400;
      iVar6 = iVar6 * -0x23ab1;
    }
    lVar7 = (ulonglong)local_38 / 1000000 +
            ((longlong)
             (int)(((((uint)local_40 >> 4 & 0x1ff) + iVar6) - iVar8 / 100) + (iVar8 * 0x5b5 >> 2) +
                   (iVar8 / 100 >> 2) + -0xaf93b) * 0x15180 + ((ulonglong)local_40 >> 0x20)) * 1000;
    lVar10 = 0;
    if (0 < lVar7) {
      lVar10 = lVar7;
    }
    <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_conversation_at
              (param_1 + 0x1d8,param_2,param_3,param_4,param_5,lVar10);
    if (((bVar4 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 0x1d4) = 1;
    }
    LOCK();
    iVar8 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar8 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


