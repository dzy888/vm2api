// 0019b9f0 <hashbrown[b5c94476ffc33875]::map::make_hasher<&str,(),std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(&str,
   ())>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<&str, (),
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(&str,())>>::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<&str,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (void)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  ushort uVar6;
  undefined8 uVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 in_RSI;
  undefined8 *in_RDI;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  
  auVar24 = _DAT_00113ec0;
  lVar3 = in_RDI[3];
  uVar9 = lVar3 + 1;
  if (uVar9 == 0) {
    uVar9 = (*(code *)PTR_capacity_overflow_0021a338)();
    return uVar9;
  }
  uVar4 = in_RDI[1];
  uVar12 = uVar4 + 1;
  uVar19 = (uVar12 & 0xfffffffffffffff8) - (uVar12 >> 3);
  if (uVar4 < 8) {
    uVar19 = uVar4;
  }
  if (uVar19 >> 1 < uVar9) {
    uVar12 = uVar19 + 1;
    if (uVar19 + 1 <= uVar9) {
      uVar12 = uVar9;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x10,uVar12);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    pauVar5 = (undefined1 (*) [16])*in_RDI;
    if (lVar3 != 0) {
      auVar24 = *pauVar5;
      uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
      lVar21 = 0;
      pauVar20 = pauVar5;
      lVar22 = lVar3;
      do {
        if ((short)uVar17 == 0) {
          do {
            auVar24 = pauVar20[1];
            pauVar20 = pauVar20 + 1;
            uVar17 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar21 = lVar21 + 0x10;
          } while (uVar17 == 0);
        }
        uVar16 = 0;
        for (uVar15 = uVar17; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&&str>(in_RSI,pauVar5 + (-1 - ((ulonglong)uVar16 + lVar21)));
        uVar12 = uVar9 & local_48;
        auVar24 = *(undefined1 (*) [16])(*local_50 + uVar12);
        uVar6 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
        uVar15 = (uint)uVar6;
        if (uVar6 == 0) {
          lVar18 = 0x10;
          do {
            uVar12 = uVar12 + lVar18 & local_48;
            auVar24 = *(undefined1 (*) [16])(*local_50 + uVar12);
            lVar18 = lVar18 + 0x10;
            uVar15 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
          } while (uVar15 == 0);
        }
        uVar11 = 0;
        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = uVar11 + uVar12 & local_48;
        if (-1 < (char)(*local_50)[uVar12]) {
          auVar24 = *local_50;
          uVar15 = 0;
          for (uVar11 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          uVar12 = (ulonglong)uVar15;
        }
        uVar17 = uVar17 - 1 & uVar17;
        lVar22 = lVar22 + -1;
        bVar8 = (byte)(uVar9 >> 0x39);
        (*local_50)[uVar12] = bVar8;
        local_50[1][uVar12 - 0x10 & local_48] = bVar8;
        local_50[~uVar12] = pauVar5[~((ulonglong)uVar16 + lVar21)];
      } while (lVar22 != 0);
    }
    *in_RDI = local_50;
    in_RDI[1] = local_48;
    in_RDI[2] = local_40 - lVar3;
    if (uVar4 == 0) {
      return 0xffffffffffffffff;
    }
    if (uVar4 * 0x11 == -0x21) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00219c40)(local_40 - lVar3,0x10);
    return 0xffffffffffffffff;
  }
  if (uVar12 == 0) {
    uVar19 = 0;
    goto LAB_0019be40;
  }
  pauVar5 = (undefined1 (*) [16])*in_RDI;
  uVar9 = ((uVar12 >> 4) + 1) - (ulonglong)((uVar12 & 0xf) == 0);
  if (uVar9 == 1) {
    lVar22 = 0;
LAB_0019bc9a:
    pcVar1 = *pauVar5 + lVar22;
    auVar24[0] = -(*pcVar1 < '\0');
    auVar24[1] = -(pcVar1[1] < '\0');
    auVar24[2] = -(pcVar1[2] < '\0');
    auVar24[3] = -(pcVar1[3] < '\0');
    auVar24[4] = -(pcVar1[4] < '\0');
    auVar24[5] = -(pcVar1[5] < '\0');
    auVar24[6] = -(pcVar1[6] < '\0');
    auVar24[7] = -(pcVar1[7] < '\0');
    auVar24[8] = -(pcVar1[8] < '\0');
    auVar24[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
    auVar24[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
    auVar24[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
    auVar24[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
    auVar24[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
    auVar24[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
    auVar24[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
    *(undefined1 (*) [16])(*pauVar5 + lVar22) = auVar24 | _DAT_00113ec0;
  }
  else {
    uVar10 = uVar9 & 0x1ffffffffffffffe;
    lVar22 = 0;
    do {
      pcVar1 = *pauVar5 + lVar22;
      auVar25[0] = -(*pcVar1 < '\0');
      auVar25[1] = -(pcVar1[1] < '\0');
      auVar25[2] = -(pcVar1[2] < '\0');
      auVar25[3] = -(pcVar1[3] < '\0');
      auVar25[4] = -(pcVar1[4] < '\0');
      auVar25[5] = -(pcVar1[5] < '\0');
      auVar25[6] = -(pcVar1[6] < '\0');
      auVar25[7] = -(pcVar1[7] < '\0');
      auVar25[8] = -(pcVar1[8] < '\0');
      auVar25[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar25[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar25[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar25[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar25[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar25[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar25[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(*pauVar5 + lVar22) = auVar25 | auVar24;
      pcVar1 = pauVar5[1] + lVar22;
      auVar26[0] = -(*pcVar1 < '\0');
      auVar26[1] = -(pcVar1[1] < '\0');
      auVar26[2] = -(pcVar1[2] < '\0');
      auVar26[3] = -(pcVar1[3] < '\0');
      auVar26[4] = -(pcVar1[4] < '\0');
      auVar26[5] = -(pcVar1[5] < '\0');
      auVar26[6] = -(pcVar1[6] < '\0');
      auVar26[7] = -(pcVar1[7] < '\0');
      auVar26[8] = -(pcVar1[8] < '\0');
      auVar26[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar26[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar26[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar26[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar26[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar26[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar26[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(pauVar5[1] + lVar22) = auVar26 | auVar24;
      lVar22 = lVar22 + 0x20;
      uVar10 = uVar10 - 2;
    } while (uVar10 != 0);
    if ((uVar9 & 1) != 0) goto LAB_0019bc9a;
  }
  if (0xf < uVar12) {
    uVar12 = 0x10;
  }
  (*(code *)PTR_memmove_00219fb0)(lVar22,uVar12);
  uVar9 = 0;
  do {
    if (SBORROW1('\0',(*pauVar5)[uVar9])) {
      pauVar20 = pauVar5 + ~uVar9;
      while( true ) {
        uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&&str>(in_RSI,pauVar5 + (-1 - uVar9));
        uVar13 = uVar4 & uVar10;
        auVar24 = *(undefined1 (*) [16])(*pauVar5 + uVar13);
        uVar6 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
        uVar17 = (uint)uVar6;
        uVar12 = uVar13;
        if (uVar6 == 0) {
          lVar22 = 0x10;
          do {
            uVar12 = uVar12 + lVar22 & uVar4;
            auVar24 = *(undefined1 (*) [16])(*pauVar5 + uVar12);
            lVar22 = lVar22 + 0x10;
            uVar17 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
          } while (uVar17 == 0);
        }
        uVar16 = 0;
        for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar12 = uVar16 + uVar12 & uVar4;
        if (-1 < (char)(*pauVar5)[uVar12]) {
          auVar24 = *pauVar5;
          uVar17 = 0;
          for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar12 = (ulonglong)uVar17;
        }
        bVar8 = (byte)(uVar10 >> 0x38);
        if (((uVar12 - uVar13 ^ uVar9 - uVar13) & uVar4) < 0x10) {
          bVar8 = bVar8 >> 1;
          (*pauVar5)[uVar9] = bVar8;
          pauVar5[1][uVar9 - 0x10 & uVar4] = bVar8;
          goto LAB_0019bde5;
        }
        pauVar14 = pauVar5 + ~uVar12;
        cVar2 = (*pauVar5)[uVar12];
        bVar8 = bVar8 >> 1;
        (*pauVar5)[uVar12] = bVar8;
        pauVar5[1][uVar12 - 0x10 & uVar4] = bVar8;
        if (cVar2 == -1) break;
        auVar24 = *pauVar20;
        uVar7 = *(undefined8 *)(*pauVar14 + 8);
        *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar14;
        *(undefined8 *)(*pauVar20 + 8) = uVar7;
        *pauVar14 = auVar24;
      }
      (*pauVar5)[uVar9] = 0xff;
      pauVar5[1][uVar9 - 0x10 & uVar4] = 0xff;
      *pauVar14 = *pauVar20;
    }
LAB_0019bde5:
    bVar23 = uVar9 != uVar4;
    uVar9 = uVar9 + 1;
  } while (bVar23);
LAB_0019be40:
  in_RDI[2] = uVar19 - lVar3;
  return 0xffffffffffffffff;
}


