// 004850b0 record_lifecycle

/* WARNING: Type propagation algorithm not settling */
/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_lifecycle */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_lifecycle
          (undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,undefined8 param_5
          ,longlong param_6,longlong param_7,longlong param_8,longlong *param_9,longlong param_10,
          longlong param_11,longlong param_12,longlong param_13,longlong param_14)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong local_208;
  longlong local_200;
  longlong local_1e8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined1 (*pauStack_140) [16];
  undefined8 local_138;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined1 (*pauStack_f0) [16];
  undefined8 local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  
  local_150 = param_1;
  (*(code *)PTR_now_00799478)();
  <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::
  to_rfc3339(&local_170,&local_f8);
  if (param_10 == 9) {
    if ((char)param_9[1] == 'd' && *param_9 == 0x6574656c706d6f63) {
LAB_004851a1:
      uVar21 = 1;
      bVar8 = false;
      goto joined_r0x00485155;
    }
LAB_00485168:
    bVar8 = true;
    uVar21 = 0;
  }
  else {
    if (param_10 == 8) {
      if (*param_9 == 0x64656873696e6966) goto LAB_004851a1;
      goto LAB_00485168;
    }
    if (param_10 != 6) goto LAB_00485168;
    if (*(short *)((longlong)param_9 + 4) == 0x6465 && (int)*param_9 == 0x6c6c696b) {
      uVar21 = 2;
      bVar8 = false;
    }
    else {
      if (*(short *)((longlong)param_9 + 4) != 0x6465 || (int)*param_9 != 0x6c696166)
      goto LAB_00485168;
      uVar21 = 3;
      bVar8 = false;
    }
  }
joined_r0x00485155:
  if (param_6 < 0) {
LAB_00485175:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00485cda;
  }
  if (param_6 == 0) {
    lVar11 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar11 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar11 == 0) goto LAB_00485175;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_6);
  }
  local_188 = param_6;
  lStack_180 = lVar11;
  local_178 = param_6;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::rustc_entry(&local_f8,param_2 + 3,&local_188);
  pauVar3 = pauStack_f0;
  lVar11 = local_f8;
  pauVar17 = pauStack_f0;
  if (local_f8 == -1) goto LAB_004857fc;
  local_158 = local_e8;
  if (param_6 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar12 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar12 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,param_6);
      lVar13 = param_2[2];
      if (lVar13 == *param_2) goto LAB_004852fe;
      goto LAB_00485307;
    }
LAB_00485ccc:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00485cda;
  }
  lVar12 = 1;
  lVar13 = param_2[2];
  if (lVar13 == *param_2) {
LAB_004852fe:
    (*(code *)PTR_grow_one_00799328)();
  }
LAB_00485307:
  lVar19 = param_2[1];
  *(longlong *)(lVar19 + lVar13 * 0x18) = param_6;
  *(longlong *)(lVar19 + 8 + lVar13 * 0x18) = lVar12;
  *(longlong *)(lVar19 + 0x10 + lVar13 * 0x18) = param_6;
  param_2[2] = lVar13 + 1;
  if (param_6 == 0) {
    local_1b0 = 1;
    if (param_7 == 0) goto LAB_004853c1;
LAB_0048537f:
    if (param_8 < 0) {
LAB_00485386:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00485cda;
    }
    if (param_8 == 0) {
      local_1b8 = 1;
      local_1e8 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_1b8 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_1b8 == 0) goto LAB_00485386;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_02,param_8);
      local_1e8 = param_8;
    }
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_1b0 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_1b0 == 0) goto LAB_00485ccc;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,param_6);
    if (param_7 != 0) goto LAB_0048537f;
