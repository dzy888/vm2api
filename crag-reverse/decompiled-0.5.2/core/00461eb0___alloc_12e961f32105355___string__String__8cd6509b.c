// 00461eb0 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,std[6c98fd8553dbae28]::hash::random::RandomState>>
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
  undefined *puVar11;
  ushort uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar14 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4);
  puVar11 = PTR_bcmp_00799020;
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *param_2;
  uVar15 = param_2[1];
  bVar21 = (byte)(uVar14 >> 0x39);
  auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
  auVar22 = pshuflw(auVar22,auVar22,0);
  lVar19 = 0;
  do {
    uVar14 = uVar14 & uVar15;
    auVar24 = *(undefined1 (*) [16])(lVar3 + uVar14);
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
    uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
    uVar17 = (uint)uVar12;
    if (uVar12 != 0) {
      do {
        uVar6 = 0;
        for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar18 = uVar6 + uVar14 & uVar15;
        lVar20 = lVar3 + uVar18 * -0x40;
        if ((lVar2 == *(longlong *)(lVar20 + -0x30)) &&
           (iVar13 = (*(code *)puVar11)(uVar17,lVar2), iVar13 == 0)) {
          uVar15 = uVar18 - 0x10 & uVar15;
          pcVar1 = (char *)(lVar3 + uVar15);
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
          uVar4 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
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
          pcVar1 = (char *)(lVar3 + uVar18);
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
          uVar12 = 0xf;
          if (uVar4 != 0) {
            for (; uVar4 >> uVar12 == 0; uVar12 = uVar12 - 1) {
            }
          }
          sVar5 = 0;
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
            sVar5 = sVar5 + 1;
          }
          uVar16 = 0x80;
          if ((ushort)(sVar5 + (uVar12 ^ 0xf)) < 0x10) {
            param_2[2] = param_2[2] + 1;
            uVar16 = 0xff;
          }
          *(undefined1 *)(lVar3 + uVar18) = uVar16;
          *(undefined1 *)(lVar3 + 0x10 + uVar15) = uVar16;
          param_2[3] = param_2[3] + -1;
          lVar2 = *(longlong *)(lVar20 + -0x40);
          if (lVar2 != -1) {
            param_1[4] = *(undefined8 *)(lVar20 + -8);
            uVar8 = *(undefined8 *)(lVar20 + -0x28);
            uVar9 = *(undefined8 *)(lVar20 + -0x20);
            uVar10 = *(undefined8 *)(lVar20 + -0x10);
            param_1[2] = *(undefined8 *)(lVar20 + -0x18);
            param_1[3] = uVar10;
            *param_1 = uVar8;
            param_1[1] = uVar9;
            if (lVar2 == 0) {
              return param_1;
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
            return param_1;
          }
          goto LAB_0046206b;
        }
        uVar12 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar12);
      } while (uVar12 != 0);
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
        (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
LAB_0046206b:
      *param_1 = 0xffffffffffffffff;
      return param_1;
    }
    uVar14 = uVar14 + lVar19 + 0x10;
    lVar19 = lVar19 + 0x10;
  } while( true );
}


