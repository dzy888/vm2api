// 00461b60 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AcpActiveTurn,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::get_mut::<alloc[12e961f32105355]::string::String>
    */

longlong __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpActiveTurn,std[6c98fd8553dbae28]::hash::random::RandomState>>
::get_mut::<alloc[12e961f32105355]::string::String>(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
          ::hash_one::<&alloc[12e961f32105355]::string::String>(param_1 + 4);
  puVar6 = PTR_bcmp_00799020;
  lVar10 = *param_1;
  uVar2 = param_1[1];
  bVar15 = (byte)(uVar9 >> 0x39);
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar3 = *(longlong *)(param_2 + 0x10);
  lVar13 = 0;
  while( true ) {
    uVar9 = uVar9 & uVar2;
    auVar1 = *(undefined1 (*) [16])(lVar10 + uVar9);
    auVar17[0] = -(auVar1[0] == auVar16[0]);
    auVar17[1] = -(auVar1[1] == auVar16[1]);
    auVar17[2] = -(auVar1[2] == auVar16[2]);
    auVar17[3] = -(auVar1[3] == auVar16[3]);
    auVar17[4] = -(auVar1[4] == auVar16[4]);
    auVar17[5] = -(auVar1[5] == auVar16[5]);
    auVar17[6] = -(auVar1[6] == auVar16[6]);
    auVar17[7] = -(auVar1[7] == auVar16[7]);
    auVar17[8] = -(auVar1[8] == auVar16[0]);
    auVar17[9] = -(auVar1[9] == auVar16[1]);
    auVar17[10] = -(auVar1[10] == auVar16[2]);
    auVar17[0xb] = -(auVar1[0xb] == auVar16[3]);
    auVar17[0xc] = -(auVar1[0xc] == auVar16[4]);
    auVar17[0xd] = -(auVar1[0xd] == auVar16[5]);
    auVar17[0xe] = -(auVar1[0xe] == auVar16[6]);
    auVar17[0xf] = -(auVar1[0xf] == auVar16[7]);
    uVar7 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
    uVar14 = (uint)uVar7;
    if (uVar7 != 0) {
      do {
        uVar4 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar11 = uVar4 + uVar9 & uVar2;
        lVar12 = uVar11 * -0xa8;
        if (lVar3 == *(longlong *)(lVar10 + -0x98 + lVar12)) {
          lVar12 = lVar12 + lVar10;
          iVar8 = (*(code *)puVar6)(-uVar11,lVar3);
          if (iVar8 == 0) goto LAB_00461c81;
        }
        uVar7 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar7);
      } while (uVar7 != 0);
    }
    auVar18[0] = -(auVar1[0] == -1);
    auVar18[1] = -(auVar1[1] == -1);
    auVar18[2] = -(auVar1[2] == -1);
    auVar18[3] = -(auVar1[3] == -1);
    auVar18[4] = -(auVar1[4] == -1);
    auVar18[5] = -(auVar1[5] == -1);
    auVar18[6] = -(auVar1[6] == -1);
    auVar18[7] = -(auVar1[7] == -1);
    auVar18[8] = -(auVar1[8] == -1);
    auVar18[9] = -(auVar1[9] == -1);
    auVar18[10] = -(auVar1[10] == -1);
    auVar18[0xb] = -(auVar1[0xb] == -1);
    auVar18[0xc] = -(auVar1[0xc] == -1);
    auVar18[0xd] = -(auVar1[0xd] == -1);
    auVar18[0xe] = -(auVar1[0xe] == -1);
    auVar18[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
    uVar9 = uVar9 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  }
  lVar12 = 0;
LAB_00461c81:
  lVar10 = lVar12 + -0x90;
  if (lVar12 == 0) {
    lVar10 = 0;
  }
  return lVar10;
}


