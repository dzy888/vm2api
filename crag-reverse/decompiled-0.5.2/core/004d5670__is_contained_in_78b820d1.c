// 004d5670 is_contained_in

/* <&str as core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in */

undefined ** __rustcall
<&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
          (char *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  char *pcVar2;
  ushort uVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined3 uVar18;
  byte bVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  undefined8 in_RAX;
  undefined8 uVar23;
  longlong lVar24;
  undefined *puVar25;
  ulonglong uVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  ulonglong uVar29;
  undefined *puVar30;
  ulonglong uVar31;
  undefined *puVar32;
  undefined *puVar33;
  uint uVar34;
  longlong lVar35;
  char *pcVar36;
  undefined1 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  undefined1 auVar45 [16];
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  char cVar73;
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
  char cVar89;
  undefined1 auVar74 [16];
  undefined **ppuStack_180;
  undefined1 uStack_178;
  longlong lStack_170;
  ulonglong uStack_168;
  char *pcStack_160;
  char local_138;
  char cStack_137;
  char cStack_136;
  longlong local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_90;
  longlong local_88;
  undefined *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong local_50;
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
  
  puVar25 = (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (param_2 == 0) {
LAB_004d5d54:
    puVar25 = (undefined *)CONCAT71((int7)((ulonglong)puVar25 >> 8),1);
    goto LAB_004d5d56;
  }
  if (param_2 < param_4) {
    if (param_2 == 1) {
      if (0xf < param_4) {
        lVar24 = (*(code *)PTR_memchr_aligned_00799490)(*param_1,param_4);
        puVar25 = (undefined *)CONCAT71((int7)((ulonglong)lVar24 >> 8),lVar24 == 1);
        goto LAB_004d5d56;
      }
      uVar26 = 0;
      do {
        if (*(char *)(param_3 + uVar26) == *param_1) goto LAB_004d5d56;
        uVar26 = uVar26 + 1;
      } while (param_4 != uVar26);
    }
    else {
      if (param_2 < 0x21) {
        cVar20 = *param_1;
        if (param_2 == 2) {
          if (param_4 < 0x11) goto LAB_004d5790;
          auVar38 = pshuflw(ZEXT216(CONCAT11(cVar20,cVar20)),ZEXT216(CONCAT11(cVar20,cVar20)),0);
          auVar45._0_8_ = auVar38._0_8_;
          auVar45._8_4_ = auVar38._0_4_;
          auVar45._12_4_ = auVar38._4_4_;
          cVar46 = param_1[1];
          uVar29 = 1;
        }
        else {
          uVar26 = 0;
          if (3 < param_2) {
            uVar26 = param_2 - 4;
          }
          uVar31 = param_2;
          do {
            if (uVar31 <= uVar26) goto LAB_004d57b9;
            uVar29 = uVar31 - 1;
            if (param_2 <= uVar29) {
              ppuVar27 = &PTR_s__rustc_48a229ceaefd4985c50990b14_0078b458;
              (*(code *)PTR_panic_bounds_check_00799520)();
              puVar25 = PTR_write_00799bf0;
              if (ppuVar27 == (undefined **)0x0) {
                return (undefined **)0x0;
              }
              uStack_168 = param_4;
              pcStack_160 = param_1;
              goto LAB_004d5f39;
            }
            cVar46 = param_1[uVar31 - 1];
            uVar31 = uVar29;
          } while (cVar46 == cVar20);
          if (param_4 < param_2 + 0xf) {
LAB_004d5790:
            do {
              puVar25 = (undefined *)(*(code *)PTR_bcmp_00799020)();
              if ((int)puVar25 == 0) goto LAB_004d5d54;
              param_4 = param_4 - 1;
              puVar25 = (undefined *)0x0;
            } while (param_2 <= param_4);
            goto LAB_004d5d56;
          }
          auVar38 = pshuflw(ZEXT216(CONCAT11(cVar20,cVar20)),ZEXT216(CONCAT11(cVar20,cVar20)),0);
          auVar45._0_8_ = auVar38._0_8_;
          auVar45._8_4_ = auVar38._0_4_;
          auVar45._12_4_ = auVar38._4_4_;
        }
        local_c8 = param_2 - 1;
        auVar38 = pshuflw(ZEXT216(CONCAT11(cVar46,cVar46)),ZEXT216(CONCAT11(cVar46,cVar46)),0);
        local_d0 = param_1 + 1;
        cVar61 = auVar38[0];
        cVar62 = auVar38[1];
        cVar63 = auVar38[2];
        cVar64 = auVar38[3];
        cVar65 = auVar38[4];
        cVar66 = auVar38[5];
        cVar67 = auVar38[6];
        cVar68 = auVar38[7];
        cVar20 = auVar45[0];
        cVar46 = auVar45[1];
        cVar47 = auVar45[2];
        cVar48 = auVar45[3];
        cVar49 = auVar45[4];
        cVar50 = auVar45[5];
        cVar51 = auVar45[6];
        cVar52 = auVar45[7];
        cVar53 = auVar45[8];
        cVar54 = auVar45[9];
        cVar55 = auVar45[10];
        cVar56 = auVar45[0xb];
        cVar57 = auVar45[0xc];
        cVar58 = auVar45[0xd];
        cVar59 = auVar45[0xe];
        cVar60 = auVar45[0xf];
        local_d8 = (undefined *)param_4;
        local_e0 = param_3;
        local_50 = local_c8;
        if (param_2 + 0x3f < param_4) {
          lVar1 = param_3 + uVar29;
          lVar35 = 0;
          do {
            pcVar36 = (char *)(param_3 + lVar35);
            pcVar2 = (char *)(param_3 + 0x10 + lVar35);
            local_138 = *pcVar2;
            cStack_137 = pcVar2[1];
            cStack_136 = pcVar2[2];
            uVar18 = *(undefined3 *)pcVar2;
            cVar5 = pcVar2[3];
            cVar6 = pcVar2[4];
            cVar7 = pcVar2[5];
            cVar8 = pcVar2[6];
            cVar9 = pcVar2[7];
            cVar10 = pcVar2[8];
            cVar11 = pcVar2[9];
            cVar12 = pcVar2[10];
            cVar13 = pcVar2[0xb];
            cVar14 = pcVar2[0xc];
            cVar15 = pcVar2[0xd];
            cVar16 = pcVar2[0xe];
            cVar17 = pcVar2[0xf];
            auVar38 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar35);
            auVar45 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar35);
            auVar39[0] = -(*pcVar36 == cVar20);
            auVar39[1] = -(pcVar36[1] == cVar46);
            auVar39[2] = -(pcVar36[2] == cVar47);
            auVar39[3] = -(pcVar36[3] == cVar48);
            auVar39[4] = -(pcVar36[4] == cVar49);
            auVar39[5] = -(pcVar36[5] == cVar50);
            auVar39[6] = -(pcVar36[6] == cVar51);
            auVar39[7] = -(pcVar36[7] == cVar52);
            auVar39[8] = -(pcVar36[8] == cVar53);
            auVar39[9] = -(pcVar36[9] == cVar54);
            auVar39[10] = -(pcVar36[10] == cVar55);
            auVar39[0xb] = -(pcVar36[0xb] == cVar56);
            auVar39[0xc] = -(pcVar36[0xc] == cVar57);
            auVar39[0xd] = -(pcVar36[0xd] == cVar58);
            auVar39[0xe] = -(pcVar36[0xe] == cVar59);
            auVar39[0xf] = -(pcVar36[0xf] == cVar60);
            pcVar36 = (char *)(lVar1 + lVar35);
            pcVar2 = (char *)(lVar1 + 0x10 + lVar35);
            auVar69 = *(undefined1 (*) [16])(lVar1 + 0x20 + lVar35);
            auVar40 = *(undefined1 (*) [16])(lVar1 + 0x30 + lVar35);
            auVar42[0] = -(*pcVar36 == cVar61);
            auVar42[1] = -(pcVar36[1] == cVar62);
            auVar42[2] = -(pcVar36[2] == cVar63);
            auVar42[3] = -(pcVar36[3] == cVar64);
            auVar42[4] = -(pcVar36[4] == cVar65);
            auVar42[5] = -(pcVar36[5] == cVar66);
            auVar42[6] = -(pcVar36[6] == cVar67);
            auVar42[7] = -(pcVar36[7] == cVar68);
            auVar42[8] = -(pcVar36[8] == cVar61);
            auVar42[9] = -(pcVar36[9] == cVar62);
            auVar42[10] = -(pcVar36[10] == cVar63);
            auVar42[0xb] = -(pcVar36[0xb] == cVar64);
            auVar42[0xc] = -(pcVar36[0xc] == cVar65);
            auVar42[0xd] = -(pcVar36[0xd] == cVar66);
            auVar42[0xe] = -(pcVar36[0xe] == cVar67);
            auVar42[0xf] = -(pcVar36[0xf] == cVar68);
            auVar42 = auVar42 & auVar39;
            uVar3 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar42[0xf] >> 7) << 0xf;
            if (uVar3 == 0) {
              puVar25 = (undefined *)0x0;
              cVar73 = *pcVar2;
              cVar75 = pcVar2[1];
              cVar76 = pcVar2[2];
              cVar77 = pcVar2[3];
              cVar78 = pcVar2[4];
              cVar79 = pcVar2[5];
              cVar80 = pcVar2[6];
              cVar81 = pcVar2[7];
              cVar82 = pcVar2[8];
              cVar83 = pcVar2[9];
              cVar84 = pcVar2[10];
              cVar85 = pcVar2[0xb];
              cVar86 = pcVar2[0xc];
              cVar87 = pcVar2[0xd];
              cVar88 = pcVar2[0xe];
              cVar89 = pcVar2[0xf];
            }
            else {
              local_78 = auVar69;
              local_68 = auVar38;
              local_48 = *pcVar2;
              cStack_47 = pcVar2[1];
              cStack_46 = pcVar2[2];
              cStack_45 = pcVar2[3];
              cStack_44 = pcVar2[4];
              cStack_43 = pcVar2[5];
              cStack_42 = pcVar2[6];
              cStack_41 = pcVar2[7];
              cStack_40 = pcVar2[8];
              cStack_3f = pcVar2[9];
              cStack_3e = pcVar2[10];
              cStack_3d = pcVar2[0xb];
              cStack_3c = pcVar2[0xc];
              cStack_3b = pcVar2[0xd];
              cStack_3a = pcVar2[0xe];
              cStack_39 = pcVar2[0xf];
              puVar25 = (undefined *)
                        core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                  (&local_e0,lVar35,uVar3,0);
              local_138 = (char)uVar18;
              cStack_137 = (char)((uint3)uVar18 >> 8);
              cStack_136 = (char)((uint3)uVar18 >> 0x10);
              auVar38 = local_68;
              auVar69 = local_78;
              cVar73 = local_48;
              cVar75 = cStack_47;
              cVar76 = cStack_46;
              cVar77 = cStack_45;
              cVar78 = cStack_44;
              cVar79 = cStack_43;
              cVar80 = cStack_42;
              cVar81 = cStack_41;
              cVar82 = cStack_40;
              cVar83 = cStack_3f;
              cVar84 = cStack_3e;
              cVar85 = cStack_3d;
              cVar86 = cStack_3c;
              cVar87 = cStack_3b;
              cVar88 = cStack_3a;
              cVar89 = cStack_39;
            }
            auVar72[0] = -(local_138 == cVar20);
            auVar72[1] = -(cStack_137 == cVar46);
            auVar72[2] = -(cStack_136 == cVar47);
            auVar72[3] = -(cVar5 == cVar48);
            auVar72[4] = -(cVar6 == cVar49);
            auVar72[5] = -(cVar7 == cVar50);
            auVar72[6] = -(cVar8 == cVar51);
            auVar72[7] = -(cVar9 == cVar52);
            auVar72[8] = -(cVar10 == cVar53);
            auVar72[9] = -(cVar11 == cVar54);
            auVar72[10] = -(cVar12 == cVar55);
            auVar72[0xb] = -(cVar13 == cVar56);
            auVar72[0xc] = -(cVar14 == cVar57);
            auVar72[0xd] = -(cVar15 == cVar58);
            auVar72[0xe] = -(cVar16 == cVar59);
            auVar72[0xf] = -(cVar17 == cVar60);
            auVar74[0] = -(cVar73 == cVar61);
            auVar74[1] = -(cVar75 == cVar62);
            auVar74[2] = -(cVar76 == cVar63);
            auVar74[3] = -(cVar77 == cVar64);
            auVar74[4] = -(cVar78 == cVar65);
            auVar74[5] = -(cVar79 == cVar66);
            auVar74[6] = -(cVar80 == cVar67);
            auVar74[7] = -(cVar81 == cVar68);
            auVar74[8] = -(cVar82 == cVar61);
            auVar74[9] = -(cVar83 == cVar62);
            auVar74[10] = -(cVar84 == cVar63);
            auVar74[0xb] = -(cVar85 == cVar64);
            auVar74[0xc] = -(cVar86 == cVar65);
            auVar74[0xd] = -(cVar87 == cVar66);
            auVar74[0xe] = -(cVar88 == cVar67);
            auVar74[0xf] = -(cVar89 == cVar68);
            auVar74 = auVar74 & auVar72;
            uVar3 = (ushort)(SUB161(auVar74 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar74[0xf] >> 7) << 0xf;
            if (uVar3 != 0) {
              local_78 = auVar69;
              local_68 = auVar38;
              bVar19 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                 (&local_e0,lVar35 + 0x10,uVar3,(ulonglong)puVar25 & 0xff);
              puVar25 = (undefined *)(ulonglong)(byte)((byte)puVar25 | bVar19);
              auVar38 = local_68;
              auVar69 = local_78;
            }
            auVar71[0] = -(auVar38[0] == cVar20);
            auVar71[1] = -(auVar38[1] == cVar46);
            auVar71[2] = -(auVar38[2] == cVar47);
            auVar71[3] = -(auVar38[3] == cVar48);
            auVar71[4] = -(auVar38[4] == cVar49);
            auVar71[5] = -(auVar38[5] == cVar50);
            auVar71[6] = -(auVar38[6] == cVar51);
            auVar71[7] = -(auVar38[7] == cVar52);
            auVar71[8] = -(auVar38[8] == cVar53);
            auVar71[9] = -(auVar38[9] == cVar54);
            auVar71[10] = -(auVar38[10] == cVar55);
            auVar71[0xb] = -(auVar38[0xb] == cVar56);
            auVar71[0xc] = -(auVar38[0xc] == cVar57);
            auVar71[0xd] = -(auVar38[0xd] == cVar58);
            auVar71[0xe] = -(auVar38[0xe] == cVar59);
            auVar71[0xf] = -(auVar38[0xf] == cVar60);
            auVar38[0] = -(auVar69[0] == cVar61);
            auVar38[1] = -(auVar69[1] == cVar62);
            auVar38[2] = -(auVar69[2] == cVar63);
            auVar38[3] = -(auVar69[3] == cVar64);
            auVar38[4] = -(auVar69[4] == cVar65);
            auVar38[5] = -(auVar69[5] == cVar66);
            auVar38[6] = -(auVar69[6] == cVar67);
            auVar38[7] = -(auVar69[7] == cVar68);
            auVar38[8] = -(auVar69[8] == cVar61);
            auVar38[9] = -(auVar69[9] == cVar62);
            auVar38[10] = -(auVar69[10] == cVar63);
            auVar38[0xb] = -(auVar69[0xb] == cVar64);
            auVar38[0xc] = -(auVar69[0xc] == cVar65);
            auVar38[0xd] = -(auVar69[0xd] == cVar66);
            auVar38[0xe] = -(auVar69[0xe] == cVar67);
            auVar38[0xf] = -(auVar69[0xf] == cVar68);
            auVar38 = auVar38 & auVar71;
            uVar3 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar38[0xf] >> 7) << 0xf;
            if (uVar3 != 0) {
              bVar19 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                 (&local_e0,lVar35 + 0x20,uVar3,(ulonglong)puVar25 & 0xff);
              puVar25 = (undefined *)(ulonglong)(byte)((byte)puVar25 | bVar19);
            }
            auVar69[0] = -(auVar45[0] == cVar20);
            auVar69[1] = -(auVar45[1] == cVar46);
            auVar69[2] = -(auVar45[2] == cVar47);
            auVar69[3] = -(auVar45[3] == cVar48);
            auVar69[4] = -(auVar45[4] == cVar49);
            auVar69[5] = -(auVar45[5] == cVar50);
            auVar69[6] = -(auVar45[6] == cVar51);
            auVar69[7] = -(auVar45[7] == cVar52);
            auVar69[8] = -(auVar45[8] == cVar53);
            auVar69[9] = -(auVar45[9] == cVar54);
            auVar69[10] = -(auVar45[10] == cVar55);
            auVar69[0xb] = -(auVar45[0xb] == cVar56);
            auVar69[0xc] = -(auVar45[0xc] == cVar57);
            auVar69[0xd] = -(auVar45[0xd] == cVar58);
            auVar69[0xe] = -(auVar45[0xe] == cVar59);
            auVar69[0xf] = -(auVar45[0xf] == cVar60);
            auVar70[0] = -(auVar40[0] == cVar61);
            auVar70[1] = -(auVar40[1] == cVar62);
            auVar70[2] = -(auVar40[2] == cVar63);
            auVar70[3] = -(auVar40[3] == cVar64);
            auVar70[4] = -(auVar40[4] == cVar65);
            auVar70[5] = -(auVar40[5] == cVar66);
            auVar70[6] = -(auVar40[6] == cVar67);
            auVar70[7] = -(auVar40[7] == cVar68);
            auVar70[8] = -(auVar40[8] == cVar61);
            auVar70[9] = -(auVar40[9] == cVar62);
            auVar70[10] = -(auVar40[10] == cVar63);
            auVar70[0xb] = -(auVar40[0xb] == cVar64);
            auVar70[0xc] = -(auVar40[0xc] == cVar65);
            auVar70[0xd] = -(auVar40[0xd] == cVar66);
            auVar70[0xe] = -(auVar40[0xe] == cVar67);
            auVar70[0xf] = -(auVar40[0xf] == cVar68);
            auVar70 = auVar70 & auVar69;
            uVar3 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar70[0xf] >> 7) << 0xf;
            if (uVar3 != 0) {
              bVar19 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                 (&local_e0,lVar35 + 0x30,uVar3,(ulonglong)puVar25 & 0xff);
              puVar25 = (undefined *)(ulonglong)(byte)((byte)puVar25 | bVar19);
            }
            lVar24 = lVar35 + 0x40;
            if (param_4 <= param_2 + 0x7f + lVar35) break;
            lVar24 = lVar35 + 0x40;
            lVar35 = lVar24;
          } while ((char)puVar25 == '\0');
        }
        else {
          lVar24 = 0;
          puVar25 = (undefined *)0x0;
        }
        if ((param_2 + lVar24 + 0xf < param_4) && ((char)puVar25 == '\0')) {
          do {
            pcVar36 = (char *)(param_3 + lVar24);
            pcVar2 = (char *)(param_3 + uVar29 + lVar24);
            auVar40[0] = -(*pcVar36 == cVar20);
            auVar40[1] = -(pcVar36[1] == cVar46);
            auVar40[2] = -(pcVar36[2] == cVar47);
            auVar40[3] = -(pcVar36[3] == cVar48);
            auVar40[4] = -(pcVar36[4] == cVar49);
            auVar40[5] = -(pcVar36[5] == cVar50);
            auVar40[6] = -(pcVar36[6] == cVar51);
            auVar40[7] = -(pcVar36[7] == cVar52);
            auVar40[8] = -(pcVar36[8] == cVar53);
            auVar40[9] = -(pcVar36[9] == cVar54);
            auVar40[10] = -(pcVar36[10] == cVar55);
            auVar40[0xb] = -(pcVar36[0xb] == cVar56);
            auVar40[0xc] = -(pcVar36[0xc] == cVar57);
            auVar40[0xd] = -(pcVar36[0xd] == cVar58);
            auVar40[0xe] = -(pcVar36[0xe] == cVar59);
            auVar40[0xf] = -(pcVar36[0xf] == cVar60);
            auVar43[0] = -(*pcVar2 == cVar61);
            auVar43[1] = -(pcVar2[1] == cVar62);
            auVar43[2] = -(pcVar2[2] == cVar63);
            auVar43[3] = -(pcVar2[3] == cVar64);
            auVar43[4] = -(pcVar2[4] == cVar65);
            auVar43[5] = -(pcVar2[5] == cVar66);
            auVar43[6] = -(pcVar2[6] == cVar67);
            auVar43[7] = -(pcVar2[7] == cVar68);
            auVar43[8] = -(pcVar2[8] == cVar61);
            auVar43[9] = -(pcVar2[9] == cVar62);
            auVar43[10] = -(pcVar2[10] == cVar63);
            auVar43[0xb] = -(pcVar2[0xb] == cVar64);
            auVar43[0xc] = -(pcVar2[0xc] == cVar65);
            auVar43[0xd] = -(pcVar2[0xd] == cVar66);
            auVar43[0xe] = -(pcVar2[0xe] == cVar67);
            auVar43[0xf] = -(pcVar2[0xf] == cVar68);
            auVar43 = auVar43 & auVar40;
            uVar3 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
            if (uVar3 == 0) {
              puVar25 = (undefined *)0x0;
            }
            else {
              puVar25 = (undefined *)
                        core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                  (&local_e0,lVar24,uVar3,0);
            }
          } while ((param_2 + 0x1f + lVar24 < param_4) &&
                  (lVar24 = lVar24 + 0x10, (char)puVar25 == '\0'));
        }
        lVar24 = param_4 - local_50;
        pcVar36 = (char *)(param_3 + -0x10 + lVar24);
        pcVar2 = (char *)(uVar29 + param_3 + lVar24 + -0x10);
        auVar41[0] = -(*pcVar36 == cVar20);
        auVar41[1] = -(pcVar36[1] == cVar46);
        auVar41[2] = -(pcVar36[2] == cVar47);
        auVar41[3] = -(pcVar36[3] == cVar48);
        auVar41[4] = -(pcVar36[4] == cVar49);
        auVar41[5] = -(pcVar36[5] == cVar50);
        auVar41[6] = -(pcVar36[6] == cVar51);
        auVar41[7] = -(pcVar36[7] == cVar52);
        auVar41[8] = -(pcVar36[8] == cVar53);
        auVar41[9] = -(pcVar36[9] == cVar54);
        auVar41[10] = -(pcVar36[10] == cVar55);
        auVar41[0xb] = -(pcVar36[0xb] == cVar56);
        auVar41[0xc] = -(pcVar36[0xc] == cVar57);
        auVar41[0xd] = -(pcVar36[0xd] == cVar58);
        auVar41[0xe] = -(pcVar36[0xe] == cVar59);
        auVar41[0xf] = -(pcVar36[0xf] == cVar60);
        auVar44[0] = -(*pcVar2 == cVar61);
        auVar44[1] = -(pcVar2[1] == cVar62);
        auVar44[2] = -(pcVar2[2] == cVar63);
        auVar44[3] = -(pcVar2[3] == cVar64);
        auVar44[4] = -(pcVar2[4] == cVar65);
        auVar44[5] = -(pcVar2[5] == cVar66);
        auVar44[6] = -(pcVar2[6] == cVar67);
        auVar44[7] = -(pcVar2[7] == cVar68);
        auVar44[8] = -(pcVar2[8] == cVar61);
        auVar44[9] = -(pcVar2[9] == cVar62);
        auVar44[10] = -(pcVar2[10] == cVar63);
        auVar44[0xb] = -(pcVar2[0xb] == cVar64);
        auVar44[0xc] = -(pcVar2[0xc] == cVar65);
        auVar44[0xd] = -(pcVar2[0xd] == cVar66);
        auVar44[0xe] = -(pcVar2[0xe] == cVar67);
        auVar44[0xf] = -(pcVar2[0xf] == cVar68);
        auVar44 = auVar44 & auVar41;
        uVar3 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar44[0xf] >> 7) << 0xf;
        if (uVar3 != 0) {
          bVar19 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                             (&local_e0,lVar24 + -0x10,uVar3,(ulonglong)puVar25 & 0xff);
          puVar25 = (undefined *)(ulonglong)(byte)((byte)puVar25 | bVar19);
        }
        goto LAB_004d5d56;
      }
