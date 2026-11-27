// 0006bfb0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<u32, agy_bridge[64a9e9deac6c45ce]::StreamSlot,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong unaff_RBP;
  ushort uVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int local_17c;
  undefined8 *local_178;
  
  local_17c = param_3;
  local_178 = param_1;
  uVar8 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
          ::hash_one::<&u32>(param_2 + 4,&local_17c);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot)>>::
    reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,1,param_2 + 4);
  }
  puVar6 = local_178;
  puVar5 = PTR_memcpy_000c3aa8;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar13 = (byte)(uVar8 >> 0x38);
  bVar14 = bVar13 >> 1;
  auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar10 = 0;
  lVar9 = 0;
  do {
    uVar8 = uVar8 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar8);
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
    uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
    uVar11 = (uint)uVar12;
    while (uVar12 != 0) {
      uVar7 = 0;
      for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      if (param_3 == *(int *)pauVar2[(uVar7 + uVar8 & uVar3) * -0x14 + -0x14]) {
        uVar15 = (*(code *)PTR_memcpy_000c3aa8)(lVar10,0x138);
        (*(code *)puVar5)(uVar15,0x138);
        return puVar6;
      }
      uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
    }
    if (lVar10 == 1) {
LAB_0006c088:
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
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      if (uVar12 != 0) {
        bVar14 = (*pauVar2)[unaff_RBP];
        if (-1 < (char)bVar14) {
          auVar16 = *pauVar2;
          uVar11 = 0;
          for (uVar7 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar16[0xf] >> 7) << 0xf); (uVar7 & 1) == 0;
              uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          unaff_RBP = (ulonglong)uVar11;
          bVar14 = (*pauVar2)[unaff_RBP];
        }
        (*(code *)PTR_memcpy_000c3aa8)(uVar12,0x138);
        bVar13 = bVar13 >> 1;
        (*pauVar2)[unaff_RBP] = bVar13;
        pauVar2[1][unaff_RBP - 0x10 & uVar3] = bVar13;
        lVar9 = param_2[3] - DAT_00008bf8;
        param_2[2] = param_2[2] - (ulonglong)(bVar14 & 1);
        param_2[3] = lVar9;
        *(int *)pauVar2[unaff_RBP * -0x14 + -0x14] = param_3;
        (*(code *)PTR_memcpy_000c3aa8)(param_3,0x13c);
        *local_178 = 0xffffffffffffffff;
        return local_178;
      }
      lVar10 = 1;
    }
    else {
      uVar12 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      if (uVar12 != 0) {
        uVar7 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        unaff_RBP = uVar7 + uVar8 & uVar3;
        goto LAB_0006c088;
      }
      lVar10 = 0;
    }
    uVar8 = uVar8 + lVar9 + 0x10;
    lVar9 = lVar9 + 0x10;
  } while( true );
}


