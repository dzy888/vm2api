// 00461720 <str>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<str> */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt,std[6c98fd8553dbae28]::hash::random::RandomState>>
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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ushort uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar18 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&str>(param_2 + 4,param_3,param_4);
  puVar15 = PTR_bcmp_00799020;
  lVar2 = *param_2;
  uVar19 = param_2[1];
  bVar25 = (byte)(uVar18 >> 0x39);
  auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
  auVar26 = pshuflw(auVar26,auVar26,0);
  lVar21 = 0;
  while( true ) {
    uVar18 = uVar18 & uVar19;
    auVar28 = *(undefined1 (*) [16])(lVar2 + uVar18);
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
    uVar16 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
    uVar22 = (uint)uVar16;
    if (uVar16 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar22; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar24 = uVar5 + uVar18 & uVar19;
        lVar23 = uVar24 * -0x60;
        if (param_4 == *(longlong *)(lVar2 + -0x50 + lVar23)) {
          lVar23 = lVar23 + lVar2;
          iVar17 = (*(code *)puVar15)();
          if (iVar17 == 0) {
            lVar21 = ((longlong)(uVar24 * 0x60) >> 5) * -0x5555555555555555;
            uVar19 = lVar21 - 0x10U & uVar19;
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
            pcVar1 = (char *)(lVar2 + lVar21);
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
            uVar16 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar16 == 0; uVar16 = uVar16 - 1) {
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
            if ((ushort)(sVar4 + (uVar16 ^ 0xf)) < 0x10) {
              param_2[2] = param_2[2] + 1;
              uVar20 = 0xff;
            }
            *(undefined1 *)(lVar2 + lVar21) = uVar20;
            *(undefined1 *)(lVar2 + 0x10 + uVar19) = uVar20;
            param_2[3] = param_2[3] + -1;
            lVar2 = *(longlong *)(lVar23 + -0x60);
            if (lVar2 != -1) {
              param_1[8] = *(undefined8 *)(lVar23 + -8);
              uVar7 = *(undefined8 *)(lVar23 + -0x48);
              uVar8 = *(undefined8 *)(lVar23 + -0x40);
              uVar9 = *(undefined8 *)(lVar23 + -0x38);
              uVar10 = *(undefined8 *)(lVar23 + -0x30);
              uVar11 = *(undefined8 *)(lVar23 + -0x28);
              uVar12 = *(undefined8 *)(lVar23 + -0x20);
              uVar13 = *(undefined8 *)(lVar23 + -0x18);
              uVar14 = *(undefined8 *)(lVar23 + -0x10);
              param_1[6] = uVar13;
              param_1[7] = uVar14;
              param_1[4] = uVar11;
              param_1[5] = uVar12;
              param_1[2] = uVar9;
              param_1[3] = uVar10;
              *param_1 = uVar7;
              param_1[1] = uVar8;
              if (lVar2 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1,uVar11,uVar13,param_3);
              return param_1;
            }
            goto LAB_00461928;
          }
        }
        uVar16 = (ushort)(uVar22 - 1) & (ushort)uVar22;
        uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar16);
      } while (uVar16 != 0);
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
    uVar18 = uVar18 + lVar21 + 0x10;
    lVar21 = lVar21 + 0x10;
  }
LAB_00461928:
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