LAB_004853c1:
    local_1e8 = -1;
  }
  if (param_3 == 0) {
    lVar12 = -1;
  }
  else {
    if (param_4 < 0) {
LAB_0048543c:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00485cda;
    }
    if (param_4 == 0) {
      local_1c0 = 1;
      lVar12 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_1c0 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_1c0 == 0) goto LAB_0048543c;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,param_4);
      lVar12 = param_4;
    }
  }
  if (param_11 == 0) {
    local_208 = -1;
  }
  else {
    if (param_12 < 0) {
LAB_004854ed:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00485cda;
    }
    if (param_12 == 0) {
      local_1c8 = 1;
      local_208 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_1c8 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_1c8 == 0) goto LAB_004854ed;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_04,param_12);
      local_208 = param_12;
    }
  }
  if (param_13 == 0) {
    lVar13 = -1;
  }
  else {
    if (param_14 < 0) {
LAB_00485593:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_00485cda:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (param_14 == 0) {
      local_1d0 = 1;
      lVar13 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_1d0 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_1d0 == 0) goto LAB_00485593;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_05,param_14);
      lVar13 = param_14;
    }
  }
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_118 = local_178;
  local_128 = local_188;
  lStack_120 = lStack_180;
  local_138 = local_e8;
  local_148 = local_f8;
  pauStack_140 = pauStack_f0;
  pauVar17 = (undefined1 (*) [16])*local_e0;
  uVar2 = local_e0[1];
  uVar16 = uVar2 & local_d8;
  auVar24 = *(undefined1 (*) [16])(*pauVar17 + uVar16);
  uVar5 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
  uVar9 = (uint)uVar5;
  if (uVar5 == 0) {
    lVar19 = 0x10;
    do {
      uVar16 = uVar16 + lVar19 & uVar2;
      auVar24 = *(undefined1 (*) [16])(*pauVar17 + uVar16);
      lVar19 = lVar19 + 0x10;
      uVar9 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
    } while (uVar9 == 0);
  }
  uVar18 = 0;
  for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
    uVar18 = uVar18 + 1;
  }
  uVar16 = uVar18 + uVar16 & uVar2;
  bVar15 = (*pauVar17)[uVar16];
  if (-1 < (char)bVar15) {
    auVar24 = *pauVar17;
    uVar9 = 0;
    for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
        uVar18 = uVar18 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar16 = (ulonglong)uVar9;
    bVar15 = (*pauVar17)[uVar16];
  }
  bVar14 = (byte)(local_d8 >> 0x39);
  (*pauVar17)[uVar16] = bVar14;
  pauVar17[1][uVar16 - 0x10 & uVar2] = bVar14;
  local_e0[2] = local_e0[2] - (ulonglong)(bVar15 & 1);
  *(longlong *)pauVar17[uVar16 * -0xe + -0xe] = lVar11;
  *(undefined1 (**) [16])(pauVar17[uVar16 * -0xe + -0xe] + 8) = pauVar3;
  *(undefined8 *)pauVar17[uVar16 * -0xe + -0xd] = local_158;
  *(longlong *)(pauVar17[uVar16 * -0xe + -0xd] + 8) = param_6;
  *(longlong *)pauVar17[uVar16 * -0xe + -0xc] = local_1b0;
  *(longlong *)(pauVar17[uVar16 * -0xe + -0xc] + 8) = param_6;
  *(longlong *)pauVar17[uVar16 * -0xe + -0xb] = local_188;
  *(longlong *)(pauVar17[uVar16 * -0xe + -0xb] + 8) = lStack_180;
  *(longlong *)pauVar17[uVar16 * -0xe + -10] = local_178;
  *(longlong *)(pauVar17[uVar16 * -0xe + -10] + 8) = local_f8;
  *(undefined1 (**) [16])((longlong)(pauVar17[uVar16 * -0xe + -10] + 8) + 8) = pauStack_f0;
  *(undefined8 *)(pauVar17[uVar16 * -0xe + -9] + 8) = local_e8;
  *(longlong *)pauVar17[uVar16 * -0xe + -8] = local_1e8;
  *(longlong *)(pauVar17[uVar16 * -0xe + -8] + 8) = local_1b8;
  *(longlong *)pauVar17[uVar16 * -0xe + -7] = local_1e8;
  *(longlong *)(pauVar17[uVar16 * -0xe + -7] + 8) = lVar12;
  *(longlong *)pauVar17[uVar16 * -0xe + -6] = local_1c0;
  *(longlong *)(pauVar17[uVar16 * -0xe + -6] + 8) = lVar12;
  *(longlong *)pauVar17[uVar16 * -0xe + -5] = local_208;
  *(longlong *)(pauVar17[uVar16 * -0xe + -5] + 8) = local_1c8;
  *(longlong *)pauVar17[uVar16 * -0xe + -4] = local_208;
  *(longlong *)(pauVar17[uVar16 * -0xe + -4] + 8) = lVar13;
  *(longlong *)pauVar17[uVar16 * -0xe + -3] = local_1d0;
  *(longlong *)(pauVar17[uVar16 * -0xe + -3] + 8) = lVar13;
  *(undefined4 *)pauVar17[uVar16 * -0xe + -2] = 0;
  *(undefined4 *)(pauVar17[uVar16 * -0xe + -1] + 4) = 0;
  *(ulonglong *)(pauVar17[uVar16 * -0xe + -2] + 4) = (ulonglong)uStack_10c;
  *(ulonglong *)((longlong)(pauVar17[uVar16 * -0xe + -2] + 4) + 8) = 0;
  pauVar17[uVar16 * -0xe + -1][8] = uVar21;
  pauVar17 = pauVar17 + uVar16 * -0xe;
  local_e0[3] = local_e0[3] + 1;
