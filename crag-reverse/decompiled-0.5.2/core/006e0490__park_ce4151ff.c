// 006e0490 park

/* WARNING: Switch with 1 destination removed at 0x006e05dc */
/* <tokio[d7d91d38da47d894]::runtime::park::Inner>::park */

void __rustcall <tokio[d7d91d38da47d894]::runtime::park::Inner>::park(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_48;
  undefined *local_40;
  longlong local_38;
  
  LOCK();
  lVar2 = *param_1;
  if (lVar2 == 2) {
    *param_1 = 0;
  }
  UNLOCK();
  if (lVar2 != 2) {
    plVar1 = param_1 + 1;
    LOCK();
    bVar8 = (int)param_1[1] == 0;
    if (bVar8) {
      *(int *)(param_1 + 1) = 1;
    }
    UNLOCK();
    if (!bVar8) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar5 = bVar5 ^ 1;
    }
    lVar7 = 0;
    LOCK();
    lVar2 = *param_1;
    if (lVar2 == 0) {
      *param_1 = 1;
    }
    else {
      lVar7 = lVar2;
    }
    puVar4 = PTR_wait_0079a768;
    UNLOCK();
    if (lVar2 == 0) {
      do {
        (*(code *)puVar4)();
        if (*(char *)((longlong)param_1 + 0xc) != '\0') {
          local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar5);
          local_48 = plVar1;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::util::rand::FastRand>>>_00793a00
                     ,&local_48,
                     &
                     PTR_anon_c4f639d01efbe85961be48d14333fbdc_36_llvm_17218896934804705305_00793b58
                    );
          goto LAB_006e0613;
        }
        LOCK();
        lVar2 = *param_1;
        if (lVar2 == 2) {
          *param_1 = 0;
        }
        UNLOCK();
      } while (lVar2 != 2);
    }
    else {
      if (lVar7 != 2) {
        local_48 = &local_38;
        local_40 = PTR_fmt_007991f0;
        local_38 = lVar7;
        (*(code *)PTR_panic_fmt_007991a8)
                  (1,&
                     PTR_anon_c4f639d01efbe85961be48d14333fbdc_36_llvm_17218896934804705305_00793b70
                  );
LAB_006e0613:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      LOCK();
      *param_1 = 0;
      UNLOCK();
    }
    if (((bVar5 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = 0;
    UNLOCK();
    if ((int)lVar2 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