LAB_004d57b9:
      uVar26 = (*(code *)PTR_new_00799a18)(param_1,param_4,param_2);
      if ((char)local_e0 == '\0') {
        if (local_c8._2_1_ == '\0') {
          puVar25 = (undefined *)(local_c8 & 0xff);
          if (local_d8 == (undefined *)0x0) {
LAB_004d5d70:
            if (local_d8 == local_90) goto LAB_004d5d56;
            bVar19 = local_98[(longlong)local_d8];
            uVar22 = (uint)bVar19;
            puVar30 = puVar25;
            if ((char)bVar19 < '\0') {
              uVar21 = bVar19 & 0x1f;
              uVar22 = (byte)(local_98 + 1)[(longlong)local_d8] & 0x3f;
              if (bVar19 < 0xe0) goto LAB_004d5e42;
              uVar34 = (byte)(local_98 + 2)[(longlong)local_d8] & 0x3f | uVar22 << 6;
              if (bVar19 < 0xf0) {
                uVar26 = (ulonglong)(uVar21 << 0xc);
                uVar22 = uVar34 | uVar21 << 0xc;
              }
              else {
                uVar22 = (bVar19 & 7) << 0x12;
                uVar26 = (ulonglong)uVar22;
                uVar22 = (byte)(local_98 + 3)[(longlong)local_d8] & 0x3f | uVar34 << 6 | uVar22;
              }
            }
            goto LAB_004d5e56;
          }
          if (local_d8 < local_90) {
            uVar37 = local_98[(longlong)local_d8] == -0x40;
            if (-0x41 < (char)local_98[(longlong)local_d8]) goto LAB_004d5d70;
          }
          else {
            uVar37 = 0;
            if (local_d8 == local_90) goto LAB_004d5d70;
          }
          goto LAB_004d5e9e;
        }
      }
      else {
        puVar30 = local_80 + -1;
        if (local_a8 == (undefined *)0xffffffffffffffff) {
          puVar32 = local_b8 + (longlong)puVar30;
          if (puVar32 < local_90) {
            puVar33 = local_d8 + -1;
            if (puVar33 < local_80) {
LAB_004d5ced:
              if ((local_c0 >> ((ulonglong)(byte)local_98[(longlong)puVar32] & 0x3f) & 1) == 0) {
                local_b8 = local_b8 + (longlong)local_80;
              }
              else {
                lVar24 = -(longlong)local_b8;
                puVar25 = local_d8;
                do {
                  if (local_80 == puVar25) {
                    puVar25 = local_98 + -1 + (longlong)local_b8;
                    puVar32 = local_d8;
                    goto LAB_004d5d3a;
                  }
                  pcVar36 = puVar25 + local_88;
                  lVar24 = lVar24 + -1;
                  pcVar2 = local_98 + (longlong)local_b8 + (longlong)puVar25;
                  puVar25 = puVar25 + 1;
                } while (*pcVar36 == *pcVar2);
                local_b8 = (undefined *)-lVar24;
              }
              goto LAB_004d5ce2;
            }
            do {
              if ((local_c0 >> ((ulonglong)(byte)local_98[(longlong)puVar32] & 0x3f) & 1) == 0) {
                local_b8 = local_b8 + (longlong)local_80;
              }
              else {
                lVar24 = 0;
                puVar25 = local_b8;
                pcVar36 = local_d8 + local_88;
                do {
                  if (local_80 <= local_d8 + lVar24) {
                    puVar25 = (undefined *)CONCAT71((int7)((ulonglong)lVar24 >> 8),1);
                    local_b8 = local_d8;
                    if (local_d8 != (undefined *)0x0) goto LAB_004d5e35;
                    goto LAB_004d5d56;
                  }
                  cVar20 = *pcVar36;
                  local_b8 = puVar25 + 1;
                  pcVar36 = pcVar36 + 1;
                  lVar24 = lVar24 + 1;
                  pcVar2 = local_98 + (longlong)local_d8 + (longlong)puVar25;
                  puVar25 = local_b8;
                } while (cVar20 == *pcVar2);
              }
              puVar32 = local_b8 + (longlong)puVar30;
              puVar25 = (undefined *)0x0;
            } while (puVar32 < local_90);
            goto LAB_004d5d56;
          }
        }
        else {
          puVar32 = local_b8 + (longlong)puVar30;
          if (puVar32 < local_90) {
LAB_004d583b:
            if ((local_c0 >> ((ulonglong)(byte)local_98[(longlong)puVar32] & 0x3f) & 1) == 0) {
              local_b8 = local_b8 + (longlong)local_80;
            }
            else {
              puVar32 = local_d8;
              if (local_d8 < local_a8) {
                puVar32 = local_a8;
              }
              puVar25 = local_98 + (longlong)local_b8;
              do {
                puVar4 = local_d8;
                if (local_80 <= puVar32) goto LAB_004d58a0;
                puVar33 = puVar32 + 1;
                pcVar36 = puVar32 + local_88;
                pcVar2 = puVar25 + (longlong)puVar32;
                puVar32 = puVar33;
              } while (*pcVar36 == *pcVar2);
              local_b8 = puVar33 + ((longlong)local_b8 - (longlong)local_d8);
            }
            local_a8 = (undefined *)0x0;
            goto LAB_004d5884;
          }
        }
      }
    }
  }
  else if (param_2 == param_4) {
    uVar23 = (*(code *)PTR_bcmp_00799020)(param_4,param_2);
    puVar25 = (undefined *)CONCAT71((int7)((ulonglong)uVar23 >> 8),(int)uVar23 == 0);
    goto LAB_004d5d56;
  }
  puVar25 = (undefined *)0x0;
