// 00714dd0 compress

/* sha2[7efb180a76699f7c]::sha512::x86::compress */

void __rustcall
sha2[7efb180a76699f7c]::sha512::x86::compress
          (ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  
  if ((avx2_cpuid::STORAGE == '\x01') ||
     ((avx2_cpuid::STORAGE == -1 && (cVar1 = avx2_cpuid::init_get::init_inner(), cVar1 != '\0')))) {
    sha512_compress_x86_64_avx2(param_1);
    return;
  }
  uVar18 = *param_1;
  uVar50 = param_1[1];
  uVar48 = param_1[2];
  uVar6 = param_1[3];
  uVar11 = param_1[4];
  uVar43 = param_1[5];
  uVar20 = param_1[6];
  uVar54 = param_1[7];
  if (param_3 != 0) {
    puVar12 = param_2 + param_3 * 0x10;
    do {
      uVar5 = *param_2;
      uVar14 = param_2[1];
      uVar7 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
              | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
              | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      uVar31 = uVar14 >> 0x38;
      uVar13 = uVar31 | (uVar14 & 0xff000000000000) >> 0x28 | (uVar14 & 0xff0000000000) >> 0x18 |
               (uVar14 & 0xff00000000) >> 8 | (uVar14 & 0xff000000) << 8 |
               (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
      uVar5 = param_2[2];
      uVar10 = uVar5 >> 0x38;
      uVar8 = uVar10 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
              (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
              (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = ((uVar20 ^ uVar43) & uVar11 ^ uVar20) + uVar54 +
               ((uVar11 << 0x17 | uVar11 >> 0x29) ^
               (uVar11 << 0x2e | uVar11 >> 0x12) ^ (uVar11 << 0x32 | uVar11 >> 0xe)) +
               0x428a2f98d728ae22 + uVar7;
      uVar44 = (uVar48 & uVar50 ^ (uVar48 ^ uVar50) & uVar18) +
               ((uVar18 << 0x19 | uVar18 >> 0x27) ^
               (uVar18 << 0x1e | uVar18 >> 0x22) ^ (uVar18 << 0x24 | uVar18 >> 0x1c)) + lVar22;
      uVar55 = lVar22 + uVar6;
      lVar22 = ((uVar43 ^ uVar11) & uVar55 ^ uVar43) + uVar20 + uVar13 + 0x7137449123ef65cd +
               ((uVar55 * 0x800000 | uVar55 >> 0x29) ^
               (uVar55 << 0x2e | uVar55 >> 0x12) ^ (uVar55 << 0x32 | uVar55 >> 0xe));
      uVar23 = (uVar50 & uVar18 ^ (uVar50 ^ uVar18) & uVar44) +
               ((uVar44 * 0x2000000 | uVar44 >> 0x27) ^
               (uVar44 * 0x40000000 | uVar44 >> 0x22) ^ (uVar44 << 0x24 | uVar44 >> 0x1c)) + lVar22;
      uVar21 = lVar22 + uVar48;
      lVar22 = ((uVar55 ^ uVar11) & uVar21 ^ uVar11) + uVar43 + uVar8 + -0x4a3f043013b2c4d1 +
               ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
               (uVar21 << 0x2e | uVar21 >> 0x12) ^ (uVar21 << 0x32 | uVar21 >> 0xe));
      uVar37 = (uVar44 & uVar18 ^ (uVar44 ^ uVar18) & uVar23) +
               ((uVar23 * 0x2000000 | uVar23 >> 0x27) ^
               (uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 << 0x24 | uVar23 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar50;
      uVar5 = param_2[3];
      uVar36 = uVar5 >> 0x38;
      uVar9 = uVar36 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
              (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
              (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = ((uVar21 ^ uVar55) & uVar51 ^ uVar55) + uVar9 + uVar11 + -0x164a245a7e762444 +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar14 = (uVar23 & uVar44 ^ (uVar23 ^ uVar44) & uVar37) +
               ((uVar37 * 0x2000000 | uVar37 >> 0x27) ^
               (uVar37 * 0x40000000 | uVar37 >> 0x22) ^ (uVar37 << 0x24 | uVar37 >> 0x1c)) + lVar22;
      uVar19 = lVar22 + uVar18;
      uVar5 = param_2[4];
      uVar47 = uVar5 >> 0x38;
      uVar32 = uVar47 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
               (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
               | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = uVar55 + uVar32 + ((uVar51 ^ uVar21) & uVar19 ^ uVar21) + 0x3956c25bf348b538 +
               ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
               (uVar19 << 0x2e | uVar19 >> 0x12) ^ (uVar19 << 0x32 | uVar19 >> 0xe));
      uVar5 = param_2[5];
      uVar55 = uVar5 >> 0x38;
      uVar2 = uVar55 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
              (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
              (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      uVar33 = (uVar37 & uVar23 ^ (uVar37 ^ uVar23) & uVar14) +
               ((uVar14 * 0x2000000 | uVar14 >> 0x27) ^
               (uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 << 0x24 | uVar14 >> 0x1c)) + lVar22;
      uVar44 = lVar22 + uVar44;
      lVar22 = uVar21 + uVar2 + ((uVar19 ^ uVar51) & uVar44 ^ uVar51) + 0x59f111f1b605d019 +
               ((uVar44 * 0x800000 | uVar44 >> 0x29) ^
               (uVar44 << 0x2e | uVar44 >> 0x12) ^ (uVar44 << 0x32 | uVar44 >> 0xe));
      uVar45 = (uVar14 & uVar37 ^ (uVar14 ^ uVar37) & uVar33) +
               ((uVar33 * 0x2000000 | uVar33 >> 0x27) ^
               (uVar33 * 0x40000000 | uVar33 >> 0x22) ^ (uVar33 << 0x24 | uVar33 >> 0x1c)) + lVar22;
      uVar23 = lVar22 + uVar23;
      uVar5 = param_2[6];
      uVar21 = uVar5 >> 0x38;
      uVar24 = uVar21 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
               (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
               | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = uVar51 + uVar24 + ((uVar44 ^ uVar19) & uVar23 ^ uVar19) + -0x6dc07d5b50e6b065 +
               ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
               (uVar23 << 0x2e | uVar23 >> 0x12) ^ (uVar23 << 0x32 | uVar23 >> 0xe));
      uVar25 = (uVar33 & uVar14 ^ (uVar33 ^ uVar14) & uVar45) +
               ((uVar45 * 0x2000000 | uVar45 >> 0x27) ^
               (uVar45 * 0x40000000 | uVar45 >> 0x22) ^ (uVar45 << 0x24 | uVar45 >> 0x1c)) + lVar22;
      uVar37 = lVar22 + uVar37;
      uVar5 = param_2[7];
      uVar51 = uVar5 >> 0x38;
      uVar38 = uVar51 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
               (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
               | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = uVar19 + uVar38 + ((uVar23 ^ uVar44) & uVar37 ^ uVar44) + -0x54e3a12a25927ee8 +
               ((uVar37 * 0x800000 | uVar37 >> 0x29) ^
               (uVar37 << 0x2e | uVar37 >> 0x12) ^ (uVar37 << 0x32 | uVar37 >> 0xe));
      uVar5 = param_2[8];
      uVar19 = uVar5 >> 0x38;
      uVar3 = uVar19 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
              (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
              (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      uVar49 = (uVar45 & uVar33 ^ (uVar45 ^ uVar33) & uVar25) +
               ((uVar25 * 0x2000000 | uVar25 >> 0x27) ^
               (uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 << 0x24 | uVar25 >> 0x1c)) + lVar22;
      uVar14 = lVar22 + uVar14;
      lVar22 = uVar44 + uVar3 + ((uVar37 ^ uVar23) & uVar14 ^ uVar23) + -0x27f855675cfcfdbe +
               ((uVar14 * 0x800000 | uVar14 >> 0x29) ^
               (uVar14 << 0x2e | uVar14 >> 0x12) ^ (uVar14 << 0x32 | uVar14 >> 0xe));
      uVar15 = (uVar25 & uVar45 ^ (uVar25 ^ uVar45) & uVar49) +
               ((uVar49 * 0x2000000 | uVar49 >> 0x27) ^
               (uVar49 * 0x40000000 | uVar49 >> 0x22) ^ (uVar49 << 0x24 | uVar49 >> 0x1c)) + lVar22;
      uVar33 = lVar22 + uVar33;
      uVar5 = param_2[9];
      uVar44 = uVar5 >> 0x38;
      uVar53 = uVar44 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
               (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
               | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = uVar23 + uVar53 + ((uVar14 ^ uVar37) & uVar33 ^ uVar37) + 0x12835b0145706fbe +
               ((uVar33 * 0x800000 | uVar33 >> 0x29) ^
               (uVar33 << 0x2e | uVar33 >> 0x12) ^ (uVar33 << 0x32 | uVar33 >> 0xe));
      uVar39 = (uVar49 & uVar25 ^ (uVar49 ^ uVar25) & uVar15) +
               ((uVar15 * 0x2000000 | uVar15 >> 0x27) ^
               (uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 << 0x24 | uVar15 >> 0x1c)) + lVar22;
      uVar45 = lVar22 + uVar45;
      uVar5 = param_2[10];
      uVar23 = uVar5 >> 0x38;
      uVar34 = uVar23 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
               (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
               | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = uVar37 + uVar34 + ((uVar33 ^ uVar14) & uVar45 ^ uVar14) + 0x243185be4ee4b28c +
               ((uVar45 * 0x800000 | uVar45 >> 0x29) ^
               (uVar45 << 0x2e | uVar45 >> 0x12) ^ (uVar45 << 0x32 | uVar45 >> 0xe));
      uVar5 = param_2[0xb];
      uVar37 = uVar5 >> 0x38;
      uVar4 = uVar37 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
              (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
              (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      uVar46 = (uVar15 & uVar49 ^ (uVar15 ^ uVar49) & uVar39) +
               ((uVar39 * 0x2000000 | uVar39 >> 0x27) ^
               (uVar39 * 0x40000000 | uVar39 >> 0x22) ^ (uVar39 << 0x24 | uVar39 >> 0x1c)) + lVar22;
      uVar25 = lVar22 + uVar25;
      lVar22 = uVar14 + uVar4 + ((uVar45 ^ uVar33) & uVar25 ^ uVar33) + 0x550c7dc3d5ffb4e2 +
               ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
               (uVar25 << 0x2e | uVar25 >> 0x12) ^ (uVar25 << 0x32 | uVar25 >> 0xe));
      uVar35 = (uVar39 & uVar15 ^ (uVar39 ^ uVar15) & uVar46) +
               ((uVar46 * 0x2000000 | uVar46 >> 0x27) ^
               (uVar46 * 0x40000000 | uVar46 >> 0x22) ^ (uVar46 << 0x24 | uVar46 >> 0x1c)) + lVar22;
      uVar49 = lVar22 + uVar49;
      uVar5 = param_2[0xc];
      uVar42 = uVar5 >> 0x38;
      uVar26 = uVar42 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
               (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
               | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = uVar33 + uVar26 + ((uVar25 ^ uVar45) & uVar49 ^ uVar45) + 0x72be5d74f27b896f +
               ((uVar49 * 0x800000 | uVar49 >> 0x29) ^
               (uVar49 << 0x2e | uVar49 >> 0x12) ^ (uVar49 << 0x32 | uVar49 >> 0xe));
      uVar27 = (uVar46 & uVar39 ^ (uVar46 ^ uVar39) & uVar35) +
               ((uVar35 * 0x2000000 | uVar35 >> 0x27) ^
               (uVar35 * 0x40000000 | uVar35 >> 0x22) ^ (uVar35 << 0x24 | uVar35 >> 0x1c)) + lVar22;
      uVar15 = lVar22 + uVar15;
      uVar5 = param_2[0xd];
      uVar33 = uVar5 >> 0x38;
      uVar16 = uVar33 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
               (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18
               | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      lVar22 = uVar45 + uVar16 + ((uVar49 ^ uVar25) & uVar15 ^ uVar25) + -0x7f214e01c4e9694f +
               ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
               (uVar15 << 0x2e | uVar15 >> 0x12) ^ (uVar15 << 0x32 | uVar15 >> 0xe));
      uVar5 = param_2[0xe];
      uVar45 = uVar5 >> 0x38;
      uVar40 = uVar45 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18;
      uVar17 = uVar40 | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
      uVar28 = (uVar35 & uVar46 ^ (uVar35 ^ uVar46) & uVar27) +
               ((uVar27 * 0x2000000 | uVar27 >> 0x27) ^
               (uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 << 0x24 | uVar27 >> 0x1c)) + lVar22;
      uVar39 = lVar22 + uVar39;
      lVar22 = uVar25 + uVar17 + ((uVar15 ^ uVar49) & uVar39 ^ uVar49) + -0x6423f958da38edcb +
               ((uVar39 * 0x800000 | uVar39 >> 0x29) ^
               (uVar39 << 0x2e | uVar39 >> 0x12) ^ (uVar39 << 0x32 | uVar39 >> 0xe));
      uVar29 = (uVar27 & uVar35 ^ (uVar27 ^ uVar35) & uVar28) +
               ((uVar28 * 0x2000000 | uVar28 >> 0x27) ^
               (uVar28 * 0x40000000 | uVar28 >> 0x22) ^ (uVar28 << 0x24 | uVar28 >> 0x1c)) + lVar22;
      uVar46 = lVar22 + uVar46;
      uVar14 = param_2[0xf];
      uVar25 = uVar14 >> 0x38;
      uVar41 = uVar25 | (uVar14 & 0xff000000000000) >> 0x28 | (uVar14 & 0xff0000000000) >> 0x18;
      uVar30 = uVar41 | (uVar14 & 0xff00000000) >> 8 | (uVar14 & 0xff000000) << 8 |
               (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
      lVar22 = uVar49 + uVar30 + ((uVar39 ^ uVar15) & uVar46 ^ uVar15) + -0x3e640e8b3096d96c +
               ((uVar46 * 0x800000 | uVar46 >> 0x29) ^
               (uVar46 << 0x2e | uVar46 >> 0x12) ^ (uVar46 << 0x32 | uVar46 >> 0xe));
      uVar49 = (uVar28 & uVar27 ^ (uVar28 ^ uVar27) & uVar29) +
               ((uVar29 * 0x2000000 | uVar29 >> 0x27) ^
               (uVar29 * 0x40000000 | uVar29 >> 0x22) ^ (uVar29 << 0x24 | uVar29 >> 0x1c)) + lVar22;
      uVar35 = lVar22 + uVar35;
      uVar7 = uVar7 + uVar53 +
              (uVar13 >> 7 ^
              (uVar31 << 0x38 | uVar13 >> 8) ^
              (uVar13 >> 1 | (ulonglong)((uVar31 & 1) != 0) << 0x3f)) +
              (uVar17 >> 6 ^ (uVar17 << 3 | (uVar5 & 0xff) >> 5) ^ (uVar40 << 0x2d | uVar17 >> 0x13)
              );
      uVar13 = uVar13 + uVar34 +
               (uVar8 >> 7 ^
               (uVar10 << 0x38 | uVar8 >> 8) ^ (uVar8 >> 1 | (ulonglong)((uVar10 & 1) != 0) << 0x3f)
               ) + (uVar30 >> 6 ^
                   (uVar30 << 3 | (uVar14 & 0xff) >> 5) ^ (uVar41 << 0x2d | uVar30 >> 0x13));
      uVar52 = uVar8 + uVar4 +
               (uVar9 >> 7 ^
               (uVar36 << 0x38 | uVar9 >> 8) ^ (uVar9 >> 1 | (ulonglong)((uVar36 & 1) != 0) << 0x3f)
               ) + (uVar7 >> 6 ^ (uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 << 0x2d | uVar7 >> 0x13));
      lVar22 = uVar15 + uVar7 + ((uVar46 ^ uVar39) & uVar35 ^ uVar39) + -0x1b64963e610eb52e +
               ((uVar35 * 0x800000 | uVar35 >> 0x29) ^
               (uVar35 << 0x2e | uVar35 >> 0x12) ^ (uVar35 << 0x32 | uVar35 >> 0xe));
      uVar31 = (uVar29 & uVar28 ^ (uVar29 ^ uVar28) & uVar49) +
               ((uVar49 * 0x2000000 | uVar49 >> 0x27) ^
               (uVar49 * 0x40000000 | uVar49 >> 0x22) ^ (uVar49 << 0x24 | uVar49 >> 0x1c)) + lVar22;
      uVar27 = lVar22 + uVar27;
      uVar9 = uVar9 + uVar26 +
              (uVar32 >> 7 ^
              (uVar47 << 0x38 | uVar32 >> 8) ^
              (uVar32 >> 1 | (ulonglong)((uVar47 & 1) != 0) << 0x3f)) +
              (uVar13 >> 6 ^ (uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 << 0x2d | uVar13 >> 0x13));
      lVar22 = uVar39 + uVar13 + ((uVar35 ^ uVar46) & uVar27 ^ uVar46) + -0x1041b879c7b0da1d +
               ((uVar27 * 0x800000 | uVar27 >> 0x29) ^
               (uVar27 << 0x2e | uVar27 >> 0x12) ^ (uVar27 << 0x32 | uVar27 >> 0xe));
      uVar47 = (uVar49 & uVar29 ^ (uVar49 ^ uVar29) & uVar31) +
               ((uVar31 * 0x2000000 | uVar31 >> 0x27) ^
               (uVar31 * 0x40000000 | uVar31 >> 0x22) ^ (uVar31 << 0x24 | uVar31 >> 0x1c)) + lVar22;
      uVar28 = lVar22 + uVar28;
      lVar22 = uVar46 + uVar52 + ((uVar27 ^ uVar35) & uVar28 ^ uVar35) + 0xfc19dc68b8cd5b5 +
               ((uVar28 * 0x800000 | uVar28 >> 0x29) ^
               (uVar28 << 0x2e | uVar28 >> 0x12) ^ (uVar28 << 0x32 | uVar28 >> 0xe));
      uVar8 = (uVar31 & uVar49 ^ (uVar31 ^ uVar49) & uVar47) +
              ((uVar47 * 0x2000000 | uVar47 >> 0x27) ^
              (uVar47 * 0x40000000 | uVar47 >> 0x22) ^ (uVar47 << 0x24 | uVar47 >> 0x1c)) + lVar22;
      uVar29 = lVar22 + uVar29;
      lVar22 = uVar35 + uVar9 + ((uVar28 ^ uVar27) & uVar29 ^ uVar27) + 0x240ca1cc77ac9c65 +
               ((uVar29 * 0x800000 | uVar29 >> 0x29) ^
               (uVar29 << 0x2e | uVar29 >> 0x12) ^ (uVar29 << 0x32 | uVar29 >> 0xe));
      uVar36 = (uVar47 & uVar31 ^ (uVar47 ^ uVar31) & uVar8) +
               ((uVar8 * 0x2000000 | uVar8 >> 0x27) ^
               (uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 << 0x24 | uVar8 >> 0x1c)) + lVar22;
      uVar49 = lVar22 + uVar49;
      uVar40 = uVar32 + uVar16 +
               (uVar2 >> 7 ^
               (uVar55 << 0x38 | uVar2 >> 8) ^ (uVar2 >> 1 | (ulonglong)((uVar55 & 1) != 0) << 0x3f)
               ) + (uVar52 >> 6 ^ (uVar52 * 8 | uVar52 >> 0x3d) ^ (uVar52 << 0x2d | uVar52 >> 0x13))
      ;
      uVar15 = uVar2 + uVar17 +
               (uVar24 >> 7 ^
               (uVar21 << 0x38 | uVar24 >> 8) ^
               (uVar24 >> 1 | (ulonglong)((uVar21 & 1) != 0) << 0x3f)) +
               (uVar9 >> 6 ^ (uVar9 * 8 | uVar9 >> 0x3d) ^ (uVar9 << 0x2d | uVar9 >> 0x13));
      uVar41 = uVar24 + uVar30 +
               (uVar38 >> 7 ^
               (uVar51 << 0x38 | uVar38 >> 8) ^
               (uVar38 >> 1 | (ulonglong)((uVar51 & 1) != 0) << 0x3f)) +
               (uVar40 >> 6 ^ (uVar40 * 8 | uVar40 >> 0x3d) ^ (uVar40 << 0x2d | uVar40 >> 0x13));
      lVar22 = uVar27 + uVar40 + ((uVar29 ^ uVar28) & uVar49 ^ uVar28) + 0x2de92c6f592b0275 +
               ((uVar49 * 0x800000 | uVar49 >> 0x29) ^
               (uVar49 << 0x2e | uVar49 >> 0x12) ^ (uVar49 << 0x32 | uVar49 >> 0xe));
      uVar10 = (uVar8 & uVar47 ^ (uVar8 ^ uVar47) & uVar36) +
               ((uVar36 * 0x2000000 | uVar36 >> 0x27) ^
               (uVar36 * 0x40000000 | uVar36 >> 0x22) ^ (uVar36 << 0x24 | uVar36 >> 0x1c)) + lVar22;
      uVar31 = lVar22 + uVar31;
      lVar22 = uVar28 + uVar15 + ((uVar49 ^ uVar29) & uVar31 ^ uVar29) + 0x4a7484aa6ea6e483 +
               ((uVar31 * 0x800000 | uVar31 >> 0x29) ^
               (uVar31 << 0x2e | uVar31 >> 0x12) ^ (uVar31 << 0x32 | uVar31 >> 0xe));
      uVar55 = (uVar36 & uVar8 ^ (uVar36 ^ uVar8) & uVar10) +
               ((uVar10 * 0x2000000 | uVar10 >> 0x27) ^
               (uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 << 0x24 | uVar10 >> 0x1c)) + lVar22;
      uVar47 = lVar22 + uVar47;
      lVar22 = uVar29 + uVar41 + ((uVar31 ^ uVar49) & uVar47 ^ uVar49) + 0x5cb0a9dcbd41fbd4 +
               ((uVar47 * 0x800000 | uVar47 >> 0x29) ^
               (uVar47 << 0x2e | uVar47 >> 0x12) ^ (uVar47 << 0x32 | uVar47 >> 0xe));
      uVar51 = (uVar10 & uVar36 ^ (uVar10 ^ uVar36) & uVar55) +
               ((uVar55 * 0x2000000 | uVar55 >> 0x27) ^
               (uVar55 * 0x40000000 | uVar55 >> 0x22) ^ (uVar55 << 0x24 | uVar55 >> 0x1c)) + lVar22;
      uVar8 = lVar22 + uVar8;
      uVar35 = (uVar3 >> 7 ^
               (uVar19 << 0x38 | uVar3 >> 8) ^ (uVar3 >> 1 | (ulonglong)((uVar19 & 1) != 0) << 0x3f)
               ) + uVar38 + uVar7 +
               (uVar15 >> 6 ^ (uVar15 * 8 | uVar15 >> 0x3d) ^ (uVar15 << 0x2d | uVar15 >> 0x13));
      lVar22 = uVar49 + uVar35 + ((uVar47 ^ uVar31) & uVar8 ^ uVar31) + 0x76f988da831153b5 +
               ((uVar8 * 0x800000 | uVar8 >> 0x29) ^
               (uVar8 << 0x2e | uVar8 >> 0x12) ^ (uVar8 << 0x32 | uVar8 >> 0xe));
      uVar49 = (uVar53 >> 7 ^
               (uVar44 << 0x38 | uVar53 >> 8) ^
               (uVar53 >> 1 | (ulonglong)((uVar44 & 1) != 0) << 0x3f)) + uVar3 + uVar13 +
               (uVar41 >> 6 ^ (uVar41 * 8 | uVar41 >> 0x3d) ^ (uVar41 << 0x2d | uVar41 >> 0x13));
      uVar5 = (uVar34 >> 7 ^
              (uVar23 << 0x38 | uVar34 >> 8) ^
              (uVar34 >> 1 | (ulonglong)((uVar23 & 1) != 0) << 0x3f)) + uVar53 + uVar52 +
              (uVar35 >> 6 ^ (uVar35 * 8 | uVar35 >> 0x3d) ^ (uVar35 << 0x2d | uVar35 >> 0x13));
      uVar21 = (uVar55 & uVar10 ^ (uVar55 ^ uVar10) & uVar51) +
               ((uVar51 * 0x2000000 | uVar51 >> 0x27) ^
               (uVar51 * 0x40000000 | uVar51 >> 0x22) ^ (uVar51 << 0x24 | uVar51 >> 0x1c)) + lVar22;
      uVar36 = lVar22 + uVar36;
      uVar14 = (uVar4 >> 7 ^
               (uVar37 << 0x38 | uVar4 >> 8) ^ (uVar4 >> 1 | (ulonglong)((uVar37 & 1) != 0) << 0x3f)
               ) + uVar34 + uVar9 +
               (uVar49 >> 6 ^ (uVar49 * 8 | uVar49 >> 0x3d) ^ (uVar49 << 0x2d | uVar49 >> 0x13));
      lVar22 = uVar31 + uVar49 + ((uVar8 ^ uVar47) & uVar36 ^ uVar47) + -0x67c1aead11992055 +
               ((uVar36 * 0x800000 | uVar36 >> 0x29) ^
               (uVar36 << 0x2e | uVar36 >> 0x12) ^ (uVar36 << 0x32 | uVar36 >> 0xe));
      uVar31 = (uVar51 & uVar55 ^ (uVar51 ^ uVar55) & uVar21) +
               ((uVar21 * 0x2000000 | uVar21 >> 0x27) ^
               (uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 << 0x24 | uVar21 >> 0x1c)) + lVar22;
      uVar10 = lVar22 + uVar10;
      lVar22 = uVar47 + uVar5 + ((uVar36 ^ uVar8) & uVar10 ^ uVar8) + -0x57ce3992d24bcdf0 +
               ((uVar10 * 0x800000 | uVar10 >> 0x29) ^
               (uVar10 << 0x2e | uVar10 >> 0x12) ^ (uVar10 << 0x32 | uVar10 >> 0xe));
      uVar23 = (uVar21 & uVar51 ^ (uVar21 ^ uVar51) & uVar31) +
               ((uVar31 * 0x2000000 | uVar31 >> 0x27) ^
               (uVar31 * 0x40000000 | uVar31 >> 0x22) ^ (uVar31 << 0x24 | uVar31 >> 0x1c)) + lVar22;
      uVar55 = lVar22 + uVar55;
      lVar22 = uVar8 + uVar14 + ((uVar10 ^ uVar36) & uVar55 ^ uVar36) + -0x4ffcd8376704dec1 +
               ((uVar55 * 0x800000 | uVar55 >> 0x29) ^
               (uVar55 << 0x2e | uVar55 >> 0x12) ^ (uVar55 << 0x32 | uVar55 >> 0xe));
      uVar2 = (uVar31 & uVar21 ^ (uVar31 ^ uVar21) & uVar23) +
              ((uVar23 * 0x2000000 | uVar23 >> 0x27) ^
              (uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 << 0x24 | uVar23 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar51;
      uVar8 = (uVar26 >> 7 ^
              (uVar42 << 0x38 | uVar26 >> 8) ^
              (uVar26 >> 1 | (ulonglong)((uVar42 & 1) != 0) << 0x3f)) + uVar4 + uVar40 +
              (uVar5 >> 6 ^ (uVar5 * 8 | uVar5 >> 0x3d) ^ (uVar5 << 0x2d | uVar5 >> 0x13));
      lVar22 = uVar36 + uVar8 + ((uVar55 ^ uVar10) & uVar51 ^ uVar10) + -0x40a680384110f11c +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar39 = (uVar16 >> 7 ^
               (uVar33 << 0x38 | uVar16 >> 8) ^
               (uVar16 >> 1 | (ulonglong)((uVar33 & 1) != 0) << 0x3f)) + uVar26 + uVar15 +
               (uVar14 >> 6 ^ (uVar14 * 8 | uVar14 >> 0x3d) ^ (uVar14 << 0x2d | uVar14 >> 0x13));
      uVar19 = (uVar17 >> 7 ^
               (uVar45 << 0x38 | uVar17 >> 8) ^
               (uVar17 >> 1 | (ulonglong)((uVar45 & 1) != 0) << 0x3f)) + uVar16 + uVar41 +
               (uVar8 >> 6 ^ (uVar8 * 8 | uVar8 >> 0x3d) ^ (uVar8 << 0x2d | uVar8 >> 0x13));
      uVar36 = (uVar23 & uVar31 ^ (uVar23 ^ uVar31) & uVar2) +
               ((uVar2 * 0x2000000 | uVar2 >> 0x27) ^
               (uVar2 * 0x40000000 | uVar2 >> 0x22) ^ (uVar2 << 0x24 | uVar2 >> 0x1c)) + lVar22;
      uVar21 = lVar22 + uVar21;
      uVar44 = (uVar30 >> 7 ^
               (uVar25 << 0x38 | uVar30 >> 8) ^
               (uVar30 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f)) + uVar17 + uVar35 +
               (uVar39 >> 6 ^ (uVar39 * 8 | uVar39 >> 0x3d) ^ (uVar39 << 0x2d | uVar39 >> 0x13));
      lVar22 = uVar10 + uVar39 + ((uVar51 ^ uVar55) & uVar21 ^ uVar55) + -0x391ff40cc257703e +
               ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
               (uVar21 << 0x2e | uVar21 >> 0x12) ^ (uVar21 << 0x32 | uVar21 >> 0xe));
      uVar45 = (uVar2 & uVar23 ^ (uVar2 ^ uVar23) & uVar36) +
               ((uVar36 * 0x2000000 | uVar36 >> 0x27) ^
               (uVar36 * 0x40000000 | uVar36 >> 0x22) ^ (uVar36 << 0x24 | uVar36 >> 0x1c)) + lVar22;
      uVar31 = lVar22 + uVar31;
      lVar22 = uVar55 + uVar19 + ((uVar21 ^ uVar51) & uVar31 ^ uVar51) + -0x2a586eb86cf558db +
               ((uVar31 * 0x800000 | uVar31 >> 0x29) ^
               (uVar31 << 0x2e | uVar31 >> 0x12) ^ (uVar31 << 0x32 | uVar31 >> 0xe));
      uVar37 = (uVar36 & uVar2 ^ (uVar36 ^ uVar2) & uVar45) +
               ((uVar45 * 0x2000000 | uVar45 >> 0x27) ^
               (uVar45 * 0x40000000 | uVar45 >> 0x22) ^ (uVar45 << 0x24 | uVar45 >> 0x1c)) + lVar22;
      uVar23 = lVar22 + uVar23;
      lVar22 = uVar51 + uVar44 + ((uVar31 ^ uVar21) & uVar23 ^ uVar21) + 0x6ca6351e003826f +
               ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
               (uVar23 << 0x2e | uVar23 >> 0x12) ^ (uVar23 << 0x32 | uVar23 >> 0xe));
      uVar51 = (uVar45 & uVar36 ^ (uVar45 ^ uVar36) & uVar37) +
               ((uVar37 * 0x2000000 | uVar37 >> 0x27) ^
               (uVar37 * 0x40000000 | uVar37 >> 0x22) ^ (uVar37 << 0x24 | uVar37 >> 0x1c)) + lVar22;
      uVar2 = lVar22 + uVar2;
      uVar3 = (uVar7 >> 7 ^
              (uVar7 << 0x38 | uVar7 >> 8) ^ (uVar7 >> 1 | (ulonglong)((uVar7 & 1) != 0) << 0x3f)) +
              uVar30 + uVar49 +
              (uVar19 >> 6 ^ (uVar19 * 8 | uVar19 >> 0x3d) ^ (uVar19 << 0x2d | uVar19 >> 0x13));
      lVar22 = uVar21 + uVar3 + ((uVar23 ^ uVar31) & uVar2 ^ uVar31) + 0x142929670a0e6e70 +
               ((uVar2 * 0x800000 | uVar2 >> 0x29) ^
               (uVar2 << 0x2e | uVar2 >> 0x12) ^ (uVar2 << 0x32 | uVar2 >> 0xe));
      uVar33 = (uVar13 >> 7 ^
               (uVar13 << 0x38 | uVar13 >> 8) ^
               (uVar13 >> 1 | (ulonglong)((uVar13 & 1) != 0) << 0x3f)) + uVar7 + uVar5 +
               (uVar44 >> 6 ^ (uVar44 * 8 | uVar44 >> 0x3d) ^ (uVar44 << 0x2d | uVar44 >> 0x13));
      uVar10 = (uVar52 >> 7 ^
               (uVar52 << 0x38 | uVar52 >> 8) ^
               (uVar52 >> 1 | (ulonglong)((uVar52 & 1) != 0) << 0x3f)) + uVar13 + uVar14 +
               (uVar3 >> 6 ^ (uVar3 * 8 | uVar3 >> 0x3d) ^ (uVar3 << 0x2d | uVar3 >> 0x13));
      uVar4 = (uVar37 & uVar45 ^ (uVar37 ^ uVar45) & uVar51) +
              ((uVar51 * 0x2000000 | uVar51 >> 0x27) ^
              (uVar51 * 0x40000000 | uVar51 >> 0x22) ^ (uVar51 << 0x24 | uVar51 >> 0x1c)) + lVar22;
      uVar36 = lVar22 + uVar36;
      uVar47 = (uVar9 >> 7 ^
               (uVar9 << 0x38 | uVar9 >> 8) ^ (uVar9 >> 1 | (ulonglong)((uVar9 & 1) != 0) << 0x3f))
               + uVar52 + uVar8 +
               (uVar33 >> 6 ^ (uVar33 * 8 | uVar33 >> 0x3d) ^ (uVar33 << 0x2d | uVar33 >> 0x13));
      lVar22 = uVar31 + uVar33 + ((uVar2 ^ uVar23) & uVar36 ^ uVar23) + 0x27b70a8546d22ffc +
               ((uVar36 * 0x800000 | uVar36 >> 0x29) ^
               (uVar36 << 0x2e | uVar36 >> 0x12) ^ (uVar36 << 0x32 | uVar36 >> 0xe));
      uVar21 = (uVar51 & uVar37 ^ (uVar51 ^ uVar37) & uVar4) +
               ((uVar4 * 0x2000000 | uVar4 >> 0x27) ^
               (uVar4 * 0x40000000 | uVar4 >> 0x22) ^ (uVar4 << 0x24 | uVar4 >> 0x1c)) + lVar22;
      uVar45 = lVar22 + uVar45;
      lVar22 = uVar23 + uVar10 + ((uVar36 ^ uVar2) & uVar45 ^ uVar2) + 0x2e1b21385c26c926 +
               ((uVar45 * 0x800000 | uVar45 >> 0x29) ^
               (uVar45 << 0x2e | uVar45 >> 0x12) ^ (uVar45 << 0x32 | uVar45 >> 0xe));
      uVar42 = (uVar4 & uVar51 ^ (uVar4 ^ uVar51) & uVar21) +
               ((uVar21 * 0x2000000 | uVar21 >> 0x27) ^
               (uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 << 0x24 | uVar21 >> 0x1c)) + lVar22;
      uVar37 = lVar22 + uVar37;
      lVar22 = uVar2 + uVar47 + ((uVar45 ^ uVar36) & uVar37 ^ uVar36) + 0x4d2c6dfc5ac42aed +
               ((uVar37 * 0x800000 | uVar37 >> 0x29) ^
               (uVar37 << 0x2e | uVar37 >> 0x12) ^ (uVar37 << 0x32 | uVar37 >> 0xe));
      uVar31 = (uVar21 & uVar4 ^ (uVar21 ^ uVar4) & uVar42) +
               ((uVar42 * 0x2000000 | uVar42 >> 0x27) ^
               (uVar42 * 0x40000000 | uVar42 >> 0x22) ^ (uVar42 << 0x24 | uVar42 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar51;
      uVar55 = (uVar40 >> 7 ^
               (uVar40 << 0x38 | uVar40 >> 8) ^
               (uVar40 >> 1 | (ulonglong)((uVar40 & 1) != 0) << 0x3f)) + uVar9 + uVar39 +
               (uVar10 >> 6 ^ (uVar10 * 8 | uVar10 >> 0x3d) ^ (uVar10 << 0x2d | uVar10 >> 0x13));
      lVar22 = uVar36 + uVar55 + ((uVar37 ^ uVar45) & uVar51 ^ uVar45) + 0x53380d139d95b3df +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar40 = (uVar15 >> 7 ^
               (uVar15 << 0x38 | uVar15 >> 8) ^
               (uVar15 >> 1 | (ulonglong)((uVar15 & 1) != 0) << 0x3f)) + uVar40 + uVar19 +
               (uVar47 >> 6 ^ (uVar47 * 8 | uVar47 >> 0x3d) ^ (uVar47 << 0x2d | uVar47 >> 0x13));
      uVar7 = (uVar41 >> 7 ^
              (uVar41 << 0x38 | uVar41 >> 8) ^
              (uVar41 >> 1 | (ulonglong)((uVar41 & 1) != 0) << 0x3f)) + uVar15 + uVar44 +
              (uVar55 >> 6 ^ (uVar55 * 8 | uVar55 >> 0x3d) ^ (uVar55 << 0x2d | uVar55 >> 0x13));
      uVar25 = (uVar42 & uVar21 ^ (uVar42 ^ uVar21) & uVar31) +
               ((uVar31 * 0x2000000 | uVar31 >> 0x27) ^
               (uVar31 * 0x40000000 | uVar31 >> 0x22) ^ (uVar31 << 0x24 | uVar31 >> 0x1c)) + lVar22;
      uVar4 = lVar22 + uVar4;
      uVar23 = (uVar35 >> 7 ^
               (uVar35 << 0x38 | uVar35 >> 8) ^
               (uVar35 >> 1 | (ulonglong)((uVar35 & 1) != 0) << 0x3f)) + uVar41 + uVar3 +
               (uVar40 >> 6 ^ (uVar40 * 8 | uVar40 >> 0x3d) ^ (uVar40 << 0x2d | uVar40 >> 0x13));
      lVar22 = uVar45 + uVar40 + ((uVar51 ^ uVar37) & uVar4 ^ uVar37) + 0x650a73548baf63de +
               ((uVar4 * 0x800000 | uVar4 >> 0x29) ^
               (uVar4 << 0x2e | uVar4 >> 0x12) ^ (uVar4 << 0x32 | uVar4 >> 0xe));
      uVar41 = (uVar31 & uVar42 ^ (uVar31 ^ uVar42) & uVar25) +
               ((uVar25 * 0x2000000 | uVar25 >> 0x27) ^
               (uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 << 0x24 | uVar25 >> 0x1c)) + lVar22;
      uVar21 = lVar22 + uVar21;
      lVar22 = uVar37 + uVar7 + ((uVar4 ^ uVar51) & uVar21 ^ uVar51) + 0x766a0abb3c77b2a8 +
               ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
               (uVar21 << 0x2e | uVar21 >> 0x12) ^ (uVar21 << 0x32 | uVar21 >> 0xe));
      uVar36 = (uVar25 & uVar31 ^ (uVar25 ^ uVar31) & uVar41) +
               ((uVar41 * 0x2000000 | uVar41 >> 0x27) ^
               (uVar41 * 0x40000000 | uVar41 >> 0x22) ^ (uVar41 << 0x24 | uVar41 >> 0x1c)) + lVar22;
      uVar42 = lVar22 + uVar42;
      lVar22 = uVar51 + uVar23 + ((uVar21 ^ uVar4) & uVar42 ^ uVar4) + -0x7e3d36d1b812511a +
               ((uVar42 * 0x800000 | uVar42 >> 0x29) ^
               (uVar42 << 0x2e | uVar42 >> 0x12) ^ (uVar42 << 0x32 | uVar42 >> 0xe));
      uVar51 = (uVar41 & uVar25 ^ (uVar41 ^ uVar25) & uVar36) +
               ((uVar36 * 0x2000000 | uVar36 >> 0x27) ^
               (uVar36 * 0x40000000 | uVar36 >> 0x22) ^ (uVar36 << 0x24 | uVar36 >> 0x1c)) + lVar22;
      uVar31 = lVar22 + uVar31;
      uVar9 = (uVar49 >> 7 ^
              (uVar49 << 0x38 | uVar49 >> 8) ^
              (uVar49 >> 1 | (ulonglong)((uVar49 & 1) != 0) << 0x3f)) + uVar35 + uVar33 +
              (uVar7 >> 6 ^ (uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 << 0x2d | uVar7 >> 0x13));
      lVar22 = uVar4 + uVar9 + ((uVar42 ^ uVar21) & uVar31 ^ uVar21) + -0x6d8dd37aeb7dcac5 +
               ((uVar31 * 0x800000 | uVar31 >> 0x29) ^
               (uVar31 << 0x2e | uVar31 >> 0x12) ^ (uVar31 << 0x32 | uVar31 >> 0xe));
      uVar4 = (uVar5 >> 7 ^
              (uVar5 << 0x38 | uVar5 >> 8) ^ (uVar5 >> 1 | (ulonglong)((uVar5 & 1) != 0) << 0x3f)) +
              uVar49 + uVar10 +
              (uVar23 >> 6 ^ (uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 << 0x2d | uVar23 >> 0x13));
      uVar37 = (uVar14 >> 7 ^
               (uVar14 << 0x38 | uVar14 >> 8) ^
               (uVar14 >> 1 | (ulonglong)((uVar14 & 1) != 0) << 0x3f)) + uVar5 + uVar47 +
               (uVar9 >> 6 ^ (uVar9 * 8 | uVar9 >> 0x3d) ^ (uVar9 << 0x2d | uVar9 >> 0x13));
      uVar15 = (uVar36 & uVar41 ^ (uVar36 ^ uVar41) & uVar51) +
               ((uVar51 * 0x2000000 | uVar51 >> 0x27) ^
               (uVar51 * 0x40000000 | uVar51 >> 0x22) ^ (uVar51 << 0x24 | uVar51 >> 0x1c)) + lVar22;
      uVar25 = lVar22 + uVar25;
      uVar45 = (uVar8 >> 7 ^
               (uVar8 << 0x38 | uVar8 >> 8) ^ (uVar8 >> 1 | (ulonglong)((uVar8 & 1) != 0) << 0x3f))
               + uVar14 + uVar55 +
               (uVar4 >> 6 ^ (uVar4 * 8 | uVar4 >> 0x3d) ^ (uVar4 << 0x2d | uVar4 >> 0x13));
      lVar22 = uVar21 + uVar4 + ((uVar31 ^ uVar42) & uVar25 ^ uVar42) + -0x5d40175eb30efc9c +
               ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
               (uVar25 << 0x2e | uVar25 >> 0x12) ^ (uVar25 << 0x32 | uVar25 >> 0xe));
      uVar13 = (uVar51 & uVar36 ^ (uVar51 ^ uVar36) & uVar15) +
               ((uVar15 * 0x2000000 | uVar15 >> 0x27) ^
               (uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 << 0x24 | uVar15 >> 0x1c)) + lVar22;
      uVar41 = lVar22 + uVar41;
      lVar22 = uVar42 + uVar37 + ((uVar25 ^ uVar31) & uVar41 ^ uVar31) + -0x57e599b443bdcfff +
               ((uVar41 * 0x800000 | uVar41 >> 0x29) ^
               (uVar41 << 0x2e | uVar41 >> 0x12) ^ (uVar41 << 0x32 | uVar41 >> 0xe));
      uVar21 = (uVar15 & uVar51 ^ (uVar15 ^ uVar51) & uVar13) +
               ((uVar13 * 0x2000000 | uVar13 >> 0x27) ^
               (uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 << 0x24 | uVar13 >> 0x1c)) + lVar22;
      uVar36 = lVar22 + uVar36;
      lVar22 = uVar31 + uVar45 + ((uVar41 ^ uVar25) & uVar36 ^ uVar25) + -0x3db4748f2f07686f +
               ((uVar36 * 0x800000 | uVar36 >> 0x29) ^
               (uVar36 << 0x2e | uVar36 >> 0x12) ^ (uVar36 << 0x32 | uVar36 >> 0xe));
      uVar5 = (uVar13 & uVar15 ^ (uVar13 ^ uVar15) & uVar21) +
              ((uVar21 * 0x2000000 | uVar21 >> 0x27) ^
              (uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 << 0x24 | uVar21 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar51;
      uVar35 = (uVar39 >> 7 ^
               (uVar39 << 0x38 | uVar39 >> 8) ^
               (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) + uVar8 + uVar40 +
               (uVar37 >> 6 ^ (uVar37 * 8 | uVar37 >> 0x3d) ^ (uVar37 << 0x2d | uVar37 >> 0x13));
      lVar22 = uVar25 + uVar35 + ((uVar36 ^ uVar41) & uVar51 ^ uVar41) + -0x3893ae5cf9ab41d0 +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar42 = (uVar19 >> 7 ^
               (uVar19 << 0x38 | uVar19 >> 8) ^
               (uVar19 >> 1 | (ulonglong)((uVar19 & 1) != 0) << 0x3f)) + uVar39 + uVar7 +
               (uVar45 >> 6 ^ (uVar45 * 8 | uVar45 >> 0x3d) ^ (uVar45 << 0x2d | uVar45 >> 0x13));
      uVar25 = (uVar44 >> 7 ^
               (uVar44 << 0x38 | uVar44 >> 8) ^
               (uVar44 >> 1 | (ulonglong)((uVar44 & 1) != 0) << 0x3f)) + uVar19 + uVar23 +
               (uVar35 >> 6 ^ (uVar35 * 8 | uVar35 >> 0x3d) ^ (uVar35 << 0x2d | uVar35 >> 0x13));
      uVar31 = (uVar21 & uVar13 ^ (uVar21 ^ uVar13) & uVar5) +
               ((uVar5 * 0x2000000 | uVar5 >> 0x27) ^
               (uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 << 0x24 | uVar5 >> 0x1c)) + lVar22;
      uVar15 = lVar22 + uVar15;
      uVar2 = (uVar3 >> 7 ^
              (uVar3 << 0x38 | uVar3 >> 8) ^ (uVar3 >> 1 | (ulonglong)((uVar3 & 1) != 0) << 0x3f)) +
              uVar44 + uVar9 +
              (uVar42 >> 6 ^ (uVar42 * 8 | uVar42 >> 0x3d) ^ (uVar42 << 0x2d | uVar42 >> 0x13));
      lVar22 = uVar41 + uVar42 + ((uVar51 ^ uVar36) & uVar15 ^ uVar36) + -0x2e6d17e62910ade8 +
               ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
               (uVar15 << 0x2e | uVar15 >> 0x12) ^ (uVar15 << 0x32 | uVar15 >> 0xe));
      uVar19 = (uVar5 & uVar21 ^ (uVar5 ^ uVar21) & uVar31) +
               ((uVar31 * 0x2000000 | uVar31 >> 0x27) ^
               (uVar31 * 0x40000000 | uVar31 >> 0x22) ^ (uVar31 << 0x24 | uVar31 >> 0x1c)) + lVar22;
      uVar13 = lVar22 + uVar13;
      lVar22 = uVar36 + uVar25 + ((uVar15 ^ uVar51) & uVar13 ^ uVar51) + -0x2966f9dbaa9a56f0 +
               ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
               (uVar13 << 0x2e | uVar13 >> 0x12) ^ (uVar13 << 0x32 | uVar13 >> 0xe));
      uVar8 = (uVar31 & uVar5 ^ (uVar31 ^ uVar5) & uVar19) +
              ((uVar19 * 0x2000000 | uVar19 >> 0x27) ^
              (uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 << 0x24 | uVar19 >> 0x1c)) + lVar22;
      uVar21 = lVar22 + uVar21;
      lVar22 = uVar51 + uVar2 + ((uVar13 ^ uVar15) & uVar21 ^ uVar15) + -0xbf1ca7aa88edfd6 +
               ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
               (uVar21 << 0x2e | uVar21 >> 0x12) ^ (uVar21 << 0x32 | uVar21 >> 0xe));
      uVar51 = (uVar19 & uVar31 ^ (uVar19 ^ uVar31) & uVar8) +
               ((uVar8 * 0x2000000 | uVar8 >> 0x27) ^
               (uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 << 0x24 | uVar8 >> 0x1c)) + lVar22;
      uVar5 = lVar22 + uVar5;
      uVar3 = (uVar33 >> 7 ^
              (uVar33 << 0x38 | uVar33 >> 8) ^
              (uVar33 >> 1 | (ulonglong)((uVar33 & 1) != 0) << 0x3f)) + uVar3 + uVar4 +
              (uVar25 >> 6 ^ (uVar25 * 8 | uVar25 >> 0x3d) ^ (uVar25 << 0x2d | uVar25 >> 0x13));
      lVar22 = uVar15 + uVar3 + ((uVar21 ^ uVar13) & uVar5 ^ uVar13) + 0x106aa07032bbd1b8 +
               ((uVar5 * 0x800000 | uVar5 >> 0x29) ^
               (uVar5 << 0x2e | uVar5 >> 0x12) ^ (uVar5 << 0x32 | uVar5 >> 0xe));
      uVar41 = (uVar10 >> 7 ^
               (uVar10 << 0x38 | uVar10 >> 8) ^
               (uVar10 >> 1 | (ulonglong)((uVar10 & 1) != 0) << 0x3f)) + uVar33 + uVar37 +
               (uVar2 >> 6 ^ (uVar2 * 8 | uVar2 >> 0x3d) ^ (uVar2 << 0x2d | uVar2 >> 0x13));
      uVar14 = (uVar47 >> 7 ^
               (uVar47 << 0x38 | uVar47 >> 8) ^
               (uVar47 >> 1 | (ulonglong)((uVar47 & 1) != 0) << 0x3f)) + uVar10 + uVar45 +
               (uVar3 >> 6 ^ (uVar3 * 8 | uVar3 >> 0x3d) ^ (uVar3 << 0x2d | uVar3 >> 0x13));
      uVar10 = (uVar8 & uVar19 ^ (uVar8 ^ uVar19) & uVar51) +
               ((uVar51 * 0x2000000 | uVar51 >> 0x27) ^
               (uVar51 * 0x40000000 | uVar51 >> 0x22) ^ (uVar51 << 0x24 | uVar51 >> 0x1c)) + lVar22;
      uVar31 = lVar22 + uVar31;
      uVar15 = (uVar55 >> 7 ^
               (uVar55 << 0x38 | uVar55 >> 8) ^
               (uVar55 >> 1 | (ulonglong)((uVar55 & 1) != 0) << 0x3f)) + uVar47 + uVar35 +
               (uVar41 >> 6 ^ (uVar41 * 8 | uVar41 >> 0x3d) ^ (uVar41 << 0x2d | uVar41 >> 0x13));
      lVar22 = uVar13 + uVar41 + ((uVar5 ^ uVar21) & uVar31 ^ uVar21) + 0x19a4c116b8d2d0c8 +
               ((uVar31 * 0x800000 | uVar31 >> 0x29) ^
               (uVar31 << 0x2e | uVar31 >> 0x12) ^ (uVar31 << 0x32 | uVar31 >> 0xe));
      uVar36 = (uVar51 & uVar8 ^ (uVar51 ^ uVar8) & uVar10) +
               ((uVar10 * 0x2000000 | uVar10 >> 0x27) ^
               (uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 << 0x24 | uVar10 >> 0x1c)) + lVar22;
      uVar19 = lVar22 + uVar19;
      lVar22 = uVar21 + uVar14 + ((uVar31 ^ uVar5) & uVar19 ^ uVar5) + 0x1e376c085141ab53 +
               ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
               (uVar19 << 0x2e | uVar19 >> 0x12) ^ (uVar19 << 0x32 | uVar19 >> 0xe));
      uVar44 = (uVar10 & uVar51 ^ (uVar10 ^ uVar51) & uVar36) +
               ((uVar36 * 0x2000000 | uVar36 >> 0x27) ^
               (uVar36 * 0x40000000 | uVar36 >> 0x22) ^ (uVar36 << 0x24 | uVar36 >> 0x1c)) + lVar22;
      uVar8 = lVar22 + uVar8;
      lVar22 = uVar5 + uVar15 + ((uVar19 ^ uVar31) & uVar8 ^ uVar31) + 0x2748774cdf8eeb99 +
               ((uVar8 * 0x800000 | uVar8 >> 0x29) ^
               (uVar8 << 0x2e | uVar8 >> 0x12) ^ (uVar8 << 0x32 | uVar8 >> 0xe));
      uVar47 = (uVar36 & uVar10 ^ (uVar36 ^ uVar10) & uVar44) +
               ((uVar44 * 0x2000000 | uVar44 >> 0x27) ^
               (uVar44 * 0x40000000 | uVar44 >> 0x22) ^ (uVar44 << 0x24 | uVar44 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar51;
      uVar16 = (uVar40 >> 7 ^
               (uVar40 << 0x38 | uVar40 >> 8) ^
               (uVar40 >> 1 | (ulonglong)((uVar40 & 1) != 0) << 0x3f)) + uVar55 + uVar42 +
               (uVar14 >> 6 ^ (uVar14 * 8 | uVar14 >> 0x3d) ^ (uVar14 << 0x2d | uVar14 >> 0x13));
      lVar22 = uVar31 + uVar16 + ((uVar8 ^ uVar19) & uVar51 ^ uVar19) + 0x34b0bcb5e19b48a8 +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar13 = (uVar7 >> 7 ^
               (uVar7 << 0x38 | uVar7 >> 8) ^ (uVar7 >> 1 | (ulonglong)((uVar7 & 1) != 0) << 0x3f))
               + uVar40 + uVar25 +
               (uVar15 >> 6 ^ (uVar15 * 8 | uVar15 >> 0x3d) ^ (uVar15 << 0x2d | uVar15 >> 0x13));
      uVar31 = (uVar23 >> 7 ^
               (uVar23 << 0x38 | uVar23 >> 8) ^
               (uVar23 >> 1 | (ulonglong)((uVar23 & 1) != 0) << 0x3f)) + uVar7 + uVar2 +
               (uVar16 >> 6 ^ (uVar16 * 8 | uVar16 >> 0x3d) ^ (uVar16 << 0x2d | uVar16 >> 0x13));
      uVar55 = (uVar44 & uVar36 ^ (uVar44 ^ uVar36) & uVar47) +
               ((uVar47 * 0x2000000 | uVar47 >> 0x27) ^
               (uVar47 * 0x40000000 | uVar47 >> 0x22) ^ (uVar47 << 0x24 | uVar47 >> 0x1c)) + lVar22;
      uVar10 = lVar22 + uVar10;
      uVar17 = (uVar9 >> 7 ^
               (uVar9 << 0x38 | uVar9 >> 8) ^ (uVar9 >> 1 | (ulonglong)((uVar9 & 1) != 0) << 0x3f))
               + uVar23 + uVar3 +
               (uVar13 >> 6 ^ (uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 << 0x2d | uVar13 >> 0x13));
      lVar22 = uVar19 + uVar13 + ((uVar51 ^ uVar8) & uVar10 ^ uVar8) + 0x391c0cb3c5c95a63 +
               ((uVar10 * 0x800000 | uVar10 >> 0x29) ^
               (uVar10 << 0x2e | uVar10 >> 0x12) ^ (uVar10 << 0x32 | uVar10 >> 0xe));
      uVar5 = (uVar47 & uVar44 ^ (uVar47 ^ uVar44) & uVar55) +
              ((uVar55 * 0x2000000 | uVar55 >> 0x27) ^
              (uVar55 * 0x40000000 | uVar55 >> 0x22) ^ (uVar55 << 0x24 | uVar55 >> 0x1c)) + lVar22;
      uVar36 = lVar22 + uVar36;
      lVar22 = uVar8 + uVar31 + ((uVar10 ^ uVar51) & uVar36 ^ uVar51) + 0x4ed8aa4ae3418acb +
               ((uVar36 * 0x800000 | uVar36 >> 0x29) ^
               (uVar36 << 0x2e | uVar36 >> 0x12) ^ (uVar36 << 0x32 | uVar36 >> 0xe));
      uVar40 = (uVar55 & uVar47 ^ (uVar55 ^ uVar47) & uVar5) +
               ((uVar5 * 0x2000000 | uVar5 >> 0x27) ^
               (uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 << 0x24 | uVar5 >> 0x1c)) + lVar22;
      uVar44 = lVar22 + uVar44;
      lVar22 = uVar51 + uVar17 + ((uVar36 ^ uVar10) & uVar44 ^ uVar10) + 0x5b9cca4f7763e373 +
               ((uVar44 * 0x800000 | uVar44 >> 0x29) ^
               (uVar44 << 0x2e | uVar44 >> 0x12) ^ (uVar44 << 0x32 | uVar44 >> 0xe));
      uVar21 = (uVar5 & uVar55 ^ (uVar5 ^ uVar55) & uVar40) +
               ((uVar40 * 0x2000000 | uVar40 >> 0x27) ^
               (uVar40 * 0x40000000 | uVar40 >> 0x22) ^ (uVar40 << 0x24 | uVar40 >> 0x1c)) + lVar22;
      uVar47 = lVar22 + uVar47;
      uVar7 = (uVar4 >> 7 ^
              (uVar4 << 0x38 | uVar4 >> 8) ^ (uVar4 >> 1 | (ulonglong)((uVar4 & 1) != 0) << 0x3f)) +
              uVar9 + uVar41 +
              (uVar31 >> 6 ^ (uVar31 * 8 | uVar31 >> 0x3d) ^ (uVar31 << 0x2d | uVar31 >> 0x13));
      lVar22 = uVar10 + uVar7 + ((uVar44 ^ uVar36) & uVar47 ^ uVar36) + 0x682e6ff3d6b2b8a3 +
               ((uVar47 * 0x800000 | uVar47 >> 0x29) ^
               (uVar47 << 0x2e | uVar47 >> 0x12) ^ (uVar47 << 0x32 | uVar47 >> 0xe));
      uVar49 = (uVar37 >> 7 ^
               (uVar37 << 0x38 | uVar37 >> 8) ^
               (uVar37 >> 1 | (ulonglong)((uVar37 & 1) != 0) << 0x3f)) + uVar4 + uVar14 +
               (uVar17 >> 6 ^ (uVar17 * 8 | uVar17 >> 0x3d) ^ (uVar17 << 0x2d | uVar17 >> 0x13));
      uVar10 = (uVar45 >> 7 ^
               (uVar45 << 0x38 | uVar45 >> 8) ^
               (uVar45 >> 1 | (ulonglong)((uVar45 & 1) != 0) << 0x3f)) + uVar37 + uVar15 +
               (uVar7 >> 6 ^ (uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 << 0x2d | uVar7 >> 0x13));
      uVar23 = (uVar40 & uVar5 ^ (uVar40 ^ uVar5) & uVar21) +
               ((uVar21 * 0x2000000 | uVar21 >> 0x27) ^
               (uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 << 0x24 | uVar21 >> 0x1c)) + lVar22;
      uVar55 = lVar22 + uVar55;
      uVar37 = (uVar35 >> 7 ^
               (uVar35 << 0x38 | uVar35 >> 8) ^
               (uVar35 >> 1 | (ulonglong)((uVar35 & 1) != 0) << 0x3f)) + uVar45 + uVar16 +
               (uVar49 >> 6 ^ (uVar49 * 8 | uVar49 >> 0x3d) ^ (uVar49 << 0x2d | uVar49 >> 0x13));
      lVar22 = uVar36 + uVar49 + ((uVar47 ^ uVar44) & uVar55 ^ uVar44) + 0x748f82ee5defb2fc +
               ((uVar55 * 0x800000 | uVar55 >> 0x29) ^
               (uVar55 << 0x2e | uVar55 >> 0x12) ^ (uVar55 << 0x32 | uVar55 >> 0xe));
      uVar51 = (uVar21 & uVar40 ^ (uVar21 ^ uVar40) & uVar23) +
               ((uVar23 * 0x2000000 | uVar23 >> 0x27) ^
               (uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 << 0x24 | uVar23 >> 0x1c)) + lVar22;
      uVar5 = lVar22 + uVar5;
      lVar22 = uVar44 + uVar10 + ((uVar55 ^ uVar47) & uVar5 ^ uVar47) + 0x78a5636f43172f60 +
               ((uVar5 * 0x800000 | uVar5 >> 0x29) ^
               (uVar5 << 0x2e | uVar5 >> 0x12) ^ (uVar5 << 0x32 | uVar5 >> 0xe));
      uVar45 = (uVar23 & uVar21 ^ (uVar23 ^ uVar21) & uVar51) +
               ((uVar51 * 0x2000000 | uVar51 >> 0x27) ^
               (uVar51 * 0x40000000 | uVar51 >> 0x22) ^ (uVar51 << 0x24 | uVar51 >> 0x1c)) + lVar22;
      uVar40 = lVar22 + uVar40;
      lVar22 = uVar47 + uVar37 + ((uVar5 ^ uVar55) & uVar40 ^ uVar55) + -0x7b3787eb5e0f548e +
               ((uVar40 * 0x800000 | uVar40 >> 0x29) ^
               (uVar40 << 0x2e | uVar40 >> 0x12) ^ (uVar40 << 0x32 | uVar40 >> 0xe));
      uVar44 = (uVar51 & uVar23 ^ (uVar51 ^ uVar23) & uVar45) +
               ((uVar45 * 0x2000000 | uVar45 >> 0x27) ^
               (uVar45 * 0x40000000 | uVar45 >> 0x22) ^ (uVar45 << 0x24 | uVar45 >> 0x1c)) + lVar22;
      uVar21 = lVar22 + uVar21;
      uVar35 = (uVar42 >> 7 ^
               (uVar42 << 0x38 | uVar42 >> 8) ^
               (uVar42 >> 1 | (ulonglong)((uVar42 & 1) != 0) << 0x3f)) + uVar35 + uVar13 +
               (uVar10 >> 6 ^ (uVar10 * 8 | uVar10 >> 0x3d) ^ (uVar10 << 0x2d | uVar10 >> 0x13));
      lVar22 = uVar55 + uVar35 + ((uVar40 ^ uVar5) & uVar21 ^ uVar5) + -0x7338fdf7e59bc614 +
               ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
               (uVar21 << 0x2e | uVar21 >> 0x12) ^ (uVar21 << 0x32 | uVar21 >> 0xe));
      uVar33 = (uVar25 >> 7 ^
               (uVar25 << 0x38 | uVar25 >> 8) ^
               (uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f)) + uVar42 + uVar31 +
               (uVar37 >> 6 ^ (uVar37 * 8 | uVar37 >> 0x3d) ^ (uVar37 << 0x2d | uVar37 >> 0x13));
      uVar55 = (uVar2 >> 7 ^
               (uVar2 << 0x38 | uVar2 >> 8) ^ (uVar2 >> 1 | (ulonglong)((uVar2 & 1) != 0) << 0x3f))
               + uVar25 + uVar17 +
               (uVar35 >> 6 ^ (uVar35 * 8 | uVar35 >> 0x3d) ^ (uVar35 << 0x2d | uVar35 >> 0x13));
      uVar36 = (uVar45 & uVar51 ^ (uVar45 ^ uVar51) & uVar44) +
               ((uVar44 * 0x2000000 | uVar44 >> 0x27) ^
               (uVar44 * 0x40000000 | uVar44 >> 0x22) ^ (uVar44 << 0x24 | uVar44 >> 0x1c)) + lVar22;
      uVar23 = lVar22 + uVar23;
      uVar4 = (uVar3 >> 7 ^
              (uVar3 << 0x38 | uVar3 >> 8) ^ (uVar3 >> 1 | (ulonglong)((uVar3 & 1) != 0) << 0x3f)) +
              uVar2 + uVar7 +
              (uVar33 >> 6 ^ (uVar33 * 8 | uVar33 >> 0x3d) ^ (uVar33 << 0x2d | uVar33 >> 0x13));
      lVar22 = uVar5 + uVar33 + ((uVar21 ^ uVar40) & uVar23 ^ uVar40) + -0x6f410005dc9ce1d8 +
               ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
               (uVar23 << 0x2e | uVar23 >> 0x12) ^ (uVar23 << 0x32 | uVar23 >> 0xe));
      uVar19 = (uVar44 & uVar45 ^ (uVar44 ^ uVar45) & uVar36) +
               ((uVar36 * 0x2000000 | uVar36 >> 0x27) ^
               (uVar36 * 0x40000000 | uVar36 >> 0x22) ^ (uVar36 << 0x24 | uVar36 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar51;
      lVar22 = uVar40 + uVar55 + ((uVar23 ^ uVar21) & uVar51 ^ uVar21) + -0x5baf9314217d4217 +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar2 = (uVar36 & uVar44 ^ (uVar36 ^ uVar44) & uVar19) +
              ((uVar19 * 0x2000000 | uVar19 >> 0x27) ^
              (uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 << 0x24 | uVar19 >> 0x1c)) + lVar22;
      uVar45 = lVar22 + uVar45;
      lVar22 = uVar21 + uVar4 + ((uVar51 ^ uVar23) & uVar45 ^ uVar23) + -0x41065c084d3986eb +
               ((uVar45 * 0x800000 | uVar45 >> 0x29) ^
               (uVar45 << 0x2e | uVar45 >> 0x12) ^ (uVar45 << 0x32 | uVar45 >> 0xe));
      uVar47 = (uVar19 & uVar36 ^ (uVar19 ^ uVar36) & uVar2) +
               ((uVar2 * 0x2000000 | uVar2 >> 0x27) ^
               (uVar2 * 0x40000000 | uVar2 >> 0x22) ^ (uVar2 << 0x24 | uVar2 >> 0x1c)) + lVar22;
      uVar44 = lVar22 + uVar44;
      uVar42 = (uVar41 >> 7 ^
               (uVar41 << 0x38 | uVar41 >> 8) ^
               (uVar41 >> 1 | (ulonglong)((uVar41 & 1) != 0) << 0x3f)) + uVar3 + uVar49 +
               (uVar55 >> 6 ^ (uVar55 * 8 | uVar55 >> 0x3d) ^ (uVar55 << 0x2d | uVar55 >> 0x13));
      lVar22 = uVar23 + uVar42 + ((uVar45 ^ uVar51) & uVar44 ^ uVar51) + -0x398e870d1c8dacd5 +
               ((uVar44 * 0x800000 | uVar44 >> 0x29) ^
               (uVar44 << 0x2e | uVar44 >> 0x12) ^ (uVar44 << 0x32 | uVar44 >> 0xe));
      uVar3 = (uVar2 & uVar19 ^ (uVar2 ^ uVar19) & uVar47) +
              ((uVar47 * 0x2000000 | uVar47 >> 0x27) ^
              (uVar47 * 0x40000000 | uVar47 >> 0x22) ^ (uVar47 << 0x24 | uVar47 >> 0x1c)) + lVar22;
      uVar36 = lVar22 + uVar36;
      uVar8 = (uVar14 >> 7 ^
              (uVar14 << 0x38 | uVar14 >> 8) ^
              (uVar14 >> 1 | (ulonglong)((uVar14 & 1) != 0) << 0x3f)) + uVar41 + uVar10 +
              (uVar4 >> 6 ^ (uVar4 * 8 | uVar4 >> 0x3d) ^ (uVar4 << 0x2d | uVar4 >> 0x13));
      uVar21 = (uVar15 >> 7 ^
               (uVar15 << 0x38 | uVar15 >> 8) ^
               (uVar15 >> 1 | (ulonglong)((uVar15 & 1) != 0) << 0x3f)) + uVar14 + uVar37 +
               (uVar42 >> 6 ^ (uVar42 * 8 | uVar42 >> 0x3d) ^ (uVar42 << 0x2d | uVar42 >> 0x13));
      uVar5 = (uVar16 >> 7 ^
              (uVar16 << 0x38 | uVar16 >> 8) ^
              (uVar16 >> 1 | (ulonglong)((uVar16 & 1) != 0) << 0x3f)) + uVar15 + uVar35 +
              (uVar8 >> 6 ^ (uVar8 * 8 | uVar8 >> 0x3d) ^ (uVar8 << 0x2d | uVar8 >> 0x13));
      lVar22 = uVar51 + uVar8 + ((uVar44 ^ uVar45) & uVar36 ^ uVar45) + -0x35d8c13115d99e64 +
               ((uVar36 * 0x800000 | uVar36 >> 0x29) ^
               (uVar36 << 0x2e | uVar36 >> 0x12) ^ (uVar36 << 0x32 | uVar36 >> 0xe));
      uVar51 = (uVar47 & uVar2 ^ (uVar47 ^ uVar2) & uVar3) +
               ((uVar3 * 0x2000000 | uVar3 >> 0x27) ^
               (uVar3 * 0x40000000 | uVar3 >> 0x22) ^ (uVar3 << 0x24 | uVar3 >> 0x1c)) + lVar22;
      uVar19 = lVar22 + uVar19;
      uVar23 = (uVar13 >> 7 ^
               (uVar13 << 0x38 | uVar13 >> 8) ^
               (uVar13 >> 1 | (ulonglong)((uVar13 & 1) != 0) << 0x3f)) + uVar16 + uVar33 +
               (uVar21 >> 6 ^ (uVar21 * 8 | uVar21 >> 0x3d) ^ (uVar21 << 0x2d | uVar21 >> 0x13));
      lVar22 = uVar45 + uVar21 + ((uVar36 ^ uVar44) & uVar19 ^ uVar44) + -0x2e794738de3f3df9 +
               ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
               (uVar19 << 0x2e | uVar19 >> 0x12) ^ (uVar19 << 0x32 | uVar19 >> 0xe));
      uVar25 = (uVar3 & uVar47 ^ (uVar3 ^ uVar47) & uVar51) +
               ((uVar51 * 0x2000000 | uVar51 >> 0x27) ^
               (uVar51 * 0x40000000 | uVar51 >> 0x22) ^ (uVar51 << 0x24 | uVar51 >> 0x1c)) + lVar22;
      uVar2 = lVar22 + uVar2;
      lVar22 = uVar44 + uVar5 + ((uVar19 ^ uVar36) & uVar2 ^ uVar36) + -0x15258229321f14e2 +
               ((uVar2 * 0x800000 | uVar2 >> 0x29) ^
               (uVar2 << 0x2e | uVar2 >> 0x12) ^ (uVar2 << 0x32 | uVar2 >> 0xe));
      uVar44 = (uVar51 & uVar3 ^ (uVar51 ^ uVar3) & uVar25) +
               ((uVar25 * 0x2000000 | uVar25 >> 0x27) ^
               (uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 << 0x24 | uVar25 >> 0x1c)) + lVar22;
      uVar47 = lVar22 + uVar47;
      lVar22 = uVar36 + uVar23 + ((uVar2 ^ uVar19) & uVar47 ^ uVar19) + -0xa82b08011912e88 +
               ((uVar47 * 0x800000 | uVar47 >> 0x29) ^
               (uVar47 << 0x2e | uVar47 >> 0x12) ^ (uVar47 << 0x32 | uVar47 >> 0xe));
      uVar36 = (uVar25 & uVar51 ^ (uVar25 ^ uVar51) & uVar44) +
               ((uVar44 * 0x2000000 | uVar44 >> 0x27) ^
               (uVar44 * 0x40000000 | uVar44 >> 0x22) ^ (uVar44 << 0x24 | uVar44 >> 0x1c)) + lVar22;
      uVar3 = lVar22 + uVar3;
      uVar9 = (uVar31 >> 7 ^
              (uVar31 << 0x38 | uVar31 >> 8) ^
              (uVar31 >> 1 | (ulonglong)((uVar31 & 1) != 0) << 0x3f)) + uVar13 + uVar55 +
              (uVar5 >> 6 ^ (uVar5 * 8 | uVar5 >> 0x3d) ^ (uVar5 << 0x2d | uVar5 >> 0x13));
      uVar45 = (uVar17 >> 7 ^
               (uVar17 << 0x38 | uVar17 >> 8) ^
               (uVar17 >> 1 | (ulonglong)((uVar17 & 1) != 0) << 0x3f)) + uVar31 + uVar4 +
               (uVar23 >> 6 ^ (uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 << 0x2d | uVar23 >> 0x13));
      uVar40 = (uVar7 >> 7 ^
               (uVar7 << 0x38 | uVar7 >> 8) ^ (uVar7 >> 1 | (ulonglong)((uVar7 & 1) != 0) << 0x3f))
               + uVar17 + uVar42 +
               (uVar9 >> 6 ^ (uVar9 * 8 | uVar9 >> 0x3d) ^ (uVar9 << 0x2d | uVar9 >> 0x13));
      lVar22 = uVar19 + uVar9 + ((uVar47 ^ uVar2) & uVar3 ^ uVar2) + 0x6f067aa72176fba +
               ((uVar3 * 0x800000 | uVar3 >> 0x29) ^
               (uVar3 << 0x2e | uVar3 >> 0x12) ^ (uVar3 << 0x32 | uVar3 >> 0xe));
      uVar14 = (uVar44 & uVar25 ^ (uVar44 ^ uVar25) & uVar36) +
               ((uVar36 * 0x2000000 | uVar36 >> 0x27) ^
               (uVar36 * 0x40000000 | uVar36 >> 0x22) ^ (uVar36 << 0x24 | uVar36 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar51;
      uVar7 = (uVar49 >> 7 ^
              (uVar49 << 0x38 | uVar49 >> 8) ^
              (uVar49 >> 1 | (ulonglong)((uVar49 & 1) != 0) << 0x3f)) + uVar7 + uVar8 +
              (uVar45 >> 6 ^ (uVar45 * 8 | uVar45 >> 0x3d) ^ (uVar45 << 0x2d | uVar45 >> 0x13));
      lVar22 = uVar2 + uVar45 + ((uVar3 ^ uVar47) & uVar51 ^ uVar47) + 0xa637dc5a2c898a6 +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar19 = (uVar36 & uVar44 ^ (uVar36 ^ uVar44) & uVar14) +
               ((uVar14 * 0x2000000 | uVar14 >> 0x27) ^
               (uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 << 0x24 | uVar14 >> 0x1c)) + lVar22;
      uVar25 = lVar22 + uVar25;
      lVar22 = uVar47 + uVar40 + ((uVar51 ^ uVar3) & uVar25 ^ uVar3) + 0x113f9804bef90dae +
               ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
               (uVar25 << 0x2e | uVar25 >> 0x12) ^ (uVar25 << 0x32 | uVar25 >> 0xe));
      uVar47 = (uVar14 & uVar36 ^ (uVar14 ^ uVar36) & uVar19) +
               ((uVar19 * 0x2000000 | uVar19 >> 0x27) ^
               (uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 << 0x24 | uVar19 >> 0x1c)) + lVar22;
      uVar44 = lVar22 + uVar44;
      lVar22 = uVar3 + uVar7 + ((uVar25 ^ uVar51) & uVar44 ^ uVar51) + 0x1b710b35131c471b +
               ((uVar44 * 0x800000 | uVar44 >> 0x29) ^
               (uVar44 << 0x2e | uVar44 >> 0x12) ^ (uVar44 << 0x32 | uVar44 >> 0xe));
      uVar41 = (uVar19 & uVar14 ^ (uVar19 ^ uVar14) & uVar47) +
               ((uVar47 * 0x2000000 | uVar47 >> 0x27) ^
               (uVar47 * 0x40000000 | uVar47 >> 0x22) ^ (uVar47 << 0x24 | uVar47 >> 0x1c)) + lVar22;
      uVar36 = lVar22 + uVar36;
      uVar2 = (uVar10 >> 7 ^
              (uVar10 << 0x38 | uVar10 >> 8) ^
              (uVar10 >> 1 | (ulonglong)((uVar10 & 1) != 0) << 0x3f)) + uVar49 + uVar21 +
              (uVar40 >> 6 ^ (uVar40 * 8 | uVar40 >> 0x3d) ^ (uVar40 << 0x2d | uVar40 >> 0x13));
      uVar5 = (uVar37 >> 7 ^
              (uVar37 << 0x38 | uVar37 >> 8) ^
              (uVar37 >> 1 | (ulonglong)((uVar37 & 1) != 0) << 0x3f)) + uVar10 + uVar5 +
              (uVar7 >> 6 ^ (uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 << 0x2d | uVar7 >> 0x13));
      uVar23 = (uVar35 >> 7 ^
               (uVar35 << 0x38 | uVar35 >> 8) ^
               (uVar35 >> 1 | (ulonglong)((uVar35 & 1) != 0) << 0x3f)) + uVar37 + uVar23 +
               (uVar2 >> 6 ^ (uVar2 * 8 | uVar2 >> 0x3d) ^ (uVar2 << 0x2d | uVar2 >> 0x13));
      lVar22 = uVar51 + uVar2 + ((uVar44 ^ uVar25) & uVar36 ^ uVar25) + 0x28db77f523047d84 +
               ((uVar36 * 0x800000 | uVar36 >> 0x29) ^
               (uVar36 << 0x2e | uVar36 >> 0x12) ^ (uVar36 << 0x32 | uVar36 >> 0xe));
      uVar10 = (uVar47 & uVar19 ^ (uVar47 ^ uVar19) & uVar41) +
               ((uVar41 * 0x2000000 | uVar41 >> 0x27) ^
               (uVar41 * 0x40000000 | uVar41 >> 0x22) ^ (uVar41 << 0x24 | uVar41 >> 0x1c)) + lVar22;
      uVar14 = lVar22 + uVar14;
      lVar22 = uVar5 + uVar25 + ((uVar36 ^ uVar44) & uVar14 ^ uVar44) + 0x32caab7b40c72493 +
               ((uVar14 * 0x800000 | uVar14 >> 0x29) ^
               (uVar14 << 0x2e | uVar14 >> 0x12) ^ (uVar14 << 0x32 | uVar14 >> 0xe));
      uVar51 = (uVar41 & uVar47 ^ (uVar41 ^ uVar47) & uVar10) +
               ((uVar10 * 0x2000000 | uVar10 >> 0x27) ^
               (uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 << 0x24 | uVar10 >> 0x1c)) + lVar22;
      uVar19 = lVar22 + uVar19;
      lVar22 = uVar44 + uVar23 + ((uVar14 ^ uVar36) & uVar19 ^ uVar36) + 0x3c9ebe0a15c9bebc +
               ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
               (uVar19 << 0x2e | uVar19 >> 0x12) ^ (uVar19 << 0x32 | uVar19 >> 0xe));
      uVar21 = (uVar10 & uVar41 ^ (uVar10 ^ uVar41) & uVar51) +
               ((uVar51 * 0x2000000 | uVar51 >> 0x27) ^
               (uVar51 * 0x40000000 | uVar51 >> 0x22) ^ (uVar51 << 0x24 | uVar51 >> 0x1c)) + lVar22;
      uVar47 = lVar22 + uVar47;
      uVar5 = (uVar33 >> 7 ^
              (uVar33 << 0x38 | uVar33 >> 8) ^
              (uVar33 >> 1 | (ulonglong)((uVar33 & 1) != 0) << 0x3f)) + uVar35 + uVar9 +
              (uVar5 >> 6 ^ (uVar5 * 8 | uVar5 >> 0x3d) ^ (uVar5 << 0x2d | uVar5 >> 0x13));
      lVar22 = uVar36 + uVar5 + ((uVar19 ^ uVar14) & uVar47 ^ uVar14) + 0x431d67c49c100d4c +
               ((uVar47 * 0x800000 | uVar47 >> 0x29) ^
               (uVar47 << 0x2e | uVar47 >> 0x12) ^ (uVar47 << 0x32 | uVar47 >> 0xe));
      uVar31 = (uVar51 & uVar10 ^ (uVar51 ^ uVar10) & uVar21) +
               ((uVar21 * 0x2000000 | uVar21 >> 0x27) ^
               (uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 << 0x24 | uVar21 >> 0x1c)) + lVar22;
      uVar41 = lVar22 + uVar41;
      uVar36 = (uVar55 >> 7 ^
               (uVar55 << 0x38 | uVar55 >> 8) ^
               (uVar55 >> 1 | (ulonglong)((uVar55 & 1) != 0) << 0x3f)) + uVar33 + uVar45 +
               (uVar23 >> 6 ^ (uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 << 0x2d | uVar23 >> 0x13));
      uVar55 = (uVar4 >> 7 ^
               (uVar4 << 0x38 | uVar4 >> 8) ^ (uVar4 >> 1 | (ulonglong)((uVar4 & 1) != 0) << 0x3f))
               + uVar55 + uVar40 +
               (uVar5 >> 6 ^ (uVar5 * 8 | uVar5 >> 0x3d) ^ (uVar5 << 0x2d | uVar5 >> 0x13));
      lVar22 = uVar36 + uVar14 + ((uVar47 ^ uVar19) & uVar41 ^ uVar19) + 0x4cc5d4becb3e42b6 +
               ((uVar41 * 0x800000 | uVar41 >> 0x29) ^
               (uVar41 << 0x2e | uVar41 >> 0x12) ^ (uVar41 << 0x32 | uVar41 >> 0xe));
      uVar5 = (uVar21 & uVar51 ^ (uVar21 ^ uVar51) & uVar31) +
              ((uVar31 * 0x2000000 | uVar31 >> 0x27) ^
              (uVar31 * 0x40000000 | uVar31 >> 0x22) ^ (uVar31 << 0x24 | uVar31 >> 0x1c)) + lVar22;
      uVar10 = lVar22 + uVar10;
      lVar22 = uVar55 + uVar19 + ((uVar41 ^ uVar47) & uVar10 ^ uVar47) + 0x597f299cfc657e2a +
               ((uVar10 * 0x800000 | uVar10 >> 0x29) ^
               (uVar10 << 0x2e | uVar10 >> 0x12) ^ (uVar10 << 0x32 | uVar10 >> 0xe));
      uVar14 = (uVar31 & uVar21 ^ (uVar31 ^ uVar21) & uVar5) +
               ((uVar5 * 0x2000000 | uVar5 >> 0x27) ^
               (uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 << 0x24 | uVar5 >> 0x1c)) + lVar22;
      uVar51 = lVar22 + uVar51;
      lVar22 = (uVar42 >> 7 ^
               (uVar42 << 0x38 | uVar42 >> 8) ^
               (uVar42 >> 1 | (ulonglong)((uVar42 & 1) != 0) << 0x3f)) + uVar4 + uVar7 +
               (uVar36 >> 6 ^ (uVar36 * 8 | uVar36 >> 0x3d) ^ (uVar36 << 0x2d | uVar36 >> 0x13)) +
               uVar47 + ((uVar10 ^ uVar41) & uVar51 ^ uVar41) + 0x5fcb6fab3ad6faec +
               ((uVar51 * 0x800000 | uVar51 >> 0x29) ^
               (uVar51 << 0x2e | uVar51 >> 0x12) ^ (uVar51 << 0x32 | uVar51 >> 0xe));
      uVar36 = (uVar5 & uVar31 ^ (uVar5 ^ uVar31) & uVar14) +
               ((uVar14 * 0x2000000 | uVar14 >> 0x27) ^
               (uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 << 0x24 | uVar14 >> 0x1c)) + lVar22;
      uVar21 = lVar22 + uVar21;
      uVar20 = uVar20 + uVar51;
      uVar43 = uVar43 + uVar21;
      lVar22 = (uVar8 >> 7 ^
               (uVar8 << 0x38 | uVar8 >> 8) ^ (uVar8 >> 1 | (ulonglong)((uVar8 & 1) != 0) << 0x3f))
               + uVar42 + uVar2 +
               (uVar55 >> 6 ^ (uVar55 * 8 | uVar55 >> 0x3d) ^ (uVar55 << 0x2d | uVar55 >> 0x13)) +
               uVar41 + ((uVar51 ^ uVar10) & uVar21 ^ uVar10) + 0x6c44198c4a475817 +
               ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
               (uVar21 << 0x2e | uVar21 >> 0x12) ^ (uVar21 << 0x32 | uVar21 >> 0xe));
      uVar50 = uVar50 + uVar36;
      uVar48 = uVar48 + uVar14;
      uVar6 = uVar5 + uVar6;
      uVar18 = (uVar14 & uVar5 ^ (uVar14 ^ uVar5) & uVar36) + uVar18 +
               ((uVar36 * 0x2000000 | uVar36 >> 0x27) ^
               (uVar36 * 0x40000000 | uVar36 >> 0x22) ^ (uVar36 << 0x24 | uVar36 >> 0x1c)) + lVar22;
      uVar11 = uVar31 + uVar11 + lVar22;
      uVar54 = uVar10 + uVar54;
      param_2 = param_2 + 0x10;
    } while (param_2 != puVar12);
  }
  *param_1 = uVar18;
  param_1[1] = uVar50;
  param_1[2] = uVar48;
  param_1[3] = uVar6;
  param_1[4] = uVar11;
  param_1[5] = uVar43;
  param_1[6] = uVar20;
  param_1[7] = uVar54;
  return;
}


