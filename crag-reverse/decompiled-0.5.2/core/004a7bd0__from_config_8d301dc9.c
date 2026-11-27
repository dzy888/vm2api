// 004a7bd0 from_config

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>::from_config */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>::from_config
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  code *pcVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong in_FS_OFFSET;
  bool bVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_1e0;
  longlong local_1d0;
  int local_1b4;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined3 uStack_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined5 uStack_150;
  undefined3 uStack_14b;
  undefined5 uStack_148;
  undefined4 uStack_143;
  undefined4 uStack_13f;
  undefined4 uStack_13b;
  undefined4 uStack_137;
  undefined3 uStack_133;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  craggemini_core[66f3c71560d70857]::guard_exec::resolve_self_executable(&local_168);
  lVar12 = uStack_160;
  lVar11 = local_168;
  if (local_168 == -1) {
    param_1[1] = uStack_160;
    *param_1 = 2;
    return param_1;
  }
  lVar7 = param_2[0x28];
  if (lVar7 < 0) {
LAB_004a7c19:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004a8588;
  }
  local_a8 = CONCAT44(uStack_154,local_158);
  if (lVar7 == 0) {
    local_1d0 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_1d0 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_1d0 == 0) goto LAB_004a7c19;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar7);
  }
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  uVar23 = (*(code *)PTR_clone_00798fd0)();
  uVar1 = *(undefined1 *)(param_2 + 0x58);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x2c1);
  bVar22 = param_2[0x34] == 0;
  local_b0 = param_1;
  if (bVar22) {
    lVar18 = param_2[0x40];
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    (*(code *)PTR_grow_one_00799328)();
    _DAT_00000018 = CONCAT44(uStack_154,local_158);
    lVar18 = param_2[0x40];
    uVar23 = (undefined4)local_168;
    _DAT_00000008 = (undefined4)local_168;
    uRam000000000000000c = local_168._4_4_;
    _DAT_00000010 = (undefined4)uStack_160;
    uRam0000000000000014 = uStack_160._4_4_;
  }
  local_108 = (ulonglong)!bVar22;
  uVar21 = (ulonglong)!bVar22;
  if (lVar18 != 0) {
    uVar20 = (ulonglong)!bVar22;
    lVar16 = param_2[0x3f];
    lVar18 = lVar16 + lVar18 * 0x18;
    do {
      if (uVar21 != 0) {
        lVar8 = *(longlong *)(lVar16 + 0x10);
        lVar17 = 0;
        do {
          if ((*(longlong *)(lVar17 + 0x18) == lVar8) &&
             (iVar13 = (*(code *)PTR_bcmp_00799020)(uVar23,lVar8), uVar23 = extraout_XMM0_Da_00,
             iVar13 == 0)) goto LAB_004a7e21;
          lVar17 = lVar17 + 0x18;
        } while (uVar21 * 0x18 != lVar17);
      }
      (*(code *)PTR_clone_00798fd0)();
      if (uVar20 == 0) {
        (*(code *)PTR_grow_one_00799328)();
      }
      *(ulonglong *)(uVar20 * 0x18 + 0x18) = CONCAT44(uStack_154,local_158);
      lVar8 = uVar20 * 0x18;
      *(undefined4 *)(lVar8 + 8) = (undefined4)local_168;
      *(undefined4 *)(lVar8 + 0xc) = local_168._4_4_;
      *(undefined4 *)(lVar8 + 0x10) = (undefined4)uStack_160;
      *(undefined4 *)(lVar8 + 0x14) = uStack_160._4_4_;
      uVar21 = uVar20 + 1;
      uVar23 = (undefined4)local_168;
      uVar20 = uVar21;
LAB_004a7e21:
      lVar16 = lVar16 + 0x18;
      local_108 = uVar20;
    } while (lVar16 != lVar18);
  }
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 8;
  uStack_10c = 0;
  if (*(int *)(param_2 + 0xc) == 1) {
    local_120 = (ulonglong)param_2[0xd] / 1000;
    local_1b4 = ((int)param_2[0xd] + (int)local_120 * -1000) * 1000000;
    cVar15 = *(char *)(param_2 + 0xe);
  }
  else {
    local_1b4 = 0;
    local_120 = 0x1e;
    cVar15 = *(char *)(param_2 + 0xe);
  }
  local_b8 = 0x20;
  if (cVar15 != '\0') {
    local_b8 = param_2[0xf];
  }
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x2c2);
  if (param_2[0x50] == -1) {
    lVar18 = -1;
    lVar16 = param_2[0x53];
  }
  else {
    lVar18 = param_2[0x52];
    if (lVar18 < 0) {
LAB_004a7f73:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004a8588;
    }
    if (lVar18 == 0) {
      local_180 = 1;
      lVar18 = 0;
      lVar16 = param_2[0x53];
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_180 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_180 == 0) goto LAB_004a7f73;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar18);
      lVar16 = param_2[0x53];
    }
  }
  if (lVar16 == -1) {
    local_1e0 = -1;
  }
  else {
    local_1e0 = param_2[0x55];
    if (local_1e0 < 0) {
LAB_004a7fb1:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004a8588;
    }
    if (local_1e0 == 0) {
      local_188 = 1;
      local_1e0 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_188 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_188 == 0) goto LAB_004a7fb1;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,local_1e0);
    }
  }
  local_c0 = param_2[0x57] + (ulonglong)(param_2[0x57] == 0);
  uVar21 = 10000;
  if (*(char *)(param_2 + 4) != '\0') {
    uVar21 = param_2[5];
  }
  local_c8 = 0x400000;
  if (*(char *)(param_2 + 6) != '\0') {
    local_c8 = param_2[7];
  }
  local_d0 = 0x1000000;
  if (*(char *)(param_2 + 8) != '\0') {
    local_d0 = param_2[9];
  }
  uVar20 = 300000;
  if (*(char *)(param_2 + 10) != '\0') {
    uVar20 = param_2[0xb];
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar20 >> 3;
  lVar16 = SUB168(auVar9 * ZEXT816(0x20c49ba5e353f7cf),8);
  local_d8 = 0x32;
  if (*(char *)(param_2 + 0x14) != '\0') {
    local_d8 = param_2[0x15];
  }
  cVar15 = '\x01';
  if (*(char *)((longlong)param_2 + 0x2c9) != '\x02') {
    cVar15 = *(char *)((longlong)param_2 + 0x2c9);
  }
  local_e0 = 0xe10;
  if (*(char *)(param_2 + 0x16) != '\0') {
    local_e0 = param_2[0x17];
  }
  local_e8 = 3;
  if (*(char *)(param_2 + 0x18) != '\0') {
    local_e8 = param_2[0x19];
  }
  local_f8 = 30000;
  if (*(char *)(param_2 + 0x1a) != '\0') {
    local_f8 = param_2[0x1b];
  }
  uVar4 = *(undefined1 *)((longlong)param_2 + 0x2c4);
  local_f0 = param_2[0x56];
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_58 = *(undefined4 *)(param_2 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_50 = *(undefined4 *)(param_2 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined1 *)(param_2 + 0x59);
  uVar6 = *(undefined1 *)((longlong)param_2 + 0x2c7);
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    local_130 = *(longlong *)(in_FS_OFFSET + -0x38);
    lVar16 = *(longlong *)(in_FS_OFFSET + -0x30);
  }
  else {
    local_130 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_130;
    *(longlong *)(in_FS_OFFSET + -0x30) = lVar16;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  *(longlong *)(in_FS_OFFSET + -0x38) = local_130 + 1;
  local_1a0._3_1_ = (undefined1)_DAT_0078b738;
  uStack_19c = (undefined4)((ulonglong)_DAT_0078b738 >> 8);
  uStack_198._0_3_ = (undefined3)((ulonglong)_DAT_0078b738 >> 0x28);
  uStack_198._3_1_ = (undefined1)_UNK_0078b740;
  uStack_194 = (undefined4)((ulonglong)_UNK_0078b740 >> 8);
  uStack_190 = (undefined3)((ulonglong)_UNK_0078b740 >> 0x28);
  uStack_1a8._0_3_ =
       (undefined3)
       ((ulonglong)PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078b728
       >> 0x28);
  uStack_1a8._3_1_ = (undefined1)_UNK_0078b730;
  uStack_1a4 = (undefined4)((ulonglong)_UNK_0078b730 >> 8);
  local_1a0._0_3_ = (undefined3)((ulonglong)_UNK_0078b730 >> 0x28);
  local_168 = 1;
  uStack_160 = 1;
  local_158 = 0;
  uStack_150 = SUB85(PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078b728
                     ,0);
  uStack_154 = 0;
  uStack_14b = (undefined3)uStack_1a8;
  uStack_148 = (undefined5)(CONCAT44(uStack_1a4,uStack_1a8) >> 0x18);
  uStack_143 = local_1a0;
  uStack_13f = uStack_19c;
  uStack_13b = uStack_198;
  uStack_133 = uStack_190;
  uStack_137 = uStack_194;
  local_128 = lVar16;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar14 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar14 != (longlong *)0x0) {
    uVar19 = (uVar20 >> 3) / 0x7d;
    plVar14[8] = local_128;
    local_b0[4] = lVar7;
    local_b0[5] = local_1d0;
    local_b0[6] = lVar7;
    local_b0[9] = local_90;
    local_b0[7] = local_a0;
    local_b0[8] = uStack_98;
    local_b0[0xc] = local_78;
    local_b0[10] = local_88;
    local_b0[0xb] = uStack_80;
    local_b0[0xf] = local_60;
    local_b0[0xd] = local_70;
    local_b0[0xe] = uStack_68;
    local_b0[0x12] = local_108;
    local_b0[0x10] = CONCAT44(uStack_114,local_118);
    local_b0[0x11] = CONCAT44(uStack_10c,uStack_110);
    local_b0[0x16] = lVar18;
    local_b0[0x17] = local_180;
    local_b0[0x18] = lVar18;
    local_b0[0x19] = local_1e0;
    local_b0[0x1a] = local_188;
    local_b0[0x1b] = local_1e0;
    local_b0[0x13] = lVar11;
    local_b0[0x14] = lVar12;
    local_b0[0x15] = local_a8;
    *local_b0 = local_48;
    local_b0[1] = uStack_40;
    local_b0[2] = CONCAT44(uStack_54,local_58);
    local_b0[3] = CONCAT44(uStack_4c,uStack_50);
    local_b0[0x1c] = local_120;
    *(int *)(local_b0 + 0x1d) = local_1b4;
    local_b0[0x1e] = uVar21 / 1000;
    *(int *)(local_b0 + 0x1f) = ((int)uVar21 + (int)(uVar21 / 1000) * -1000) * 1000000;
    local_b0[0x20] = uVar19;
    *(int *)(local_b0 + 0x21) = ((int)uVar20 + (int)uVar19 * -1000) * 1000000;
    local_b0[0x22] = local_d8;
    local_b0[0x23] = local_e0;
    local_b0[0x24] = local_e8;
    local_b0[0x25] = local_f8;
    *(undefined1 *)(local_b0 + 0x26) = uVar5;
    *(char *)((longlong)local_b0 + 0x131) = cVar15;
    *(undefined1 *)((longlong)local_b0 + 0x132) = uVar6;
    plVar14[6] = CONCAT35(uStack_133,CONCAT41(uStack_137,uStack_13b._3_1_));
    plVar14[7] = local_130;
    plVar14[4] = CONCAT35((undefined3)uStack_143,uStack_148);
    plVar14[5] = CONCAT35((undefined3)uStack_13b,CONCAT41(uStack_13f,uStack_143._3_1_));
    plVar14[2] = CONCAT44(uStack_154,local_158);
    plVar14[3] = CONCAT35(uStack_14b,uStack_150);
    *plVar14 = local_168;
    plVar14[1] = uStack_160;
    local_b0[0x27] = plVar14;
    local_b0[0x28] = local_b8;
    local_b0[0x29] = local_c0;
    local_b0[0x2a] = local_f0;
    local_b0[0x2b] = local_c8;
    local_b0[0x2c] = local_d0;
    *(undefined1 *)(local_b0 + 0x2d) = uVar1;
    *(undefined1 *)((longlong)local_b0 + 0x169) = uVar2;
    *(undefined1 *)((longlong)local_b0 + 0x16a) = uVar3;
    *(undefined1 *)((longlong)local_b0 + 0x16b) = uVar4;
    return local_b0;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_004a8588:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}


