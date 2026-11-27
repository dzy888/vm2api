// 006e50f0 wake

/* <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake
          (longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  char cVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined4 uVar22;
  longlong lStack_248;
  undefined4 *local_240;
  undefined8 local_238;
  undefined4 local_230 [126];
  ulonglong local_38;
  
  local_38 = 0;
  piVar1 = (int *)(param_1 + 0x18);
  LOCK();
  bVar21 = *(int *)(param_1 + 0x18) == 0;
  if (bVar21) {
    *(int *)(param_1 + 0x18) = 1;
  }
  UNLOCK();
  if (!bVar21) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar17 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  plVar15 = &lStack_248;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar11 = 0;
    uVar9 = local_38;
  }
  else {
    bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar11 = bVar11 ^ 1;
    uVar9 = local_38;
  }
  local_38 = uVar9;
  if ((param_2 & 5) != 0) {
    uVar22 = *(undefined4 *)(param_1 + 0x30);
    uVar6 = *(undefined4 *)(param_1 + 0x34);
    uVar7 = *(undefined4 *)(param_1 + 0x38);
    uVar8 = *(undefined4 *)(param_1 + 0x3c);
    lVar18 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar18 != 0) {
      if (0x1f < uVar9) goto LAB_006e54f3;
      local_230[uVar9 * 4 + -2] = uVar22;
      local_230[uVar9 * 4 + -1] = uVar6;
      local_230[uVar9 * 4] = uVar7;
      local_230[uVar9 * 4 + 1] = uVar8;
      local_38 = local_38 + 1;
    }
  }
  uVar9 = local_38;
  if ((param_2 & 10) != 0) {
    uVar22 = *(undefined4 *)(param_1 + 0x40);
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    uVar8 = *(undefined4 *)(param_1 + 0x4c);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar18 != 0) {
      if (0x1f < local_38) {
LAB_006e54f3:
        (*(code *)PTR_panic_bounds_check_00799520)
                  (uVar22,&
                          PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_34_llvm_5899425866962164388_00793d80
                  );
LAB_006e5505:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      local_230[local_38 * 4 + -2] = uVar22;
      local_230[local_38 * 4 + -1] = uVar6;
      local_230[uVar9 * 4] = uVar7;
      local_230[uVar9 * 4 + 1] = uVar8;
      local_38 = local_38 + 1;
    }
  }
  do {
    if (local_38 < 0x20) {
      plVar14 = *(longlong **)(param_1 + 0x20);
LAB_006e5202:
      do {
        do {
          plVar13 = plVar14;
          uVar9 = local_38;
          if (plVar13 == (longlong *)0x0) goto LAB_006e53df;
          plVar14 = (longlong *)plVar13[1];
          uVar3 = plVar13[4];
          uVar16 = -((uint)uVar3 & 1) & 5;
          uVar5 = uVar16 + 10;
          if ((uVar3 & 2) == 0) {
            uVar5 = uVar16;
          }
          uVar16 = uVar5 | 0x14;
          if ((uVar3 & 0x10) == 0) {
            uVar16 = uVar5;
          }
        } while (((uVar16 | (uint)uVar3 & 0x20) & param_2) == 0);
        if (*plVar13 == 0) {
          if (*(longlong **)(param_1 + 0x20) != plVar13) goto LAB_006e53df;
          *(longlong **)(param_1 + 0x20) = plVar14;
          if (plVar14 == (longlong *)0x0) goto LAB_006e5273;
LAB_006e5256:
          *plVar14 = *plVar13;
        }
        else {
          *(longlong **)(*plVar13 + 8) = plVar14;
          if (plVar14 != (longlong *)0x0) goto LAB_006e5256;
LAB_006e5273:
          if (*(longlong **)(param_1 + 0x28) != plVar13) {
LAB_006e53df:
            if ((((bVar11 & 1) == 0) && ((*puVar17 & 0x7fffffffffffffff) != 0)) &&
               (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
              *(undefined1 *)(param_1 + 0x1c) = 1;
            }
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = 0;
            UNLOCK();
            if (iVar2 == 2) {
              (*(code *)PTR_wake_00799010)();
            }
            lVar18 = local_38 * 0x10;
            local_38 = 0;
            for (lVar19 = 0; plVar15 = plVar15 + 2, -lVar19 != lVar18; lVar19 = lVar19 + -0x10) {
              (**(code **)(*plVar15 + 8))();
            }
            puVar20 = local_230;
            for (lVar18 = local_38 + 1; lVar18 != 1; lVar18 = lVar18 + -1) {
              plVar15 = (longlong *)(puVar20 + -2);
              puVar20 = puVar20 + 4;
              (**(code **)(*plVar15 + 0x18))();
            }
            return;
          }
          *(longlong *)(param_1 + 0x28) = *plVar13;
        }
        *plVar13 = 0;
        plVar13[1] = 0;
        lVar19 = plVar13[2];
        uVar22 = *(undefined4 *)((longlong)plVar13 + 0x14);
        lVar10 = plVar13[3];
        uVar6 = *(undefined4 *)((longlong)plVar13 + 0x1c);
        lVar18 = plVar13[2];
        plVar13[2] = 0;
        if (lVar18 != 0) {
          *(undefined1 *)(plVar13 + 5) = 1;
          if (0x1f < local_38) {
            (*(code *)PTR_panic_bounds_check_00799520)
                      (plVar13,&
                               PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_34_llvm_5899425866962164388_00793d80
                      );
            goto LAB_006e5505;
          }
          local_230[local_38 * 4 + -2] = (int)lVar19;
          local_230[local_38 * 4 + -1] = uVar22;
          local_230[uVar9 * 4] = (int)lVar10;
          local_230[uVar9 * 4 + 1] = uVar6;
          local_38 = local_38 + 1;
          if (0x1f < local_38) break;
          goto LAB_006e5202;
        }
      } while (local_38 < 0x20);
    }
    if ((((bVar11 & 1) == 0) && ((*puVar17 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    uVar9 = local_38;
    local_240 = local_230 + local_38 * 4 + -2;
    local_38 = 0;
    plVar14 = &lStack_248;
    for (lVar18 = 0; plVar14 = plVar14 + 2, uVar9 * -0x10 != lVar18; lVar18 = lVar18 + -0x10) {
      (**(code **)(*plVar14 + 8))();
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 1;
    }
    puVar17 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
    UNLOCK();
    if (iVar2 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*puVar17 & 0x7fffffffffffffff) == 0) {
      bVar11 = 0;
    }
    else {
      bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar11 = bVar11 ^ 1;
    }
  } while( true );
}


