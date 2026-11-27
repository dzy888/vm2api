// 00509750 classify_machine_code

/* craggemini_core[66f3c71560d70857]::protocol::classify_machine_code */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::protocol::classify_machine_code
          (short param_1,longlong *param_2,longlong param_3,longlong *param_4,longlong param_5,
          longlong param_6,byte param_7,char param_8)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  pcVar2 = "invalid_thinking_signature";
  if (param_7 != 0) {
    pcVar2 = "gemini_content_rejected";
  }
  if (param_8 != '\0' || param_7 != 0) {
    auVar36._8_8_ = (ulonglong)(param_7 ^ 1) * 3 + 0x17;
    auVar36._0_8_ = pcVar2;
    return auVar36;
  }
  plVar4 = (longlong *)0x1;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)0x1;
    param_3 = 0;
  }
  if (param_4 == (longlong *)0x0) {
    param_5 = 0;
  }
  else {
    plVar4 = param_4;
  }
  pcVar2 = "gemini_oauth_required";
  uVar3 = 0x15;
  if (param_1 == 0x191) goto LAB_005097c0;
  if (param_3 == 0xf) {
    if (*(longlong *)((longlong)param_2 + 7) == 0x444554414349544e && *param_2 == 0x4e45485455414e55
       ) goto LAB_005097c0;
    if (param_1 != 0x193) goto LAB_00509895;
  }
  else if (param_1 != 0x193) {
    if (param_3 == 0x11) {
      auVar8[0] = -((char)*param_2 == s_PERMISSION_DENIE_001842e0[0]);
      auVar8[1] = -(*(char *)((longlong)param_2 + 1) == s_PERMISSION_DENIE_001842e0[1]);
      auVar8[2] = -(*(char *)((longlong)param_2 + 2) == s_PERMISSION_DENIE_001842e0[2]);
      auVar8[3] = -(*(char *)((longlong)param_2 + 3) == s_PERMISSION_DENIE_001842e0[3]);
      auVar8[4] = -(*(char *)((longlong)param_2 + 4) == s_PERMISSION_DENIE_001842e0[4]);
      auVar8[5] = -(*(char *)((longlong)param_2 + 5) == s_PERMISSION_DENIE_001842e0[5]);
      auVar8[6] = -(*(char *)((longlong)param_2 + 6) == s_PERMISSION_DENIE_001842e0[6]);
      auVar8[7] = -(*(char *)((longlong)param_2 + 7) == s_PERMISSION_DENIE_001842e0[7]);
      auVar8[8] = -((char)param_2[1] == s_PERMISSION_DENIE_001842e0[8]);
      auVar8[9] = -(*(char *)((longlong)param_2 + 9) == s_PERMISSION_DENIE_001842e0[9]);
      auVar8[10] = -(*(char *)((longlong)param_2 + 10) == s_PERMISSION_DENIE_001842e0[10]);
      auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_PERMISSION_DENIE_001842e0[0xb]);
      auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_PERMISSION_DENIE_001842e0[0xc]);
      auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_PERMISSION_DENIE_001842e0[0xd]);
      auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_PERMISSION_DENIE_001842e0[0xe]);
      auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_PERMISSION_DENIE_001842e0[0xf]);
      auVar23[0] = -((char)param_2[2] == s_D_001839a0[0]);
      auVar23[1] = -(s_D_001839a0[1] == '\0');
      auVar23[2] = -(s_D_001839a0[2] == '\0');
      auVar23[3] = -(s_D_001839a0[3] == '\0');
      auVar23[4] = -(UNK_001839a4 == '\0');
      auVar23[5] = -(UNK_001839a5 == '\0');
      auVar23[6] = -(UNK_001839a6 == '\0');
      auVar23[7] = -(UNK_001839a7 == '\0');
      auVar23[8] = -(UNK_001839a8 == '\0');
      auVar23[9] = -(UNK_001839a9 == '\0');
      auVar23[10] = -(UNK_001839aa == '\0');
      auVar23[0xb] = -(UNK_001839ab == '\0');
      auVar23[0xc] = -(UNK_001839ac == '\0');
      auVar23[0xd] = -(UNK_001839ad == '\0');
      auVar23[0xe] = -(UNK_001839ae == '\0');
      auVar23[0xf] = -(UNK_001839af == '\0');
      auVar23 = auVar23 & auVar8;
      bVar6 = true;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) goto LAB_005097fd;
    }
    else {
LAB_00509895:
      bVar6 = false;
    }
    pcVar2 = "gemini_model_unavailable";
    uVar3 = 0x18;
    if ((param_1 == 0x194) ||
       ((param_3 == 9 && ((char)param_2[1] == 'D' && *param_2 == 0x4e554f465f544f4e))))
    goto LAB_005097c0;
    pcVar2 = "gemini_invalid_request";
    uVar3 = 0x16;
    if (param_1 == 400) goto LAB_005097c0;
    if (param_3 == 0x13) {
      auVar24[0] = -(*(char *)((longlong)param_2 + 3) == s_LED_PRECONDITION_00183d70[0]);
      auVar24[1] = -(*(char *)((longlong)param_2 + 4) == s_LED_PRECONDITION_00183d70[1]);
      auVar24[2] = -(*(char *)((longlong)param_2 + 5) == s_LED_PRECONDITION_00183d70[2]);
      auVar24[3] = -(*(char *)((longlong)param_2 + 6) == s_LED_PRECONDITION_00183d70[3]);
      auVar24[4] = -(*(char *)((longlong)param_2 + 7) == s_LED_PRECONDITION_00183d70[4]);
      auVar24[5] = -((char)param_2[1] == s_LED_PRECONDITION_00183d70[5]);
      auVar24[6] = -(*(char *)((longlong)param_2 + 9) == s_LED_PRECONDITION_00183d70[6]);
      auVar24[7] = -(*(char *)((longlong)param_2 + 10) == s_LED_PRECONDITION_00183d70[7]);
      auVar24[8] = -(*(char *)((longlong)param_2 + 0xb) == s_LED_PRECONDITION_00183d70[8]);
      auVar24[9] = -(*(char *)((longlong)param_2 + 0xc) == s_LED_PRECONDITION_00183d70[9]);
      auVar24[10] = -(*(char *)((longlong)param_2 + 0xd) == s_LED_PRECONDITION_00183d70[10]);
      auVar24[0xb] = -(*(char *)((longlong)param_2 + 0xe) == s_LED_PRECONDITION_00183d70[0xb]);
      auVar24[0xc] = -(*(char *)((longlong)param_2 + 0xf) == s_LED_PRECONDITION_00183d70[0xc]);
      auVar24[0xd] = -((char)param_2[2] == s_LED_PRECONDITION_00183d70[0xd]);
      auVar24[0xe] = -(*(char *)((longlong)param_2 + 0x11) == s_LED_PRECONDITION_00183d70[0xe]);
      auVar24[0xf] = -(*(char *)((longlong)param_2 + 0x12) == s_LED_PRECONDITION_00183d70[0xf]);
      auVar9[0] = -((char)*param_2 == s_FAILED_PRECONDIT_00183d80[0]);
      auVar9[1] = -(*(char *)((longlong)param_2 + 1) == s_FAILED_PRECONDIT_00183d80[1]);
      auVar9[2] = -(*(char *)((longlong)param_2 + 2) == s_FAILED_PRECONDIT_00183d80[2]);
      auVar9[3] = -(*(char *)((longlong)param_2 + 3) == s_FAILED_PRECONDIT_00183d80[3]);
      auVar9[4] = -(*(char *)((longlong)param_2 + 4) == s_FAILED_PRECONDIT_00183d80[4]);
      auVar9[5] = -(*(char *)((longlong)param_2 + 5) == s_FAILED_PRECONDIT_00183d80[5]);
      auVar9[6] = -(*(char *)((longlong)param_2 + 6) == s_FAILED_PRECONDIT_00183d80[6]);
      auVar9[7] = -(*(char *)((longlong)param_2 + 7) == s_FAILED_PRECONDIT_00183d80[7]);
      auVar9[8] = -((char)param_2[1] == s_FAILED_PRECONDIT_00183d80[8]);
      auVar9[9] = -(*(char *)((longlong)param_2 + 9) == s_FAILED_PRECONDIT_00183d80[9]);
      auVar9[10] = -(*(char *)((longlong)param_2 + 10) == s_FAILED_PRECONDIT_00183d80[10]);
      auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_FAILED_PRECONDIT_00183d80[0xb]);
      auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_FAILED_PRECONDIT_00183d80[0xc]);
      auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_FAILED_PRECONDIT_00183d80[0xd]);
      auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_FAILED_PRECONDIT_00183d80[0xe]);
      auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_FAILED_PRECONDIT_00183d80[0xf]);
      auVar10 = auVar9 & auVar24;
