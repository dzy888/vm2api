// 004835c0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<&http[56314f485c23ccf6]::header::name::HeaderName, (),
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,longlong *param_2)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong unaff_RBP;
  byte bVar12;
  uint uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_60 = param_2;
  uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&&http[56314f485c23ccf6]::header::name::HeaderName>(param_1 + 4,&local_60);
  if (param_1[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(&http[56314f485c23ccf6]::header::name::HeaderName,())>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
  }
  puVar6 = PTR_bcmp_00799020;
  pauVar1 = (undefined1 (*) [16])*param_1;
  uVar2 = param_1[1];
  bVar12 = (byte)(uVar10 >> 0x38);
  bVar14 = bVar12 >> 1;
  auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar15 = pshuflw(auVar15,auVar15,0);
  local_48._0_8_ = auVar15._0_8_;
  local_48._8_4_ = auVar15._0_4_;
  local_48._12_4_ = auVar15._4_4_;
  bVar5 = false;
  lVar11 = 0;
  do {
    uVar10 = uVar10 & uVar2;
    local_58 = *(undefined1 (*) [16])(*pauVar1 + uVar10);
    auVar15[0] = -(local_58[0] == local_48[0]);
    auVar15[1] = -(local_58[1] == local_48[1]);
    auVar15[2] = -(local_58[2] == local_48[2]);
    auVar15[3] = -(local_58[3] == local_48[3]);
    auVar15[4] = -(local_58[4] == local_48[4]);
    auVar15[5] = -(local_58[5] == local_48[5]);
    auVar15[6] = -(local_58[6] == local_48[6]);
    auVar15[7] = -(local_58[7] == local_48[7]);
    auVar15[8] = -(local_58[8] == local_48[8]);
    auVar15[9] = -(local_58[9] == local_48[9]);
    auVar15[10] = -(local_58[10] == local_48[10]);
    auVar15[0xb] = -(local_58[0xb] == local_48[0xb]);
    auVar15[0xc] = -(local_58[0xc] == local_48[0xc]);
    auVar15[0xd] = -(local_58[0xd] == local_48[0xd]);
    auVar15[0xe] = -(local_58[0xe] == local_48[0xe]);
    auVar15[0xf] = -(local_58[0xf] == local_48[0xf]);
    uVar7 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
    uVar13 = (uint)uVar7;
    if (uVar7 != 0) {
      if (*param_2 == 0) {
        do {
          uVar9 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          plVar3 = *(longlong **)((longlong)pauVar1 + (uVar9 + uVar10 & uVar2) * -8 + -8);
          if ((*plVar3 == 0) && ((char)param_2[1] == (char)plVar3[1])) {
            return 1;
          }
          uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
        } while (uVar7 != 0);
      }
      else {
        do {
          uVar9 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          plVar3 = *(longlong **)((longlong)pauVar1 + (uVar9 + uVar10 & uVar2) * -8 + -8);
          if (((*plVar3 != 0) && (param_2[2] == plVar3[2])) &&
             (iVar8 = (*(code *)puVar6)(), iVar8 == 0)) {
            return 1;
          }
          uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
        } while (uVar7 != 0);
      }
    }
    if (bVar5) {
LAB_00483718:
      auVar16[0] = -(local_58[0] == -1);
      auVar16[1] = -(local_58[1] == -1);
      auVar16[2] = -(local_58[2] == -1);
      auVar16[3] = -(local_58[3] == -1);
      auVar16[4] = -(local_58[4] == -1);
      auVar16[5] = -(local_58[5] == -1);
      auVar16[6] = -(local_58[6] == -1);
      auVar16[7] = -(local_58[7] == -1);
      auVar16[8] = -(local_58[8] == -1);
      auVar16[9] = -(local_58[9] == -1);
      auVar16[10] = -(local_58[10] == -1);
      auVar16[0xb] = -(local_58[0xb] == -1);
      auVar16[0xc] = -(local_58[0xc] == -1);
      auVar16[0xd] = -(local_58[0xd] == -1);
      auVar16[0xe] = -(local_58[0xe] == -1);
      auVar16[0xf] = -(local_58[0xf] == 0xff);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') {
        bVar14 = (*pauVar1)[unaff_RBP];
        if (-1 < (char)bVar14) {
          auVar15 = *pauVar1;
          uVar13 = 0;
          for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar15[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
              uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          unaff_RBP = (ulonglong)uVar13;
          bVar14 = (*pauVar1)[unaff_RBP];
        }
        bVar12 = bVar12 >> 1;
        (*pauVar1)[unaff_RBP] = bVar12;
        pauVar1[1][unaff_RBP - 0x10 & uVar2] = bVar12;
        lVar11 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar14 & 1);
        param_1[3] = lVar11;
        *(longlong **)((longlong)pauVar1 + unaff_RBP * -8 + -8) = param_2;
        return 0;
      }
      bVar5 = true;
    }
    else {
      uVar7 = (ushort)(SUB161(local_58 >> 7,0) & 1) | (ushort)(SUB161(local_58 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(local_58 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(local_58 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(local_58 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(local_58 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(local_58 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(local_58 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(local_58 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(local_58 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(local_58 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(local_58 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(local_58 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(local_58 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(local_58 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(local_58[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar7;
      if (uVar7 != 0) {
        uVar9 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        unaff_RBP = uVar9 + uVar10 & uVar2;
        goto LAB_00483718;
      }
      bVar5 = false;
    }
    uVar10 = uVar10 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while( true );
}


