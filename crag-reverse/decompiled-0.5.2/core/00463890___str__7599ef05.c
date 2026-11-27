// 00463890 <str>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   (std[6c98fd8553dbae28]::time::Instant, u32),
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<str> */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(std[6c98fd8553dbae28]::time::Instant,u32),std[6c98fd8553dbae28]::hash::random::RandomState>>
::remove::<str>(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&str>(param_2 + 4,param_3,param_4);
  puVar8 = PTR_bcmp_00799020;
  lVar2 = *param_2;
  uVar12 = param_2[1];
  bVar18 = (byte)(uVar11 >> 0x39);
  auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
  auVar19 = pshuflw(auVar19,auVar19,0);
  lVar14 = 0;
  while( true ) {
    uVar11 = uVar11 & uVar12;
    auVar21 = *(undefined1 (*) [16])(lVar2 + uVar11);
    auVar20[0] = -(auVar21[0] == auVar19[0]);
    auVar20[1] = -(auVar21[1] == auVar19[1]);
    auVar20[2] = -(auVar21[2] == auVar19[2]);
    auVar20[3] = -(auVar21[3] == auVar19[3]);
    auVar20[4] = -(auVar21[4] == auVar19[4]);
    auVar20[5] = -(auVar21[5] == auVar19[5]);
    auVar20[6] = -(auVar21[6] == auVar19[6]);
    auVar20[7] = -(auVar21[7] == auVar19[7]);
    auVar20[8] = -(auVar21[8] == auVar19[0]);
    auVar20[9] = -(auVar21[9] == auVar19[1]);
    auVar20[10] = -(auVar21[10] == auVar19[2]);
    auVar20[0xb] = -(auVar21[0xb] == auVar19[3]);
    auVar20[0xc] = -(auVar21[0xc] == auVar19[4]);
    auVar20[0xd] = -(auVar21[0xd] == auVar19[5]);
    auVar20[0xe] = -(auVar21[0xe] == auVar19[6]);
    auVar20[0xf] = -(auVar21[0xf] == auVar19[7]);
    uVar9 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
    uVar16 = (uint)uVar9;
    if (uVar9 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar17 = uVar5 + uVar11 & uVar12;
        lVar15 = uVar17 * -0x30;
        if (param_4 == *(longlong *)(lVar2 + -0x20 + lVar15)) {
          lVar15 = lVar15 + lVar2;
          iVar10 = (*(code *)puVar8)(uVar16,param_4,0xffffffff,auVar21._0_8_,param_3);
          if (iVar10 == 0) {
            lVar14 = ((longlong)(uVar17 * 0x30) >> 4) * -0x5555555555555555;
            uVar12 = lVar14 - 0x10U & uVar12;
            pcVar1 = (char *)(lVar2 + uVar12);
            auVar19[0] = -(*pcVar1 == -1);
            auVar19[1] = -(pcVar1[1] == -1);
            auVar19[2] = -(pcVar1[2] == -1);
            auVar19[3] = -(pcVar1[3] == -1);
            auVar19[4] = -(pcVar1[4] == -1);
            auVar19[5] = -(pcVar1[5] == -1);
            auVar19[6] = -(pcVar1[6] == -1);
            auVar19[7] = -(pcVar1[7] == -1);
            auVar19[8] = -(pcVar1[8] == -1);
            auVar19[9] = -(pcVar1[9] == -1);
            auVar19[10] = -(pcVar1[10] == -1);
            auVar19[0xb] = -(pcVar1[0xb] == -1);
            auVar19[0xc] = -(pcVar1[0xc] == -1);
            auVar19[0xd] = -(pcVar1[0xd] == -1);
            auVar19[0xe] = -(pcVar1[0xe] == -1);
            auVar19[0xf] = -(pcVar1[0xf] == -1);
            uVar3 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
                    (ushort)(auVar19[0xf] >> 7) << 0xf;
            pcVar1 = (char *)(lVar2 + lVar14);
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
            uVar9 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar9 == 0; uVar9 = uVar9 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar16 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                                  (ushort)(auVar21[0xf] >> 7) << 0xf) | 0x10000; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar13 = 0x80;
            if ((ushort)(sVar4 + (uVar9 ^ 0xf)) < 0x10) {
              param_2[2] = param_2[2] + 1;
              uVar13 = 0xff;
            }
            *(undefined1 *)(lVar2 + lVar14) = uVar13;
            *(undefined1 *)(lVar2 + 0x10 + uVar12) = uVar13;
            param_2[3] = param_2[3] + -1;
            lVar2 = *(longlong *)(lVar15 + -0x30);
            if (lVar2 != -1) {
              param_1[2] = *(undefined8 *)(lVar15 + -8);
              uVar7 = *(undefined8 *)(lVar15 + -0x10);
              *param_1 = *(undefined8 *)(lVar15 + -0x18);
              param_1[1] = uVar7;
              if (lVar2 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
              return param_1;
            }
            goto LAB_00463a6e;
          }
        }
        uVar9 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar9);
      } while (uVar9 != 0);
    }
    auVar22[0] = -(auVar21[0] == -1);
    auVar22[1] = -(auVar21[1] == -1);
    auVar22[2] = -(auVar21[2] == -1);
    auVar22[3] = -(auVar21[3] == -1);
    auVar22[4] = -(auVar21[4] == -1);
    auVar22[5] = -(auVar21[5] == -1);
    auVar22[6] = -(auVar21[6] == -1);
    auVar22[7] = -(auVar21[7] == -1);
    auVar22[8] = -(auVar21[8] == -1);
    auVar22[9] = -(auVar21[9] == -1);
    auVar22[10] = -(auVar21[10] == -1);
    auVar22[0xb] = -(auVar21[0xb] == -1);
    auVar22[0xc] = -(auVar21[0xc] == -1);
    auVar22[0xd] = -(auVar21[0xd] == -1);
    auVar22[0xe] = -(auVar21[0xe] == -1);
    auVar22[0xf] = -(auVar21[0xf] == -1);
    if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x37,0) & 1) != 0) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
    uVar11 = uVar11 + lVar14 + 0x10;
    lVar14 = lVar14 + 0x10;
  }
LAB_00463a6e:
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}


