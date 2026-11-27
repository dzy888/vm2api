// 0038af70 resolve_call

/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::resolve_call */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::resolve_call
          (undefined4 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
          longlong param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong extraout_RDX;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  ulonglong local_a0;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  LOCK();
  bVar13 = *(int *)(param_2 + 0x60) == 0;
  if (bVar13) {
    *(int *)(param_2 + 0x60) = 1;
  }
  UNLOCK();
  if (!bVar13) {
    param_1 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar7 = *(char *)(param_2 + 100);
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar7 = *(char *)(param_2 + 100);
    param_1 = extraout_XMM0_Da_07;
  }
  if (cVar7 == '\0') {
    if (((param_3 != 0) && (param_4 != 0)) &&
       (local_a0 = *(ulonglong *)(param_2 + 0x90), local_a0 != 0)) {
      lVar11 = *(longlong *)(param_2 + 0x88);
      uVar10 = 0;
      lVar12 = 0;
      do {
        if ((*(longlong *)(lVar11 + 0x10 + lVar12) == param_4) &&
           (iVar8 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar14 = extraout_XMM0_Da,
           param_1 = extraout_XMM0_Da, iVar8 == 0)) goto LAB_0038b10c;
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x50;
      } while (local_a0 * 0x50 != lVar12);
    }
    if (param_5 != 0) {
      param_1 = craggemini_core[66f3c71560d70857]::schema::strip_mcp_prefix(param_5,param_6);
      local_a0 = *(ulonglong *)(param_2 + 0x90);
      if (local_a0 != 0) {
        lVar11 = *(longlong *)(param_2 + 0x88);
        uVar10 = 0;
        lVar12 = 0;
        do {
          if (((*(longlong *)(lVar11 + 0x40 + lVar12) == param_6) &&
              (iVar8 = (*(code *)PTR_bcmp_00799020)(param_1,param_6), uVar14 = extraout_XMM0_Da_00,
              param_1 = extraout_XMM0_Da_00, iVar8 == 0)) ||
             ((*(longlong *)(lVar11 + 0x28 + lVar12) == extraout_RDX &&
              (iVar8 = (*(code *)PTR_bcmp_00799020)(param_1,extraout_RDX),
              uVar14 = extraout_XMM0_Da_01, param_1 = extraout_XMM0_Da_01, iVar8 == 0))))
          goto LAB_0038b10c;
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 0x50;
        } while (local_a0 * 0x50 != lVar12);
      }
    }
    if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), param_1 = extraout_XMM0_Da_08,
             cVar7 == '\0')) {
      *(undefined1 *)(param_2 + 100) = 1;
    }
    LOCK();
    iVar8 = *(int *)(param_2 + 0x60);
    *(int *)(param_2 + 0x60) = 0;
    UNLOCK();
    if (iVar8 == 2) {
      param_1 = (*(code *)PTR_wake_00799010)();
    }
    lVar11 = param_7[1];
    for (lVar12 = param_7[2] + 1; lVar12 != 1; lVar12 = lVar12 + -1) {
      param_1 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (lVar11);
      lVar11 = lVar11 + 0x20;
    }
    if (*param_7 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    return 0;
  }
  uVar5 = (uint)uStack_70 >> 8;
  uStack_70 = CONCAT31((int3)uVar5,bVar6);
  local_78 = param_2 + 0x60;
  (*(code *)PTR_unwrap_failed_00799028)
            (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_78,
             &PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787820);
LAB_0038b3f4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
LAB_0038b10c:
  if (uVar10 < local_a0) {
    lVar9 = uVar10 * 0x50;
    lVar12 = *(longlong *)(lVar11 + lVar9);
    lVar1 = *(longlong *)(lVar11 + 0x18 + lVar9);
    lVar2 = *(longlong *)(lVar11 + 0x30 + lVar9);
    uVar3 = *(undefined8 *)(lVar11 + 0x48 + lVar9);
    uVar14 = (*(code *)PTR_memmove_00799258)
                       (*(undefined8 *)(lVar11 + 0x38 + lVar9),(~uVar10 + local_a0) * 0x50);
    *(ulonglong *)(param_2 + 0x90) = local_a0 - 1;
    if (lVar12 != -1) {
      if (((bVar6 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)(param_2 + 100) = 1;
      }
      LOCK();
      iVar8 = *(int *)(param_2 + 0x60);
      *(int *)(param_2 + 0x60) = 0;
      UNLOCK();
      if (iVar8 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      local_78 = *param_7;
      uStack_70 = (undefined4)param_7[1];
      uStack_6c = *(undefined4 *)((longlong)param_7 + 0xc);
      local_68 = (undefined4)param_7[2];
      uStack_64 = *(undefined4 *)((longlong)param_7 + 0x14);
      uStack_60 = (undefined4)param_7[3];
      uStack_5c = *(undefined4 *)((longlong)param_7 + 0x1c);
      <tokio[d7d91d38da47d894]::sync::oneshot::Sender<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>
      ::send(&local_50,uVar3,&local_78);
      uVar14 = extraout_XMM0_Da_02;
      if (local_50 != -1) {
        lVar11 = local_48;
        for (lVar9 = local_40 + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (lVar11);
          lVar11 = lVar11 + 0x20;
          uVar14 = extraout_XMM0_Da_03;
        }
        if (local_50 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,8);
          uVar14 = extraout_XMM0_Da_04;
        }
      }
      if (lVar12 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
        uVar14 = extraout_XMM0_Da_05;
      }
      if (lVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
        uVar14 = extraout_XMM0_Da_06;
      }
      if (lVar2 == 0) {
        return 1;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
      return 1;
    }
  }
  (*(code *)PTR_assert_failed_00799718)
            (uVar14,&PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787838);
  goto LAB_0038b3f4;
}


