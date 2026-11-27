// 0016a810 decrypt_payload

/* craggemini[b21da2d71f2da7a3]::license::decrypt_payload */

longlong * __rustcall
craggemini[b21da2d71f2da7a3]::license::decrypt_payload
          (longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4,
          undefined8 param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  code *pcVar12;
  undefined *puVar13;
  char cVar14;
  int iVar15;
  char *pcVar16;
  longlong lVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar23 [16];
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char local_1068;
  undefined8 uStack_1067;
  char cStack_105f;
  char cStack_105e;
  char cStack_105d;
  char cStack_105c;
  char cStack_105b;
  char cStack_105a;
  char cStack_1059;
  char cStack_1058;
  char cStack_1057;
  char cStack_1056;
  char cStack_1055;
  char cStack_1054;
  char cStack_1053;
  char cStack_1052;
  char cStack_1051;
  undefined8 uStack_1050;
  undefined *local_1048;
  undefined8 local_1040;
  longlong *local_1038;
  longlong local_1030;
  longlong *local_1028;
  longlong local_1020;
  undefined8 local_1018;
  longlong local_1010;
  undefined8 local_1008;
  longlong local_1000;
  undefined8 local_ff8;
  longlong local_ff0;
  byte local_fe8;
  char cStack_fe7;
  undefined2 uStack_fe6;
  undefined4 uStack_fe4;
  undefined2 uStack_fe0;
  undefined6 uStack_fde;
  char cStack_fd8;
  char cStack_fd7;
  undefined6 uStack_fd6;
  char cStack_fd0;
  char cStack_fcf;
  undefined7 uStack_fce;
  undefined8 local_fc6;
  undefined4 uStack_fb3;
  undefined4 uStack_faf;
  undefined4 uStack_fab;
  char local_bf8;
  char cStack_bf7;
  char cStack_bf6;
  char cStack_bf5;
  char cStack_bf4;
  char cStack_bf3;
  char cStack_bf2;
  char cStack_bf1;
  char cStack_bf0;
  char cStack_bef;
  char cStack_bee;
  char cStack_bed;
  char cStack_bec;
  char cStack_beb;
  char cStack_bea;
  char local_be8;
  undefined7 uStack_be7;
  undefined8 uStack_bd7;
  undefined4 uStack_bc4;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined1 local_808 [2008];
  
  local_1030 = 0;
  decode_hash(&local_fe8,anon_c9247e0b0208fc9c8c019285c3882aec_92_llvm_5798562142159169407,0x40);
  if (local_fe8 == 1) {
    *(undefined1 *)(param_1 + 1) = 6;
    goto LAB_0016a8fa;
  }
  uStack_1067 = CONCAT26(uStack_fe0,CONCAT42(uStack_fe4,uStack_fe6));
  cStack_105f = (char)uStack_fde;
  cStack_105e = (char)((uint6)uStack_fde >> 8);
  cStack_105d = (char)((uint6)uStack_fde >> 0x10);
  cStack_105c = (char)((uint6)uStack_fde >> 0x18);
  cStack_105b = (char)((uint6)uStack_fde >> 0x20);
  cStack_105a = (char)((uint6)uStack_fde >> 0x28);
  cStack_1059 = cStack_fd8;
  uStack_1050 = CONCAT71(uStack_fce,cStack_fcf);
  cStack_1058 = cStack_fd7;
  cStack_1057 = (char)uStack_fd6;
  cStack_1056 = (char)((uint6)uStack_fd6 >> 8);
  cStack_1055 = (char)((uint6)uStack_fd6 >> 0x10);
  cStack_1054 = (char)((uint6)uStack_fd6 >> 0x18);
  cStack_1053 = (char)((uint6)uStack_fd6 >> 0x20);
  cStack_1052 = (char)((uint6)uStack_fd6 >> 0x28);
  cStack_1051 = cStack_fd0;
  local_1068 = cStack_fe7;
  pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)
                              (CONCAT17(cStack_fd0,CONCAT61(uStack_fd6,cStack_fd7)),param_2);
  if (((((pcVar16 != (char *)0x0) && (*pcVar16 == '\x01')) && (pcVar16[1] == '\x01')) &&
      ((pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(extraout_XMM0_Qa,param_2),
       pcVar16 != (char *)0x0 && (*pcVar16 == '\x03')))) &&
     ((((*(longlong *)(pcVar16 + 0x18) == 6 &&
        ((uVar19 = **(uint **)(pcVar16 + 0x10) ^ 0x6974616e,
         (short)(*(uint **)(pcVar16 + 0x10))[1] == 0x6576 && uVar19 == 0 &&
         (pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(uVar19,param_2),
         pcVar16 != (char *)0x0)))) && (*pcVar16 == '\x03')) &&
      ((((*(longlong *)(pcVar16 + 0x18) == 10 &&
         (uVar20 = **(ulonglong **)(pcVar16 + 0x10) ^ 0x696d656767617263,
         (short)(*(ulonglong **)(pcVar16 + 0x10))[1] == 0x696e && uVar20 == 0)) &&
        (lVar17 = (*(code *)PTR_index_into_00219dc0)(uVar20,param_2), lVar17 != 0)) &&
       (((pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(extraout_XMM0_Qa_00,lVar17),
         pcVar16 != (char *)0x0 && (*pcVar16 == '\x03')) && (*(longlong *)(pcVar16 + 0x18) == 0x11))
       )))))) {
    pcVar16 = *(char **)(pcVar16 + 0x10);
    auVar22[0] = -(*pcVar16 == DAT_00113d30);
    auVar22[1] = -(pcVar16[1] == UNK_00113d31);
    auVar22[2] = -(pcVar16[2] == UNK_00113d32);
    auVar22[3] = -(pcVar16[3] == UNK_00113d33);
    auVar22[4] = -(pcVar16[4] == UNK_00113d34);
    auVar22[5] = -(pcVar16[5] == UNK_00113d35);
    auVar22[6] = -(pcVar16[6] == UNK_00113d36);
    auVar22[7] = -(pcVar16[7] == UNK_00113d37);
    auVar22[8] = -(pcVar16[8] == UNK_00113d38);
    auVar22[9] = -(pcVar16[9] == UNK_00113d39);
    auVar22[10] = -(pcVar16[10] == UNK_00113d3a);
    auVar22[0xb] = -(pcVar16[0xb] == UNK_00113d3b);
    auVar22[0xc] = -(pcVar16[0xc] == UNK_00113d3c);
    auVar22[0xd] = -(pcVar16[0xd] == UNK_00113d3d);
    auVar22[0xe] = -(pcVar16[0xe] == UNK_00113d3e);
    auVar22[0xf] = -(pcVar16[0xf] == UNK_00113d3f);
    auVar25[0] = -(pcVar16[0x10] == DAT_00113ca0);
    auVar25[1] = -(UNK_00113ca1 == '\0');
    auVar25[2] = -(UNK_00113ca2 == '\0');
    auVar25[3] = -(UNK_00113ca3 == '\0');
    auVar25[4] = -(UNK_00113ca4 == '\0');
    auVar25[5] = -(UNK_00113ca5 == '\0');
    auVar25[6] = -(UNK_00113ca6 == '\0');
    auVar25[7] = -(UNK_00113ca7 == '\0');
    auVar25[8] = -(UNK_00113ca8 == '\0');
    auVar25[9] = -(UNK_00113ca9 == '\0');
    auVar25[10] = -(UNK_00113caa == '\0');
    auVar25[0xb] = -(UNK_00113cab == '\0');
    auVar25[0xc] = -(UNK_00113cac == '\0');
    auVar25[0xd] = -(UNK_00113cad == '\0');
    auVar25[0xe] = -(UNK_00113cae == '\0');
    auVar25[0xf] = -(UNK_00113caf == '\0');
    auVar25 = auVar25 & auVar22;
    if (((((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                   (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) &&
         (pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(), pcVar16 != (char *)0x0)) &&
        ((*pcVar16 == '\x03' &&
         (((*(longlong *)(pcVar16 + 0x18) == 10 &&
           ((short)(*(longlong **)(pcVar16 + 0x10))[1] == 0x696e &&
            **(longlong **)(pcVar16 + 0x10) == 0x696d656767617263)) &&
          (pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(extraout_XMM0_Qa_01,lVar17),
          pcVar16 != (char *)0x0)))))) && (*pcVar16 == '\x03')) {
      decode::<32:usize>(&local_fe8,*(undefined8 *)(pcVar16 + 0x10),*(undefined8 *)(pcVar16 + 0x18))
      ;
      if (local_fe8 == 1) {
        *(char *)(param_1 + 1) = cStack_fe7;
        goto LAB_0016a8fa;
      }
      uStack_be7 = (undefined7)(CONCAT17(cStack_fd0,CONCAT61(uStack_fd6,cStack_fd7)) >> 8);
      cStack_bf7 = (char)uStack_fe6;
      cStack_bf6 = (char)((ushort)uStack_fe6 >> 8);
      cStack_bf5 = (char)uStack_fe4;
      cStack_bf4 = (char)((uint)uStack_fe4 >> 8);
      cStack_bf3 = (char)((uint)uStack_fe4 >> 0x10);
      cStack_bf2 = (char)((uint)uStack_fe4 >> 0x18);
      cStack_bf1 = (char)uStack_fe0;
      cStack_bf0 = (char)((ushort)uStack_fe0 >> 8);
      cStack_bef = (char)uStack_fde;
      cStack_bee = (char)((uint6)uStack_fde >> 8);
      cStack_bed = (char)((uint6)uStack_fde >> 0x10);
      cStack_bec = (char)((uint6)uStack_fde >> 0x18);
      cStack_beb = (char)((uint6)uStack_fde >> 0x20);
      cStack_bea = (char)((uint6)uStack_fde >> 0x28);
      local_bf8 = cStack_fe7;
      auVar27[0] = -(local_1068 == cStack_fe7);
      auVar27[1] = -((char)uStack_1067 == cStack_bf7);
      auVar27[2] = -(uStack_1067._1_1_ == cStack_bf6);
      auVar27[3] = -(uStack_1067._2_1_ == cStack_bf5);
      auVar27[4] = -(uStack_1067._3_1_ == cStack_bf4);
      auVar27[5] = -(uStack_1067._4_1_ == cStack_bf3);
      auVar27[6] = -(uStack_1067._5_1_ == cStack_bf2);
      auVar27[7] = -(uStack_1067._6_1_ == cStack_bf1);
      auVar27[8] = -(uStack_1067._7_1_ == cStack_bf0);
      auVar27[9] = -(cStack_105f == cStack_bef);
      auVar27[10] = -(cStack_105e == cStack_bee);
      auVar27[0xb] = -(cStack_105d == cStack_bed);
      auVar27[0xc] = -(cStack_105c == cStack_bec);
      auVar27[0xd] = -(cStack_105b == cStack_beb);
      auVar27[0xe] = -(cStack_105a == cStack_bea);
      auVar27[0xf] = -(cStack_1059 == cStack_fd8);
      auVar23[0] = -(cStack_1058 == cStack_fd7);
      auVar23[1] = -(cStack_1057 == (char)uStack_fd6);
      auVar23[2] = -(cStack_1056 == (char)((uint6)uStack_fd6 >> 8));
      auVar23[3] = -(cStack_1055 == (char)((uint6)uStack_fd6 >> 0x10));
      auVar23[4] = -(cStack_1054 == (char)((uint6)uStack_fd6 >> 0x18));
      auVar23[5] = -(cStack_1053 == (char)((uint6)uStack_fd6 >> 0x20));
      auVar23[6] = -(cStack_1052 == (char)((uint6)uStack_fd6 >> 0x28));
      auVar23[7] = -(cStack_1051 == cStack_fd0);
      auVar23[8] = -((char)uStack_1050 == cStack_fcf);
      auVar23[9] = -(uStack_1050._1_1_ == (char)uStack_fce);
      auVar23[10] = -(uStack_1050._2_1_ == (char)((uint7)uStack_fce >> 8));
      auVar23[0xb] = -(uStack_1050._3_1_ == (char)((uint7)uStack_fce >> 0x10));
      auVar23[0xc] = -(uStack_1050._4_1_ == (char)((uint7)uStack_fce >> 0x18));
      auVar23[0xd] = -(uStack_1050._5_1_ == (char)((uint7)uStack_fce >> 0x20));
      auVar23[0xe] = -(uStack_1050._6_1_ == (char)((uint7)uStack_fce >> 0x28));
      auVar23[0xf] = -(uStack_1050._7_1_ == (char)((uint7)uStack_fce >> 0x30));
      auVar23 = auVar23 & auVar27;
      if ((((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) &&
          (pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(auVar23._0_8_,lVar17),
          pcVar16 != (char *)0x0)) && (*pcVar16 == '\x03')) {
        lVar17 = *(longlong *)(pcVar16 + 0x18);
        uVar21 = key_id(&local_fe8,&local_1068);
        if (lVar17 == CONCAT62(uStack_fd6,CONCAT11(cStack_fd7,cStack_fd8))) {
          iVar15 = (*(code *)PTR_bcmp_00219d38)(uVar21,lVar17);
          uVar21 = extraout_XMM0_Qa_02;
          if (iVar15 == 0) {
            if (CONCAT44(uStack_fe4,CONCAT22(uStack_fe6,CONCAT11(cStack_fe7,local_fe8))) != 0) {
              uVar21 = (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Qa_02,1);
            }
            lVar17 = (*(code *)PTR_index_into_00219dc0)(uVar21,param_2);
            if (((lVar17 != 0) &&
                (pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(extraout_XMM0_Qa_03,lVar17),
                pcVar16 != (char *)0x0)) && (*pcVar16 == '\x03')) {
              plVar2 = *(longlong **)(pcVar16 + 0x10);
              lVar3 = *(longlong *)(pcVar16 + 0x18);
              pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(plVar2,lVar17);
              if ((pcVar16 != (char *)0x0) && (*pcVar16 == '\x03')) {
                plVar4 = *(longlong **)(pcVar16 + 0x10);
                lVar5 = *(longlong *)(pcVar16 + 0x18);
                pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(plVar4,lVar17);
                if ((pcVar16 != (char *)0x0) && (*pcVar16 == '\x03')) {
                  uVar6 = *(undefined8 *)(pcVar16 + 0x10);
                  lVar7 = *(longlong *)(pcVar16 + 0x18);
                  pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(uVar6,lVar17);
                  if ((pcVar16 != (char *)0x0) && (*pcVar16 == '\x03')) {
                    uVar8 = *(undefined8 *)(pcVar16 + 0x10);
                    lVar9 = *(longlong *)(pcVar16 + 0x18);
                    pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(uVar8,lVar17);
                    if ((pcVar16 != (char *)0x0) && (*pcVar16 == '\x03')) {
                      uVar10 = *(undefined8 *)(pcVar16 + 0x10);
                      lVar11 = *(longlong *)(pcVar16 + 0x18);
                      local_1048 = &DAT_00117870;
                      local_1040 = 10;
                      if ((((lVar3 == 8) && (lVar5 == 0xb)) && (*plVar2 == 0x3145325647415243)) &&
                         (*(longlong *)((longlong)plVar4 + 3) == 0x6d63672d3635322d &&
                          *plVar4 == 0x2d3635322d736561)) {
                        local_1038 = plVar2;
                        local_1030 = lVar3;
                        local_1028 = plVar4;
                        local_1020 = lVar5;
                        local_1018 = uVar6;
                        local_1010 = lVar7;
                        local_1008 = uVar8;
                        local_1000 = lVar9;
                        local_ff8 = uVar10;
                        local_ff0 = lVar11;
                        pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(0,lVar17);
                        if (((pcVar16 != (char *)0x0) && (*pcVar16 == '\x03')) &&
                           (*(longlong *)(pcVar16 + 0x18) == 0x16)) {
                          pcVar16 = *(char **)(pcVar16 + 0x10);
                          auVar26[0] = -(pcVar16[6] == DAT_00113b90);
                          auVar26[1] = -(pcVar16[7] == UNK_00113b91);
                          auVar26[2] = -(pcVar16[8] == UNK_00113b92);
                          auVar26[3] = -(pcVar16[9] == UNK_00113b93);
                          auVar26[4] = -(pcVar16[10] == UNK_00113b94);
                          auVar26[5] = -(pcVar16[0xb] == UNK_00113b95);
                          auVar26[6] = -(pcVar16[0xc] == UNK_00113b96);
                          auVar26[7] = -(pcVar16[0xd] == UNK_00113b97);
                          auVar26[8] = -(pcVar16[0xe] == UNK_00113b98);
                          auVar26[9] = -(pcVar16[0xf] == UNK_00113b99);
                          auVar26[10] = -(pcVar16[0x10] == UNK_00113b9a);
                          auVar26[0xb] = -(pcVar16[0x11] == UNK_00113b9b);
                          auVar26[0xc] = -(pcVar16[0x12] == UNK_00113b9c);
                          auVar26[0xd] = -(pcVar16[0x13] == UNK_00113b9d);
                          auVar26[0xe] = -(pcVar16[0x14] == UNK_00113b9e);
                          auVar26[0xf] = -(pcVar16[0x15] == UNK_00113b9f);
                          auVar24[0] = -(*pcVar16 == DAT_00113c50);
                          auVar24[1] = -(pcVar16[1] == UNK_00113c51);
                          auVar24[2] = -(pcVar16[2] == UNK_00113c52);
                          auVar24[3] = -(pcVar16[3] == UNK_00113c53);
                          auVar24[4] = -(pcVar16[4] == UNK_00113c54);
                          auVar24[5] = -(pcVar16[5] == UNK_00113c55);
                          auVar24[6] = -(pcVar16[6] == UNK_00113c56);
                          auVar24[7] = -(pcVar16[7] == UNK_00113c57);
                          auVar24[8] = -(pcVar16[8] == UNK_00113c58);
                          auVar24[9] = -(pcVar16[9] == UNK_00113c59);
                          auVar24[10] = -(pcVar16[10] == UNK_00113c5a);
                          auVar24[0xb] = -(pcVar16[0xb] == UNK_00113c5b);
                          auVar24[0xc] = -(pcVar16[0xc] == UNK_00113c5c);
                          auVar24[0xd] = -(pcVar16[0xd] == UNK_00113c5d);
                          auVar24[0xe] = -(pcVar16[0xe] == UNK_00113c5e);
                          auVar24[0xf] = -(pcVar16[0xf] == UNK_00113c5f);
                          auVar24 = auVar24 & auVar26;
                          if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
                            uVar21 = key_id(&local_fe8,param_5);
                            if (lVar7 == CONCAT62(uStack_fd6,CONCAT11(cStack_fd7,cStack_fd8))) {
                              iVar15 = (*(code *)PTR_bcmp_00219d38)(uVar21,lVar7);
                              uVar21 = extraout_XMM0_Qa_04;
                              if (iVar15 == 0) {
                                if (CONCAT44(uStack_fe4,
                                             CONCAT22(uStack_fe6,CONCAT11(cStack_fe7,local_fe8))) !=
                                    0) {
                                  (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Qa_04,1);
                                }
                                decode_hash(&local_fe8,uVar6,lVar7);
                                if (((local_fe8 == 1) ||
                                    (decode_hash(&local_fe8,uVar8,lVar9), local_fe8 == 1)) ||
                                   (decode_hash(&local_fe8,uVar10,lVar11), local_fe8 == 1)) {
                                  *(char *)(param_1 + 1) = cStack_fe7;
                                  goto LAB_0016a8fa;
                                }
                                uVar21 = serde_json[dc3825464c436029]::ser::to_vec::
                                         <craggemini[b21da2d71f2da7a3]::license::PayloadStatement>
                                                   (&local_fe8,&local_1048);
                                lVar3 = CONCAT44(uStack_fe4,
                                                 CONCAT22(uStack_fe6,CONCAT11(cStack_fe7,local_fe8))
                                                );
                                if (lVar3 == -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::error::Error>
                                            (CONCAT62(uStack_fde,uStack_fe0));
                                  goto LAB_0016a8f6;
                                }
                                uVar6 = CONCAT62(uStack_fde,uStack_fe0);
                                uVar8 = CONCAT62(uStack_fd6,CONCAT11(cStack_fd7,cStack_fd8));
                                pcVar16 = (char *)(*(code *)PTR_index_into_00219dc0)(uVar21,lVar17);
                                uVar21 = extraout_XMM0_Qa_05;
                                if ((pcVar16 == (char *)0x0) || (*pcVar16 != '\x03')) {
LAB_0016b0b7:
                                  *(undefined1 *)(param_1 + 1) = 3;
                                  *param_1 = -1;
                                }
                                else {
                                  uVar21 = decode::<64:usize>(&local_fe8,
                                                              *(undefined8 *)(pcVar16 + 0x10),
                                                              *(undefined8 *)(pcVar16 + 0x18));
                                  cVar14 = cStack_fe7;
                                  if (local_fe8 != 1) {
                                    uStack_be7 = CONCAT16(cStack_fd0,uStack_fd6);
                                    uStack_bc4 = uStack_fb3;
                                    uStack_bc0 = uStack_faf;
                                    uStack_bbc = uStack_fab;
                                    uStack_bd7 = local_fc6;
                                    cStack_bf7 = (char)uStack_fe6;
                                    cStack_bf6 = (char)((ushort)uStack_fe6 >> 8);
                                    cStack_bf5 = (char)uStack_fe4;
                                    cStack_bf4 = (char)((uint)uStack_fe4 >> 8);
                                    cStack_bf3 = (char)((uint)uStack_fe4 >> 0x10);
                                    cStack_bf2 = (char)((uint)uStack_fe4 >> 0x18);
                                    cStack_bf1 = (char)uStack_fe0;
                                    cStack_bf0 = (char)((ushort)uStack_fe0 >> 8);
                                    cStack_bef = (char)uStack_fde;
                                    cStack_bee = (char)((uint6)uStack_fde >> 8);
                                    cStack_bed = (char)((uint6)uStack_fde >> 0x10);
                                    cStack_bec = (char)((uint6)uStack_fde >> 0x18);
                                    cStack_beb = (char)((uint6)uStack_fde >> 0x20);
                                    cStack_bea = (char)((uint6)uStack_fde >> 0x28);
                                    local_be8 = cStack_fd7;
                                    local_bf8 = cStack_fe7;
                                    cVar14 = verify_signature(&local_1068,"CRAG-PAYLOAD-V1",0x10,
                                                              uVar6,uVar8,&local_bf8);
                                    uVar21 = extraout_XMM0_Qa_06;
                                    if (cVar14 == -1) {
                                      if ((0x23 < param_4) && (*param_3 == 0x3145325647415243)) {
                                        <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                                        ::digest::<&[u8]>(&local_fe8,param_3,param_4);
                                        uVar21 = hex(&local_bf8,&local_fe8,0x20);
                                        if (CONCAT71(uStack_be7,local_be8) == lVar11) {
                                          iVar15 = (*(code *)PTR_bcmp_00219d38)(uVar21,lVar11);
                                          uVar21 = extraout_XMM0_Qa_07;
                                          if (iVar15 == 0) {
                                            if (CONCAT17(cStack_bf1,
                                                         CONCAT16(cStack_bf2,
                                                                  CONCAT15(cStack_bf3,
                                                                           CONCAT14(cStack_bf4,
                                                                                    CONCAT13(
                                                  cStack_bf5,
                                                  CONCAT12(cStack_bf6,CONCAT11(cStack_bf7,local_bf8)
                                                          )))))) != 0) {
                                              (*(code *)PTR___rust_dealloc_00219c40)
                                                        (extraout_XMM0_Qa_07,1);
                                            }
                                            uVar20 = param_4 - 0x24;
                                            uVar21 = <alloc[12e961f32105355]::raw_vec::RawVecInner>
                                                     ::try_allocate_in(&local_fe8,uVar20,0,1,1);
                                            lVar17 = CONCAT62(uStack_fde,uStack_fe0);
                                            if (CONCAT22(uStack_fe6,CONCAT11(cStack_fe7,local_fe8))
                                                == 1) {
                                              (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
                                              pcVar12 = (code *)invalidInstructionException();
                                              (*pcVar12)();
                                            }
                                            puVar18 = (undefined1 *)
                                                      CONCAT62(uStack_fd6,
                                                               CONCAT11(cStack_fd7,cStack_fd8));
                                            if (uVar20 != 0) {
                                              (*(code *)PTR_memcpy_00219c60)(uVar21,uVar20);
                                            }
                                            uVar21 = 
                                                  <aes_gcm[5f8529cb003b2bf0]::AesGcm<aes[8e0128500682d16e]::autodetect::Aes256,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_crypto_common[3c47e24a51feb738]::KeyInit>
                                                  ::new_from_slice(&local_fe8,param_5,0x20);
                                            puVar13 = PTR_memcpy_00219c60;
                                            if ((local_fe8 & 1) == 0) {
                                              uVar21 = (*(code *)PTR_memcpy_00219c60)(uVar21,0x3e0);
                                              uVar21 = (*(code *)puVar13)(uVar21,0x3e0);
                                              (*(code *)puVar13)(uVar21,0x3e0);
                                              cVar14 = 
                                                  <aes_gcm[5f8529cb003b2bf0]::AesGcm<aes[8e0128500682d16e]::autodetect::Aes256,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_aead[feaa57d69515bc75]::AeadInPlace>
                                                  ::decrypt_in_place_detached
                                                            (local_808,param_3 + 1,
                                                             "CRAG-GEMINI-PAYLOAD-V1",0x17,puVar18,
                                                             uVar20,(longlong)param_3 + 0x14);
                                              if (cVar14 == '\0') {
                                                <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                                                ::digest::<&alloc[12e961f32105355]::vec::Vec<u8>>
                                                          (&local_fe8,puVar18,uVar20,
                                                           *PTR_STORAGE_00219dc8);
                                                uVar21 = hex(&local_bf8,&local_fe8,0x20);
                                                if (CONCAT71(uStack_be7,local_be8) == lVar9) {
                                                  iVar15 = (*(code *)PTR_bcmp_00219d38)
                                                                     (uVar21,lVar9);
                                                  uVar21 = extraout_XMM0_Qa_08;
                                                  if (iVar15 == 0) {
                                                    if (CONCAT17(cStack_bf1,
                                                                 CONCAT16(cStack_bf2,
                                                                          CONCAT15(cStack_bf3,
                                                                                   CONCAT14(
                                                  cStack_bf4,
                                                  CONCAT13(cStack_bf5,
                                                           CONCAT12(cStack_bf6,
                                                                    CONCAT11(cStack_bf7,local_bf8)))
                                                  )))) != 0) {
                                                    uVar21 = (*(code *)PTR___rust_dealloc_00219c40)
                                                                       (extraout_XMM0_Qa_08,1);
                                                  }
                                                  *param_1 = lVar17;
                                                  param_1[1] = (longlong)puVar18;
                                                  param_1[2] = uVar20;
                                                  goto LAB_0016b3ca;
                                                  }
                                                }
                                                if (CONCAT17(cStack_bf1,
                                                             CONCAT16(cStack_bf2,
                                                                      CONCAT15(cStack_bf3,
                                                                               CONCAT14(cStack_bf4,
                                                                                        CONCAT13(
                                                  cStack_bf5,
                                                  CONCAT12(cStack_bf6,CONCAT11(cStack_bf7,local_bf8)
                                                          )))))) != 0) {
                                                  uVar21 = (*(code *)PTR___rust_dealloc_00219c40)
                                                                     (uVar21,1);
                                                }
                                                puVar1 = puVar18 + uVar20;
                                                uVar21 = (*(code *)PTR_memset_00219d00)
                                                                   (uVar21,lVar17 - uVar20);
                                                if (uVar20 != 0) {
                                                  uVar20 = uVar20 & 7;
                                                  if (uVar20 != 0) {
                                                    do {
                                                      *puVar18 = 0;
                                                      puVar18 = puVar18 + 1;
                                                      uVar20 = uVar20 - 1;
                                                    } while (uVar20 != 0);
                                                  }
                                                  if (6 < param_4 - 0x25) {
                                                    do {
                                                      *puVar18 = 0;
                                                      puVar18[1] = 0;
                                                      puVar18[2] = 0;
                                                      puVar18[3] = 0;
                                                      puVar18[4] = 0;
                                                      puVar18[5] = 0;
                                                      puVar18[6] = 0;
                                                      puVar18[7] = 0;
                                                      puVar18 = puVar18 + 8;
                                                    } while (puVar18 != puVar1);
                                                  }
                                                }
                                              }
                                              else {
                                                puVar1 = puVar18 + uVar20;
                                                uVar21 = (*(code *)PTR_memset_00219d00)
                                                                   (*PTR_STORAGE_00219dc8,
                                                                    lVar17 - uVar20);
                                                if (uVar20 != 0) {
                                                  uVar20 = uVar20 & 7;
                                                  if (uVar20 != 0) {
                                                    do {
                                                      *puVar18 = 0;
                                                      puVar18 = puVar18 + 1;
                                                      uVar20 = uVar20 - 1;
                                                    } while (uVar20 != 0);
                                                  }
                                                  if (6 < param_4 - 0x25) {
                                                    do {
                                                      *puVar18 = 0;
                                                      puVar18[1] = 0;
                                                      puVar18[2] = 0;
                                                      puVar18[3] = 0;
                                                      puVar18[4] = 0;
                                                      puVar18[5] = 0;
                                                      puVar18[6] = 0;
                                                      puVar18[7] = 0;
                                                      puVar18 = puVar18 + 8;
                                                    } while (puVar18 != puVar1);
                                                  }
                                                }
                                              }
                                            }
                                            *(undefined1 *)(param_1 + 1) = 3;
                                            *param_1 = -1;
                                            if (lVar17 != 0) {
                                              uVar21 = (*(code *)PTR___rust_dealloc_00219c40)
                                                                 (uVar21,1);
                                            }
                                            goto LAB_0016b3ca;
                                          }
                                        }
                                        if (CONCAT17(cStack_bf1,
                                                     CONCAT16(cStack_bf2,
                                                              CONCAT15(cStack_bf3,
                                                                       CONCAT14(cStack_bf4,
                                                                                CONCAT13(cStack_bf5,
                                                                                         CONCAT12(
                                                  cStack_bf6,CONCAT11(cStack_bf7,local_bf8))))))) !=
                                            0) {
                                          uVar21 = (*(code *)PTR___rust_dealloc_00219c40)(uVar21,1);
                                        }
                                      }
                                      goto LAB_0016b0b7;
                                    }
                                  }
                                  *(char *)(param_1 + 1) = cVar14;
                                  *param_1 = -1;
                                }
LAB_0016b3ca:
                                if (lVar3 == 0) {
                                  return param_1;
                                }
                                (*(code *)PTR___rust_dealloc_00219c40)(uVar21,1);
                                return param_1;
                              }
                            }
                            goto LAB_0016ab5e;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_0016a8f6;
          }
        }
LAB_0016ab5e:
        if (CONCAT44(uStack_fe4,CONCAT22(uStack_fe6,CONCAT11(cStack_fe7,local_fe8))) != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar21,1);
        }
      }
    }
  }
LAB_0016a8f6:
  *(undefined1 *)(param_1 + 1) = 3;
LAB_0016a8fa:
  *param_1 = -1;
  return param_1;
}


