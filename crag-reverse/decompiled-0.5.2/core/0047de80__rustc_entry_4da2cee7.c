// 0047de80 rustc_entry

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::rustc_entry */

longlong * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
::rustc_entry(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  puVar8 = PTR_bcmp_00799020;
  lVar2 = *param_2;
  uVar3 = param_2[1];
  bVar16 = (byte)(uVar12 >> 0x39);
  auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar17 = pshuflw(auVar17,auVar17,0);
  lVar4 = param_3[1];
  lVar5 = param_3[2];
  lVar13 = 0;
  uVar14 = uVar12;
  do {
    uVar14 = uVar14 & uVar3;
    auVar1 = *(undefined1 (*) [16])(lVar2 + uVar14);
    auVar18[0] = -(auVar1[0] == auVar17[0]);
    auVar18[1] = -(auVar1[1] == auVar17[1]);
    auVar18[2] = -(auVar1[2] == auVar17[2]);
    auVar18[3] = -(auVar1[3] == auVar17[3]);
    auVar18[4] = -(auVar1[4] == auVar17[4]);
    auVar18[5] = -(auVar1[5] == auVar17[5]);
    auVar18[6] = -(auVar1[6] == auVar17[6]);
    auVar18[7] = -(auVar1[7] == auVar17[7]);
    auVar18[8] = -(auVar1[8] == auVar17[0]);
    auVar18[9] = -(auVar1[9] == auVar17[1]);
    auVar18[10] = -(auVar1[10] == auVar17[2]);
    auVar18[0xb] = -(auVar1[0xb] == auVar17[3]);
    auVar18[0xc] = -(auVar1[0xc] == auVar17[4]);
    auVar18[0xd] = -(auVar1[0xd] == auVar17[5]);
    auVar18[0xe] = -(auVar1[0xe] == auVar17[6]);
    auVar18[0xf] = -(auVar1[0xf] == auVar17[7]);
    uVar9 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
    uVar10 = (uint)uVar9;
    if (uVar9 != 0) {
      do {
        uVar6 = 0;
        for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar15 = lVar2 + (uVar6 + uVar14 & uVar3) * -0x80;
        if ((*(longlong *)(lVar15 + -0x70) == lVar5) &&
           (iVar11 = (*(code *)puVar8)(lVar4,lVar5), iVar11 == 0)) {
          param_1[1] = lVar15;
          param_1[2] = (longlong)param_2;
          *param_1 = -1;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(lVar4,1);
          return param_1;
        }
        uVar9 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar9);
      } while (uVar9 != 0);
    }
    auVar19[0] = -(auVar1[0] == -1);
    auVar19[1] = -(auVar1[1] == -1);
    auVar19[2] = -(auVar1[2] == -1);
    auVar19[3] = -(auVar1[3] == -1);
    auVar19[4] = -(auVar1[4] == -1);
    auVar19[5] = -(auVar1[5] == -1);
    auVar19[6] = -(auVar1[6] == -1);
    auVar19[7] = -(auVar1[7] == -1);
    auVar19[8] = -(auVar1[8] == -1);
    auVar19[9] = -(auVar1[9] == -1);
    auVar19[10] = -(auVar1[10] == -1);
    auVar19[0xb] = -(auVar1[0xb] == -1);
    auVar19[0xc] = -(auVar1[0xc] == -1);
    auVar19[0xd] = -(auVar1[0xd] == -1);
    auVar19[0xe] = -(auVar1[0xe] == -1);
    auVar19[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
      if (param_2[2] == 0) {
        <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>>
        ::reserve_rehash::
        <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
                  (param_2,param_2 + 4);
      }
      param_1[2] = param_3[2];
      lVar2 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = lVar2;
      param_1[3] = (longlong)param_2;
      param_1[4] = uVar12;
      return param_1;
    }
    uVar14 = uVar14 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  } while( true );
}


