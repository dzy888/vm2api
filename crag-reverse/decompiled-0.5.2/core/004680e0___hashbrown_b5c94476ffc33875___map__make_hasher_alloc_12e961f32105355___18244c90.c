// 004680e0 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
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
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  ulonglong uVar24;
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  undefined1 (*pauVar27) [16];
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
  lVar18 = param_1[3];
  uVar19 = lVar18 + 1;
  if (uVar19 == 0) {
    uVar19 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar19;
  }
  uVar16 = param_1[1];
  uVar11 = uVar16 + 1;
  uVar24 = (uVar11 & 0xfffffffffffffff8) - (uVar11 >> 3);
  if (uVar16 < 8) {
    uVar24 = uVar16;
  }
  if (uVar24 >> 1 < uVar19) {
    uVar11 = uVar24 + 1;
    if (uVar24 + 1 <= uVar19) {
      uVar11 = uVar19;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x40,uVar11);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar33 = param_1 + 4;
    uVar34 = 0x40;
    uVar35 = 0x10;
    lVar18 = param_1[3];
    pauVar27 = local_50;
    uVar19 = local_48;
    lVar15 = local_40;
    lVar36 = local_38;
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      pauVar25 = (undefined1 (*) [16])*param_1;
      auVar30 = *pauVar25;
      uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
      lVar26 = 0;
      do {
        if ((short)uVar17 == 0) {
          do {
            auVar30 = pauVar25[1];
            pauVar25 = pauVar25 + 1;
            uVar17 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
            lVar26 = lVar26 + 0x10;
          } while (uVar17 == 0);
        }
        uVar23 = 0;
        for (uVar13 = uVar17; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar23 + lVar26) * -0x40 + -0x40);
        uVar16 = uVar11 & local_48;
        auVar30 = *(undefined1 (*) [16])(*local_50 + uVar16);
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
          lVar20 = 0x10;
          do {
            uVar16 = uVar16 + lVar20 & local_48;
            auVar30 = *(undefined1 (*) [16])(*local_50 + uVar16);
            lVar20 = lVar20 + 0x10;
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
        uVar16 = uVar14 + uVar16 & local_48;
        if (-1 < (char)(*local_50)[uVar16]) {
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
          uVar16 = (ulonglong)uVar13;
        }
        uVar17 = uVar17 - 1 & uVar17;
        lVar18 = lVar18 + -1;
        bVar10 = (byte)(uVar11 >> 0x39);
        (*local_50)[uVar16] = bVar10;
        local_50[1][uVar16 - 0x10 & local_48] = bVar10;
        lVar20 = *param_1;
        lVar28 = ~((ulonglong)uVar23 + lVar26) * 0x40;
        uVar16 = ~uVar16;
        local_38 = uVar16 * 0x40;
        auVar30 = *(undefined1 (*) [16])(lVar20 + lVar28);
        puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar28);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar28);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar20 + 0x30 + lVar28);
        uVar9 = puVar2[1];
        *(undefined8 *)local_50[uVar16 * 4 + 3] = *puVar2;
        *(undefined8 *)(local_50[uVar16 * 4 + 3] + 8) = uVar9;
        *(undefined8 *)local_50[uVar16 * 4 + 2] = uVar7;
        *(undefined8 *)(local_50[uVar16 * 4 + 2] + 8) = uVar8;
        *(undefined8 *)local_50[uVar16 * 4 + 1] = uVar5;
        *(undefined8 *)(local_50[uVar16 * 4 + 1] + 8) = uVar6;
        local_50[uVar16 * 4] = auVar30;
      } while (lVar18 != 0);
      lVar18 = param_1[3];
    }
    lVar26 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar18;
    param_1[3] = lVar18;
    if (lVar26 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar26 * 0x41 == -0x51) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,param_1,local_48,plVar33,uVar34,uVar35,pauVar27,uVar19,lVar15,lVar36);
    return 0xffffffffffffffff;
  }
  if (uVar11 == 0) {
    uVar19 = 0;
    goto LAB_004685f9;
  }
  lVar18 = *param_1;
  uVar19 = ((uVar11 >> 4) + 1) - (ulonglong)((uVar11 & 0xf) == 0);
  if (uVar19 == 1) {
    lVar15 = 0;
LAB_00468394:
    pcVar1 = (char *)(lVar18 + lVar15);
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
    *(undefined1 (*) [16])(lVar18 + lVar15) = auVar30 | _DAT_00183f90;
  }
  else {
    uVar24 = uVar19 & 0x1ffffffffffffffe;
    lVar15 = 0;
    do {
      pcVar1 = (char *)(lVar18 + lVar15);
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
      *(undefined1 (*) [16])(lVar18 + lVar15) = auVar31 | auVar30;
      pcVar1 = (char *)(lVar18 + 0x10 + lVar15);
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
      *(undefined1 (*) [16])(lVar18 + 0x10 + lVar15) = auVar32 | auVar30;
      lVar15 = lVar15 + 0x20;
      uVar24 = uVar24 - 2;
    } while (uVar24 != 0);
    if ((uVar19 & 1) != 0) goto LAB_00468394;
  }
  if (0xf < uVar11) {
    uVar11 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar15,uVar11);
  uVar19 = 0;
  do {
    lVar18 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar18 + uVar19))) {
      pauVar27 = (undefined1 (*) [16])(~uVar19 * 0x40 + lVar18);
      while( true ) {
        uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar18 + uVar19 * -0x40 + -0x40);
        pauVar25 = (undefined1 (*) [16])*param_1;
        uVar11 = param_1[1];
        uVar21 = uVar11 & uVar12;
        auVar30 = *(undefined1 (*) [16])(*pauVar25 + uVar21);
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
        uVar17 = (uint)uVar4;
        uVar24 = uVar21;
        if (uVar4 == 0) {
          lVar18 = 0x10;
          do {
            uVar24 = uVar24 + lVar18 & uVar11;
            auVar30 = *(undefined1 (*) [16])(*pauVar25 + uVar24);
            lVar18 = lVar18 + 0x10;
            uVar17 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
          } while (uVar17 == 0);
        }
        uVar23 = 0;
        for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar23 = uVar23 + 1;
        }
        uVar24 = uVar23 + uVar24 & uVar11;
        if (-1 < (char)(*pauVar25)[uVar24]) {
          auVar30 = *pauVar25;
          uVar17 = 0;
          for (uVar23 = (uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf); (uVar23 & 1) == 0;
              uVar23 = uVar23 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar24 = (ulonglong)uVar17;
        }
        bVar10 = (byte)(uVar12 >> 0x38);
        if (((uVar24 - uVar21 ^ uVar19 - uVar21) & uVar11) < 0x10) {
          bVar10 = bVar10 >> 1;
          (*pauVar25)[uVar19] = bVar10;
          *(byte *)(*param_1 + 0x10 + (uVar11 & uVar19 - 0x10)) = bVar10;
          goto LAB_00468567;
        }
        pauVar22 = pauVar25 + ~uVar24 * 4;
        cVar3 = (*pauVar25)[uVar24];
        bVar10 = bVar10 >> 1;
        (*pauVar25)[uVar24] = bVar10;
        *(byte *)(*param_1 + 0x10 + (uVar24 - 0x10 & uVar11)) = bVar10;
        if (cVar3 == -1) break;
        uVar34 = *(undefined8 *)*pauVar27;
        *(undefined8 *)*pauVar27 = *(undefined8 *)*pauVar22;
        *(undefined8 *)*pauVar22 = uVar34;
        uVar34 = *(undefined8 *)(*pauVar27 + 8);
        *(undefined8 *)(*pauVar27 + 8) = *(undefined8 *)(*pauVar22 + 8);
        *(undefined8 *)(*pauVar22 + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar27[1];
        *(undefined8 *)pauVar27[1] = *(undefined8 *)pauVar22[1];
        *(undefined8 *)pauVar22[1] = uVar34;
        uVar34 = *(undefined8 *)(pauVar27[1] + 8);
        *(undefined8 *)(pauVar27[1] + 8) = *(undefined8 *)(pauVar22[1] + 8);
        *(undefined8 *)(pauVar22[1] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar27[2];
        *(undefined8 *)pauVar27[2] = *(undefined8 *)pauVar22[2];
        *(undefined8 *)pauVar22[2] = uVar34;
        uVar34 = *(undefined8 *)(pauVar27[2] + 8);
        *(undefined8 *)(pauVar27[2] + 8) = *(undefined8 *)(pauVar22[2] + 8);
        *(undefined8 *)(pauVar22[2] + 8) = uVar34;
        uVar34 = *(undefined8 *)pauVar27[3];
        *(undefined8 *)pauVar27[3] = *(undefined8 *)pauVar22[3];
        *(undefined8 *)pauVar22[3] = uVar34;
        uVar34 = *(undefined8 *)(pauVar27[3] + 8);
        *(undefined8 *)(pauVar27[3] + 8) = *(undefined8 *)(pauVar22[3] + 8);
        *(undefined8 *)(pauVar22[3] + 8) = uVar34;
        lVar18 = *param_1;
      }
      uVar11 = param_1[1];
      *(undefined1 *)(*param_1 + uVar19) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar19 - 0x10 & uVar11)) = 0xff;
      auVar30 = *pauVar27;
      uVar34 = *(undefined8 *)pauVar27[1];
      uVar35 = *(undefined8 *)(pauVar27[1] + 8);
      uVar5 = *(undefined8 *)pauVar27[2];
      uVar6 = *(undefined8 *)(pauVar27[2] + 8);
      uVar7 = *(undefined8 *)(pauVar27[3] + 8);
      *(undefined8 *)pauVar22[3] = *(undefined8 *)pauVar27[3];
      *(undefined8 *)(pauVar22[3] + 8) = uVar7;
      *(undefined8 *)pauVar22[2] = uVar5;
      *(undefined8 *)(pauVar22[2] + 8) = uVar6;
      *(undefined8 *)pauVar22[1] = uVar34;
      *(undefined8 *)(pauVar22[1] + 8) = uVar35;
      *pauVar22 = auVar30;
    }
LAB_00468567:
    bVar29 = uVar19 != uVar16;
    uVar19 = uVar19 + 1;
  } while (bVar29);
  uVar11 = param_1[1];
  lVar18 = param_1[3];
  uVar19 = (uVar11 + 1 & 0xfffffffffffffff8) - (uVar11 + 1 >> 3);
  if (uVar11 < 8) {
    uVar19 = uVar11;
  }
LAB_004685f9:
  param_1[2] = uVar19 - lVar18;
  return 0xffffffffffffffff;
}


