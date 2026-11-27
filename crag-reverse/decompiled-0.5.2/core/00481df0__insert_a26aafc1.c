// 00481df0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined *puVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  byte bVar22;
  uint uVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong lVar27;
  undefined1 auVar28 [16];
  ulonglong local_d0;
  
  uVar19 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar15 = PTR_bcmp_00799020;
  pauVar3 = (undefined1 (*) [16])*param_2;
  uVar4 = param_2[1];
  bVar22 = (byte)(uVar19 >> 0x38);
  bVar24 = bVar22 >> 1;
  auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
  auVar25 = pshuflw(auVar25,auVar25,0);
  lVar5 = param_3[2];
  bVar14 = false;
  lVar20 = 0;
  do {
    uVar19 = uVar19 & uVar4;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar19);
    auVar26[0] = -(auVar2[0] == auVar25[0]);
    auVar26[1] = -(auVar2[1] == auVar25[1]);
    auVar26[2] = -(auVar2[2] == auVar25[2]);
    auVar26[3] = -(auVar2[3] == auVar25[3]);
    auVar26[4] = -(auVar2[4] == auVar25[4]);
    auVar26[5] = -(auVar2[5] == auVar25[5]);
    auVar26[6] = -(auVar2[6] == auVar25[6]);
    auVar26[7] = -(auVar2[7] == auVar25[7]);
    auVar26[8] = -(auVar2[8] == auVar25[0]);
    auVar26[9] = -(auVar2[9] == auVar25[1]);
    auVar26[10] = -(auVar2[10] == auVar25[2]);
    auVar26[0xb] = -(auVar2[0xb] == auVar25[3]);
    auVar26[0xc] = -(auVar2[0xc] == auVar25[4]);
    auVar26[0xd] = -(auVar2[0xd] == auVar25[5]);
    bVar24 = auVar2[0xf];
    auVar26[0xe] = -(auVar2[0xe] == auVar25[6]);
    auVar26[0xf] = -(bVar24 == auVar25[7]);
    uVar16 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
    uVar23 = (uint)uVar16;
    if (uVar16 != 0) {
      do {
        uVar18 = 0;
        for (uVar6 = uVar23; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        lVar21 = (uVar18 + uVar19 & uVar4) * -0x38;
        if ((lVar5 == *(longlong *)((longlong)pauVar3 + lVar21 + -0x28)) &&
           (iVar17 = (*(code *)puVar15)(), iVar17 == 0)) {
          uVar7 = *(undefined8 *)((longlong)pauVar3 + lVar21 + -0x20);
          uVar8 = *(undefined8 *)((longlong)pauVar3 + lVar21 + -0x18);
          uVar9 = *(undefined8 *)((longlong)pauVar3 + lVar21 + -8);
          param_1[2] = *(undefined8 *)((longlong)pauVar3 + lVar21 + -0x10);
          param_1[3] = uVar9;
          *param_1 = uVar7;
          param_1[1] = uVar8;
          lVar5 = *param_4;
          lVar20 = param_4[1];
          lVar10 = param_4[3];
          *(longlong *)((longlong)pauVar3 + lVar21 + -0x10) = param_4[2];
          *(longlong *)((longlong)pauVar3 + lVar21 + -8) = lVar10;
          *(longlong *)((longlong)pauVar3 + lVar21 + -0x20) = lVar5;
          *(longlong *)((longlong)pauVar3 + lVar21 + -0x18) = lVar20;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)();
          return param_1;
        }
        uVar16 = (ushort)(uVar23 - 1) & (ushort)uVar23;
        uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar16);
      } while (uVar16 != 0);
    }
    if (bVar14) {
LAB_00481f5d:
      auVar28[0] = -(auVar2[0] == -1);
      auVar28[1] = -(auVar2[1] == -1);
      auVar28[2] = -(auVar2[2] == -1);
      auVar28[3] = -(auVar2[3] == -1);
      auVar28[4] = -(auVar2[4] == -1);
      auVar28[5] = -(auVar2[5] == -1);
      auVar28[6] = -(auVar2[6] == -1);
      auVar28[7] = -(auVar2[7] == 0xff);
      auVar28[8] = -(auVar2[8] == -1);
      auVar28[9] = -(auVar2[9] == -1);
      auVar28[10] = -(auVar2[10] == -1);
      auVar28[0xb] = -(auVar2[0xb] == -1);
      auVar28[0xc] = -(auVar2[0xc] == -1);
      auVar28[0xd] = -(auVar2[0xd] == -1);
      auVar28[0xe] = -(auVar2[0xe] == -1);
      auVar28[0xf] = -(bVar24 == 0xff);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') {
        bVar24 = (*pauVar3)[local_d0];
        if (-1 < (char)bVar24) {
          auVar25 = *pauVar3;
          uVar23 = 0;
          for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x80000000) {
            uVar23 = uVar23 + 1;
          }
          local_d0 = (ulonglong)uVar23;
          bVar24 = (*pauVar3)[local_d0];
        }
        lVar5 = param_3[2];
        lVar20 = *param_3;
        lVar21 = param_3[1];
        lVar10 = *param_4;
        lVar11 = param_4[1];
        lVar12 = param_4[2];
        lVar13 = param_4[3];
        bVar22 = bVar22 >> 1;
        (*pauVar3)[local_d0] = bVar22;
        pauVar3[1][local_d0 - 0x10 & uVar4] = bVar22;
        lVar27 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar24 & 1);
        param_2[3] = lVar27;
        lVar27 = local_d0 * -0x38;
        *(longlong *)((longlong)pauVar3 + lVar27 + -8) = lVar13;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar27 + -0x18);
        *plVar1 = lVar11;
        plVar1[1] = lVar12;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar27 + -0x28);
        *plVar1 = lVar5;
        plVar1[1] = lVar10;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar27 + -0x38);
        *plVar1 = lVar20;
        plVar1[1] = lVar21;
        *(undefined1 *)param_1 = 0xff;
        return param_1;
      }
      bVar14 = true;
    }
    else {
      uVar16 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar24 >> 7) << 0xf;
      if (uVar16 != 0) {
        uVar23 = 0;
        for (uVar18 = (uint)uVar16; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        local_d0 = uVar23 + uVar19 & uVar4;
        goto LAB_00481f5d;
      }
      bVar14 = false;
    }
    uVar19 = uVar19 + lVar20 + 0x10;
    lVar20 = lVar20 + 0x10;
  } while( true );
}


