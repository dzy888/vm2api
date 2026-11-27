// 00483da0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<u64,
   tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>>,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined1  [16] __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_38;
  undefined8 local_30;
  
  plVar10 = &local_38;
  puVar11 = param_1 + 4;
  local_38 = param_2;
  local_30 = param_3;
  uVar5 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
          ::hash_one::<&u64>();
  if (param_1[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              ();
    plVar10 = puVar11;
  }
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar8 = param_1[1];
  bVar7 = (byte)(uVar5 >> 0x38);
  bVar16 = bVar7 >> 1;
  auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar17 = pshuflw(auVar17,auVar17,0);
  bVar4 = false;
  lVar12 = 0;
  do {
    uVar5 = uVar5 & uVar8;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar5);
    auVar19[0] = -(auVar1[0] == auVar17[0]);
    auVar19[1] = -(auVar1[1] == auVar17[1]);
    auVar19[2] = -(auVar1[2] == auVar17[2]);
    auVar19[3] = -(auVar1[3] == auVar17[3]);
    auVar19[4] = -(auVar1[4] == auVar17[4]);
    auVar19[5] = -(auVar1[5] == auVar17[5]);
    auVar19[6] = -(auVar1[6] == auVar17[6]);
    auVar19[7] = -(auVar1[7] == auVar17[7]);
    auVar19[8] = -(auVar1[8] == auVar17[0]);
    auVar19[9] = -(auVar1[9] == auVar17[1]);
    auVar19[10] = -(auVar1[10] == auVar17[2]);
    auVar19[0xb] = -(auVar1[0xb] == auVar17[3]);
    auVar19[0xc] = -(auVar1[0xc] == auVar17[4]);
    auVar19[0xd] = -(auVar1[0xd] == auVar17[5]);
    bVar16 = auVar1[0xf];
    auVar19[0xe] = -(auVar1[0xe] == auVar17[6]);
    auVar19[0xf] = -(bVar16 == auVar17[7]);
    uVar14 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
    uVar13 = (uint)uVar14;
    while (uVar14 != 0) {
      uVar9 = 0;
      for (uVar3 = uVar13; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar15 = uVar9 + uVar5 & uVar8;
      if (param_2 == *(longlong *)pauVar2[-1 - uVar15]) {
        uVar8 = *(ulonglong *)(pauVar2[-1 - uVar15] + 8);
        *(undefined8 *)(pauVar2[-1 - uVar15] + 8) = param_3;
        uVar6 = 1;
        goto LAB_00483ef5;
      }
      uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
    }
    if (bVar4) goto LAB_00483e68;
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
             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar16 >> 7) << 0xf;
    if (uVar14 == 0) {
      bVar4 = false;
      plVar10 = (undefined8 *)0x0;
    }
    else {
      uVar13 = 0;
      for (uVar9 = (uint)uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar13 = uVar13 + 1;
      }
      plVar10 = (longlong *)(uVar13 + uVar5 & uVar8);
LAB_00483e68:
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == 0xff);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(bVar16 == 0xff);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') {
        bVar16 = (*pauVar2)[(longlong)plVar10];
        if (-1 < (char)bVar16) {
          auVar17 = *pauVar2;
          uVar13 = 0;
          for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar17[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
              uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          plVar10 = (longlong *)(ulonglong)uVar13;
          bVar16 = (*pauVar2)[(longlong)plVar10];
        }
        bVar7 = bVar7 >> 1;
        (*pauVar2)[(longlong)plVar10] = bVar7;
        pauVar2[1][(ulonglong)(plVar10 + -2) & uVar8] = bVar7;
        lVar12 = param_1[3] - DAT_001827f8;
        param_1[2] = param_1[2] - (ulonglong)(bVar16 & 1);
        param_1[3] = lVar12;
        *(longlong *)pauVar2[-1 - (longlong)plVar10] = param_2;
        *(undefined8 *)(pauVar2[-1 - (longlong)plVar10] + 8) = param_3;
        uVar6 = 0;
LAB_00483ef5:
        auVar17._8_8_ = uVar8;
        auVar17._0_8_ = uVar6;
        return auVar17;
      }
      bVar4 = true;
    }
    uVar5 = uVar5 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
}


