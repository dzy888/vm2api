// 00482720 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String, u64,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert
   <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String, usize,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined1  [16] __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined *puVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 uVar16;
  byte bVar17;
  longlong lVar18;
  byte bVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong lVar22;
  undefined1 auVar23 [16];
  ulonglong local_b0;
  
  uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_1 + 4);
  if (param_1[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,usize)>>::
    reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,usize,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_1,param_1 + 4);
  }
  puVar8 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar3 = param_1[1];
  bVar17 = (byte)(uVar12 >> 0x38);
  bVar19 = bVar17 >> 1;
  auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
  auVar20 = pshuflw(auVar20,auVar20,0);
  lVar18 = param_2[2];
  bVar7 = false;
  lVar14 = 0;
  do {
    uVar12 = uVar12 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar12);
    auVar21[0] = -(auVar1[0] == auVar20[0]);
    auVar21[1] = -(auVar1[1] == auVar20[1]);
    auVar21[2] = -(auVar1[2] == auVar20[2]);
    auVar21[3] = -(auVar1[3] == auVar20[3]);
    auVar21[4] = -(auVar1[4] == auVar20[4]);
    auVar21[5] = -(auVar1[5] == auVar20[5]);
    auVar21[6] = -(auVar1[6] == auVar20[6]);
    auVar21[7] = -(auVar1[7] == auVar20[7]);
    auVar21[8] = -(auVar1[8] == auVar20[0]);
    auVar21[9] = -(auVar1[9] == auVar20[1]);
    auVar21[10] = -(auVar1[10] == auVar20[2]);
    auVar21[0xb] = -(auVar1[0xb] == auVar20[3]);
    auVar21[0xc] = -(auVar1[0xc] == auVar20[4]);
    auVar21[0xd] = -(auVar1[0xd] == auVar20[5]);
    bVar19 = auVar1[0xf];
    auVar21[0xe] = -(auVar1[0xe] == auVar20[6]);
    auVar21[0xf] = -(bVar19 == auVar20[7]);
    uVar9 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar9;
    if (uVar9 != 0) {
      do {
        uVar11 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar13 = uVar11 + uVar12 & uVar3;
        if ((lVar18 == *(longlong *)pauVar2[uVar13 * -2 + -1]) &&
           (iVar10 = (*(code *)puVar8)(), iVar10 == 0)) {
          lVar18 = *(longlong *)(pauVar2[uVar13 * -2 + -1] + 8);
          *(undefined8 *)(pauVar2[uVar13 * -2 + -1] + 8) = param_3;
          if (*param_2 == 0) {
            uVar16 = 1;
          }
          else {
            uVar16 = 1;
            (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
          }
          goto LAB_00482958;
        }
        uVar9 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar9);
      } while (uVar9 != 0);
    }
    if (bVar7) goto LAB_0048286e;
    uVar9 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar19 >> 7) << 0xf;
    if (uVar9 == 0) {
      bVar7 = false;
    }
    else {
      uVar15 = 0;
      for (uVar11 = (uint)uVar9; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      local_b0 = uVar15 + uVar12 & uVar3;
LAB_0048286e:
      auVar23[0] = -(auVar1[0] == -1);
      auVar23[1] = -(auVar1[1] == -1);
      auVar23[2] = -(auVar1[2] == -1);
      auVar23[3] = -(auVar1[3] == -1);
      auVar23[4] = -(auVar1[4] == -1);
      auVar23[5] = -(auVar1[5] == -1);
      auVar23[6] = -(auVar1[6] == -1);
      auVar23[7] = -(auVar1[7] == 0xff);
      auVar23[8] = -(auVar1[8] == -1);
      auVar23[9] = -(auVar1[9] == -1);
      auVar23[10] = -(auVar1[10] == -1);
      auVar23[0xb] = -(auVar1[0xb] == -1);
      auVar23[0xc] = -(auVar1[0xc] == -1);
      auVar23[0xd] = -(auVar1[0xd] == -1);
      auVar23[0xe] = -(auVar1[0xe] == -1);
      auVar23[0xf] = -(bVar19 == 0xff);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') {
        bVar19 = (*pauVar2)[local_b0];
        if (-1 < (char)bVar19) {
          auVar20 = *pauVar2;
          uVar15 = 0;
          for (uVar11 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar20[0xf] >> 7) << 0xf); (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          local_b0 = (ulonglong)uVar15;
          bVar19 = (*pauVar2)[local_b0];
        }
        lVar14 = param_2[2];
        lVar5 = *param_2;
        lVar6 = param_2[1];
        bVar17 = bVar17 >> 1;
        (*pauVar2)[local_b0] = bVar17;
        pauVar2[1][local_b0 - 0x10 & uVar3] = bVar17;
        lVar22 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar19 & 1);
        param_1[3] = lVar22;
        *(longlong *)pauVar2[local_b0 * -2 + -1] = lVar14;
        *(longlong *)pauVar2[local_b0 * -2 + -2] = lVar5;
        *(longlong *)(pauVar2[local_b0 * -2 + -2] + 8) = lVar6;
        *(undefined8 *)(pauVar2[local_b0 * -2 + -1] + 8) = param_3;
        uVar16 = 0;
LAB_00482958:
        auVar20._8_8_ = lVar18;
        auVar20._0_8_ = uVar16;
        return auVar20;
      }
      bVar7 = true;
    }
    uVar12 = uVar12 + lVar14 + 0x10;
    lVar14 = lVar14 + 0x10;
  } while( true );
}


