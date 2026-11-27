// 0047ed80 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  uint uVar17;
  byte bVar18;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  undefined1 auVar22 [16];
  ulonglong local_b8;
  
  uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_1 + 4);
  if (param_1[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_1,param_1 + 4);
  }
  puVar9 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar3 = param_1[1];
  bVar16 = (byte)(uVar13 >> 0x38);
  bVar18 = bVar16 >> 1;
  auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
  auVar19 = pshuflw(auVar19,auVar19,0);
  lVar4 = param_2[2];
  bVar8 = false;
  lVar15 = 0;
  do {
    uVar13 = uVar13 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar13);
    auVar20[0] = -(auVar1[0] == auVar19[0]);
    auVar20[1] = -(auVar1[1] == auVar19[1]);
    auVar20[2] = -(auVar1[2] == auVar19[2]);
    auVar20[3] = -(auVar1[3] == auVar19[3]);
    auVar20[4] = -(auVar1[4] == auVar19[4]);
    auVar20[5] = -(auVar1[5] == auVar19[5]);
    auVar20[6] = -(auVar1[6] == auVar19[6]);
    auVar20[7] = -(auVar1[7] == auVar19[7]);
    auVar20[8] = -(auVar1[8] == auVar19[0]);
    auVar20[9] = -(auVar1[9] == auVar19[1]);
    auVar20[10] = -(auVar1[10] == auVar19[2]);
    auVar20[0xb] = -(auVar1[0xb] == auVar19[3]);
    auVar20[0xc] = -(auVar1[0xc] == auVar19[4]);
    auVar20[0xd] = -(auVar1[0xd] == auVar19[5]);
    bVar18 = auVar1[0xf];
    auVar20[0xe] = -(auVar1[0xe] == auVar19[6]);
    auVar20[0xf] = -(bVar18 == auVar19[7]);
    uVar10 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
    uVar17 = (uint)uVar10;
    if (uVar10 != 0) {
      do {
        uVar12 = 0;
        for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar14 = uVar12 + uVar13 & uVar3;
        if ((lVar4 == *(longlong *)pauVar2[uVar14 * -2 + -1]) &&
           (iVar11 = (*(code *)puVar9)(), iVar11 == 0)) {
          uVar5 = *(undefined8 *)(pauVar2[uVar14 * -2 + -1] + 8);
          *(undefined8 *)(pauVar2[uVar14 * -2 + -1] + 8) = param_3;
          if (*param_2 == 0) {
            return uVar5;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
          return uVar5;
        }
        uVar10 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar10);
      } while (uVar10 != 0);
    }
    if (bVar8) {
LAB_0047eede:
      auVar22[0] = -(auVar1[0] == -1);
      auVar22[1] = -(auVar1[1] == -1);
      auVar22[2] = -(auVar1[2] == -1);
      auVar22[3] = -(auVar1[3] == -1);
      auVar22[4] = -(auVar1[4] == -1);
      auVar22[5] = -(auVar1[5] == -1);
      auVar22[6] = -(auVar1[6] == -1);
      auVar22[7] = -(auVar1[7] == 0xff);
      auVar22[8] = -(auVar1[8] == -1);
      auVar22[9] = -(auVar1[9] == -1);
      auVar22[10] = -(auVar1[10] == -1);
      auVar22[0xb] = -(auVar1[0xb] == -1);
      auVar22[0xc] = -(auVar1[0xc] == -1);
      auVar22[0xd] = -(auVar1[0xd] == -1);
      auVar22[0xe] = -(auVar1[0xe] == -1);
      auVar22[0xf] = -(bVar18 == 0xff);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') {
        bVar18 = (*pauVar2)[local_b8];
        if (-1 < (char)bVar18) {
          auVar19 = *pauVar2;
          uVar17 = 0;
          for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar19[0xf] >> 7) << 0xf); (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          local_b8 = (ulonglong)uVar17;
          bVar18 = (*pauVar2)[local_b8];
        }
        lVar4 = param_2[2];
        lVar15 = *param_2;
        lVar7 = param_2[1];
        bVar16 = bVar16 >> 1;
        (*pauVar2)[local_b8] = bVar16;
        pauVar2[1][local_b8 - 0x10 & uVar3] = bVar16;
        lVar21 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar18 & 1);
        param_1[3] = lVar21;
        *(longlong *)pauVar2[local_b8 * -2 + -1] = lVar4;
        *(longlong *)pauVar2[local_b8 * -2 + -2] = lVar15;
        *(longlong *)(pauVar2[local_b8 * -2 + -2] + 8) = lVar7;
        *(undefined8 *)(pauVar2[local_b8 * -2 + -1] + 8) = param_3;
        return 0;
      }
      bVar8 = true;
    }
    else {
      uVar10 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar18 >> 7) << 0xf;
      if (uVar10 != 0) {
        uVar17 = 0;
        for (uVar12 = (uint)uVar10; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        local_b8 = uVar17 + uVar13 & uVar3;
        goto LAB_0047eede;
      }
      bVar8 = false;
    }
    uVar13 = uVar13 + lVar15 + 0x10;
    lVar15 = lVar15 + 0x10;
  } while( true );
}


