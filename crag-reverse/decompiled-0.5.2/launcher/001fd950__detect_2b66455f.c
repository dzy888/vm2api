// 001fd950 detect

/* memchr[3cbe3fed3bfda51a]::arch::x86_64::memchr::memchr_raw::detect */

bool __rustcall
memchr[3cbe3fed3bfda51a]::arch::x86_64::memchr::memchr_raw::detect
          (undefined4 param_1,char *param_2,char *param_3)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  undefined1 uVar8;
  undefined1 uVar10;
  undefined1 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined1 auVar6 [16];
  char cVar9;
  char cVar11;
  char cVar13;
  undefined1 auVar7 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  *(code **)PTR_FN_0021abf8 = find_sse2;
  if (param_3 <= param_2) {
    return false;
  }
  cVar5 = (char)param_1;
  if ((ulonglong)((longlong)param_3 - (longlong)param_2) < 0x10) {
    while (*param_2 != cVar5) {
      param_2 = param_2 + 1;
      if (param_2 == param_3) {
        return false;
      }
    }
  }
  else {
    uVar12 = (undefined1)((uint)param_1 >> 0x18);
    uVar10 = (undefined1)((uint)param_1 >> 0x10);
    uVar8 = (undefined1)((uint)param_1 >> 8);
    auVar6._4_4_ = (int)(CONCAT35(CONCAT21(CONCAT11(uVar12,uVar12),uVar10),CONCAT14(uVar10,param_1))
                        >> 0x20);
    auVar6[3] = uVar8;
    auVar6[2] = uVar8;
    auVar6[1] = cVar5;
    auVar6[0] = cVar5;
    auVar6._8_8_ = 0;
    auVar6 = pshuflw(auVar6,auVar6,0);
    cVar5 = auVar6[0];
    auVar18[0] = -(*param_2 == cVar5);
    cVar9 = auVar6[1];
    auVar18[1] = -(param_2[1] == cVar9);
    cVar11 = auVar6[2];
    auVar18[2] = -(param_2[2] == cVar11);
    cVar13 = auVar6[3];
    auVar18[3] = -(param_2[3] == cVar13);
    cVar14 = auVar6[4];
    auVar18[4] = -(param_2[4] == cVar14);
    cVar15 = auVar6[5];
    auVar18[5] = -(param_2[5] == cVar15);
    cVar16 = auVar6[6];
    auVar18[6] = -(param_2[6] == cVar16);
    cVar17 = auVar6[7];
    auVar18[7] = -(param_2[7] == cVar17);
    auVar18[8] = -(param_2[8] == cVar5);
    auVar18[9] = -(param_2[9] == cVar9);
    auVar18[10] = -(param_2[10] == cVar11);
    auVar18[0xb] = -(param_2[0xb] == cVar13);
    auVar18[0xc] = -(param_2[0xc] == cVar14);
    auVar18[0xd] = -(param_2[0xd] == cVar15);
    auVar18[0xe] = -(param_2[0xe] == cVar16);
    auVar18[0xf] = -(param_2[0xf] == cVar17);
    uVar1 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
    uVar3 = (uint)uVar1;
    if (uVar1 == 0) {
      pcVar4 = (char *)(((ulonglong)param_2 & 0xfffffffffffffff0) + 0x10);
      if (pcVar4 <= param_3 + -0x40 && 0x3f < (ulonglong)((longlong)param_3 - (longlong)param_2)) {
        pcVar2 = param_2 + (0x20 - (ulonglong)((uint)param_2 & 0xf));
        do {
          pcVar4 = pcVar2;
          auVar23[0] = -(pcVar4[-0x10] == cVar5);
          auVar23[1] = -(pcVar4[-0xf] == cVar9);
          auVar23[2] = -(pcVar4[-0xe] == cVar11);
          auVar23[3] = -(pcVar4[-0xd] == cVar13);
          auVar23[4] = -(pcVar4[-0xc] == cVar14);
          auVar23[5] = -(pcVar4[-0xb] == cVar15);
          auVar23[6] = -(pcVar4[-10] == cVar16);
          auVar23[7] = -(pcVar4[-9] == cVar17);
          auVar23[8] = -(pcVar4[-8] == cVar5);
          auVar23[9] = -(pcVar4[-7] == cVar9);
          auVar23[10] = -(pcVar4[-6] == cVar11);
          auVar23[0xb] = -(pcVar4[-5] == cVar13);
          auVar23[0xc] = -(pcVar4[-4] == cVar14);
          auVar23[0xd] = -(pcVar4[-3] == cVar15);
          auVar23[0xe] = -(pcVar4[-2] == cVar16);
          auVar23[0xf] = -(pcVar4[-1] == cVar17);
          auVar22[0] = -(*pcVar4 == cVar5);
          auVar22[1] = -(pcVar4[1] == cVar9);
          auVar22[2] = -(pcVar4[2] == cVar11);
          auVar22[3] = -(pcVar4[3] == cVar13);
          auVar22[4] = -(pcVar4[4] == cVar14);
          auVar22[5] = -(pcVar4[5] == cVar15);
          auVar22[6] = -(pcVar4[6] == cVar16);
          auVar22[7] = -(pcVar4[7] == cVar17);
          auVar22[8] = -(pcVar4[8] == cVar5);
          auVar22[9] = -(pcVar4[9] == cVar9);
          auVar22[10] = -(pcVar4[10] == cVar11);
          auVar22[0xb] = -(pcVar4[0xb] == cVar13);
          auVar22[0xc] = -(pcVar4[0xc] == cVar14);
          auVar22[0xd] = -(pcVar4[0xd] == cVar15);
          auVar22[0xe] = -(pcVar4[0xe] == cVar16);
          auVar22[0xf] = -(pcVar4[0xf] == cVar17);
          auVar21[0] = -(pcVar4[0x10] == cVar5);
          auVar21[1] = -(pcVar4[0x11] == cVar9);
          auVar21[2] = -(pcVar4[0x12] == cVar11);
          auVar21[3] = -(pcVar4[0x13] == cVar13);
          auVar21[4] = -(pcVar4[0x14] == cVar14);
          auVar21[5] = -(pcVar4[0x15] == cVar15);
          auVar21[6] = -(pcVar4[0x16] == cVar16);
          auVar21[7] = -(pcVar4[0x17] == cVar17);
          auVar21[8] = -(pcVar4[0x18] == cVar5);
          auVar21[9] = -(pcVar4[0x19] == cVar9);
          auVar21[10] = -(pcVar4[0x1a] == cVar11);
          auVar21[0xb] = -(pcVar4[0x1b] == cVar13);
          auVar21[0xc] = -(pcVar4[0x1c] == cVar14);
          auVar21[0xd] = -(pcVar4[0x1d] == cVar15);
          auVar21[0xe] = -(pcVar4[0x1e] == cVar16);
          auVar21[0xf] = -(pcVar4[0x1f] == cVar17);
          auVar19[0] = -(pcVar4[0x20] == cVar5);
          auVar19[1] = -(pcVar4[0x21] == cVar9);
          auVar19[2] = -(pcVar4[0x22] == cVar11);
          auVar19[3] = -(pcVar4[0x23] == cVar13);
          auVar19[4] = -(pcVar4[0x24] == cVar14);
          auVar19[5] = -(pcVar4[0x25] == cVar15);
          auVar19[6] = -(pcVar4[0x26] == cVar16);
          auVar19[7] = -(pcVar4[0x27] == cVar17);
          auVar19[8] = -(pcVar4[0x28] == cVar5);
          auVar19[9] = -(pcVar4[0x29] == cVar9);
          auVar19[10] = -(pcVar4[0x2a] == cVar11);
          auVar19[0xb] = -(pcVar4[0x2b] == cVar13);
          auVar19[0xc] = -(pcVar4[0x2c] == cVar14);
          auVar19[0xd] = -(pcVar4[0x2d] == cVar15);
          auVar19[0xe] = -(pcVar4[0x2e] == cVar16);
          auVar19[0xf] = -(pcVar4[0x2f] == cVar17);
          auVar6 = auVar21 | auVar19 | auVar23 | auVar22;
          if ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar6 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar6 >> 0x1f,0) & 1) != 0) || (SUB161(auVar6 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar6 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar6 >> 0x37,0) & 1) != 0) || (SUB161(auVar6 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar6 >> 0x47,0) & 1) != 0) || (SUB161(auVar6 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar6 >> 0x57,0) & 1) != 0) || (SUB161(auVar6 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar6 >> 0x67,0) & 1) != 0) || (SUB161(auVar6 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar6 >> 0x77,0) & 1) != 0) || auVar6[0xf] < '\0') {
            uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                    (ushort)(auVar23[0xf] >> 7) << 0xf;
            if (uVar1 != 0) {
              for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              }
              return true;
            }
            uVar3 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar22[0xf] >> 7) << 0xf);
            if (uVar3 == 0) {
              uVar1 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
                      (ushort)(auVar21[0xf] >> 7) << 0xf;
              if (uVar1 == 0) {
                for (uVar3 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(auVar19[0xf] >> 7) << 0xf); (uVar3 & 1) == 0;
                    uVar3 = uVar3 >> 1 | 0x80000000) {
                }
                return true;
              }
              for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              }
              return true;
            }
            goto LAB_001fd9c3;
          }
          pcVar2 = pcVar4 + 0x40;
        } while (pcVar4 + 0x30 <= param_3 + -0x40);
        pcVar4 = pcVar4 + 0x30;
      }
      for (; pcVar4 <= param_3 + -0x10; pcVar4 = pcVar4 + 0x10) {
        auVar20[0] = -(*pcVar4 == cVar5);
        auVar20[1] = -(pcVar4[1] == cVar9);
        auVar20[2] = -(pcVar4[2] == cVar11);
        auVar20[3] = -(pcVar4[3] == cVar13);
        auVar20[4] = -(pcVar4[4] == cVar14);
        auVar20[5] = -(pcVar4[5] == cVar15);
        auVar20[6] = -(pcVar4[6] == cVar16);
        auVar20[7] = -(pcVar4[7] == cVar17);
        auVar20[8] = -(pcVar4[8] == cVar5);
        auVar20[9] = -(pcVar4[9] == cVar9);
        auVar20[10] = -(pcVar4[10] == cVar11);
        auVar20[0xb] = -(pcVar4[0xb] == cVar13);
        auVar20[0xc] = -(pcVar4[0xc] == cVar14);
        auVar20[0xd] = -(pcVar4[0xd] == cVar15);
        auVar20[0xe] = -(pcVar4[0xe] == cVar16);
        auVar20[0xf] = -(pcVar4[0xf] == cVar17);
        uVar1 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
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
                (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          }
          return true;
        }
      }
      if (param_3 <= pcVar4) {
        return false;
      }
      auVar7[0] = -(cVar5 == param_3[-0x10]);
      auVar7[1] = -(cVar9 == param_3[-0xf]);
      auVar7[2] = -(cVar11 == param_3[-0xe]);
      auVar7[3] = -(cVar13 == param_3[-0xd]);
      auVar7[4] = -(cVar14 == param_3[-0xc]);
      auVar7[5] = -(cVar15 == param_3[-0xb]);
      auVar7[6] = -(cVar16 == param_3[-10]);
      auVar7[7] = -(cVar17 == param_3[-9]);
      auVar7[8] = -(cVar5 == param_3[-8]);
      auVar7[9] = -(cVar9 == param_3[-7]);
      auVar7[10] = -(cVar11 == param_3[-6]);
      auVar7[0xb] = -(cVar13 == param_3[-5]);
      auVar7[0xc] = -(cVar14 == param_3[-4]);
      auVar7[0xd] = -(cVar15 == param_3[-3]);
      auVar7[0xe] = -(cVar16 == param_3[-2]);
      auVar7[0xf] = -(cVar17 == param_3[-1]);
      uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf;
      for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      }
      return uVar1 != 0;
    }
LAB_001fd9c3:
    for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
    }
  }
  return true;
}