LAB_00509997:
      if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) goto LAB_005097c0;
    }
    else if (param_3 == 0x10) {
      auVar10[0] = -((char)*param_2 == s_INVALID_ARGUMENToken_00182de0[0]);
      auVar10[1] = -(*(char *)((longlong)param_2 + 1) == s_INVALID_ARGUMENToken_00182de0[1]);
      auVar10[2] = -(*(char *)((longlong)param_2 + 2) == s_INVALID_ARGUMENToken_00182de0[2]);
      auVar10[3] = -(*(char *)((longlong)param_2 + 3) == s_INVALID_ARGUMENToken_00182de0[3]);
      auVar10[4] = -(*(char *)((longlong)param_2 + 4) == s_INVALID_ARGUMENToken_00182de0[4]);
      auVar10[5] = -(*(char *)((longlong)param_2 + 5) == s_INVALID_ARGUMENToken_00182de0[5]);
      auVar10[6] = -(*(char *)((longlong)param_2 + 6) == s_INVALID_ARGUMENToken_00182de0[6]);
      auVar10[7] = -(*(char *)((longlong)param_2 + 7) == s_INVALID_ARGUMENToken_00182de0[7]);
      auVar10[8] = -((char)param_2[1] == s_INVALID_ARGUMENToken_00182de0[8]);
      auVar10[9] = -(*(char *)((longlong)param_2 + 9) == s_INVALID_ARGUMENToken_00182de0[9]);
      auVar10[10] = -(*(char *)((longlong)param_2 + 10) == s_INVALID_ARGUMENToken_00182de0[10]);
      auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_INVALID_ARGUMENToken_00182de0[0xb]);
      auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_INVALID_ARGUMENToken_00182de0[0xc]);
      auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_INVALID_ARGUMENToken_00182de0[0xd]);
      auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_INVALID_ARGUMENToken_00182de0[0xe]);
      auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_INVALID_ARGUMENToken_00182de0[0xf]);
      goto LAB_00509997;
    }
    pcVar2 = "gemini_quota_exhausted";
    if ((param_1 != 0x1ad) &&
       ((param_3 != 0x12 ||
        (auVar11[0] = -((char)*param_2 == s_RESOURCE_EXHAUST_00182860[0]),
        auVar11[1] = -(*(char *)((longlong)param_2 + 1) == s_RESOURCE_EXHAUST_00182860[1]),
        auVar11[2] = -(*(char *)((longlong)param_2 + 2) == s_RESOURCE_EXHAUST_00182860[2]),
        auVar11[3] = -(*(char *)((longlong)param_2 + 3) == s_RESOURCE_EXHAUST_00182860[3]),
        auVar11[4] = -(*(char *)((longlong)param_2 + 4) == s_RESOURCE_EXHAUST_00182860[4]),
        auVar11[5] = -(*(char *)((longlong)param_2 + 5) == s_RESOURCE_EXHAUST_00182860[5]),
        auVar11[6] = -(*(char *)((longlong)param_2 + 6) == s_RESOURCE_EXHAUST_00182860[6]),
        auVar11[7] = -(*(char *)((longlong)param_2 + 7) == s_RESOURCE_EXHAUST_00182860[7]),
        auVar11[8] = -((char)param_2[1] == s_RESOURCE_EXHAUST_00182860[8]),
        auVar11[9] = -(*(char *)((longlong)param_2 + 9) == s_RESOURCE_EXHAUST_00182860[9]),
        auVar11[10] = -(*(char *)((longlong)param_2 + 10) == s_RESOURCE_EXHAUST_00182860[10]),
        auVar11[0xb] = -(*(char *)((longlong)param_2 + 0xb) == s_RESOURCE_EXHAUST_00182860[0xb]),
        auVar11[0xc] = -(*(char *)((longlong)param_2 + 0xc) == s_RESOURCE_EXHAUST_00182860[0xc]),
        auVar11[0xd] = -(*(char *)((longlong)param_2 + 0xd) == s_RESOURCE_EXHAUST_00182860[0xd]),
        auVar11[0xe] = -(*(char *)((longlong)param_2 + 0xe) == s_RESOURCE_EXHAUST_00182860[0xe]),
        auVar11[0xf] = -(*(char *)((longlong)param_2 + 0xf) == s_RESOURCE_EXHAUST_00182860[0xf]),
        auVar25[0] = -((char)param_2[2] == s_ED_001826f0[0]),
        auVar25[1] = -((char)((ulonglong)param_2[2] >> 8) == s_ED_001826f0[1]),
        auVar25[2] = -(s_ED_001826f0[2] == '\0'), auVar25[3] = -(s_ED_001826f0[3] == '\0'),
        auVar25[4] = -(UNK_001826f4 == '\0'), auVar25[5] = -(UNK_001826f5 == '\0'),
        auVar25[6] = -(UNK_001826f6 == '\0'), auVar25[7] = -(UNK_001826f7 == '\0'),
        auVar25[8] = -(UNK_001826f8 == '\0'), auVar25[9] = -(UNK_001826f9 == '\0'),
        auVar25[10] = -(UNK_001826fa == '\0'), auVar25[0xb] = -(UNK_001826fb == '\0'),
        auVar25[0xc] = -(UNK_001826fc == '\0'), auVar25[0xd] = -(UNK_001826fd == '\0'),
        auVar25[0xe] = -(UNK_001826fe == '\0'), auVar25[0xf] = -(UNK_001826ff == '\0'),
        auVar25 = auVar25 & auVar11,
        (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) != 0xffff)))) {
      pcVar2 = "upstream_unavailable";
      uVar3 = 0x14;
      if ((param_1 != 0x1f7) &&
         ((param_1 != 0x211 &&
          ((param_3 != 0xb ||
           (*(longlong *)((longlong)param_2 + 3) != 0x454c42414c494156 ||
            *param_2 != 0x414c494156414e55)))))) {
        pcVar2 = "upstream_timeout\x01";
        uVar3 = 0x10;
        if ((param_1 != 0x1f8) &&
           ((!bVar6 ||
            (auVar12[0] = -((char)*param_2 == DAT_00183b30),
            auVar12[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183b31),
            auVar12[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183b32),
            auVar12[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183b33),
            auVar12[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183b34),
            auVar12[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183b35),
            auVar12[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183b36),
            auVar12[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183b37),
            auVar12[8] = -((char)param_2[1] == UNK_00183b38),
            auVar12[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183b39),
            auVar12[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00183b3a),
            auVar12[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183b3b),
            auVar12[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183b3c),
            auVar12[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00183b3d),
            auVar12[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00183b3e),
            auVar12[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00183b3f),
            auVar26[0] = -((char)param_2[2] == s_D_001839a0[0]),
            auVar26[1] = -(s_D_001839a0[1] == '\0'), auVar26[2] = -(s_D_001839a0[2] == '\0'),
            auVar26[3] = -(s_D_001839a0[3] == '\0'), auVar26[4] = -(UNK_001839a4 == '\0'),
            auVar26[5] = -(UNK_001839a5 == '\0'), auVar26[6] = -(UNK_001839a6 == '\0'),
            auVar26[7] = -(UNK_001839a7 == '\0'), auVar26[8] = -(UNK_001839a8 == '\0'),
            auVar26[9] = -(UNK_001839a9 == '\0'), auVar26[10] = -(UNK_001839aa == '\0'),
            auVar26[0xb] = -(UNK_001839ab == '\0'), auVar26[0xc] = -(UNK_001839ac == '\0'),
            auVar26[0xd] = -(UNK_001839ad == '\0'), auVar26[0xe] = -(UNK_001839ae == '\0'),
            auVar26[0xf] = -(UNK_001839af == '\0'), auVar26 = auVar26 & auVar12,
            (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) != 0xffff)))) {
          auVar40._8_8_ = 0xd;
          auVar40._0_8_ =
               "upstream_httpupstream_ssenative_runtimecli_stderracpbridgekernelvalidation";
          return auVar40;
        }
      }
    }
    goto LAB_005097c0;
  }
