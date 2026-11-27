// 0046f280 <hashbrown[b5c94476ffc33875]::map::make_hasher<usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,
   craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<usize,
   craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ushort uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  uint uVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  
  auVar23 = _DAT_00183f90;
  lVar12 = param_1[3];
  uVar9 = lVar12 + 1;
  if (uVar9 == 0) {
    uVar9 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar9;
  }
  uVar3 = param_1[1];
  uVar10 = uVar3 + 1;
  uVar11 = (uVar10 & 0xfffffffffffffff8) - (uVar10 >> 3);
  if (uVar3 < 8) {
    uVar11 = uVar3;
  }
  if (uVar11 >> 1 < uVar9) {
    uVar10 = uVar11 + 1;
    if (uVar11 + 1 <= uVar9) {
      uVar10 = uVar9;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0xe0,uVar10);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    if (lVar12 != 0) {
      pauVar19 = (undefined1 (*) [16])*param_1;
      auVar23 = *pauVar19;
      uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
      lVar16 = 0;
      lVar15 = lVar12;
      pauVar20 = pauVar19;
      do {
        if ((short)uVar21 == 0) {
          do {
            auVar23 = pauVar20[1];
            pauVar20 = pauVar20 + 1;
            uVar21 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar16 = lVar16 + 0x10;
          } while (uVar21 == 0);
        }
        uVar13 = 0;
        for (uVar8 = uVar21; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&u64>(param_2,pauVar19 + ((ulonglong)uVar13 + lVar16) * -0xe + -0xe);
        uVar10 = uVar9 & local_48;
        auVar23 = *(undefined1 (*) [16])(*local_50 + uVar10);
        uVar5 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar5;
        if (uVar5 == 0) {
          lVar17 = 0x10;
          do {
            uVar10 = uVar10 + lVar17 & local_48;
            auVar23 = *(undefined1 (*) [16])(*local_50 + uVar10);
            lVar17 = lVar17 + 0x10;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
          } while (uVar13 == 0);
        }
        uVar8 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar10 = uVar8 + uVar10 & local_48;
        if (-1 < (char)(*local_50)[uVar10]) {
          auVar23 = *local_50;
          uVar13 = 0;
          for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar23[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar10 = (ulonglong)uVar13;
        }
        uVar21 = uVar21 - 1 & uVar21;
        lVar15 = lVar15 + -1;
        uVar11 = uVar10 - 0x10 & local_48;
        bVar6 = (byte)(uVar9 >> 0x39);
        (*local_50)[uVar10] = bVar6;
        local_50[1][uVar11] = bVar6;
        (*(code *)PTR_memcpy_00799008)(uVar11,0xe0);
      } while (lVar15 != 0);
    }
    *param_1 = local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar12;
    if (uVar3 == 0) {
      return 0xffffffffffffffff;
    }
    lVar12 = uVar3 * 0xe0 + 0xe0;
    if (uVar3 + lVar12 == -0x11) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(lVar12,0x10);
    return 0xffffffffffffffff;
  }
  if (uVar10 == 0) {
    uVar9 = 0;
    goto LAB_0046f90f;
  }
  pauVar19 = (undefined1 (*) [16])*param_1;
  uVar9 = ((uVar10 >> 4) + 1) - (ulonglong)((uVar10 & 0xf) == 0);
  if (uVar9 == 1) {
    lVar12 = 0;
LAB_0046f508:
    pcVar1 = *pauVar19 + lVar12;
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
    *(undefined1 (*) [16])(*pauVar19 + lVar12) = auVar23 | _DAT_00183f90;
  }
  else {
    uVar11 = uVar9 & 0x1ffffffffffffffe;
    lVar12 = 0;
    do {
      pcVar1 = *pauVar19 + lVar12;
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
      *(undefined1 (*) [16])(*pauVar19 + lVar12) = auVar24 | auVar23;
      pcVar1 = pauVar19[1] + lVar12;
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
      *(undefined1 (*) [16])(pauVar19[1] + lVar12) = auVar25 | auVar23;
      lVar12 = lVar12 + 0x20;
      uVar11 = uVar11 - 2;
    } while (uVar11 != 0);
    if ((uVar9 & 1) != 0) goto LAB_0046f508;
  }
  if (0xf < uVar10) {
    uVar10 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar12,uVar10);
  uVar9 = 0;
  do {
    if (SBORROW1('\0',(*pauVar19)[uVar9])) {
      pauVar20 = pauVar19 + ~uVar9 * 0xe;
      while( true ) {
        uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&u64>(param_2,pauVar19 + uVar9 * -0xe + -0xe);
        uVar10 = param_1[1];
        uVar14 = uVar10 & uVar7;
        auVar23 = *(undefined1 (*) [16])(*pauVar19 + uVar14);
        uVar5 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
        uVar21 = (uint)uVar5;
        uVar11 = uVar14;
        if (uVar5 == 0) {
          lVar12 = 0x10;
          do {
            uVar11 = uVar11 + lVar12 & uVar10;
            auVar23 = *(undefined1 (*) [16])(*pauVar19 + uVar11);
            lVar12 = lVar12 + 0x10;
            uVar21 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
          } while (uVar21 == 0);
        }
        uVar13 = 0;
        for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        uVar11 = uVar13 + uVar11 & uVar10;
        if (-1 < (char)(*pauVar19)[uVar11]) {
          auVar23 = *pauVar19;
          uVar21 = 0;
          for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar23[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar21 = uVar21 + 1;
          }
          uVar11 = (ulonglong)uVar21;
        }
        bVar6 = (byte)(uVar7 >> 0x38);
        if (((uVar11 - uVar14 ^ uVar9 - uVar14) & uVar10) < 0x10) {
          bVar6 = bVar6 >> 1;
          (*pauVar19)[uVar9] = bVar6;
          pauVar19 = (undefined1 (*) [16])*param_1;
          pauVar19[1][uVar10 & uVar9 - 0x10] = bVar6;
          goto LAB_0046f899;
        }
        pauVar18 = pauVar19 + ~uVar11 * 0xe;
        cVar2 = (*pauVar19)[uVar11];
        bVar6 = bVar6 >> 1;
        (*pauVar19)[uVar11] = bVar6;
        pauVar19 = (undefined1 (*) [16])*param_1;
        pauVar19[1][uVar11 - 0x10 & uVar10] = bVar6;
        if (cVar2 == -1) break;
        uVar4 = *(undefined8 *)*pauVar20;
        *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar18;
        *(undefined8 *)*pauVar18 = uVar4;
        uVar4 = *(undefined8 *)(*pauVar20 + 8);
        *(undefined8 *)(*pauVar20 + 8) = *(undefined8 *)(*pauVar18 + 8);
        *(undefined8 *)(*pauVar18 + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[1];
        *(undefined8 *)pauVar20[1] = *(undefined8 *)pauVar18[1];
        *(undefined8 *)pauVar18[1] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[1] + 8);
        *(undefined8 *)(pauVar20[1] + 8) = *(undefined8 *)(pauVar18[1] + 8);
        *(undefined8 *)(pauVar18[1] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[2];
        *(undefined8 *)pauVar20[2] = *(undefined8 *)pauVar18[2];
        *(undefined8 *)pauVar18[2] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[2] + 8);
        *(undefined8 *)(pauVar20[2] + 8) = *(undefined8 *)(pauVar18[2] + 8);
        *(undefined8 *)(pauVar18[2] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[3];
        *(undefined8 *)pauVar20[3] = *(undefined8 *)pauVar18[3];
        *(undefined8 *)pauVar18[3] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[3] + 8);
        *(undefined8 *)(pauVar20[3] + 8) = *(undefined8 *)(pauVar18[3] + 8);
        *(undefined8 *)(pauVar18[3] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[4];
        *(undefined8 *)pauVar20[4] = *(undefined8 *)pauVar18[4];
        *(undefined8 *)pauVar18[4] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[4] + 8);
        *(undefined8 *)(pauVar20[4] + 8) = *(undefined8 *)(pauVar18[4] + 8);
        *(undefined8 *)(pauVar18[4] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[5];
        *(undefined8 *)pauVar20[5] = *(undefined8 *)pauVar18[5];
        *(undefined8 *)pauVar18[5] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[5] + 8);
        *(undefined8 *)(pauVar20[5] + 8) = *(undefined8 *)(pauVar18[5] + 8);
        *(undefined8 *)(pauVar18[5] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[6];
        *(undefined8 *)pauVar20[6] = *(undefined8 *)pauVar18[6];
        *(undefined8 *)pauVar18[6] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[6] + 8);
        *(undefined8 *)(pauVar20[6] + 8) = *(undefined8 *)(pauVar18[6] + 8);
        *(undefined8 *)(pauVar18[6] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[7];
        *(undefined8 *)pauVar20[7] = *(undefined8 *)pauVar18[7];
        *(undefined8 *)pauVar18[7] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[7] + 8);
        *(undefined8 *)(pauVar20[7] + 8) = *(undefined8 *)(pauVar18[7] + 8);
        *(undefined8 *)(pauVar18[7] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[8];
        *(undefined8 *)pauVar20[8] = *(undefined8 *)pauVar18[8];
        *(undefined8 *)pauVar18[8] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[8] + 8);
        *(undefined8 *)(pauVar20[8] + 8) = *(undefined8 *)(pauVar18[8] + 8);
        *(undefined8 *)(pauVar18[8] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[9];
        *(undefined8 *)pauVar20[9] = *(undefined8 *)pauVar18[9];
        *(undefined8 *)pauVar18[9] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[9] + 8);
        *(undefined8 *)(pauVar20[9] + 8) = *(undefined8 *)(pauVar18[9] + 8);
        *(undefined8 *)(pauVar18[9] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[10];
        *(undefined8 *)pauVar20[10] = *(undefined8 *)pauVar18[10];
        *(undefined8 *)pauVar18[10] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[10] + 8);
        *(undefined8 *)(pauVar20[10] + 8) = *(undefined8 *)(pauVar18[10] + 8);
        *(undefined8 *)(pauVar18[10] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[0xb];
        *(undefined8 *)pauVar20[0xb] = *(undefined8 *)pauVar18[0xb];
        *(undefined8 *)pauVar18[0xb] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[0xb] + 8);
        *(undefined8 *)(pauVar20[0xb] + 8) = *(undefined8 *)(pauVar18[0xb] + 8);
        *(undefined8 *)(pauVar18[0xb] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[0xc];
        *(undefined8 *)pauVar20[0xc] = *(undefined8 *)pauVar18[0xc];
        *(undefined8 *)pauVar18[0xc] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[0xc] + 8);
        *(undefined8 *)(pauVar20[0xc] + 8) = *(undefined8 *)(pauVar18[0xc] + 8);
        *(undefined8 *)(pauVar18[0xc] + 8) = uVar4;
        uVar4 = *(undefined8 *)pauVar20[0xd];
        *(undefined8 *)pauVar20[0xd] = *(undefined8 *)pauVar18[0xd];
        *(undefined8 *)pauVar18[0xd] = uVar4;
        uVar4 = *(undefined8 *)(pauVar20[0xd] + 8);
        *(undefined8 *)(pauVar20[0xd] + 8) = *(undefined8 *)(pauVar18[0xd] + 8);
        *(undefined8 *)(pauVar18[0xd] + 8) = uVar4;
        pauVar19 = (undefined1 (*) [16])*param_1;
      }
      uVar11 = param_1[1];
      (*pauVar19)[uVar9] = 0xff;
      pauVar19[1][uVar9 - 0x10 & uVar11] = 0xff;
      (*(code *)PTR_memcpy_00799008)(uVar10,0xe0);
    }
LAB_0046f899:
    bVar22 = uVar9 != uVar3;
    uVar9 = uVar9 + 1;
  } while (bVar22);
  uVar10 = param_1[1];
  lVar12 = param_1[3];
  uVar9 = (uVar10 + 1 & 0xfffffffffffffff8) - (uVar10 + 1 >> 3);
  if (uVar10 < 8) {
    uVar9 = uVar10;
  }
LAB_0046f90f:
  param_1[2] = uVar9 - lVar12;
  return 0xffffffffffffffff;
}


