// 00462270 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
::remove::<alloc[12e961f32105355]::string::String>
          (undefined8 *param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
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
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar18 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4);
  puVar15 = PTR_bcmp_00799020;
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *param_2;
  uVar19 = param_2[1];
  bVar25 = (byte)(uVar18 >> 0x39);
  auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
  auVar26 = pshuflw(auVar26,auVar26,0);
  lVar22 = 0;
  do {
    uVar18 = uVar18 & uVar19;
    auVar28 = *(undefined1 (*) [16])(lVar3 + uVar18);
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
    uVar21 = (uint)uVar16;
    if (uVar16 != 0) {
      do {
        uVar6 = 0;
        for (uVar7 = uVar21; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar23 = uVar6 + uVar18 & uVar19;
        lVar24 = lVar3 + uVar23 * -0x80;
        if ((lVar2 == *(longlong *)(lVar24 + -0x70)) &&
           (iVar17 = (*(code *)puVar15)(uVar21,lVar2), iVar17 == 0)) {
          uVar19 = uVar23 - 0x10 & uVar19;
          pcVar1 = (char *)(lVar3 + uVar19);
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
          uVar4 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
          pcVar1 = (char *)(lVar3 + uVar23);
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
          if (uVar4 != 0) {
            for (; uVar4 >> uVar16 == 0; uVar16 = uVar16 - 1) {
            }
          }
          sVar5 = 0;
          for (uVar21 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                                (ushort)(auVar28[0xf] >> 7) << 0xf) | 0x10000; (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x80000000) {
            sVar5 = sVar5 + 1;
          }
          uVar20 = 0x80;
          if ((ushort)(sVar5 + (uVar16 ^ 0xf)) < 0x10) {
            param_2[2] = param_2[2] + 1;
            uVar20 = 0xff;
          }
          *(undefined1 *)(lVar3 + uVar23) = uVar20;
          *(undefined1 *)(lVar3 + 0x10 + uVar19) = uVar20;
          param_2[3] = param_2[3] + -1;
          lVar2 = *(longlong *)(lVar24 + -0x80);
          if (lVar2 != -1) {
            param_1[0xc] = *(undefined8 *)(lVar24 + -8);
            uVar8 = *(undefined8 *)(lVar24 + -0x10);
            param_1[10] = *(undefined8 *)(lVar24 + -0x18);
            param_1[0xb] = uVar8;
            uVar8 = *(undefined8 *)(lVar24 + -0x20);
            param_1[8] = *(undefined8 *)(lVar24 + -0x28);
            param_1[9] = uVar8;
            uVar8 = *(undefined8 *)(lVar24 + -0x68);
            uVar9 = *(undefined8 *)(lVar24 + -0x60);
            uVar10 = *(undefined8 *)(lVar24 + -0x58);
            uVar11 = *(undefined8 *)(lVar24 + -0x50);
            uVar12 = *(undefined8 *)(lVar24 + -0x48);
            uVar13 = *(undefined8 *)(lVar24 + -0x40);
            uVar14 = *(undefined8 *)(lVar24 + -0x30);
            param_1[6] = *(undefined8 *)(lVar24 + -0x38);
            param_1[7] = uVar14;
            param_1[4] = uVar12;
            param_1[5] = uVar13;
            param_1[2] = uVar10;
            param_1[3] = uVar11;
            *param_1 = uVar8;
            param_1[1] = uVar9;
            if (lVar2 == 0) {
              return param_1;
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
            return param_1;
          }
          goto LAB_00462456;
        }
        uVar16 = (ushort)(uVar21 - 1) & (ushort)uVar21;
        uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar16);
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
        (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_00462456:
      *param_1 = 0xfffffffffffffffe;
      return param_1;
    }
    uVar18 = uVar18 + lVar22 + 0x10;
    lVar22 = lVar22 + 0x10;
  } while( true );
}