LAB_005097fd:
  if (param_5 == 0x13) {
    auVar22[0] = -(*(char *)((longlong)plVar4 + 3) == s_IDATION_REQUIRED_00182850[0]);
    auVar22[1] = -(*(char *)((longlong)plVar4 + 4) == s_IDATION_REQUIRED_00182850[1]);
    auVar22[2] = -(*(char *)((longlong)plVar4 + 5) == s_IDATION_REQUIRED_00182850[2]);
    auVar22[3] = -(*(char *)((longlong)plVar4 + 6) == s_IDATION_REQUIRED_00182850[3]);
    auVar22[4] = -(*(char *)((longlong)plVar4 + 7) == s_IDATION_REQUIRED_00182850[4]);
    auVar22[5] = -((char)plVar4[1] == s_IDATION_REQUIRED_00182850[5]);
    auVar22[6] = -(*(char *)((longlong)plVar4 + 9) == s_IDATION_REQUIRED_00182850[6]);
    auVar22[7] = -(*(char *)((longlong)plVar4 + 10) == s_IDATION_REQUIRED_00182850[7]);
    auVar22[8] = -(*(char *)((longlong)plVar4 + 0xb) == s_IDATION_REQUIRED_00182850[8]);
    auVar22[9] = -(*(char *)((longlong)plVar4 + 0xc) == s_IDATION_REQUIRED_00182850[9]);
    auVar22[10] = -(*(char *)((longlong)plVar4 + 0xd) == s_IDATION_REQUIRED_00182850[10]);
    auVar22[0xb] = -(*(char *)((longlong)plVar4 + 0xe) == s_IDATION_REQUIRED_00182850[0xb]);
    auVar22[0xc] = -(*(char *)((longlong)plVar4 + 0xf) == s_IDATION_REQUIRED_00182850[0xc]);
    auVar22[0xd] = -((char)plVar4[2] == s_IDATION_REQUIRED_00182850[0xd]);
    auVar22[0xe] = -(*(char *)((longlong)plVar4 + 0x11) == s_IDATION_REQUIRED_00182850[0xe]);
    auVar22[0xf] = -(*(char *)((longlong)plVar4 + 0x12) == s_IDATION_REQUIRED_00182850[0xf]);
    auVar7[0] = -((char)*plVar4 == s_VALIDATION_REQUI_00183680[0]);
    auVar7[1] = -(*(char *)((longlong)plVar4 + 1) == s_VALIDATION_REQUI_00183680[1]);
    auVar7[2] = -(*(char *)((longlong)plVar4 + 2) == s_VALIDATION_REQUI_00183680[2]);
    auVar7[3] = -(*(char *)((longlong)plVar4 + 3) == s_VALIDATION_REQUI_00183680[3]);
    auVar7[4] = -(*(char *)((longlong)plVar4 + 4) == s_VALIDATION_REQUI_00183680[4]);
    auVar7[5] = -(*(char *)((longlong)plVar4 + 5) == s_VALIDATION_REQUI_00183680[5]);
    auVar7[6] = -(*(char *)((longlong)plVar4 + 6) == s_VALIDATION_REQUI_00183680[6]);
    auVar7[7] = -(*(char *)((longlong)plVar4 + 7) == s_VALIDATION_REQUI_00183680[7]);
    auVar7[8] = -((char)plVar4[1] == s_VALIDATION_REQUI_00183680[8]);
    auVar7[9] = -(*(char *)((longlong)plVar4 + 9) == s_VALIDATION_REQUI_00183680[9]);
    auVar7[10] = -(*(char *)((longlong)plVar4 + 10) == s_VALIDATION_REQUI_00183680[10]);
    auVar7[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_VALIDATION_REQUI_00183680[0xb]);
    auVar7[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_VALIDATION_REQUI_00183680[0xc]);
    auVar7[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_VALIDATION_REQUI_00183680[0xd]);
    auVar7[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_VALIDATION_REQUI_00183680[0xe]);
    auVar7[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_VALIDATION_REQUI_00183680[0xf]);
    auVar7 = auVar7 & auVar22;
    bVar6 = (ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff;
    uVar3 = 0x24;
    if (param_6 == 0 && bVar6) {
      uVar3 = 0x11;
    }
    pcVar2 = "gemini_account_verification_required";
    if (param_6 == 0 && bVar6) {
      pcVar2 = "permission_denied";
    }
    auVar38._8_8_ = uVar3;
    auVar38._0_8_ = pcVar2;
    return auVar38;
  }
  if (param_6 != 0) {
    auVar39._8_8_ = 0x24;
    auVar39._0_8_ = "gemini_account_verification_required";
    return auVar39;
  }
  switch(param_5) {
  case 0xd:
    if (*(longlong *)((longlong)plVar4 + 5) != 0x4e4f4954414c4f49 || *plVar4 != 0x4c4f49565f534f54)
    goto LAB_00509c42;
    goto LAB_00509c7c;
  default:
    auVar41._8_8_ = 0x11;
    auVar41._0_8_ = "permission_denied";
    return auVar41;
  case 0x11:
    auVar13[0] = -((char)*plVar4 == s_ACCOUNT_SUSPENDE_00182db0[0]);
    auVar13[1] = -(*(char *)((longlong)plVar4 + 1) == s_ACCOUNT_SUSPENDE_00182db0[1]);
    auVar13[2] = -(*(char *)((longlong)plVar4 + 2) == s_ACCOUNT_SUSPENDE_00182db0[2]);
    auVar13[3] = -(*(char *)((longlong)plVar4 + 3) == s_ACCOUNT_SUSPENDE_00182db0[3]);
    auVar13[4] = -(*(char *)((longlong)plVar4 + 4) == s_ACCOUNT_SUSPENDE_00182db0[4]);
    auVar13[5] = -(*(char *)((longlong)plVar4 + 5) == s_ACCOUNT_SUSPENDE_00182db0[5]);
    auVar13[6] = -(*(char *)((longlong)plVar4 + 6) == s_ACCOUNT_SUSPENDE_00182db0[6]);
    auVar13[7] = -(*(char *)((longlong)plVar4 + 7) == s_ACCOUNT_SUSPENDE_00182db0[7]);
    auVar13[8] = -((char)plVar4[1] == s_ACCOUNT_SUSPENDE_00182db0[8]);
    auVar13[9] = -(*(char *)((longlong)plVar4 + 9) == s_ACCOUNT_SUSPENDE_00182db0[9]);
    auVar13[10] = -(*(char *)((longlong)plVar4 + 10) == s_ACCOUNT_SUSPENDE_00182db0[10]);
    auVar13[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_ACCOUNT_SUSPENDE_00182db0[0xb]);
    auVar13[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_ACCOUNT_SUSPENDE_00182db0[0xc]);
    auVar13[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_ACCOUNT_SUSPENDE_00182db0[0xd]);
    auVar13[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_ACCOUNT_SUSPENDE_00182db0[0xe]);
    auVar13[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_ACCOUNT_SUSPENDE_00182db0[0xf]);
    auVar28[0] = -((char)plVar4[2] == s_D_001839a0[0]);
    auVar28[1] = -(s_D_001839a0[1] == '\0');
    auVar28[2] = -(s_D_001839a0[2] == '\0');
    auVar28[3] = -(s_D_001839a0[3] == '\0');
    auVar28[4] = -(UNK_001839a4 == '\0');
    auVar28[5] = -(UNK_001839a5 == '\0');
    auVar28[6] = -(UNK_001839a6 == '\0');
    auVar28[7] = -(UNK_001839a7 == '\0');
    auVar28[8] = -(UNK_001839a8 == '\0');
    auVar28[9] = -(UNK_001839a9 == '\0');
    auVar28[10] = -(UNK_001839aa == '\0');
    auVar28[0xb] = -(UNK_001839ab == '\0');
    auVar28[0xc] = -(UNK_001839ac == '\0');
    auVar28[0xd] = -(UNK_001839ad == '\0');
    auVar28[0xe] = -(UNK_001839ae == '\0');
    auVar28[0xf] = -(UNK_001839af == '\0');
    auVar28 = auVar28 & auVar13;
    if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) goto LAB_00509c7c;
    auVar14[0] = -((char)*plVar4 == DAT_00183c40);
    auVar14[1] = -(*(char *)((longlong)plVar4 + 1) == UNK_00183c41);
    auVar14[2] = -(*(char *)((longlong)plVar4 + 2) == UNK_00183c42);
    auVar14[3] = -(*(char *)((longlong)plVar4 + 3) == UNK_00183c43);
    auVar14[4] = -(*(char *)((longlong)plVar4 + 4) == UNK_00183c44);
    auVar14[5] = -(*(char *)((longlong)plVar4 + 5) == UNK_00183c45);
    auVar14[6] = -(*(char *)((longlong)plVar4 + 6) == UNK_00183c46);
    auVar14[7] = -(*(char *)((longlong)plVar4 + 7) == UNK_00183c47);
    auVar14[8] = -((char)plVar4[1] == UNK_00183c48);
    auVar14[9] = -(*(char *)((longlong)plVar4 + 9) == UNK_00183c49);
    auVar14[10] = -(*(char *)((longlong)plVar4 + 10) == UNK_00183c4a);
    auVar14[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == UNK_00183c4b);
    auVar14[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == UNK_00183c4c);
    auVar14[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == UNK_00183c4d);
    auVar14[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == UNK_00183c4e);
    auVar14[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == UNK_00183c4f);
    auVar29[0] = -((char)plVar4[2] == s_R_00182890[0]);
    auVar29[1] = -(s_R_00182890[1] == '\0');
    auVar29[2] = -(s_R_00182890[2] == '\0');
    auVar29[3] = -(s_R_00182890[3] == '\0');
    auVar29[4] = -(UNK_00182894 == '\0');
    auVar29[5] = -(UNK_00182895 == '\0');
    auVar29[6] = -(UNK_00182896 == '\0');
    auVar29[7] = -(UNK_00182897 == '\0');
    auVar29[8] = -(UNK_00182898 == '\0');
    auVar29[9] = -(UNK_00182899 == '\0');
    auVar29[10] = -(UNK_0018289a == '\0');
    auVar29[0xb] = -(UNK_0018289b == '\0');
    auVar29[0xc] = -(UNK_0018289c == '\0');
    auVar29[0xd] = -(UNK_0018289d == '\0');
    auVar29[0xe] = -(UNK_0018289e == '\0');
    auVar29[0xf] = -(UNK_0018289f == '\0');
    auVar29 = auVar29 & auVar14;
    uVar5 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
            (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
    break;
  case 0x12:
    auVar16[0] = -((char)*plVar4 == s_UNSUPPORTED_REGI_001842c0[0]);
    auVar16[1] = -(*(char *)((longlong)plVar4 + 1) == s_UNSUPPORTED_REGI_001842c0[1]);
    auVar16[2] = -(*(char *)((longlong)plVar4 + 2) == s_UNSUPPORTED_REGI_001842c0[2]);
    auVar16[3] = -(*(char *)((longlong)plVar4 + 3) == s_UNSUPPORTED_REGI_001842c0[3]);
    auVar16[4] = -(*(char *)((longlong)plVar4 + 4) == s_UNSUPPORTED_REGI_001842c0[4]);
    auVar16[5] = -(*(char *)((longlong)plVar4 + 5) == s_UNSUPPORTED_REGI_001842c0[5]);
    auVar16[6] = -(*(char *)((longlong)plVar4 + 6) == s_UNSUPPORTED_REGI_001842c0[6]);
    auVar16[7] = -(*(char *)((longlong)plVar4 + 7) == s_UNSUPPORTED_REGI_001842c0[7]);
    auVar16[8] = -((char)plVar4[1] == s_UNSUPPORTED_REGI_001842c0[8]);
    auVar16[9] = -(*(char *)((longlong)plVar4 + 9) == s_UNSUPPORTED_REGI_001842c0[9]);
    auVar16[10] = -(*(char *)((longlong)plVar4 + 10) == s_UNSUPPORTED_REGI_001842c0[10]);
    auVar16[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_UNSUPPORTED_REGI_001842c0[0xb]);
    auVar16[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_UNSUPPORTED_REGI_001842c0[0xc]);
    auVar16[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_UNSUPPORTED_REGI_001842c0[0xd]);
    auVar16[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_UNSUPPORTED_REGI_001842c0[0xe]);
    auVar16[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_UNSUPPORTED_REGI_001842c0[0xf]);
    auVar30[0] = -((char)plVar4[2] == s_ON_001837b0[0]);
    auVar30[1] = -((char)((ulonglong)plVar4[2] >> 8) == s_ON_001837b0[1]);
    auVar30[2] = -(s_ON_001837b0[2] == '\0');
    auVar30[3] = -(s_ON_001837b0[3] == '\0');
    auVar30[4] = -(UNK_001837b4 == '\0');
    auVar30[5] = -(UNK_001837b5 == '\0');
    auVar30[6] = -(UNK_001837b6 == '\0');
    auVar30[7] = -(UNK_001837b7 == '\0');
    auVar30[8] = -(UNK_001837b8 == '\0');
    auVar30[9] = -(UNK_001837b9 == '\0');
    auVar30[10] = -(UNK_001837ba == '\0');
    auVar30[0xb] = -(UNK_001837bb == '\0');
    auVar30[0xc] = -(UNK_001837bc == '\0');
    auVar30[0xd] = -(UNK_001837bd == '\0');
    auVar30[0xe] = -(UNK_001837be == '\0');
    auVar30[0xf] = -(UNK_001837bf == '\0');
    auVar30 = auVar30 & auVar16;
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) goto LAB_00509c0c;
    auVar17[0] = -((char)*plVar4 == DAT_00182fb0);
    auVar17[1] = -(*(char *)((longlong)plVar4 + 1) == UNK_00182fb1);
    auVar17[2] = -(*(char *)((longlong)plVar4 + 2) == UNK_00182fb2);
    auVar17[3] = -(*(char *)((longlong)plVar4 + 3) == UNK_00182fb3);
    auVar17[4] = -(*(char *)((longlong)plVar4 + 4) == UNK_00182fb4);
    auVar17[5] = -(*(char *)((longlong)plVar4 + 5) == UNK_00182fb5);
    auVar17[6] = -(*(char *)((longlong)plVar4 + 6) == UNK_00182fb6);
    auVar17[7] = -(*(char *)((longlong)plVar4 + 7) == UNK_00182fb7);
    auVar17[8] = -((char)plVar4[1] == UNK_00182fb8);
    auVar17[9] = -(*(char *)((longlong)plVar4 + 9) == UNK_00182fb9);
    auVar17[10] = -(*(char *)((longlong)plVar4 + 10) == UNK_00182fba);
    auVar17[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == UNK_00182fbb);
    auVar17[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == UNK_00182fbc);
    auVar17[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == UNK_00182fbd);
    auVar17[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == UNK_00182fbe);
    auVar17[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == UNK_00182fbf);
    auVar31[0] = -((char)plVar4[2] == s_NT_001842d0[0]);
    auVar31[1] = -((char)((ulonglong)plVar4[2] >> 8) == s_NT_001842d0[1]);
    auVar31[2] = -(s_NT_001842d0[2] == '\0');
    auVar31[3] = -(s_NT_001842d0[3] == '\0');
    auVar31[4] = -(UNK_001842d4 == '\0');
    auVar31[5] = -(UNK_001842d5 == '\0');
    auVar31[6] = -(UNK_001842d6 == '\0');
    auVar31[7] = -(UNK_001842d7 == '\0');
    auVar31[8] = -(UNK_001842d8 == '\0');
    auVar31[9] = -(UNK_001842d9 == '\0');
    auVar31[10] = -(UNK_001842da == '\0');
    auVar31[0xb] = -(UNK_001842db == '\0');
    auVar31[0xc] = -(UNK_001842dc == '\0');
    auVar31[0xd] = -(UNK_001842dd == '\0');
    auVar31[0xe] = -(UNK_001842de == '\0');
    auVar31[0xf] = -(UNK_001842df == '\0');
    auVar31 = auVar31 & auVar17;
    pcVar2 = "gemini_client_unsupported";
    uVar3 = 0x19;
    if (((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) ||
       (auVar18[0] = -((char)*plVar4 == s_CLIENT_NOT_ALLOW_001840e0[0]),
       auVar18[1] = -(*(char *)((longlong)plVar4 + 1) == s_CLIENT_NOT_ALLOW_001840e0[1]),
       auVar18[2] = -(*(char *)((longlong)plVar4 + 2) == s_CLIENT_NOT_ALLOW_001840e0[2]),
       auVar18[3] = -(*(char *)((longlong)plVar4 + 3) == s_CLIENT_NOT_ALLOW_001840e0[3]),
       auVar18[4] = -(*(char *)((longlong)plVar4 + 4) == s_CLIENT_NOT_ALLOW_001840e0[4]),
       auVar18[5] = -(*(char *)((longlong)plVar4 + 5) == s_CLIENT_NOT_ALLOW_001840e0[5]),
       auVar18[6] = -(*(char *)((longlong)plVar4 + 6) == s_CLIENT_NOT_ALLOW_001840e0[6]),
       auVar18[7] = -(*(char *)((longlong)plVar4 + 7) == s_CLIENT_NOT_ALLOW_001840e0[7]),
       auVar18[8] = -((char)plVar4[1] == s_CLIENT_NOT_ALLOW_001840e0[8]),
       auVar18[9] = -(*(char *)((longlong)plVar4 + 9) == s_CLIENT_NOT_ALLOW_001840e0[9]),
       auVar18[10] = -(*(char *)((longlong)plVar4 + 10) == s_CLIENT_NOT_ALLOW_001840e0[10]),
       auVar18[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_CLIENT_NOT_ALLOW_001840e0[0xb]),
       auVar18[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_CLIENT_NOT_ALLOW_001840e0[0xc]),
       auVar18[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_CLIENT_NOT_ALLOW_001840e0[0xd]),
       auVar18[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_CLIENT_NOT_ALLOW_001840e0[0xe]),
       auVar18[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_CLIENT_NOT_ALLOW_001840e0[0xf]),
       auVar32[0] = -((char)plVar4[2] == s_ED_001826f0[0]),
       auVar32[1] = -((char)((ulonglong)plVar4[2] >> 8) == s_ED_001826f0[1]),
       auVar32[2] = -(s_ED_001826f0[2] == '\0'), auVar32[3] = -(s_ED_001826f0[3] == '\0'),
       auVar32[4] = -(UNK_001826f4 == '\0'), auVar32[5] = -(UNK_001826f5 == '\0'),
       auVar32[6] = -(UNK_001826f6 == '\0'), auVar32[7] = -(UNK_001826f7 == '\0'),
       auVar32[8] = -(UNK_001826f8 == '\0'), auVar32[9] = -(UNK_001826f9 == '\0'),
       auVar32[10] = -(UNK_001826fa == '\0'), auVar32[0xb] = -(UNK_001826fb == '\0'),
       auVar32[0xc] = -(UNK_001826fc == '\0'), auVar32[0xd] = -(UNK_001826fd == '\0'),
       auVar32[0xe] = -(UNK_001826fe == '\0'), auVar32[0xf] = -(UNK_001826ff == '\0'),
       auVar32 = auVar32 & auVar18,
       (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff)) goto LAB_005097c0;
    auVar19[0] = -((char)*plVar4 == s_ACCOUNT_INELIGIB_00182710[0]);
    auVar19[1] = -(*(char *)((longlong)plVar4 + 1) == s_ACCOUNT_INELIGIB_00182710[1]);
    auVar19[2] = -(*(char *)((longlong)plVar4 + 2) == s_ACCOUNT_INELIGIB_00182710[2]);
    auVar19[3] = -(*(char *)((longlong)plVar4 + 3) == s_ACCOUNT_INELIGIB_00182710[3]);
    auVar19[4] = -(*(char *)((longlong)plVar4 + 4) == s_ACCOUNT_INELIGIB_00182710[4]);
    auVar19[5] = -(*(char *)((longlong)plVar4 + 5) == s_ACCOUNT_INELIGIB_00182710[5]);
    auVar19[6] = -(*(char *)((longlong)plVar4 + 6) == s_ACCOUNT_INELIGIB_00182710[6]);
    auVar19[7] = -(*(char *)((longlong)plVar4 + 7) == s_ACCOUNT_INELIGIB_00182710[7]);
    auVar19[8] = -((char)plVar4[1] == s_ACCOUNT_INELIGIB_00182710[8]);
    auVar19[9] = -(*(char *)((longlong)plVar4 + 9) == s_ACCOUNT_INELIGIB_00182710[9]);
    auVar19[10] = -(*(char *)((longlong)plVar4 + 10) == s_ACCOUNT_INELIGIB_00182710[10]);
    auVar19[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_ACCOUNT_INELIGIB_00182710[0xb]);
    auVar19[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_ACCOUNT_INELIGIB_00182710[0xc]);
    auVar19[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_ACCOUNT_INELIGIB_00182710[0xd]);
    auVar19[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_ACCOUNT_INELIGIB_00182710[0xe]);
    auVar19[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_ACCOUNT_INELIGIB_00182710[0xf]);
    auVar33[0] = -((char)plVar4[2] == s_LE_00183490[0]);
    auVar33[1] = -((char)((ulonglong)plVar4[2] >> 8) == s_LE_00183490[1]);
    auVar33[2] = -(s_LE_00183490[2] == '\0');
    auVar33[3] = -(s_LE_00183490[3] == '\0');
    auVar33[4] = -(UNK_00183494 == '\0');
    auVar33[5] = -(UNK_00183495 == '\0');
    auVar33[6] = -(UNK_00183496 == '\0');
    auVar33[7] = -(UNK_00183497 == '\0');
    auVar33[8] = -(UNK_00183498 == '\0');
    auVar33[9] = -(UNK_00183499 == '\0');
    auVar33[10] = -(UNK_0018349a == '\0');
    auVar33[0xb] = -(UNK_0018349b == '\0');
    auVar33[0xc] = -(UNK_0018349c == '\0');
    auVar33[0xd] = -(UNK_0018349d == '\0');
    auVar33[0xe] = -(UNK_0018349e == '\0');
    auVar33[0xf] = -(UNK_0018349f == '\0');
    auVar33 = auVar33 & auVar19;
    uVar5 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
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
            (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
    break;
  case 0x14:
    lVar1 = plVar4[2];
    auVar34[0] = -((char)lVar1 == s_ATED_001835c0[0]);
    auVar34[1] = -((char)((ulonglong)lVar1 >> 8) == s_ATED_001835c0[1]);
    auVar34[2] = -((char)((ulonglong)lVar1 >> 0x10) == s_ATED_001835c0[2]);
    auVar34[3] = -((char)((ulonglong)lVar1 >> 0x18) == s_ATED_001835c0[3]);
    auVar34[4] = -(s_ATED_001835c0[4] == '\0');
    auVar34[5] = -(s_ATED_001835c0[5] == '\0');
    auVar34[6] = -(s_ATED_001835c0[6] == '\0');
    auVar34[7] = -(s_ATED_001835c0[7] == '\0');
    auVar34[8] = -(UNK_001835c8 == '\0');
    auVar34[9] = -(UNK_001835c9 == '\0');
    auVar34[10] = -(UNK_001835ca == '\0');
    auVar34[0xb] = -(UNK_001835cb == '\0');
    auVar34[0xc] = -(UNK_001835cc == '\0');
    auVar34[0xd] = -(UNK_001835cd == '\0');
    auVar34[0xe] = -(UNK_001835ce == '\0');
    auVar34[0xf] = -(UNK_001835cf == '\0');
    auVar20[0] = -((char)*plVar4 == DAT_00184190);
    auVar20[1] = -(*(char *)((longlong)plVar4 + 1) == UNK_00184191);
    auVar20[2] = -(*(char *)((longlong)plVar4 + 2) == UNK_00184192);
    auVar20[3] = -(*(char *)((longlong)plVar4 + 3) == UNK_00184193);
    auVar20[4] = -(*(char *)((longlong)plVar4 + 4) == UNK_00184194);
    auVar20[5] = -(*(char *)((longlong)plVar4 + 5) == UNK_00184195);
    auVar20[6] = -(*(char *)((longlong)plVar4 + 6) == UNK_00184196);
    auVar20[7] = -(*(char *)((longlong)plVar4 + 7) == UNK_00184197);
    auVar20[8] = -((char)plVar4[1] == UNK_00184198);
    auVar20[9] = -(*(char *)((longlong)plVar4 + 9) == UNK_00184199);
    auVar20[10] = -(*(char *)((longlong)plVar4 + 10) == UNK_0018419a);
    auVar20[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == UNK_0018419b);
    auVar20[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == UNK_0018419c);
    auVar20[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == UNK_0018419d);
    auVar20[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == UNK_0018419e);
    auVar20[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == UNK_0018419f);
    auVar20 = auVar20 & auVar34;
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
      auVar45._8_8_ = 0x19;
      auVar45._0_8_ = "gemini_client_unsupported";
      return auVar45;
    }
    goto LAB_00509c42;
  case 0x15:
    auVar35[0] = -(*(char *)((longlong)plVar4 + 5) == DAT_00183270);
    auVar35[1] = -(*(char *)((longlong)plVar4 + 6) == UNK_00183271);
    auVar35[2] = -(*(char *)((longlong)plVar4 + 7) == UNK_00183272);
    auVar35[3] = -((char)plVar4[1] == UNK_00183273);
    auVar35[4] = -(*(char *)((longlong)plVar4 + 9) == UNK_00183274);
    auVar35[5] = -(*(char *)((longlong)plVar4 + 10) == UNK_00183275);
    auVar35[6] = -(*(char *)((longlong)plVar4 + 0xb) == UNK_00183276);
    auVar35[7] = -(*(char *)((longlong)plVar4 + 0xc) == UNK_00183277);
    auVar35[8] = -(*(char *)((longlong)plVar4 + 0xd) == UNK_00183278);
    auVar35[9] = -(*(char *)((longlong)plVar4 + 0xe) == UNK_00183279);
    auVar35[10] = -(*(char *)((longlong)plVar4 + 0xf) == UNK_0018327a);
    auVar35[0xb] = -((char)plVar4[2] == UNK_0018327b);
    auVar35[0xc] = -(*(char *)((longlong)plVar4 + 0x11) == UNK_0018327c);
    auVar35[0xd] = -(*(char *)((longlong)plVar4 + 0x12) == UNK_0018327d);
    auVar35[0xe] = -(*(char *)((longlong)plVar4 + 0x13) == UNK_0018327e);
    auVar35[0xf] = -(*(char *)((longlong)plVar4 + 0x14) == UNK_0018327f);
    auVar21[0] = -((char)*plVar4 == s_SUBSCRIPTION_REQ_00184450[0]);
    auVar21[1] = -(*(char *)((longlong)plVar4 + 1) == s_SUBSCRIPTION_REQ_00184450[1]);
    auVar21[2] = -(*(char *)((longlong)plVar4 + 2) == s_SUBSCRIPTION_REQ_00184450[2]);
    auVar21[3] = -(*(char *)((longlong)plVar4 + 3) == s_SUBSCRIPTION_REQ_00184450[3]);
    auVar21[4] = -(*(char *)((longlong)plVar4 + 4) == s_SUBSCRIPTION_REQ_00184450[4]);
    auVar21[5] = -(*(char *)((longlong)plVar4 + 5) == s_SUBSCRIPTION_REQ_00184450[5]);
    auVar21[6] = -(*(char *)((longlong)plVar4 + 6) == s_SUBSCRIPTION_REQ_00184450[6]);
    auVar21[7] = -(*(char *)((longlong)plVar4 + 7) == s_SUBSCRIPTION_REQ_00184450[7]);
    auVar21[8] = -((char)plVar4[1] == s_SUBSCRIPTION_REQ_00184450[8]);
    auVar21[9] = -(*(char *)((longlong)plVar4 + 9) == s_SUBSCRIPTION_REQ_00184450[9]);
    auVar21[10] = -(*(char *)((longlong)plVar4 + 10) == s_SUBSCRIPTION_REQ_00184450[10]);
    auVar21[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_SUBSCRIPTION_REQ_00184450[0xb]);
    auVar21[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_SUBSCRIPTION_REQ_00184450[0xc]);
    auVar21[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_SUBSCRIPTION_REQ_00184450[0xd]);
    auVar21[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_SUBSCRIPTION_REQ_00184450[0xe]);
    auVar21[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_SUBSCRIPTION_REQ_00184450[0xf]);
    auVar21 = auVar21 & auVar35;
    uVar5 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar21[0xf] >> 7) << 0xf;
    break;
  case 0x16:
    auVar27[0] = -(*(char *)((longlong)plVar4 + 6) == s_ON_NOT_SUPPORTED_001840d0[0]);
    auVar27[1] = -(*(char *)((longlong)plVar4 + 7) == s_ON_NOT_SUPPORTED_001840d0[1]);
    auVar27[2] = -((char)plVar4[1] == s_ON_NOT_SUPPORTED_001840d0[2]);
    auVar27[3] = -(*(char *)((longlong)plVar4 + 9) == s_ON_NOT_SUPPORTED_001840d0[3]);
    auVar27[4] = -(*(char *)((longlong)plVar4 + 10) == s_ON_NOT_SUPPORTED_001840d0[4]);
    auVar27[5] = -(*(char *)((longlong)plVar4 + 0xb) == s_ON_NOT_SUPPORTED_001840d0[5]);
    auVar27[6] = -(*(char *)((longlong)plVar4 + 0xc) == s_ON_NOT_SUPPORTED_001840d0[6]);
    auVar27[7] = -(*(char *)((longlong)plVar4 + 0xd) == s_ON_NOT_SUPPORTED_001840d0[7]);
    auVar27[8] = -(*(char *)((longlong)plVar4 + 0xe) == s_ON_NOT_SUPPORTED_001840d0[8]);
    auVar27[9] = -(*(char *)((longlong)plVar4 + 0xf) == s_ON_NOT_SUPPORTED_001840d0[9]);
    auVar27[10] = -((char)plVar4[2] == s_ON_NOT_SUPPORTED_001840d0[10]);
    auVar27[0xb] = -(*(char *)((longlong)plVar4 + 0x11) == s_ON_NOT_SUPPORTED_001840d0[0xb]);
    auVar27[0xc] = -(*(char *)((longlong)plVar4 + 0x12) == s_ON_NOT_SUPPORTED_001840d0[0xc]);
    auVar27[0xd] = -(*(char *)((longlong)plVar4 + 0x13) == s_ON_NOT_SUPPORTED_001840d0[0xd]);
    auVar27[0xe] = -(*(char *)((longlong)plVar4 + 0x14) == s_ON_NOT_SUPPORTED_001840d0[0xe]);
    auVar27[0xf] = -(*(char *)((longlong)plVar4 + 0x15) == s_ON_NOT_SUPPORTED_001840d0[0xf]);
    auVar15[0] = -((char)*plVar4 == s_LOCATION_NOT_SUP_001836b0[0]);
    auVar15[1] = -(*(char *)((longlong)plVar4 + 1) == s_LOCATION_NOT_SUP_001836b0[1]);
    auVar15[2] = -(*(char *)((longlong)plVar4 + 2) == s_LOCATION_NOT_SUP_001836b0[2]);
    auVar15[3] = -(*(char *)((longlong)plVar4 + 3) == s_LOCATION_NOT_SUP_001836b0[3]);
    auVar15[4] = -(*(char *)((longlong)plVar4 + 4) == s_LOCATION_NOT_SUP_001836b0[4]);
    auVar15[5] = -(*(char *)((longlong)plVar4 + 5) == s_LOCATION_NOT_SUP_001836b0[5]);
    auVar15[6] = -(*(char *)((longlong)plVar4 + 6) == s_LOCATION_NOT_SUP_001836b0[6]);
    auVar15[7] = -(*(char *)((longlong)plVar4 + 7) == s_LOCATION_NOT_SUP_001836b0[7]);
    auVar15[8] = -((char)plVar4[1] == s_LOCATION_NOT_SUP_001836b0[8]);
    auVar15[9] = -(*(char *)((longlong)plVar4 + 9) == s_LOCATION_NOT_SUP_001836b0[9]);
    auVar15[10] = -(*(char *)((longlong)plVar4 + 10) == s_LOCATION_NOT_SUP_001836b0[10]);
    auVar15[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_LOCATION_NOT_SUP_001836b0[0xb]);
    auVar15[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_LOCATION_NOT_SUP_001836b0[0xc]);
    auVar15[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_LOCATION_NOT_SUP_001836b0[0xd]);
    auVar15[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_LOCATION_NOT_SUP_001836b0[0xe]);
    auVar15[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_LOCATION_NOT_SUP_001836b0[0xf]);
    goto LAB_00509b2e;
  case 0x19:
    auVar27[0] = -(*(char *)((longlong)plVar4 + 9) == DAT_00182ba0);
    auVar27[1] = -(*(char *)((longlong)plVar4 + 10) == UNK_00182ba1);
    auVar27[2] = -(*(char *)((longlong)plVar4 + 0xb) == UNK_00182ba2);
    auVar27[3] = -(*(char *)((longlong)plVar4 + 0xc) == UNK_00182ba3);
    auVar27[4] = -(*(char *)((longlong)plVar4 + 0xd) == UNK_00182ba4);
    auVar27[5] = -(*(char *)((longlong)plVar4 + 0xe) == UNK_00182ba5);
    auVar27[6] = -(*(char *)((longlong)plVar4 + 0xf) == UNK_00182ba6);
    auVar27[7] = -((char)plVar4[2] == UNK_00182ba7);
    auVar27[8] = -(*(char *)((longlong)plVar4 + 0x11) == UNK_00182ba8);
    auVar27[9] = -(*(char *)((longlong)plVar4 + 0x12) == UNK_00182ba9);
    auVar27[10] = -(*(char *)((longlong)plVar4 + 0x13) == UNK_00182baa);
    auVar27[0xb] = -(*(char *)((longlong)plVar4 + 0x14) == UNK_00182bab);
    auVar27[0xc] = -(*(char *)((longlong)plVar4 + 0x15) == UNK_00182bac);
    auVar27[0xd] = -(*(char *)((longlong)plVar4 + 0x16) == UNK_00182bad);
    auVar27[0xe] = -(*(char *)((longlong)plVar4 + 0x17) == UNK_00182bae);
    auVar27[0xf] = -((char)plVar4[3] == UNK_00182baf);
    auVar15[0] = -((char)*plVar4 == s_USER_LOCATION_UN_00182dd0[0]);
    auVar15[1] = -(*(char *)((longlong)plVar4 + 1) == s_USER_LOCATION_UN_00182dd0[1]);
    auVar15[2] = -(*(char *)((longlong)plVar4 + 2) == s_USER_LOCATION_UN_00182dd0[2]);
    auVar15[3] = -(*(char *)((longlong)plVar4 + 3) == s_USER_LOCATION_UN_00182dd0[3]);
    auVar15[4] = -(*(char *)((longlong)plVar4 + 4) == s_USER_LOCATION_UN_00182dd0[4]);
    auVar15[5] = -(*(char *)((longlong)plVar4 + 5) == s_USER_LOCATION_UN_00182dd0[5]);
    auVar15[6] = -(*(char *)((longlong)plVar4 + 6) == s_USER_LOCATION_UN_00182dd0[6]);
    auVar15[7] = -(*(char *)((longlong)plVar4 + 7) == s_USER_LOCATION_UN_00182dd0[7]);
    auVar15[8] = -((char)plVar4[1] == s_USER_LOCATION_UN_00182dd0[8]);
    auVar15[9] = -(*(char *)((longlong)plVar4 + 9) == s_USER_LOCATION_UN_00182dd0[9]);
    auVar15[10] = -(*(char *)((longlong)plVar4 + 10) == s_USER_LOCATION_UN_00182dd0[10]);
    auVar15[0xb] = -(*(char *)((longlong)plVar4 + 0xb) == s_USER_LOCATION_UN_00182dd0[0xb]);
    auVar15[0xc] = -(*(char *)((longlong)plVar4 + 0xc) == s_USER_LOCATION_UN_00182dd0[0xc]);
    auVar15[0xd] = -(*(char *)((longlong)plVar4 + 0xd) == s_USER_LOCATION_UN_00182dd0[0xd]);
    auVar15[0xe] = -(*(char *)((longlong)plVar4 + 0xe) == s_USER_LOCATION_UN_00182dd0[0xe]);
    auVar15[0xf] = -(*(char *)((longlong)plVar4 + 0xf) == s_USER_LOCATION_UN_00182dd0[0xf]);
LAB_00509b2e:
    auVar15 = auVar15 & auVar27;
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
LAB_00509c0c:
      auVar42._8_8_ = 0x1b;
      auVar42._0_8_ = "gemini_location_unsupported";
      return auVar42;
    }
LAB_00509c42:
    auVar43._8_8_ = 0x11;
    auVar43._0_8_ = "permission_denied";
    return auVar43;
  }
  uVar3 = 0x11;
  pcVar2 = "permission_denied";
  if (uVar5 != 0xffff) {
LAB_005097c0:
    auVar37._8_8_ = uVar3;
    auVar37._0_8_ = pcVar2;
    return auVar37;
  }
LAB_00509c7c:
  auVar44._8_8_ = 0x19;
  auVar44._0_8_ = "gemini_account_ineligible";
  return auVar44;
}


