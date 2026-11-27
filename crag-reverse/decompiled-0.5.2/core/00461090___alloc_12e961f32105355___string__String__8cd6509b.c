// 00461090 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>>
::remove::<alloc[12e961f32105355]::string::String>
          (undefined8 *param_1,longlong *param_2,longlong param_3)

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
  longlong lVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4);
  puVar8 = PTR_bcmp_00799020;
  lVar12 = *(longlong *)(param_3 + 0x10);
  lVar2 = *param_2;
  uVar13 = param_2[1];
  bVar19 = (byte)(uVar11 >> 0x39);
  auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
  auVar20 = pshuflw(auVar20,auVar20,0);
  lVar16 = 0;
  while( true ) {
    uVar11 = uVar11 & uVar13;
    auVar22 = *(undefined1 (*) [16])(lVar2 + uVar11);
    auVar21[0] = -(auVar22[0] == auVar20[0]);
    auVar21[1] = -(auVar22[1] == auVar20[1]);
    auVar21[2] = -(auVar22[2] == auVar20[2]);
    auVar21[3] = -(auVar22[3] == auVar20[3]);
    auVar21[4] = -(auVar22[4] == auVar20[4]);
    auVar21[5] = -(auVar22[5] == auVar20[5]);
    auVar21[6] = -(auVar22[6] == auVar20[6]);
    auVar21[7] = -(auVar22[7] == auVar20[7]);
    auVar21[8] = -(auVar22[8] == auVar20[0]);
    auVar21[9] = -(auVar22[9] == auVar20[1]);
    auVar21[10] = -(auVar22[10] == auVar20[2]);
    auVar21[0xb] = -(auVar22[0xb] == auVar20[3]);
    auVar21[0xc] = -(auVar22[0xc] == auVar20[4]);
    auVar21[0xd] = -(auVar22[0xd] == auVar20[5]);
    auVar21[0xe] = -(auVar22[0xe] == auVar20[6]);
    auVar21[0xf] = -(auVar22[0xf] == auVar20[7]);
    uVar9 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar9;
    if (uVar9 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar17 = uVar5 + uVar11 & uVar13;
        lVar18 = uVar17 * -0x30;
        if (lVar12 == *(longlong *)(lVar2 + -0x20 + lVar18)) {
          lVar18 = lVar18 + lVar2;
          iVar10 = (*(code *)puVar8)(uVar15,lVar12);
          if (iVar10 == 0) {
            lVar12 = ((longlong)(uVar17 * 0x30) >> 4) * -0x5555555555555555;
            uVar13 = lVar12 - 0x10U & uVar13;
            pcVar1 = (char *)(lVar2 + uVar13);
            auVar20[0] = -(*pcVar1 == -1);
            auVar20[1] = -(pcVar1[1] == -1);
            auVar20[2] = -(pcVar1[2] == -1);
            auVar20[3] = -(pcVar1[3] == -1);
            auVar20[4] = -(pcVar1[4] == -1);
            auVar20[5] = -(pcVar1[5] == -1);
            auVar20[6] = -(pcVar1[6] == -1);
            auVar20[7] = -(pcVar1[7] == -1);
            auVar20[8] = -(pcVar1[8] == -1);
            auVar20[9] = -(pcVar1[9] == -1);
            auVar20[10] = -(pcVar1[10] == -1);
            auVar20[0xb] = -(pcVar1[0xb] == -1);
            auVar20[0xc] = -(pcVar1[0xc] == -1);
            auVar20[0xd] = -(pcVar1[0xd] == -1);
            auVar20[0xe] = -(pcVar1[0xe] == -1);
            auVar20[0xf] = -(pcVar1[0xf] == -1);
            uVar3 = (ushort)(SUB161(auVar20 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                    (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar20[0xf] >> 7) << 0xf;
            pcVar1 = (char *)(lVar2 + lVar12);
            auVar22[0] = -(*pcVar1 == -1);
            auVar22[1] = -(pcVar1[1] == -1);
            auVar22[2] = -(pcVar1[2] == -1);
            auVar22[3] = -(pcVar1[3] == -1);
            auVar22[4] = -(pcVar1[4] == -1);
            auVar22[5] = -(pcVar1[5] == -1);
            auVar22[6] = -(pcVar1[6] == -1);
            auVar22[7] = -(pcVar1[7] == -1);
            auVar22[8] = -(pcVar1[8] == -1);
            auVar22[9] = -(pcVar1[9] == -1);
            auVar22[10] = -(pcVar1[10] == -1);
            auVar22[0xb] = -(pcVar1[0xb] == -1);
            auVar22[0xc] = -(pcVar1[0xc] == -1);
            auVar22[0xd] = -(pcVar1[0xd] == -1);
            auVar22[0xe] = -(pcVar1[0xe] == -1);
            auVar22[0xf] = -(pcVar1[0xf] == -1);
            uVar9 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar9 == 0; uVar9 = uVar9 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar15 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                                  (ushort)(auVar22[0xf] >> 7) << 0xf) | 0x10000; (uVar15 & 1) == 0;
                uVar15 = uVar15 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar14 = 0x80;
            if ((ushort)(sVar4 + (uVar9 ^ 0xf)) < 0x10) {
              param_2[2] = param_2[2] + 1;
              uVar14 = 0xff;
            }
            *(undefined1 *)(lVar2 + lVar12) = uVar14;
            *(undefined1 *)(lVar2 + 0x10 + uVar13) = uVar14;
            param_2[3] = param_2[3] + -1;
            lVar12 = *(longlong *)(lVar18 + -0x30);
            if (lVar12 != -1) {
              param_1[2] = *(undefined8 *)(lVar18 + -8);
              uVar7 = *(undefined8 *)(lVar18 + -0x10);
              *param_1 = *(undefined8 *)(lVar18 + -0x18);
              param_1[1] = uVar7;
              if (lVar12 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
              return param_1;
            }
            goto LAB_00461265;
          }
        }
        uVar9 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar9);
      } while (uVar9 != 0);
    }
    auVar23[0] = -(auVar22[0] == -1);
    auVar23[1] = -(auVar22[1] == -1);
    auVar23[2] = -(auVar22[2] == -1);
    auVar23[3] = -(auVar22[3] == -1);
    auVar23[4] = -(auVar22[4] == -1);
    auVar23[5] = -(auVar22[5] == -1);
    auVar23[6] = -(auVar22[6] == -1);
    auVar23[7] = -(auVar22[7] == -1);
    auVar23[8] = -(auVar22[8] == -1);
    auVar23[9] = -(auVar22[9] == -1);
    auVar23[10] = -(auVar22[10] == -1);
    auVar23[0xb] = -(auVar22[0xb] == -1);
    auVar23[0xc] = -(auVar22[0xc] == -1);
    auVar23[0xd] = -(auVar22[0xd] == -1);
    auVar23[0xe] = -(auVar22[0xe] == -1);
    auVar23[0xf] = -(auVar22[0xf] == -1);
    if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
    uVar11 = uVar11 + lVar16 + 0x10;
    lVar16 = lVar16 + 0x10;
  }
LAB_00461265:
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


