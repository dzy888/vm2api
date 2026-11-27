// 004b60d0 resolve_session_with

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::resolve_session_with */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::resolve_session_with
          (undefined8 param_1,longlong param_2,int *param_3,longlong param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined *puVar3;
  int *piVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  bool bVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  longlong local_d8;
  int *piStack_d0;
  longlong local_c8;
  int *local_b8;
  longlong local_b0;
  int *local_a8;
  undefined4 local_9c;
  int *local_98;
  int *local_90;
  longlong local_88;
  int *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  longlong local_60;
  int *piStack_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_60 = 0;
  piStack_58 = (int *)0x8;
  local_50 = 0;
  piVar21 = (int *)(param_2 + 0x298);
  LOCK();
  bVar22 = *(int *)(param_2 + 0x298) == 0;
  if (bVar22) {
    *(int *)(param_2 + 0x298) = 1;
  }
  UNLOCK();
  local_b0 = param_4;
  local_9c = param_5;
  local_48 = param_1;
  local_38 = param_6;
  if (!bVar22) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar5 = *(char *)(param_2 + 0x29c);
    pcVar2 = (code *)PTR_bcmp_00799020;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar5 = *(char *)(param_2 + 0x29c);
    pcVar2 = (code *)PTR_bcmp_00799020;
  }
  PTR_bcmp_00799020 = pcVar2;
  if (cVar5 == '\0') {
    pauVar15 = *(undefined1 (**) [16])(param_2 + 0x3c0);
    lVar19 = *(longlong *)(param_2 + 0x3d8);
    auVar24 = *pauVar15;
    pauVar13 = pauVar15 + 1;
    uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
    local_b8 = piVar21;
    local_a8 = param_3;
    local_40 = param_2;
    if (param_3 == (int *)0x0) {
      if (lVar19 != 0) {
        do {
          if ((short)uVar18 == 0) {
            do {
              auVar24 = *pauVar13;
              pauVar15 = pauVar15 + -0x80;
              pauVar13 = pauVar13 + 1;
              uVar18 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar18 == 0);
          }
          iVar9 = 0;
          for (uVar8 = uVar18; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            iVar9 = iVar9 + 1;
          }
          uVar8 = iVar9 << 7;
          cVar5 = <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::
                  has_suspended_session
                            (*(longlong *)((longlong)pauVar15 + (-0x40 - (ulonglong)uVar8)) + 0x10,
                             *(undefined8 *)((longlong)pauVar15 + (-0x60 - (ulonglong)uVar8)),
                             *(undefined8 *)((longlong)pauVar15 + (-0x58 - (ulonglong)uVar8)));
          auVar24._8_8_ = extraout_XMM0_Qb_02;
          auVar24._0_8_ = extraout_XMM0_Qa_01;
          if (cVar5 != '\0') {
            <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries
                      (&local_d8,
                       *(longlong *)((longlong)pauVar15 + (-0x38 - (ulonglong)uVar8)) + 0x10);
            local_80 = piStack_d0 + local_c8 * 0x12;
            local_98 = piStack_d0;
            local_88 = local_d8;
            local_90 = piStack_d0;
            auVar24._0_8_ =
                 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary,alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>>
                 ::spec_extend(&local_60,&local_98);
            auVar24._8_8_ = extraout_XMM0_Qb_03;
          }
          uVar18 = uVar18 - 1 & uVar18;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
    }
    else {
      for (; lVar19 != 0; lVar19 = lVar19 + -1) {
        if ((short)uVar18 == 0) {
          do {
            auVar24 = *pauVar13;
            pauVar15 = pauVar15 + -0x80;
            pauVar13 = pauVar13 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar18 == 0);
        }
        iVar9 = 0;
        for (uVar8 = uVar18; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        uVar8 = iVar9 << 7;
        if (*(longlong *)((longlong)pauVar15 + (-0x70 - (ulonglong)uVar8)) == local_b0) {
          iVar9 = (*pcVar2)();
          auVar24._8_8_ = extraout_XMM0_Qb;
          auVar24._0_8_ = extraout_XMM0_Qa;
          if (iVar9 == 0) {
            cVar5 = <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::
                    has_suspended_session
                              (*(longlong *)((longlong)pauVar15 + (-0x40 - (ulonglong)uVar8)) + 0x10
                               ,*(undefined8 *)((longlong)pauVar15 + (-0x60 - (ulonglong)uVar8)),
                               *(undefined8 *)((longlong)pauVar15 + (-0x58 - (ulonglong)uVar8)));
            auVar24._8_8_ = extraout_XMM0_Qb_00;
            auVar24._0_8_ = extraout_XMM0_Qa_00;
            if (cVar5 != '\0') {
              <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries
                        (&local_d8,
                         *(longlong *)((longlong)pauVar15 + (-0x38 - (ulonglong)uVar8)) + 0x10);
              local_80 = piStack_d0 + local_c8 * 0x12;
              local_98 = piStack_d0;
              local_88 = local_d8;
              local_90 = piStack_d0;
              auVar24._0_8_ =
                   <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary,alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>>
                   ::spec_extend(&local_60,&local_98);
              auVar24._8_8_ = extraout_XMM0_Qb_01;
            }
          }
        }
        uVar18 = uVar18 - 1 & uVar18;
      }
    }
    lVar19 = local_40;
    piVar4 = local_a8;
    piVar21 = local_b8;
    puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
    {
      cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      auVar24._8_8_ = extraout_XMM0_Qb_09;
      auVar24._0_8_ = extraout_XMM0_Qa_04;
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar19 + 0x29c) = 1;
      }
    }
    LOCK();
    iVar9 = *piVar21;
    *piVar21 = 0;
    UNLOCK();
    if (iVar9 == 2) {
      auVar24._0_8_ = (*(code *)PTR_wake_00799010)();
      auVar24._8_8_ = extraout_XMM0_Qb_06;
    }
    local_b8 = (int *)(lVar19 + 0x490);
    LOCK();
    bVar22 = *(int *)(lVar19 + 0x490) == 0;
    if (bVar22) {
      *(int *)(lVar19 + 0x490) = 1;
    }
    UNLOCK();
    if (!bVar22) {
      auVar24._0_8_ = (*(code *)PTR_lock_contended_00798fe0)();
      auVar24._8_8_ = extraout_XMM0_Qb_07;
    }
    if ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) {
      bVar7 = 0;
      cVar5 = *(char *)(lVar19 + 0x494);
      pcVar2 = (code *)PTR_bcmp_00799020;
    }
    else {
      bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      auVar24._8_8_ = extraout_XMM0_Qb_08;
      auVar24._0_8_ = extraout_XMM0_Qa_03;
      bVar7 = bVar7 ^ 1;
      cVar5 = *(char *)(lVar19 + 0x494);
      pcVar2 = (code *)PTR_bcmp_00799020;
    }
    PTR_bcmp_00799020 = pcVar2;
    if (cVar5 == '\0') {
      uVar1 = *(ulonglong *)(lVar19 + 0x4b0);
      if (uVar1 == 0) {
        lVar10 = 0;
        uVar16 = 0;
        lVar12 = 0;
      }
      else {
        uVar16 = *(ulonglong *)(lVar19 + 0x498);
        uVar11 = 0;
        if (uVar16 <= *(ulonglong *)(lVar19 + 0x4a8)) {
          uVar11 = uVar16;
        }
        lVar10 = *(ulonglong *)(lVar19 + 0x4a8) - uVar11;
        lVar12 = uVar1 - (uVar16 - lVar10);
        if (uVar1 < uVar16 - lVar10 || lVar12 == 0) {
          uVar16 = uVar1 + lVar10;
          lVar12 = 0;
        }
      }
      lVar20 = *(longlong *)(lVar19 + 0x4a0);
      lVar19 = lVar10 * 0x848 + lVar20;
      lVar17 = uVar16 * 0x848 + lVar20;
      lVar10 = lVar12 * 0x848 + lVar20;
      if (piVar4 == (int *)0x0) {
LAB_004b6540:
        if (lVar19 == lVar17) {
          bVar22 = lVar20 == lVar10;
          lVar12 = lVar20;
          lVar17 = lVar10;
          lVar20 = lVar19;
          if (bVar22) goto LAB_004b65bf;
        }
        else {
          lVar12 = lVar19;
          lVar19 = lVar10;
        }
        lVar10 = lVar19;
        lVar19 = lVar12 + 0x848;
        if (*(longlong *)(lVar12 + 0x780) != -1) {
          <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries
                    (&local_d8,*(longlong *)(lVar12 + 0x810) + 0x10);
          local_80 = piStack_d0 + local_c8 * 0x12;
          local_98 = piStack_d0;
          local_88 = local_d8;
          local_90 = piStack_d0;
          <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary,alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>>
          ::spec_extend(&local_60,&local_98);
        }
        goto LAB_004b6540;
      }
LAB_004b6470:
      lVar12 = lVar19;
      if (lVar12 == lVar17) {
        bVar22 = lVar20 == lVar10;
        lVar14 = lVar20;
        lVar17 = lVar10;
        lVar20 = lVar12;
        if (bVar22) goto LAB_004b65bf;
      }
      else {
        lVar14 = lVar12;
        lVar12 = lVar10;
      }
      lVar19 = lVar14 + 0x848;
      lVar10 = lVar12;
      if (((*(longlong *)(lVar14 + 0x780) != -1) && (*(longlong *)(lVar14 + 0x6e8) != -1)) &&
         (*(longlong *)(lVar14 + 0x6f8) == local_b0)) {
        iVar9 = (*pcVar2)(auVar24._0_8_,local_b0);
        auVar24._8_8_ = extraout_XMM0_Qb_04;
        auVar24._0_8_ = extraout_XMM0_Qa_02;
        if (iVar9 == 0) {
          <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries
                    (&local_d8,*(longlong *)(lVar14 + 0x810) + 0x10);
          local_80 = piStack_d0 + local_c8 * 0x12;
          local_98 = piStack_d0;
          local_88 = local_d8;
          local_90 = piStack_d0;
          auVar24._0_8_ =
               <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary,alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>>
               ::spec_extend(&local_60,&local_98);
          auVar24._8_8_ = extraout_XMM0_Qb_05;
        }
      }
      goto LAB_004b6470;
    }
    local_90._1_7_ = (undefined7)((ulonglong)local_90 >> 8);
    local_90 = (int *)CONCAT71(local_90._1_7_,bVar7);
    local_98 = local_b8;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
               ,&local_98,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078baf0);
  }
  else {
    local_90._1_7_ = (undefined7)((ulonglong)local_90 >> 8);
    local_90 = (int *)CONCAT71(local_90._1_7_,bVar7);
    local_98 = piVar21;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
               ,&local_98,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bad8);
  }
  goto LAB_004b691d;