LAB_004857fc:
  pauVar17[-1][8] = uVar21;
  local_e8 = local_160;
  local_f8 = local_170;
  pauStack_f0 = (undefined1 (*) [16])uStack_168;
  if (*(longlong *)(pauVar17[-10] + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined8 *)(pauVar17[-9] + 8) = local_e8;
  *(longlong *)(pauVar17[-10] + 8) = local_f8;
  *(undefined1 (**) [16])pauVar17[-9] = pauStack_f0;
  lVar11 = local_f8;
  if (param_7 == 0) goto LAB_0048591a;
  uVar21 = param_8 == 0;
  if (-1 < param_8) goto LAB_0048588f;
  uVar21 = true;
LAB_00485883:
  do {
    lVar11 = (*(code *)PTR_handle_error_00798ff0)();
LAB_0048588f:
    if ((bool)uVar21) {
      lVar13 = 1;
      lVar12 = *(longlong *)pauVar17[-8];
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar13 = (*(code *)PTR___rust_alloc_00799000)();
      uVar21 = true;
      if (lVar13 == 0) goto LAB_00485883;
      lVar11 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_06,param_8);
      lVar12 = *(longlong *)pauVar17[-8];
    }
    if ((lVar12 != -1) && (lVar12 != 0)) {
      lVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar11,1);
    }
    *(longlong *)pauVar17[-8] = param_8;
    *(longlong *)(pauVar17[-8] + 8) = lVar13;
    *(longlong *)pauVar17[-7] = param_8;
