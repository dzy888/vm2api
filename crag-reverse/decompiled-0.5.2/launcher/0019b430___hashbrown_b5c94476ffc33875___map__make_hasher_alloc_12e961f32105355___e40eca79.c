// 0019b430 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  auVar27 = _DAT_00113ec0;
  lVar16 = param_1[3];
  uVar17 = lVar16 + 1;
  if (uVar17 == 0) {
    uVar17 = (*(code *)PTR_capacity_overflow_0021a338)();
    return uVar17;
  }
  uVar4 = param_1[1];
  uVar13 = uVar4 + 1;
  uVar23 = (uVar13 & 0xfffffffffffffff8) - (uVar13 >> 3);
  if (uVar4 < 8) {
    uVar23 = uVar4;
  }
  if (uVar23 >> 1 < uVar17) {
    uVar13 = uVar23 + 1;
    if (uVar23 + 1 <= uVar17) {
      uVar13 = uVar17;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x30,uVar13);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    pauVar25 = (undefined1 (*) [16])*param_1;
    lVar16 = param_1[3];
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      auVar27 = *pauVar25;
      uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
      lVar24 = 0;
      do {
        if ((short)uVar15 == 0) {
          do {
            auVar27 = pauVar25[1];
            pauVar25 = pauVar25 + 1;
            uVar15 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar24 = lVar24 + 0x10;
          } while (uVar15 == 0);
        }
        uVar22 = 0;
        for (uVar14 = uVar15; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar22 = uVar22 + 1;
        }
        uVar17 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar22 + lVar24) * -0x30 + -0x30);
        uVar13 = uVar17 & local_48;
        auVar27 = *(undefined1 (*) [16])(*local_50 + uVar13);
        uVar7 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
        uVar14 = (uint)uVar7;
        if (uVar7 == 0) {
          lVar19 = 0x10;
          do {
            uVar13 = uVar13 + lVar19 & local_48;
            auVar27 = *(undefined1 (*) [16])(*local_50 + uVar13);
            lVar19 = lVar19 + 0x10;
            uVar14 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
          } while (uVar14 == 0);
        }
        uVar12 = 0;
        for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar13 = uVar12 + uVar13 & local_48;
        if (-1 < (char)(*local_50)[uVar13]) {
          auVar27 = *local_50;
          uVar14 = 0;
          for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar27[0xf] >> 7) << 0xf); (uVar12 & 1) == 0;
              uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar13 = (ulonglong)uVar14;
        }
        uVar15 = uVar15 - 1 & uVar15;
        local_38 = (ulonglong)uVar15;
        lVar16 = lVar16 + -1;
        bVar10 = (byte)(uVar17 >> 0x39);
        (*local_50)[uVar13] = bVar10;
        local_50[1][uVar13 - 0x10 & local_48] = bVar10;
        lVar19 = *param_1;
        lVar18 = ~((ulonglong)uVar22 + lVar24) * 0x30;
        uVar13 = ~uVar13;
        auVar27 = *(undefined1 (*) [16])(lVar19 + lVar18);
        puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar18);
        uVar6 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar18);
        uVar9 = puVar2[1];
        *(undefined8 *)local_50[uVar13 * 3 + 2] = *puVar2;
        *(undefined8 *)(local_50[uVar13 * 3 + 2] + 8) = uVar9;
        *(undefined8 *)local_50[uVar13 * 3 + 1] = uVar6;
        *(undefined8 *)(local_50[uVar13 * 3 + 1] + 8) = uVar8;
        local_50[uVar13 * 3] = auVar27;
      } while (lVar16 != 0);
      lVar16 = param_1[3];
    }
    *param_1 = (longlong)local_50;
    lVar24 = param_1[1];
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar16;
    if (lVar24 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar24 * 0x31 == -0x41) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00219c40)(local_38,0x10);
    return 0xffffffffffffffff;
  }
  if (uVar13 == 0) {
    uVar17 = 0;
    goto LAB_0019b938;
  }
  lVar16 = *param_1;
  uVar17 = ((uVar13 >> 4) + 1) - (ulonglong)((uVar13 & 0xf) == 0);
  if (uVar17 == 1) {
    lVar24 = 0;
LAB_0019b6e4:
    pcVar1 = (char *)(lVar16 + lVar24);
    auVar27[0] = -(*pcVar1 < '\0');
    auVar27[1] = -(pcVar1[1] < '\0');
    auVar27[2] = -(pcVar1[2] < '\0');
    auVar27[3] = -(pcVar1[3] < '\0');
    auVar27[4] = -(pcVar1[4] < '\0');
    auVar27[5] = -(pcVar1[5] < '\0');
    auVar27[6] = -(pcVar1[6] < '\0');
    auVar27[7] = -(pcVar1[7] < '\0');
    auVar27[8] = -(pcVar1[8] < '\0');
    auVar27[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
    auVar27[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
    auVar27[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
    auVar27[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
    auVar27[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
    auVar27[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
    auVar27[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
    *(undefined1 (*) [16])(lVar16 + lVar24) = auVar27 | _DAT_00113ec0;
  }
  else {
    uVar23 = uVar17 & 0x1ffffffffffffffe;
    lVar24 = 0;
    do {
      pcVar1 = (char *)(lVar16 + lVar24);
      auVar28[0] = -(*pcVar1 < '\0');
      auVar28[1] = -(pcVar1[1] < '\0');
      auVar28[2] = -(pcVar1[2] < '\0');
      auVar28[3] = -(pcVar1[3] < '\0');
      auVar28[4] = -(pcVar1[4] < '\0');
      auVar28[5] = -(pcVar1[5] < '\0');
      auVar28[6] = -(pcVar1[6] < '\0');
      auVar28[7] = -(pcVar1[7] < '\0');
      auVar28[8] = -(pcVar1[8] < '\0');
      auVar28[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar28[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar28[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar28[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar28[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar28[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar28[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar16 + lVar24) = auVar28 | auVar27;
      pcVar1 = (char *)(lVar16 + 0x10 + lVar24);
      auVar29[0] = -(*pcVar1 < '\0');
      auVar29[1] = -(pcVar1[1] < '\0');
      auVar29[2] = -(pcVar1[2] < '\0');
      auVar29[3] = -(pcVar1[3] < '\0');
      auVar29[4] = -(pcVar1[4] < '\0');
      auVar29[5] = -(pcVar1[5] < '\0');
      auVar29[6] = -(pcVar1[6] < '\0');
      auVar29[7] = -(pcVar1[7] < '\0');
      auVar29[8] = -(pcVar1[8] < '\0');
      auVar29[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar29[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar29[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar29[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar29[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar29[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar29[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar16 + 0x10 + lVar24) = auVar29 | auVar27;
      lVar24 = lVar24 + 0x20;
      uVar23 = uVar23 - 2;
    } while (uVar23 != 0);
    if ((uVar17 & 1) != 0) goto LAB_0019b6e4;
  }
  if (0xf < uVar13) {
    uVar13 = 0x10;
  }
  (*(code *)PTR_memmove_00219fb0)(lVar24,uVar13);
  uVar17 = 0;
  do {
    lVar16 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar16 + uVar17))) {
      pauVar25 = (undefined1 (*) [16])(~uVar17 * 0x30 + lVar16);
      while( true ) {
        uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar16 + uVar17 * -0x30 + -0x30);
        pauVar5 = (undefined1 (*) [16])*param_1;
        uVar13 = param_1[1];
        uVar20 = uVar13 & uVar11;
        auVar27 = *(undefined1 (*) [16])(*pauVar5 + uVar20);
        uVar7 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
        uVar15 = (uint)uVar7;
        uVar23 = uVar20;
        if (uVar7 == 0) {
          lVar16 = 0x10;
          do {
            uVar23 = uVar23 + lVar16 & uVar13;
            auVar27 = *(undefined1 (*) [16])(*pauVar5 + uVar23);
            lVar16 = lVar16 + 0x10;
            uVar15 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
          } while (uVar15 == 0);
        }
        uVar22 = 0;
        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar22 = uVar22 + 1;
        }
        uVar23 = uVar22 + uVar23 & uVar13;
        if (-1 < (char)(*pauVar5)[uVar23]) {
          auVar27 = *pauVar5;
          uVar15 = 0;
          for (uVar22 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar27[0xf] >> 7) << 0xf); (uVar22 & 1) == 0;
              uVar22 = uVar22 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          uVar23 = (ulonglong)uVar15;
        }
        bVar10 = (byte)(uVar11 >> 0x38);
        if (((uVar23 - uVar20 ^ uVar17 - uVar20) & uVar13) < 0x10) {
          bVar10 = bVar10 >> 1;
          (*pauVar5)[uVar17] = bVar10;
          *(byte *)(*param_1 + 0x10 + (uVar13 & uVar17 - 0x10)) = bVar10;
          goto LAB_0019b8a7;
        }
        pauVar21 = pauVar5 + ~uVar23 * 3;
        cVar3 = (*pauVar5)[uVar23];
        bVar10 = bVar10 >> 1;
        (*pauVar5)[uVar23] = bVar10;
        *(byte *)(*param_1 + 0x10 + (uVar23 - 0x10 & uVar13)) = bVar10;
        if (cVar3 == -1) break;
        uVar6 = *(undefined8 *)*pauVar25;
        *(undefined8 *)*pauVar25 = *(undefined8 *)*pauVar21;
        *(undefined8 *)*pauVar21 = uVar6;
        uVar6 = *(undefined8 *)(*pauVar25 + 8);
        *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)(*pauVar21 + 8);
        *(undefined8 *)(*pauVar21 + 8) = uVar6;
        uVar6 = *(undefined8 *)pauVar25[1];
        *(undefined8 *)pauVar25[1] = *(undefined8 *)pauVar21[1];
        *(undefined8 *)pauVar21[1] = uVar6;
        uVar6 = *(undefined8 *)(pauVar25[1] + 8);
        *(undefined8 *)(pauVar25[1] + 8) = *(undefined8 *)(pauVar21[1] + 8);
        *(undefined8 *)(pauVar21[1] + 8) = uVar6;
        uVar6 = *(undefined8 *)pauVar25[2];
        *(undefined8 *)pauVar25[2] = *(undefined8 *)pauVar21[2];
        *(undefined8 *)pauVar21[2] = uVar6;
        uVar6 = *(undefined8 *)(pauVar25[2] + 8);
        *(undefined8 *)(pauVar25[2] + 8) = *(undefined8 *)(pauVar21[2] + 8);
        *(undefined8 *)(pauVar21[2] + 8) = uVar6;
        lVar16 = *param_1;
      }
      uVar13 = param_1[1];
      *(undefined1 *)(*param_1 + uVar17) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar17 - 0x10 & uVar13)) = 0xff;
      auVar27 = *pauVar25;
      uVar6 = *(undefined8 *)pauVar25[1];
      uVar8 = *(undefined8 *)(pauVar25[1] + 8);
      uVar9 = *(undefined8 *)(pauVar25[2] + 8);
      *(undefined8 *)pauVar21[2] = *(undefined8 *)pauVar25[2];
      *(undefined8 *)(pauVar21[2] + 8) = uVar9;
      *(undefined8 *)pauVar21[1] = uVar6;
      *(undefined8 *)(pauVar21[1] + 8) = uVar8;
      *pauVar21 = auVar27;
    }
LAB_0019b8a7:
    bVar26 = uVar17 != uVar4;
    uVar17 = uVar17 + 1;
  } while (bVar26);
  uVar13 = param_1[1];
  lVar16 = param_1[3];
  uVar17 = (uVar13 + 1 & 0xfffffffffffffff8) - (uVar13 + 1 >> 3);
  if (uVar13 < 8) {
    uVar17 = uVar13;
  }
LAB_0019b938:
  param_1[2] = uVar17 - lVar16;
  return 0xffffffffffffffff;
}