LAB_004b65bf:
  lVar19 = local_40;
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  local_c8 = local_50;
  local_d8 = local_60;
  piStack_d0 = piStack_58;
  if (((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(lVar19 + 0x494) = 1;
  }
  piVar21 = local_a8;
  LOCK();
  iVar9 = *local_b8;
  *local_b8 = 0;
  UNLOCK();
  if (iVar9 == 2) {
    (*(code *)PTR_wake_00799010)();
    if (piVar21 != (int *)0x0 && (char)local_9c == '\0') goto LAB_004b671f;
LAB_004b662f:
    uVar6 = 0;
  }
  else {
    if (local_a8 == (int *)0x0 || (char)local_9c != '\0') goto LAB_004b662f;
LAB_004b671f:
    uVar6 = has_warm_conversation(lVar19,piVar21,local_b0);
  }
  piVar21 = (int *)(lVar19 + 0x150);
  LOCK();
  bVar22 = *(int *)(lVar19 + 0x150) == 0;
  if (bVar22) {
    *(int *)(lVar19 + 0x150) = 1;
  }
  UNLOCK();
  if (!bVar22) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar5 = *(char *)(lVar19 + 0x154);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar5 = *(char *)(lVar19 + 0x154);
  }
  if (cVar5 == '\0') {
    local_78 = *(undefined8 *)(lVar19 + 8);
    uStack_70 = *(undefined8 *)(lVar19 + 0x10);
    local_68 = (undefined1)local_9c;
    local_66 = 1;
    local_80 = (int *)param_7;
    local_98 = local_a8;
    local_90 = (int *)local_b0;
    local_88 = local_38;
    local_67 = uVar6;
    uVar23 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::resolve_with_options
                       (local_48,lVar19 + 0x158,&local_98,param_8,param_9,piStack_d0,local_c8);
    if (((bVar7 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar23 = extraout_XMM0_Qa_05,
       cVar5 == '\0')) {
      *(undefined1 *)(lVar19 + 0x154) = 1;
    }
    LOCK();
    iVar9 = *piVar21;
    *piVar21 = 0;
    UNLOCK();
    if (iVar9 == 2) {
      uVar23 = (*(code *)PTR_wake_00799010)();
    }
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (local_c8 != 0) {
      piVar21 = piStack_d0 + 0xe;
      lVar19 = local_c8;
      do {
        if (*(longlong *)(piVar21 + -0xe) != 0) {
          uVar23 = (*(code *)puVar3)(uVar23,1);
        }
        if (*(longlong *)(piVar21 + -8) != 0) {
          uVar23 = (*(code *)puVar3)(uVar23,1);
        }
        if (*(longlong *)(piVar21 + -2) != 0) {
          uVar23 = (*(code *)puVar3)(uVar23,1);
        }
        piVar21 = piVar21 + 0x12;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    if (local_d8 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,8);
    }
    return local_48;
  }
  local_90._1_7_ = (undefined7)((ulonglong)local_90 >> 8);
  local_90 = (int *)CONCAT71(local_90._1_7_,bVar7);
  local_98 = piVar21;
  (*(code *)PTR_unwrap_failed_00799028)
            (&anon_572fb51faa0db1e51baf8d00d92dd3e9_189_llvm_7677212527096675952,&local_98,
             &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078ba48);
LAB_004b691d:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


