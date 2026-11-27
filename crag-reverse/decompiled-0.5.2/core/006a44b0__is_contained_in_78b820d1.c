// 006a44b0 is_contained_in

/* <&str as core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in */

ulonglong __rustcall
<&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
          (char *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  ushort uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *unaff_RBP;
  longlong lVar13;
  undefined *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  undefined1 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char cVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  undefined1 auVar29 [16];
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  char cVar55;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  undefined1 auVar56 [16];
  char cVar72;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  undefined1 auVar73 [16];
  longlong local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined *local_c8;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_a0;
  char *local_98;
  undefined *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  
  if (param_2 < param_4) {
    cVar28 = *param_1;
    local_60 = param_2 - 1;
    if (param_2 == 2) {
      if (param_4 < 0x11) {
LAB_006a4570:
        do {
          iVar7 = (*(code *)PTR_bcmp_00799020)();
          if (iVar7 == 0) goto LAB_006a4b14;
          param_4 = param_4 - 1;
        } while (param_2 <= param_4);
        goto LAB_006a4aa6;
      }
      auVar21 = pshuflw(ZEXT216(CONCAT11(cVar28,cVar28)),ZEXT216(CONCAT11(cVar28,cVar28)),0);
      auVar29._0_8_ = auVar21._0_8_;
      auVar29._8_4_ = auVar21._0_4_;
      auVar29._12_4_ = auVar21._4_4_;
      cVar10 = param_1[1];
      uVar16 = 1;
    }
    else {
      uVar9 = 0;
      if (3 < param_2) {
        uVar9 = param_2 - 4;
      }
      uVar5 = local_60;
      do {
        uVar16 = uVar5;
        if (uVar16 + 1 <= uVar9) {
          (*(code *)PTR_new_00799a18)(param_1,param_4,param_2);
          if ((char)local_f0 != '\0') {
            puVar11 = local_90 + -1;
            if (local_b8 != (undefined *)0xffffffffffffffff) {
              puVar12 = local_c8 + (longlong)puVar11;
              if (local_a0 <= puVar12) goto LAB_006a4aa6;
              goto LAB_006a4616;
            }
            puVar12 = local_c8 + (longlong)puVar11;
            if (local_a0 <= puVar12) goto LAB_006a4aa6;
            puVar14 = local_e8 + -1;
            if (puVar14 < local_90) {
              goto LAB_006a4ab8;
            }
            local_98 = local_98 + (longlong)local_e8;
            goto LAB_006a4ba7;
          }
          if (local_d8._2_1_ != '\0') goto LAB_006a4aa6;
          uVar9 = local_d8 & 0xff;
          if (local_e8 != (undefined *)0x0) {
            uVar20 = local_e8 == local_a0;
            if (local_e8 < local_a0) {
              uVar20 = local_a8[(longlong)local_e8] == -0x40;
              if ((char)local_a8[(longlong)local_e8] < -0x40) goto LAB_006a4c66;
            }
            else if (!(bool)uVar20) goto LAB_006a4c66;
          }
          if (local_e8 == local_a0) {
            unaff_RBP = (undefined *)(local_d8 & 0xff);
            goto LAB_006a4b17;
          }
          bVar6 = local_a8[(longlong)local_e8];
          uVar8 = (uint)bVar6;
          if (-1 < (char)bVar6) goto LAB_006a4c22;
          uVar15 = bVar6 & 0x1f;
          uVar8 = (byte)(local_a8 + 1)[(longlong)local_e8] & 0x3f;
          if (bVar6 < 0xe0) goto LAB_006a4c0c;
          uVar8 = (byte)(local_a8 + 2)[(longlong)local_e8] & 0x3f | uVar8 << 6;
          if (bVar6 < 0xf0) {
            uVar8 = uVar8 | uVar15 << 0xc;
          }
          else {
            uVar8 = (byte)(local_a8 + 3)[(longlong)local_e8] & 0x3f | uVar8 << 6 |
                    (bVar6 & 7) << 0x12;
          }
          goto LAB_006a4c22;
        }
        if (param_2 <= uVar16) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar16 + 1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00790d98);
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return uVar9;
        }
        cVar10 = param_1[uVar16];
        uVar5 = uVar16 - 1;
      } while (cVar10 == cVar28);
      if (param_4 < param_2 + 0xf) goto LAB_006a4570;
      auVar21 = pshuflw(ZEXT216(CONCAT11(cVar28,cVar28)),ZEXT216(CONCAT11(cVar28,cVar28)),0);
      auVar29._0_8_ = auVar21._0_8_;
      auVar29._8_4_ = auVar21._0_4_;
      auVar29._12_4_ = auVar21._4_4_;
    }
    auVar21 = pshuflw(ZEXT216(CONCAT11(cVar10,cVar10)),ZEXT216(CONCAT11(cVar10,cVar10)),0);
    local_e0 = param_1 + 1;
    cVar44 = auVar21[0];
    cVar45 = auVar21[1];
    cVar46 = auVar21[2];
    cVar47 = auVar21[3];
    cVar48 = auVar21[4];
    cVar49 = auVar21[5];
    cVar50 = auVar21[6];
    cVar51 = auVar21[7];
    cVar28 = auVar29[0];
    cVar10 = auVar29[1];
    cVar30 = auVar29[2];
    cVar31 = auVar29[3];
    cVar32 = auVar29[4];
    cVar33 = auVar29[5];
    cVar34 = auVar29[6];
    cVar35 = auVar29[7];
    cVar36 = auVar29[8];
    cVar37 = auVar29[9];
    cVar38 = auVar29[10];
    cVar39 = auVar29[0xb];
    cVar40 = auVar29[0xc];
    cVar41 = auVar29[0xd];
    cVar42 = auVar29[0xe];
    cVar43 = auVar29[0xf];
    local_e8 = (undefined *)param_4;
    local_f0 = param_3;
    local_d8 = local_60;
    if (param_2 + 0x3f < param_4) {
      lVar13 = uVar16 + param_3 + 0x30;
      lVar17 = 0;
      do {
        pcVar19 = (char *)(param_3 + lVar17);
        pcVar1 = (char *)(param_3 + 0x10 + lVar17);
        auVar21 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar17);
        auVar29 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar17);
        auVar22[0] = -(*pcVar19 == cVar28);
        auVar22[1] = -(pcVar19[1] == cVar10);
        auVar22[2] = -(pcVar19[2] == cVar30);
        auVar22[3] = -(pcVar19[3] == cVar31);
        auVar22[4] = -(pcVar19[4] == cVar32);
        auVar22[5] = -(pcVar19[5] == cVar33);
        auVar22[6] = -(pcVar19[6] == cVar34);
        auVar22[7] = -(pcVar19[7] == cVar35);
        auVar22[8] = -(pcVar19[8] == cVar36);
        auVar22[9] = -(pcVar19[9] == cVar37);
        auVar22[10] = -(pcVar19[10] == cVar38);
        auVar22[0xb] = -(pcVar19[0xb] == cVar39);
        auVar22[0xc] = -(pcVar19[0xc] == cVar40);
        auVar22[0xd] = -(pcVar19[0xd] == cVar41);
        auVar22[0xe] = -(pcVar19[0xe] == cVar42);
        auVar22[0xf] = -(pcVar19[0xf] == cVar43);
        pcVar19 = (char *)(lVar13 + -0x30 + lVar17);
        pcVar2 = (char *)(lVar13 + -0x20 + lVar17);
        auVar52 = *(undefined1 (*) [16])(lVar13 + -0x10 + lVar17);
        auVar23 = *(undefined1 (*) [16])(lVar13 + lVar17);
        auVar25[0] = -(*pcVar19 == cVar44);
        auVar25[1] = -(pcVar19[1] == cVar45);
        auVar25[2] = -(pcVar19[2] == cVar46);
        auVar25[3] = -(pcVar19[3] == cVar47);
        auVar25[4] = -(pcVar19[4] == cVar48);
        auVar25[5] = -(pcVar19[5] == cVar49);
        auVar25[6] = -(pcVar19[6] == cVar50);
        auVar25[7] = -(pcVar19[7] == cVar51);
        auVar25[8] = -(pcVar19[8] == cVar44);
        auVar25[9] = -(pcVar19[9] == cVar45);
        auVar25[10] = -(pcVar19[10] == cVar46);
        auVar25[0xb] = -(pcVar19[0xb] == cVar47);
        auVar25[0xc] = -(pcVar19[0xc] == cVar48);
        auVar25[0xd] = -(pcVar19[0xd] == cVar49);
        auVar25[0xe] = -(pcVar19[0xe] == cVar50);
        auVar25[0xf] = -(pcVar19[0xf] == cVar51);
        auVar25 = auVar25 & auVar22;
        uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
        if (uVar4 == 0) {
          unaff_RBP = (undefined *)0x0;
          cVar55 = *pcVar1;
          cVar57 = pcVar1[1];
          cVar58 = pcVar1[2];
          cVar59 = pcVar1[3];
          cVar60 = pcVar1[4];
          cVar61 = pcVar1[5];
          cVar62 = pcVar1[6];
          cVar63 = pcVar1[7];
          cVar64 = pcVar1[8];
          cVar65 = pcVar1[9];
          cVar66 = pcVar1[10];
          cVar67 = pcVar1[0xb];
          cVar68 = pcVar1[0xc];
          cVar69 = pcVar1[0xd];
          cVar70 = pcVar1[0xe];
          cVar71 = pcVar1[0xf];
          cVar72 = *pcVar2;
          cVar74 = pcVar2[1];
          cVar75 = pcVar2[2];
          cVar76 = pcVar2[3];
          cVar77 = pcVar2[4];
          cVar78 = pcVar2[5];
          cVar79 = pcVar2[6];
          cVar80 = pcVar2[7];
          cVar81 = pcVar2[8];
          cVar82 = pcVar2[9];
          cVar83 = pcVar2[10];
          cVar84 = pcVar2[0xb];
          cVar85 = pcVar2[0xc];
          cVar86 = pcVar2[0xd];
          cVar87 = pcVar2[0xe];
          cVar88 = pcVar2[0xf];
        }
        else {
          local_88 = auVar52;
          local_78 = auVar21;
          local_58 = *pcVar2;
          cStack_57 = pcVar2[1];
          cStack_56 = pcVar2[2];
          cStack_55 = pcVar2[3];
          cStack_54 = pcVar2[4];
          cStack_53 = pcVar2[5];
          cStack_52 = pcVar2[6];
          cStack_51 = pcVar2[7];
          cStack_50 = pcVar2[8];
          cStack_4f = pcVar2[9];
          cStack_4e = pcVar2[10];
          cStack_4d = pcVar2[0xb];
          cStack_4c = pcVar2[0xc];
          cStack_4b = pcVar2[0xd];
          cStack_4a = pcVar2[0xe];
          cStack_49 = pcVar2[0xf];
          local_48 = *pcVar1;
          cStack_47 = pcVar1[1];
          cStack_46 = pcVar1[2];
          cStack_45 = pcVar1[3];
          cStack_44 = pcVar1[4];
          cStack_43 = pcVar1[5];
          cStack_42 = pcVar1[6];
          cStack_41 = pcVar1[7];
          cStack_40 = pcVar1[8];
          cStack_3f = pcVar1[9];
          cStack_3e = pcVar1[10];
          cStack_3d = pcVar1[0xb];
          cStack_3c = pcVar1[0xc];
          cStack_3b = pcVar1[0xd];
          cStack_3a = pcVar1[0xe];
          cStack_39 = pcVar1[0xf];
          uVar8 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                            (&local_f0,lVar17,uVar4,0);
          lVar13 = uVar16 + 0x30 + param_3;
          unaff_RBP = (undefined *)(ulonglong)uVar8;
          auVar21 = local_78;
          auVar52 = local_88;
          cVar55 = local_48;
          cVar57 = cStack_47;
          cVar58 = cStack_46;
          cVar59 = cStack_45;
          cVar60 = cStack_44;
          cVar61 = cStack_43;
          cVar62 = cStack_42;
          cVar63 = cStack_41;
          cVar64 = cStack_40;
          cVar65 = cStack_3f;
          cVar66 = cStack_3e;
          cVar67 = cStack_3d;
          cVar68 = cStack_3c;
          cVar69 = cStack_3b;
          cVar70 = cStack_3a;
          cVar71 = cStack_39;
          cVar72 = local_58;
          cVar74 = cStack_57;
          cVar75 = cStack_56;
          cVar76 = cStack_55;
          cVar77 = cStack_54;
          cVar78 = cStack_53;
          cVar79 = cStack_52;
          cVar80 = cStack_51;
          cVar81 = cStack_50;
          cVar82 = cStack_4f;
          cVar83 = cStack_4e;
          cVar84 = cStack_4d;
          cVar85 = cStack_4c;
          cVar86 = cStack_4b;
          cVar87 = cStack_4a;
          cVar88 = cStack_49;
        }
        auVar56[0] = -(cVar55 == cVar28);
        auVar56[1] = -(cVar57 == cVar10);
        auVar56[2] = -(cVar58 == cVar30);
        auVar56[3] = -(cVar59 == cVar31);
        auVar56[4] = -(cVar60 == cVar32);
        auVar56[5] = -(cVar61 == cVar33);
        auVar56[6] = -(cVar62 == cVar34);
        auVar56[7] = -(cVar63 == cVar35);
        auVar56[8] = -(cVar64 == cVar36);
        auVar56[9] = -(cVar65 == cVar37);
        auVar56[10] = -(cVar66 == cVar38);
        auVar56[0xb] = -(cVar67 == cVar39);
        auVar56[0xc] = -(cVar68 == cVar40);
        auVar56[0xd] = -(cVar69 == cVar41);
        auVar56[0xe] = -(cVar70 == cVar42);
        auVar56[0xf] = -(cVar71 == cVar43);
        auVar73[0] = -(cVar72 == cVar44);
        auVar73[1] = -(cVar74 == cVar45);
        auVar73[2] = -(cVar75 == cVar46);
        auVar73[3] = -(cVar76 == cVar47);
        auVar73[4] = -(cVar77 == cVar48);
        auVar73[5] = -(cVar78 == cVar49);
        auVar73[6] = -(cVar79 == cVar50);
        auVar73[7] = -(cVar80 == cVar51);
        auVar73[8] = -(cVar81 == cVar44);
        auVar73[9] = -(cVar82 == cVar45);
        auVar73[10] = -(cVar83 == cVar46);
        auVar73[0xb] = -(cVar84 == cVar47);
        auVar73[0xc] = -(cVar85 == cVar48);
        auVar73[0xd] = -(cVar86 == cVar49);
        auVar73[0xe] = -(cVar87 == cVar50);
        auVar73[0xf] = -(cVar88 == cVar51);
        auVar73 = auVar73 & auVar56;
        uVar4 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar73[0xf] >> 7) << 0xf;
        if (uVar4 != 0) {
          local_88 = auVar52;
          local_78 = auVar21;
          bVar6 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                            (&local_f0,lVar17 + 0x10,uVar4,(ulonglong)unaff_RBP & 0xff);
          lVar13 = uVar16 + 0x30 + param_3;
          unaff_RBP = (undefined *)(ulonglong)(byte)((byte)unaff_RBP | bVar6);
          auVar21 = local_78;
          auVar52 = local_88;
        }
        auVar54[0] = -(auVar21[0] == cVar28);
        auVar54[1] = -(auVar21[1] == cVar10);
        auVar54[2] = -(auVar21[2] == cVar30);
        auVar54[3] = -(auVar21[3] == cVar31);
        auVar54[4] = -(auVar21[4] == cVar32);
        auVar54[5] = -(auVar21[5] == cVar33);
        auVar54[6] = -(auVar21[6] == cVar34);
        auVar54[7] = -(auVar21[7] == cVar35);
        auVar54[8] = -(auVar21[8] == cVar36);
        auVar54[9] = -(auVar21[9] == cVar37);
        auVar54[10] = -(auVar21[10] == cVar38);
        auVar54[0xb] = -(auVar21[0xb] == cVar39);
        auVar54[0xc] = -(auVar21[0xc] == cVar40);
        auVar54[0xd] = -(auVar21[0xd] == cVar41);
        auVar54[0xe] = -(auVar21[0xe] == cVar42);
        auVar54[0xf] = -(auVar21[0xf] == cVar43);
        auVar21[0] = -(auVar52[0] == cVar44);
        auVar21[1] = -(auVar52[1] == cVar45);
        auVar21[2] = -(auVar52[2] == cVar46);
        auVar21[3] = -(auVar52[3] == cVar47);
        auVar21[4] = -(auVar52[4] == cVar48);
        auVar21[5] = -(auVar52[5] == cVar49);
        auVar21[6] = -(auVar52[6] == cVar50);
        auVar21[7] = -(auVar52[7] == cVar51);
        auVar21[8] = -(auVar52[8] == cVar44);
        auVar21[9] = -(auVar52[9] == cVar45);
        auVar21[10] = -(auVar52[10] == cVar46);
        auVar21[0xb] = -(auVar52[0xb] == cVar47);
        auVar21[0xc] = -(auVar52[0xc] == cVar48);
        auVar21[0xd] = -(auVar52[0xd] == cVar49);
        auVar21[0xe] = -(auVar52[0xe] == cVar50);
        auVar21[0xf] = -(auVar52[0xf] == cVar51);
        auVar21 = auVar21 & auVar54;
        uVar4 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
        if (uVar4 != 0) {
          bVar6 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                            (&local_f0,lVar17 + 0x20,uVar4,(ulonglong)unaff_RBP & 0xff);
          lVar13 = uVar16 + param_3 + 0x30;
          unaff_RBP = (undefined *)(ulonglong)(byte)((byte)unaff_RBP | bVar6);
        }
        auVar52[0] = -(auVar29[0] == cVar28);
        auVar52[1] = -(auVar29[1] == cVar10);
        auVar52[2] = -(auVar29[2] == cVar30);
        auVar52[3] = -(auVar29[3] == cVar31);
        auVar52[4] = -(auVar29[4] == cVar32);
        auVar52[5] = -(auVar29[5] == cVar33);
        auVar52[6] = -(auVar29[6] == cVar34);
        auVar52[7] = -(auVar29[7] == cVar35);
        auVar52[8] = -(auVar29[8] == cVar36);
        auVar52[9] = -(auVar29[9] == cVar37);
        auVar52[10] = -(auVar29[10] == cVar38);
        auVar52[0xb] = -(auVar29[0xb] == cVar39);
        auVar52[0xc] = -(auVar29[0xc] == cVar40);
        auVar52[0xd] = -(auVar29[0xd] == cVar41);
        auVar52[0xe] = -(auVar29[0xe] == cVar42);
        auVar52[0xf] = -(auVar29[0xf] == cVar43);
        auVar53[0] = -(auVar23[0] == cVar44);
        auVar53[1] = -(auVar23[1] == cVar45);
        auVar53[2] = -(auVar23[2] == cVar46);
        auVar53[3] = -(auVar23[3] == cVar47);
        auVar53[4] = -(auVar23[4] == cVar48);
        auVar53[5] = -(auVar23[5] == cVar49);
        auVar53[6] = -(auVar23[6] == cVar50);
        auVar53[7] = -(auVar23[7] == cVar51);
        auVar53[8] = -(auVar23[8] == cVar44);
        auVar53[9] = -(auVar23[9] == cVar45);
        auVar53[10] = -(auVar23[10] == cVar46);
        auVar53[0xb] = -(auVar23[0xb] == cVar47);
        auVar53[0xc] = -(auVar23[0xc] == cVar48);
        auVar53[0xd] = -(auVar23[0xd] == cVar49);
        auVar53[0xe] = -(auVar23[0xe] == cVar50);
        auVar53[0xf] = -(auVar23[0xf] == cVar51);
        auVar53 = auVar53 & auVar52;
        uVar4 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar53[0xf] >> 7) << 0xf;
        if (uVar4 != 0) {
          bVar6 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                            (&local_f0,lVar17 + 0x30,uVar4,(ulonglong)unaff_RBP & 0xff);
          lVar13 = uVar16 + param_3 + 0x30;
          unaff_RBP = (undefined *)(ulonglong)(byte)((byte)unaff_RBP | bVar6);
        }
        lVar18 = lVar17 + 0x40;
      } while ((param_2 + 0x7f + lVar17 < param_4) &&
              (lVar18 = lVar17 + 0x40, lVar17 = lVar18, (char)unaff_RBP == '\0'));
    }
    else {
      lVar18 = 0;
      unaff_RBP = (undefined *)0x0;
    }
    if ((param_2 + lVar18 + 0xf < param_4) && ((char)unaff_RBP == '\0')) {
      do {
        pcVar19 = (char *)(param_3 + lVar18);
        pcVar1 = (char *)(param_3 + uVar16 + lVar18);
        auVar23[0] = -(*pcVar19 == cVar28);
        auVar23[1] = -(pcVar19[1] == cVar10);
        auVar23[2] = -(pcVar19[2] == cVar30);
        auVar23[3] = -(pcVar19[3] == cVar31);
        auVar23[4] = -(pcVar19[4] == cVar32);
        auVar23[5] = -(pcVar19[5] == cVar33);
        auVar23[6] = -(pcVar19[6] == cVar34);
        auVar23[7] = -(pcVar19[7] == cVar35);
        auVar23[8] = -(pcVar19[8] == cVar36);
        auVar23[9] = -(pcVar19[9] == cVar37);
        auVar23[10] = -(pcVar19[10] == cVar38);
        auVar23[0xb] = -(pcVar19[0xb] == cVar39);
        auVar23[0xc] = -(pcVar19[0xc] == cVar40);
        auVar23[0xd] = -(pcVar19[0xd] == cVar41);
        auVar23[0xe] = -(pcVar19[0xe] == cVar42);
        auVar23[0xf] = -(pcVar19[0xf] == cVar43);
        auVar26[0] = -(*pcVar1 == cVar44);
        auVar26[1] = -(pcVar1[1] == cVar45);
        auVar26[2] = -(pcVar1[2] == cVar46);
        auVar26[3] = -(pcVar1[3] == cVar47);
        auVar26[4] = -(pcVar1[4] == cVar48);
        auVar26[5] = -(pcVar1[5] == cVar49);
        auVar26[6] = -(pcVar1[6] == cVar50);
        auVar26[7] = -(pcVar1[7] == cVar51);
        auVar26[8] = -(pcVar1[8] == cVar44);
        auVar26[9] = -(pcVar1[9] == cVar45);
        auVar26[10] = -(pcVar1[10] == cVar46);
        auVar26[0xb] = -(pcVar1[0xb] == cVar47);
        auVar26[0xc] = -(pcVar1[0xc] == cVar48);
        auVar26[0xd] = -(pcVar1[0xd] == cVar49);
        auVar26[0xe] = -(pcVar1[0xe] == cVar50);
        auVar26[0xf] = -(pcVar1[0xf] == cVar51);
        auVar26 = auVar26 & auVar23;
        uVar4 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
        if (uVar4 == 0) {
          unaff_RBP = (undefined *)0x0;
        }
        else {
          uVar8 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                            (&local_f0,lVar18,uVar4,0);
          unaff_RBP = (undefined *)(ulonglong)uVar8;
        }
      } while ((param_2 + 0x1f + lVar18 < param_4) &&
              (lVar18 = lVar18 + 0x10, (char)unaff_RBP == '\0'));
    }
    lVar18 = param_4 - local_60;
    pcVar1 = (char *)(param_3 + -0x10 + lVar18);
    pcVar19 = (char *)(uVar16 + param_3 + lVar18 + -0x10);
    auVar24[0] = -(*pcVar1 == cVar28);
    auVar24[1] = -(pcVar1[1] == cVar10);
    auVar24[2] = -(pcVar1[2] == cVar30);
    auVar24[3] = -(pcVar1[3] == cVar31);
    auVar24[4] = -(pcVar1[4] == cVar32);
    auVar24[5] = -(pcVar1[5] == cVar33);
    auVar24[6] = -(pcVar1[6] == cVar34);
    auVar24[7] = -(pcVar1[7] == cVar35);
    auVar24[8] = -(pcVar1[8] == cVar36);
    auVar24[9] = -(pcVar1[9] == cVar37);
    auVar24[10] = -(pcVar1[10] == cVar38);
    auVar24[0xb] = -(pcVar1[0xb] == cVar39);
    auVar24[0xc] = -(pcVar1[0xc] == cVar40);
    auVar24[0xd] = -(pcVar1[0xd] == cVar41);
    auVar24[0xe] = -(pcVar1[0xe] == cVar42);
    auVar24[0xf] = -(pcVar1[0xf] == cVar43);
    auVar27[0] = -(*pcVar19 == cVar44);
    auVar27[1] = -(pcVar19[1] == cVar45);
    auVar27[2] = -(pcVar19[2] == cVar46);
    auVar27[3] = -(pcVar19[3] == cVar47);
    auVar27[4] = -(pcVar19[4] == cVar48);
    auVar27[5] = -(pcVar19[5] == cVar49);
    auVar27[6] = -(pcVar19[6] == cVar50);
    auVar27[7] = -(pcVar19[7] == cVar51);
    auVar27[8] = -(pcVar19[8] == cVar44);
    auVar27[9] = -(pcVar19[9] == cVar45);
    auVar27[10] = -(pcVar19[10] == cVar46);
    auVar27[0xb] = -(pcVar19[0xb] == cVar47);
    auVar27[0xc] = -(pcVar19[0xc] == cVar48);
    auVar27[0xd] = -(pcVar19[0xd] == cVar49);
    auVar27[0xe] = -(pcVar19[0xe] == cVar50);
    auVar27[0xf] = -(pcVar19[0xf] == cVar51);
    auVar27 = auVar27 & auVar24;
    uVar4 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      bVar6 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                        (&local_f0,lVar18 + -0x10,uVar4,(ulonglong)unaff_RBP & 0xff);
      unaff_RBP = (undefined *)(ulonglong)(byte)((byte)unaff_RBP | bVar6);
    }
  }
  else {
    if (param_2 == param_4) {
      iVar7 = (*(code *)PTR_bcmp_00799020)(param_4,param_2);
      unaff_RBP = (undefined *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar7 == 0);
      goto LAB_006a4b17;
    }
LAB_006a4aa6:
    unaff_RBP = (undefined *)0x0;
  }
  goto LAB_006a4b17;
  while( true ) {
    if (local_90 <= puVar14) goto LAB_006a4bff;
    unaff_RBP = (undefined *)0x0;
    puVar12 = puVar14;
    if (local_98[(longlong)puVar14] != (local_a8 + (longlong)local_c8)[(longlong)puVar14]) break;
LAB_006a4670:
    puVar14 = puVar12 + -1;
    if (puVar12 <= local_b8) goto LAB_006a4b14;
  }
  local_c8 = local_c8 + local_d8;
  local_b8 = local_90 + -local_d8;
  while( true ) {
    puVar12 = local_c8 + (longlong)puVar11;
    unaff_RBP = (undefined *)0x0;
    if (local_a0 <= puVar12) break;
LAB_006a4616:
    if ((local_d0 >> ((ulonglong)(byte)local_a8[(longlong)puVar12] & 0x3f) & 1) == 0) {
      local_c8 = local_c8 + (longlong)local_90;
    }
    else {
      puVar12 = local_e8;
      if (local_e8 < local_b8) {
        puVar12 = local_b8;
      }
      do {
        if (local_90 <= puVar12) {
          puVar12 = local_e8;
          goto LAB_006a4670;
        }
        unaff_RBP = puVar12 + 1;
        pcVar19 = local_98 + (longlong)puVar12;
        pcVar1 = local_a8 + (longlong)local_c8 + (longlong)puVar12;
        puVar12 = unaff_RBP;
      } while (*pcVar19 == *pcVar1);
      local_c8 = unaff_RBP + ((longlong)local_c8 - (longlong)local_e8);
    }
    local_b8 = (undefined *)0x0;
  }
  goto LAB_006a4b17;
  while (puVar14 = puVar12 + -1, unaff_RBP = (undefined *)0x0,
        pcVar19 = local_a8 + -1 + (longlong)local_c8 + (longlong)puVar12, puVar12 = puVar12 + -1,
        local_98[(longlong)puVar14] == *pcVar19) {
LAB_006a4afa:
    if (puVar12 == (undefined *)0x0) goto LAB_006a4b14;
  }
  local_c8 = local_c8 + local_d8;
  while( true ) {
    puVar12 = local_c8 + (longlong)puVar11;
    unaff_RBP = (undefined *)0x0;
    if (local_a0 <= puVar12) break;
LAB_006a4ab8:
    if ((local_d0 >> ((ulonglong)(byte)local_a8[(longlong)puVar12] & 0x3f) & 1) == 0) {
      local_c8 = local_c8 + (longlong)local_90;
    }
    else {
      lVar18 = -(longlong)local_c8;
      puVar12 = local_e8;
      do {
        if (local_90 == puVar12) {
          puVar12 = local_e8;
          goto LAB_006a4afa;
        }
        pcVar19 = local_98 + (longlong)puVar12;
        unaff_RBP = (undefined *)0x0;
        lVar18 = lVar18 + -1;
        pcVar1 = local_a8 + (longlong)local_c8 + (longlong)puVar12;
        puVar12 = puVar12 + 1;
      } while (*pcVar19 == *pcVar1);
      local_c8 = (undefined *)-lVar18;
    }
  }
  goto LAB_006a4b17;
