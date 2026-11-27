// 00483a30 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<usize,
   craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong extraout_RDX;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar19 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&u64>();
  uVar9 = auVar19._8_8_;
  uVar10 = auVar19._0_8_;
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
    uVar9 = extraout_RDX;
  }
  puVar6 = PTR_memcpy_00799008;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar14 = auVar19[7] >> 1;
  auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar16 = pshuflw(auVar16,auVar16,0);
  bVar5 = false;
  lVar11 = 0;
  do {
    uVar10 = uVar10 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar10);
    auVar18[0] = -(auVar1[0] == auVar16[0]);
    auVar18[1] = -(auVar1[1] == auVar16[1]);
    auVar18[2] = -(auVar1[2] == auVar16[2]);
    auVar18[3] = -(auVar1[3] == auVar16[3]);
    auVar18[4] = -(auVar1[4] == auVar16[4]);
    auVar18[5] = -(auVar1[5] == auVar16[5]);
    auVar18[6] = -(auVar1[6] == auVar16[6]);
    auVar18[7] = -(auVar1[7] == auVar16[7]);
    auVar18[8] = -(auVar1[8] == auVar16[0]);
    auVar18[9] = -(auVar1[9] == auVar16[1]);
    auVar18[10] = -(auVar1[10] == auVar16[2]);
    auVar18[0xb] = -(auVar1[0xb] == auVar16[3]);
    auVar18[0xc] = -(auVar1[0xc] == auVar16[4]);
    auVar18[0xd] = -(auVar1[0xd] == auVar16[5]);
    bVar14 = auVar1[0xf];
    auVar18[0xe] = -(auVar1[0xe] == auVar16[6]);
    auVar18[0xf] = -(bVar14 == auVar16[7]);
    uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
    uVar12 = (uint)uVar13;
    while (uVar13 != 0) {
      uVar8 = 0;
      for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      if (param_3 == *(longlong *)pauVar2[(uVar8 + uVar10 & uVar3) * -0xe + -0xe]) {
        uVar15 = (*(code *)PTR_memcpy_00799008)(uVar3,0xd8);
        (*(code *)puVar6)(uVar15,0xd8);
        return param_1;
      }
      uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
    }
    if (bVar5) {
LAB_00483af8:
      auVar17[0] = -(auVar1[0] == -1);
      auVar17[1] = -(auVar1[1] == -1);
      auVar17[2] = -(auVar1[2] == -1);
      auVar17[3] = -(auVar1[3] == -1);
      auVar17[4] = -(auVar1[4] == -1);
      auVar17[5] = -(auVar1[5] == -1);
      auVar17[6] = -(auVar1[6] == -1);
      auVar17[7] = -(auVar1[7] == 0xff);
      auVar17[8] = -(auVar1[8] == -1);
      auVar17[9] = -(auVar1[9] == -1);
      auVar17[10] = -(auVar1[10] == -1);
      auVar17[0xb] = -(auVar1[0xb] == -1);
      auVar17[0xc] = -(auVar1[0xc] == -1);
      auVar17[0xd] = -(auVar1[0xd] == -1);
      auVar17[0xe] = -(auVar1[0xe] == -1);
      auVar17[0xf] = -(bVar14 == 0xff);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') {
        bVar14 = (*pauVar2)[uVar9];
        if (-1 < (char)bVar14) {
          auVar16 = *pauVar2;
          uVar12 = 0;
          for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar16[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          uVar9 = (ulonglong)uVar12;
          bVar14 = (*pauVar2)[uVar9];
        }
        bVar7 = auVar19[7] >> 1;
        (*pauVar2)[uVar9] = bVar7;
        pauVar2[1][uVar9 - 0x10 & uVar3] = bVar7;
        lVar11 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar14 & 1);
        param_2[3] = lVar11;
        *(longlong *)pauVar2[uVar9 * -0xe + -0xe] = param_3;
        (*(code *)PTR_memcpy_00799008)(uVar3,0xd8);
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      bVar5 = true;
    }
    else {
      uVar13 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar14 >> 7) << 0xf;
      if (uVar13 != 0) {
        uVar12 = 0;
        for (uVar8 = (uint)uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar9 = uVar12 + uVar10 & uVar3;
        goto LAB_00483af8;
      }
      bVar5 = false;
      uVar9 = 0;
    }
    uVar10 = uVar10 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while( true );
}


