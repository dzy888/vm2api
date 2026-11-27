// 006fdc20 park_condvar

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Inner>::park_condvar */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Inner>::park_condvar
          (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  bool bVar14;
  byte local_64;
  longlong *local_60;
  undefined *local_58;
  byte local_50;
  longlong local_48;
  int local_40;
  longlong **local_38;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  LOCK();
  bVar14 = *(int *)(param_1 + 0x10) == 0;
  if (bVar14) {
    *(int *)(param_1 + 0x10) = 1;
  }
  UNLOCK();
  iVar11 = param_3;
  if (!bVar14) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_64 = 0;
  }
  else {
    local_64 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_64 = local_64 ^ 1;
  }
  puVar9 = (uint *)0x1;
  lVar6 = 0;
  LOCK();
  lVar7 = *(longlong *)(param_1 + 8);
  if (lVar7 == 0) {
    *(longlong *)(param_1 + 8) = 1;
  }
  else {
    lVar6 = lVar7;
  }
  UNLOCK();
  if (lVar7 == 0) {
    pcVar2 = (code *)PTR_wait_0079a768;
    if (param_3 != -1) {
      local_60 = (longlong *)(*(code *)PTR_now_00799250)();
      local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar11);
      local_38 = &local_60;
      lVar6 = (*(code *)PTR_checked_add_0079a828)();
      (*(code *)PTR_now_00799250)();
      uVar12 = 1;
      lVar7 = (*(code *)PTR_add_00799280)
                        (0,1,&
                             PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_9_llvm_5899425866962164388_00794bd8
                        );
      puVar3 = PTR_duration_since_007992b0;
      iVar11 = (int)uVar12;
      if (param_3 != -1) {
        lVar7 = lVar6;
        iVar11 = param_3;
      }
      pcVar2 = (code *)PTR_wait_0079a768;
      if (iVar11 != -1) {
        do {
          local_48 = lVar7;
          local_40 = iVar11;
          (*(code *)PTR_now_00799250)();
          uVar8 = (*(code *)puVar3)();
          puVar10 = (uint *)(uVar12 & 0xffffffff);
          if ((uVar8 == 0) && ((int)uVar12 == 0)) {
LAB_006fdda1:
            LOCK();
            lVar7 = *(longlong *)(param_1 + 8);
            *(longlong *)(param_1 + 8) = 0;
            UNLOCK();
            puVar9 = &switchD_006fddbf::switchdataD_001b70bc;
            switch(lVar7) {
            case 0:
            case 2:
              ppuVar13 = &
                         PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_9_llvm_5899425866962164388_00794d68
              ;
              break;
            case 1:
            case 3:
              goto switchD_006fddbf_caseD_1;
            default:
              ppuVar13 = &
                         PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_9_llvm_5899425866962164388_00794d80
              ;
              puVar9 = puVar10;
            }
            local_48 = lVar7;
            local_38[1] = (longlong *)PTR_fmt_007991f0;
            goto LAB_006fdf36;
          }
          bVar4 = (*(code *)PTR_wait_timeout_007995e0)();
          if (*(char *)(param_1 + 0x14) != '\0') {
            local_50 = bVar4 ^ 1;
            local_58 = (undefined *)CONCAT71(local_58._1_7_,local_64);
            local_60 = plVar1;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&
                       PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<(std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>,std[6c98fd8553dbae28]::sync::WaitTimeoutResult)>>_00794c58
                       ,&local_60,
                       &
                       PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_9_llvm_5899425866962164388_00794d50
                      );
            goto LAB_006fdf3c;
          }
          puVar10 = (uint *)0x0;
          if (bVar4 == 0) goto LAB_006fdda1;
          LOCK();
          bVar14 = *(longlong *)(param_1 + 8) == 3;
          if (bVar14) {
            *(longlong *)(param_1 + 8) = 0;
          }
          UNLOCK();
          uVar12 = uVar8;
        } while (!bVar14);
        goto switchD_006fddbf_caseD_1;
      }
    }
    do {
      (*pcVar2)();
      if (*(char *)(param_1 + 0x14) != '\0') {
        local_58 = (undefined *)CONCAT71(local_58._1_7_,local_64);
        local_60 = plVar1;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&
                   PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>>>_00794c38
                   ,&local_60,
                   &PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_9_llvm_5899425866962164388_00794d38);
        goto LAB_006fdf3c;
      }
      LOCK();
      bVar14 = *(longlong *)(param_1 + 8) == 3;
      if (bVar14) {
        *(longlong *)(param_1 + 8) = 0;
      }
      UNLOCK();
    } while (!bVar14);
  }
  else {
    if (lVar6 != 3) {
      local_58 = PTR_fmt_007991f0;
      ppuVar13 = &PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_9_llvm_5899425866962164388_00794d98;
      local_48 = lVar6;
LAB_006fdf36:
      local_60 = &local_48;
      (*(code *)PTR_panic_fmt_007991a8)(puVar9,ppuVar13);
LAB_006fdf3c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    LOCK();
    *(undefined8 *)(param_1 + 8) = 0;
    UNLOCK();
  }
switchD_006fddbf_caseD_1:
  if (((local_64 == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  LOCK();
  iVar11 = *(int *)plVar1;
  *(int *)plVar1 = 0;
  UNLOCK();
  if (iVar11 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


