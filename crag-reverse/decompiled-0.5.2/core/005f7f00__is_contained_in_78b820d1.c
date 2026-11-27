// 005f7f00 is_contained_in

/* <&str as core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in */

bool __rustcall
<&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
          (byte *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  ushort uVar5;
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
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  undefined3 uVar35;
  byte bVar36;
  byte bVar37;
  undefined1 uVar38;
  int iVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong lVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  char cVar54;
  char cVar56;
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
  undefined1 auVar55 [16];
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  char local_148;
  char cStack_147;
  char cStack_146;
  longlong local_b0;
  ulonglong local_a8;
  byte *local_a0;
  longlong local_98;
  byte local_48 [24];
  
  if (param_2 == 0) {
    return true;
  }
  if (param_2 < param_4) {
    if (param_2 != 1) {
      if (0x20 < param_2) {
LAB_005f804c:
        (*(code *)PTR_new_00799a18)(param_1,param_4,param_2);
        <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
        ::next_match(local_48,&local_b0);
        return (bool)local_48[0];
      }
      bVar36 = *param_1;
      if (param_2 == 2) {
        if (0x10 < param_4) {
          auVar47 = pshuflw(ZEXT216(CONCAT11(bVar36,bVar36)),ZEXT216(CONCAT11(bVar36,bVar36)),0);
          auVar55._0_8_ = auVar47._0_8_;
          auVar55._8_4_ = auVar47._0_4_;
          auVar55._12_4_ = auVar47._4_4_;
          bVar37 = param_1[1];
          uVar43 = 1;
LAB_005f809b:
          lVar40 = param_2 - 1;
          auVar47 = pshuflw(ZEXT216(CONCAT11(bVar37,bVar37)),ZEXT216(CONCAT11(bVar37,bVar37)),0);
          local_a0 = param_1 + 1;
          cVar71 = auVar47[0];
          cVar72 = auVar47[1];
          cVar73 = auVar47[2];
          cVar74 = auVar47[3];
          cVar75 = auVar47[4];
          cVar76 = auVar47[5];
          cVar77 = auVar47[6];
          cVar78 = auVar47[7];
          cVar54 = auVar55[0];
          cVar56 = auVar55[1];
          cVar57 = auVar55[2];
          cVar58 = auVar55[3];
          cVar59 = auVar55[4];
          cVar60 = auVar55[5];
          cVar61 = auVar55[6];
          cVar62 = auVar55[7];
          cVar63 = auVar55[8];
          cVar64 = auVar55[9];
          cVar65 = auVar55[10];
          cVar66 = auVar55[0xb];
          cVar67 = auVar55[0xc];
          cVar68 = auVar55[0xd];
          cVar69 = auVar55[0xe];
          cVar70 = auVar55[0xf];
          local_b0 = param_3;
          local_a8 = param_4;
          local_98 = lVar40;
          if (param_2 + 0x3f < param_4) {
            lVar1 = param_3 + uVar43;
            lVar45 = 0;
            do {
              pcVar2 = (char *)(param_3 + lVar45);
              pcVar3 = (char *)(param_3 + 0x10 + lVar45);
              local_148 = *pcVar3;
              cStack_147 = pcVar3[1];
              cStack_146 = pcVar3[2];
              uVar35 = *(undefined3 *)pcVar3;
              cVar6 = pcVar3[3];
              cVar7 = pcVar3[4];
              cVar8 = pcVar3[5];
              cVar9 = pcVar3[6];
              cVar10 = pcVar3[7];
              cVar11 = pcVar3[8];
              cVar12 = pcVar3[9];
              cVar13 = pcVar3[10];
              cVar14 = pcVar3[0xb];
              cVar15 = pcVar3[0xc];
              cVar16 = pcVar3[0xd];
              cVar17 = pcVar3[0xe];
              cVar18 = pcVar3[0xf];
              auVar47 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar45);
              auVar55 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar45);
              auVar48[0] = -(*pcVar2 == cVar54);
              auVar48[1] = -(pcVar2[1] == cVar56);
              auVar48[2] = -(pcVar2[2] == cVar57);
              auVar48[3] = -(pcVar2[3] == cVar58);
              auVar48[4] = -(pcVar2[4] == cVar59);
              auVar48[5] = -(pcVar2[5] == cVar60);
              auVar48[6] = -(pcVar2[6] == cVar61);
              auVar48[7] = -(pcVar2[7] == cVar62);
              auVar48[8] = -(pcVar2[8] == cVar63);
              auVar48[9] = -(pcVar2[9] == cVar64);
              auVar48[10] = -(pcVar2[10] == cVar65);
              auVar48[0xb] = -(pcVar2[0xb] == cVar66);
              auVar48[0xc] = -(pcVar2[0xc] == cVar67);
              auVar48[0xd] = -(pcVar2[0xd] == cVar68);
              auVar48[0xe] = -(pcVar2[0xe] == cVar69);
              auVar48[0xf] = -(pcVar2[0xf] == cVar70);
              pcVar2 = (char *)(lVar1 + lVar45);
              pcVar3 = (char *)(lVar1 + 0x10 + lVar45);
              cVar19 = *pcVar3;
              cVar20 = pcVar3[1];
              cVar21 = pcVar3[2];
              cVar22 = pcVar3[3];
              cVar23 = pcVar3[4];
              cVar24 = pcVar3[5];
              cVar25 = pcVar3[6];
              cVar26 = pcVar3[7];
              cVar27 = pcVar3[8];
              cVar28 = pcVar3[9];
              cVar29 = pcVar3[10];
              cVar30 = pcVar3[0xb];
              cVar31 = pcVar3[0xc];
              cVar32 = pcVar3[0xd];
              cVar33 = pcVar3[0xe];
              cVar34 = pcVar3[0xf];
              auVar79 = *(undefined1 (*) [16])(lVar1 + 0x20 + lVar45);
              auVar49 = *(undefined1 (*) [16])(lVar1 + 0x30 + lVar45);
              auVar51[0] = -(*pcVar2 == cVar71);
              auVar51[1] = -(pcVar2[1] == cVar72);
              auVar51[2] = -(pcVar2[2] == cVar73);
              auVar51[3] = -(pcVar2[3] == cVar74);
              auVar51[4] = -(pcVar2[4] == cVar75);
              auVar51[5] = -(pcVar2[5] == cVar76);
              auVar51[6] = -(pcVar2[6] == cVar77);
              auVar51[7] = -(pcVar2[7] == cVar78);
              auVar51[8] = -(pcVar2[8] == cVar71);
              auVar51[9] = -(pcVar2[9] == cVar72);
              auVar51[10] = -(pcVar2[10] == cVar73);
              auVar51[0xb] = -(pcVar2[0xb] == cVar74);
              auVar51[0xc] = -(pcVar2[0xc] == cVar75);
              auVar51[0xd] = -(pcVar2[0xd] == cVar76);
              auVar51[0xe] = -(pcVar2[0xe] == cVar77);
              auVar51[0xf] = -(pcVar2[0xf] == cVar78);
              auVar51 = auVar51 & auVar48;
              uVar5 = (ushort)(SUB161(auVar51 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar51[0xf] >> 7) << 0xf;
              if (uVar5 == 0) {
                bVar36 = 0;
              }
              else {
                bVar36 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                   (&local_b0,lVar45,uVar5,0);
                local_148 = (char)uVar35;
                cStack_147 = (char)((uint3)uVar35 >> 8);
                cStack_146 = (char)((uint3)uVar35 >> 0x10);
              }
              auVar82[0] = -(local_148 == cVar54);
              auVar82[1] = -(cStack_147 == cVar56);
              auVar82[2] = -(cStack_146 == cVar57);
              auVar82[3] = -(cVar6 == cVar58);
              auVar82[4] = -(cVar7 == cVar59);
              auVar82[5] = -(cVar8 == cVar60);
              auVar82[6] = -(cVar9 == cVar61);
              auVar82[7] = -(cVar10 == cVar62);
              auVar82[8] = -(cVar11 == cVar63);
              auVar82[9] = -(cVar12 == cVar64);
              auVar82[10] = -(cVar13 == cVar65);
              auVar82[0xb] = -(cVar14 == cVar66);
              auVar82[0xc] = -(cVar15 == cVar67);
              auVar82[0xd] = -(cVar16 == cVar68);
              auVar82[0xe] = -(cVar17 == cVar69);
              auVar82[0xf] = -(cVar18 == cVar70);
              auVar83[0] = -(cVar19 == cVar71);
              auVar83[1] = -(cVar20 == cVar72);
              auVar83[2] = -(cVar21 == cVar73);
              auVar83[3] = -(cVar22 == cVar74);
              auVar83[4] = -(cVar23 == cVar75);
              auVar83[5] = -(cVar24 == cVar76);
              auVar83[6] = -(cVar25 == cVar77);
              auVar83[7] = -(cVar26 == cVar78);
              auVar83[8] = -(cVar27 == cVar71);
              auVar83[9] = -(cVar28 == cVar72);
              auVar83[10] = -(cVar29 == cVar73);
              auVar83[0xb] = -(cVar30 == cVar74);
              auVar83[0xc] = -(cVar31 == cVar75);
              auVar83[0xd] = -(cVar32 == cVar76);
              auVar83[0xe] = -(cVar33 == cVar77);
              auVar83[0xf] = -(cVar34 == cVar78);
              auVar83 = auVar83 & auVar82;
              uVar5 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar83[0xf] >> 7) << 0xf;
              if (uVar5 != 0) {
                bVar37 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                   (&local_b0,lVar45 + 0x10,uVar5,bVar36);
                bVar36 = bVar36 | bVar37;
              }
              auVar81[0] = -(auVar47[0] == cVar54);
              auVar81[1] = -(auVar47[1] == cVar56);
              auVar81[2] = -(auVar47[2] == cVar57);
              auVar81[3] = -(auVar47[3] == cVar58);
              auVar81[4] = -(auVar47[4] == cVar59);
              auVar81[5] = -(auVar47[5] == cVar60);
              auVar81[6] = -(auVar47[6] == cVar61);
              auVar81[7] = -(auVar47[7] == cVar62);
              auVar81[8] = -(auVar47[8] == cVar63);
              auVar81[9] = -(auVar47[9] == cVar64);
              auVar81[10] = -(auVar47[10] == cVar65);
              auVar81[0xb] = -(auVar47[0xb] == cVar66);
              auVar81[0xc] = -(auVar47[0xc] == cVar67);
              auVar81[0xd] = -(auVar47[0xd] == cVar68);
              auVar81[0xe] = -(auVar47[0xe] == cVar69);
              auVar81[0xf] = -(auVar47[0xf] == cVar70);
              auVar47[0] = -(auVar79[0] == cVar71);
              auVar47[1] = -(auVar79[1] == cVar72);
              auVar47[2] = -(auVar79[2] == cVar73);
              auVar47[3] = -(auVar79[3] == cVar74);
              auVar47[4] = -(auVar79[4] == cVar75);
              auVar47[5] = -(auVar79[5] == cVar76);
              auVar47[6] = -(auVar79[6] == cVar77);
              auVar47[7] = -(auVar79[7] == cVar78);
              auVar47[8] = -(auVar79[8] == cVar71);
              auVar47[9] = -(auVar79[9] == cVar72);
              auVar47[10] = -(auVar79[10] == cVar73);
              auVar47[0xb] = -(auVar79[0xb] == cVar74);
              auVar47[0xc] = -(auVar79[0xc] == cVar75);
              auVar47[0xd] = -(auVar79[0xd] == cVar76);
              auVar47[0xe] = -(auVar79[0xe] == cVar77);
              auVar47[0xf] = -(auVar79[0xf] == cVar78);
              auVar47 = auVar47 & auVar81;
              uVar5 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar47[0xf] >> 7) << 0xf;
              if (uVar5 != 0) {
                bVar37 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                   (&local_b0,lVar45 + 0x20,uVar5,bVar36);
                bVar36 = bVar36 | bVar37;
              }
              auVar79[0] = -(auVar55[0] == cVar54);
              auVar79[1] = -(auVar55[1] == cVar56);
              auVar79[2] = -(auVar55[2] == cVar57);
              auVar79[3] = -(auVar55[3] == cVar58);
              auVar79[4] = -(auVar55[4] == cVar59);
              auVar79[5] = -(auVar55[5] == cVar60);
              auVar79[6] = -(auVar55[6] == cVar61);
              auVar79[7] = -(auVar55[7] == cVar62);
              auVar79[8] = -(auVar55[8] == cVar63);
              auVar79[9] = -(auVar55[9] == cVar64);
              auVar79[10] = -(auVar55[10] == cVar65);
              auVar79[0xb] = -(auVar55[0xb] == cVar66);
              auVar79[0xc] = -(auVar55[0xc] == cVar67);
              auVar79[0xd] = -(auVar55[0xd] == cVar68);
              auVar79[0xe] = -(auVar55[0xe] == cVar69);
              auVar79[0xf] = -(auVar55[0xf] == cVar70);
              auVar80[0] = -(auVar49[0] == cVar71);
              auVar80[1] = -(auVar49[1] == cVar72);
              auVar80[2] = -(auVar49[2] == cVar73);
              auVar80[3] = -(auVar49[3] == cVar74);
              auVar80[4] = -(auVar49[4] == cVar75);
              auVar80[5] = -(auVar49[5] == cVar76);
              auVar80[6] = -(auVar49[6] == cVar77);
              auVar80[7] = -(auVar49[7] == cVar78);
              auVar80[8] = -(auVar49[8] == cVar71);
              auVar80[9] = -(auVar49[9] == cVar72);
              auVar80[10] = -(auVar49[10] == cVar73);
              auVar80[0xb] = -(auVar49[0xb] == cVar74);
              auVar80[0xc] = -(auVar49[0xc] == cVar75);
              auVar80[0xd] = -(auVar49[0xd] == cVar76);
              auVar80[0xe] = -(auVar49[0xe] == cVar77);
              auVar80[0xf] = -(auVar49[0xf] == cVar78);
              auVar80 = auVar80 & auVar79;
              uVar5 = (ushort)(SUB161(auVar80 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar80[0xf] >> 7) << 0xf;
              if (uVar5 != 0) {
                bVar37 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                   (&local_b0,lVar45 + 0x30,uVar5,bVar36);
                bVar36 = bVar36 | bVar37;
              }
              lVar46 = lVar45 + 0x40;
            } while ((param_2 + 0x7f + lVar45 < param_4) &&
                    (lVar46 = lVar45 + 0x40, lVar45 = lVar46, bVar36 == 0));
          }
          else {
            lVar46 = 0;
            bVar36 = 0;
          }
          if ((param_2 + lVar46 + 0xf < param_4) && (bVar36 == 0)) {
            do {
              pcVar2 = (char *)(param_3 + lVar46);
              pcVar3 = (char *)(param_3 + uVar43 + lVar46);
              auVar49[0] = -(*pcVar2 == cVar54);
              auVar49[1] = -(pcVar2[1] == cVar56);
              auVar49[2] = -(pcVar2[2] == cVar57);
              auVar49[3] = -(pcVar2[3] == cVar58);
              auVar49[4] = -(pcVar2[4] == cVar59);
              auVar49[5] = -(pcVar2[5] == cVar60);
              auVar49[6] = -(pcVar2[6] == cVar61);
              auVar49[7] = -(pcVar2[7] == cVar62);
              auVar49[8] = -(pcVar2[8] == cVar63);
              auVar49[9] = -(pcVar2[9] == cVar64);
              auVar49[10] = -(pcVar2[10] == cVar65);
              auVar49[0xb] = -(pcVar2[0xb] == cVar66);
              auVar49[0xc] = -(pcVar2[0xc] == cVar67);
              auVar49[0xd] = -(pcVar2[0xd] == cVar68);
              auVar49[0xe] = -(pcVar2[0xe] == cVar69);
              auVar49[0xf] = -(pcVar2[0xf] == cVar70);
              auVar52[0] = -(*pcVar3 == cVar71);
              auVar52[1] = -(pcVar3[1] == cVar72);
              auVar52[2] = -(pcVar3[2] == cVar73);
              auVar52[3] = -(pcVar3[3] == cVar74);
              auVar52[4] = -(pcVar3[4] == cVar75);
              auVar52[5] = -(pcVar3[5] == cVar76);
              auVar52[6] = -(pcVar3[6] == cVar77);
              auVar52[7] = -(pcVar3[7] == cVar78);
              auVar52[8] = -(pcVar3[8] == cVar71);
              auVar52[9] = -(pcVar3[9] == cVar72);
              auVar52[10] = -(pcVar3[10] == cVar73);
              auVar52[0xb] = -(pcVar3[0xb] == cVar74);
              auVar52[0xc] = -(pcVar3[0xc] == cVar75);
              auVar52[0xd] = -(pcVar3[0xd] == cVar76);
              auVar52[0xe] = -(pcVar3[0xe] == cVar77);
              auVar52[0xf] = -(pcVar3[0xf] == cVar78);
              auVar52 = auVar52 & auVar49;
              uVar5 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar52[0xf] >> 7) << 0xf;
              if (uVar5 == 0) {
                bVar36 = 0;
              }
              else {
                bVar36 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                   (&local_b0,lVar46,uVar5,0);
              }
            } while ((param_2 + 0x1f + lVar46 < param_4) && (lVar46 = lVar46 + 0x10, bVar36 == 0));
          }
          lVar40 = param_4 - lVar40;
          pcVar2 = (char *)(param_3 + -0x10 + lVar40);
          pcVar3 = (char *)(uVar43 + param_3 + lVar40 + -0x10);
          auVar50[0] = -(*pcVar2 == cVar54);
          auVar50[1] = -(pcVar2[1] == cVar56);
          auVar50[2] = -(pcVar2[2] == cVar57);
          auVar50[3] = -(pcVar2[3] == cVar58);
          auVar50[4] = -(pcVar2[4] == cVar59);
          auVar50[5] = -(pcVar2[5] == cVar60);
          auVar50[6] = -(pcVar2[6] == cVar61);
          auVar50[7] = -(pcVar2[7] == cVar62);
          auVar50[8] = -(pcVar2[8] == cVar63);
          auVar50[9] = -(pcVar2[9] == cVar64);
          auVar50[10] = -(pcVar2[10] == cVar65);
          auVar50[0xb] = -(pcVar2[0xb] == cVar66);
          auVar50[0xc] = -(pcVar2[0xc] == cVar67);
          auVar50[0xd] = -(pcVar2[0xd] == cVar68);
          auVar50[0xe] = -(pcVar2[0xe] == cVar69);
          auVar50[0xf] = -(pcVar2[0xf] == cVar70);
          auVar53[0] = -(*pcVar3 == cVar71);
          auVar53[1] = -(pcVar3[1] == cVar72);
          auVar53[2] = -(pcVar3[2] == cVar73);
          auVar53[3] = -(pcVar3[3] == cVar74);
          auVar53[4] = -(pcVar3[4] == cVar75);
          auVar53[5] = -(pcVar3[5] == cVar76);
          auVar53[6] = -(pcVar3[6] == cVar77);
          auVar53[7] = -(pcVar3[7] == cVar78);
          auVar53[8] = -(pcVar3[8] == cVar71);
          auVar53[9] = -(pcVar3[9] == cVar72);
          auVar53[10] = -(pcVar3[10] == cVar73);
          auVar53[0xb] = -(pcVar3[0xb] == cVar74);
          auVar53[0xc] = -(pcVar3[0xc] == cVar75);
          auVar53[0xd] = -(pcVar3[0xd] == cVar76);
          auVar53[0xe] = -(pcVar3[0xe] == cVar77);
          auVar53[0xf] = -(pcVar3[0xf] == cVar78);
          auVar53 = auVar53 & auVar50;
          uVar5 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
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
          if (uVar5 == 0) {
            return (bool)bVar36;
          }
          bVar37 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                             (&local_b0,lVar40 + -0x10,uVar5,bVar36);
          return (bool)(bVar36 | bVar37);
        }
      }
      else {
        uVar41 = param_2 - 4;
        uVar42 = 0;
        if (3 < param_2) {
          uVar42 = uVar41;
        }
        uVar44 = param_2;
        do {
          if (uVar44 <= uVar42) goto LAB_005f804c;
          uVar43 = uVar44 - 1;
          if (param_2 <= uVar43) {
            (*(code *)PTR_panic_bounds_check_00799520)
                      (uVar41,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078e2d8);
            pcVar4 = (code *)swi(3);
            uVar38 = (*pcVar4)();
            return (bool)uVar38;
          }
          bVar37 = param_1[uVar44 - 1];
          uVar41 = (ulonglong)bVar37;
          uVar44 = uVar43;
        } while (bVar37 == bVar36);
        if (param_2 + 0xf <= param_4) {
          auVar47 = pshuflw(ZEXT216(CONCAT11(bVar36,bVar36)),ZEXT216(CONCAT11(bVar36,bVar36)),0);
          auVar55._0_8_ = auVar47._0_8_;
          auVar55._8_4_ = auVar47._0_4_;
          auVar55._12_4_ = auVar47._4_4_;
          goto LAB_005f809b;
        }
      }
      do {
        iVar39 = (*(code *)PTR_bcmp_00799020)();
        if (iVar39 == 0) {
          return true;
        }
        param_4 = param_4 - 1;
      } while (param_2 <= param_4);
      return false;
    }
    if (0xf < param_4) {
      lVar40 = (*(code *)PTR_memchr_aligned_00799490)(*param_1,param_4);
      return lVar40 == 1;
    }
    uVar42 = 0;
    do {
      if (*(byte *)(param_3 + uVar42) == *param_1) {
        return true;
      }
      uVar42 = uVar42 + 1;
    } while (param_4 != uVar42);
  }
  else if (param_2 == param_4) {
    iVar39 = (*(code *)PTR_bcmp_00799020)(param_4,param_2);
    return iVar39 == 0;
  }
  return false;
}


