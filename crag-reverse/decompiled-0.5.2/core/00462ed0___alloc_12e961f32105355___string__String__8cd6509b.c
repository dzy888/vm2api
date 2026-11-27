// 00462ed0 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
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
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4);
  puVar10 = PTR_bcmp_00799020;
  lVar14 = *(longlong *)(param_3 + 0x10);
  lVar2 = *param_2;
  uVar15 = param_2[1];
  bVar21 = (byte)(uVar13 >> 0x39);
  auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
  auVar22 = pshuflw(auVar22,auVar22,0);
  lVar18 = 0;
  while( true ) {
    uVar13 = uVar13 & uVar15;
    auVar24 = *(undefined1 (*) [16])(lVar2 + uVar13);
    auVar23[0] = -(auVar24[0] == auVar22[0]);
    auVar23[1] = -(auVar24[1] == auVar22[1]);
    auVar23[2] = -(auVar24[2] == auVar22[2]);
    auVar23[3] = -(auVar24[3] == auVar22[3]);
    auVar23[4] = -(auVar24[4] == auVar22[4]);
    auVar23[5] = -(auVar24[5] == auVar22[5]);
    auVar23[6] = -(auVar24[6] == auVar22[6]);
    auVar23[7] = -(auVar24[7] == auVar22[7]);
    auVar23[8] = -(auVar24[8] == auVar22[0]);
    auVar23[9] = -(auVar24[9] == auVar22[1]);
    auVar23[10] = -(auVar24[10] == auVar22[2]);
    auVar23[0xb] = -(auVar24[0xb] == auVar22[3]);
    auVar23[0xc] = -(auVar24[0xc] == auVar22[4]);
    auVar23[0xd] = -(auVar24[0xd] == auVar22[5]);
    auVar23[0xe] = -(auVar24[0xe] == auVar22[6]);
    auVar23[0xf] = -(auVar24[0xf] == auVar22[7]);
    uVar11 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
    uVar17 = (uint)uVar11;
    if (uVar11 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar19 = uVar5 + uVar13 & uVar15;
        lVar20 = uVar19 * -0x38;
        if (lVar14 == *(longlong *)(lVar2 + -0x28 + lVar20)) {
          lVar20 = lVar20 + lVar2;
          iVar12 = (*(code *)puVar10)(uVar17,lVar14);
          if (iVar12 == 0) {
            lVar14 = ((longlong)(uVar19 * 0x38) >> 3) * 0x6db6db6db6db6db7;
            uVar15 = lVar14 - 0x10U & uVar15;
            pcVar1 = (char *)(lVar2 + uVar15);
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
            uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                    (ushort)(auVar22[0xf] >> 7) << 0xf;
            pcVar1 = (char *)(lVar2 + lVar14);
            auVar24[0] = -(*pcVar1 == -1);
            auVar24[1] = -(pcVar1[1] == -1);
            auVar24[2] = -(pcVar1[2] == -1);
            auVar24[3] = -(pcVar1[3] == -1);
            auVar24[4] = -(pcVar1[4] == -1);
            auVar24[5] = -(pcVar1[5] == -1);
            auVar24[6] = -(pcVar1[6] == -1);
            auVar24[7] = -(pcVar1[7] == -1);
            auVar24[8] = -(pcVar1[8] == -1);
            auVar24[9] = -(pcVar1[9] == -1);
            auVar24[10] = -(pcVar1[10] == -1);
            auVar24[0xb] = -(pcVar1[0xb] == -1);
            auVar24[0xc] = -(pcVar1[0xc] == -1);
            auVar24[0xd] = -(pcVar1[0xd] == -1);
            auVar24[0xe] = -(pcVar1[0xe] == -1);
            auVar24[0xf] = -(pcVar1[0xf] == -1);
            uVar11 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar11 == 0; uVar11 = uVar11 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar17 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar24[0xf] >> 7) << 0xf) | 0x10000; (uVar17 & 1) == 0;
                uVar17 = uVar17 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar16 = 0x80;
            if ((ushort)(sVar4 + (uVar11 ^ 0xf)) < 0x10) {
              param_2[2] = param_2[2] + 1;
              uVar16 = 0xff;
            }
            *(undefined1 *)(lVar2 + lVar14) = uVar16;
            *(undefined1 *)(lVar2 + 0x10 + uVar15) = uVar16;
            param_2[3] = param_2[3] + -1;
            lVar14 = *(longlong *)(lVar20 + -0x38);
            if (lVar14 != -1) {
              uVar7 = *(undefined8 *)(lVar20 + -0x20);
              uVar8 = *(undefined8 *)(lVar20 + -0x18);
              uVar9 = *(undefined8 *)(lVar20 + -8);
              param_1[2] = *(undefined8 *)(lVar20 + -0x10);
              param_1[3] = uVar9;
              *param_1 = uVar7;
              param_1[1] = uVar8;
              if (lVar14 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
              return param_1;
            }
            goto LAB_004630aa;
          }
        }
        uVar11 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar11);
      } while (uVar11 != 0);
    }
    auVar25[0] = -(auVar24[0] == -1);
    auVar25[1] = -(auVar24[1] == -1);
    auVar25[2] = -(auVar24[2] == -1);
    auVar25[3] = -(auVar24[3] == -1);
    auVar25[4] = -(auVar24[4] == -1);
    auVar25[5] = -(auVar24[5] == -1);
    auVar25[6] = -(auVar24[6] == -1);
    auVar25[7] = -(auVar24[7] == -1);
    auVar25[8] = -(auVar24[8] == -1);
    auVar25[9] = -(auVar24[9] == -1);
    auVar25[10] = -(auVar24[10] == -1);
    auVar25[0xb] = -(auVar24[0xb] == -1);
    auVar25[0xc] = -(auVar24[0xc] == -1);
    auVar25[0xd] = -(auVar24[0xd] == -1);
    auVar25[0xe] = -(auVar24[0xe] == -1);
    auVar25[0xf] = -(auVar24[0xf] == -1);
    if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
    uVar13 = uVar13 + lVar18 + 0x10;
    lVar18 = lVar18 + 0x10;
  }
LAB_004630aa:
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


