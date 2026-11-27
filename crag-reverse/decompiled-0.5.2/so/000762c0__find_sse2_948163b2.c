// 000762c0 find_sse2

/* memchr[cf489ff24f0213f]::arch::x86_64::memchr::memrchr_raw::find_sse2 */

bool __rustcall
memchr[cf489ff24f0213f]::arch::x86_64::memchr::memrchr_raw::find_sse2
          (undefined4 param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char cVar20;
  undefined1 uVar23;
  undefined1 uVar25;
  undefined1 uVar27;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  undefined1 auVar21 [16];
  char cVar24;
  char cVar26;
  char cVar28;
  undefined1 auVar22 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  if (param_2 < param_3) {
    cVar20 = (char)param_1;
    if ((ulonglong)((longlong)param_3 - (longlong)param_2) < 0x10) {
      do {
        if (param_3 <= param_2) {
          return false;
        }
        pcVar19 = param_3 + -1;
        param_3 = param_3 + -1;
      } while (*pcVar19 != cVar20);
      return true;
    }
    uVar27 = (undefined1)((uint)param_1 >> 0x18);
    uVar25 = (undefined1)((uint)param_1 >> 0x10);
    uVar23 = (undefined1)((uint)param_1 >> 8);
    auVar21._4_4_ =
         (int)(CONCAT35(CONCAT21(CONCAT11(uVar27,uVar27),uVar25),CONCAT14(uVar25,param_1)) >> 0x20);
    auVar21[3] = uVar23;
    auVar21[2] = uVar23;
    auVar21[1] = cVar20;
    auVar21[0] = cVar20;
    auVar21._8_8_ = 0;
    auVar21 = pshuflw(auVar21,auVar21,0);
    cVar20 = auVar21[0];
    auVar33[0] = -(param_3[-0x10] == cVar20);
    cVar24 = auVar21[1];
    auVar33[1] = -(param_3[-0xf] == cVar24);
    cVar26 = auVar21[2];
    auVar33[2] = -(param_3[-0xe] == cVar26);
    cVar28 = auVar21[3];
    auVar33[3] = -(param_3[-0xd] == cVar28);
    cVar29 = auVar21[4];
    auVar33[4] = -(param_3[-0xc] == cVar29);
    cVar30 = auVar21[5];
    auVar33[5] = -(param_3[-0xb] == cVar30);
    cVar31 = auVar21[6];
    auVar33[6] = -(param_3[-10] == cVar31);
    cVar32 = auVar21[7];
    auVar33[7] = -(param_3[-9] == cVar32);
    auVar33[8] = -(param_3[-8] == cVar20);
    auVar33[9] = -(param_3[-7] == cVar24);
    auVar33[10] = -(param_3[-6] == cVar26);
    auVar33[0xb] = -(param_3[-5] == cVar28);
    auVar33[0xc] = -(param_3[-4] == cVar29);
    auVar33[0xd] = -(param_3[-3] == cVar30);
    auVar33[0xe] = -(param_3[-2] == cVar31);
    auVar33[0xf] = -(param_3[-1] == cVar32);
    uVar3 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
    if (uVar3 != 0) {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      return true;
    }
    pcVar19 = (char *)((ulonglong)param_3 & 0xfffffffffffffff0);
    if (param_2 + 0x40 <= pcVar19 && 0x3f < (ulonglong)((longlong)param_3 - (longlong)param_2)) {
      pcVar1 = param_3 + (-0x11 - (ulonglong)((uint)param_3 & 0xf));
      do {
        pcVar19 = pcVar1;
        auVar34[0] = -(pcVar19[-0x2f] == cVar20);
        auVar34[1] = -(pcVar19[-0x2e] == cVar24);
        auVar34[2] = -(pcVar19[-0x2d] == cVar26);
        auVar34[3] = -(pcVar19[-0x2c] == cVar28);
        auVar34[4] = -(pcVar19[-0x2b] == cVar29);
        auVar34[5] = -(pcVar19[-0x2a] == cVar30);
        auVar34[6] = -(pcVar19[-0x29] == cVar31);
        auVar34[7] = -(pcVar19[-0x28] == cVar32);
        auVar34[8] = -(pcVar19[-0x27] == cVar20);
        auVar34[9] = -(pcVar19[-0x26] == cVar24);
        auVar34[10] = -(pcVar19[-0x25] == cVar26);
        auVar34[0xb] = -(pcVar19[-0x24] == cVar28);
        auVar34[0xc] = -(pcVar19[-0x23] == cVar29);
        auVar34[0xd] = -(pcVar19[-0x22] == cVar30);
        auVar34[0xe] = -(pcVar19[-0x21] == cVar31);
        auVar34[0xf] = -(pcVar19[-0x20] == cVar32);
        auVar36[0] = -(pcVar19[-0x1f] == cVar20);
        auVar36[1] = -(pcVar19[-0x1e] == cVar24);
        auVar36[2] = -(pcVar19[-0x1d] == cVar26);
        auVar36[3] = -(pcVar19[-0x1c] == cVar28);
        auVar36[4] = -(pcVar19[-0x1b] == cVar29);
        auVar36[5] = -(pcVar19[-0x1a] == cVar30);
        auVar36[6] = -(pcVar19[-0x19] == cVar31);
        auVar36[7] = -(pcVar19[-0x18] == cVar32);
        auVar36[8] = -(pcVar19[-0x17] == cVar20);
        auVar36[9] = -(pcVar19[-0x16] == cVar24);
        auVar36[10] = -(pcVar19[-0x15] == cVar26);
        auVar36[0xb] = -(pcVar19[-0x14] == cVar28);
        auVar36[0xc] = -(pcVar19[-0x13] == cVar29);
        auVar36[0xd] = -(pcVar19[-0x12] == cVar30);
        auVar36[0xe] = -(pcVar19[-0x11] == cVar31);
        auVar36[0xf] = -(pcVar19[-0x10] == cVar32);
        auVar37[0] = -(pcVar19[-0xf] == cVar20);
        auVar37[1] = -(pcVar19[-0xe] == cVar24);
        auVar37[2] = -(pcVar19[-0xd] == cVar26);
        auVar37[3] = -(pcVar19[-0xc] == cVar28);
        auVar37[4] = -(pcVar19[-0xb] == cVar29);
        auVar37[5] = -(pcVar19[-10] == cVar30);
        auVar37[6] = -(pcVar19[-9] == cVar31);
        auVar37[7] = -(pcVar19[-8] == cVar32);
        auVar37[8] = -(pcVar19[-7] == cVar20);
        auVar37[9] = -(pcVar19[-6] == cVar24);
        auVar37[10] = -(pcVar19[-5] == cVar26);
        auVar37[0xb] = -(pcVar19[-4] == cVar28);
        auVar37[0xc] = -(pcVar19[-3] == cVar29);
        auVar37[0xd] = -(pcVar19[-2] == cVar30);
        auVar37[0xe] = -(pcVar19[-1] == cVar31);
        auVar37[0xf] = -(*pcVar19 == cVar32);
        auVar38[0] = -(pcVar19[1] == cVar20);
        auVar38[1] = -(pcVar19[2] == cVar24);
        auVar38[2] = -(pcVar19[3] == cVar26);
        auVar38[3] = -(pcVar19[4] == cVar28);
        auVar38[4] = -(pcVar19[5] == cVar29);
        auVar38[5] = -(pcVar19[6] == cVar30);
        auVar38[6] = -(pcVar19[7] == cVar31);
        auVar38[7] = -(pcVar19[8] == cVar32);
        auVar38[8] = -(pcVar19[9] == cVar20);
        auVar38[9] = -(pcVar19[10] == cVar24);
        auVar38[10] = -(pcVar19[0xb] == cVar26);
        auVar38[0xb] = -(pcVar19[0xc] == cVar28);
        auVar38[0xc] = -(pcVar19[0xd] == cVar29);
        auVar38[0xd] = -(pcVar19[0xe] == cVar30);
        auVar38[0xe] = -(pcVar19[0xf] == cVar31);
        auVar38[0xf] = -(pcVar19[0x10] == cVar32);
        auVar21 = auVar37 | auVar38 | auVar34 | auVar36;
        if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x1f,0) & 1) != 0) || (SUB161(auVar21 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
          uVar3 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(auVar38[0xf] >> 7) << 0xf;
          if (uVar3 != 0) {
            iVar2 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            return true;
          }
          uVar3 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
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
          if (uVar3 != 0) {
            iVar2 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            return true;
          }
          uVar3 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar36[0xf] >> 7) << 0xf;
          if (uVar3 == 0) {
            uVar3 = (ushort)(SUB161(auVar34 >> 7,0) & 1) |
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
                    (ushort)(auVar34[0xf] >> 7) << 0xf;
            iVar2 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            return true;
          }
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          return true;
        }
        pcVar1 = pcVar19 + -0x40;
      } while (param_2 + 0x40 <= pcVar19 + -0x2f);
      pcVar19 = pcVar19 + -0x2f;
    }
    while (param_2 + 0x10 <= pcVar19) {
      pcVar1 = pcVar19 + -0x10;
      pcVar4 = pcVar19 + -0xf;
      pcVar5 = pcVar19 + -0xe;
      pcVar6 = pcVar19 + -0xd;
      pcVar7 = pcVar19 + -0xc;
      pcVar8 = pcVar19 + -0xb;
      pcVar9 = pcVar19 + -10;
      pcVar10 = pcVar19 + -9;
      pcVar11 = pcVar19 + -8;
      pcVar12 = pcVar19 + -7;
      pcVar13 = pcVar19 + -6;
      pcVar14 = pcVar19 + -5;
      pcVar15 = pcVar19 + -4;
      pcVar16 = pcVar19 + -3;
      pcVar17 = pcVar19 + -2;
      pcVar18 = pcVar19 + -1;
      pcVar19 = pcVar19 + -0x10;
      auVar35[0] = -(*pcVar1 == cVar20);
      auVar35[1] = -(*pcVar4 == cVar24);
      auVar35[2] = -(*pcVar5 == cVar26);
      auVar35[3] = -(*pcVar6 == cVar28);
      auVar35[4] = -(*pcVar7 == cVar29);
      auVar35[5] = -(*pcVar8 == cVar30);
      auVar35[6] = -(*pcVar9 == cVar31);
      auVar35[7] = -(*pcVar10 == cVar32);
      auVar35[8] = -(*pcVar11 == cVar20);
      auVar35[9] = -(*pcVar12 == cVar24);
      auVar35[10] = -(*pcVar13 == cVar26);
      auVar35[0xb] = -(*pcVar14 == cVar28);
      auVar35[0xc] = -(*pcVar15 == cVar29);
      auVar35[0xd] = -(*pcVar16 == cVar30);
      auVar35[0xe] = -(*pcVar17 == cVar31);
      auVar35[0xf] = -(*pcVar18 == cVar32);
      uVar3 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
        iVar2 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        return true;
      }
    }
    if (param_2 < pcVar19) {
      auVar22[0] = -(cVar20 == *param_2);
      auVar22[1] = -(cVar24 == param_2[1]);
      auVar22[2] = -(cVar26 == param_2[2]);
      auVar22[3] = -(cVar28 == param_2[3]);
      auVar22[4] = -(cVar29 == param_2[4]);
      auVar22[5] = -(cVar30 == param_2[5]);
      auVar22[6] = -(cVar31 == param_2[6]);
      auVar22[7] = -(cVar32 == param_2[7]);
      auVar22[8] = -(cVar20 == param_2[8]);
      auVar22[9] = -(cVar24 == param_2[9]);
      auVar22[10] = -(cVar26 == param_2[10]);
      auVar22[0xb] = -(cVar28 == param_2[0xb]);
      auVar22[0xc] = -(cVar29 == param_2[0xc]);
      auVar22[0xd] = -(cVar30 == param_2[0xd]);
      auVar22[0xe] = -(cVar31 == param_2[0xe]);
      auVar22[0xf] = -(cVar32 == param_2[0xf]);
      uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      return uVar3 != 0;
    }
  }
  return false;
}


