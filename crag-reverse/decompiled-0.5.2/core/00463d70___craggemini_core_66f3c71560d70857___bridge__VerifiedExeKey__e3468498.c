// 00463d70 <craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,
   (), 
   std[6c98fd8553dbae28]::hash::random::RandomState>>::contains_key::<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>
    */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
::contains_key::<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>
          (longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar16 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>(param_1 + 4);
  lVar2 = *param_1;
  uVar3 = param_1[1];
  bVar20 = (byte)(uVar16 >> 0x39);
  auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar21 = pshuflw(auVar21,auVar21,0);
  lVar4 = *(longlong *)(param_2 + 0x18);
  lVar5 = *(longlong *)(param_2 + 0x20);
  lVar6 = *(longlong *)(param_2 + 0x28);
  lVar7 = *(longlong *)(param_2 + 0x30);
  lVar8 = *(longlong *)(param_2 + 0x38);
  lVar9 = *(longlong *)(param_2 + 0x40);
  lVar10 = *(longlong *)(param_2 + 0x48);
  lVar11 = *(longlong *)(param_2 + 0x10);
  lVar19 = 0;
  do {
    uVar16 = uVar16 & uVar3;
    auVar1 = *(undefined1 (*) [16])(lVar2 + uVar16);
    auVar22[0] = -(auVar1[0] == auVar21[0]);
    auVar22[1] = -(auVar1[1] == auVar21[1]);
    auVar22[2] = -(auVar1[2] == auVar21[2]);
    auVar22[3] = -(auVar1[3] == auVar21[3]);
    auVar22[4] = -(auVar1[4] == auVar21[4]);
    auVar22[5] = -(auVar1[5] == auVar21[5]);
    auVar22[6] = -(auVar1[6] == auVar21[6]);
    auVar22[7] = -(auVar1[7] == auVar21[7]);
    auVar22[8] = -(auVar1[8] == auVar21[0]);
    auVar22[9] = -(auVar1[9] == auVar21[1]);
    auVar22[10] = -(auVar1[10] == auVar21[2]);
    auVar22[0xb] = -(auVar1[0xb] == auVar21[3]);
    auVar22[0xc] = -(auVar1[0xc] == auVar21[4]);
    auVar22[0xd] = -(auVar1[0xd] == auVar21[5]);
    auVar22[0xe] = -(auVar1[0xe] == auVar21[6]);
    auVar22[0xf] = -(auVar1[0xf] == auVar21[7]);
    uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
    uVar18 = (uint)uVar14;
    if (uVar14 != 0) {
      do {
        uVar12 = 0;
        for (uVar13 = uVar18; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        lVar17 = (uVar12 + uVar16 & uVar3) * -0x50;
        if ((((((lVar4 == *(longlong *)(lVar2 + -0x38 + lVar17)) &&
               (lVar17 = lVar17 + lVar2, lVar5 == *(longlong *)(lVar17 + -0x30))) &&
              (lVar6 == *(longlong *)(lVar17 + -0x28))) &&
             ((lVar7 == *(longlong *)(lVar17 + -0x20) && (lVar8 == *(longlong *)(lVar17 + -0x18)))))
            && ((lVar9 == *(longlong *)(lVar17 + -0x10) &&
                ((lVar10 == *(longlong *)(lVar17 + -8) && (lVar11 == *(longlong *)(lVar17 + -0x40)))
                )))) && (iVar15 = (*(code *)PTR_bcmp_00799020)(), iVar15 == 0)) {
          return 1;
        }
        uVar14 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar14);
      } while (uVar14 != 0);
    }
    auVar23[0] = -(auVar1[0] == -1);
    auVar23[1] = -(auVar1[1] == -1);
    auVar23[2] = -(auVar1[2] == -1);
    auVar23[3] = -(auVar1[3] == -1);
    auVar23[4] = -(auVar1[4] == -1);
    auVar23[5] = -(auVar1[5] == -1);
    auVar23[6] = -(auVar1[6] == -1);
    auVar23[7] = -(auVar1[7] == -1);
    auVar23[8] = -(auVar1[8] == -1);
    auVar23[9] = -(auVar1[9] == -1);
    auVar23[10] = -(auVar1[10] == -1);
    auVar23[0xb] = -(auVar1[0xb] == -1);
    auVar23[0xc] = -(auVar1[0xc] == -1);
    auVar23[0xd] = -(auVar1[0xd] == -1);
    auVar23[0xe] = -(auVar1[0xe] == -1);
    auVar23[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') {
      return 0;
    }
    uVar16 = uVar16 + lVar19 + 0x10;
    lVar19 = lVar19 + 0x10;
  } while( true );
}


