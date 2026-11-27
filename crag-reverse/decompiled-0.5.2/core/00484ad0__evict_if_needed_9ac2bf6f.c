// 00484ad0 evict_if_needed

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::evict_if_needed */

void __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::evict_if_needed(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  ushort uVar5;
  short sVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  byte bVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  longlong local_220;
  int local_204;
  longlong local_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  int local_110;
  int local_10c;
  undefined1 local_f0 [192];
  
  uVar14 = *(ulonglong *)(param_1 + 0x10);
  if (uVar14 < 0x81) {
    return;
  }
  local_1c0 = param_1 + 0x38;
  local_1c8 = param_1 + 0x68;
  do {
    plVar2 = *(longlong **)(param_1 + 8);
    lVar3 = *plVar2;
    local_1b8 = plVar2[1];
    lStack_1b0 = plVar2[2];
    uVar26 = (*(code *)PTR_memmove_00799258)();
    *(ulonglong *)(param_1 + 0x10) = uVar14 - 1;
    if (lVar3 == -1) {
      uVar26 = (*(code *)PTR_assert_failed_00799718)(uVar26,&PTR_s_src_subagents_rs_0078ad10);
      if (local_220 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar26,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    local_1f8 = local_1b8;
    lStack_1f0 = lStack_1b0;
    local_200 = lVar3;
    uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&alloc[12e961f32105355]::string::String>(local_1c0,&local_200);
    lVar12 = lStack_1f0;
    lVar23 = *(longlong *)(param_1 + 0x18);
    uVar14 = *(ulonglong *)(param_1 + 0x20);
    bVar25 = (byte)(uVar11 >> 0x39);
    auVar30 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar27 = pshuflw(auVar30,auVar30,0);
    auVar30._0_8_ = auVar27._0_8_;
    auVar30._8_4_ = auVar27._0_4_;
    auVar30._12_4_ = auVar27._4_4_;
    lVar19 = 0;
    while( true ) {
      uVar11 = uVar11 & uVar14;
      auVar27 = *(undefined1 (*) [16])(lVar23 + uVar11);
      auVar28[0] = -(auVar27[0] == auVar30[0]);
      auVar28[1] = -(auVar27[1] == auVar30[1]);
      auVar28[2] = -(auVar27[2] == auVar30[2]);
      auVar28[3] = -(auVar27[3] == auVar30[3]);
      auVar28[4] = -(auVar27[4] == auVar30[4]);
      auVar28[5] = -(auVar27[5] == auVar30[5]);
      auVar28[6] = -(auVar27[6] == auVar30[6]);
      auVar28[7] = -(auVar27[7] == auVar30[7]);
      auVar28[8] = -(auVar27[8] == auVar30[8]);
      auVar28[9] = -(auVar27[9] == auVar30[9]);
      auVar28[10] = -(auVar27[10] == auVar30[10]);
      auVar28[0xb] = -(auVar27[0xb] == auVar30[0xb]);
      auVar28[0xc] = -(auVar27[0xc] == auVar30[0xc]);
      auVar28[0xd] = -(auVar27[0xd] == auVar30[0xd]);
      auVar28[0xe] = -(auVar27[0xe] == auVar30[0xe]);
      auVar28[0xf] = -(auVar27[0xf] == auVar30[0xf]);
      uVar8 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar8;
      if (uVar8 != 0) break;
LAB_00484c60:
      auVar36[0] = -(auVar27[0] == -1);
      auVar36[1] = -(auVar27[1] == -1);
      auVar36[2] = -(auVar27[2] == -1);
      auVar36[3] = -(auVar27[3] == -1);
      auVar36[4] = -(auVar27[4] == -1);
      auVar36[5] = -(auVar27[5] == -1);
      auVar36[6] = -(auVar27[6] == -1);
      auVar36[7] = -(auVar27[7] == -1);
      auVar36[8] = -(auVar27[8] == -1);
      auVar36[9] = -(auVar27[9] == -1);
      auVar36[10] = -(auVar27[10] == -1);
      auVar36[0xb] = -(auVar27[0xb] == -1);
      auVar36[0xc] = -(auVar27[0xc] == -1);
      auVar36[0xd] = -(auVar27[0xd] == -1);
      auVar36[0xe] = -(auVar27[0xe] == -1);
      auVar36[0xf] = -(auVar27[0xf] == -1);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') goto LAB_00484ecd;
      uVar11 = uVar11 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
    local_1e8 = auVar27;
    local_1d8 = auVar30;
LAB_00484be8:
    uVar17 = 0;
    for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar17 = uVar17 + 1;
    }
    uVar20 = uVar17 + uVar11 & uVar14;
    lVar22 = uVar20 * -0xe0;
    if (lVar12 != *(longlong *)(lVar23 + -0xd0 + lVar22)) break;
    lVar22 = lVar22 + lVar23;
    iVar9 = (*(code *)PTR_bcmp_00799020)();
    if (iVar9 != 0) break;
    lVar12 = ((longlong)(uVar20 * 0xe0) >> 5) * 0x6db6db6db6db6db7;
    uVar14 = lVar12 - 0x10U & uVar14;
    pcVar1 = (char *)(lVar23 + uVar14);
    auVar27[0] = -(*pcVar1 == -1);
    auVar27[1] = -(pcVar1[1] == -1);
    auVar27[2] = -(pcVar1[2] == -1);
    auVar27[3] = -(pcVar1[3] == -1);
    auVar27[4] = -(pcVar1[4] == -1);
    auVar27[5] = -(pcVar1[5] == -1);
    auVar27[6] = -(pcVar1[6] == -1);
    auVar27[7] = -(pcVar1[7] == -1);
    auVar27[8] = -(pcVar1[8] == -1);
    auVar27[9] = -(pcVar1[9] == -1);
    auVar27[10] = -(pcVar1[10] == -1);
    auVar27[0xb] = -(pcVar1[0xb] == -1);
    auVar27[0xc] = -(pcVar1[0xc] == -1);
    auVar27[0xd] = -(pcVar1[0xd] == -1);
    auVar27[0xe] = -(pcVar1[0xe] == -1);
    auVar27[0xf] = -(pcVar1[0xf] == -1);
    uVar5 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
    pcVar1 = (char *)(lVar23 + lVar12);
    auVar29[0] = -(*pcVar1 == -1);
    auVar29[1] = -(pcVar1[1] == -1);
    auVar29[2] = -(pcVar1[2] == -1);
    auVar29[3] = -(pcVar1[3] == -1);
    auVar29[4] = -(pcVar1[4] == -1);
    auVar29[5] = -(pcVar1[5] == -1);
    auVar29[6] = -(pcVar1[6] == -1);
    auVar29[7] = -(pcVar1[7] == -1);
    auVar29[8] = -(pcVar1[8] == -1);
    auVar29[9] = -(pcVar1[9] == -1);
    auVar29[10] = -(pcVar1[10] == -1);
    auVar29[0xb] = -(pcVar1[0xb] == -1);
    auVar29[0xc] = -(pcVar1[0xc] == -1);
    auVar29[0xd] = -(pcVar1[0xd] == -1);
    auVar29[0xe] = -(pcVar1[0xe] == -1);
    auVar29[0xf] = -(pcVar1[0xf] == -1);
    uVar8 = 0xf;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    sVar6 = 0;
    for (uVar10 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar29[0xf] >> 7) << 0xf) | 0x10000; (uVar10 & 1) == 0;
        uVar10 = uVar10 >> 1 | 0x80000000) {
      sVar6 = sVar6 + 1;
    }
    uVar15 = 0x80;
    if ((ushort)(sVar6 + (uVar8 ^ 0xf)) < 0x10) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
      uVar15 = 0xff;
    }
    *(undefined1 *)(lVar23 + lVar12) = uVar15;
    *(undefined1 *)(lVar23 + 0x10 + uVar14) = uVar15;
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
    lVar23 = *(longlong *)(lVar22 + -0xe0);
    if (lVar23 != -1) {
      lVar12 = *(longlong *)(lVar22 + -200);
      uVar26 = (*(code *)PTR_memcpy_00799008)(uVar14,0xc0);
      if (lVar23 != 0) {
        uVar26 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar26,1);
      }
      if (lVar12 == -1) goto LAB_00484ecd;
      puVar18 = local_f0;
      local_1b8 = lVar12;
      (*(code *)PTR_memcpy_00799008)(uVar26,0xc0);
      iVar9 = local_10c;
      if (local_110 == 1) {
        local_204 = local_10c;
        puVar13 = (undefined1 *)
                  <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                  ::hash_one::<&u32>(local_1c8,&local_204);
        lVar23 = *(longlong *)(param_1 + 0x48);
        uVar14 = *(ulonglong *)(param_1 + 0x50);
        bVar25 = (byte)((ulonglong)puVar13 >> 0x39);
        auVar30 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar30 = pshuflw(auVar30,auVar30,0);
        puVar18 = (undefined1 *)0x0;
        do {
          uVar11 = (ulonglong)puVar13 & uVar14;
          pcVar1 = (char *)(lVar23 + uVar11);
          auVar37[0] = -(*pcVar1 == auVar30[0]);
          auVar37[1] = -(pcVar1[1] == auVar30[1]);
          auVar37[2] = -(pcVar1[2] == auVar30[2]);
          auVar37[3] = -(pcVar1[3] == auVar30[3]);
          auVar37[4] = -(pcVar1[4] == auVar30[4]);
          auVar37[5] = -(pcVar1[5] == auVar30[5]);
          auVar37[6] = -(pcVar1[6] == auVar30[6]);
          auVar37[7] = -(pcVar1[7] == auVar30[7]);
          auVar37[8] = -(pcVar1[8] == auVar30[0]);
          auVar37[9] = -(pcVar1[9] == auVar30[1]);
          auVar37[10] = -(pcVar1[10] == auVar30[2]);
          auVar37[0xb] = -(pcVar1[0xb] == auVar30[3]);
          auVar37[0xc] = -(pcVar1[0xc] == auVar30[4]);
          auVar37[0xd] = -(pcVar1[0xd] == auVar30[5]);
          auVar37[0xe] = -(pcVar1[0xe] == auVar30[6]);
          auVar37[0xf] = -(pcVar1[0xf] == auVar30[7]);
          uVar8 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar37[0xf] >> 7) << 0xf;
          uVar10 = (uint)uVar8;
joined_r0x00484de5:
          if (uVar8 != 0) {
            uVar17 = 0;
            for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar17 = uVar17 + 1;
            }
            uVar20 = uVar17 + uVar11 & uVar14;
            lVar12 = lVar23 + uVar20 * -0x20;
            if (iVar9 != *(int *)(lVar12 + -0x20)) goto code_r0x00484e04;
            uVar14 = uVar20 - 0x10 & uVar14;
            pcVar1 = (char *)(lVar23 + uVar14);
            auVar31[0] = -(*pcVar1 == -1);
            auVar31[1] = -(pcVar1[1] == -1);
            auVar31[2] = -(pcVar1[2] == -1);
            auVar31[3] = -(pcVar1[3] == -1);
            auVar31[4] = -(pcVar1[4] == -1);
            auVar31[5] = -(pcVar1[5] == -1);
            auVar31[6] = -(pcVar1[6] == -1);
            auVar31[7] = -(pcVar1[7] == -1);
            auVar31[8] = -(pcVar1[8] == -1);
            auVar31[9] = -(pcVar1[9] == -1);
            auVar31[10] = -(pcVar1[10] == -1);
            auVar31[0xb] = -(pcVar1[0xb] == -1);
            auVar31[0xc] = -(pcVar1[0xc] == -1);
            auVar31[0xd] = -(pcVar1[0xd] == -1);
            auVar31[0xe] = -(pcVar1[0xe] == -1);
            auVar31[0xf] = -(pcVar1[0xf] == -1);
            uVar5 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar31[0xf] >> 7) << 0xf;
            pcVar1 = (char *)(lVar23 + uVar20);
            auVar32[0] = -(*pcVar1 == -1);
            auVar32[1] = -(pcVar1[1] == -1);
            auVar32[2] = -(pcVar1[2] == -1);
            auVar32[3] = -(pcVar1[3] == -1);
            auVar32[4] = -(pcVar1[4] == -1);
            auVar32[5] = -(pcVar1[5] == -1);
            auVar32[6] = -(pcVar1[6] == -1);
            auVar32[7] = -(pcVar1[7] == -1);
            auVar32[8] = -(pcVar1[8] == -1);
            auVar32[9] = -(pcVar1[9] == -1);
            auVar32[10] = -(pcVar1[10] == -1);
            auVar32[0xb] = -(pcVar1[0xb] == -1);
            auVar32[0xc] = -(pcVar1[0xc] == -1);
            auVar32[0xd] = -(pcVar1[0xd] == -1);
            auVar32[0xe] = -(pcVar1[0xe] == -1);
            auVar32[0xf] = -(pcVar1[0xf] == -1);
            uVar8 = 0xf;
            if (uVar5 != 0) {
              for (; uVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
              }
            }
            sVar6 = 0;
            for (uVar10 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar32[0xf] >> 7) << 0xf) | 0x10000; (uVar10 & 1) == 0;
                uVar10 = uVar10 >> 1 | 0x80000000) {
              sVar6 = sVar6 + 1;
            }
            uVar15 = 0x80;
            if ((ushort)(sVar6 + (uVar8 ^ 0xf)) < 0x10) {
              *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
              uVar15 = 0xff;
            }
            *(undefined1 *)(lVar23 + uVar20) = uVar15;
            *(undefined1 *)(lVar23 + 0x10 + uVar14) = uVar15;
            *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + -1;
            puVar18 = *(undefined1 **)(lVar12 + -0x18);
            if (puVar18 + -1 < (undefined1 *)0xfffffffffffffffe) {
              (*(code *)PTR___rust_dealloc_00798fc8)(lVar23,1);
            }
            break;
          }
          auVar35[0] = -(*pcVar1 == -1);
          auVar35[1] = -(pcVar1[1] == -1);
          auVar35[2] = -(pcVar1[2] == -1);
          auVar35[3] = -(pcVar1[3] == -1);
          auVar35[4] = -(pcVar1[4] == -1);
          auVar35[5] = -(pcVar1[5] == -1);
          auVar35[6] = -(pcVar1[6] == -1);
          auVar35[7] = -(pcVar1[7] == -1);
          auVar35[8] = -(pcVar1[8] == -1);
          auVar35[9] = -(pcVar1[9] == -1);
          auVar35[10] = -(pcVar1[10] == -1);
          auVar35[0xb] = -(pcVar1[0xb] == -1);
          auVar35[0xc] = -(pcVar1[0xc] == -1);
          auVar35[0xd] = -(pcVar1[0xd] == -1);
          auVar35[0xe] = -(pcVar1[0xe] == -1);
          auVar35[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x2f,0) & 1) != 0) || (SUB161(auVar35 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
          puVar13 = puVar18 + uVar11 + 0x10;
          puVar18 = puVar18 + 0x10;
        } while( true );
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(&local_1b8,puVar18);
    }
