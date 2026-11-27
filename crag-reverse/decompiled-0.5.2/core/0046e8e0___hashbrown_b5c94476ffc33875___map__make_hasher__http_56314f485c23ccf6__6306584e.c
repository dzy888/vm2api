// 0046e8e0 <hashbrown[b5c94476ffc33875]::map::make_hasher<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(&http[56314f485c23ccf6]::header::name::HeaderName,
   ())>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<&http[56314f485c23ccf6]::header::name::HeaderName,
   (), std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(&http[56314f485c23ccf6]::header::name::HeaderName,())>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (void)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 in_RDX;
  uint uVar11;
  longlong lVar12;
  ulonglong in_RSI;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *in_RDI;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  auVar22 = _DAT_00183f90;
  uVar6 = in_RDI[3];
  uVar13 = in_RSI + uVar6;
  if (CARRY8(in_RSI,uVar6)) {
    uVar6 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar6;
  }
  uVar9 = in_RDI[1];
  uVar5 = uVar9 + 1;
  uVar18 = (uVar5 & 0xfffffffffffffff8) - (uVar5 >> 3);
  if (uVar9 < 8) {
    uVar18 = uVar9;
  }
  if (uVar18 >> 1 < uVar13) {
    uVar6 = uVar18 + 1;
    if (uVar18 + 1 <= uVar13) {
      uVar6 = uVar13;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,8,uVar6);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar25 = in_RDI + 4;
    uVar26 = 8;
    uVar27 = 0x10;
    lVar12 = in_RDI[3];
    pauVar28 = local_50;
    uVar6 = local_48;
    lVar17 = local_40;
    uVar13 = local_38;
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      pauVar19 = (undefined1 (*) [16])*in_RDI;
      auVar22 = *pauVar19;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
      lVar20 = 0;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar22 = pauVar19[1];
            pauVar19 = pauVar19 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar20 = lVar20 + 0x10;
          } while (uVar11 == 0);
        }
        uVar16 = 0;
        for (uVar10 = uVar11; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar5 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&&http[56314f485c23ccf6]::header::name::HeaderName>
                          (in_RDX,*in_RDI + ((ulonglong)uVar16 + lVar20) * -8 + -8);
        uVar9 = uVar5 & local_48;
        auVar22 = *(undefined1 (*) [16])(*local_50 + uVar9);
        uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
        uVar10 = (uint)uVar3;
        if (uVar3 == 0) {
          lVar14 = 0x10;
          do {
            uVar9 = uVar9 + lVar14 & local_48;
            auVar22 = *(undefined1 (*) [16])(*local_50 + uVar9);
            lVar14 = lVar14 + 0x10;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          } while (uVar10 == 0);
        }
        uVar8 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = uVar8 + uVar9 & local_48;
        if (-1 < (char)(*local_50)[uVar9]) {
          auVar22 = *local_50;
          uVar10 = 0;
          for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uVar9 = (ulonglong)uVar10;
        }
        uVar11 = uVar11 - 1 & uVar11;
        local_38 = (ulonglong)uVar11;
        lVar12 = lVar12 + -1;
        bVar4 = (byte)(uVar5 >> 0x39);
        (*local_50)[uVar9] = bVar4;
        local_50[1][uVar9 - 0x10 & local_48] = bVar4;
        *(undefined8 *)(*local_50 + ~uVar9 * 8) =
             *(undefined8 *)(*in_RDI + ~((ulonglong)uVar16 + lVar20) * 8);
      } while (lVar12 != 0);
      lVar12 = in_RDI[3];
    }
    lVar20 = in_RDI[1];
    *in_RDI = (longlong)local_50;
    in_RDI[1] = local_48;
    in_RDI[2] = local_40 - lVar12;
    in_RDI[3] = lVar12;
    if (lVar20 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar20 + (lVar20 * 8 + 0x17U & 0xfffffffffffffff0) == -0x11) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,in_RDI,local_48,plVar25,uVar26,uVar27,pauVar28,uVar6,lVar17,uVar13);
    return 0xffffffffffffffff;
  }
  if (uVar5 == 0) {
    uVar13 = 0;
    goto LAB_0046ed22;
  }
  lVar12 = *in_RDI;
  uVar6 = ((uVar5 >> 4) + 1) - (ulonglong)((uVar5 & 0xf) == 0);
  if (uVar6 == 1) {
    lVar17 = 0;
LAB_0046eb54:
    pcVar1 = (char *)(lVar12 + lVar17);
    auVar22[0] = -(*pcVar1 < '\0');
    auVar22[1] = -(pcVar1[1] < '\0');
    auVar22[2] = -(pcVar1[2] < '\0');
    auVar22[3] = -(pcVar1[3] < '\0');
    auVar22[4] = -(pcVar1[4] < '\0');
    auVar22[5] = -(pcVar1[5] < '\0');
    auVar22[6] = -(pcVar1[6] < '\0');
    auVar22[7] = -(pcVar1[7] < '\0');
    auVar22[8] = -(pcVar1[8] < '\0');
    auVar22[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
    auVar22[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
    auVar22[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
    auVar22[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
    auVar22[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
    auVar22[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
    auVar22[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
    *(undefined1 (*) [16])(lVar12 + lVar17) = auVar22 | _DAT_00183f90;
  }
  else {
    uVar13 = uVar6 & 0x1ffffffffffffffe;
    lVar17 = 0;
    do {
      pcVar1 = (char *)(lVar12 + lVar17);
      auVar23[0] = -(*pcVar1 < '\0');
      auVar23[1] = -(pcVar1[1] < '\0');
      auVar23[2] = -(pcVar1[2] < '\0');
      auVar23[3] = -(pcVar1[3] < '\0');
      auVar23[4] = -(pcVar1[4] < '\0');
      auVar23[5] = -(pcVar1[5] < '\0');
      auVar23[6] = -(pcVar1[6] < '\0');
      auVar23[7] = -(pcVar1[7] < '\0');
      auVar23[8] = -(pcVar1[8] < '\0');
      auVar23[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar23[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar23[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar23[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar23[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar23[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar23[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar12 + lVar17) = auVar23 | auVar22;
      pcVar1 = (char *)(lVar12 + 0x10 + lVar17);
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
      *(undefined1 (*) [16])(lVar12 + 0x10 + lVar17) = auVar24 | auVar22;
      lVar17 = lVar17 + 0x20;
      uVar13 = uVar13 - 2;
    } while (uVar13 != 0);
    if ((uVar6 & 1) != 0) goto LAB_0046eb54;
  }
  if (0xf < uVar5) {
    uVar5 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar17,uVar5);
  uVar6 = 0;
  do {
    lVar12 = *in_RDI;
    if (SBORROW1('\0',*(char *)(lVar12 + uVar6))) {
      uVar13 = ~uVar6;
      lVar17 = lVar12;
      while( true ) {
        uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&&http[56314f485c23ccf6]::header::name::HeaderName>
                          (in_RDX,lVar17 + uVar6 * -8 + -8);
        pauVar28 = (undefined1 (*) [16])*in_RDI;
        uVar5 = in_RDI[1];
        uVar15 = uVar5 & uVar7;
        auVar22 = *(undefined1 (*) [16])(*pauVar28 + uVar15);
        uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
        uVar11 = (uint)uVar3;
        uVar18 = uVar15;
        if (uVar3 == 0) {
          lVar17 = 0x10;
          do {
            uVar18 = uVar18 + lVar17 & uVar5;
            auVar22 = *(undefined1 (*) [16])(*pauVar28 + uVar18);
            lVar17 = lVar17 + 0x10;
            uVar11 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
          } while (uVar11 == 0);
        }
        uVar16 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar18 = uVar16 + uVar18 & uVar5;
        if (-1 < (char)(*pauVar28)[uVar18]) {
          auVar22 = *pauVar28;
          uVar11 = 0;
          for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          uVar18 = (ulonglong)uVar11;
        }
        bVar4 = (byte)(uVar7 >> 0x38);
        if (((uVar18 - uVar15 ^ uVar6 - uVar15) & uVar5) < 0x10) {
          bVar4 = bVar4 >> 1;
          (*pauVar28)[uVar6] = bVar4;
          *(byte *)(*in_RDI + 0x10 + (uVar5 & uVar6 - 0x10)) = bVar4;
          goto LAB_0046ecb6;
        }
        uVar7 = ~uVar18;
        cVar2 = (*pauVar28)[uVar18];
        bVar4 = bVar4 >> 1;
        (*pauVar28)[uVar18] = bVar4;
        *(byte *)(*in_RDI + 0x10 + (uVar18 - 0x10 & uVar5)) = bVar4;
        if (cVar2 == -1) break;
        uVar26 = *(undefined8 *)(lVar12 + uVar13 * 8);
        *(undefined8 *)(lVar12 + uVar13 * 8) = *(undefined8 *)(*pauVar28 + uVar7 * 8);
        *(undefined8 *)(*pauVar28 + uVar7 * 8) = uVar26;
        lVar17 = *in_RDI;
      }
      uVar5 = in_RDI[1];
      *(undefined1 *)(*in_RDI + uVar6) = 0xff;
      *(undefined1 *)(*in_RDI + 0x10 + (uVar6 - 0x10 & uVar5)) = 0xff;
      *(undefined8 *)(*pauVar28 + uVar7 * 8) = *(undefined8 *)(lVar12 + uVar13 * 8);
    }
LAB_0046ecb6:
    bVar21 = uVar6 != uVar9;
    uVar6 = uVar6 + 1;
  } while (bVar21);
  uVar5 = in_RDI[1];
  uVar6 = in_RDI[3];
  uVar13 = (uVar5 + 1 & 0xfffffffffffffff8) - (uVar5 + 1 >> 3);
  if (uVar5 < 8) {
    uVar13 = uVar5;
  }
LAB_0046ed22:
  in_RDI[2] = uVar13 - uVar6;
  return 0xffffffffffffffff;
}


