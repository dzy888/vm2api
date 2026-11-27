// 00480050 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined *puVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  byte bVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong lVar25;
  undefined1 auVar26 [16];
  ulonglong local_d0;
  
  uVar17 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar13 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar20 = (byte)(uVar17 >> 0x38);
  bVar22 = bVar20 >> 1;
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  lVar4 = param_3[2];
  bVar12 = false;
  lVar21 = 0;
  do {
    uVar17 = uVar17 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar17);
    auVar24[0] = -(auVar1[0] == auVar23[0]);
    auVar24[1] = -(auVar1[1] == auVar23[1]);
    auVar24[2] = -(auVar1[2] == auVar23[2]);
    auVar24[3] = -(auVar1[3] == auVar23[3]);
    auVar24[4] = -(auVar1[4] == auVar23[4]);
    auVar24[5] = -(auVar1[5] == auVar23[5]);
    auVar24[6] = -(auVar1[6] == auVar23[6]);
    auVar24[7] = -(auVar1[7] == auVar23[7]);
    auVar24[8] = -(auVar1[8] == auVar23[0]);
    auVar24[9] = -(auVar1[9] == auVar23[1]);
    auVar24[10] = -(auVar1[10] == auVar23[2]);
    auVar24[0xb] = -(auVar1[0xb] == auVar23[3]);
    auVar24[0xc] = -(auVar1[0xc] == auVar23[4]);
    auVar24[0xd] = -(auVar1[0xd] == auVar23[5]);
    bVar22 = auVar1[0xf];
    auVar24[0xe] = -(auVar1[0xe] == auVar23[6]);
    auVar24[0xf] = -(bVar22 == auVar23[7]);
    uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
    uVar19 = (uint)uVar14;
    if (uVar14 != 0) {
      do {
        uVar16 = 0;
        for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar18 = uVar16 + uVar17 & uVar3;
        if ((lVar4 == *(longlong *)pauVar2[uVar18 * -4 + -3]) &&
           (iVar15 = (*(code *)puVar13)(), iVar15 == 0)) {
          param_1[4] = *(undefined8 *)(pauVar2[uVar18 * -4 + -1] + 8);
          uVar5 = *(undefined8 *)(pauVar2[uVar18 * -4 + -3] + 8);
          uVar7 = *(undefined8 *)pauVar2[uVar18 * -4 + -2];
          uVar8 = *(undefined8 *)pauVar2[uVar18 * -4 + -1];
          param_1[2] = *(undefined8 *)(pauVar2[uVar18 * -4 + -2] + 8);
          param_1[3] = uVar8;
          *param_1 = uVar5;
          param_1[1] = uVar7;
          *(undefined8 *)(pauVar2[uVar18 * -4 + -1] + 8) = param_4[4];
          uVar5 = *param_4;
          uVar7 = param_4[1];
          uVar8 = param_4[3];
          *(undefined8 *)(pauVar2[uVar18 * -4 + -2] + 8) = param_4[2];
          *(undefined8 *)pauVar2[uVar18 * -4 + -1] = uVar8;
          *(undefined8 *)(pauVar2[uVar18 * -4 + -3] + 8) = uVar5;
          *(undefined8 *)pauVar2[uVar18 * -4 + -2] = uVar7;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
          return param_1;
        }
        uVar14 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar14);
      } while (uVar14 != 0);
    }
    if (bVar12) {
LAB_004801ae:
      auVar26[0] = -(auVar1[0] == -1);
      auVar26[1] = -(auVar1[1] == -1);
      auVar26[2] = -(auVar1[2] == -1);
      auVar26[3] = -(auVar1[3] == -1);
      auVar26[4] = -(auVar1[4] == -1);
      auVar26[5] = -(auVar1[5] == -1);
      auVar26[6] = -(auVar1[6] == -1);
      auVar26[7] = -(auVar1[7] == 0xff);
      auVar26[8] = -(auVar1[8] == -1);
      auVar26[9] = -(auVar1[9] == -1);
      auVar26[10] = -(auVar1[10] == -1);
      auVar26[0xb] = -(auVar1[0xb] == -1);
      auVar26[0xc] = -(auVar1[0xc] == -1);
      auVar26[0xd] = -(auVar1[0xd] == -1);
      auVar26[0xe] = -(auVar1[0xe] == -1);
      auVar26[0xf] = -(bVar22 == 0xff);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') {
        bVar22 = (*pauVar2)[local_d0];
        if (-1 < (char)bVar22) {
          auVar23 = *pauVar2;
          uVar19 = 0;
          for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                                       (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar23[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar19 = uVar19 + 1;
          }
          local_d0 = (ulonglong)uVar19;
          bVar22 = (*pauVar2)[local_d0];
        }
        lVar4 = param_3[2];
        lVar21 = *param_3;
        lVar9 = param_3[1];
        uVar7 = *param_4;
        uVar8 = param_4[1];
        uVar10 = param_4[2];
        uVar11 = param_4[3];
        uVar5 = param_4[4];
        bVar20 = bVar20 >> 1;
        (*pauVar2)[local_d0] = bVar20;
        pauVar2[1][local_d0 - 0x10 & uVar3] = bVar20;
        lVar25 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar22 & 1);
        param_2[3] = lVar25;
        *(longlong *)pauVar2[local_d0 * -4 + -4] = lVar21;
        *(longlong *)(pauVar2[local_d0 * -4 + -4] + 8) = lVar9;
        *(undefined8 *)pauVar2[local_d0 * -4 + -1] = uVar11;
        *(undefined8 *)(pauVar2[local_d0 * -4 + -1] + 8) = uVar5;
        *(undefined8 *)pauVar2[local_d0 * -4 + -2] = uVar8;
        *(undefined8 *)(pauVar2[local_d0 * -4 + -2] + 8) = uVar10;
        *(longlong *)pauVar2[local_d0 * -4 + -3] = lVar4;
        *(undefined8 *)(pauVar2[local_d0 * -4 + -3] + 8) = uVar7;
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      bVar12 = true;
    }
    else {
      uVar14 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar22 >> 7) << 0xf;
      if (uVar14 != 0) {
        uVar19 = 0;
        for (uVar16 = (uint)uVar14; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar19 = uVar19 + 1;
        }
        local_d0 = uVar19 + uVar17 & uVar3;
        goto LAB_004801ae;
      }
      bVar12 = false;
    }
    uVar17 = uVar17 + lVar21 + 0x10;
    lVar21 = lVar21 + 0x10;
  } while( true );
}


