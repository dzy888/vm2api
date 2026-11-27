// 0046d350 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   ())>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   (), std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,())>>::
reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (void)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  char cVar3;
  ushort uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 in_RSI;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *in_RDI;
  uint uVar18;
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
  lVar14 = in_RDI[3];
  uVar15 = lVar14 + 1;
  if (uVar15 == 0) {
    uVar15 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar15;
  }
  uVar6 = in_RDI[1];
  uVar12 = uVar6 + 1;
  uVar9 = (uVar12 & 0xfffffffffffffff8) - (uVar12 >> 3);
  if (uVar6 < 8) {
    uVar9 = uVar6;
  }
  if (uVar9 >> 1 < uVar15) {
    uVar12 = uVar9 + 1;
    if (uVar9 + 1 <= uVar15) {
      uVar12 = uVar15;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x18,uVar12);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar25 = in_RDI + 4;
    uVar26 = 0x18;
    uVar27 = 0x10;
    lVar14 = in_RDI[3];
    pauVar28 = local_50;
    uVar15 = local_48;
    lVar10 = local_40;
    uVar12 = local_38;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      pauVar19 = (undefined1 (*) [16])*in_RDI;
      auVar22 = *pauVar19;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
        if ((short)uVar13 == 0) {
          do {
            auVar22 = pauVar19[1];
            pauVar19 = pauVar19 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        uVar18 = 0;
        for (uVar11 = uVar13; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar6 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&alloc[12e961f32105355]::string::String>
                          (in_RSI,*in_RDI + ((ulonglong)uVar18 + lVar20) * -0x18 + -0x18);
        uVar9 = uVar6 & local_48;
        auVar22 = *(undefined1 (*) [16])(*local_50 + uVar9);
        uVar4 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
        uVar11 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar16 = 0x10;
          do {
            uVar9 = uVar9 + lVar16 & local_48;
            auVar22 = *(undefined1 (*) [16])(*local_50 + uVar9);
            lVar16 = lVar16 + 0x10;
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
        uVar8 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = uVar8 + uVar9 & local_48;
        if (-1 < (char)(*local_50)[uVar9]) {
          auVar22 = *local_50;
          uVar11 = 0;
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
            uVar11 = uVar11 + 1;
          }
          uVar9 = (ulonglong)uVar11;
        }
        uVar13 = uVar13 - 1 & uVar13;
        local_38 = (ulonglong)uVar13;
        lVar14 = lVar14 + -1;
        bVar5 = (byte)(uVar6 >> 0x39);
        (*local_50)[uVar9] = bVar5;
        local_50[1][uVar9 - 0x10 & local_48] = bVar5;
        lVar16 = *in_RDI;
        uVar6 = ~((ulonglong)uVar18 + lVar20);
        *(undefined8 *)((longlong)local_50 + ~uVar9 * 0x18 + 0x10) =
             *(undefined8 *)(lVar16 + 0x10 + uVar6 * 0x18);
        *(undefined1 (*) [16])((longlong)local_50 + ~uVar9 * 0x18) =
             *(undefined1 (*) [16])(lVar16 + uVar6 * 0x18);
      } while (lVar14 != 0);
      lVar14 = in_RDI[3];
    }
    lVar20 = in_RDI[1];
    *in_RDI = (longlong)local_50;
    in_RDI[1] = local_48;
    in_RDI[2] = local_40 - lVar14;
    in_RDI[3] = lVar14;
    if (lVar20 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar20 + (lVar20 * 0x18 + 0x27U & 0xfffffffffffffff0) == -0x11) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,in_RDI,local_48,plVar25,uVar26,uVar27,pauVar28,uVar15,lVar10,uVar12);
    return 0xffffffffffffffff;
  }
  if (uVar12 == 0) {
    uVar15 = 0;
    goto LAB_0046d7d5;
  }
  lVar14 = *in_RDI;
  uVar15 = ((uVar12 >> 4) + 1) - (ulonglong)((uVar12 & 0xf) == 0);
  if (uVar15 == 1) {
    lVar10 = 0;
LAB_0046d5d4:
    pcVar1 = (char *)(lVar14 + lVar10);
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
    *(undefined1 (*) [16])(lVar14 + lVar10) = auVar22 | _DAT_00183f90;
  }
  else {
    uVar9 = uVar15 & 0x1ffffffffffffffe;
    lVar10 = 0;
    do {
      pcVar1 = (char *)(lVar14 + lVar10);
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
      *(undefined1 (*) [16])(lVar14 + lVar10) = auVar23 | auVar22;
      pcVar1 = (char *)(lVar14 + 0x10 + lVar10);
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
      *(undefined1 (*) [16])(lVar14 + 0x10 + lVar10) = auVar24 | auVar22;
      lVar10 = lVar10 + 0x20;
      uVar9 = uVar9 - 2;
    } while (uVar9 != 0);
    if ((uVar15 & 1) != 0) goto LAB_0046d5d4;
  }
  if (0xf < uVar12) {
    uVar12 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar10,uVar12);
  uVar15 = 0;
  do {
    lVar14 = *in_RDI;
    if (SBORROW1('\0',*(char *)(lVar14 + uVar15))) {
      pauVar28 = (undefined1 (*) [16])(lVar14 + ~uVar15 * 0x18);
      while( true ) {
        uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&alloc[12e961f32105355]::string::String>
                          (in_RSI,lVar14 + uVar15 * -0x18 + -0x18);
        pauVar19 = (undefined1 (*) [16])*in_RDI;
        uVar12 = in_RDI[1];
        uVar17 = uVar12 & uVar7;
        auVar22 = *(undefined1 (*) [16])(*pauVar19 + uVar17);
        uVar4 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
        uVar13 = (uint)uVar4;
        uVar9 = uVar17;
        if (uVar4 == 0) {
          lVar14 = 0x10;
          do {
            uVar9 = uVar9 + lVar14 & uVar12;
            auVar22 = *(undefined1 (*) [16])(*pauVar19 + uVar9);
            lVar14 = lVar14 + 0x10;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        uVar18 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar9 = uVar18 + uVar9 & uVar12;
        if (-1 < (char)(*pauVar19)[uVar9]) {
          auVar22 = *pauVar19;
          uVar13 = 0;
          for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar9 = (ulonglong)uVar13;
        }
        bVar5 = (byte)(uVar7 >> 0x38);
        if (((uVar9 - uVar17 ^ uVar15 - uVar17) & uVar12) < 0x10) {
          bVar5 = bVar5 >> 1;
          (*pauVar19)[uVar15] = bVar5;
          *(byte *)(*in_RDI + 0x10 + (uVar12 & uVar15 - 0x10)) = bVar5;
          goto LAB_0046d757;
        }
        pauVar2 = (undefined1 (*) [16])((longlong)pauVar19 + ~uVar9 * 0x18);
        cVar3 = (*pauVar19)[uVar9];
        bVar5 = bVar5 >> 1;
        (*pauVar19)[uVar9] = bVar5;
        *(byte *)(*in_RDI + 0x10 + (uVar9 - 0x10 & uVar12)) = bVar5;
        if (cVar3 == -1) break;
        uVar26 = *(undefined8 *)*pauVar28;
        *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar2;
        *(undefined8 *)*pauVar2 = uVar26;
        uVar26 = *(undefined8 *)(*pauVar28 + 8);
        *(undefined8 *)(*pauVar28 + 8) = *(undefined8 *)(*pauVar2 + 8);
        *(undefined8 *)(*pauVar2 + 8) = uVar26;
        uVar26 = *(undefined8 *)pauVar28[1];
        *(undefined8 *)pauVar28[1] = *(undefined8 *)pauVar2[1];
        *(undefined8 *)pauVar2[1] = uVar26;
        lVar14 = *in_RDI;
      }
      uVar12 = in_RDI[1];
      *(undefined1 *)(*in_RDI + uVar15) = 0xff;
      *(undefined1 *)(*in_RDI + 0x10 + (uVar15 - 0x10 & uVar12)) = 0xff;
      *(undefined8 *)pauVar2[1] = *(undefined8 *)pauVar28[1];
      *pauVar2 = *pauVar28;
    }
LAB_0046d757:
    bVar21 = uVar15 != uVar6;
    uVar15 = uVar15 + 1;
  } while (bVar21);
  uVar12 = in_RDI[1];
  lVar14 = in_RDI[3];
  uVar15 = (uVar12 + 1 & 0xfffffffffffffff8) - (uVar12 + 1 >> 3);
  if (uVar12 < 8) {
    uVar15 = uVar12;
  }
LAB_0046d7d5:
  in_RDI[2] = uVar15 - lVar14;
  return 0xffffffffffffffff;
}


