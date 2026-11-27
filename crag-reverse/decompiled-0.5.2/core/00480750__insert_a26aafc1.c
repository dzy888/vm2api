// 00480750 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

longlong __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  bool bVar14;
  uint uVar15;
  byte bVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 auVar21 [16];
  ulonglong local_350;
  
  uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>();
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
  }
  puVar6 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  uVar11 = uVar10 >> 0x39;
  bVar12 = (byte)(uVar10 >> 0x38);
  bVar16 = bVar12 >> 1;
  auVar18 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar18 = pshuflw(auVar18,auVar18,0);
  lVar20 = param_3[2];
  bVar14 = false;
  lVar13 = 0;
  do {
    uVar10 = uVar10 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar10);
    auVar19[0] = -(auVar1[0] == auVar18[0]);
    auVar19[1] = -(auVar1[1] == auVar18[1]);
    auVar19[2] = -(auVar1[2] == auVar18[2]);
    auVar19[3] = -(auVar1[3] == auVar18[3]);
    auVar19[4] = -(auVar1[4] == auVar18[4]);
    auVar19[5] = -(auVar1[5] == auVar18[5]);
    auVar19[6] = -(auVar1[6] == auVar18[6]);
    auVar19[7] = -(auVar1[7] == auVar18[7]);
    auVar19[8] = -(auVar1[8] == auVar18[0]);
    auVar19[9] = -(auVar1[9] == auVar18[1]);
    auVar19[10] = -(auVar1[10] == auVar18[2]);
    auVar19[0xb] = -(auVar1[0xb] == auVar18[3]);
    auVar19[0xc] = -(auVar1[0xc] == auVar18[4]);
    auVar19[0xd] = -(auVar1[0xd] == auVar18[5]);
    bVar16 = auVar1[0xf];
    auVar19[0xe] = -(auVar1[0xe] == auVar18[6]);
    auVar19[0xf] = -(bVar16 == auVar18[7]);
    uVar7 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar7;
    if (uVar7 != 0) {
      do {
        uVar9 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        if (lVar20 == *(longlong *)pauVar2[(uVar9 + uVar10 & uVar3) * -0x2c + -0x2b]) {
          iVar8 = (*(code *)puVar6)();
          puVar5 = PTR_memcpy_00799008;
          if (iVar8 == 0) {
            uVar17 = (*(code *)PTR_memcpy_00799008)(pauVar2,0x2a8);
            uVar17 = (*(code *)puVar5)(uVar17,0x2a8);
            if (*param_3 == 0) {
              return param_1;
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
            return param_1;
          }
        }
        uVar7 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar7);
      } while (uVar7 != 0);
    }
    puVar5 = PTR_memcpy_00799008;
    if (bVar14) {
LAB_004808be:
      auVar21[0] = -(auVar1[0] == -1);
      auVar21[1] = -(auVar1[1] == -1);
      auVar21[2] = -(auVar1[2] == -1);
      auVar21[3] = -(auVar1[3] == -1);
      auVar21[4] = -(auVar1[4] == -1);
      auVar21[5] = -(auVar1[5] == -1);
      auVar21[6] = -(auVar1[6] == -1);
      auVar21[7] = -(auVar1[7] == 0xff);
      auVar21[8] = -(auVar1[8] == -1);
      auVar21[9] = -(auVar1[9] == -1);
      auVar21[10] = -(auVar1[10] == -1);
      auVar21[0xb] = -(auVar1[0xb] == -1);
      auVar21[0xc] = -(auVar1[0xc] == -1);
      auVar21[0xd] = -(auVar1[0xd] == -1);
      auVar21[0xe] = -(auVar1[0xe] == -1);
      auVar21[0xf] = -(bVar16 == 0xff);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') {
        bVar16 = (*pauVar2)[local_350];
        if (-1 < (char)bVar16) {
          auVar18 = *pauVar2;
          uVar15 = 0;
          for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
                                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar18[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
              uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          local_350 = (ulonglong)uVar15;
          bVar16 = (*pauVar2)[local_350];
        }
        (*(code *)PTR_memcpy_00799008)(param_3,0x2a8);
        bVar12 = bVar12 >> 1;
        (*pauVar2)[local_350] = bVar12;
        pauVar2[1][local_350 - 0x10 & uVar3] = bVar12;
        lVar20 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar16 & 1);
        param_2[3] = lVar20;
        (*(code *)puVar5)(uVar11,0x2c0);
        *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
        return param_1;
      }
      bVar14 = true;
    }
    else {
      uVar7 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar16 >> 7) << 0xf;
      if (uVar7 != 0) {
        uVar15 = 0;
        for (uVar9 = (uint)uVar7; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        local_350 = uVar15 + uVar10 & uVar3;
        goto LAB_004808be;
      }
      bVar14 = false;
    }
    uVar10 = uVar10 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  } while( true );
}


