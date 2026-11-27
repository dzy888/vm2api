// 006e0200 park_timeout

/* WARNING: Switch with 1 destination removed at 0x006e02de */
/* <tokio[d7d91d38da47d894]::runtime::park::Inner>::park_timeout */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::park::Inner>::park_timeout
          (ulonglong *param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong local_48;
  ulonglong *local_40;
  undefined *local_38;
  byte local_30;
  
  uVar8 = 2;
  LOCK();
  uVar9 = *param_1;
  if (uVar9 == 2) {
    *param_1 = 0;
  }
  else {
    uVar8 = uVar9;
  }
  UNLOCK();
  if ((uVar9 != 2) &&
     (uVar8 = CONCAT71((int7)(uVar8 >> 8),param_2 == 0), param_2 != 0 || param_3 != 0)) {
    puVar1 = param_1 + 1;
    LOCK();
    bVar10 = (int)param_1[1] == 0;
    if (bVar10) {
      *(int *)(param_1 + 1) = 1;
    }
    UNLOCK();
    if (!bVar10) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar6 = bVar6 ^ 1;
    }
    uVar8 = 0;
    LOCK();
    uVar9 = *param_1;
    if (uVar9 == 0) {
      *param_1 = 1;
    }
    else {
      uVar8 = uVar9;
    }
    UNLOCK();
    if (uVar9 == 0) {
      bVar5 = (*(code *)PTR_wait_timeout_007995e0)(param_3,param_2);
      if (*(char *)((longlong)param_1 + 0xc) != '\0') {
        local_30 = bVar5 ^ 1;
        local_38 = (undefined *)CONCAT71(local_38._1_7_,bVar6);
        local_40 = puVar1;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&
                   PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<(std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>,std[6c98fd8553dbae28]::sync::WaitTimeoutResult)>>_00793a20
                   ,&local_40,
                   &PTR_anon_c4f639d01efbe85961be48d14333fbdc_36_llvm_17218896934804705305_00793b10)
        ;
LAB_006e03f3:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      LOCK();
      local_48 = *param_1;
      *param_1 = 0;
      UNLOCK();
      if (1 < local_48 - 1) {
        local_38 = PTR_fmt_007991f0;
        local_40 = &local_48;
        (*(code *)PTR_panic_fmt_007991a8)
                  (local_48 - 1,
                   &PTR_anon_c4f639d01efbe85961be48d14333fbdc_36_llvm_17218896934804705305_00793b28)
        ;
        goto LAB_006e03f3;
      }
      if (((bVar6 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      }
      LOCK();
      uVar2 = (uint)*puVar1;
      *(uint *)puVar1 = 0;
      uVar8 = (ulonglong)uVar2;
      UNLOCK();
    }
    else {
      if (uVar8 != 2) {
        local_38 = PTR_fmt_007991f0;
        local_48 = uVar8;
        local_40 = &local_48;
        (*(code *)PTR_panic_fmt_007991a8)
                  (1,&
                     PTR_anon_c4f639d01efbe85961be48d14333fbdc_36_llvm_17218896934804705305_00793b40
                  );
        goto LAB_006e03f3;
      }
      LOCK();
      uVar8 = *param_1;
      *param_1 = 0;
      UNLOCK();
      if (((bVar6 == 0) && (uVar8 = *(ulonglong *)puVar4, (uVar8 & 0x7fffffffffffffff) != 0)) &&
         (uVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), (char)uVar8 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      }
      LOCK();
      uVar2 = (uint)*puVar1;
      *(uint *)puVar1 = 0;
      UNLOCK();
    }
    if (uVar2 == 2) {
      uVar9 = (*(code *)PTR_syscall_00799e60)(1,0x81);
      return uVar9;
    }
  }
  return uVar8;
}


