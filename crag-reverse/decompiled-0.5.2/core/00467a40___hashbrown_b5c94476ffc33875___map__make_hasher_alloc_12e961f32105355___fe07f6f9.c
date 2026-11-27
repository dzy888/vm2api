// 00467a40 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

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
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong *plVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  longlong lVar36;
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  
  auVar30 = _DAT_00183f90;
  lVar20 = param_1[3];
  uVar22 = lVar20 + 1;
  if (uVar22 == 0) {
    uVar22 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar22;
  }
  uVar18 = param_1[1];
  uVar11 = uVar18 + 1;
  uVar25 = (uVar11 & 0xfffffffffffffff8) - (uVar11 >> 3);
  if (uVar18 < 8) {
    uVar25 = uVar18;
  }
  if (uVar25 >> 1 < uVar22) {
    uVar11 = uVar25 + 1;
    if (uVar25 + 1 <= uVar22) {
      uVar11 = uVar22;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x80,uVar11);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar33 = param_1 + 4;
    uVar34 = 0x80;
    uVar35 = 0x10;
    lVar20 = param_1[3];
    pauVar21 = local_50;
    uVar22 = local_48;
    lVar15 = local_40;
    lVar36 = local_38;
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      pauVar26 = (undefined1 (*) [16])*param_1;
      auVar30 = *pauVar26;
      uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
        if ((short)uVar19 == 0) {
          do {
            auVar30 = pauVar26[1];
            pauVar26 = pauVar26 + 1;
            uVar19 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
          } while (uVar19 == 0);
        }
        uVar24 = 0;
        for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar24 + lVar27) * -0x80 + -0x80);
        uVar18 = uVar11 & local_48;
        auVar30 = *(undefined1 (*) [16])(*local_50 + uVar18);
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
        uVar13 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar23 = 0x10;
          do {
            uVar18 = uVar18 + lVar23 & local_48;
            auVar30 = *(undefined1 (*) [16])(*local_50 + uVar18);
            lVar23 = lVar23 + 0x10;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        uVar14 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar18 = uVar14 + uVar18 & local_48;
        if (-1 < (char)(*local_50)[uVar18]) {
          auVar30 = *local_50;
          uVar13 = 0;
          for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar18 = (ulonglong)uVar13;
        }
        uVar19 = uVar19 - 1 & uVar19;
        lVar20 = lVar20 + -1;
        bVar10 = (byte)(uVar11 >> 0x39);
        (*local_50)[uVar18] = bVar10;
        local_50[1][uVar18 - 0x10 & local_48] = bVar10;
        lVar23 = *param_1;
        lVar28 = ~((ulonglong)uVar24 + lVar27) * 0x80;
        uVar18 = ~uVar18;
        local_38 = uVar18 * 0x80;
        puVar2 = (undefined8 *)(lVar23 + 0x70 + lVar28);
        uVar5 = puVar2[1];
        *(undefined8 *)local_50[uVar18 * 8 + 7] = *puVar2;
        *(undefined8 *)(local_50[uVar18 * 8 + 7] + 8) = uVar5;
        puVar2 = (undefined8 *)(lVar23 + 0x60 + lVar28);
        uVar5 = puVar2[1];
        *(undefined8 *)local_50[uVar18 * 8 + 6] = *puVar2;
        *(undefined8 *)(local_50[uVar18 * 8 + 6] + 8) = uVar5;
        puVar2 = (undefined8 *)(lVar23 + 0x50 + lVar28);
        uVar5 = puVar2[1];
        *(undefined8 *)local_50[uVar18 * 8 + 5] = *puVar2;
        *(undefined8 *)(local_50[uVar18 * 8 + 5] + 8) = uVar5;
        puVar2 = (undefined8 *)(lVar23 + 0x40 + lVar28);
        uVar5 = puVar2[1];
        *(undefined8 *)local_50[uVar18 * 8 + 4] = *puVar2;
        *(undefined8 *)(local_50[uVar18 * 8 + 4] + 8) = uVar5;
        auVar30 = *(undefined1 (*) [16])(lVar23 + lVar28);
        puVar2 = (undefined8 *)(lVar23 + 0x10 + lVar28);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar23 + 0x20 + lVar28);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar23 + 0x30 + lVar28);
        uVar9 = puVar2[1];
        *(undefined8 *)local_50[uVar18 * 8 + 3] = *puVar2;
        *(undefined8 *)(local_50[uVar18 * 8 + 3] + 8) = uVar9;
        *(undefined8 *)local_50[uVar18 * 8 + 2] = uVar7;
        *(undefined8 *)(local_50[uVar18 * 8 + 2] + 8) = uVar8;
        *(undefined8 *)local_50[uVar18 * 8 + 1] = uVar5;
        *(undefined8 *)(local_50[uVar18 * 8 + 1] + 8) = uVar6;
        local_50[uVar18 * 8] = auVar30;
      } while (lVar20 != 0);
      lVar20 = param_1[3];
    }
    lVar27 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar20;
    param_1[3] = lVar20;
    if (lVar27 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar27 * 0x81 == -0x91) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,param_1,local_48,plVar33,uVar34,uVar35,pauVar21,uVar22,lVar15,lVar36);
    return 0xffffffffffffffff;
  }
  if (uVar11 == 0) {
    uVar22 = 0;
    goto LAB_0046802d;
  }
  lVar20 = *param_1;
  uVar22 = ((uVar11 >> 4) + 1) - (ulonglong)((uVar11 & 0xf) == 0);
  if (uVar22 == 1) {
    lVar15 = 0;
LAB_00467d24:
    pcVar1 = (char *)(lVar20 + lVar15);
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
    *(undefined1 (*) [16])(lVar20 + lVar15) = auVar30 | _DAT_00183f90;
  }
  else {
    uVar25 = uVar22 & 0x1ffffffffffffffe;
    lVar15 = 0;
    do {
      pcVar1 = (char *)(lVar20 + lVar15);
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
      *(undefined1 (*) [16])(lVar20 + lVar15) = auVar31 | auVar30;
      pcVar1 = (char *)(lVar20 + 0x10 + lVar15);
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
      *(undefined1 (*) [16])(lVar20 + 0x10 + lVar15) = auVar32 | auVar30;
      lVar15 = lVar15 + 0x20;
      uVar25 = uVar25 - 2;
    } while (uVar25 != 0);
    if ((uVar22 & 1) != 0) goto LAB_00467d24;
  }
  if (0xf < uVar11) {
    uVar11 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar15,uVar11);
  uVar22 = 0;
  do {
    lVar20 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar20 + uVar22))) {
      pauVar21 = (undefined1 (*) [16])(~uVar22 * 0x80 + lVar20);
      while( true ) {
        uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar20 + uVar22 * -0x80 + -0x80);
        pauVar26 = (undefined1 (*) [16])*param_1;
        uVar11 = param_1[1];
        uVar16 = uVar11 & uVar12;
        auVar30 = *(undefined1 (*) [16])(*pauVar26 + uVar16);
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
        uVar19 = (uint)uVar4;
        uVar25 = uVar16;
        if (uVar4 == 0) {
          lVar20 = 0x10;
          do {
            uVar25 = uVar25 + lVar20 & uVar11;
            auVar30 = *(undefined1 (*) [16])(*pauVar26 + uVar25);
            lVar20 = lVar20 + 0x10;
            uVar19 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
          } while (uVar19 == 0);
        }
        uVar24 = 0;
        for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar25 = uVar24 + uVar25 & uVar11;
        if (-1 < (char)(*pauVar26)[uVar25]) {
          auVar30 = *pauVar26;
          uVar19 = 0;
          for (uVar24 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar24 & 1) == 0;
              uVar24 = uVar24 >> 1 | 0x80000000) {
            uVar19 = uVar19 + 1;
          }
          uVar25 = (ulonglong)uVar19;
        }
        bVar10 = (byte)(uVar12 >> 0x38);
        if (((uVar25 - uVar16 ^ uVar22 - uVar16) & uVar11) < 0x10) {
          bVar10 = bVar10 >> 1;
          (*pauVar26)[uVar22] = bVar10;
          *(byte *)(*param_1 + 0x10 + (uVar11 & uVar22 - 0x10)) = bVar10;
          goto LAB_00467f77;
        }
        pauVar17 = pauVar26 + ~uVar25 * 8;
        cVar3 = (*pauVar26)[uVar25];
        bVar10 = bVar10 >> 1;
        (*pauVar26)[uVar25] = bVar10;
        *(byte *)(*param_1 + 0x10 + (uVar25 - 0x10 & uVar11)) = bVar10;
        if (cVar3 == -1) break;
        uVar34 = *(undefined8 *)*pauVar21;
        *(undefined8 *)*pauVar21 = *(undefined8 *)*pauVar17;
        *(undefined8 *)*pauVar17 = uVar34;
        uVar34 = *(undefined8 *)(*pauVar21 + 8);
        *(undefined8 *)(*pauVar21 + 8) = *(undefined8 *)(*pauVar17 + 8);
        *(undefined8 *)(*pauVar17 + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar21[1];
        *(undefined8 *)pauVar21[1] = *(undefined8 *)pauVar17[1];
        *(undefined8 *)pauVar17[1] = uVar34;
        uVar34 = *(undefined8 *)(pauVar21[1] + 8);
        *(undefined8 *)(pauVar21[1] + 8) = *(undefined8 *)(pauVar17[1] + 8);
        *(undefined8 *)(pauVar17[1] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar21[2];
        *(undefined8 *)pauVar21[2] = *(undefined8 *)pauVar17[2];
        *(undefined8 *)pauVar17[2] = uVar34;
        uVar34 = *(undefined8 *)(pauVar21[2] + 8);
        *(undefined8 *)(pauVar21[2] + 8) = *(undefined8 *)(pauVar17[2] + 8);
        *(undefined8 *)(pauVar17[2] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar21[3];
        *(undefined8 *)pauVar21[3] = *(undefined8 *)pauVar17[3];
        *(undefined8 *)pauVar17[3] = uVar34;
        uVar34 = *(undefined8 *)(pauVar21[3] + 8);
        *(undefined8 *)(pauVar21[3] + 8) = *(undefined8 *)(pauVar17[3] + 8);
        *(undefined8 *)(pauVar17[3] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar21[4];
        *(undefined8 *)pauVar21[4] = *(undefined8 *)pauVar17[4];
        *(undefined8 *)pauVar17[4] = uVar34;
        uVar34 = *(undefined8 *)(pauVar21[4] + 8);
        *(undefined8 *)(pauVar21[4] + 8) = *(undefined8 *)(pauVar17[4] + 8);
        *(undefined8 *)(pauVar17[4] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar21[5];
        *(undefined8 *)pauVar21[5] = *(undefined8 *)pauVar17[5];
        *(undefined8 *)pauVar17[5] = uVar34;
        uVar34 = *(undefined8 *)(pauVar21[5] + 8);
        *(undefined8 *)(pauVar21[5] + 8) = *(undefined8 *)(pauVar17[5] + 8);
        *(undefined8 *)(pauVar17[5] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar21[6];
        *(undefined8 *)pauVar21[6] = *(undefined8 *)pauVar17[6];
        *(undefined8 *)pauVar17[6] = uVar34;
        uVar34 = *(undefined8 *)(pauVar21[6] + 8);
        *(undefined8 *)(pauVar21[6] + 8) = *(undefined8 *)(pauVar17[6] + 8);
        *(undefined8 *)(pauVar17[6] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar21[7];
        *(undefined8 *)pauVar21[7] = *(undefined8 *)pauVar17[7];
        *(undefined8 *)pauVar17[7] = uVar34;
        uVar34 = *(undefined8 *)(pauVar21[7] + 8);
        *(undefined8 *)(pauVar21[7] + 8) = *(undefined8 *)(pauVar17[7] + 8);
        *(undefined8 *)(pauVar17[7] + 8) = uVar34;
        lVar20 = *param_1;
      }
      uVar11 = param_1[1];
      *(undefined1 *)(*param_1 + uVar22) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar22 - 0x10 & uVar11)) = 0xff;
      uVar34 = *(undefined8 *)(pauVar21[7] + 8);
      *(undefined8 *)pauVar17[7] = *(undefined8 *)pauVar21[7];
      *(undefined8 *)(pauVar17[7] + 8) = uVar34;
      uVar34 = *(undefined8 *)(pauVar21[6] + 8);
      *(undefined8 *)pauVar17[6] = *(undefined8 *)pauVar21[6];
      *(undefined8 *)(pauVar17[6] + 8) = uVar34;
      uVar34 = *(undefined8 *)(pauVar21[5] + 8);
      *(undefined8 *)pauVar17[5] = *(undefined8 *)pauVar21[5];
      *(undefined8 *)(pauVar17[5] + 8) = uVar34;
      uVar34 = *(undefined8 *)(pauVar21[4] + 8);
      *(undefined8 *)pauVar17[4] = *(undefined8 *)pauVar21[4];
      *(undefined8 *)(pauVar17[4] + 8) = uVar34;
      auVar30 = *pauVar21;
      uVar34 = *(undefined8 *)pauVar21[1];
      uVar35 = *(undefined8 *)(pauVar21[1] + 8);
      uVar5 = *(undefined8 *)pauVar21[2];
      uVar6 = *(undefined8 *)(pauVar21[2] + 8);
      uVar7 = *(undefined8 *)(pauVar21[3] + 8);
      *(undefined8 *)pauVar17[3] = *(undefined8 *)pauVar21[3];
      *(undefined8 *)(pauVar17[3] + 8) = uVar7;
      *(undefined8 *)pauVar17[2] = uVar5;
      *(undefined8 *)(pauVar17[2] + 8) = uVar6;
      *(undefined8 *)pauVar17[1] = uVar34;
      *(undefined8 *)(pauVar17[1] + 8) = uVar35;
      *pauVar17 = auVar30;
    }
LAB_00467f77:
    bVar29 = uVar22 != uVar18;
    uVar22 = uVar22 + 1;
  } while (bVar29);
  uVar11 = param_1[1];
  lVar20 = param_1[3];
  uVar22 = (uVar11 + 1 & 0xfffffffffffffff8) - (uVar11 + 1 >> 3);
  if (uVar11 < 8) {
    uVar22 = uVar11;
  }
LAB_0046802d:
  param_1[2] = uVar22 - lVar20;
  return 0xffffffffffffffff;
}