LAB_0048591a:
    if (param_3 == 0) goto LAB_004859c7;
    uVar21 = param_4 == 0;
    if (param_4 < 0) {
      uVar21 = 1;
      lVar11 = (*(code *)PTR_handle_error_00798ff0)();
    }
    if ((bool)uVar21) {
      lVar13 = 1;
      lVar12 = *(longlong *)(pauVar17[-7] + 8);
      goto joined_r0x00485998;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar13 = (*(code *)PTR___rust_alloc_00799000)();
    uVar21 = lVar13 == 0;
    if (!(bool)uVar21) {
      lVar11 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_07,param_4);
      lVar12 = *(longlong *)(pauVar17[-7] + 8);
joined_r0x00485998:
      if ((lVar12 != -1) && (lVar12 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(lVar11,1);
      }
      *(longlong *)(pauVar17[-7] + 8) = param_4;
      *(longlong *)pauVar17[-6] = lVar13;
      *(longlong *)(pauVar17[-6] + 8) = param_4;
LAB_004859c7:
      if ((param_11 != 0) && (param_12 != 0)) {
        if (-1 < param_12) goto LAB_004859eb;
        do {
          (*(code *)PTR_handle_error_00798ff0)();
LAB_004859eb:
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar11 = (*(code *)PTR___rust_alloc_00799000)();
        } while (lVar11 == 0);
        uVar22 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_08,param_12);
        if ((*(longlong *)pauVar17[-5] != -1) && (*(longlong *)pauVar17[-5] != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
        }
        *(longlong *)pauVar17[-5] = param_12;
        *(longlong *)(pauVar17[-5] + 8) = lVar11;
        *(longlong *)pauVar17[-4] = param_12;
      }
      if ((param_13 != 0) && (param_14 != 0)) {
        if (-1 < param_14) goto LAB_00485a6c;
        do {
          (*(code *)PTR_handle_error_00798ff0)();
LAB_00485a6c:
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar11 = (*(code *)PTR___rust_alloc_00799000)();
        } while (lVar11 == 0);
        uVar22 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_09,param_14);
        if ((*(longlong *)(pauVar17[-4] + 8) != -1) && (*(longlong *)(pauVar17[-4] + 8) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
        }
        *(longlong *)(pauVar17[-4] + 8) = param_14;
        *(longlong *)pauVar17[-3] = lVar11;
        *(longlong *)(pauVar17[-3] + 8) = param_14;
      }
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone(&local_f8,pauVar17[-0xd] + 8);
      if ((!bVar8) && (lVar11 = param_2[0xc], lVar11 != 0)) {
        pauVar3 = (undefined1 (*) [16])param_2[9];
        uVar2 = param_2[10];
        auVar24 = *pauVar3;
        uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
        pauVar17 = pauVar3 + 1;
        local_208 = param_2[0xb];
        pauVar20 = pauVar3;
        local_200 = lVar11;
        do {
          if ((short)uVar9 == 0) {
            do {
              auVar24 = *pauVar17;
              pauVar20 = pauVar20 + -0x20;
              pauVar17 = pauVar17 + 1;
              uVar9 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
            } while (uVar9 == 0);
          }
          iVar10 = 0;
          for (uVar18 = uVar9; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
            iVar10 = iVar10 + 1;
          }
          lVar12 = (longlong)pauVar20 - (ulonglong)(uint)(iVar10 << 5);
          if ((*(longlong *)(lVar12 + -8) == param_6) &&
             (iVar10 = (*(code *)PTR_bcmp_00799020)(), iVar10 == 0)) {
            lVar13 = (longlong)pauVar3 - lVar12 >> 5;
            uVar16 = lVar13 - 0x10U & uVar2;
            pcVar1 = *pauVar3 + uVar16;
            auVar24[0] = -(*pcVar1 == -1);
            auVar24[1] = -(pcVar1[1] == -1);
            auVar24[2] = -(pcVar1[2] == -1);
            auVar24[3] = -(pcVar1[3] == -1);
            auVar24[4] = -(pcVar1[4] == -1);
            auVar24[5] = -(pcVar1[5] == -1);
            auVar24[6] = -(pcVar1[6] == -1);
            auVar24[7] = -(pcVar1[7] == -1);
            auVar24[8] = -(pcVar1[8] == -1);
            auVar24[9] = -(pcVar1[9] == -1);
            auVar24[10] = -(pcVar1[10] == -1);
            auVar24[0xb] = -(pcVar1[0xb] == -1);
            auVar24[0xc] = -(pcVar1[0xc] == -1);
            auVar24[0xd] = -(pcVar1[0xd] == -1);
            auVar24[0xe] = -(pcVar1[0xe] == -1);
            auVar24[0xf] = -(pcVar1[0xf] == -1);
            uVar6 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                    (ushort)(auVar24[0xf] >> 7) << 0xf;
            pcVar1 = *pauVar3 + lVar13;
            auVar25[0] = -(*pcVar1 == -1);
            auVar25[1] = -(pcVar1[1] == -1);
            auVar25[2] = -(pcVar1[2] == -1);
            auVar25[3] = -(pcVar1[3] == -1);
            auVar25[4] = -(pcVar1[4] == -1);
            auVar25[5] = -(pcVar1[5] == -1);
            auVar25[6] = -(pcVar1[6] == -1);
            auVar25[7] = -(pcVar1[7] == -1);
            auVar25[8] = -(pcVar1[8] == -1);
            auVar25[9] = -(pcVar1[9] == -1);
            auVar25[10] = -(pcVar1[10] == -1);
            auVar25[0xb] = -(pcVar1[0xb] == -1);
            auVar25[0xc] = -(pcVar1[0xc] == -1);
            auVar25[0xd] = -(pcVar1[0xd] == -1);
            auVar25[0xe] = -(pcVar1[0xe] == -1);
            auVar25[0xf] = -(pcVar1[0xf] == -1);
            uVar5 = 0xf;
            if (uVar6 != 0) {
              for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
              }
            }
            sVar7 = 0;
            for (uVar18 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar25[0xf] >> 7) << 0xf) | 0x10000; (uVar18 & 1) == 0;
                uVar18 = uVar18 >> 1 | 0x80000000) {
              sVar7 = sVar7 + 1;
            }
            uVar21 = 0x80;
            if ((ushort)(sVar7 + (uVar5 ^ 0xf)) < 0x10) {
              local_208 = local_208 + 1;
              param_2[0xb] = local_208;
              uVar21 = 0xff;
            }
            (*pauVar3)[lVar13] = uVar21;
            pauVar3[1][uVar16] = uVar21;
            local_200 = local_200 + -1;
            param_2[0xc] = local_200;
            if (*(longlong *)(lVar12 + -0x18) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
            }
          }
          uVar9 = uVar9 - 1 & uVar9;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar23 = evict_if_needed(param_2);
      uVar22 = local_150;
      (*(code *)PTR_memcpy_00799008)(uVar23,200);
      return uVar22;
    }
  } while( true );
}


