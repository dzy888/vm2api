// 0047f660 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  undefined1 auVar20 [16];
  ulonglong local_130;
  
  uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar6 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar14 = (byte)(uVar11 >> 0x38);
  bVar15 = bVar14 >> 1;
  auVar17 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar17 = pshuflw(auVar17,auVar17,0);
  lVar19 = param_3[2];
  bVar13 = false;
  lVar12 = 0;
  do {
    uVar11 = uVar11 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar11);
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
    bVar15 = auVar1[0xf];
    auVar18[0xe] = -(auVar1[0xe] == auVar17[6]);
    auVar18[0xf] = -(bVar15 == auVar17[7]);
    uVar7 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
    uVar8 = (uint)uVar7;
    if (uVar7 != 0) {
      do {
        uVar10 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        if (lVar19 == *(longlong *)((longlong)pauVar2 + (uVar10 + uVar11 & uVar3) * -0xa8 + -0x98))
        {
          iVar9 = (*(code *)puVar6)();
          puVar5 = PTR_memcpy_00799008;
          if (iVar9 == 0) {
            uVar16 = (*(code *)PTR_memcpy_00799008)(pauVar2,0x90);
            uVar16 = (*(code *)puVar5)(uVar16,0x90);
            if (*param_3 == 0) {
              return param_1;
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
            return param_1;
          }
        }
        uVar7 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar7);
      } while (uVar7 != 0);
    }
    puVar5 = PTR_memcpy_00799008;
    if (bVar13) {
LAB_0047f7ce:
      auVar20[0] = -(auVar1[0] == -1);
      auVar20[1] = -(auVar1[1] == -1);
      auVar20[2] = -(auVar1[2] == -1);
      auVar20[3] = -(auVar1[3] == -1);
      auVar20[4] = -(auVar1[4] == -1);
      auVar20[5] = -(auVar1[5] == -1);
      auVar20[6] = -(auVar1[6] == -1);
      auVar20[7] = -(auVar1[7] == 0xff);
      auVar20[8] = -(auVar1[8] == -1);
      auVar20[9] = -(auVar1[9] == -1);
      auVar20[10] = -(auVar1[10] == -1);
      auVar20[0xb] = -(auVar1[0xb] == -1);
      auVar20[0xc] = -(auVar1[0xc] == -1);
      auVar20[0xd] = -(auVar1[0xd] == -1);
      auVar20[0xe] = -(auVar1[0xe] == -1);
      auVar20[0xf] = -(bVar15 == 0xff);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') {
        bVar15 = (*pauVar2)[local_130];
        if (-1 < (char)bVar15) {
          auVar17 = *pauVar2;
          uVar8 = 0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                                       (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar17[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          local_130 = (ulonglong)uVar8;
          bVar15 = (*pauVar2)[local_130];
        }
        (*(code *)PTR_memcpy_00799008)(pauVar2,0x90);
        bVar14 = bVar14 >> 1;
        (*pauVar2)[local_130] = bVar14;
        pauVar2[1][local_130 - 0x10 & uVar3] = bVar14;
        lVar19 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar15 & 1);
        param_2[3] = lVar19;
        (*(code *)puVar5)(param_2,0xa8);
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      bVar13 = true;
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
              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar15 >> 7) << 0xf;
      if (uVar7 != 0) {
        uVar8 = 0;
        for (uVar10 = (uint)uVar7; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        local_130 = uVar8 + uVar11 & uVar3;
        goto LAB_0047f7ce;
      }
      bVar13 = false;
    }
    uVar11 = uVar11 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
}


