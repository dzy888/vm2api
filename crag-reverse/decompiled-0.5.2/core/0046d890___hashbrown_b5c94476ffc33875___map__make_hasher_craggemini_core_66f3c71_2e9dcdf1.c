// 0046d890 <hashbrown[b5c94476ffc33875]::map::make_hasher<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,(),std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,
   ())>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,
   (), std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,())>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (void)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined8 in_RSI;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 (*pauVar25) [16];
  longlong *in_RDI;
  uint uVar26;
  undefined1 (*pauVar27) [16];
  longlong lVar28;
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
  lVar19 = in_RDI[3];
  uVar21 = lVar19 + 1;
  if (uVar21 == 0) {
    uVar21 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar21;
  }
  uVar11 = in_RDI[1];
  uVar17 = uVar11 + 1;
  uVar14 = (uVar17 & 0xfffffffffffffff8) - (uVar17 >> 3);
  if (uVar11 < 8) {
    uVar14 = uVar11;
  }
  if (uVar14 >> 1 < uVar21) {
    uVar17 = uVar14 + 1;
    if (uVar14 + 1 <= uVar21) {
      uVar17 = uVar21;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x50,uVar17);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar33 = in_RDI + 4;
    uVar34 = 0x50;
    uVar35 = 0x10;
    lVar19 = in_RDI[3];
    pauVar20 = local_50;
    uVar21 = local_48;
    lVar15 = local_40;
    uVar17 = local_38;
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      pauVar27 = (undefined1 (*) [16])*in_RDI;
      auVar30 = *pauVar27;
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
      lVar28 = 0;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar30 = pauVar27[1];
            pauVar27 = pauVar27 + 1;
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
            lVar28 = lVar28 + 0x10;
          } while (uVar18 == 0);
        }
        uVar26 = 0;
        for (uVar16 = uVar18; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar26 = uVar26 + 1;
        }
        uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>
                           (in_RSI,*in_RDI + ((ulonglong)uVar26 + lVar28) * -0x50 + -0x50);
        uVar14 = uVar11 & local_48;
        auVar30 = *(undefined1 (*) [16])(*local_50 + uVar14);
        uVar4 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
        uVar16 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar23 = 0x10;
          do {
            uVar14 = uVar14 + lVar23 & local_48;
            auVar30 = *(undefined1 (*) [16])(*local_50 + uVar14);
            lVar23 = lVar23 + 0x10;
            uVar16 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
          } while (uVar16 == 0);
        }
        uVar13 = 0;
        for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        uVar14 = uVar13 + uVar14 & local_48;
        if (-1 < (char)(*local_50)[uVar14]) {
          auVar30 = *local_50;
          uVar16 = 0;
          for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          uVar14 = (ulonglong)uVar16;
        }
        uVar18 = uVar18 - 1 & uVar18;
        local_38 = (ulonglong)uVar18;
        lVar19 = lVar19 + -1;
        bVar10 = (byte)(uVar11 >> 0x39);
        (*local_50)[uVar14] = bVar10;
        local_50[1][uVar14 - 0x10 & local_48] = bVar10;
        lVar23 = *in_RDI;
        lVar22 = ~((ulonglong)uVar26 + lVar28) * 0x50;
        uVar14 = ~uVar14;
        puVar2 = (undefined8 *)(lVar23 + 0x40 + lVar22);
        uVar5 = puVar2[1];
        *(undefined8 *)local_50[uVar14 * 5 + 4] = *puVar2;
        *(undefined8 *)(local_50[uVar14 * 5 + 4] + 8) = uVar5;
        auVar30 = *(undefined1 (*) [16])(lVar23 + lVar22);
        puVar2 = (undefined8 *)(lVar23 + 0x10 + lVar22);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar23 + 0x20 + lVar22);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar23 + 0x30 + lVar22);
        uVar9 = puVar2[1];
        *(undefined8 *)local_50[uVar14 * 5 + 3] = *puVar2;
        *(undefined8 *)(local_50[uVar14 * 5 + 3] + 8) = uVar9;
        *(undefined8 *)local_50[uVar14 * 5 + 2] = uVar7;
        *(undefined8 *)(local_50[uVar14 * 5 + 2] + 8) = uVar8;
        *(undefined8 *)local_50[uVar14 * 5 + 1] = uVar5;
        *(undefined8 *)(local_50[uVar14 * 5 + 1] + 8) = uVar6;
        local_50[uVar14 * 5] = auVar30;
      } while (lVar19 != 0);
      lVar19 = in_RDI[3];
    }
    lVar28 = in_RDI[1];
    *in_RDI = (longlong)local_50;
    in_RDI[1] = local_48;
    in_RDI[2] = local_40 - lVar19;
    in_RDI[3] = lVar19;
    if (lVar28 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar28 * 0x51 == -0x61) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,in_RDI,local_48,plVar33,uVar34,uVar35,pauVar20,uVar21,lVar15,uVar17);
    return 0xffffffffffffffff;
  }
  if (uVar17 == 0) {
    uVar21 = 0;
    goto LAB_0046ddf6;
  }
  lVar19 = *in_RDI;
  uVar21 = ((uVar17 >> 4) + 1) - (ulonglong)((uVar17 & 0xf) == 0);
  if (uVar21 == 1) {
    lVar15 = 0;
LAB_0046db54:
    pcVar1 = (char *)(lVar19 + lVar15);
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
    *(undefined1 (*) [16])(lVar19 + lVar15) = auVar30 | _DAT_00183f90;
  }
  else {
    uVar14 = uVar21 & 0x1ffffffffffffffe;
    lVar15 = 0;
    do {
      pcVar1 = (char *)(lVar19 + lVar15);
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
      *(undefined1 (*) [16])(lVar19 + lVar15) = auVar31 | auVar30;
      pcVar1 = (char *)(lVar19 + 0x10 + lVar15);
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
      *(undefined1 (*) [16])(lVar19 + 0x10 + lVar15) = auVar32 | auVar30;
      lVar15 = lVar15 + 0x20;
      uVar14 = uVar14 - 2;
    } while (uVar14 != 0);
    if ((uVar21 & 1) != 0) goto LAB_0046db54;
  }
  if (0xf < uVar17) {
    uVar17 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar15,uVar17);
  uVar21 = 0;
  do {
    lVar19 = *in_RDI;
    if (SBORROW1('\0',*(char *)(lVar19 + uVar21))) {
      pauVar20 = (undefined1 (*) [16])(~uVar21 * 0x50 + lVar19);
      while( true ) {
        uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>
                           (in_RSI,lVar19 + uVar21 * -0x50 + -0x50);
        pauVar27 = (undefined1 (*) [16])*in_RDI;
        uVar17 = in_RDI[1];
        uVar24 = uVar17 & uVar12;
        auVar30 = *(undefined1 (*) [16])(*pauVar27 + uVar24);
        uVar4 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
        uVar18 = (uint)uVar4;
        uVar14 = uVar24;
        if (uVar4 == 0) {
          lVar19 = 0x10;
          do {
            uVar14 = uVar14 + lVar19 & uVar17;
            auVar30 = *(undefined1 (*) [16])(*pauVar27 + uVar14);
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
        uVar26 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar26 = uVar26 + 1;
        }
        uVar14 = uVar26 + uVar14 & uVar17;
        if (-1 < (char)(*pauVar27)[uVar14]) {
          auVar30 = *pauVar27;
          uVar18 = 0;
          for (uVar26 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar26 & 1) == 0;
              uVar26 = uVar26 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar14 = (ulonglong)uVar18;
        }
        bVar10 = (byte)(uVar12 >> 0x38);
        if (((uVar14 - uVar24 ^ uVar21 - uVar24) & uVar17) < 0x10) {
          bVar10 = bVar10 >> 1;
          (*pauVar27)[uVar21] = bVar10;
          *(byte *)(*in_RDI + 0x10 + (uVar17 & uVar21 - 0x10)) = bVar10;
          goto LAB_0046dd57;
        }
        pauVar25 = pauVar27 + ~uVar14 * 5;
        cVar3 = (*pauVar27)[uVar14];
        bVar10 = bVar10 >> 1;
        (*pauVar27)[uVar14] = bVar10;
        *(byte *)(*in_RDI + 0x10 + (uVar14 - 0x10 & uVar17)) = bVar10;
        if (cVar3 == -1) break;
        uVar34 = *(undefined8 *)*pauVar20;
        *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar25;
        *(undefined8 *)*pauVar25 = uVar34;
        uVar34 = *(undefined8 *)(*pauVar20 + 8);
        *(undefined8 *)(*pauVar20 + 8) = *(undefined8 *)(*pauVar25 + 8);
        *(undefined8 *)(*pauVar25 + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar20[1];
        *(undefined8 *)pauVar20[1] = *(undefined8 *)pauVar25[1];
        *(undefined8 *)pauVar25[1] = uVar34;
        uVar34 = *(undefined8 *)(pauVar20[1] + 8);
        *(undefined8 *)(pauVar20[1] + 8) = *(undefined8 *)(pauVar25[1] + 8);
        *(undefined8 *)(pauVar25[1] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar20[2];
        *(undefined8 *)pauVar20[2] = *(undefined8 *)pauVar25[2];
        *(undefined8 *)pauVar25[2] = uVar34;
        uVar34 = *(undefined8 *)(pauVar20[2] + 8);
        *(undefined8 *)(pauVar20[2] + 8) = *(undefined8 *)(pauVar25[2] + 8);
        *(undefined8 *)(pauVar25[2] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar20[3];
        *(undefined8 *)pauVar20[3] = *(undefined8 *)pauVar25[3];
        *(undefined8 *)pauVar25[3] = uVar34;
        uVar34 = *(undefined8 *)(pauVar20[3] + 8);
        *(undefined8 *)(pauVar20[3] + 8) = *(undefined8 *)(pauVar25[3] + 8);
        *(undefined8 *)(pauVar25[3] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar20[4];
        *(undefined8 *)pauVar20[4] = *(undefined8 *)pauVar25[4];
        *(undefined8 *)pauVar25[4] = uVar34;
        uVar34 = *(undefined8 *)(pauVar20[4] + 8);
        *(undefined8 *)(pauVar20[4] + 8) = *(undefined8 *)(pauVar25[4] + 8);
        *(undefined8 *)(pauVar25[4] + 8) = uVar34;
        lVar19 = *in_RDI;
      }
      uVar17 = in_RDI[1];
      *(undefined1 *)(*in_RDI + uVar21) = 0xff;
      *(undefined1 *)(*in_RDI + 0x10 + (uVar21 - 0x10 & uVar17)) = 0xff;
      uVar34 = *(undefined8 *)(pauVar20[4] + 8);
      *(undefined8 *)pauVar25[4] = *(undefined8 *)pauVar20[4];
      *(undefined8 *)(pauVar25[4] + 8) = uVar34;
      auVar30 = *pauVar20;
      uVar34 = *(undefined8 *)pauVar20[1];
      uVar35 = *(undefined8 *)(pauVar20[1] + 8);
      uVar5 = *(undefined8 *)pauVar20[2];
      uVar6 = *(undefined8 *)(pauVar20[2] + 8);
      uVar7 = *(undefined8 *)(pauVar20[3] + 8);
      *(undefined8 *)pauVar25[3] = *(undefined8 *)pauVar20[3];
      *(undefined8 *)(pauVar25[3] + 8) = uVar7;
      *(undefined8 *)pauVar25[2] = uVar5;
      *(undefined8 *)(pauVar25[2] + 8) = uVar6;
      *(undefined8 *)pauVar25[1] = uVar34;
      *(undefined8 *)(pauVar25[1] + 8) = uVar35;
      *pauVar25 = auVar30;
    }
LAB_0046dd57:
    bVar29 = uVar21 != uVar11;
    uVar21 = uVar21 + 1;
  } while (bVar29);
  uVar17 = in_RDI[1];
  lVar19 = in_RDI[3];
  uVar21 = (uVar17 + 1 & 0xfffffffffffffff8) - (uVar17 + 1 >> 3);
  if (uVar17 < 8) {
    uVar21 = uVar17;
  }
LAB_0046ddf6:
  in_RDI[2] = uVar21 - lVar19;
  return 0xffffffffffffffff;
}


