// 0046bcb0 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  uint uVar25;
  undefined1 (*pauVar26) [16];
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong *plVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  auVar30 = _DAT_00183f90;
  lVar19 = param_1[3];
  uVar20 = lVar19 + 1;
  if (uVar20 == 0) {
    uVar20 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar20;
  }
  uVar10 = param_1[1];
  uVar17 = uVar10 + 1;
  uVar13 = (uVar17 & 0xfffffffffffffff8) - (uVar17 >> 3);
  if (uVar10 < 8) {
    uVar13 = uVar10;
  }
  if (uVar13 >> 1 < uVar20) {
    uVar17 = uVar13 + 1;
    if (uVar13 + 1 <= uVar20) {
      uVar17 = uVar20;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x38,uVar17);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar33 = param_1 + 4;
    uVar34 = 0x38;
    uVar35 = 0x10;
    lVar19 = param_1[3];
    pauVar28 = local_50;
    uVar20 = local_48;
    lVar14 = local_40;
    uVar17 = local_38;
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      pauVar26 = (undefined1 (*) [16])*param_1;
      auVar30 = *pauVar26;
      uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
      lVar27 = 0;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar30 = pauVar26[1];
            pauVar26 = pauVar26 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar27 = lVar27 + 0x10;
          } while (uVar18 == 0);
        }
        uVar25 = 0;
        for (uVar15 = uVar18; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar25 + lVar27) * -0x38 + -0x38);
        uVar13 = uVar10 & local_48;
        auVar30 = *(undefined1 (*) [16])(*local_50 + uVar13);
        uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
        uVar15 = (uint)uVar5;
        if (uVar5 == 0) {
          lVar22 = 0x10;
          do {
            uVar13 = uVar13 + lVar22 & local_48;
            auVar30 = *(undefined1 (*) [16])(*local_50 + uVar13);
            lVar22 = lVar22 + 0x10;
            uVar15 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
          } while (uVar15 == 0);
        }
        uVar12 = 0;
        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar13 = uVar12 + uVar13 & local_48;
        if (-1 < (char)(*local_50)[uVar13]) {
          auVar30 = *local_50;
          uVar15 = 0;
          for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          uVar13 = (ulonglong)uVar15;
        }
        uVar18 = uVar18 - 1 & uVar18;
        local_38 = (ulonglong)uVar18;
        lVar19 = lVar19 + -1;
        bVar9 = (byte)(uVar10 >> 0x39);
        (*local_50)[uVar13] = bVar9;
        local_50[1][uVar13 - 0x10 & local_48] = bVar9;
        lVar22 = *param_1;
        lVar21 = ~((ulonglong)uVar25 + lVar27) * 0x38;
        lVar16 = ~uVar13 * 0x38;
        *(undefined8 *)((longlong)local_50 + lVar16 + 0x30) =
             *(undefined8 *)(lVar22 + 0x30 + lVar21);
        auVar30 = *(undefined1 (*) [16])(lVar22 + lVar21);
        puVar2 = (undefined8 *)(lVar22 + 0x10 + lVar21);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        puVar2 = (undefined8 *)(lVar22 + 0x20 + lVar21);
        uVar8 = puVar2[1];
        puVar3 = (undefined8 *)((longlong)local_50 + lVar16 + 0x20);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar2 = (undefined8 *)((longlong)local_50 + lVar16 + 0x10);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        *(undefined1 (*) [16])((longlong)local_50 + lVar16) = auVar30;
      } while (lVar19 != 0);
      lVar19 = param_1[3];
    }
    lVar27 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar19;
    param_1[3] = lVar19;
    if (lVar27 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar27 + (lVar27 * 0x38 + 0x47U & 0xfffffffffffffff0) == -0x11) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,param_1,local_48,plVar33,uVar34,uVar35,pauVar28,uVar20,lVar14,uVar17);
    return 0xffffffffffffffff;
  }
  if (uVar17 == 0) {
    uVar20 = 0;
    goto LAB_0046c1a8;
  }
  lVar19 = *param_1;
  uVar20 = ((uVar17 >> 4) + 1) - (ulonglong)((uVar17 & 0xf) == 0);
  if (uVar20 == 1) {
    lVar14 = 0;
LAB_0046bf54:
    pcVar1 = (char *)(lVar19 + lVar14);
    auVar30[0] = -(*pcVar1 < '\0');
    auVar30[1] = -(pcVar1[1] < '\0');
    auVar30[2] = -(pcVar1[2] < '\0');
    auVar30[3] = -(pcVar1[3] < '\0');
    auVar30[4] = -(pcVar1[4] < '\0');
    auVar30[5] = -(pcVar1[5] < '\0');
    auVar30[6] = -(pcVar1[6] < '\0');
    auVar30[7] = -(pcVar1[7] < '\0');
    auVar30[8] = -(pcVar1[8] < '\0');
    auVar30[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
    auVar30[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
    auVar30[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
    auVar30[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
    auVar30[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
    auVar30[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
    auVar30[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
    *(undefined1 (*) [16])(lVar19 + lVar14) = auVar30 | _DAT_00183f90;
  }
  else {
    uVar13 = uVar20 & 0x1ffffffffffffffe;
    lVar14 = 0;
    do {
      pcVar1 = (char *)(lVar19 + lVar14);
      auVar31[0] = -(*pcVar1 < '\0');
      auVar31[1] = -(pcVar1[1] < '\0');
      auVar31[2] = -(pcVar1[2] < '\0');
      auVar31[3] = -(pcVar1[3] < '\0');
      auVar31[4] = -(pcVar1[4] < '\0');
      auVar31[5] = -(pcVar1[5] < '\0');
      auVar31[6] = -(pcVar1[6] < '\0');
      auVar31[7] = -(pcVar1[7] < '\0');
      auVar31[8] = -(pcVar1[8] < '\0');
      auVar31[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar31[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar31[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar31[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar31[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar31[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar31[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar19 + lVar14) = auVar31 | auVar30;
      pcVar1 = (char *)(lVar19 + 0x10 + lVar14);
      auVar32[0] = -(*pcVar1 < '\0');
      auVar32[1] = -(pcVar1[1] < '\0');
      auVar32[2] = -(pcVar1[2] < '\0');
      auVar32[3] = -(pcVar1[3] < '\0');
      auVar32[4] = -(pcVar1[4] < '\0');
      auVar32[5] = -(pcVar1[5] < '\0');
      auVar32[6] = -(pcVar1[6] < '\0');
      auVar32[7] = -(pcVar1[7] < '\0');
      auVar32[8] = -(pcVar1[8] < '\0');
      auVar32[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar32[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar32[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar32[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar32[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar32[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar32[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar19 + 0x10 + lVar14) = auVar32 | auVar30;
      lVar14 = lVar14 + 0x20;
      uVar13 = uVar13 - 2;
    } while (uVar13 != 0);
    if ((uVar20 & 1) != 0) goto LAB_0046bf54;
  }
  if (0xf < uVar17) {
    uVar17 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar14,uVar17);
  uVar20 = 0;
  do {
    lVar19 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar19 + uVar20))) {
      pauVar28 = (undefined1 (*) [16])(~uVar20 * 0x38 + lVar19);
      while( true ) {
        uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar19 + uVar20 * -0x38 + -0x38);
        pauVar26 = (undefined1 (*) [16])*param_1;
        uVar17 = param_1[1];
        uVar23 = uVar17 & uVar11;
        auVar30 = *(undefined1 (*) [16])(*pauVar26 + uVar23);
        uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
        uVar18 = (uint)uVar5;
        uVar13 = uVar23;
        if (uVar5 == 0) {
          lVar19 = 0x10;
          do {
            uVar13 = uVar13 + lVar19 & uVar17;
            auVar30 = *(undefined1 (*) [16])(*pauVar26 + uVar13);
            lVar19 = lVar19 + 0x10;
            uVar18 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
          } while (uVar18 == 0);
        }
        uVar25 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar13 = uVar25 + uVar13 & uVar17;
        if (-1 < (char)(*pauVar26)[uVar13]) {
          auVar30 = *pauVar26;
          uVar18 = 0;
          for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar13 = (ulonglong)uVar18;
        }
        bVar9 = (byte)(uVar11 >> 0x38);
        if (((uVar13 - uVar23 ^ uVar20 - uVar23) & uVar17) < 0x10) {
          bVar9 = bVar9 >> 1;
          (*pauVar26)[uVar20] = bVar9;
          *(byte *)(*param_1 + 0x10 + (uVar17 & uVar20 - 0x10)) = bVar9;
          goto LAB_0046c117;
        }
        pauVar24 = (undefined1 (*) [16])(~uVar13 * 0x38 + (longlong)pauVar26);
        cVar4 = (*pauVar26)[uVar13];
        bVar9 = bVar9 >> 1;
        (*pauVar26)[uVar13] = bVar9;
        *(byte *)(*param_1 + 0x10 + (uVar13 - 0x10 & uVar17)) = bVar9;
        if (cVar4 == -1) break;
        uVar34 = *(undefined8 *)*pauVar28;
        *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar24;
        *(undefined8 *)*pauVar24 = uVar34;
        uVar34 = *(undefined8 *)(*pauVar28 + 8);
        *(undefined8 *)(*pauVar28 + 8) = *(undefined8 *)(*pauVar24 + 8);
        *(undefined8 *)(*pauVar24 + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar28[1];
        *(undefined8 *)pauVar28[1] = *(undefined8 *)pauVar24[1];
        *(undefined8 *)pauVar24[1] = uVar34;
        uVar34 = *(undefined8 *)(pauVar28[1] + 8);
        *(undefined8 *)(pauVar28[1] + 8) = *(undefined8 *)(pauVar24[1] + 8);
        *(undefined8 *)(pauVar24[1] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar28[2];
        *(undefined8 *)pauVar28[2] = *(undefined8 *)pauVar24[2];
        *(undefined8 *)pauVar24[2] = uVar34;
        uVar34 = *(undefined8 *)(pauVar28[2] + 8);
        *(undefined8 *)(pauVar28[2] + 8) = *(undefined8 *)(pauVar24[2] + 8);
        *(undefined8 *)(pauVar24[2] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar28[3];
        *(undefined8 *)pauVar28[3] = *(undefined8 *)pauVar24[3];
        *(undefined8 *)pauVar24[3] = uVar34;
        lVar19 = *param_1;
      }
      uVar17 = param_1[1];
      *(undefined1 *)(*param_1 + uVar20) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar20 - 0x10 & uVar17)) = 0xff;
      *(undefined8 *)pauVar24[3] = *(undefined8 *)pauVar28[3];
      auVar30 = *pauVar28;
      uVar34 = *(undefined8 *)pauVar28[1];
      uVar35 = *(undefined8 *)(pauVar28[1] + 8);
      uVar6 = *(undefined8 *)(pauVar28[2] + 8);
      *(undefined8 *)pauVar24[2] = *(undefined8 *)pauVar28[2];
      *(undefined8 *)(pauVar24[2] + 8) = uVar6;
      *(undefined8 *)pauVar24[1] = uVar34;
      *(undefined8 *)(pauVar24[1] + 8) = uVar35;
      *pauVar24 = auVar30;
    }
LAB_0046c117:
    bVar29 = uVar20 != uVar10;
    uVar20 = uVar20 + 1;
  } while (bVar29);
  uVar17 = param_1[1];
  lVar19 = param_1[3];
  uVar20 = (uVar17 + 1 & 0xfffffffffffffff8) - (uVar17 + 1 >> 3);
  if (uVar17 < 8) {
    uVar20 = uVar17;
  }
LAB_0046c1a8:
  param_1[2] = uVar20 - lVar19;
  return 0xffffffffffffffff;
}


