// 00482c30 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,
   (), std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
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
  longlong lVar13;
  bool bVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lVar26;
  undefined1 auVar27 [16];
  ulonglong local_f0;
  
  uVar18 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>(param_1 + 4);
  if (param_1[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,())>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
  }
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar3 = param_1[1];
  bVar22 = (byte)(uVar18 >> 0x38);
  bVar23 = bVar22 >> 1;
  auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
  auVar24 = pshuflw(auVar24,auVar24,0);
  lVar4 = param_2[3];
  lVar5 = param_2[4];
  lVar6 = param_2[5];
  lVar7 = param_2[6];
  lVar8 = param_2[7];
  lVar9 = param_2[8];
  lVar10 = param_2[9];
  lVar11 = param_2[2];
  bVar14 = false;
  lVar20 = 0;
  do {
    uVar18 = uVar18 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar18);
    auVar25[0] = -(auVar1[0] == auVar24[0]);
    auVar25[1] = -(auVar1[1] == auVar24[1]);
    auVar25[2] = -(auVar1[2] == auVar24[2]);
    auVar25[3] = -(auVar1[3] == auVar24[3]);
    auVar25[4] = -(auVar1[4] == auVar24[4]);
    auVar25[5] = -(auVar1[5] == auVar24[5]);
    auVar25[6] = -(auVar1[6] == auVar24[6]);
    auVar25[7] = -(auVar1[7] == auVar24[7]);
    auVar25[8] = -(auVar1[8] == auVar24[0]);
    auVar25[9] = -(auVar1[9] == auVar24[1]);
    auVar25[10] = -(auVar1[10] == auVar24[2]);
    auVar25[0xb] = -(auVar1[0xb] == auVar24[3]);
    auVar25[0xc] = -(auVar1[0xc] == auVar24[4]);
    auVar25[0xd] = -(auVar1[0xd] == auVar24[5]);
    bVar23 = auVar1[0xf];
    auVar25[0xe] = -(auVar1[0xe] == auVar24[6]);
    auVar25[0xf] = -(bVar23 == auVar24[7]);
    uVar15 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
    uVar21 = (uint)uVar15;
    if (uVar15 != 0) {
      do {
        uVar17 = 0;
        for (uVar12 = uVar21; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        uVar19 = uVar17 + uVar18 & uVar3;
        if ((((((lVar4 == *(longlong *)(pauVar2[uVar19 * -5 + -4] + 8)) &&
               (lVar5 == *(longlong *)pauVar2[uVar19 * -5 + -3])) &&
              (lVar6 == *(longlong *)(pauVar2[uVar19 * -5 + -3] + 8))) &&
             ((lVar7 == *(longlong *)pauVar2[uVar19 * -5 + -2] &&
              (lVar8 == *(longlong *)(pauVar2[uVar19 * -5 + -2] + 8))))) &&
            ((lVar9 == *(longlong *)pauVar2[uVar19 * -5 + -1] &&
             ((lVar10 == *(longlong *)(pauVar2[uVar19 * -5 + -1] + 8) &&
              (lVar11 == *(longlong *)pauVar2[uVar19 * -5 + -4])))))) &&
           (iVar16 = (*(code *)PTR_bcmp_00799020)(lVar11,lVar11), iVar16 == 0)) {
          uVar18 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          if (*param_2 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
          }
          goto LAB_00482f53;
        }
        uVar15 = (ushort)(uVar21 - 1) & (ushort)uVar21;
        uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar15);
      } while (uVar15 != 0);
    }
    if (bVar14) goto LAB_00482e1d;
    uVar15 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar23 >> 7) << 0xf;
    if (uVar15 == 0) {
      bVar14 = false;
    }
    else {
      uVar21 = 0;
      for (uVar17 = (uint)uVar15; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
        uVar21 = uVar21 + 1;
      }
      local_f0 = uVar21 + uVar18 & uVar3;
LAB_00482e1d:
      auVar27[0] = -(auVar1[0] == -1);
      auVar27[1] = -(auVar1[1] == -1);
      auVar27[2] = -(auVar1[2] == -1);
      auVar27[3] = -(auVar1[3] == -1);
      auVar27[4] = -(auVar1[4] == -1);
      auVar27[5] = -(auVar1[5] == -1);
      auVar27[6] = -(auVar1[6] == -1);
      auVar27[7] = -(auVar1[7] == 0xff);
      auVar27[8] = -(auVar1[8] == -1);
      auVar27[9] = -(auVar1[9] == -1);
      auVar27[10] = -(auVar1[10] == -1);
      auVar27[0xb] = -(auVar1[0xb] == -1);
      auVar27[0xc] = -(auVar1[0xc] == -1);
      auVar27[0xd] = -(auVar1[0xd] == -1);
      auVar27[0xe] = -(auVar1[0xe] == -1);
      auVar27[0xf] = -(bVar23 == 0xff);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') {
        bVar23 = (*pauVar2)[local_f0];
        if (-1 < (char)bVar23) {
          auVar24 = *pauVar2;
          uVar21 = 0;
          for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar17 & 1) == 0;
              uVar17 = uVar17 >> 1 | 0x80000000) {
            uVar21 = uVar21 + 1;
          }
          local_f0 = (ulonglong)uVar21;
          bVar23 = (*pauVar2)[local_f0];
        }
        lVar4 = param_2[8];
        lVar5 = param_2[9];
        lVar6 = *param_2;
        lVar7 = param_2[1];
        lVar8 = param_2[2];
        lVar9 = param_2[3];
        lVar10 = param_2[4];
        lVar11 = param_2[5];
        lVar20 = param_2[6];
        lVar13 = param_2[7];
        bVar22 = bVar22 >> 1;
        (*pauVar2)[local_f0] = bVar22;
        pauVar2[1][local_f0 - 0x10 & uVar3] = bVar22;
        lVar26 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar23 & 1);
        param_1[3] = lVar26;
        *(longlong *)pauVar2[local_f0 * -5 + -1] = lVar4;
        *(longlong *)(pauVar2[local_f0 * -5 + -1] + 8) = lVar5;
        *(longlong *)pauVar2[local_f0 * -5 + -2] = lVar20;
        *(longlong *)(pauVar2[local_f0 * -5 + -2] + 8) = lVar13;
        *(longlong *)pauVar2[local_f0 * -5 + -3] = lVar10;
        *(longlong *)(pauVar2[local_f0 * -5 + -3] + 8) = lVar11;
        *(longlong *)pauVar2[local_f0 * -5 + -4] = lVar8;
        *(longlong *)(pauVar2[local_f0 * -5 + -4] + 8) = lVar9;
        *(longlong *)pauVar2[local_f0 * -5 + -5] = lVar6;
        *(longlong *)(pauVar2[local_f0 * -5 + -5] + 8) = lVar7;
        uVar18 = 0;
LAB_00482f53:
        return uVar18 & 0xffffffff;
      }
      bVar14 = true;
    }
    uVar18 = uVar18 + lVar20 + 0x10;
    lVar20 = lVar20 + 0x10;
  } while( true );
}


