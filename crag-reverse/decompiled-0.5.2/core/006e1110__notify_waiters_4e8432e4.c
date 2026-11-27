// 006e1110 notify_waiters

/* WARNING: Switch with 1 destination removed at 0x006e1175 */
/* <tokio[d7d91d38da47d894]::sync::notify::NotifyGuard>::notify_waiters */

void __rustcall
<tokio[d7d91d38da47d894]::sync::notify::NotifyGuard>::notify_waiters(ulonglong *param_1)

{
  longlong *plVar1;
  longlong *******ppppppplVar2;
  longlong *******ppppppplVar3;
  longlong ******pppppplVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  bool bVar18;
  longlong *local_290;
  longlong *******local_288;
  longlong *******ppppppplStack_280;
  longlong local_278;
  undefined8 local_268;
  longlong *local_258;
  longlong *******local_250;
  longlong *local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined4 local_230 [126];
  ulonglong local_38;
  
  plVar16 = (longlong *)param_1[1];
  local_290 = (longlong *)param_1[2];
  bVar12 = (byte)param_1[3];
  if ((*param_1 & 1) == 0) {
    LOCK();
    *plVar16 = *plVar16 + 4;
    UNLOCK();
    if (((bVar12 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
      *(undefined1 *)((longlong)local_290 + 4) = 1;
    }
    LOCK();
    lVar14 = *local_290;
    *(int *)local_290 = 0;
    UNLOCK();
    if ((int)lVar14 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
    return;
  }
  *plVar16 = (*param_1 & 0xfffffffffffffffc) + 4;
  local_268 = 0;
  local_288 = (longlong *******)0x0;
  local_278 = 0;
  ppppppplStack_280 = (longlong *******)local_290[1];
  ppppppplVar2 = (longlong *******)local_290[2];
  local_290[1] = 0;
  local_290[2] = 0;
  if (ppppppplStack_280 == (longlong *******)0x0) {
    local_288 = (longlong *******)&local_288;
    ppppppplStack_280 = (longlong *******)&local_288;
  }
  else {
    *ppppppplStack_280 = (longlong ******)&local_288;
    if (ppppppplVar2 == (longlong *******)0x0) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_006e1534;
    }
    ppppppplVar2[1] = (longlong ******)&local_288;
    local_288 = ppppppplVar2;
  }
  local_250 = (longlong *******)&local_288;
  local_240 = 0;
  local_248 = plVar16;
  local_38 = 0;
  plVar1 = plVar16 + 1;
  local_258 = plVar16;
  while( true ) {
    while (ppppppplVar2 = local_288, 0x1f < local_38) {
      if ((((bVar12 & 1) == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
        *(undefined1 *)((longlong)local_290 + 4) = 1;
      }
      LOCK();
      lVar14 = *local_290;
      *(int *)local_290 = 0;
      UNLOCK();
      if ((int)lVar14 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      uVar11 = local_38;
      local_38 = 0;
      plVar16 = &local_238;
      for (lVar14 = 0; uVar11 * -0x10 != lVar14; lVar14 = lVar14 + -0x10) {
        lVar15 = *plVar16;
        plVar16 = plVar16 + 2;
        (**(code **)(lVar15 + 8))();
      }
      LOCK();
      bVar18 = (int)*plVar1 == 0;
      if (bVar18) {
        *(int *)plVar1 = 1;
      }
      UNLOCK();
      if (!bVar18) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar12 = 0;
      }
      else {
        bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar12 = bVar12 ^ 1;
      }
      local_290 = plVar1;
    }
    if (local_288 == (longlong *******)0x0) break;
    if ((longlong ********)local_288 == &local_288) {
      local_240 = 1;
      if ((((bVar12 & 1) == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
        *(undefined1 *)((longlong)local_290 + 4) = 1;
      }
      LOCK();
      lVar14 = *local_290;
      *(int *)local_290 = 0;
      UNLOCK();
      if ((int)lVar14 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      lVar14 = local_38 * 0x10;
      local_38 = 0;
      plVar16 = &local_238;
      for (lVar15 = 0; -lVar15 != lVar14; lVar15 = lVar15 + -0x10) {
        lVar5 = *plVar16;
        plVar16 = plVar16 + 2;
        (**(code **)(lVar5 + 8))();
      }
      puVar17 = local_230;
      for (lVar14 = local_38 + 1; lVar14 != 1; lVar14 = lVar14 + -1) {
        plVar16 = (longlong *)(puVar17 + -2);
        puVar17 = puVar17 + 4;
        (**(code **)(*plVar16 + 0x18))();
      }
      (*(code *)PTR_drop_0079a788)();
      if (local_278 == 0) {
        return;
      }
      (**(code **)(local_278 + 0x18))();
      return;
    }
    ppppppplVar3 = (longlong *******)*local_288;
    if (ppppppplVar3 == (longlong *******)0x0) break;
    local_288 = ppppppplVar3;
    ppppppplVar3[1] = (longlong ******)&local_288;
    *ppppppplVar2 = (longlong ******)0x0;
    ppppppplVar2[1] = (longlong ******)0x0;
    uVar7 = *(undefined4 *)(ppppppplVar2 + 2);
    uVar8 = *(undefined4 *)((longlong)ppppppplVar2 + 0x14);
    uVar9 = *(undefined4 *)(ppppppplVar2 + 3);
    uVar10 = *(undefined4 *)((longlong)ppppppplVar2 + 0x1c);
    pppppplVar4 = ppppppplVar2[2];
    ppppppplVar2[2] = (longlong ******)0x0;
    uVar11 = local_38;
    if (pppppplVar4 != (longlong ******)0x0) {
      if (0x1f < local_38) {
        (*(code *)PTR_panic_bounds_check_00799520)
                  (ppppppplVar3,
                   &PTR_anon_a54838b0e2c6049171e94f4eeb8260c4_34_llvm_5899425866962164388_00793ae0);
        goto LAB_006e1534;
      }
      local_230[local_38 * 4 + -2] = uVar7;
      local_230[local_38 * 4 + -1] = uVar8;
      local_230[uVar11 * 4] = uVar9;
      local_230[uVar11 * 4 + 1] = uVar10;
      local_38 = local_38 + 1;
    }
    ppppppplVar2[4] = (longlong ******)0x2;
  }
  (*(code *)PTR_unwrap_failed_00799278)();
LAB_006e1534:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


