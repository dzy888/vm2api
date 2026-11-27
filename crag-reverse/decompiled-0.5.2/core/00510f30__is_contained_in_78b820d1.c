// 00510f30 is_contained_in

/* <&str as core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in */

bool __rustcall
<&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
          (char *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  char *pcVar1;
  code *pcVar2;
  ushort uVar3;
  char cVar4;
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
  char cVar35;
  undefined *puVar36;
  byte bVar37;
  byte bVar38;
  undefined1 uVar39;
  int iVar40;
  char *pcVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  char cVar54;
  char cVar55;
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
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  longlong local_b0;
  ulonglong local_a8;
  char *local_a0;
  longlong local_98;
  byte local_48 [24];
  
  puVar36 = PTR_bcmp_00799020;
  if (param_2 < param_4) {
    cVar54 = *param_1;
    lVar44 = 0;
    lVar43 = param_3;
    pcVar41 = param_1;
    do {
      lVar42 = lVar43;
      pcVar41 = pcVar41 + -1;
      if (param_2 + lVar44 <= param_2 - 4) {
        (*(code *)PTR_new_00799a18)(param_1,param_4,param_2);
        <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
        ::next_match(local_48,&local_b0);
        return (bool)local_48[0];
      }
      if (param_2 <= (param_2 + lVar44) - 1) {
        (*(code *)PTR_panic_bounds_check_00799520)
                  (param_2 - 4,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078c860);
        pcVar2 = (code *)swi(3);
        uVar39 = (*pcVar2)();
        return (bool)uVar39;
      }
      cVar55 = pcVar41[param_2];
      lVar43 = lVar42 + -1;
      lVar44 = lVar44 + -1;
    } while (cVar55 == cVar54);
    if (param_2 + 0xf <= param_4) {
      auVar46 = pshuflw(ZEXT216(CONCAT11(cVar54,cVar54)),ZEXT216(CONCAT11(cVar54,cVar54)),0);
      auVar47 = pshuflw(ZEXT216(CONCAT11(cVar55,cVar55)),ZEXT216(CONCAT11(cVar55,cVar55)),0);
      local_a0 = param_1 + 1;
      local_98 = param_2 - 1;
      cVar54 = auVar46[0];
      cVar55 = auVar46[1];
      cVar56 = auVar46[2];
      cVar57 = auVar46[3];
      cVar58 = auVar46[4];
      cVar59 = auVar46[5];
      cVar60 = auVar46[6];
      cVar61 = auVar46[7];
      cVar62 = auVar47[0];
      cVar63 = auVar47[1];
      cVar64 = auVar47[2];
      cVar65 = auVar47[3];
      cVar66 = auVar47[4];
      cVar67 = auVar47[5];
      cVar68 = auVar47[6];
      cVar69 = auVar47[7];
      local_b0 = param_3;
      local_a8 = param_4;
      if (param_2 + 0x3f < param_4) {
        lVar45 = 0;
        do {
          lVar44 = param_2 + lVar45;
          pcVar1 = (char *)(param_3 + lVar45);
          pcVar41 = (char *)(param_3 + 0x10 + lVar45);
          cVar4 = *pcVar41;
          cVar5 = pcVar41[1];
          cVar6 = pcVar41[2];
          cVar7 = pcVar41[3];
          cVar8 = pcVar41[4];
          cVar9 = pcVar41[5];
          cVar10 = pcVar41[6];
          cVar11 = pcVar41[7];
          cVar12 = pcVar41[8];
          cVar13 = pcVar41[9];
          cVar14 = pcVar41[10];
          cVar15 = pcVar41[0xb];
          cVar16 = pcVar41[0xc];
          cVar17 = pcVar41[0xd];
          cVar18 = pcVar41[0xe];
          cVar19 = pcVar41[0xf];
          auVar46 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar45);
          auVar47 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar45);
          auVar48[0] = -(*pcVar1 == cVar54);
          auVar48[1] = -(pcVar1[1] == cVar55);
          auVar48[2] = -(pcVar1[2] == cVar56);
          auVar48[3] = -(pcVar1[3] == cVar57);
          auVar48[4] = -(pcVar1[4] == cVar58);
          auVar48[5] = -(pcVar1[5] == cVar59);
          auVar48[6] = -(pcVar1[6] == cVar60);
          auVar48[7] = -(pcVar1[7] == cVar61);
          auVar48[8] = -(pcVar1[8] == cVar54);
          auVar48[9] = -(pcVar1[9] == cVar55);
          auVar48[10] = -(pcVar1[10] == cVar56);
          auVar48[0xb] = -(pcVar1[0xb] == cVar57);
          auVar48[0xc] = -(pcVar1[0xc] == cVar58);
          auVar48[0xd] = -(pcVar1[0xd] == cVar59);
          auVar48[0xe] = -(pcVar1[0xe] == cVar60);
          auVar48[0xf] = -(pcVar1[0xf] == cVar61);
          pcVar41 = (char *)(lVar43 + lVar44);
          pcVar1 = (char *)(lVar42 + 0xf + lVar44);
          cVar20 = *pcVar1;
          cVar21 = pcVar1[1];
          cVar22 = pcVar1[2];
          cVar23 = pcVar1[3];
          cVar24 = pcVar1[4];
          cVar25 = pcVar1[5];
          cVar26 = pcVar1[6];
          cVar27 = pcVar1[7];
          cVar28 = pcVar1[8];
          cVar29 = pcVar1[9];
          cVar30 = pcVar1[10];
          cVar31 = pcVar1[0xb];
          cVar32 = pcVar1[0xc];
          cVar33 = pcVar1[0xd];
          cVar34 = pcVar1[0xe];
          cVar35 = pcVar1[0xf];
          auVar70 = *(undefined1 (*) [16])(lVar42 + 0x1f + lVar44);
          auVar49 = *(undefined1 (*) [16])(lVar42 + 0x2f + lVar44);
          auVar51[0] = -(*pcVar41 == cVar62);
          auVar51[1] = -(pcVar41[1] == cVar63);
          auVar51[2] = -(pcVar41[2] == cVar64);
          auVar51[3] = -(pcVar41[3] == cVar65);
          auVar51[4] = -(pcVar41[4] == cVar66);
          auVar51[5] = -(pcVar41[5] == cVar67);
          auVar51[6] = -(pcVar41[6] == cVar68);
          auVar51[7] = -(pcVar41[7] == cVar69);
          auVar51[8] = -(pcVar41[8] == cVar62);
          auVar51[9] = -(pcVar41[9] == cVar63);
          auVar51[10] = -(pcVar41[10] == cVar64);
          auVar51[0xb] = -(pcVar41[0xb] == cVar65);
          auVar51[0xc] = -(pcVar41[0xc] == cVar66);
          auVar51[0xd] = -(pcVar41[0xd] == cVar67);
          auVar51[0xe] = -(pcVar41[0xe] == cVar68);
          auVar51[0xf] = -(pcVar41[0xf] == cVar69);
          auVar51 = auVar51 & auVar48;
          uVar3 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
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
          if (uVar3 == 0) {
            bVar37 = 0;
          }
          else {
            bVar37 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_b0,lVar45,uVar3,0);
          }
          auVar72[0] = -(cVar4 == cVar54);
          auVar72[1] = -(cVar5 == cVar55);
          auVar72[2] = -(cVar6 == cVar56);
          auVar72[3] = -(cVar7 == cVar57);
          auVar72[4] = -(cVar8 == cVar58);
          auVar72[5] = -(cVar9 == cVar59);
          auVar72[6] = -(cVar10 == cVar60);
          auVar72[7] = -(cVar11 == cVar61);
          auVar72[8] = -(cVar12 == cVar54);
          auVar72[9] = -(cVar13 == cVar55);
          auVar72[10] = -(cVar14 == cVar56);
          auVar72[0xb] = -(cVar15 == cVar57);
          auVar72[0xc] = -(cVar16 == cVar58);
          auVar72[0xd] = -(cVar17 == cVar59);
          auVar72[0xe] = -(cVar18 == cVar60);
          auVar72[0xf] = -(cVar19 == cVar61);
          auVar73[0] = -(cVar20 == cVar62);
          auVar73[1] = -(cVar21 == cVar63);
          auVar73[2] = -(cVar22 == cVar64);
          auVar73[3] = -(cVar23 == cVar65);
          auVar73[4] = -(cVar24 == cVar66);
          auVar73[5] = -(cVar25 == cVar67);
          auVar73[6] = -(cVar26 == cVar68);
          auVar73[7] = -(cVar27 == cVar69);
          auVar73[8] = -(cVar28 == cVar62);
          auVar73[9] = -(cVar29 == cVar63);
          auVar73[10] = -(cVar30 == cVar64);
          auVar73[0xb] = -(cVar31 == cVar65);
          auVar73[0xc] = -(cVar32 == cVar66);
          auVar73[0xd] = -(cVar33 == cVar67);
          auVar73[0xe] = -(cVar34 == cVar68);
          auVar73[0xf] = -(cVar35 == cVar69);
          auVar73 = auVar73 & auVar72;
          uVar3 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
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
          if (uVar3 != 0) {
            bVar38 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_b0,lVar45 + 0x10,uVar3,bVar37);
            bVar37 = bVar37 | bVar38;
          }
          auVar71[0] = -(auVar46[0] == cVar54);
          auVar71[1] = -(auVar46[1] == cVar55);
          auVar71[2] = -(auVar46[2] == cVar56);
          auVar71[3] = -(auVar46[3] == cVar57);
          auVar71[4] = -(auVar46[4] == cVar58);
          auVar71[5] = -(auVar46[5] == cVar59);
          auVar71[6] = -(auVar46[6] == cVar60);
          auVar71[7] = -(auVar46[7] == cVar61);
          auVar71[8] = -(auVar46[8] == cVar54);
          auVar71[9] = -(auVar46[9] == cVar55);
          auVar71[10] = -(auVar46[10] == cVar56);
          auVar71[0xb] = -(auVar46[0xb] == cVar57);
          auVar71[0xc] = -(auVar46[0xc] == cVar58);
          auVar71[0xd] = -(auVar46[0xd] == cVar59);
          auVar71[0xe] = -(auVar46[0xe] == cVar60);
          auVar71[0xf] = -(auVar46[0xf] == cVar61);
          auVar46[0] = -(auVar70[0] == cVar62);
          auVar46[1] = -(auVar70[1] == cVar63);
          auVar46[2] = -(auVar70[2] == cVar64);
          auVar46[3] = -(auVar70[3] == cVar65);
          auVar46[4] = -(auVar70[4] == cVar66);
          auVar46[5] = -(auVar70[5] == cVar67);
          auVar46[6] = -(auVar70[6] == cVar68);
          auVar46[7] = -(auVar70[7] == cVar69);
          auVar46[8] = -(auVar70[8] == cVar62);
          auVar46[9] = -(auVar70[9] == cVar63);
          auVar46[10] = -(auVar70[10] == cVar64);
          auVar46[0xb] = -(auVar70[0xb] == cVar65);
          auVar46[0xc] = -(auVar70[0xc] == cVar66);
          auVar46[0xd] = -(auVar70[0xd] == cVar67);
          auVar46[0xe] = -(auVar70[0xe] == cVar68);
          auVar46[0xf] = -(auVar70[0xf] == cVar69);
          auVar46 = auVar46 & auVar71;
          uVar3 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar46[0xf] >> 7) << 0xf;
          if (uVar3 != 0) {
            bVar38 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_b0,lVar45 + 0x20,uVar3,bVar37);
            bVar37 = bVar37 | bVar38;
          }
          auVar70[0] = -(auVar47[0] == cVar54);
          auVar70[1] = -(auVar47[1] == cVar55);
          auVar70[2] = -(auVar47[2] == cVar56);
          auVar70[3] = -(auVar47[3] == cVar57);
          auVar70[4] = -(auVar47[4] == cVar58);
          auVar70[5] = -(auVar47[5] == cVar59);
          auVar70[6] = -(auVar47[6] == cVar60);
          auVar70[7] = -(auVar47[7] == cVar61);
          auVar70[8] = -(auVar47[8] == cVar54);
          auVar70[9] = -(auVar47[9] == cVar55);
          auVar70[10] = -(auVar47[10] == cVar56);
          auVar70[0xb] = -(auVar47[0xb] == cVar57);
          auVar70[0xc] = -(auVar47[0xc] == cVar58);
          auVar70[0xd] = -(auVar47[0xd] == cVar59);
          auVar70[0xe] = -(auVar47[0xe] == cVar60);
          auVar70[0xf] = -(auVar47[0xf] == cVar61);
          auVar47[0] = -(auVar49[0] == cVar62);
          auVar47[1] = -(auVar49[1] == cVar63);
          auVar47[2] = -(auVar49[2] == cVar64);
          auVar47[3] = -(auVar49[3] == cVar65);
          auVar47[4] = -(auVar49[4] == cVar66);
          auVar47[5] = -(auVar49[5] == cVar67);
          auVar47[6] = -(auVar49[6] == cVar68);
          auVar47[7] = -(auVar49[7] == cVar69);
          auVar47[8] = -(auVar49[8] == cVar62);
          auVar47[9] = -(auVar49[9] == cVar63);
          auVar47[10] = -(auVar49[10] == cVar64);
          auVar47[0xb] = -(auVar49[0xb] == cVar65);
          auVar47[0xc] = -(auVar49[0xc] == cVar66);
          auVar47[0xd] = -(auVar49[0xd] == cVar67);
          auVar47[0xe] = -(auVar49[0xe] == cVar68);
          auVar47[0xf] = -(auVar49[0xf] == cVar69);
          auVar47 = auVar47 & auVar70;
          uVar3 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
          if (uVar3 != 0) {
            bVar38 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_b0,lVar45 + 0x30,uVar3,bVar37);
            bVar37 = bVar37 | bVar38;
          }
          lVar44 = lVar45 + 0x40;
        } while ((lVar45 + param_2 + 0x7f < param_4) &&
                (lVar44 = lVar45 + 0x40, lVar45 = lVar44, bVar37 == 0));
      }
      else {
        lVar44 = 0;
        bVar37 = 0;
      }
      if ((param_2 + 0xf + lVar44 < param_4) && (bVar37 == 0)) {
        pcVar41 = (char *)(lVar44 + param_3);
        do {
          pcVar1 = (char *)(lVar43 + param_2 + lVar44);
          auVar49[0] = -(*pcVar41 == cVar54);
          auVar49[1] = -(pcVar41[1] == cVar55);
          auVar49[2] = -(pcVar41[2] == cVar56);
          auVar49[3] = -(pcVar41[3] == cVar57);
          auVar49[4] = -(pcVar41[4] == cVar58);
          auVar49[5] = -(pcVar41[5] == cVar59);
          auVar49[6] = -(pcVar41[6] == cVar60);
          auVar49[7] = -(pcVar41[7] == cVar61);
          auVar49[8] = -(pcVar41[8] == cVar54);
          auVar49[9] = -(pcVar41[9] == cVar55);
          auVar49[10] = -(pcVar41[10] == cVar56);
          auVar49[0xb] = -(pcVar41[0xb] == cVar57);
          auVar49[0xc] = -(pcVar41[0xc] == cVar58);
          auVar49[0xd] = -(pcVar41[0xd] == cVar59);
          auVar49[0xe] = -(pcVar41[0xe] == cVar60);
          auVar49[0xf] = -(pcVar41[0xf] == cVar61);
          auVar52[0] = -(*pcVar1 == cVar62);
          auVar52[1] = -(pcVar1[1] == cVar63);
          auVar52[2] = -(pcVar1[2] == cVar64);
          auVar52[3] = -(pcVar1[3] == cVar65);
          auVar52[4] = -(pcVar1[4] == cVar66);
          auVar52[5] = -(pcVar1[5] == cVar67);
          auVar52[6] = -(pcVar1[6] == cVar68);
          auVar52[7] = -(pcVar1[7] == cVar69);
          auVar52[8] = -(pcVar1[8] == cVar62);
          auVar52[9] = -(pcVar1[9] == cVar63);
          auVar52[10] = -(pcVar1[10] == cVar64);
          auVar52[0xb] = -(pcVar1[0xb] == cVar65);
          auVar52[0xc] = -(pcVar1[0xc] == cVar66);
          auVar52[0xd] = -(pcVar1[0xd] == cVar67);
          auVar52[0xe] = -(pcVar1[0xe] == cVar68);
          auVar52[0xf] = -(pcVar1[0xf] == cVar69);
          auVar52 = auVar52 & auVar49;
          uVar3 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
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
          if (uVar3 == 0) {
            bVar37 = 0;
          }
          else {
            bVar37 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_b0,lVar44,uVar3,0);
          }
          if (param_4 <= param_2 + 0x1f + lVar44) break;
          lVar44 = lVar44 + 0x10;
          pcVar41 = pcVar41 + 0x10;
        } while (bVar37 == 0);
      }
      lVar44 = param_4 - (param_2 - 1);
      pcVar41 = (char *)(param_3 + -0x10 + lVar44);
      pcVar1 = (char *)((param_4 - 0xf) + lVar43);
      auVar50[0] = -(*pcVar41 == cVar54);
      auVar50[1] = -(pcVar41[1] == cVar55);
      auVar50[2] = -(pcVar41[2] == cVar56);
      auVar50[3] = -(pcVar41[3] == cVar57);
      auVar50[4] = -(pcVar41[4] == cVar58);
      auVar50[5] = -(pcVar41[5] == cVar59);
      auVar50[6] = -(pcVar41[6] == cVar60);
      auVar50[7] = -(pcVar41[7] == cVar61);
      auVar50[8] = -(pcVar41[8] == cVar54);
      auVar50[9] = -(pcVar41[9] == cVar55);
      auVar50[10] = -(pcVar41[10] == cVar56);
      auVar50[0xb] = -(pcVar41[0xb] == cVar57);
      auVar50[0xc] = -(pcVar41[0xc] == cVar58);
      auVar50[0xd] = -(pcVar41[0xd] == cVar59);
      auVar50[0xe] = -(pcVar41[0xe] == cVar60);
      auVar50[0xf] = -(pcVar41[0xf] == cVar61);
      auVar53[0] = -(*pcVar1 == cVar62);
      auVar53[1] = -(pcVar1[1] == cVar63);
      auVar53[2] = -(pcVar1[2] == cVar64);
      auVar53[3] = -(pcVar1[3] == cVar65);
      auVar53[4] = -(pcVar1[4] == cVar66);
      auVar53[5] = -(pcVar1[5] == cVar67);
      auVar53[6] = -(pcVar1[6] == cVar68);
      auVar53[7] = -(pcVar1[7] == cVar69);
      auVar53[8] = -(pcVar1[8] == cVar62);
      auVar53[9] = -(pcVar1[9] == cVar63);
      auVar53[10] = -(pcVar1[10] == cVar64);
      auVar53[0xb] = -(pcVar1[0xb] == cVar65);
      auVar53[0xc] = -(pcVar1[0xc] == cVar66);
      auVar53[0xd] = -(pcVar1[0xd] == cVar67);
      auVar53[0xe] = -(pcVar1[0xe] == cVar68);
      auVar53[0xf] = -(pcVar1[0xf] == cVar69);
      auVar53 = auVar53 & auVar50;
      uVar3 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
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
      if (uVar3 == 0) {
        return (bool)bVar37;
      }
      bVar38 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                         (&local_b0,lVar44 + -0x10,uVar3,bVar37);
      return (bool)(bVar37 | bVar38);
    }
    do {
      iVar40 = (*(code *)puVar36)();
      if (iVar40 == 0) {
        return true;
      }
      param_4 = param_4 - 1;
    } while (param_2 <= param_4);
  }
  else if (param_2 == param_4) {
    iVar40 = (*(code *)PTR_bcmp_00799020)(param_4,param_2);
    return iVar40 == 0;
  }
  return false;
}


