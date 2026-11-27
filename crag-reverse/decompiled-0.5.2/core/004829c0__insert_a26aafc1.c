// 004829c0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String, (),
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 auVar21 [16];
  ulonglong local_b0;
  
  uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_1 + 4);
  if (param_1[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,())>>::
    reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
  }
  puVar9 = PTR_bcmp_00799020;
  pauVar3 = (undefined1 (*) [16])*param_1;
  uVar4 = param_1[1];
  bVar14 = (byte)(uVar13 >> 0x38);
  bVar17 = bVar14 >> 1;
  auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar18 = pshuflw(auVar18,auVar18,0);
  lVar5 = param_2[2];
  bVar8 = false;
  lVar15 = 0;
  do {
    uVar13 = uVar13 & uVar4;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar13);
    auVar19[0] = -(auVar2[0] == auVar18[0]);
    auVar19[1] = -(auVar2[1] == auVar18[1]);
    auVar19[2] = -(auVar2[2] == auVar18[2]);
    auVar19[3] = -(auVar2[3] == auVar18[3]);
    auVar19[4] = -(auVar2[4] == auVar18[4]);
    auVar19[5] = -(auVar2[5] == auVar18[5]);
    auVar19[6] = -(auVar2[6] == auVar18[6]);
    auVar19[7] = -(auVar2[7] == auVar18[7]);
    auVar19[8] = -(auVar2[8] == auVar18[0]);
    auVar19[9] = -(auVar2[9] == auVar18[1]);
    auVar19[10] = -(auVar2[10] == auVar18[2]);
    auVar19[0xb] = -(auVar2[0xb] == auVar18[3]);
    auVar19[0xc] = -(auVar2[0xc] == auVar18[4]);
    auVar19[0xd] = -(auVar2[0xd] == auVar18[5]);
    bVar17 = auVar2[0xf];
    auVar19[0xe] = -(auVar2[0xe] == auVar18[6]);
    auVar19[0xf] = -(bVar17 == auVar18[7]);
    uVar10 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
    uVar16 = (uint)uVar10;
    if (uVar10 != 0) {
      do {
        uVar12 = 0;
        for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        if ((lVar5 == *(longlong *)((longlong)pauVar3 + (uVar12 + uVar13 & uVar4) * -0x18 + -8)) &&
           (iVar11 = (*(code *)puVar9)(), iVar11 == 0)) {
          uVar13 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          if (*param_2 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(puVar9,1);
          }
          goto LAB_00482bd0;
        }
        uVar10 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar10);
      } while (uVar10 != 0);
    }
    if (bVar8) goto LAB_00482b1d;
    uVar10 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar17 >> 7) << 0xf;
    if (uVar10 == 0) {
      bVar8 = false;
    }
    else {
      uVar16 = 0;
      for (uVar12 = (uint)uVar10; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      local_b0 = uVar16 + uVar13 & uVar4;
LAB_00482b1d:
      auVar21[0] = -(auVar2[0] == -1);
      auVar21[1] = -(auVar2[1] == -1);
      auVar21[2] = -(auVar2[2] == -1);
      auVar21[3] = -(auVar2[3] == -1);
      auVar21[4] = -(auVar2[4] == -1);
      auVar21[5] = -(auVar2[5] == -1);
      auVar21[6] = -(auVar2[6] == -1);
      auVar21[7] = -(auVar2[7] == 0xff);
      auVar21[8] = -(auVar2[8] == -1);
      auVar21[9] = -(auVar2[9] == -1);
      auVar21[10] = -(auVar2[10] == -1);
      auVar21[0xb] = -(auVar2[0xb] == -1);
      auVar21[0xc] = -(auVar2[0xc] == -1);
      auVar21[0xd] = -(auVar2[0xd] == -1);
      auVar21[0xe] = -(auVar2[0xe] == -1);
      auVar21[0xf] = -(bVar17 == 0xff);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') {
        bVar17 = (*pauVar3)[local_b0];
        if (-1 < (char)bVar17) {
          auVar18 = *pauVar3;
          uVar16 = 0;
          for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar18[0xf] >> 7) << 0xf); (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          local_b0 = (ulonglong)uVar16;
          bVar17 = (*pauVar3)[local_b0];
        }
        lVar5 = param_2[2];
        lVar15 = *param_2;
        lVar7 = param_2[1];
        bVar14 = bVar14 >> 1;
        (*pauVar3)[local_b0] = bVar14;
        pauVar3[1][local_b0 - 0x10 & uVar4] = bVar14;
        lVar20 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar17 & 1);
        param_1[3] = lVar20;
        *(longlong *)((longlong)pauVar3 + local_b0 * -0x18 + -8) = lVar5;
        plVar1 = (longlong *)((longlong)pauVar3 + local_b0 * -0x18 + -0x18);
        *plVar1 = lVar15;
        plVar1[1] = lVar7;
        uVar13 = 0;
LAB_00482bd0:
        return uVar13 & 0xffffffff;
      }
      bVar8 = true;
    }
    uVar13 = uVar13 + lVar15 + 0x10;
    lVar15 = lVar15 + 0x10;
  } while( true );
}


