// 00462690 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
    */

longlong __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>>
::remove::<alloc[12e961f32105355]::string::String>
          (longlong param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4);
  puVar7 = PTR_bcmp_00799020;
  lVar11 = *(longlong *)(param_3 + 0x10);
  lVar2 = *param_2;
  uVar12 = param_2[1];
  bVar18 = (byte)(uVar10 >> 0x39);
  auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
  auVar20 = pshuflw(auVar20,auVar20,0);
  lVar15 = 0;
  while( true ) {
    uVar10 = uVar10 & uVar12;
    auVar22 = *(undefined1 (*) [16])(lVar2 + uVar10);
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
    uVar8 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
    uVar14 = (uint)uVar8;
    if (uVar8 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar16 = uVar5 + uVar10 & uVar12;
        lVar17 = uVar16 * -0x2c0;
        if (lVar11 == *(longlong *)(lVar2 + -0x2b0 + lVar17)) {
          iVar9 = (*(code *)puVar7)(uVar14,lVar11);
          if (iVar9 == 0) {
            lVar11 = ((longlong)(uVar16 * 0x2c0) >> 6) * 0x2e8ba2e8ba2e8ba3;
            uVar12 = lVar11 - 0x10U & uVar12;
            pcVar1 = (char *)(lVar2 + uVar12);
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
            pcVar1 = (char *)(lVar2 + lVar11);
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
            uVar8 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar8 == 0; uVar8 = uVar8 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar14 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                                  (ushort)(auVar22[0xf] >> 7) << 0xf) | 0x10000; (uVar14 & 1) == 0;
                uVar14 = uVar14 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar13 = 0x80;
            if ((ushort)(sVar4 + (uVar8 ^ 0xf)) < 0x10) {
              param_2[2] = param_2[2] + 1;
              uVar13 = 0xff;
            }
            *(undefined1 *)(lVar2 + lVar11) = uVar13;
            *(undefined1 *)(lVar2 + 0x10 + uVar12) = uVar13;
            param_2[3] = param_2[3] + -1;
            lVar11 = *(longlong *)(lVar17 + lVar2 + -0x2c0);
            if (lVar11 != -1) {
              uVar19 = (*(code *)PTR_memcpy_00799008)(uVar12,0x2a8);
              if (lVar11 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
              return param_1;
            }
            goto LAB_00462886;
          }
        }
        uVar8 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar8);
      } while (uVar8 != 0);
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
    uVar10 = uVar10 + lVar15 + 0x10;
    lVar15 = lVar15 + 0x10;
  }
LAB_00462886:
  *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  return param_1;
}