LAB_004d5d56:
  return (undefined **)((ulonglong)puVar25 & 0xffffffffffffff01);
LAB_004d5f39:
  ppuVar28 = ppuVar27;
  uVar26 = (*(code *)puVar25)();
  ppuStack_180 = ppuVar28;
  if ((uVar26 & 1) == 0) {
    if (ppuVar28 == (undefined **)0x0) {
      return (undefined **)anon_572fb51faa0db1e51baf8d00d92dd3e9_522_llvm_7677212527096675952;
    }
    if (ppuVar27 < ppuVar28) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&anon_572fb51faa0db1e51baf8d00d92dd3e9_524_llvm_7677212527096675952,ppuVar27);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                (&ppuStack_180,ppuVar27);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    ppuVar27 = (undefined **)((longlong)ppuVar27 - (longlong)ppuVar28);
    goto LAB_004d5f30;
  }
  switch((uint)ppuVar28 & 3) {
  case 0:
    cVar20 = *(char *)(ppuVar28 + 2);
    goto joined_r0x004d5f25;
  case 1:
    if (*(char *)((longlong)ppuVar28 + 0x1f) != '#') {
      return ppuVar28;
    }
    lStack_170 = (longlong)ppuVar28 + -1;
    uStack_178 = 3;
    (*(code *)PTR_drop_00799040)();
    break;
  case 2:
    lVar24 = (*(code *)PTR_get_os_functions_007992e0)();
    cVar20 = (**(code **)(lVar24 + 0x10))();
    if (cVar20 == '\0') {
      return ppuVar28;
    }
    break;
  case 3:
    cVar20 = (char)((ulonglong)ppuVar28 >> 0x20);
    if (0x2a < (ulonglong)ppuVar28 >> 0x20) {
      cVar20 = -1;
    }
joined_r0x004d5f25:
    if (cVar20 != '#') {
      return ppuVar28;
    }
  }
