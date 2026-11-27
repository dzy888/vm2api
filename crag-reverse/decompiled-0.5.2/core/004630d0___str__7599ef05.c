// 004630d0 <str>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<str> */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
::remove::<str>(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&str>(param_2 + 4,param_3,param_4);
  puVar10 = PTR_bcmp_00799020;
  lVar2 = *param_2;
  uVar14 = param_2[1];
  bVar20 = (byte)(uVar13 >> 0x39);
  auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar21 = pshuflw(auVar21,auVar21,0);
  lVar16 = 0;
  while( true ) {
    uVar13 = uVar13 & uVar14;
    auVar23 = *(undefined1 (*) [16])(lVar2 + uVar13);
    auVar22[0] = -(auVar23[0] == auVar21[0]);
    auVar22[1] = -(auVar23[1] == auVar21[1]);
    auVar22[2] = -(auVar23[2] == auVar21[2]);
    auVar22[3] = -(auVar23[3] == auVar21[3]);
    auVar22[4] = -(auVar23[4] == auVar21[4]);
    auVar22[5] = -(auVar23[5] == auVar21[5]);
    auVar22[6] = -(auVar23[6] == auVar21[6]);
    auVar22[7] = -(auVar23[7] == auVar21[7]);
    auVar22[8] = -(auVar23[8] == auVar21[0]);
    auVar22[9] = -(auVar23[9] == auVar21[1]);
    auVar22[10] = -(auVar23[10] == auVar21[2]);
    auVar22[0xb] = -(auVar23[0xb] == auVar21[3]);
    auVar22[0xc] = -(auVar23[0xc] == auVar21[4]);
    auVar22[0xd] = -(auVar23[0xd] == auVar21[5]);
    auVar22[0xe] = -(auVar23[0xe] == auVar21[6]);
    auVar22[0xf] = -(auVar23[0xf] == auVar21[7]);
    uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
    uVar18 = (uint)uVar11;
    if (uVar11 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar19 = uVar5 + uVar13 & uVar14;
        lVar17 = uVar19 * -0x38;
        if (param_4 == *(longlong *)(lVar2 + -0x28 + lVar17)) {
          lVar17 = lVar17 + lVar2;
          iVar12 = (*(code *)puVar10)(uVar18,param_4,0xffffffff,auVar23._0_8_,param_3);
          if (iVar12 == 0) {
            lVar16 = ((longlong)(uVar19 * 0x38) >> 3) * 0x6db6db6db6db6db7;
            uVar14 = lVar16 - 0x10U & uVar14;
            pcVar1 = (char *)(lVar2 + uVar14);
            auVar21[0] = -(*pcVar1 == -1);
            auVar21[1] = -(pcVar1[1] == -1);
            auVar21[2] = -(pcVar1[2] == -1);
            auVar21[3] = -(pcVar1[3] == -1);
            auVar21[4] = -(pcVar1[4] == -1);
            auVar21[5] = -(pcVar1[5] == -1);
            auVar21[6] = -(pcVar1[6] == -1);
            auVar21[7] = -(pcVar1[7] == -1);
            auVar21[8] = -(pcVar1[8] == -1);
            auVar21[9] = -(pcVar1[9] == -1);
            auVar21[10] = -(pcVar1[10] == -1);
            auVar21[0xb] = -(pcVar1[0xb] == -1);
            auVar21[0xc] = -(pcVar1[0xc] == -1);
            auVar21[0xd] = -(pcVar1[0xd] == -1);
            auVar21[0xe] = -(pcVar1[0xe] == -1);
            auVar21[0xf] = -(pcVar1[0xf] == -1);
            uVar3 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
            pcVar1 = (char *)(lVar2 + lVar16);
            auVar23[0] = -(*pcVar1 == -1);
            auVar23[1] = -(pcVar1[1] == -1);
            auVar23[2] = -(pcVar1[2] == -1);
            auVar23[3] = -(pcVar1[3] == -1);
            auVar23[4] = -(pcVar1[4] == -1);
            auVar23[5] = -(pcVar1[5] == -1);
            auVar23[6] = -(pcVar1[6] == -1);
            auVar23[7] = -(pcVar1[7] == -1);
            auVar23[8] = -(pcVar1[8] == -1);
            auVar23[9] = -(pcVar1[9] == -1);
            auVar23[10] = -(pcVar1[10] == -1);
            auVar23[0xb] = -(pcVar1[0xb] == -1);
            auVar23[0xc] = -(pcVar1[0xc] == -1);
            auVar23[0xd] = -(pcVar1[0xd] == -1);
            auVar23[0xe] = -(pcVar1[0xe] == -1);
            auVar23[0xf] = -(pcVar1[0xf] == -1);
            uVar11 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar11 == 0; uVar11 = uVar11 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar18 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
                                  (ushort)(auVar23[0xf] >> 7) << 0xf) | 0x10000; (uVar18 & 1) == 0;
                uVar18 = uVar18 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar15 = 0x80;
            if ((ushort)(sVar4 + (uVar11 ^ 0xf)) < 0x10) {
              param_2[2] = param_2[2] + 1;
              uVar15 = 0xff;
            }
            *(undefined1 *)(lVar2 + lVar16) = uVar15;
            *(undefined1 *)(lVar2 + 0x10 + uVar14) = uVar15;
            param_2[3] = param_2[3] + -1;
            lVar2 = *(longlong *)(lVar17 + -0x38);
            if (lVar2 != -1) {
              uVar7 = *(undefined8 *)(lVar17 + -0x20);
              uVar8 = *(undefined8 *)(lVar17 + -0x18);
              uVar9 = *(undefined8 *)(lVar17 + -8);
              param_1[2] = *(undefined8 *)(lVar17 + -0x10);
              param_1[3] = uVar9;
              *param_1 = uVar7;
              param_1[1] = uVar8;
              if (lVar2 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
              return param_1;
            }
            goto LAB_0046329d;
          }
        }
        uVar11 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar11);
      } while (uVar11 != 0);
    }
    auVar24[0] = -(auVar23[0] == -1);
    auVar24[1] = -(auVar23[1] == -1);
    auVar24[2] = -(auVar23[2] == -1);
    auVar24[3] = -(auVar23[3] == -1);
    auVar24[4] = -(auVar23[4] == -1);
    auVar24[5] = -(auVar23[5] == -1);
    auVar24[6] = -(auVar23[6] == -1);
    auVar24[7] = -(auVar23[7] == -1);
    auVar24[8] = -(auVar23[8] == -1);
    auVar24[9] = -(auVar23[9] == -1);
    auVar24[10] = -(auVar23[10] == -1);
    auVar24[0xb] = -(auVar23[0xb] == -1);
    auVar24[0xc] = -(auVar23[0xc] == -1);
    auVar24[0xd] = -(auVar23[0xd] == -1);
    auVar24[0xe] = -(auVar23[0xe] == -1);
    auVar24[0xf] = -(auVar23[0xf] == -1);
    if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
    uVar13 = uVar13 + lVar16 + 0x10;
    lVar16 = lVar16 + 0x10;
  }
LAB_0046329d:
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