LAB_00484ecd:
    lVar12 = lStack_1f0;
    lVar23 = *(longlong *)(param_1 + 0x60);
    if (lVar23 != 0) {
      pauVar4 = *(undefined1 (**) [16])(param_1 + 0x48);
      uVar14 = *(ulonglong *)(param_1 + 0x50);
      auVar30 = *pauVar4;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
      pauVar24 = pauVar4 + 1;
      local_1e8._0_8_ = *(undefined8 *)(param_1 + 0x58);
      local_1d8._0_8_ = lVar23;
      pauVar21 = pauVar4;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar30 = *pauVar24;
            pauVar21 = pauVar21 + -0x20;
            pauVar24 = pauVar24 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar10 == 0);
        }
        iVar9 = 0;
        for (uVar17 = uVar10; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        lVar19 = (longlong)pauVar21 - (ulonglong)(uint)(iVar9 << 5);
        if ((*(longlong *)(lVar19 + -8) == lVar12) &&
           (iVar9 = (*(code *)PTR_bcmp_00799020)(), iVar9 == 0)) {
          lVar22 = (longlong)pauVar4 - lVar19 >> 5;
          uVar11 = lVar22 - 0x10U & uVar14;
          pcVar1 = *pauVar4 + uVar11;
          auVar33[0] = -(*pcVar1 == -1);
          auVar33[1] = -(pcVar1[1] == -1);
          auVar33[2] = -(pcVar1[2] == -1);
          auVar33[3] = -(pcVar1[3] == -1);
          auVar33[4] = -(pcVar1[4] == -1);
          auVar33[5] = -(pcVar1[5] == -1);
          auVar33[6] = -(pcVar1[6] == -1);
          auVar33[7] = -(pcVar1[7] == -1);
          auVar33[8] = -(pcVar1[8] == -1);
          auVar33[9] = -(pcVar1[9] == -1);
          auVar33[10] = -(pcVar1[10] == -1);
          auVar33[0xb] = -(pcVar1[0xb] == -1);
          auVar33[0xc] = -(pcVar1[0xc] == -1);
          auVar33[0xd] = -(pcVar1[0xd] == -1);
          auVar33[0xe] = -(pcVar1[0xe] == -1);
          auVar33[0xf] = -(pcVar1[0xf] == -1);
          uVar5 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar33[0xf] >> 7) << 0xf;
          pcVar1 = *pauVar4 + lVar22;
          auVar34[0] = -(*pcVar1 == -1);
          auVar34[1] = -(pcVar1[1] == -1);
          auVar34[2] = -(pcVar1[2] == -1);
          auVar34[3] = -(pcVar1[3] == -1);
          auVar34[4] = -(pcVar1[4] == -1);
          auVar34[5] = -(pcVar1[5] == -1);
          auVar34[6] = -(pcVar1[6] == -1);
          auVar34[7] = -(pcVar1[7] == -1);
          auVar34[8] = -(pcVar1[8] == -1);
          auVar34[9] = -(pcVar1[9] == -1);
          auVar34[10] = -(pcVar1[10] == -1);
          auVar34[0xb] = -(pcVar1[0xb] == -1);
          auVar34[0xc] = -(pcVar1[0xc] == -1);
          auVar34[0xd] = -(pcVar1[0xd] == -1);
          auVar34[0xe] = -(pcVar1[0xe] == -1);
          auVar34[0xf] = -(pcVar1[0xf] == -1);
          uVar8 = 0xf;
          if (uVar5 != 0) {
            for (; uVar5 >> uVar8 == 0; uVar8 = uVar8 - 1) {
            }
          }
          sVar6 = 0;
          for (uVar17 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar34[0xf] >> 7) << 0xf) | 0x10000; (uVar17 & 1) == 0;
              uVar17 = uVar17 >> 1 | 0x80000000) {
            sVar6 = sVar6 + 1;
          }
          uVar15 = 0x80;
          if ((ushort)(sVar6 + (uVar8 ^ 0xf)) < 0x10) {
            lVar16 = local_1e8._0_8_ + 1;
            local_1e8._0_8_ = lVar16;
            *(longlong *)(param_1 + 0x58) = lVar16;
            uVar15 = 0xff;
          }
          (*pauVar4)[lVar22] = uVar15;
          pauVar4[1][uVar11] = uVar15;
          lVar22 = local_1d8._0_8_ + -1;
          local_1d8._0_8_ = lVar22;
          *(longlong *)(param_1 + 0x60) = lVar22;
          if (*(longlong *)(lVar19 + -0x18) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
        }
        uVar10 = uVar10 - 1 & uVar10;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    if (lVar3 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar14 = *(ulonglong *)(param_1 + 0x10);
    local_220 = lVar3;
    if (uVar14 < 0x81) {
      return;
    }
  } while( true );
  uVar8 = (ushort)(uVar10 - 1) & (ushort)uVar10;
  uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar8);
  auVar30 = local_1d8;
  auVar27 = local_1e8;
  if (uVar8 == 0) goto LAB_00484c60;
  goto LAB_00484be8;
code_r0x00484e04:
  uVar8 = (ushort)(uVar10 - 1) & (ushort)uVar10;
  uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar8);
  goto joined_r0x00484de5;
}