LAB_004d5f30:
  if (ppuVar27 == (undefined **)0x0) {
    return (undefined **)0x0;
  }
  goto LAB_004d5f39;
  while (pcVar2 = puVar32 + local_88 + -1, pcVar36 = puVar25 + (longlong)puVar32,
        puVar32 = puVar32 + -1, *pcVar2 == *pcVar36) {
LAB_004d5d3a:
    if (puVar32 == (undefined *)0x0) goto LAB_004d5d54;
  }
  local_b8 = local_b8 + local_c8;
LAB_004d5ce2:
  puVar32 = local_b8 + (longlong)puVar30;
  puVar25 = (undefined *)0x0;
  if (local_90 <= puVar32) goto LAB_004d5d56;
  goto LAB_004d5ced;
  while( true ) {
    if (local_80 <= puVar33) goto LAB_004d5e35;
    puVar4 = puVar33;
    if (puVar33[local_88] != puVar25[(longlong)puVar33]) break;
LAB_004d58a0:
    puVar33 = puVar4 + -1;
    if (puVar4 <= local_a8) goto LAB_004d5d54;
  }
  local_b8 = local_b8 + local_c8;
  local_a8 = local_80 + -local_c8;
LAB_004d5884:
  puVar32 = local_b8 + (longlong)puVar30;
  puVar25 = (undefined *)0x0;
  if (local_90 <= puVar32) goto LAB_004d5d56;
  goto LAB_004d583b;
