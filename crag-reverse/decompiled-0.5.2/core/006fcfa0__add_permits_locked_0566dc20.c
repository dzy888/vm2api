// 006fcfa0 add_permits_locked

/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked */

void __rustcall
<tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
          (int *param_1,ulonglong param_2,int *param_3,byte param_4)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  int *piVar20;
  undefined4 *puVar21;
  ulonglong local_268;
  int *local_260;
  undefined8 *local_258;
  undefined *local_250;
  undefined8 *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined4 local_230 [126];
  ulonglong local_38;
  
  local_38 = 0;
  local_268 = param_2;
  local_260 = param_3;
  if (param_2 == 0) {
    if (((param_4 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
      *(undefined1 *)(local_260 + 1) = 1;
    }
    LOCK();
    iVar2 = *local_260;
    *local_260 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    bVar19 = 0;
    do {
      uVar17 = local_268;
      piVar20 = local_260;
      if (param_4 != 2) goto LAB_006fd096;
      LOCK();
      iVar2 = *param_1;
      if (iVar2 == 0) {
        *param_1 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      piVar20 = param_1;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        param_4 = 0;
      }
      else {
        param_4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        param_4 = param_4 ^ 1;
      }
      while (local_38 < 0x20) {
LAB_006fd096:
        uVar4 = local_38;
        lVar16 = *(longlong *)(piVar20 + 4);
        if (lVar16 == 0) {
          uVar17 = local_268;
          if (local_268 != 0) goto LAB_006fd17d;
          bVar19 = 1;
          goto joined_r0x006fd234;
        }
        uVar12 = *(ulonglong *)(lVar16 + 0x20);
        do {
          uVar11 = uVar12;
          uVar17 = uVar11;
          if (local_268 < uVar11) {
            uVar17 = local_268;
          }
          LOCK();
          uVar3 = *(ulonglong *)(lVar16 + 0x20);
          if (uVar11 == uVar3) {
            *(ulonglong *)(lVar16 + 0x20) = uVar11 - uVar17;
            uVar12 = uVar11;
          }
          else {
            uVar12 = uVar3;
          }
          UNLOCK();
        } while (uVar11 != uVar3);
        uVar17 = local_268 - uVar17;
        bVar6 = local_268 < uVar11;
        local_268 = uVar17;
        if (bVar6) break;
        plVar15 = *(longlong **)(piVar20 + 4);
        if (plVar15 == (longlong *)0x0) {
          (*(code *)PTR_unwrap_failed_00799278)();
          goto LAB_006fd385;
        }
        lVar16 = plVar15[2];
        *(longlong *)(piVar20 + 4) = lVar16;
        if (lVar16 == 0) {
          piVar20[2] = 0;
          piVar20[3] = 0;
        }
        else {
          *(undefined8 *)(lVar16 + 0x18) = 0;
        }
        plVar15[2] = 0;
        plVar15[3] = 0;
        lVar18 = *plVar15;
        uVar8 = *(undefined4 *)((longlong)plVar15 + 4);
        lVar5 = plVar15[1];
        uVar9 = *(undefined4 *)((longlong)plVar15 + 0xc);
        lVar16 = *plVar15;
        *plVar15 = 0;
        if (lVar16 != 0) {
          if (0x1f < local_38) {
            (*(code *)PTR_panic_bounds_check_00799520)
                      (plVar15 + 2,
                       &anon_a54838b0e2c6049171e94f4eeb8260c4_35_llvm_5899425866962164388);
            goto LAB_006fd385;
          }
          local_230[local_38 * 4 + -2] = (int)lVar18;
          local_230[local_38 * 4 + -1] = uVar8;
          local_230[uVar4 * 4] = (int)lVar5;
          local_230[uVar4 * 4 + 1] = uVar9;
          local_38 = local_38 + 1;
        }
      }
      if ((bool)(~bVar19 & 1 | uVar17 == 0)) {
        bVar19 = bVar19 & uVar17 == 0;
      }
      else {
LAB_006fd17d:
        puVar13 = (undefined8 *)0x2000000000000000;
        if (0x1fffffffffffffff < uVar17) {
          local_258 = &anon_a54838b0e2c6049171e94f4eeb8260c4_25_llvm_5899425866962164388;
          ppuVar14 = &PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_27_llvm_5899425866962164388_00794c90
          ;
LAB_006fd330:
          local_250 = PTR_fmt_007991f0;
          (*(code *)PTR_panic_fmt_007991a8)(puVar13,ppuVar14);
LAB_006fd385:
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        LOCK();
        puVar1 = (ulonglong *)(param_1 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 + uVar17 * 2;
        UNLOCK();
        if (0x1fffffffffffffff < (uVar4 >> 1) + uVar17) {
          puVar13 = &anon_a54838b0e2c6049171e94f4eeb8260c4_25_llvm_5899425866962164388;
          local_248 = &anon_a54838b0e2c6049171e94f4eeb8260c4_25_llvm_5899425866962164388;
          local_240 = PTR_fmt_007991f0;
          ppuVar14 = &PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_27_llvm_5899425866962164388_00794ca8
          ;
          local_258 = &local_268;
          goto LAB_006fd330;
        }
        local_268 = 0;
        bVar19 = 1;
      }
joined_r0x006fd234:
      if ((((param_4 & 1) == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
        *(undefined1 *)(piVar20 + 1) = 1;
      }
      LOCK();
      iVar2 = *piVar20;
      *piVar20 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      lVar18 = local_38 * 0x10;
      local_38 = 0;
      plVar15 = &local_238;
      for (lVar16 = 0; -lVar16 != lVar18; lVar16 = lVar16 + -0x10) {
        lVar5 = *plVar15;
        plVar15 = plVar15 + 2;
        (**(code **)(lVar5 + 8))();
      }
      param_4 = 2;
    } while (local_268 != 0);
  }
  puVar21 = local_230;
  for (lVar16 = local_38 + 1; lVar16 != 1; lVar16 = lVar16 + -1) {
    plVar15 = (longlong *)(puVar21 + -2);
    puVar21 = puVar21 + 4;
    (**(code **)(*plVar15 + 0x18))();
  }
  return;
}


