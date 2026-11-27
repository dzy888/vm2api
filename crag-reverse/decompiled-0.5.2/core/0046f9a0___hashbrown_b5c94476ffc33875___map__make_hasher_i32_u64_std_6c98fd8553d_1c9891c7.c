// 0046f9a0 <hashbrown[b5c94476ffc33875]::map::make_hasher<i32,u64,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(i32,
   u64)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<i32, u64,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(i32,u64)>>::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<i32,u64,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ushort uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  
  auVar24 = _DAT_00183f90;
  lVar17 = param_1[3];
  uVar8 = lVar17 + 1;
  if (uVar8 == 0) {
    uVar8 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar8;
  }
  uVar3 = param_1[1];
  uVar9 = uVar3 + 1;
  uVar16 = (uVar9 & 0xfffffffffffffff8) - (uVar9 >> 3);
  if (uVar3 < 8) {
    uVar16 = uVar3;
  }
  if (uVar16 >> 1 < uVar8) {
    uVar9 = uVar16 + 1;
    if (uVar16 + 1 <= uVar8) {
      uVar9 = uVar8;
    }
    uVar23 = <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
             <alloc[12e961f32105355]::alloc::Global>(&local_50,0x10,uVar9);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    if (lVar17 != 0) {
      pauVar18 = (undefined1 (*) [16])*param_1;
      auVar24 = *pauVar18;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
      pauVar19 = pauVar18;
      lVar20 = lVar17;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar24 = pauVar19[1];
            pauVar19 = pauVar19 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        uVar14 = 0;
        for (uVar10 = uVar13; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar8 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&u32>(param_2,pauVar18 + (-1 - ((ulonglong)uVar14 + lVar21)));
        uVar9 = uVar8 & local_48;
        auVar24 = *(undefined1 (*) [16])(*local_50 + uVar9);
        uVar4 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
        uVar10 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar15 = 0x10;
          do {
            uVar9 = uVar9 + lVar15 & local_48;
            auVar24 = *(undefined1 (*) [16])(*local_50 + uVar9);
            lVar15 = lVar15 + 0x10;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
          } while (uVar10 == 0);
        }
        uVar7 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar9 = uVar7 + uVar9 & local_48;
        if (-1 < (char)(*local_50)[uVar9]) {
          auVar24 = *local_50;
          uVar10 = 0;
          for (uVar7 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar7 & 1) == 0;
              uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uVar9 = (ulonglong)uVar10;
        }
        uVar13 = uVar13 - 1 & uVar13;
        lVar20 = lVar20 + -1;
        bVar5 = (byte)(uVar8 >> 0x39);
        (*local_50)[uVar9] = bVar5;
        local_50[1][uVar9 - 0x10 & local_48] = bVar5;
        uVar23 = SUB168(pauVar18[~((ulonglong)uVar14 + lVar21)],0);
        local_50[~uVar9] = pauVar18[~((ulonglong)uVar14 + lVar21)];
      } while (lVar20 != 0);
    }
    *param_1 = local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar17;
    if (uVar3 == 0) {
      return 0xffffffffffffffff;
    }
    if (uVar3 * 0x11 == -0x21) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,0x10);
    return 0xffffffffffffffff;
  }
  if (uVar9 == 0) {
    uVar8 = 0;
    goto LAB_0046fdc3;
  }
  pauVar18 = (undefined1 (*) [16])*param_1;
  uVar8 = ((uVar9 >> 4) + 1) - (ulonglong)((uVar9 & 0xf) == 0);
  if (uVar8 == 1) {
    lVar17 = 0;
LAB_0046fbf8:
    pcVar1 = *pauVar18 + lVar17;
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
    *(undefined1 (*) [16])(*pauVar18 + lVar17) = auVar24 | _DAT_00183f90;
  }
  else {
    uVar16 = uVar8 & 0x1ffffffffffffffe;
    lVar17 = 0;
    do {
      pcVar1 = *pauVar18 + lVar17;
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
      *(undefined1 (*) [16])(*pauVar18 + lVar17) = auVar25 | auVar24;
      pcVar1 = pauVar18[1] + lVar17;
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
      *(undefined1 (*) [16])(pauVar18[1] + lVar17) = auVar26 | auVar24;
      lVar17 = lVar17 + 0x20;
      uVar16 = uVar16 - 2;
    } while (uVar16 != 0);
    if ((uVar8 & 1) != 0) goto LAB_0046fbf8;
  }
  if (0xf < uVar9) {
    uVar9 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar17,uVar9);
  uVar8 = 0;
  do {
    if (SBORROW1('\0',(*pauVar18)[uVar8])) {
      pauVar19 = pauVar18 + ~uVar8;
      while( true ) {
        uVar6 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&u32>(param_2,pauVar18 + (-1 - uVar8));
        uVar9 = param_1[1];
        uVar11 = uVar9 & uVar6;
        auVar24 = *(undefined1 (*) [16])(*pauVar18 + uVar11);
        uVar4 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
        uVar13 = (uint)uVar4;
        uVar16 = uVar11;
        if (uVar4 == 0) {
          lVar17 = 0x10;
          do {
            uVar16 = uVar16 + lVar17 & uVar9;
            auVar24 = *(undefined1 (*) [16])(*pauVar18 + uVar16);
            lVar17 = lVar17 + 0x10;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        uVar14 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar16 = uVar14 + uVar16 & uVar9;
        if (-1 < (char)(*pauVar18)[uVar16]) {
          auVar24 = *pauVar18;
          uVar13 = 0;
          for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar24[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar16 = (ulonglong)uVar13;
        }
        bVar5 = (byte)(uVar6 >> 0x38);
        if (((uVar16 - uVar11 ^ uVar8 - uVar11) & uVar9) < 0x10) {
          bVar5 = bVar5 >> 1;
          (*pauVar18)[uVar8] = bVar5;
          pauVar18 = (undefined1 (*) [16])*param_1;
          pauVar18[1][uVar9 & uVar8 - 0x10] = bVar5;
          goto LAB_0046fd59;
        }
        pauVar12 = pauVar18 + ~uVar16;
        cVar2 = (*pauVar18)[uVar16];
        bVar5 = bVar5 >> 1;
        (*pauVar18)[uVar16] = bVar5;
        pauVar18 = (undefined1 (*) [16])*param_1;
        pauVar18[1][uVar16 - 0x10 & uVar9] = bVar5;
        if (cVar2 == -1) break;
        uVar23 = *(undefined8 *)*pauVar19;
        *(undefined8 *)*pauVar19 = *(undefined8 *)*pauVar12;
        *(undefined8 *)*pauVar12 = uVar23;
        uVar23 = *(undefined8 *)(*pauVar19 + 8);
        *(undefined8 *)(*pauVar19 + 8) = *(undefined8 *)(*pauVar12 + 8);
        *(undefined8 *)(*pauVar12 + 8) = uVar23;
        pauVar18 = (undefined1 (*) [16])*param_1;
      }
      uVar9 = param_1[1];
      (*pauVar18)[uVar8] = 0xff;
      pauVar18[1][uVar8 - 0x10 & uVar9] = 0xff;
      *pauVar12 = *pauVar19;
    }
LAB_0046fd59:
    bVar22 = uVar8 != uVar3;
    uVar8 = uVar8 + 1;
  } while (bVar22);
  uVar9 = param_1[1];
  lVar17 = param_1[3];
  uVar8 = (uVar9 + 1 & 0xfffffffffffffff8) - (uVar9 + 1 >> 3);
  if (uVar9 < 8) {
    uVar8 = uVar9;
  }
LAB_0046fdc3:
  param_1[2] = uVar8 - lVar17;
  return 0xffffffffffffffff;
}


