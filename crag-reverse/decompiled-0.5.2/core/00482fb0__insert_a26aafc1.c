// 00482fb0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<craggemini_core[66f3c71560d70857]::resume::ModelFamily,
   craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char local_48;
  undefined7 uStack_47;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  
  puVar1 = param_2 + 4;
  puVar12 = puVar1;
  local_48 = param_3;
  uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&craggemini_core[66f3c71560d70857]::resume::ModelFamily>(puVar1,&local_48);
  if (param_2[2] == 0) {
    puVar12 = param_2;
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,puVar1);
  }
  pauVar3 = (undefined1 (*) [16])*param_2;
  uVar4 = param_2[1];
  bVar11 = (byte)(uVar10 >> 0x38);
  bVar17 = bVar11 >> 1;
  auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar18 = pshuflw(auVar18,auVar18,0);
  bVar8 = false;
  lVar13 = 0;
  do {
    uVar10 = uVar10 & uVar4;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar10);
    auVar20[0] = -(auVar2[0] == auVar18[0]);
    auVar20[1] = -(auVar2[1] == auVar18[1]);
    auVar20[2] = -(auVar2[2] == auVar18[2]);
    auVar20[3] = -(auVar2[3] == auVar18[3]);
    auVar20[4] = -(auVar2[4] == auVar18[4]);
    auVar20[5] = -(auVar2[5] == auVar18[5]);
    auVar20[6] = -(auVar2[6] == auVar18[6]);
    auVar20[7] = -(auVar2[7] == auVar18[7]);
    auVar20[8] = -(auVar2[8] == auVar18[0]);
    auVar20[9] = -(auVar2[9] == auVar18[1]);
    auVar20[10] = -(auVar2[10] == auVar18[2]);
    auVar20[0xb] = -(auVar2[0xb] == auVar18[3]);
    auVar20[0xc] = -(auVar2[0xc] == auVar18[4]);
    auVar20[0xd] = -(auVar2[0xd] == auVar18[5]);
    bVar17 = auVar2[0xf];
    auVar20[0xe] = -(auVar2[0xe] == auVar18[6]);
    auVar20[0xf] = -(bVar17 == auVar18[7]);
    uVar15 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
    uVar14 = (uint)uVar15;
    while (uVar15 != 0) {
      uVar9 = 0;
      for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar16 = uVar9 + uVar10 & uVar4;
      if (param_3 == pauVar3[uVar16 * -2 + -2][0]) {
        param_1[2] = *(undefined8 *)(pauVar3[uVar16 * -2 + -1] + 8);
        uVar5 = *(undefined8 *)pauVar3[uVar16 * -2 + -1];
        *param_1 = *(undefined8 *)(pauVar3[uVar16 * -2 + -2] + 8);
        param_1[1] = uVar5;
        uVar5 = param_4[1];
        *(undefined8 *)(pauVar3[uVar16 * -2 + -2] + 8) = *param_4;
        *(undefined8 *)pauVar3[uVar16 * -2 + -1] = uVar5;
        *(undefined8 *)(pauVar3[uVar16 * -2 + -1] + 8) = param_4[2];
        return param_1;
      }
      uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
      uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
    }
    if (bVar8) {
LAB_00483078:
      auVar19[0] = -(auVar2[0] == -1);
      auVar19[1] = -(auVar2[1] == -1);
      auVar19[2] = -(auVar2[2] == -1);
      auVar19[3] = -(auVar2[3] == -1);
      auVar19[4] = -(auVar2[4] == -1);
      auVar19[5] = -(auVar2[5] == -1);
      auVar19[6] = -(auVar2[6] == -1);
      auVar19[7] = -(auVar2[7] == 0xff);
      auVar19[8] = -(auVar2[8] == -1);
      auVar19[9] = -(auVar2[9] == -1);
      auVar19[10] = -(auVar2[10] == -1);
      auVar19[0xb] = -(auVar2[0xb] == -1);
      auVar19[0xc] = -(auVar2[0xc] == -1);
      auVar19[0xd] = -(auVar2[0xd] == -1);
      auVar19[0xe] = -(auVar2[0xe] == -1);
      auVar19[0xf] = -(bVar17 == 0xff);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') {
        bVar17 = (*pauVar3)[(longlong)puVar12];
        if (-1 < (char)bVar17) {
          auVar18 = *pauVar3;
          uVar14 = 0;
          for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar18[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
              uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          puVar12 = (undefined8 *)(ulonglong)uVar14;
          bVar17 = (*pauVar3)[(longlong)puVar12];
        }
        uVar5 = param_4[2];
        uVar7 = param_4[1];
        local_40 = (undefined1)*param_4;
        uStack_3f = (undefined7)((ulonglong)*param_4 >> 8);
        uStack_38 = (undefined1)uVar7;
        bVar11 = bVar11 >> 1;
        (*pauVar3)[(longlong)puVar12] = bVar11;
        pauVar3[1][(ulonglong)(puVar12 + -2) & uVar4] = bVar11;
        lVar13 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar17 & 1);
        param_2[3] = lVar13;
        pauVar3[(longlong)puVar12 * -2 + -2][0] = param_3;
        *(ulonglong *)(pauVar3[(longlong)puVar12 * -2 + -2] + 1) = CONCAT17(local_40,uStack_47);
        *(ulonglong *)((longlong)(pauVar3[(longlong)puVar12 * -2 + -2] + 1) + 8) =
             CONCAT17(uStack_38,uStack_3f);
        *(undefined8 *)pauVar3[(longlong)puVar12 * -2 + -1] = uVar7;
        *(undefined8 *)(pauVar3[(longlong)puVar12 * -2 + -1] + 8) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0x14) = 0xff;
        return param_1;
      }
      bVar8 = true;
    }
    else {
      uVar15 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
      if (uVar15 != 0) {
        uVar14 = 0;
        for (uVar9 = (uint)uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        puVar12 = (undefined8 *)(uVar14 + uVar10 & uVar4);
        goto LAB_00483078;
      }
      bVar8 = false;
      puVar12 = (undefined8 *)0x0;
    }
    uVar10 = uVar10 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  } while( true );
}


