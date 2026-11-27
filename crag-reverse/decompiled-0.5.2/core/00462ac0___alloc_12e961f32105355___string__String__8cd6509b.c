// 00462ac0 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::ResponseBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ushort uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar17 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4);
  puVar14 = PTR_bcmp_00799020;
  lVar18 = *(longlong *)(param_3 + 0x10);
  lVar2 = *param_2;
  uVar19 = param_2[1];
  bVar25 = (byte)(uVar17 >> 0x39);
  auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
  auVar26 = pshuflw(auVar26,auVar26,0);
  lVar23 = 0;
  while( true ) {
    uVar17 = uVar17 & uVar19;
    auVar28 = *(undefined1 (*) [16])(lVar2 + uVar17);
    auVar27[0] = -(auVar28[0] == auVar26[0]);
    auVar27[1] = -(auVar28[1] == auVar26[1]);
    auVar27[2] = -(auVar28[2] == auVar26[2]);
    auVar27[3] = -(auVar28[3] == auVar26[3]);
    auVar27[4] = -(auVar28[4] == auVar26[4]);
    auVar27[5] = -(auVar28[5] == auVar26[5]);
    auVar27[6] = -(auVar28[6] == auVar26[6]);
    auVar27[7] = -(auVar28[7] == auVar26[7]);
    auVar27[8] = -(auVar28[8] == auVar26[0]);
    auVar27[9] = -(auVar28[9] == auVar26[1]);
    auVar27[10] = -(auVar28[10] == auVar26[2]);
    auVar27[0xb] = -(auVar28[0xb] == auVar26[3]);
    auVar27[0xc] = -(auVar28[0xc] == auVar26[4]);
    auVar27[0xd] = -(auVar28[0xd] == auVar26[5]);
    auVar27[0xe] = -(auVar28[0xe] == auVar26[6]);
    auVar27[0xf] = -(auVar28[0xf] == auVar26[7]);
    uVar15 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
    uVar22 = (uint)uVar15;
    if (uVar15 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar22; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar21 = uVar5 + uVar17 & uVar19;
        lVar24 = uVar21 * -0x58;
        if (lVar18 == *(longlong *)(lVar2 + -0x48 + lVar24)) {
          lVar24 = lVar24 + lVar2;
          iVar16 = (*(code *)puVar14)(uVar22,lVar18);
          if (iVar16 == 0) {
            lVar18 = ((longlong)(uVar21 * 0x58) >> 3) * 0x2e8ba2e8ba2e8ba3;
            uVar19 = lVar18 - 0x10U & uVar19;
            pcVar1 = (char *)(lVar2 + uVar19);
            auVar26[0] = -(*pcVar1 == -1);
            auVar26[1] = -(pcVar1[1] == -1);
            auVar26[2] = -(pcVar1[2] == -1);
            auVar26[3] = -(pcVar1[3] == -1);
            auVar26[4] = -(pcVar1[4] == -1);
            auVar26[5] = -(pcVar1[5] == -1);
            auVar26[6] = -(pcVar1[6] == -1);
            auVar26[7] = -(pcVar1[7] == -1);
            auVar26[8] = -(pcVar1[8] == -1);
            auVar26[9] = -(pcVar1[9] == -1);
            auVar26[10] = -(pcVar1[10] == -1);
            auVar26[0xb] = -(pcVar1[0xb] == -1);
            auVar26[0xc] = -(pcVar1[0xc] == -1);
            auVar26[0xd] = -(pcVar1[0xd] == -1);
            auVar26[0xe] = -(pcVar1[0xe] == -1);
            auVar26[0xf] = -(pcVar1[0xf] == -1);
            uVar3 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar26[0xf] >> 7) << 0xf;
            pcVar1 = (char *)(lVar2 + lVar18);
            auVar28[0] = -(*pcVar1 == -1);
            auVar28[1] = -(pcVar1[1] == -1);
            auVar28[2] = -(pcVar1[2] == -1);
            auVar28[3] = -(pcVar1[3] == -1);
            auVar28[4] = -(pcVar1[4] == -1);
            auVar28[5] = -(pcVar1[5] == -1);
            auVar28[6] = -(pcVar1[6] == -1);
            auVar28[7] = -(pcVar1[7] == -1);
            auVar28[8] = -(pcVar1[8] == -1);
            auVar28[9] = -(pcVar1[9] == -1);
            auVar28[10] = -(pcVar1[10] == -1);
            auVar28[0xb] = -(pcVar1[0xb] == -1);
            auVar28[0xc] = -(pcVar1[0xc] == -1);
            auVar28[0xd] = -(pcVar1[0xd] == -1);
            auVar28[0xe] = -(pcVar1[0xe] == -1);
            auVar28[0xf] = -(pcVar1[0xf] == -1);
            uVar15 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar15 == 0; uVar15 = uVar15 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar22 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar28[0xf] >> 7) << 0xf) | 0x10000; (uVar22 & 1) == 0;
                uVar22 = uVar22 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar20 = 0x80;
            if ((ushort)(sVar4 + (uVar15 ^ 0xf)) < 0x10) {
              param_2[2] = param_2[2] + 1;
              uVar20 = 0xff;
            }
            *(undefined1 *)(lVar2 + lVar18) = uVar20;
            *(undefined1 *)(lVar2 + 0x10 + uVar19) = uVar20;
            param_2[3] = param_2[3] + -1;
            lVar18 = *(longlong *)(lVar24 + -0x58);
            if (lVar18 != -1) {
              uVar7 = *(undefined8 *)(lVar24 + -0x40);
              uVar8 = *(undefined8 *)(lVar24 + -0x38);
              uVar9 = *(undefined8 *)(lVar24 + -0x30);
              uVar10 = *(undefined8 *)(lVar24 + -0x28);
              uVar11 = *(undefined8 *)(lVar24 + -0x20);
              uVar12 = *(undefined8 *)(lVar24 + -0x18);
              uVar13 = *(undefined8 *)(lVar24 + -8);
              param_1[6] = *(undefined8 *)(lVar24 + -0x10);
              param_1[7] = uVar13;
              param_1[4] = uVar11;
              param_1[5] = uVar12;
              param_1[2] = uVar9;
              param_1[3] = uVar10;
              *param_1 = uVar7;
              param_1[1] = uVar8;
              if (lVar18 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
              return param_1;
            }
            goto LAB_00462cae;
          }
        }
        uVar15 = (ushort)(uVar22 - 1) & (ushort)uVar22;
        uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar15);
      } while (uVar15 != 0);
    }
    auVar29[0] = -(auVar28[0] == -1);
    auVar29[1] = -(auVar28[1] == -1);
    auVar29[2] = -(auVar28[2] == -1);
    auVar29[3] = -(auVar28[3] == -1);
    auVar29[4] = -(auVar28[4] == -1);
    auVar29[5] = -(auVar28[5] == -1);
    auVar29[6] = -(auVar28[6] == -1);
    auVar29[7] = -(auVar28[7] == -1);
    auVar29[8] = -(auVar28[8] == -1);
    auVar29[9] = -(auVar28[9] == -1);
    auVar29[10] = -(auVar28[10] == -1);
    auVar29[0xb] = -(auVar28[0xb] == -1);
    auVar29[0xc] = -(auVar28[0xc] == -1);
    auVar29[0xd] = -(auVar28[0xd] == -1);
    auVar29[0xe] = -(auVar28[0xe] == -1);
    auVar29[0xf] = -(auVar28[0xf] == -1);
    if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
    uVar17 = uVar17 + lVar23 + 0x10;
    lVar23 = lVar23 + 0x10;
  }
LAB_00462cae:
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


