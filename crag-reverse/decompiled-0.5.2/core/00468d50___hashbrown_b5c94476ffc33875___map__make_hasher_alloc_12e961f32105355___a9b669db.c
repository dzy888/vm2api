// 00468d50 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  
  auVar29 = _DAT_00183f90;
  lVar25 = param_1[3];
  uVar19 = lVar25 + 1;
  if (uVar19 == 0) {
    uVar19 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar19;
  }
  uVar15 = param_1[1];
  uVar14 = uVar15 + 1;
  uVar23 = (uVar14 & 0xfffffffffffffff8) - (uVar14 >> 3);
  if (uVar15 < 8) {
    uVar23 = uVar15;
  }
  if (uVar23 >> 1 < uVar19) {
    uVar14 = uVar23 + 1;
    if (uVar23 + 1 <= uVar19) {
      uVar14 = uVar19;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x2c0,uVar14);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    lVar25 = param_1[3];
    if (lVar25 == 0) {
      lVar25 = 0;
    }
    else {
      pauVar26 = (undefined1 (*) [16])*param_1;
      auVar29 = *pauVar26;
      uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
      lVar24 = 0;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar29 = pauVar26[1];
            pauVar26 = pauVar26 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar24 = lVar24 + 0x10;
          } while (uVar18 == 0);
        }
        uVar17 = 0;
        for (uVar13 = uVar18; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        uVar19 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar17 + lVar24) * -0x2c0 + -0x2c0);
        uVar14 = uVar19 & local_48;
        auVar29 = *(undefined1 (*) [16])(*local_50 + uVar14);
        uVar4 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
        uVar17 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar20 = 0x10;
          do {
            uVar14 = uVar14 + lVar20 & local_48;
            auVar29 = *(undefined1 (*) [16])(*local_50 + uVar14);
            lVar20 = lVar20 + 0x10;
            uVar17 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar17 == 0);
        }
        uVar13 = 0;
        for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        uVar14 = uVar13 + uVar14 & local_48;
        if (-1 < (char)(*local_50)[uVar14]) {
          auVar29 = *local_50;
          uVar17 = 0;
          for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar14 = (ulonglong)uVar17;
        }
        uVar18 = uVar18 - 1 & uVar18;
        uVar15 = uVar14 - 0x10 & local_48;
        bVar11 = (byte)(uVar19 >> 0x39);
        (*local_50)[uVar14] = bVar11;
        local_50[1][uVar15] = bVar11;
        lVar25 = lVar25 + -1;
        (*(code *)PTR_memcpy_00799008)(uVar15,0x2c0);
      } while (lVar25 != 0);
      lVar25 = param_1[3];
    }
    lVar24 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar25;
    param_1[3] = lVar25;
    if (lVar24 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar24 * 0x2c1 == -0x2d1) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(lVar25,0x10);
    return 0xffffffffffffffff;
  }
  if (uVar14 == 0) {
    uVar19 = 0;
    goto LAB_00469712;
  }
  lVar25 = *param_1;
  uVar19 = ((uVar14 >> 4) + 1) - (ulonglong)((uVar14 & 0xf) == 0);
  if (uVar19 == 1) {
    lVar24 = 0;
LAB_00469004:
    pcVar1 = (char *)(lVar25 + lVar24);
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
    *(undefined1 (*) [16])(lVar25 + lVar24) = auVar29 | _DAT_00183f90;
  }
  else {
    uVar23 = uVar19 & 0x1ffffffffffffffe;
    lVar24 = 0;
    do {
      pcVar1 = (char *)(lVar25 + lVar24);
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
      *(undefined1 (*) [16])(lVar25 + lVar24) = auVar30 | auVar29;
      pcVar1 = (char *)(lVar25 + 0x10 + lVar24);
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
      *(undefined1 (*) [16])(lVar25 + 0x10 + lVar24) = auVar31 | auVar29;
      lVar24 = lVar24 + 0x20;
      uVar23 = uVar23 - 2;
    } while (uVar23 != 0);
    if ((uVar19 & 1) != 0) goto LAB_00469004;
  }
  if (0xf < uVar14) {
    uVar14 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar24,uVar14);
  uVar19 = 0;
  lVar25 = 0;
  do {
    lVar24 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar24 + uVar19))) {
      pauVar27 = (undefined1 (*) [16])(~uVar19 * 0x2c0 + lVar24);
      pauVar26 = (undefined1 (*) [16])(uVar19 * -0x2c0 + lVar24);
      lVar20 = lVar24 + lVar25;
      while( true ) {
        uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar24 + uVar19 * -0x2c0 + -0x2c0);
        pauVar16 = (undefined1 (*) [16])*param_1;
        uVar14 = param_1[1];
        uVar21 = uVar14 & uVar12;
        auVar29 = *(undefined1 (*) [16])(*pauVar16 + uVar21);
        uVar4 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
        uVar18 = (uint)uVar4;
        uVar23 = uVar21;
        if (uVar4 == 0) {
          lVar24 = 0x10;
          do {
            uVar23 = uVar23 + lVar24 & uVar14;
            auVar29 = *(undefined1 (*) [16])(*pauVar16 + uVar23);
            lVar24 = lVar24 + 0x10;
            uVar18 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar18 == 0);
        }
        uVar17 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        uVar23 = uVar17 + uVar23 & uVar14;
        if (-1 < (char)(*pauVar16)[uVar23]) {
          auVar29 = *pauVar16;
          uVar18 = 0;
          for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar17 & 1) == 0;
              uVar17 = uVar17 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar23 = (ulonglong)uVar18;
        }
        bVar11 = (byte)(uVar12 >> 0x38);
        if (((uVar23 - uVar21 ^ uVar19 - uVar21) & uVar14) < 0x10) {
          bVar11 = bVar11 >> 1;
          (*pauVar16)[uVar19] = bVar11;
          *(byte *)(*param_1 + 0x10 + (uVar14 & uVar19 - 0x10)) = bVar11;
          goto LAB_0046967c;
        }
        pauVar22 = pauVar16 + ~uVar23 * 0x2c;
        cVar2 = (*pauVar16)[uVar23];
        bVar11 = bVar11 >> 1;
        (*pauVar16)[uVar23] = bVar11;
        *(byte *)(*param_1 + 0x10 + (uVar23 - 0x10 & uVar14)) = bVar11;
        if (cVar2 == -1) break;
        pauVar16 = pauVar16 + uVar23 * -0x2c;
        if ((pauVar27 < pauVar16) && (pauVar22 < pauVar26)) {
          lVar24 = -0x58;
          do {
            uVar3 = *(undefined8 *)(lVar20 + lVar24 * 8);
            *(undefined8 *)(lVar20 + lVar24 * 8) = *(undefined8 *)(*pauVar16 + lVar24 * 8);
            *(undefined8 *)(*pauVar16 + lVar24 * 8) = uVar3;
            uVar3 = *(undefined8 *)(lVar20 + 8 + lVar24 * 8);
            *(undefined8 *)(lVar20 + 8 + lVar24 * 8) = *(undefined8 *)(*pauVar16 + lVar24 * 8 + 8);
            *(undefined8 *)(*pauVar16 + lVar24 * 8 + 8) = uVar3;
            lVar24 = lVar24 + 2;
          } while (lVar24 != 0);
        }
        else {
          uVar3 = *(undefined8 *)*pauVar27;
          uVar5 = *(undefined8 *)(*pauVar27 + 8);
          uVar6 = *(undefined8 *)pauVar27[1];
          uVar7 = *(undefined8 *)(pauVar27[1] + 8);
          uVar8 = *(undefined8 *)(*pauVar22 + 8);
          uVar9 = *(undefined8 *)pauVar22[1];
          uVar10 = *(undefined8 *)(pauVar22[1] + 8);
          *(undefined8 *)*pauVar27 = *(undefined8 *)*pauVar22;
          *(undefined8 *)(*pauVar27 + 8) = uVar8;
          *(undefined8 *)pauVar27[1] = uVar9;
          *(undefined8 *)(pauVar27[1] + 8) = uVar10;
          *(undefined8 *)*pauVar22 = uVar3;
          *(undefined8 *)(*pauVar22 + 8) = uVar5;
          *(undefined8 *)pauVar22[1] = uVar6;
          *(undefined8 *)(pauVar22[1] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[2];
          uVar5 = *(undefined8 *)(pauVar27[2] + 8);
          uVar6 = *(undefined8 *)pauVar27[3];
          uVar7 = *(undefined8 *)(pauVar27[3] + 8);
          uVar8 = *(undefined8 *)(pauVar22[2] + 8);
          uVar9 = *(undefined8 *)pauVar22[3];
          uVar10 = *(undefined8 *)(pauVar22[3] + 8);
          *(undefined8 *)pauVar27[2] = *(undefined8 *)pauVar22[2];
          *(undefined8 *)(pauVar27[2] + 8) = uVar8;
          *(undefined8 *)pauVar27[3] = uVar9;
          *(undefined8 *)(pauVar27[3] + 8) = uVar10;
          *(undefined8 *)pauVar22[2] = uVar3;
          *(undefined8 *)(pauVar22[2] + 8) = uVar5;
          *(undefined8 *)pauVar22[3] = uVar6;
          *(undefined8 *)(pauVar22[3] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[4];
          uVar5 = *(undefined8 *)(pauVar27[4] + 8);
          uVar6 = *(undefined8 *)pauVar27[5];
          uVar7 = *(undefined8 *)(pauVar27[5] + 8);
          uVar8 = *(undefined8 *)(pauVar22[4] + 8);
          uVar9 = *(undefined8 *)pauVar22[5];
          uVar10 = *(undefined8 *)(pauVar22[5] + 8);
          *(undefined8 *)pauVar27[4] = *(undefined8 *)pauVar22[4];
          *(undefined8 *)(pauVar27[4] + 8) = uVar8;
          *(undefined8 *)pauVar27[5] = uVar9;
          *(undefined8 *)(pauVar27[5] + 8) = uVar10;
          *(undefined8 *)pauVar22[4] = uVar3;
          *(undefined8 *)(pauVar22[4] + 8) = uVar5;
          *(undefined8 *)pauVar22[5] = uVar6;
          *(undefined8 *)(pauVar22[5] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[6];
          uVar5 = *(undefined8 *)(pauVar27[6] + 8);
          uVar6 = *(undefined8 *)pauVar27[7];
          uVar7 = *(undefined8 *)(pauVar27[7] + 8);
          uVar8 = *(undefined8 *)(pauVar22[6] + 8);
          uVar9 = *(undefined8 *)pauVar22[7];
          uVar10 = *(undefined8 *)(pauVar22[7] + 8);
          *(undefined8 *)pauVar27[6] = *(undefined8 *)pauVar22[6];
          *(undefined8 *)(pauVar27[6] + 8) = uVar8;
          *(undefined8 *)pauVar27[7] = uVar9;
          *(undefined8 *)(pauVar27[7] + 8) = uVar10;
          *(undefined8 *)pauVar22[6] = uVar3;
          *(undefined8 *)(pauVar22[6] + 8) = uVar5;
          *(undefined8 *)pauVar22[7] = uVar6;
          *(undefined8 *)(pauVar22[7] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[8];
          uVar5 = *(undefined8 *)(pauVar27[8] + 8);
          uVar6 = *(undefined8 *)pauVar27[9];
          uVar7 = *(undefined8 *)(pauVar27[9] + 8);
          uVar8 = *(undefined8 *)(pauVar22[8] + 8);
          uVar9 = *(undefined8 *)pauVar22[9];
          uVar10 = *(undefined8 *)(pauVar22[9] + 8);
          *(undefined8 *)pauVar27[8] = *(undefined8 *)pauVar22[8];
          *(undefined8 *)(pauVar27[8] + 8) = uVar8;
          *(undefined8 *)pauVar27[9] = uVar9;
          *(undefined8 *)(pauVar27[9] + 8) = uVar10;
          *(undefined8 *)pauVar22[8] = uVar3;
          *(undefined8 *)(pauVar22[8] + 8) = uVar5;
          *(undefined8 *)pauVar22[9] = uVar6;
          *(undefined8 *)(pauVar22[9] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[10];
          uVar5 = *(undefined8 *)(pauVar27[10] + 8);
          uVar6 = *(undefined8 *)pauVar27[0xb];
          uVar7 = *(undefined8 *)(pauVar27[0xb] + 8);
          uVar8 = *(undefined8 *)(pauVar22[10] + 8);
          uVar9 = *(undefined8 *)pauVar22[0xb];
          uVar10 = *(undefined8 *)(pauVar22[0xb] + 8);
          *(undefined8 *)pauVar27[10] = *(undefined8 *)pauVar22[10];
          *(undefined8 *)(pauVar27[10] + 8) = uVar8;
          *(undefined8 *)pauVar27[0xb] = uVar9;
          *(undefined8 *)(pauVar27[0xb] + 8) = uVar10;
          *(undefined8 *)pauVar22[10] = uVar3;
          *(undefined8 *)(pauVar22[10] + 8) = uVar5;
          *(undefined8 *)pauVar22[0xb] = uVar6;
          *(undefined8 *)(pauVar22[0xb] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0xc];
          uVar5 = *(undefined8 *)(pauVar27[0xc] + 8);
          uVar6 = *(undefined8 *)pauVar27[0xd];
          uVar7 = *(undefined8 *)(pauVar27[0xd] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0xc] + 8);
          uVar9 = *(undefined8 *)pauVar22[0xd];
          uVar10 = *(undefined8 *)(pauVar22[0xd] + 8);
          *(undefined8 *)pauVar27[0xc] = *(undefined8 *)pauVar22[0xc];
          *(undefined8 *)(pauVar27[0xc] + 8) = uVar8;
          *(undefined8 *)pauVar27[0xd] = uVar9;
          *(undefined8 *)(pauVar27[0xd] + 8) = uVar10;
          *(undefined8 *)pauVar22[0xc] = uVar3;
          *(undefined8 *)(pauVar22[0xc] + 8) = uVar5;
          *(undefined8 *)pauVar22[0xd] = uVar6;
          *(undefined8 *)(pauVar22[0xd] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0xe];
          uVar5 = *(undefined8 *)(pauVar27[0xe] + 8);
          uVar6 = *(undefined8 *)pauVar27[0xf];
          uVar7 = *(undefined8 *)(pauVar27[0xf] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0xe] + 8);
          uVar9 = *(undefined8 *)pauVar22[0xf];
          uVar10 = *(undefined8 *)(pauVar22[0xf] + 8);
          *(undefined8 *)pauVar27[0xe] = *(undefined8 *)pauVar22[0xe];
          *(undefined8 *)(pauVar27[0xe] + 8) = uVar8;
          *(undefined8 *)pauVar27[0xf] = uVar9;
          *(undefined8 *)(pauVar27[0xf] + 8) = uVar10;
          *(undefined8 *)pauVar22[0xe] = uVar3;
          *(undefined8 *)(pauVar22[0xe] + 8) = uVar5;
          *(undefined8 *)pauVar22[0xf] = uVar6;
          *(undefined8 *)(pauVar22[0xf] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x10];
          uVar5 = *(undefined8 *)(pauVar27[0x10] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x11];
          uVar7 = *(undefined8 *)(pauVar27[0x11] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x10] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x11];
          uVar10 = *(undefined8 *)(pauVar22[0x11] + 8);
          *(undefined8 *)pauVar27[0x10] = *(undefined8 *)pauVar22[0x10];
          *(undefined8 *)(pauVar27[0x10] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x11] = uVar9;
          *(undefined8 *)(pauVar27[0x11] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x10] = uVar3;
          *(undefined8 *)(pauVar22[0x10] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x11] = uVar6;
          *(undefined8 *)(pauVar22[0x11] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x12];
          uVar5 = *(undefined8 *)(pauVar27[0x12] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x13];
          uVar7 = *(undefined8 *)(pauVar27[0x13] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x12] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x13];
          uVar10 = *(undefined8 *)(pauVar22[0x13] + 8);
          *(undefined8 *)pauVar27[0x12] = *(undefined8 *)pauVar22[0x12];
          *(undefined8 *)(pauVar27[0x12] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x13] = uVar9;
          *(undefined8 *)(pauVar27[0x13] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x12] = uVar3;
          *(undefined8 *)(pauVar22[0x12] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x13] = uVar6;
          *(undefined8 *)(pauVar22[0x13] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x14];
          uVar5 = *(undefined8 *)(pauVar27[0x14] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x15];
          uVar7 = *(undefined8 *)(pauVar27[0x15] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x14] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x15];
          uVar10 = *(undefined8 *)(pauVar22[0x15] + 8);
          *(undefined8 *)pauVar27[0x14] = *(undefined8 *)pauVar22[0x14];
          *(undefined8 *)(pauVar27[0x14] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x15] = uVar9;
          *(undefined8 *)(pauVar27[0x15] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x14] = uVar3;
          *(undefined8 *)(pauVar22[0x14] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x15] = uVar6;
          *(undefined8 *)(pauVar22[0x15] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x16];
          uVar5 = *(undefined8 *)(pauVar27[0x16] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x17];
          uVar7 = *(undefined8 *)(pauVar27[0x17] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x16] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x17];
          uVar10 = *(undefined8 *)(pauVar22[0x17] + 8);
          *(undefined8 *)pauVar27[0x16] = *(undefined8 *)pauVar22[0x16];
          *(undefined8 *)(pauVar27[0x16] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x17] = uVar9;
          *(undefined8 *)(pauVar27[0x17] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x16] = uVar3;
          *(undefined8 *)(pauVar22[0x16] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x17] = uVar6;
          *(undefined8 *)(pauVar22[0x17] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x18];
          uVar5 = *(undefined8 *)(pauVar27[0x18] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x19];
          uVar7 = *(undefined8 *)(pauVar27[0x19] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x18] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x19];
          uVar10 = *(undefined8 *)(pauVar22[0x19] + 8);
          *(undefined8 *)pauVar27[0x18] = *(undefined8 *)pauVar22[0x18];
          *(undefined8 *)(pauVar27[0x18] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x19] = uVar9;
          *(undefined8 *)(pauVar27[0x19] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x18] = uVar3;
          *(undefined8 *)(pauVar22[0x18] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x19] = uVar6;
          *(undefined8 *)(pauVar22[0x19] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x1a];
          uVar5 = *(undefined8 *)(pauVar27[0x1a] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x1b];
          uVar7 = *(undefined8 *)(pauVar27[0x1b] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x1a] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x1b];
          uVar10 = *(undefined8 *)(pauVar22[0x1b] + 8);
          *(undefined8 *)pauVar27[0x1a] = *(undefined8 *)pauVar22[0x1a];
          *(undefined8 *)(pauVar27[0x1a] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x1b] = uVar9;
          *(undefined8 *)(pauVar27[0x1b] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x1a] = uVar3;
          *(undefined8 *)(pauVar22[0x1a] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x1b] = uVar6;
          *(undefined8 *)(pauVar22[0x1b] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x1c];
          uVar5 = *(undefined8 *)(pauVar27[0x1c] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x1d];
          uVar7 = *(undefined8 *)(pauVar27[0x1d] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x1c] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x1d];
          uVar10 = *(undefined8 *)(pauVar22[0x1d] + 8);
          *(undefined8 *)pauVar27[0x1c] = *(undefined8 *)pauVar22[0x1c];
          *(undefined8 *)(pauVar27[0x1c] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x1d] = uVar9;
          *(undefined8 *)(pauVar27[0x1d] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x1c] = uVar3;
          *(undefined8 *)(pauVar22[0x1c] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x1d] = uVar6;
          *(undefined8 *)(pauVar22[0x1d] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x1e];
          uVar5 = *(undefined8 *)(pauVar27[0x1e] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x1f];
          uVar7 = *(undefined8 *)(pauVar27[0x1f] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x1e] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x1f];
          uVar10 = *(undefined8 *)(pauVar22[0x1f] + 8);
          *(undefined8 *)pauVar27[0x1e] = *(undefined8 *)pauVar22[0x1e];
          *(undefined8 *)(pauVar27[0x1e] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x1f] = uVar9;
          *(undefined8 *)(pauVar27[0x1f] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x1e] = uVar3;
          *(undefined8 *)(pauVar22[0x1e] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x1f] = uVar6;
          *(undefined8 *)(pauVar22[0x1f] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x20];
          uVar5 = *(undefined8 *)(pauVar27[0x20] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x21];
          uVar7 = *(undefined8 *)(pauVar27[0x21] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x20] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x21];
          uVar10 = *(undefined8 *)(pauVar22[0x21] + 8);
          *(undefined8 *)pauVar27[0x20] = *(undefined8 *)pauVar22[0x20];
          *(undefined8 *)(pauVar27[0x20] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x21] = uVar9;
          *(undefined8 *)(pauVar27[0x21] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x20] = uVar3;
          *(undefined8 *)(pauVar22[0x20] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x21] = uVar6;
          *(undefined8 *)(pauVar22[0x21] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x22];
          uVar5 = *(undefined8 *)(pauVar27[0x22] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x23];
          uVar7 = *(undefined8 *)(pauVar27[0x23] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x22] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x23];
          uVar10 = *(undefined8 *)(pauVar22[0x23] + 8);
          *(undefined8 *)pauVar27[0x22] = *(undefined8 *)pauVar22[0x22];
          *(undefined8 *)(pauVar27[0x22] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x23] = uVar9;
          *(undefined8 *)(pauVar27[0x23] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x22] = uVar3;
          *(undefined8 *)(pauVar22[0x22] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x23] = uVar6;
          *(undefined8 *)(pauVar22[0x23] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x24];
          uVar5 = *(undefined8 *)(pauVar27[0x24] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x25];
          uVar7 = *(undefined8 *)(pauVar27[0x25] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x24] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x25];
          uVar10 = *(undefined8 *)(pauVar22[0x25] + 8);
          *(undefined8 *)pauVar27[0x24] = *(undefined8 *)pauVar22[0x24];
          *(undefined8 *)(pauVar27[0x24] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x25] = uVar9;
          *(undefined8 *)(pauVar27[0x25] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x24] = uVar3;
          *(undefined8 *)(pauVar22[0x24] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x25] = uVar6;
          *(undefined8 *)(pauVar22[0x25] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x26];
          uVar5 = *(undefined8 *)(pauVar27[0x26] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x27];
          uVar7 = *(undefined8 *)(pauVar27[0x27] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x26] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x27];
          uVar10 = *(undefined8 *)(pauVar22[0x27] + 8);
          *(undefined8 *)pauVar27[0x26] = *(undefined8 *)pauVar22[0x26];
          *(undefined8 *)(pauVar27[0x26] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x27] = uVar9;
          *(undefined8 *)(pauVar27[0x27] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x26] = uVar3;
          *(undefined8 *)(pauVar22[0x26] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x27] = uVar6;
          *(undefined8 *)(pauVar22[0x27] + 8) = uVar7;
          uVar3 = *(undefined8 *)pauVar27[0x28];
          uVar5 = *(undefined8 *)(pauVar27[0x28] + 8);
          uVar6 = *(undefined8 *)pauVar27[0x29];
          uVar7 = *(undefined8 *)(pauVar27[0x29] + 8);
          uVar8 = *(undefined8 *)(pauVar22[0x28] + 8);
          uVar9 = *(undefined8 *)pauVar22[0x29];
          uVar10 = *(undefined8 *)(pauVar22[0x29] + 8);
          *(undefined8 *)pauVar27[0x28] = *(undefined8 *)pauVar22[0x28];
          *(undefined8 *)(pauVar27[0x28] + 8) = uVar8;
          *(undefined8 *)pauVar27[0x29] = uVar9;
          *(undefined8 *)(pauVar27[0x29] + 8) = uVar10;
          *(undefined8 *)pauVar22[0x28] = uVar3;
          *(undefined8 *)(pauVar22[0x28] + 8) = uVar5;
          *(undefined8 *)pauVar22[0x29] = uVar6;
          *(undefined8 *)(pauVar22[0x29] + 8) = uVar7;
          auVar29 = pauVar27[0x2a];
          auVar30 = pauVar27[0x2b];
          uVar3 = *(undefined8 *)(pauVar22[0x2a] + 8);
          uVar5 = *(undefined8 *)pauVar22[0x2b];
          uVar6 = *(undefined8 *)(pauVar22[0x2b] + 8);
          *(undefined8 *)pauVar27[0x2a] = *(undefined8 *)pauVar22[0x2a];
          *(undefined8 *)(pauVar27[0x2a] + 8) = uVar3;
          *(undefined8 *)pauVar27[0x2b] = uVar5;
          *(undefined8 *)(pauVar27[0x2b] + 8) = uVar6;
          pauVar22[0x2a] = auVar29;
          pauVar22[0x2b] = auVar30;
        }
        lVar24 = *param_1;
      }
      uVar14 = param_1[1];
      *(undefined1 *)(*param_1 + uVar19) = 0xff;
      lVar24 = *param_1;
      *(undefined1 *)(lVar24 + 0x10 + (uVar19 - 0x10 & uVar14)) = 0xff;
      (*(code *)PTR_memcpy_00799008)(lVar24,0x2c0);
    }
LAB_0046967c:
    lVar25 = lVar25 + -0x2c0;
    bVar28 = uVar19 != uVar15;
    uVar19 = uVar19 + 1;
  } while (bVar28);
  uVar14 = param_1[1];
  lVar25 = param_1[3];
  uVar19 = (uVar14 + 1 & 0xfffffffffffffff8) - (uVar14 + 1 >> 3);
  if (uVar14 < 8) {
    uVar19 = uVar14;
  }
LAB_00469712:
  param_1[2] = uVar19 - lVar25;
  return 0xffffffffffffffff;
}


