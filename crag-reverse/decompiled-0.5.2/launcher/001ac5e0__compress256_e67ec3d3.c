// 001ac5e0 compress256

/* sha2[7efb180a76699f7c]::sha256::compress256 */

void __rustcall
sha2[7efb180a76699f7c]::sha256::compress256(uint *param_1,uint *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  
  if ((x86::shani_cpuid::STORAGE == '\x01') ||
     ((x86::shani_cpuid::STORAGE == -1 &&
      (cVar1 = x86::shani_cpuid::init_get::init_inner(), cVar1 != '\0')))) {
    x86::digest_blocks(param_1);
    return;
  }
  uVar23 = *param_1;
  uVar7 = param_1[1];
  uVar27 = param_1[2];
  uVar12 = param_1[3];
  uVar45 = param_1[4];
  uVar53 = param_1[5];
  uVar47 = param_1[6];
  uVar39 = param_1[7];
  if (param_3 != 0) {
    puVar24 = param_2 + param_3 * 0x10;
    do {
      uVar30 = *param_2;
      uVar6 = param_2[1];
      uVar2 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      uVar21 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8;
      uVar8 = uVar21 | uVar6 << 0x18;
      iVar3 = ((uVar47 ^ uVar53) & uVar45 ^ uVar47) + uVar39 +
              ((uVar45 << 7 | uVar45 >> 0x19) ^
              (uVar45 << 0x15 | uVar45 >> 0xb) ^ (uVar45 << 0x1a | uVar45 >> 6));
      uVar4 = iVar3 + uVar2 + uVar12 + 0x428a2f98;
      uVar13 = (uVar27 & uVar7 ^ (uVar27 ^ uVar7) & uVar23) +
               ((uVar23 << 10 | uVar23 >> 0x16) ^
               (uVar23 << 0x13 | uVar23 >> 0xd) ^ (uVar23 << 0x1e | uVar23 >> 2)) +
               iVar3 + uVar2 + 0x428a2f98;
      uVar30 = (uVar4 * 0x80 | uVar4 >> 0x19) ^
               (uVar4 * 0x200000 | uVar4 >> 0xb) ^ (uVar4 * 0x4000000 | uVar4 >> 6);
      iVar3 = ((uVar53 ^ uVar45) & uVar4 ^ uVar53) + uVar47 + uVar8;
      uVar46 = ((uVar7 ^ uVar23) & uVar13 ^ uVar7 & uVar23) +
               ((uVar13 * 0x400 | uVar13 >> 0x16) ^
               (uVar13 * 0x80000 | uVar13 >> 0xd) ^ (uVar13 * 0x40000000 | uVar13 >> 2)) +
               iVar3 + uVar30 + 0x71374491;
      uVar9 = uVar27 + iVar3 + uVar30 + 0x71374491;
      uVar31 = (uVar9 * 0x80 | uVar9 >> 0x19) ^
               (uVar9 * 0x200000 | uVar9 >> 0xb) ^ (uVar9 * 0x4000000 | uVar9 >> 6);
      uVar30 = param_2[2];
      uVar20 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8;
      uVar40 = uVar20 | uVar30 << 0x18;
      iVar3 = ((uVar4 ^ uVar45) & uVar9 ^ uVar45) + uVar40 + uVar53;
      uVar32 = uVar7 + iVar3 + uVar31 + 0xb5c0fbcf;
      uVar62 = (uVar13 & uVar23 ^ (uVar13 ^ uVar23) & uVar46) +
               ((uVar46 * 0x400 | uVar46 >> 0x16) ^
               (uVar46 * 0x80000 | uVar46 >> 0xd) ^ (uVar46 * 0x40000000 | uVar46 >> 2)) +
               iVar3 + uVar31 + -0x4a3f0431;
      uVar41 = (uVar32 * 0x80 | uVar32 >> 0x19) ^
               (uVar32 * 0x200000 | uVar32 >> 0xb) ^ (uVar32 * 0x4000000 | uVar32 >> 6);
      uVar31 = param_2[3];
      uVar22 = uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8;
      uVar34 = uVar22 | uVar31 << 0x18;
      iVar3 = ((uVar9 ^ uVar4) & uVar32 ^ uVar4) + uVar45 + uVar34;
      uVar49 = uVar23 + iVar3 + uVar41 + 0xe9b5dba5;
      uVar48 = ((uVar46 ^ uVar13) & uVar62 ^ uVar46 & uVar13) +
               ((uVar62 * 0x400 | uVar62 >> 0x16) ^
               (uVar62 * 0x80000 | uVar62 >> 0xd) ^ (uVar62 * 0x40000000 | uVar62 >> 2)) +
               uVar41 + iVar3 + -0x164a245b;
      uVar41 = param_2[4];
      uVar26 = uVar41 >> 0x18 | (uVar41 & 0xff0000) >> 8 | (uVar41 & 0xff00) << 8;
      uVar35 = uVar26 | uVar41 << 0x18;
      iVar3 = uVar4 + uVar35 + ((uVar32 ^ uVar9) & uVar49 ^ uVar9) +
              ((uVar49 * 0x80 | uVar49 >> 0x19) ^
              (uVar49 * 0x200000 | uVar49 >> 0xb) ^ (uVar49 * 0x4000000 | uVar49 >> 6)) + 0x3956c25b
      ;
      uVar13 = uVar13 + iVar3;
      uVar42 = (uVar62 & uVar46 ^ (uVar62 ^ uVar46) & uVar48) +
               ((uVar48 * 0x400 | uVar48 >> 0x16) ^
               (uVar48 * 0x80000 | uVar48 >> 0xd) ^ (uVar48 * 0x40000000 | uVar48 >> 2)) + iVar3;
      uVar4 = param_2[5];
      uVar38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
      uVar36 = uVar38 | uVar4 << 0x18;
      iVar3 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
              (uVar13 * 0x200000 | uVar13 >> 0xb) ^ (uVar13 * 0x4000000 | uVar13 >> 6)) +
              ((uVar49 ^ uVar32) & uVar13 ^ uVar32) + uVar9 + uVar36 + 0x59f111f1;
      uVar46 = uVar46 + iVar3;
      uVar28 = ((uVar48 ^ uVar62) & uVar42 ^ uVar48 & uVar62) +
               ((uVar42 * 0x400 | uVar42 >> 0x16) ^
               (uVar42 * 0x80000 | uVar42 >> 0xd) ^ (uVar42 * 0x40000000 | uVar42 >> 2)) + iVar3;
      uVar9 = param_2[6];
      uVar44 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8;
      uVar10 = uVar44 | uVar9 << 0x18;
      iVar3 = ((uVar13 ^ uVar49) & uVar46 ^ uVar49) + uVar10 + uVar32 +
              ((uVar46 * 0x80 | uVar46 >> 0x19) ^
              (uVar46 * 0x200000 | uVar46 >> 0xb) ^ (uVar46 * 0x4000000 | uVar46 >> 6)) +
              -0x6dc07d5c;
      uVar62 = uVar62 + iVar3;
      uVar5 = (uVar42 & uVar48 ^ (uVar42 ^ uVar48) & uVar28) +
              ((uVar28 * 0x400 | uVar28 >> 0x16) ^
              (uVar28 * 0x80000 | uVar28 >> 0xd) ^ (uVar28 * 0x40000000 | uVar28 >> 2)) + iVar3;
      uVar32 = param_2[7];
      uVar51 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8;
      uVar11 = uVar51 | uVar32 << 0x18;
      iVar3 = ((uVar62 * 0x80 | uVar62 >> 0x19) ^
              (uVar62 * 0x200000 | uVar62 >> 0xb) ^ (uVar62 * 0x4000000 | uVar62 >> 6)) +
              ((uVar46 ^ uVar13) & uVar62 ^ uVar13) + uVar11 + uVar49 + -0x54e3a12b;
      uVar48 = uVar48 + iVar3;
      uVar54 = ((uVar28 ^ uVar42) & uVar5 ^ uVar28 & uVar42) +
               ((uVar5 * 0x400 | uVar5 >> 0x16) ^
               (uVar5 * 0x80000 | uVar5 >> 0xd) ^ (uVar5 * 0x40000000 | uVar5 >> 2)) + iVar3;
      uVar49 = param_2[8];
      uVar52 = uVar49 >> 0x18 | (uVar49 & 0xff0000) >> 8 | (uVar49 & 0xff00) << 8;
      uVar33 = uVar52 | uVar49 << 0x18;
      iVar3 = ((uVar48 * 0x80 | uVar48 >> 0x19) ^
              (uVar48 * 0x200000 | uVar48 >> 0xb) ^ (uVar48 * 0x4000000 | uVar48 >> 6)) +
              ((uVar62 ^ uVar46) & uVar48 ^ uVar46) + uVar13 + uVar33 + -0x27f85568;
      uVar42 = uVar42 + iVar3;
      uVar50 = (uVar5 & uVar28 ^ (uVar5 ^ uVar28) & uVar54) +
               ((uVar54 * 0x400 | uVar54 >> 0x16) ^
               (uVar54 * 0x80000 | uVar54 >> 0xd) ^ (uVar54 * 0x40000000 | uVar54 >> 2)) + iVar3;
      uVar13 = param_2[9];
      uVar55 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8;
      uVar14 = uVar55 | uVar13 << 0x18;
      iVar3 = ((uVar42 * 0x80 | uVar42 >> 0x19) ^
              (uVar42 * 0x200000 | uVar42 >> 0xb) ^ (uVar42 * 0x4000000 | uVar42 >> 6)) +
              ((uVar48 ^ uVar62) & uVar42 ^ uVar62) + uVar14 + uVar46 + 0x12835b01;
      uVar28 = uVar28 + iVar3;
      uVar25 = ((uVar54 ^ uVar5) & uVar50 ^ uVar54 & uVar5) +
               ((uVar50 * 0x400 | uVar50 >> 0x16) ^
               (uVar50 * 0x80000 | uVar50 >> 0xd) ^ (uVar50 * 0x40000000 | uVar50 >> 2)) + iVar3;
      uVar46 = param_2[10];
      uVar56 = uVar46 >> 0x18 | (uVar46 & 0xff0000) >> 8 | (uVar46 & 0xff00) << 8;
      uVar15 = uVar56 | uVar46 << 0x18;
      iVar3 = ((uVar28 * 0x80 | uVar28 >> 0x19) ^
              (uVar28 * 0x200000 | uVar28 >> 0xb) ^ (uVar28 * 0x4000000 | uVar28 >> 6)) +
              ((uVar42 ^ uVar48) & uVar28 ^ uVar48) + uVar15 + uVar62 + 0x243185be;
      uVar5 = uVar5 + iVar3;
      uVar37 = (uVar50 & uVar54 ^ (uVar50 ^ uVar54) & uVar25) +
               ((uVar25 * 0x400 | uVar25 >> 0x16) ^
               (uVar25 * 0x80000 | uVar25 >> 0xd) ^ (uVar25 * 0x40000000 | uVar25 >> 2)) + iVar3;
      uVar62 = param_2[0xb];
      uVar59 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8;
      uVar16 = uVar59 | uVar62 << 0x18;
      iVar3 = ((uVar5 * 0x80 | uVar5 >> 0x19) ^
              (uVar5 * 0x200000 | uVar5 >> 0xb) ^ (uVar5 * 0x4000000 | uVar5 >> 6)) +
              ((uVar28 ^ uVar42) & uVar5 ^ uVar42) + uVar16 + uVar48 + 0x550c7dc3;
      uVar54 = uVar54 + iVar3;
      uVar65 = ((uVar25 ^ uVar50) & uVar37 ^ uVar25 & uVar50) +
               ((uVar37 * 0x400 | uVar37 >> 0x16) ^
               (uVar37 * 0x80000 | uVar37 >> 0xd) ^ (uVar37 * 0x40000000 | uVar37 >> 2)) + iVar3;
      uVar48 = param_2[0xc];
      uVar60 = uVar48 >> 0x18 | (uVar48 & 0xff0000) >> 8 | (uVar48 & 0xff00) << 8;
      uVar17 = uVar60 | uVar48 << 0x18;
      iVar3 = ((uVar54 * 0x80 | uVar54 >> 0x19) ^
              (uVar54 * 0x200000 | uVar54 >> 0xb) ^ (uVar54 * 0x4000000 | uVar54 >> 6)) +
              ((uVar5 ^ uVar28) & uVar54 ^ uVar28) + uVar42 + uVar17 + 0x72be5d74;
      uVar50 = uVar50 + iVar3;
      uVar43 = (uVar37 & uVar25 ^ (uVar37 ^ uVar25) & uVar65) +
               ((uVar65 * 0x400 | uVar65 >> 0x16) ^
               (uVar65 * 0x80000 | uVar65 >> 0xd) ^ (uVar65 * 0x40000000 | uVar65 >> 2)) + iVar3;
      uVar42 = param_2[0xd];
      uVar61 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8;
      uVar18 = uVar61 | uVar42 << 0x18;
      iVar3 = ((uVar50 * 0x80 | uVar50 >> 0x19) ^
              (uVar50 * 0x200000 | uVar50 >> 0xb) ^ (uVar50 * 0x4000000 | uVar50 >> 6)) +
              ((uVar54 ^ uVar5) & uVar50 ^ uVar5) + uVar18 + uVar28 + -0x7f214e02;
      uVar25 = uVar25 + iVar3;
      uVar29 = ((uVar65 ^ uVar37) & uVar43 ^ uVar65 & uVar37) +
               ((uVar43 * 0x400 | uVar43 >> 0x16) ^
               (uVar43 * 0x80000 | uVar43 >> 0xd) ^ (uVar43 * 0x40000000 | uVar43 >> 2)) + iVar3;
      uVar28 = param_2[0xe];
      uVar64 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8;
      uVar19 = uVar64 | uVar28 << 0x18;
      iVar3 = ((uVar25 * 0x80 | uVar25 >> 0x19) ^
              (uVar25 * 0x200000 | uVar25 >> 0xb) ^ (uVar25 * 0x4000000 | uVar25 >> 6)) +
              ((uVar50 ^ uVar54) & uVar25 ^ uVar54) + uVar5 + uVar19 + -0x6423f959;
      uVar37 = uVar37 + iVar3;
      uVar63 = (uVar43 & uVar65 ^ (uVar43 ^ uVar65) & uVar29) +
               ((uVar29 * 0x400 | uVar29 >> 0x16) ^
               (uVar29 * 0x80000 | uVar29 >> 0xd) ^ (uVar29 * 0x40000000 | uVar29 >> 2)) + iVar3;
      uVar5 = param_2[0xf];
      uVar66 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
      uVar57 = uVar66 | uVar5 << 0x18;
      iVar3 = ((uVar37 * 0x80 | uVar37 >> 0x19) ^
              (uVar37 * 0x200000 | uVar37 >> 0xb) ^ (uVar37 * 0x4000000 | uVar37 >> 6)) +
              ((uVar25 ^ uVar50) & uVar37 ^ uVar50) + uVar54 + uVar57 + -0x3e640e8c;
      uVar54 = ((uVar29 ^ uVar43) & uVar63 ^ uVar29 & uVar43) +
               ((uVar63 * 0x400 | uVar63 >> 0x16) ^
               (uVar63 * 0x80000 | uVar63 >> 0xd) ^ (uVar63 * 0x40000000 | uVar63 >> 2)) + iVar3;
      uVar65 = uVar65 + iVar3;
      uVar2 = (uVar19 >> 10 ^ (uVar64 << 0xd | uVar19 >> 0x13) ^ (uVar64 << 0xf | uVar19 >> 0x11)) +
              uVar2 + uVar14 +
              (uVar8 >> 3 ^ (uVar21 << 0xe | uVar8 >> 0x12) ^ ((uVar6 >> 0x18) << 0x19 | uVar8 >> 7)
              );
      uVar58 = (uVar57 >> 10 ^ (uVar66 << 0xd | uVar57 >> 0x13) ^ (uVar66 << 0xf | uVar57 >> 0x11))
               + uVar8 + uVar15 +
                 (uVar40 >> 3 ^
                 (uVar20 << 0xe | uVar40 >> 0x12) ^ ((uVar30 >> 0x18) << 0x19 | uVar40 >> 7));
      uVar30 = (uVar2 >> 10 ^ (uVar2 * 0x2000 | uVar2 >> 0x13) ^ (uVar2 * 0x8000 | uVar2 >> 0x11)) +
               uVar40 + uVar16 +
               (uVar34 >> 3 ^
               (uVar22 << 0xe | uVar34 >> 0x12) ^ ((uVar31 >> 0x18) << 0x19 | uVar34 >> 7));
      uVar20 = (uVar58 >> 10 ^
               (uVar58 * 0x2000 | uVar58 >> 0x13) ^ (uVar58 * 0x8000 | uVar58 >> 0x11)) +
               uVar34 + uVar17 +
               (uVar35 >> 3 ^
               (uVar26 << 0xe | uVar35 >> 0x12) ^ ((uVar41 >> 0x18) << 0x19 | uVar35 >> 7));
      iVar3 = ((uVar37 ^ uVar25) & uVar65 ^ uVar25) + uVar50 + uVar2 +
              ((uVar65 * 0x80 | uVar65 >> 0x19) ^
              (uVar65 * 0x200000 | uVar65 >> 0xb) ^ (uVar65 * 0x4000000 | uVar65 >> 6)) +
              -0x1b64963f;
      uVar21 = (uVar63 & uVar29 ^ (uVar63 ^ uVar29) & uVar54) +
               ((uVar54 * 0x400 | uVar54 >> 0x16) ^
               (uVar54 * 0x80000 | uVar54 >> 0xd) ^ (uVar54 * 0x40000000 | uVar54 >> 2)) + iVar3;
      uVar43 = uVar43 + iVar3;
      iVar3 = ((uVar43 * 0x80 | uVar43 >> 0x19) ^
              (uVar43 * 0x200000 | uVar43 >> 0xb) ^ (uVar43 * 0x4000000 | uVar43 >> 6)) +
              ((uVar65 ^ uVar37) & uVar43 ^ uVar37) + uVar58 + uVar25 + -0x1041b87a;
      uVar29 = uVar29 + iVar3;
      uVar26 = ((uVar54 ^ uVar63) & uVar21 ^ uVar54 & uVar63) +
               ((uVar21 * 0x400 | uVar21 >> 0x16) ^
               (uVar21 * 0x80000 | uVar21 >> 0xd) ^ (uVar21 * 0x40000000 | uVar21 >> 2)) + iVar3;
      iVar3 = ((uVar29 * 0x80 | uVar29 >> 0x19) ^
              (uVar29 * 0x200000 | uVar29 >> 0xb) ^ (uVar29 * 0x4000000 | uVar29 >> 6)) +
              ((uVar43 ^ uVar65) & uVar29 ^ uVar65) + uVar30 + uVar37 + 0xfc19dc6;
      uVar22 = (uVar21 & uVar54 ^ (uVar21 ^ uVar54) & uVar26) +
               ((uVar26 * 0x400 | uVar26 >> 0x16) ^
               (uVar26 * 0x80000 | uVar26 >> 0xd) ^ (uVar26 * 0x40000000 | uVar26 >> 2)) + iVar3;
      uVar63 = uVar63 + iVar3;
      iVar3 = ((uVar29 ^ uVar43) & uVar63 ^ uVar43) + uVar20 + uVar65 +
              ((uVar63 * 0x80 | uVar63 >> 0x19) ^
              (uVar63 * 0x200000 | uVar63 >> 0xb) ^ (uVar63 * 0x4000000 | uVar63 >> 6)) + 0x240ca1cc
      ;
      uVar25 = ((uVar26 ^ uVar21) & uVar22 ^ uVar26 & uVar21) +
               ((uVar22 * 0x400 | uVar22 >> 0x16) ^
               (uVar22 * 0x80000 | uVar22 >> 0xd) ^ (uVar22 * 0x40000000 | uVar22 >> 2)) + iVar3;
      uVar54 = uVar54 + iVar3;
      uVar37 = (uVar30 >> 10 ^
               (uVar30 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 0x8000 | uVar30 >> 0x11)) +
               uVar35 + uVar18 +
               (uVar36 >> 3 ^
               (uVar38 << 0xe | uVar36 >> 0x12) ^ ((uVar4 >> 0x18) << 0x19 | uVar36 >> 7));
      uVar8 = (uVar20 >> 10 ^
              (uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11)) +
              uVar36 + uVar19 +
              (uVar10 >> 3 ^
              (uVar44 << 0xe | uVar10 >> 0x12) ^ ((uVar9 >> 0x18) << 0x19 | uVar10 >> 7));
      uVar31 = (uVar37 >> 10 ^
               (uVar37 * 0x2000 | uVar37 >> 0x13) ^ (uVar37 * 0x8000 | uVar37 >> 0x11)) +
               uVar10 + uVar57 +
               (uVar11 >> 3 ^
               (uVar51 << 0xe | uVar11 >> 0x12) ^ ((uVar32 >> 0x18) << 0x19 | uVar11 >> 7));
      uVar41 = (uVar8 >> 10 ^ (uVar8 * 0x2000 | uVar8 >> 0x13) ^ (uVar8 * 0x8000 | uVar8 >> 0x11)) +
               (uVar33 >> 3 ^
               (uVar52 << 0xe | uVar33 >> 0x12) ^ ((uVar49 >> 0x18) << 0x19 | uVar33 >> 7)) + uVar11
               + uVar2;
      iVar3 = ((uVar54 * 0x80 | uVar54 >> 0x19) ^
              (uVar54 * 0x200000 | uVar54 >> 0xb) ^ (uVar54 * 0x4000000 | uVar54 >> 6)) +
              ((uVar63 ^ uVar29) & uVar54 ^ uVar29) + uVar43 + uVar37 + 0x2de92c6f;
      uVar21 = uVar21 + iVar3;
      uVar38 = (uVar22 & uVar26 ^ (uVar22 ^ uVar26) & uVar25) +
               ((uVar25 * 0x400 | uVar25 >> 0x16) ^
               (uVar25 * 0x80000 | uVar25 >> 0xd) ^ (uVar25 * 0x40000000 | uVar25 >> 2)) + iVar3;
      iVar3 = ((uVar21 * 0x80 | uVar21 >> 0x19) ^
              (uVar21 * 0x200000 | uVar21 >> 0xb) ^ (uVar21 * 0x4000000 | uVar21 >> 6)) +
              ((uVar54 ^ uVar63) & uVar21 ^ uVar63) + uVar8 + uVar29 + 0x4a7484aa;
      uVar49 = ((uVar25 ^ uVar22) & uVar38 ^ uVar25 & uVar22) +
               ((uVar38 * 0x400 | uVar38 >> 0x16) ^
               (uVar38 * 0x80000 | uVar38 >> 0xd) ^ (uVar38 * 0x40000000 | uVar38 >> 2)) + iVar3;
      uVar26 = uVar26 + iVar3;
      iVar3 = ((uVar21 ^ uVar54) & uVar26 ^ uVar54) + uVar31 + uVar63 +
              ((uVar26 * 0x80 | uVar26 >> 0x19) ^
              (uVar26 * 0x200000 | uVar26 >> 0xb) ^ (uVar26 * 0x4000000 | uVar26 >> 6)) + 0x5cb0a9dc
      ;
      uVar22 = uVar22 + iVar3;
      uVar6 = (uVar38 & uVar25 ^ (uVar38 ^ uVar25) & uVar49) +
              ((uVar49 * 0x400 | uVar49 >> 0x16) ^
              (uVar49 * 0x80000 | uVar49 >> 0xd) ^ (uVar49 * 0x40000000 | uVar49 >> 2)) + iVar3;
      iVar3 = ((uVar22 * 0x80 | uVar22 >> 0x19) ^
              (uVar22 * 0x200000 | uVar22 >> 0xb) ^ (uVar22 * 0x4000000 | uVar22 >> 6)) +
              ((uVar26 ^ uVar21) & uVar22 ^ uVar21) + uVar41 + uVar54 + 0x76f988da;
      uVar32 = ((uVar49 ^ uVar38) & uVar6 ^ uVar49 & uVar38) +
               ((uVar6 * 0x400 | uVar6 >> 0x16) ^
               (uVar6 * 0x80000 | uVar6 >> 0xd) ^ (uVar6 * 0x40000000 | uVar6 >> 2)) + iVar3;
      uVar25 = uVar25 + iVar3;
      uVar54 = (uVar31 >> 10 ^
               (uVar31 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 0x8000 | uVar31 >> 0x11)) +
               (uVar14 >> 3 ^
               (uVar55 << 0xe | uVar14 >> 0x12) ^ ((uVar13 >> 0x18) << 0x19 | uVar14 >> 7)) + uVar33
               + uVar58;
      uVar44 = (uVar41 >> 10 ^
               (uVar41 * 0x2000 | uVar41 >> 0x13) ^ (uVar41 * 0x8000 | uVar41 >> 0x11)) +
               (uVar15 >> 3 ^
               (uVar56 << 0xe | uVar15 >> 0x12) ^ ((uVar46 >> 0x18) << 0x19 | uVar15 >> 7)) + uVar14
               + uVar30;
      uVar59 = (uVar54 >> 10 ^
               (uVar54 * 0x2000 | uVar54 >> 0x13) ^ (uVar54 * 0x8000 | uVar54 >> 0x11)) +
               (uVar16 >> 3 ^
               (uVar59 << 0xe | uVar16 >> 0x12) ^ ((uVar62 >> 0x18) << 0x19 | uVar16 >> 7)) + uVar15
               + uVar20;
      uVar4 = (uVar44 >> 10 ^
              (uVar44 * 0x2000 | uVar44 >> 0x13) ^ (uVar44 * 0x8000 | uVar44 >> 0x11)) +
              (uVar17 >> 3 ^
              (uVar60 << 0xe | uVar17 >> 0x12) ^ ((uVar48 >> 0x18) << 0x19 | uVar17 >> 7)) + uVar16
              + uVar37;
      iVar3 = ((uVar25 * 0x80 | uVar25 >> 0x19) ^
              (uVar25 * 0x200000 | uVar25 >> 0xb) ^ (uVar25 * 0x4000000 | uVar25 >> 6)) +
              ((uVar22 ^ uVar26) & uVar25 ^ uVar26) + uVar21 + uVar54 + -0x67c1aeae;
      uVar38 = uVar38 + iVar3;
      uVar48 = (uVar6 & uVar49 ^ (uVar6 ^ uVar49) & uVar32) +
               ((uVar32 * 0x400 | uVar32 >> 0x16) ^
               (uVar32 * 0x80000 | uVar32 >> 0xd) ^ (uVar32 * 0x40000000 | uVar32 >> 2)) + iVar3;
      iVar3 = ((uVar38 * 0x80 | uVar38 >> 0x19) ^
              (uVar38 * 0x200000 | uVar38 >> 0xb) ^ (uVar38 * 0x4000000 | uVar38 >> 6)) +
              ((uVar25 ^ uVar22) & uVar38 ^ uVar22) + uVar44 + uVar26 + -0x57ce3993;
      uVar13 = ((uVar32 ^ uVar6) & uVar48 ^ uVar32 & uVar6) +
               ((uVar48 * 0x400 | uVar48 >> 0x16) ^
               (uVar48 * 0x80000 | uVar48 >> 0xd) ^ (uVar48 * 0x40000000 | uVar48 >> 2)) + iVar3;
      uVar49 = uVar49 + iVar3;
      iVar3 = ((uVar49 * 0x80 | uVar49 >> 0x19) ^
              (uVar49 * 0x200000 | uVar49 >> 0xb) ^ (uVar49 * 0x4000000 | uVar49 >> 6)) +
              ((uVar38 ^ uVar25) & uVar49 ^ uVar25) + uVar59 + uVar22 + -0x4ffcd838;
      uVar6 = uVar6 + iVar3;
      uVar46 = (uVar48 & uVar32 ^ (uVar48 ^ uVar32) & uVar13) +
               ((uVar13 * 0x400 | uVar13 >> 0x16) ^
               (uVar13 * 0x80000 | uVar13 >> 0xd) ^ (uVar13 * 0x40000000 | uVar13 >> 2)) + iVar3;
      iVar3 = ((uVar6 * 0x80 | uVar6 >> 0x19) ^
              (uVar6 * 0x200000 | uVar6 >> 0xb) ^ (uVar6 * 0x4000000 | uVar6 >> 6)) +
              ((uVar49 ^ uVar38) & uVar6 ^ uVar38) + uVar4 + uVar25 + -0x40a68039;
      uVar62 = ((uVar13 ^ uVar48) & uVar46 ^ uVar13 & uVar48) +
               ((uVar46 * 0x400 | uVar46 >> 0x16) ^
               (uVar46 * 0x80000 | uVar46 >> 0xd) ^ (uVar46 * 0x40000000 | uVar46 >> 2)) + iVar3;
      uVar32 = uVar32 + iVar3;
      uVar51 = (uVar59 >> 10 ^
               (uVar59 * 0x2000 | uVar59 >> 0x13) ^ (uVar59 * 0x8000 | uVar59 >> 0x11)) +
               (uVar18 >> 3 ^
               (uVar61 << 0xe | uVar18 >> 0x12) ^ ((uVar42 >> 0x18) << 0x19 | uVar18 >> 7)) + uVar17
               + uVar8;
      uVar21 = (uVar4 >> 10 ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11)) +
               (uVar19 >> 3 ^
               (uVar64 << 0xe | uVar19 >> 0x12) ^ ((uVar28 >> 0x18) << 0x19 | uVar19 >> 7)) + uVar18
               + uVar31;
      uVar9 = (uVar51 >> 10 ^
              (uVar51 * 0x2000 | uVar51 >> 0x13) ^ (uVar51 * 0x8000 | uVar51 >> 0x11)) +
              (uVar57 >> 3 ^
              (uVar66 << 0xe | uVar57 >> 0x12) ^ ((uVar5 >> 0x18) << 0x19 | uVar57 >> 7)) + uVar19 +
              uVar41;
      uVar60 = (uVar21 >> 10 ^
               (uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11)) +
               (uVar2 >> 3 ^ (uVar2 * 0x4000 | uVar2 >> 0x12) ^ (uVar2 * 0x2000000 | uVar2 >> 7)) +
               uVar57 + uVar54;
      iVar3 = ((uVar32 * 0x80 | uVar32 >> 0x19) ^
              (uVar32 * 0x200000 | uVar32 >> 0xb) ^ (uVar32 * 0x4000000 | uVar32 >> 6)) +
              ((uVar6 ^ uVar49) & uVar32 ^ uVar49) + uVar38 + uVar51 + -0x391ff40d;
      uVar48 = uVar48 + iVar3;
      uVar42 = (uVar46 & uVar13 ^ (uVar46 ^ uVar13) & uVar62) +
               ((uVar62 * 0x400 | uVar62 >> 0x16) ^
               (uVar62 * 0x80000 | uVar62 >> 0xd) ^ (uVar62 * 0x40000000 | uVar62 >> 2)) + iVar3;
      iVar3 = ((uVar48 * 0x80 | uVar48 >> 0x19) ^
              (uVar48 * 0x200000 | uVar48 >> 0xb) ^ (uVar48 * 0x4000000 | uVar48 >> 6)) +
              ((uVar32 ^ uVar6) & uVar48 ^ uVar6) + uVar21 + uVar49 + -0x2a586eb9;
      uVar5 = ((uVar62 ^ uVar46) & uVar42 ^ uVar62 & uVar46) +
              ((uVar42 * 0x400 | uVar42 >> 0x16) ^
              (uVar42 * 0x80000 | uVar42 >> 0xd) ^ (uVar42 * 0x40000000 | uVar42 >> 2)) + iVar3;
      uVar13 = uVar13 + iVar3;
      iVar3 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
              (uVar13 * 0x200000 | uVar13 >> 0xb) ^ (uVar13 * 0x4000000 | uVar13 >> 6)) +
              ((uVar48 ^ uVar32) & uVar13 ^ uVar32) + uVar6 + uVar9 + 0x6ca6351;
      uVar46 = uVar46 + iVar3;
      uVar28 = (uVar42 & uVar62 ^ (uVar42 ^ uVar62) & uVar5) +
               ((uVar5 * 0x400 | uVar5 >> 0x16) ^
               (uVar5 * 0x80000 | uVar5 >> 0xd) ^ (uVar5 * 0x40000000 | uVar5 >> 2)) + iVar3;
      iVar3 = ((uVar46 * 0x80 | uVar46 >> 0x19) ^
              (uVar46 * 0x200000 | uVar46 >> 0xb) ^ (uVar46 * 0x4000000 | uVar46 >> 6)) +
              ((uVar13 ^ uVar48) & uVar46 ^ uVar48) + uVar32 + uVar60 + 0x14292967;
      uVar6 = ((uVar5 ^ uVar42) & uVar28 ^ uVar5 & uVar42) +
              ((uVar28 * 0x400 | uVar28 >> 0x16) ^
              (uVar28 * 0x80000 | uVar28 >> 0xd) ^ (uVar28 * 0x40000000 | uVar28 >> 2)) + iVar3;
      uVar62 = uVar62 + iVar3;
      uVar38 = (uVar9 >> 10 ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 0x8000 | uVar9 >> 0x11)) +
               (uVar58 >> 3 ^
               (uVar58 * 0x4000 | uVar58 >> 0x12) ^ (uVar58 * 0x2000000 | uVar58 >> 7)) + uVar2 +
               uVar44;
      uVar49 = (uVar60 >> 10 ^
               (uVar60 * 0x2000 | uVar60 >> 0x13) ^ (uVar60 * 0x8000 | uVar60 >> 0x11)) +
               (uVar30 >> 3 ^
               (uVar30 * 0x4000 | uVar30 >> 0x12) ^ (uVar30 * 0x2000000 | uVar30 >> 7)) + uVar58 +
               uVar59;
      uVar55 = (uVar38 >> 10 ^
               (uVar38 * 0x2000 | uVar38 >> 0x13) ^ (uVar38 * 0x8000 | uVar38 >> 0x11)) +
               (uVar20 >> 3 ^
               (uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 * 0x2000000 | uVar20 >> 7)) + uVar30 +
               uVar4;
      uVar56 = (uVar49 >> 10 ^
               (uVar49 * 0x2000 | uVar49 >> 0x13) ^ (uVar49 * 0x8000 | uVar49 >> 0x11)) +
               (uVar37 >> 3 ^
               (uVar37 * 0x4000 | uVar37 >> 0x12) ^ (uVar37 * 0x2000000 | uVar37 >> 7)) + uVar20 +
               uVar51;
      iVar3 = ((uVar62 * 0x80 | uVar62 >> 0x19) ^
              (uVar62 * 0x200000 | uVar62 >> 0xb) ^ (uVar62 * 0x4000000 | uVar62 >> 6)) +
              ((uVar46 ^ uVar13) & uVar62 ^ uVar13) + uVar48 + uVar38 + 0x27b70a85;
      uVar22 = (uVar28 & uVar5 ^ (uVar28 ^ uVar5) & uVar6) +
               ((uVar6 * 0x400 | uVar6 >> 0x16) ^
               (uVar6 * 0x80000 | uVar6 >> 0xd) ^ (uVar6 * 0x40000000 | uVar6 >> 2)) + iVar3;
      uVar42 = uVar42 + iVar3;
      iVar3 = ((uVar42 * 0x80 | uVar42 >> 0x19) ^
              (uVar42 * 0x200000 | uVar42 >> 0xb) ^ (uVar42 * 0x4000000 | uVar42 >> 6)) +
              ((uVar62 ^ uVar46) & uVar42 ^ uVar46) + uVar49 + uVar13 + 0x2e1b2138;
      uVar5 = uVar5 + iVar3;
      uVar13 = ((uVar6 ^ uVar28) & uVar22 ^ uVar6 & uVar28) +
               ((uVar22 * 0x400 | uVar22 >> 0x16) ^
               (uVar22 * 0x80000 | uVar22 >> 0xd) ^ (uVar22 * 0x40000000 | uVar22 >> 2)) + iVar3;
      iVar3 = ((uVar5 * 0x80 | uVar5 >> 0x19) ^
              (uVar5 * 0x200000 | uVar5 >> 0xb) ^ (uVar5 * 0x4000000 | uVar5 >> 6)) +
              ((uVar42 ^ uVar62) & uVar5 ^ uVar62) + uVar55 + uVar46 + 0x4d2c6dfc;
      uVar46 = (uVar22 & uVar6 ^ (uVar22 ^ uVar6) & uVar13) +
               ((uVar13 * 0x400 | uVar13 >> 0x16) ^
               (uVar13 * 0x80000 | uVar13 >> 0xd) ^ (uVar13 * 0x40000000 | uVar13 >> 2)) + iVar3;
      uVar28 = uVar28 + iVar3;
      iVar3 = ((uVar28 * 0x80 | uVar28 >> 0x19) ^
              (uVar28 * 0x200000 | uVar28 >> 0xb) ^ (uVar28 * 0x4000000 | uVar28 >> 6)) +
              ((uVar5 ^ uVar42) & uVar28 ^ uVar42) + uVar56 + uVar62 + 0x53380d13;
      uVar62 = ((uVar13 ^ uVar22) & uVar46 ^ uVar13 & uVar22) +
               ((uVar46 * 0x400 | uVar46 >> 0x16) ^
               (uVar46 * 0x80000 | uVar46 >> 0xd) ^ (uVar46 * 0x40000000 | uVar46 >> 2)) + iVar3;
      uVar6 = uVar6 + iVar3;
      uVar48 = (uVar55 >> 10 ^
               (uVar55 * 0x2000 | uVar55 >> 0x13) ^ (uVar55 * 0x8000 | uVar55 >> 0x11)) +
               (uVar8 >> 3 ^ (uVar8 * 0x4000 | uVar8 >> 0x12) ^ (uVar8 * 0x2000000 | uVar8 >> 7)) +
               uVar37 + uVar21;
      uVar26 = (uVar56 >> 10 ^
               (uVar56 * 0x2000 | uVar56 >> 0x13) ^ (uVar56 * 0x8000 | uVar56 >> 0x11)) +
               (uVar31 >> 3 ^
               (uVar31 * 0x4000 | uVar31 >> 0x12) ^ (uVar31 * 0x2000000 | uVar31 >> 7)) + uVar8 +
               uVar9;
      uVar52 = (uVar48 >> 10 ^
               (uVar48 * 0x2000 | uVar48 >> 0x13) ^ (uVar48 * 0x8000 | uVar48 >> 0x11)) +
               (uVar41 >> 3 ^
               (uVar41 * 0x4000 | uVar41 >> 0x12) ^ (uVar41 * 0x2000000 | uVar41 >> 7)) + uVar31 +
               uVar60;
      uVar32 = (uVar26 >> 10 ^
               (uVar26 * 0x2000 | uVar26 >> 0x13) ^ (uVar26 * 0x8000 | uVar26 >> 0x11)) +
               (uVar54 >> 3 ^
               (uVar54 * 0x4000 | uVar54 >> 0x12) ^ (uVar54 * 0x2000000 | uVar54 >> 7)) + uVar41 +
               uVar38;
      iVar3 = ((uVar28 ^ uVar5) & uVar6 ^ uVar5) + uVar42 + uVar48 +
              ((uVar6 * 0x80 | uVar6 >> 0x19) ^
              (uVar6 * 0x200000 | uVar6 >> 0xb) ^ (uVar6 * 0x4000000 | uVar6 >> 6)) + 0x650a7354;
      uVar42 = (uVar46 & uVar13 ^ (uVar46 ^ uVar13) & uVar62) +
               ((uVar62 * 0x400 | uVar62 >> 0x16) ^
               (uVar62 * 0x80000 | uVar62 >> 0xd) ^ (uVar62 * 0x40000000 | uVar62 >> 2)) + iVar3;
      uVar22 = uVar22 + iVar3;
      iVar3 = ((uVar22 * 0x80 | uVar22 >> 0x19) ^
              (uVar22 * 0x200000 | uVar22 >> 0xb) ^ (uVar22 * 0x4000000 | uVar22 >> 6)) +
              ((uVar6 ^ uVar28) & uVar22 ^ uVar28) + uVar26 + uVar5 + 0x766a0abb;
      uVar13 = uVar13 + iVar3;
      uVar5 = ((uVar62 ^ uVar46) & uVar42 ^ uVar62 & uVar46) +
              ((uVar42 * 0x400 | uVar42 >> 0x16) ^
              (uVar42 * 0x80000 | uVar42 >> 0xd) ^ (uVar42 * 0x40000000 | uVar42 >> 2)) + iVar3;
      iVar3 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
              (uVar13 * 0x200000 | uVar13 >> 0xb) ^ (uVar13 * 0x4000000 | uVar13 >> 6)) +
              ((uVar22 ^ uVar6) & uVar13 ^ uVar6) + uVar52 + uVar28 + -0x7e3d36d2;
      uVar30 = (uVar42 & uVar62 ^ (uVar42 ^ uVar62) & uVar5) +
               ((uVar5 * 0x400 | uVar5 >> 0x16) ^
               (uVar5 * 0x80000 | uVar5 >> 0xd) ^ (uVar5 * 0x40000000 | uVar5 >> 2)) + iVar3;
      uVar46 = uVar46 + iVar3;
      iVar3 = ((uVar46 * 0x80 | uVar46 >> 0x19) ^
              (uVar46 * 0x200000 | uVar46 >> 0xb) ^ (uVar46 * 0x4000000 | uVar46 >> 6)) +
              ((uVar13 ^ uVar22) & uVar46 ^ uVar22) + uVar32 + uVar6 + -0x6d8dd37b;
      uVar61 = ((uVar5 ^ uVar42) & uVar30 ^ uVar5 & uVar42) +
               ((uVar30 * 0x400 | uVar30 >> 0x16) ^
               (uVar30 * 0x80000 | uVar30 >> 0xd) ^ (uVar30 * 0x40000000 | uVar30 >> 2)) + iVar3;
      uVar62 = uVar62 + iVar3;
      uVar28 = (uVar52 >> 10 ^
               (uVar52 * 0x2000 | uVar52 >> 0x13) ^ (uVar52 * 0x8000 | uVar52 >> 0x11)) +
               (uVar44 >> 3 ^
               (uVar44 * 0x4000 | uVar44 >> 0x12) ^ (uVar44 * 0x2000000 | uVar44 >> 7)) + uVar54 +
               uVar49;
      uVar20 = (uVar32 >> 10 ^
               (uVar32 * 0x2000 | uVar32 >> 0x13) ^ (uVar32 * 0x8000 | uVar32 >> 0x11)) +
               (uVar59 >> 3 ^
               (uVar59 * 0x4000 | uVar59 >> 0x12) ^ (uVar59 * 0x2000000 | uVar59 >> 7)) + uVar44 +
               uVar55;
      uVar6 = (uVar28 >> 10 ^
              (uVar28 * 0x2000 | uVar28 >> 0x13) ^ (uVar28 * 0x8000 | uVar28 >> 0x11)) +
              (uVar4 >> 3 ^ (uVar4 * 0x4000 | uVar4 >> 0x12) ^ (uVar4 * 0x2000000 | uVar4 >> 7)) +
              uVar59 + uVar56;
      uVar31 = (uVar20 >> 10 ^
               (uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11)) +
               (uVar51 >> 3 ^
               (uVar51 * 0x4000 | uVar51 >> 0x12) ^ (uVar51 * 0x2000000 | uVar51 >> 7)) + uVar4 +
               uVar48;
      iVar3 = ((uVar62 * 0x80 | uVar62 >> 0x19) ^
              (uVar62 * 0x200000 | uVar62 >> 0xb) ^ (uVar62 * 0x4000000 | uVar62 >> 6)) +
              ((uVar46 ^ uVar13) & uVar62 ^ uVar13) + uVar22 + uVar28 + -0x5d40175f;
      uVar42 = uVar42 + iVar3;
      uVar4 = (uVar30 & uVar5 ^ (uVar30 ^ uVar5) & uVar61) +
              ((uVar61 * 0x400 | uVar61 >> 0x16) ^
              (uVar61 * 0x80000 | uVar61 >> 0xd) ^ (uVar61 * 0x40000000 | uVar61 >> 2)) + iVar3;
      iVar3 = ((uVar42 * 0x80 | uVar42 >> 0x19) ^
              (uVar42 * 0x200000 | uVar42 >> 0xb) ^ (uVar42 * 0x4000000 | uVar42 >> 6)) +
              ((uVar62 ^ uVar46) & uVar42 ^ uVar46) + uVar20 + uVar13 + -0x57e599b5;
      uVar66 = ((uVar61 ^ uVar30) & uVar4 ^ uVar61 & uVar30) +
               ((uVar4 * 0x400 | uVar4 >> 0x16) ^
               (uVar4 * 0x80000 | uVar4 >> 0xd) ^ (uVar4 * 0x40000000 | uVar4 >> 2)) + iVar3;
      uVar5 = uVar5 + iVar3;
      iVar3 = ((uVar5 * 0x80 | uVar5 >> 0x19) ^
              (uVar5 * 0x200000 | uVar5 >> 0xb) ^ (uVar5 * 0x4000000 | uVar5 >> 6)) +
              ((uVar42 ^ uVar62) & uVar5 ^ uVar62) + uVar6 + uVar46 + -0x3db47490;
      uVar30 = uVar30 + iVar3;
      uVar59 = (uVar4 & uVar61 ^ (uVar4 ^ uVar61) & uVar66) +
               ((uVar66 * 0x400 | uVar66 >> 0x16) ^
               (uVar66 * 0x80000 | uVar66 >> 0xd) ^ (uVar66 * 0x40000000 | uVar66 >> 2)) + iVar3;
      iVar3 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
              (uVar30 * 0x200000 | uVar30 >> 0xb) ^ (uVar30 * 0x4000000 | uVar30 >> 6)) +
              ((uVar5 ^ uVar42) & uVar30 ^ uVar42) + uVar31 + uVar62 + -0x3893ae5d;
      uVar22 = ((uVar66 ^ uVar4) & uVar59 ^ uVar66 & uVar4) +
               ((uVar59 * 0x400 | uVar59 >> 0x16) ^
               (uVar59 * 0x80000 | uVar59 >> 0xd) ^ (uVar59 * 0x40000000 | uVar59 >> 2)) + iVar3;
      uVar61 = uVar61 + iVar3;
      uVar13 = (uVar6 >> 10 ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ (uVar6 * 0x8000 | uVar6 >> 0x11)) +
               (uVar21 >> 3 ^
               (uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 * 0x2000000 | uVar21 >> 7)) + uVar51 +
               uVar26;
      uVar51 = (uVar31 >> 10 ^
               (uVar31 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 0x8000 | uVar31 >> 0x11)) +
               (uVar9 >> 3 ^ (uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 * 0x2000000 | uVar9 >> 7)) +
               uVar21 + uVar52;
      uVar64 = (uVar13 >> 10 ^
               (uVar13 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 0x8000 | uVar13 >> 0x11)) +
               (uVar60 >> 3 ^
               (uVar60 * 0x4000 | uVar60 >> 0x12) ^ (uVar60 * 0x2000000 | uVar60 >> 7)) + uVar9 +
               uVar32;
      uVar41 = (uVar51 >> 10 ^
               (uVar51 * 0x2000 | uVar51 >> 0x13) ^ (uVar51 * 0x8000 | uVar51 >> 0x11)) +
               (uVar38 >> 3 ^
               (uVar38 * 0x4000 | uVar38 >> 0x12) ^ (uVar38 * 0x2000000 | uVar38 >> 7)) + uVar60 +
               uVar28;
      iVar3 = ((uVar61 * 0x80 | uVar61 >> 0x19) ^
              (uVar61 * 0x200000 | uVar61 >> 0xb) ^ (uVar61 * 0x4000000 | uVar61 >> 6)) +
              ((uVar30 ^ uVar5) & uVar61 ^ uVar5) + uVar42 + uVar13 + -0x2e6d17e7;
      uVar4 = uVar4 + iVar3;
      uVar62 = (uVar59 & uVar66 ^ (uVar59 ^ uVar66) & uVar22) +
               ((uVar22 * 0x400 | uVar22 >> 0x16) ^
               (uVar22 * 0x80000 | uVar22 >> 0xd) ^ (uVar22 * 0x40000000 | uVar22 >> 2)) + iVar3;
      iVar3 = ((uVar4 * 0x80 | uVar4 >> 0x19) ^
              (uVar4 * 0x200000 | uVar4 >> 0xb) ^ (uVar4 * 0x4000000 | uVar4 >> 6)) +
              ((uVar61 ^ uVar30) & uVar4 ^ uVar30) + uVar51 + uVar5 + -0x2966f9dc;
      uVar42 = ((uVar22 ^ uVar59) & uVar62 ^ uVar22 & uVar59) +
               ((uVar62 * 0x400 | uVar62 >> 0x16) ^
               (uVar62 * 0x80000 | uVar62 >> 0xd) ^ (uVar62 * 0x40000000 | uVar62 >> 2)) + iVar3;
      uVar66 = uVar66 + iVar3;
      iVar3 = ((uVar66 * 0x80 | uVar66 >> 0x19) ^
              (uVar66 * 0x200000 | uVar66 >> 0xb) ^ (uVar66 * 0x4000000 | uVar66 >> 6)) +
              ((uVar4 ^ uVar61) & uVar66 ^ uVar61) + uVar64 + uVar30 + -0xbf1ca7b;
      uVar59 = uVar59 + iVar3;
      uVar5 = (uVar62 & uVar22 ^ (uVar62 ^ uVar22) & uVar42) +
              ((uVar42 * 0x400 | uVar42 >> 0x16) ^
              (uVar42 * 0x80000 | uVar42 >> 0xd) ^ (uVar42 * 0x40000000 | uVar42 >> 2)) + iVar3;
      iVar3 = ((uVar59 * 0x80 | uVar59 >> 0x19) ^
              (uVar59 * 0x200000 | uVar59 >> 0xb) ^ (uVar59 * 0x4000000 | uVar59 >> 6)) +
              ((uVar66 ^ uVar4) & uVar59 ^ uVar4) + uVar41 + uVar61 + 0x106aa070;
      uVar9 = ((uVar42 ^ uVar62) & uVar5 ^ uVar42 & uVar62) +
              ((uVar5 * 0x400 | uVar5 >> 0x16) ^
              (uVar5 * 0x80000 | uVar5 >> 0xd) ^ (uVar5 * 0x40000000 | uVar5 >> 2)) + iVar3;
      uVar22 = uVar22 + iVar3;
      uVar46 = (uVar64 >> 10 ^
               (uVar64 * 0x2000 | uVar64 >> 0x13) ^ (uVar64 * 0x8000 | uVar64 >> 0x11)) +
               (uVar49 >> 3 ^
               (uVar49 * 0x4000 | uVar49 >> 0x12) ^ (uVar49 * 0x2000000 | uVar49 >> 7)) + uVar38 +
               uVar20;
      uVar21 = (uVar41 >> 10 ^
               (uVar41 * 0x2000 | uVar41 >> 0x13) ^ (uVar41 * 0x8000 | uVar41 >> 0x11)) +
               (uVar55 >> 3 ^
               (uVar55 * 0x4000 | uVar55 >> 0x12) ^ (uVar55 * 0x2000000 | uVar55 >> 7)) + uVar49 +
               uVar6;
      uVar30 = (uVar46 >> 10 ^
               (uVar46 * 0x2000 | uVar46 >> 0x13) ^ (uVar46 * 0x8000 | uVar46 >> 0x11)) +
               (uVar56 >> 3 ^
               (uVar56 * 0x4000 | uVar56 >> 0x12) ^ (uVar56 * 0x2000000 | uVar56 >> 7)) + uVar55 +
               uVar31;
      uVar38 = (uVar21 >> 10 ^
               (uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11)) +
               (uVar48 >> 3 ^
               (uVar48 * 0x4000 | uVar48 >> 0x12) ^ (uVar48 * 0x2000000 | uVar48 >> 7)) + uVar56 +
               uVar13;
      iVar3 = ((uVar22 * 0x80 | uVar22 >> 0x19) ^
              (uVar22 * 0x200000 | uVar22 >> 0xb) ^ (uVar22 * 0x4000000 | uVar22 >> 6)) +
              ((uVar59 ^ uVar66) & uVar22 ^ uVar66) + uVar4 + uVar46 + 0x19a4c116;
      uVar44 = (uVar5 & uVar42 ^ (uVar5 ^ uVar42) & uVar9) +
               ((uVar9 * 0x400 | uVar9 >> 0x16) ^
               (uVar9 * 0x80000 | uVar9 >> 0xd) ^ (uVar9 * 0x40000000 | uVar9 >> 2)) + iVar3;
      uVar62 = uVar62 + iVar3;
      iVar3 = ((uVar62 * 0x80 | uVar62 >> 0x19) ^
              (uVar62 * 0x200000 | uVar62 >> 0xb) ^ (uVar62 * 0x4000000 | uVar62 >> 6)) +
              ((uVar22 ^ uVar59) & uVar62 ^ uVar59) + uVar21 + uVar66 + 0x1e376c08;
      uVar42 = uVar42 + iVar3;
      uVar56 = ((uVar9 ^ uVar5) & uVar44 ^ uVar9 & uVar5) +
               ((uVar44 * 0x400 | uVar44 >> 0x16) ^
               (uVar44 * 0x80000 | uVar44 >> 0xd) ^ (uVar44 * 0x40000000 | uVar44 >> 2)) + iVar3;
      iVar3 = ((uVar42 * 0x80 | uVar42 >> 0x19) ^
              (uVar42 * 0x200000 | uVar42 >> 0xb) ^ (uVar42 * 0x4000000 | uVar42 >> 6)) +
              ((uVar62 ^ uVar22) & uVar42 ^ uVar22) + uVar30 + uVar59 + 0x2748774c;
      uVar55 = (uVar44 & uVar9 ^ (uVar44 ^ uVar9) & uVar56) +
               ((uVar56 * 0x400 | uVar56 >> 0x16) ^
               (uVar56 * 0x80000 | uVar56 >> 0xd) ^ (uVar56 * 0x40000000 | uVar56 >> 2)) + iVar3;
      uVar5 = uVar5 + iVar3;
      iVar3 = ((uVar5 * 0x80 | uVar5 >> 0x19) ^
              (uVar5 * 0x200000 | uVar5 >> 0xb) ^ (uVar5 * 0x4000000 | uVar5 >> 6)) +
              ((uVar42 ^ uVar62) & uVar5 ^ uVar62) + uVar38 + uVar22 + 0x34b0bcb5;
      uVar22 = ((uVar56 ^ uVar44) & uVar55 ^ uVar56 & uVar44) +
               ((uVar55 * 0x400 | uVar55 >> 0x16) ^
               (uVar55 * 0x80000 | uVar55 >> 0xd) ^ (uVar55 * 0x40000000 | uVar55 >> 2)) + iVar3;
      uVar9 = uVar9 + iVar3;
      uVar49 = (uVar30 >> 10 ^
               (uVar30 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 0x8000 | uVar30 >> 0x11)) +
               (uVar26 >> 3 ^
               (uVar26 * 0x4000 | uVar26 >> 0x12) ^ (uVar26 * 0x2000000 | uVar26 >> 7)) + uVar48 +
               uVar51;
      uVar4 = (uVar38 >> 10 ^
              (uVar38 * 0x2000 | uVar38 >> 0x13) ^ (uVar38 * 0x8000 | uVar38 >> 0x11)) +
              (uVar52 >> 3 ^ (uVar52 * 0x4000 | uVar52 >> 0x12) ^ (uVar52 * 0x2000000 | uVar52 >> 7)
              ) + uVar26 + uVar64;
      uVar26 = (uVar49 >> 10 ^
               (uVar49 * 0x2000 | uVar49 >> 0x13) ^ (uVar49 * 0x8000 | uVar49 >> 0x11)) +
               (uVar32 >> 3 ^
               (uVar32 * 0x4000 | uVar32 >> 0x12) ^ (uVar32 * 0x2000000 | uVar32 >> 7)) + uVar52 +
               uVar41;
      uVar48 = (uVar4 >> 10 ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11)) +
               (uVar28 >> 3 ^
               (uVar28 * 0x4000 | uVar28 >> 0x12) ^ (uVar28 * 0x2000000 | uVar28 >> 7)) + uVar32 +
               uVar46;
      iVar3 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
              (uVar9 * 0x200000 | uVar9 >> 0xb) ^ (uVar9 * 0x4000000 | uVar9 >> 6)) +
              ((uVar5 ^ uVar42) & uVar9 ^ uVar42) + uVar62 + uVar49 + 0x391c0cb3;
      uVar62 = (uVar55 & uVar56 ^ (uVar55 ^ uVar56) & uVar22) +
               ((uVar22 * 0x400 | uVar22 >> 0x16) ^
               (uVar22 * 0x80000 | uVar22 >> 0xd) ^ (uVar22 * 0x40000000 | uVar22 >> 2)) + iVar3;
      uVar44 = uVar44 + iVar3;
      iVar3 = ((uVar44 * 0x80 | uVar44 >> 0x19) ^
              (uVar44 * 0x200000 | uVar44 >> 0xb) ^ (uVar44 * 0x4000000 | uVar44 >> 6)) +
              ((uVar9 ^ uVar5) & uVar44 ^ uVar5) + uVar4 + uVar42 + 0x4ed8aa4a;
      uVar56 = uVar56 + iVar3;
      uVar52 = ((uVar22 ^ uVar55) & uVar62 ^ uVar22 & uVar55) +
               ((uVar62 * 0x400 | uVar62 >> 0x16) ^
               (uVar62 * 0x80000 | uVar62 >> 0xd) ^ (uVar62 * 0x40000000 | uVar62 >> 2)) + iVar3;
      iVar3 = ((uVar56 * 0x80 | uVar56 >> 0x19) ^
              (uVar56 * 0x200000 | uVar56 >> 0xb) ^ (uVar56 * 0x4000000 | uVar56 >> 6)) +
              ((uVar44 ^ uVar9) & uVar56 ^ uVar9) + uVar26 + uVar5 + 0x5b9cca4f;
      uVar5 = (uVar62 & uVar22 ^ (uVar62 ^ uVar22) & uVar52) +
              ((uVar52 * 0x400 | uVar52 >> 0x16) ^
              (uVar52 * 0x80000 | uVar52 >> 0xd) ^ (uVar52 * 0x40000000 | uVar52 >> 2)) + iVar3;
      uVar55 = uVar55 + iVar3;
      iVar3 = ((uVar55 * 0x80 | uVar55 >> 0x19) ^
              (uVar55 * 0x200000 | uVar55 >> 0xb) ^ (uVar55 * 0x4000000 | uVar55 >> 6)) +
              ((uVar56 ^ uVar44) & uVar55 ^ uVar44) + uVar48 + uVar9 + 0x682e6ff3;
      uVar32 = ((uVar52 ^ uVar62) & uVar5 ^ uVar52 & uVar62) +
               ((uVar5 * 0x400 | uVar5 >> 0x16) ^
               (uVar5 * 0x80000 | uVar5 >> 0xd) ^ (uVar5 * 0x40000000 | uVar5 >> 2)) + iVar3;
      uVar22 = uVar22 + iVar3;
      uVar9 = (uVar26 >> 10 ^
              (uVar26 * 0x2000 | uVar26 >> 0x13) ^ (uVar26 * 0x8000 | uVar26 >> 0x11)) +
              (uVar20 >> 3 ^ (uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 * 0x2000000 | uVar20 >> 7)
              ) + uVar28 + uVar21;
      uVar30 = (uVar48 >> 10 ^
               (uVar48 * 0x2000 | uVar48 >> 0x13) ^ (uVar48 * 0x8000 | uVar48 >> 0x11)) +
               (uVar6 >> 3 ^ (uVar6 * 0x4000 | uVar6 >> 0x12) ^ (uVar6 * 0x2000000 | uVar6 >> 7)) +
               uVar20 + uVar30;
      uVar6 = (uVar9 >> 10 ^ (uVar9 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 0x8000 | uVar9 >> 0x11)) +
              (uVar31 >> 3 ^ (uVar31 * 0x4000 | uVar31 >> 0x12) ^ (uVar31 * 0x2000000 | uVar31 >> 7)
              ) + uVar6 + uVar38;
      uVar31 = (uVar30 >> 10 ^
               (uVar30 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 0x8000 | uVar30 >> 0x11)) +
               (uVar13 >> 3 ^
               (uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 * 0x2000000 | uVar13 >> 7)) + uVar31 +
               uVar49;
      iVar3 = ((uVar22 * 0x80 | uVar22 >> 0x19) ^
              (uVar22 * 0x200000 | uVar22 >> 0xb) ^ (uVar22 * 0x4000000 | uVar22 >> 6)) +
              ((uVar55 ^ uVar56) & uVar22 ^ uVar56) + uVar44 + uVar9 + 0x748f82ee;
      uVar49 = (uVar5 & uVar52 ^ (uVar5 ^ uVar52) & uVar32) +
               ((uVar32 * 0x400 | uVar32 >> 0x16) ^
               (uVar32 * 0x80000 | uVar32 >> 0xd) ^ (uVar32 * 0x40000000 | uVar32 >> 2)) + iVar3;
      uVar62 = uVar62 + iVar3;
      iVar3 = ((uVar62 * 0x80 | uVar62 >> 0x19) ^
              (uVar62 * 0x200000 | uVar62 >> 0xb) ^ (uVar62 * 0x4000000 | uVar62 >> 6)) +
              ((uVar22 ^ uVar55) & uVar62 ^ uVar55) + uVar30 + uVar56 + 0x78a5636f;
      uVar28 = ((uVar32 ^ uVar5) & uVar49 ^ uVar32 & uVar5) +
               ((uVar49 * 0x400 | uVar49 >> 0x16) ^
               (uVar49 * 0x80000 | uVar49 >> 0xd) ^ (uVar49 * 0x40000000 | uVar49 >> 2)) + iVar3;
      uVar52 = uVar52 + iVar3;
      iVar3 = ((uVar52 * 0x80 | uVar52 >> 0x19) ^
              (uVar52 * 0x200000 | uVar52 >> 0xb) ^ (uVar52 * 0x4000000 | uVar52 >> 6)) +
              ((uVar62 ^ uVar22) & uVar52 ^ uVar22) + uVar55 + uVar6 + -0x7b3787ec;
      uVar5 = uVar5 + iVar3;
      uVar21 = (uVar49 & uVar32 ^ (uVar49 ^ uVar32) & uVar28) +
               ((uVar28 * 0x400 | uVar28 >> 0x16) ^
               (uVar28 * 0x80000 | uVar28 >> 0xd) ^ (uVar28 * 0x40000000 | uVar28 >> 2)) + iVar3;
      iVar3 = ((uVar5 * 0x80 | uVar5 >> 0x19) ^
              (uVar5 * 0x200000 | uVar5 >> 0xb) ^ (uVar5 * 0x4000000 | uVar5 >> 6)) +
              ((uVar52 ^ uVar62) & uVar5 ^ uVar62) + uVar31 + uVar22 + -0x7338fdf8;
      uVar42 = ((uVar28 ^ uVar49) & uVar21 ^ uVar28 & uVar49) +
               ((uVar21 * 0x400 | uVar21 >> 0x16) ^
               (uVar21 * 0x80000 | uVar21 >> 0xd) ^ (uVar21 * 0x40000000 | uVar21 >> 2)) + iVar3;
      uVar32 = uVar32 + iVar3;
      uVar30 = (uVar6 >> 10 ^ (uVar6 * 0x2000 | uVar6 >> 0x13) ^ (uVar6 * 0x8000 | uVar6 >> 0x11)) +
               (uVar51 >> 3 ^
               (uVar51 * 0x4000 | uVar51 >> 0x12) ^ (uVar51 * 0x2000000 | uVar51 >> 7)) + uVar13 +
               uVar4;
      uVar4 = (uVar31 >> 10 ^
              (uVar31 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 0x8000 | uVar31 >> 0x11)) +
              (uVar64 >> 3 ^ (uVar64 * 0x4000 | uVar64 >> 0x12) ^ (uVar64 * 0x2000000 | uVar64 >> 7)
              ) + uVar51 + uVar26;
      iVar3 = ((uVar32 * 0x80 | uVar32 >> 0x19) ^
              (uVar32 * 0x200000 | uVar32 >> 0xb) ^ (uVar32 * 0x4000000 | uVar32 >> 6)) +
              ((uVar5 ^ uVar52) & uVar32 ^ uVar52) + uVar30 + uVar62 + -0x6f410006;
      uVar6 = (uVar21 & uVar28 ^ (uVar21 ^ uVar28) & uVar42) +
              ((uVar42 * 0x400 | uVar42 >> 0x16) ^
              (uVar42 * 0x80000 | uVar42 >> 0xd) ^ (uVar42 * 0x40000000 | uVar42 >> 2)) + iVar3;
      uVar49 = uVar49 + iVar3;
      iVar3 = ((uVar49 * 0x80 | uVar49 >> 0x19) ^
              (uVar49 * 0x200000 | uVar49 >> 0xb) ^ (uVar49 * 0x4000000 | uVar49 >> 6)) +
              ((uVar32 ^ uVar5) & uVar49 ^ uVar5) + uVar4 + uVar52 + -0x5baf9315;
      uVar31 = ((uVar42 ^ uVar21) & uVar6 ^ uVar42 & uVar21) +
               ((uVar6 * 0x400 | uVar6 >> 0x16) ^
               (uVar6 * 0x80000 | uVar6 >> 0xd) ^ (uVar6 * 0x40000000 | uVar6 >> 2)) + iVar3;
      uVar28 = uVar28 + iVar3;
      iVar3 = (uVar41 >> 3 ^ (uVar41 * 0x4000 | uVar41 >> 0x12) ^ (uVar41 * 0x2000000 | uVar41 >> 7)
              ) + uVar64 + uVar48 +
              (uVar30 >> 10 ^
              (uVar30 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 0x8000 | uVar30 >> 0x11)) + uVar5 +
              ((uVar49 ^ uVar32) & uVar28 ^ uVar32) +
              ((uVar28 * 0x80 | uVar28 >> 0x19) ^
              (uVar28 * 0x200000 | uVar28 >> 0xb) ^ (uVar28 * 0x4000000 | uVar28 >> 6)) +
              -0x41065c09;
      uVar30 = (uVar6 & uVar42 ^ (uVar6 ^ uVar42) & uVar31) +
               ((uVar31 * 0x400 | uVar31 >> 0x16) ^
               (uVar31 * 0x80000 | uVar31 >> 0xd) ^ (uVar31 * 0x40000000 | uVar31 >> 2)) + iVar3;
      uVar21 = uVar21 + iVar3;
      iVar3 = ((uVar21 * 0x80 | uVar21 >> 0x19) ^
              (uVar21 * 0x200000 | uVar21 >> 0xb) ^ (uVar21 * 0x4000000 | uVar21 >> 6)) +
              (uVar46 >> 3 ^ (uVar46 * 0x4000 | uVar46 >> 0x12) ^ (uVar46 * 0x2000000 | uVar46 >> 7)
              ) + uVar41 + uVar9 +
              (uVar4 >> 10 ^ (uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11)) +
              uVar32 + ((uVar28 ^ uVar49) & uVar21 ^ uVar49) + -0x398e870e;
      uVar7 = uVar30 + uVar7;
      uVar23 = ((uVar31 ^ uVar6) & uVar30 ^ uVar31 & uVar6) + uVar23 +
               ((uVar30 * 0x400 | uVar30 >> 0x16) ^
               (uVar30 * 0x80000 | uVar30 >> 0xd) ^ (uVar30 * 0x40000000 | uVar30 >> 2)) + iVar3;
      uVar27 = uVar31 + uVar27;
      uVar12 = uVar6 + uVar12;
      uVar45 = uVar42 + uVar45 + iVar3;
      uVar53 = uVar21 + uVar53;
      uVar47 = uVar28 + uVar47;
      uVar39 = uVar49 + uVar39;
      param_2 = param_2 + 0x10;
    } while (param_2 != puVar24);
  }
  *param_1 = uVar23;
  param_1[1] = uVar7;
  param_1[2] = uVar27;
  param_1[3] = uVar12;
  param_1[4] = uVar45;
  param_1[5] = uVar53;
  param_1[6] = uVar47;
  param_1[7] = uVar39;
  return;
}


