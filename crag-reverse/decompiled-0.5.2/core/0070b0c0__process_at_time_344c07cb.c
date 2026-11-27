// 0070b0c0 process_at_time

/* <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::process_at_time */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::process_at_time
          (int *param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  byte bVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  bool bVar19;
  char local_258 [24];
  longlong local_240;
  undefined8 local_238;
  undefined4 local_230 [126];
  ulonglong local_38;
  
  local_38 = 0;
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  bVar10 = 0;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) {
    bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar10 = bVar10 ^ 1;
  }
  uVar16 = *(ulonglong *)(param_1 + 4);
  if (*(ulonglong *)(param_1 + 4) < param_2) {
    uVar16 = param_2;
  }
  while( true ) {
    do {
      do {
        do {
          lVar12 = <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::poll(param_1 + 2,uVar16);
          uVar9 = local_38;
          if (lVar12 == 0) {
            <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::next_expiration
                      (local_258,param_1 + 2);
            local_240 = local_240 + (ulonglong)(local_240 == 0);
            if (local_258[0] == '\0') {
              local_240 = 0;
            }
            *(longlong *)(param_1 + 10) = local_240;
            if ((((bVar10 & 1) == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
               (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
              *(undefined1 *)(param_1 + 1) = 1;
            }
            LOCK();
            iVar1 = *param_1;
            *param_1 = 0;
            UNLOCK();
            if (iVar1 == 2) {
              (*(code *)PTR_wake_00799010)();
            }
            lVar12 = local_38 * 0x10;
            local_38 = 0;
            plVar14 = &local_238;
            for (lVar17 = 0; -lVar17 != lVar12; lVar17 = lVar17 + -0x10) {
              lVar3 = *plVar14;
              plVar14 = plVar14 + 2;
              (**(code **)(lVar3 + 8))();
            }
            puVar18 = local_230;
            for (lVar12 = local_38 + 1; lVar12 != 1; lVar12 = lVar12 + -1) {
              plVar14 = (longlong *)(puVar18 + -2);
              puVar18 = puVar18 + 4;
              (**(code **)(*plVar14 + 0x18))();
            }
            return;
          }
        } while (*(longlong *)(lVar12 + 0x18) == -1);
        *(undefined1 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x18) = 0xffffffffffffffff;
        uVar13 = *(ulonglong *)(lVar12 + 0x30);
        do {
          LOCK();
          uVar2 = *(ulonglong *)(lVar12 + 0x30);
          bVar19 = uVar13 == uVar2;
          if (bVar19) {
            *(ulonglong *)(lVar12 + 0x30) = uVar13 | 2;
          }
          else {
            uVar13 = uVar2;
          }
          UNLOCK();
        } while (!bVar19);
      } while (uVar13 != 0);
      uVar5 = *(undefined4 *)(lVar12 + 0x20);
      uVar6 = *(undefined4 *)(lVar12 + 0x24);
      uVar7 = *(undefined4 *)(lVar12 + 0x28);
      uVar8 = *(undefined4 *)(lVar12 + 0x2c);
      lVar17 = *(longlong *)(lVar12 + 0x20);
      *(undefined8 *)(lVar12 + 0x20) = 0;
      LOCK();
      *(undefined8 *)(lVar12 + 0x30) = 0;
      UNLOCK();
    } while (lVar17 == 0);
    if (0x1f < local_38) break;
    local_230[local_38 * 4 + -2] = uVar5;
    local_230[local_38 * 4 + -1] = uVar6;
    local_230[uVar9 * 4] = uVar7;
    local_230[uVar9 * 4 + 1] = uVar8;
    local_38 = local_38 + 1;
    if (0x1f < local_38) {
      if ((((bVar10 & 1) == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
         (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      LOCK();
      iVar1 = *param_1;
      *param_1 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      uVar9 = local_38;
      local_38 = 0;
      plVar14 = &local_238;
      for (lVar12 = 0; uVar9 * -0x10 != lVar12; lVar12 = lVar12 + -0x10) {
        lVar17 = *plVar14;
        plVar14 = plVar14 + 2;
        (**(code **)(lVar17 + 8))();
      }
      LOCK();
      iVar1 = *param_1;
      if (iVar1 == 0) {
        *param_1 = 1;
      }
      puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
      UNLOCK();
      if (iVar1 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*puVar15 & 0x7fffffffffffffff) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar10 = bVar10 ^ 1;
      }
    }
  }
  (*(code *)PTR_panic_bounds_check_00799520)
            (lVar12,&PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_34_llvm_5899425866962164388_00795650)
  ;
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


