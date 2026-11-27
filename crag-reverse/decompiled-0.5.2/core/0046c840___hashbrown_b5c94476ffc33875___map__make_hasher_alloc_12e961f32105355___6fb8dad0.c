// 0046c840 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(std[6c98fd8553dbae28]::time::Instant,u32),std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   (std[6c98fd8553dbae28]::time::Instant,
   u32))>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   (std[6c98fd8553dbae28]::time::Instant, u32),
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,(std[6c98fd8553dbae28]::time::Instant,u32))>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(std[6c98fd8553dbae28]::time::Instant,u32),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong *plVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  auVar28 = _DAT_00183f90;
  lVar17 = param_1[3];
  uVar18 = lVar17 + 1;
  if (uVar18 == 0) {
    uVar18 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar18;
  }
  uVar9 = param_1[1];
  uVar15 = uVar9 + 1;
  uVar12 = (uVar15 & 0xfffffffffffffff8) - (uVar15 >> 3);
  if (uVar9 < 8) {
    uVar12 = uVar9;
  }
  if (uVar12 >> 1 < uVar18) {
    uVar15 = uVar12 + 1;
    if (uVar12 + 1 <= uVar18) {
      uVar15 = uVar18;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x30,uVar15);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar31 = param_1 + 4;
    uVar32 = 0x30;
    uVar33 = 0x10;
    lVar17 = param_1[3];
    pauVar26 = local_50;
    uVar18 = local_48;
    lVar13 = local_40;
    uVar15 = local_38;
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      pauVar24 = (undefined1 (*) [16])*param_1;
      auVar28 = *pauVar24;
      uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar28[0xf] >> 7) << 0xf);
      lVar25 = 0;
      do {
        if ((short)uVar16 == 0) {
          do {
            auVar28 = pauVar24[1];
            pauVar24 = pauVar24 + 1;
            uVar16 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar25 = lVar25 + 0x10;
          } while (uVar16 == 0);
        }
        uVar23 = 0;
        for (uVar14 = uVar16; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&alloc[12e961f32105355]::string::String>
                          (param_2,*param_1 + ((ulonglong)uVar23 + lVar25) * -0x30 + -0x30);
        uVar12 = uVar9 & local_48;
        auVar28 = *(undefined1 (*) [16])(*local_50 + uVar12);
        uVar4 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
        uVar14 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar20 = 0x10;
          do {
            uVar12 = uVar12 + lVar20 & local_48;
            auVar28 = *(undefined1 (*) [16])(*local_50 + uVar12);
            lVar20 = lVar20 + 0x10;
            uVar14 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar28[0xf] >> 7) << 0xf);
          } while (uVar14 == 0);
        }
        uVar11 = 0;
        for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = uVar11 + uVar12 & local_48;
        if (-1 < (char)(*local_50)[uVar12]) {
          auVar28 = *local_50;
          uVar14 = 0;
          for (uVar11 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar28[0xf] >> 7) << 0xf); (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar12 = (ulonglong)uVar14;
        }
        uVar16 = uVar16 - 1 & uVar16;
        local_38 = (ulonglong)uVar16;
        lVar17 = lVar17 + -1;
        bVar8 = (byte)(uVar9 >> 0x39);
        (*local_50)[uVar12] = bVar8;
        local_50[1][uVar12 - 0x10 & local_48] = bVar8;
        lVar20 = *param_1;
        lVar19 = ~((ulonglong)uVar23 + lVar25) * 0x30;
        uVar12 = ~uVar12;
        auVar28 = *(undefined1 (*) [16])(lVar20 + lVar19);
        puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar19);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar19);
        uVar7 = puVar2[1];
        *(undefined8 *)local_50[uVar12 * 3 + 2] = *puVar2;
        *(undefined8 *)(local_50[uVar12 * 3 + 2] + 8) = uVar7;
        *(undefined8 *)local_50[uVar12 * 3 + 1] = uVar5;
        *(undefined8 *)(local_50[uVar12 * 3 + 1] + 8) = uVar6;
        local_50[uVar12 * 3] = auVar28;
      } while (lVar17 != 0);
      lVar17 = param_1[3];
    }
    lVar25 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar17;
    param_1[3] = lVar17;
    if (lVar25 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar25 * 0x31 == -0x41) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,param_1,local_48,plVar31,uVar32,uVar33,pauVar26,uVar18,lVar13,uVar15);
    return 0xffffffffffffffff;
  }
  if (uVar15 == 0) {
    uVar18 = 0;
    goto LAB_0046cd38;
  }
  lVar17 = *param_1;
  uVar18 = ((uVar15 >> 4) + 1) - (ulonglong)((uVar15 & 0xf) == 0);
  if (uVar18 == 1) {
    lVar13 = 0;
LAB_0046cae4:
    pcVar1 = (char *)(lVar17 + lVar13);
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
    *(undefined1 (*) [16])(lVar17 + lVar13) = auVar28 | _DAT_00183f90;
  }
  else {
    uVar12 = uVar18 & 0x1ffffffffffffffe;
    lVar13 = 0;
    do {
      pcVar1 = (char *)(lVar17 + lVar13);
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
      *(undefined1 (*) [16])(lVar17 + lVar13) = auVar29 | auVar28;
      pcVar1 = (char *)(lVar17 + 0x10 + lVar13);
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
      *(undefined1 (*) [16])(lVar17 + 0x10 + lVar13) = auVar30 | auVar28;
      lVar13 = lVar13 + 0x20;
      uVar12 = uVar12 - 2;
    } while (uVar12 != 0);
    if ((uVar18 & 1) != 0) goto LAB_0046cae4;
  }
  if (0xf < uVar15) {
    uVar15 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar13,uVar15);
  uVar18 = 0;
  do {
    lVar17 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar17 + uVar18))) {
      pauVar26 = (undefined1 (*) [16])(~uVar18 * 0x30 + lVar17);
      while( true ) {
        uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar17 + uVar18 * -0x30 + -0x30);
        pauVar24 = (undefined1 (*) [16])*param_1;
        uVar15 = param_1[1];
        uVar21 = uVar15 & uVar10;
        auVar28 = *(undefined1 (*) [16])(*pauVar24 + uVar21);
        uVar4 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
        uVar16 = (uint)uVar4;
        uVar12 = uVar21;
        if (uVar4 == 0) {
          lVar17 = 0x10;
          do {
            uVar12 = uVar12 + lVar17 & uVar15;
            auVar28 = *(undefined1 (*) [16])(*pauVar24 + uVar12);
            lVar17 = lVar17 + 0x10;
            uVar16 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar28[0xf] >> 7) << 0xf);
          } while (uVar16 == 0);
        }
        uVar23 = 0;
        for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar12 = uVar23 + uVar12 & uVar15;
        if (-1 < (char)(*pauVar24)[uVar12]) {
          auVar28 = *pauVar24;
          uVar16 = 0;
          for (uVar23 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar28[0xf] >> 7) << 0xf); (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          uVar12 = (ulonglong)uVar16;
        }
        bVar8 = (byte)(uVar10 >> 0x38);
        if (((uVar12 - uVar21 ^ uVar18 - uVar21) & uVar15) < 0x10) {
          bVar8 = bVar8 >> 1;
          (*pauVar24)[uVar18] = bVar8;
          *(byte *)(*param_1 + 0x10 + (uVar15 & uVar18 - 0x10)) = bVar8;
          goto LAB_0046cca7;
        }
        pauVar22 = pauVar24 + ~uVar12 * 3;
        cVar3 = (*pauVar24)[uVar12];
        bVar8 = bVar8 >> 1;
        (*pauVar24)[uVar12] = bVar8;
        *(byte *)(*param_1 + 0x10 + (uVar12 - 0x10 & uVar15)) = bVar8;
        if (cVar3 == -1) break;
        uVar32 = *(undefined8 *)*pauVar26;
        *(undefined8 *)*pauVar26 = *(undefined8 *)*pauVar22;
        *(undefined8 *)*pauVar22 = uVar32;
        uVar32 = *(undefined8 *)(*pauVar26 + 8);
        *(undefined8 *)(*pauVar26 + 8) = *(undefined8 *)(*pauVar22 + 8);
        *(undefined8 *)(*pauVar22 + 8) = uVar32;
        uVar32 = *(undefined8 *)pauVar26[1];
        *(undefined8 *)pauVar26[1] = *(undefined8 *)pauVar22[1];
        *(undefined8 *)pauVar22[1] = uVar32;
        uVar32 = *(undefined8 *)(pauVar26[1] + 8);
        *(undefined8 *)(pauVar26[1] + 8) = *(undefined8 *)(pauVar22[1] + 8);
        *(undefined8 *)(pauVar22[1] + 8) = uVar32;
        uVar32 = *(undefined8 *)pauVar26[2];
        *(undefined8 *)pauVar26[2] = *(undefined8 *)pauVar22[2];
        *(undefined8 *)pauVar22[2] = uVar32;
        uVar32 = *(undefined8 *)(pauVar26[2] + 8);
        *(undefined8 *)(pauVar26[2] + 8) = *(undefined8 *)(pauVar22[2] + 8);
        *(undefined8 *)(pauVar22[2] + 8) = uVar32;
        lVar17 = *param_1;
      }
      uVar15 = param_1[1];
      *(undefined1 *)(*param_1 + uVar18) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar18 - 0x10 & uVar15)) = 0xff;
      auVar28 = *pauVar26;
      uVar32 = *(undefined8 *)pauVar26[1];
      uVar33 = *(undefined8 *)(pauVar26[1] + 8);
      uVar5 = *(undefined8 *)(pauVar26[2] + 8);
      *(undefined8 *)pauVar22[2] = *(undefined8 *)pauVar26[2];
      *(undefined8 *)(pauVar22[2] + 8) = uVar5;
      *(undefined8 *)pauVar22[1] = uVar32;
      *(undefined8 *)(pauVar22[1] + 8) = uVar33;
      *pauVar22 = auVar28;
    }
LAB_0046cca7:
    bVar27 = uVar18 != uVar9;
    uVar18 = uVar18 + 1;
  } while (bVar27);
  uVar15 = param_1[1];
  lVar17 = param_1[3];
  uVar18 = (uVar15 + 1 & 0xfffffffffffffff8) - (uVar15 + 1 >> 3);
  if (uVar15 < 8) {
    uVar18 = uVar15;
  }
LAB_0046cd38:
  param_1[2] = uVar18 - lVar17;
  return 0xffffffffffffffff;
}