LAB_006a4b14:
  unaff_RBP = (undefined *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  goto LAB_006a4b17;
LAB_006a4ba7:
  do {
    if ((local_d0 >> ((ulonglong)(byte)local_a8[(longlong)puVar12] & 0x3f) & 1) != 0) {
      lVar18 = 0;
      puVar12 = local_c8;
      pcVar19 = local_98;
      while (local_e8 + lVar18 < local_90) {
        cVar28 = *pcVar19;
        unaff_RBP = (undefined *)0x0;
        local_c8 = puVar12 + 1;
        pcVar19 = pcVar19 + 1;
        lVar18 = lVar18 + 1;
        pcVar1 = local_a8 + (longlong)local_e8 + (longlong)puVar12;
        puVar12 = local_c8;
        if (cVar28 != *pcVar1) goto LAB_006a4be0;
      }
      unaff_RBP = (undefined *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if (local_e8 == (undefined *)0x0) break;
LAB_006a4bff:
      uVar15 = (uint)local_98;
      uVar8 = (uint)local_d0;
      puVar12 = &DAT_007909f0;
      uVar9 = (*(code *)PTR_panic_bounds_check_00799520)();
      local_a0 = puVar11;
      local_e8 = puVar12;
      local_a8 = puVar14;
LAB_006a4c0c:
      uVar8 = uVar15 << 6 | uVar8;
LAB_006a4c22:
      unaff_RBP = (undefined *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if ((uVar9 & 1) == 0) {
        lVar18 = 1;
        if ((0x7f < uVar8) && (lVar18 = 2, 0x7ff < uVar8)) {
          lVar18 = 4 - (ulonglong)(uVar8 < 0x10000);
        }
        local_e8 = local_e8 + lVar18;
        if (local_e8 != (undefined *)0x0) {
          uVar20 = local_e8 == local_a0;
          if (local_a0 <= local_e8) goto LAB_006a4c76;
          uVar20 = local_a8[(longlong)local_e8] == -0x40;
          if ((char)local_a8[(longlong)local_e8] < -0x40) {
LAB_006a4c66:
            do {
              (*(code *)PTR_slice_error_fail_00799408)();
LAB_006a4c76:
            } while (!(bool)uVar20);
          }
        }
      }
      break;
    }
    local_c8 = local_c8 + (longlong)local_90;
LAB_006a4be0:
    puVar12 = local_c8 + (longlong)puVar11;
    unaff_RBP = (undefined *)0x0;
  } while (puVar12 < local_a0);
LAB_006a4b17:
  return (ulonglong)unaff_RBP & 0xffffff01;
}


