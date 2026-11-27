// 00483190 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<std[6c98fd8553dbae28]::path::PathBuf, (),
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<std[6c98fd8553dbae28]::path::PathBuf,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  byte bVar16;
  byte bVar17;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 auVar21 [16];
  ulonglong local_90;
  
  uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&std[6c98fd8553dbae28]::path::PathBuf>(param_1 + 4);
  if (param_1[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(std[6c98fd8553dbae28]::path::PathBuf,())>>::
    reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<std[6c98fd8553dbae28]::path::PathBuf,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
  }
  pauVar3 = (undefined1 (*) [16])*param_1;
  uVar4 = param_1[1];
  bVar16 = (byte)(uVar13 >> 0x38);
  bVar17 = bVar16 >> 1;
  auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar18 = pshuflw(auVar18,auVar18,0);
  bVar9 = false;
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
    uVar11 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
    uVar14 = (uint)uVar11;
    if (uVar11 != 0) {
      do {
        uVar12 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        cVar10 = <std[6c98fd8553dbae28]::path::PathBuf_as_hashbrown[b5c94476ffc33875]::Equivalent<std[6c98fd8553dbae28]::path::PathBuf>>
                 ::equivalent(param_2,*param_1 + (uVar12 + uVar13 & uVar4) * -0x18 + -0x18);
        if (cVar10 != '\0') {
          uVar13 = CONCAT71((int7)((ulonglong)pauVar3 >> 8),1);
          if (*param_2 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
          }
          goto LAB_00483354;
        }
        uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
      } while (uVar11 != 0);
    }
    if (bVar9) goto LAB_0048328d;
    uVar11 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
    if (uVar11 == 0) {
      bVar9 = false;
    }
    else {
      uVar14 = 0;
      for (uVar12 = (uint)uVar11; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      local_90 = uVar14 + uVar13 & uVar4;
LAB_0048328d:
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
        if (-1 < (char)(*pauVar3)[local_90]) {
          auVar18 = *pauVar3;
          uVar14 = 0;
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
            uVar14 = uVar14 + 1;
          }
          local_90 = (ulonglong)uVar14;
        }
        lVar15 = param_2[2];
        lVar7 = *param_2;
        lVar8 = param_2[1];
        lVar5 = *param_1;
        bVar17 = *(byte *)(lVar5 + local_90);
        uVar13 = param_1[1];
        bVar16 = bVar16 >> 1;
        *(byte *)(lVar5 + local_90) = bVar16;
        *(byte *)(lVar5 + 0x10 + (local_90 - 0x10 & uVar13)) = bVar16;
        lVar20 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar17 & 1);
        param_1[3] = lVar20;
        *(longlong *)(lVar5 + -8 + local_90 * -0x18) = lVar15;
        plVar1 = (longlong *)(lVar5 + -0x18 + local_90 * -0x18);
        *plVar1 = lVar7;
        plVar1[1] = lVar8;
        uVar13 = 0;
LAB_00483354:
        return uVar13 & 0xffffffff;
      }
      bVar9 = true;
    }
    uVar13 = uVar13 + lVar15 + 0x10;
    lVar15 = lVar15 + 0x10;
  } while( true );
}