LAB_004d5e35:
  uVar22 = (uint)local_b8;
  puVar25 = &DAT_0078af10;
  uVar21 = (*(code *)PTR_panic_bounds_check_00799520)();
  local_90 = local_98;
  local_d8 = puVar25;
  puVar25 = local_80;
  local_98 = puVar33;
LAB_004d5e42:
  uVar22 = uVar21 << 6 | uVar22;
  uVar26 = (ulonglong)uVar22;
  puVar30 = puVar25;
LAB_004d5e56:
  puVar25 = (undefined *)CONCAT71((int7)(uVar26 >> 8),1);
  if (((ulonglong)puVar30 & 1) != 0) goto LAB_004d5d56;
  lVar24 = 1;
  if ((0x7f < uVar22) && (lVar24 = 2, 0x7ff < uVar22)) {
    lVar24 = 4 - (ulonglong)(uVar22 < 0x10000);
  }
  local_d8 = local_d8 + lVar24;
  if (local_d8 == (undefined *)0x0) goto LAB_004d5d56;
  uVar37 = local_d8 == local_90;
  if (local_90 <= local_d8) goto LAB_004d5eae;
  uVar37 = local_98[(longlong)local_d8] == -0x40;
  if (-0x41 < (char)local_98[(longlong)local_d8]) goto LAB_004d5d56;
LAB_004d5e9e:
  do {
    puVar25 = (undefined *)(*(code *)PTR_slice_error_fail_00799408)();
LAB_004d5eae:
  } while (!(bool)uVar37);
  goto LAB_004d5d56;
}


