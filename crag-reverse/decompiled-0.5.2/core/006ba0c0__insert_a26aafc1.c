// 006ba0c0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<core[c0acaeba6ab4c2e0]::any::TypeId,
   alloc[12e961f32105355]::boxed::Box<dyn http[56314f485c23ccf6]::extensions::AnyClone +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>,
   core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>>::insert
    */

undefined1  [16] __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>,core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>>
::insert(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
        ulonglong param_5)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  byte bVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar13 = param_2[1];
  if (param_1[2] == 0) {
    (*(code *)
      PTR_<hashbrown[b5c94476ffc33875]::map::make_hasher<core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>,core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>::_closure_0_>_00799a10
    )(1,param_1 + 4);
  }
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar3 = param_1[1];
  bVar9 = (byte)(uVar13 >> 0x38);
  bVar15 = bVar9 >> 1;
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  bVar5 = false;
  lVar7 = 0;
  do {
    uVar13 = uVar13 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar13);
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
    bVar15 = auVar1[0xf];
    auVar18[0xe] = -(auVar1[0xe] == auVar16[6]);
    auVar18[0xf] = -(bVar15 == auVar16[7]);
    uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
    uVar14 = (uint)uVar11;
    while (uVar11 != 0) {
      uVar10 = 0;
      for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      uVar12 = uVar10 + uVar13 & uVar3;
      if (*(longlong *)pauVar2[uVar12 * -2 + -2] == *param_2 &&
          *(longlong *)(pauVar2[uVar12 * -2 + -2] + 8) == param_2[1]) {
        uVar6 = *(undefined8 *)pauVar2[uVar12 * -2 + -1];
        pauVar8 = *(undefined1 (**) [16])(pauVar2[uVar12 * -2 + -1] + 8);
        *(undefined8 *)pauVar2[uVar12 * -2 + -1] = param_3;
        *(undefined8 *)(pauVar2[uVar12 * -2 + -1] + 8) = param_4;
        goto LAB_006ba251;
      }
      uVar11 = (ushort)(uVar14 - 1) & (ushort)uVar14;
      uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar11);
    }
    if (bVar5) goto LAB_006ba1ab;
    uVar11 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
    if (uVar11 == 0) {
      bVar5 = false;
      param_5 = 0;
    }
    else {
      uVar14 = 0;
      for (uVar10 = (uint)uVar11; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar14 = uVar14 + 1;
      }
      param_5 = uVar14 + uVar13 & uVar3;
LAB_006ba1ab:
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
      auVar17[0xf] = -(bVar15 == 0xff);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') {
        bVar15 = (*pauVar2)[param_5];
        if (-1 < (char)bVar15) {
          auVar16 = *pauVar2;
          uVar14 = 0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar16[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          param_5 = (ulonglong)uVar14;
          bVar15 = (*pauVar2)[param_5];
        }
        bVar9 = bVar9 >> 1;
        (*pauVar2)[param_5] = bVar9;
        pauVar2[1][param_5 - 0x10 & uVar3] = bVar9;
        lVar7 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar15 & 1);
        param_1[3] = lVar7;
        lVar7 = param_2[1];
        *(longlong *)pauVar2[param_5 * -2 + -2] = *param_2;
        *(longlong *)(pauVar2[param_5 * -2 + -2] + 8) = lVar7;
        *(undefined8 *)pauVar2[param_5 * -2 + -1] = param_3;
        *(undefined8 *)(pauVar2[param_5 * -2 + -1] + 8) = param_4;
        uVar6 = 0;
        pauVar8 = pauVar2;
LAB_006ba251:
        auVar16._8_8_ = pauVar8;
        auVar16._0_8_ = uVar6;
        return auVar16;
      }
      bVar5 = true;
    }
    uVar13 = uVar13 + lVar7 + 0x10;
    lVar7 = lVar7 + 0x10;
  } while( true );
}


