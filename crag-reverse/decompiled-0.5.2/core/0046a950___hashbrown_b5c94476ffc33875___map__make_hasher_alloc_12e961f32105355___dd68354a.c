// 0046a950 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [16];
  uint uVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  longlong *plVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  auVar32 = _DAT_00183f90;
  lVar21 = param_1[3];
  uVar23 = lVar21 + 1;
  if (uVar23 == 0) {
    uVar23 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar23;
  }
  uVar12 = param_1[1];
  uVar19 = uVar12 + 1;
  uVar15 = (uVar19 & 0xfffffffffffffff8) - (uVar19 >> 3);
  if (uVar12 < 8) {
    uVar15 = uVar12;
  }
  if (uVar15 >> 1 < uVar23) {
    uVar19 = uVar15 + 1;
    if (uVar15 + 1 <= uVar23) {
      uVar19 = uVar23;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x58,uVar19);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar35 = param_1 + 4;
    uVar36 = 0x58;
    uVar37 = 0x10;
    lVar21 = param_1[3];
    pauVar22 = local_50;
    uVar23 = local_48;
    lVar16 = local_40;
    uVar19 = local_38;
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      pauVar29 = (undefined1 (*) [16])*param_1;
      auVar32 = *pauVar29;
      uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
      lVar30 = 0;
      do {
        if ((short)uVar20 == 0) {
          do {
            auVar32 = pauVar29[1];
            pauVar29 = pauVar29 + 1;
            uVar20 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar30 = lVar30 + 0x10;
          } while (uVar20 == 0);
        }
        uVar28 = 0;
        for (uVar17 = uVar20; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar28 + lVar30) * -0x58 + -0x58);
        uVar15 = uVar12 & local_48;
        auVar32 = *(undefined1 (*) [16])(*local_50 + uVar15);
        uVar5 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
        uVar17 = (uint)uVar5;
        if (uVar5 == 0) {
          lVar25 = 0x10;
          do {
            uVar15 = uVar15 + lVar25 & local_48;
            auVar32 = *(undefined1 (*) [16])(*local_50 + uVar15);
            lVar25 = lVar25 + 0x10;
            uVar17 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
          } while (uVar17 == 0);
        }
        uVar14 = 0;
        for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar15 = uVar14 + uVar15 & local_48;
        if (-1 < (char)(*local_50)[uVar15]) {
          auVar32 = *local_50;
          uVar17 = 0;
          for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar15 = (ulonglong)uVar17;
        }
        uVar20 = uVar20 - 1 & uVar20;
        local_38 = (ulonglong)uVar20;
        lVar21 = lVar21 + -1;
        bVar11 = (byte)(uVar12 >> 0x39);
        (*local_50)[uVar15] = bVar11;
        local_50[1][uVar15 - 0x10 & local_48] = bVar11;
        lVar25 = *param_1;
        lVar24 = ~((ulonglong)uVar28 + lVar30) * 0x58;
        lVar18 = ~uVar15 * 0x58;
        *(undefined8 *)((longlong)local_50 + lVar18 + 0x50) =
             *(undefined8 *)(lVar25 + 0x50 + lVar24);
        puVar2 = (undefined8 *)(lVar25 + 0x40 + lVar24);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)((longlong)local_50 + lVar18 + 0x40);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        auVar32 = *(undefined1 (*) [16])(lVar25 + lVar24);
        puVar2 = (undefined8 *)(lVar25 + 0x10 + lVar24);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        puVar2 = (undefined8 *)(lVar25 + 0x20 + lVar24);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)(lVar25 + 0x30 + lVar24);
        uVar10 = puVar2[1];
        puVar3 = (undefined8 *)((longlong)local_50 + lVar18 + 0x30);
        *puVar3 = *puVar2;
        puVar3[1] = uVar10;
        puVar2 = (undefined8 *)((longlong)local_50 + lVar18 + 0x20);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar2 = (undefined8 *)((longlong)local_50 + lVar18 + 0x10);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        *(undefined1 (*) [16])((longlong)local_50 + lVar18) = auVar32;
      } while (lVar21 != 0);
      lVar21 = param_1[3];
    }
    lVar30 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar21;
    param_1[3] = lVar21;
    if (lVar30 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar30 + (lVar30 * 0x58 + 0x67U & 0xfffffffffffffff0) == -0x11) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,param_1,local_48,plVar35,uVar36,uVar37,pauVar22,uVar23,lVar16,uVar19);
    return 0xffffffffffffffff;
  }
  if (uVar19 == 0) {
    uVar23 = 0;
    goto LAB_0046aeb6;
  }
  lVar21 = *param_1;
  uVar23 = ((uVar19 >> 4) + 1) - (ulonglong)((uVar19 & 0xf) == 0);
  if (uVar23 == 1) {
    lVar16 = 0;
LAB_0046ac14:
    pcVar1 = (char *)(lVar21 + lVar16);
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
    *(undefined1 (*) [16])(lVar21 + lVar16) = auVar32 | _DAT_00183f90;
  }
  else {
    uVar15 = uVar23 & 0x1ffffffffffffffe;
    lVar16 = 0;
    do {
      pcVar1 = (char *)(lVar21 + lVar16);
      auVar33[0] = -(*pcVar1 < '\0');
      auVar33[1] = -(pcVar1[1] < '\0');
      auVar33[2] = -(pcVar1[2] < '\0');
      auVar33[3] = -(pcVar1[3] < '\0');
      auVar33[4] = -(pcVar1[4] < '\0');
      auVar33[5] = -(pcVar1[5] < '\0');
      auVar33[6] = -(pcVar1[6] < '\0');
      auVar33[7] = -(pcVar1[7] < '\0');
      auVar33[8] = -(pcVar1[8] < '\0');
      auVar33[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar33[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar33[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar33[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar33[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar33[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar33[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar21 + lVar16) = auVar33 | auVar32;
      pcVar1 = (char *)(lVar21 + 0x10 + lVar16);
      auVar34[0] = -(*pcVar1 < '\0');
      auVar34[1] = -(pcVar1[1] < '\0');
      auVar34[2] = -(pcVar1[2] < '\0');
      auVar34[3] = -(pcVar1[3] < '\0');
      auVar34[4] = -(pcVar1[4] < '\0');
      auVar34[5] = -(pcVar1[5] < '\0');
      auVar34[6] = -(pcVar1[6] < '\0');
      auVar34[7] = -(pcVar1[7] < '\0');
      auVar34[8] = -(pcVar1[8] < '\0');
      auVar34[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar34[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar34[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar34[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar34[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar34[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar34[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar21 + 0x10 + lVar16) = auVar34 | auVar32;
      lVar16 = lVar16 + 0x20;
      uVar15 = uVar15 - 2;
    } while (uVar15 != 0);
    if ((uVar23 & 1) != 0) goto LAB_0046ac14;
  }
  if (0xf < uVar19) {
    uVar19 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar16,uVar19);
  uVar23 = 0;
  do {
    lVar21 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar21 + uVar23))) {
      pauVar22 = (undefined1 (*) [16])(~uVar23 * 0x58 + lVar21);
      while( true ) {
        uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar21 + uVar23 * -0x58 + -0x58);
        pauVar29 = (undefined1 (*) [16])*param_1;
        uVar19 = param_1[1];
        uVar26 = uVar19 & uVar13;
        auVar32 = *(undefined1 (*) [16])(*pauVar29 + uVar26);
        uVar5 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
        uVar20 = (uint)uVar5;
        uVar15 = uVar26;
        if (uVar5 == 0) {
          lVar21 = 0x10;
          do {
            uVar15 = uVar15 + lVar21 & uVar19;
            auVar32 = *(undefined1 (*) [16])(*pauVar29 + uVar15);
            lVar21 = lVar21 + 0x10;
            uVar20 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
          } while (uVar20 == 0);
        }
        uVar28 = 0;
        for (; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar15 = uVar28 + uVar15 & uVar19;
        if (-1 < (char)(*pauVar29)[uVar15]) {
          auVar32 = *pauVar29;
          uVar20 = 0;
          for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar28 & 1) == 0;
              uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          uVar15 = (ulonglong)uVar20;
        }
        bVar11 = (byte)(uVar13 >> 0x38);
        if (((uVar15 - uVar26 ^ uVar23 - uVar26) & uVar19) < 0x10) {
          bVar11 = bVar11 >> 1;
          (*pauVar29)[uVar23] = bVar11;
          *(byte *)(*param_1 + 0x10 + (uVar19 & uVar23 - 0x10)) = bVar11;
          goto LAB_0046ae17;
        }
        pauVar27 = (undefined1 (*) [16])(~uVar15 * 0x58 + (longlong)pauVar29);
        cVar4 = (*pauVar29)[uVar15];
        bVar11 = bVar11 >> 1;
        (*pauVar29)[uVar15] = bVar11;
        *(byte *)(*param_1 + 0x10 + (uVar15 - 0x10 & uVar19)) = bVar11;
        if (cVar4 == -1) break;
        uVar36 = *(undefined8 *)*pauVar22;
        *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar27;
        *(undefined8 *)*pauVar27 = uVar36;
        uVar36 = *(undefined8 *)(*pauVar22 + 8);
        *(undefined8 *)(*pauVar22 + 8) = *(undefined8 *)(*pauVar27 + 8);
        *(undefined8 *)(*pauVar27 + 8) = uVar36;
        uVar36 = *(undefined8 *)pauVar22[1];
        *(undefined8 *)pauVar22[1] = *(undefined8 *)pauVar27[1];
        *(undefined8 *)pauVar27[1] = uVar36;
        uVar36 = *(undefined8 *)(pauVar22[1] + 8);
        *(undefined8 *)(pauVar22[1] + 8) = *(undefined8 *)(pauVar27[1] + 8);
        *(undefined8 *)(pauVar27[1] + 8) = uVar36;
        uVar36 = *(undefined8 *)pauVar22[2];
        *(undefined8 *)pauVar22[2] = *(undefined8 *)pauVar27[2];
        *(undefined8 *)pauVar27[2] = uVar36;
        uVar36 = *(undefined8 *)(pauVar22[2] + 8);
        *(undefined8 *)(pauVar22[2] + 8) = *(undefined8 *)(pauVar27[2] + 8);
        *(undefined8 *)(pauVar27[2] + 8) = uVar36;
        uVar36 = *(undefined8 *)pauVar22[3];
        *(undefined8 *)pauVar22[3] = *(undefined8 *)pauVar27[3];
        *(undefined8 *)pauVar27[3] = uVar36;
        uVar36 = *(undefined8 *)(pauVar22[3] + 8);
        *(undefined8 *)(pauVar22[3] + 8) = *(undefined8 *)(pauVar27[3] + 8);
        *(undefined8 *)(pauVar27[3] + 8) = uVar36;
        uVar36 = *(undefined8 *)pauVar22[4];
        *(undefined8 *)pauVar22[4] = *(undefined8 *)pauVar27[4];
        *(undefined8 *)pauVar27[4] = uVar36;
        uVar36 = *(undefined8 *)(pauVar22[4] + 8);
        *(undefined8 *)(pauVar22[4] + 8) = *(undefined8 *)(pauVar27[4] + 8);
        *(undefined8 *)(pauVar27[4] + 8) = uVar36;
        uVar36 = *(undefined8 *)pauVar22[5];
        *(undefined8 *)pauVar22[5] = *(undefined8 *)pauVar27[5];
        *(undefined8 *)pauVar27[5] = uVar36;
        lVar21 = *param_1;
      }
      uVar19 = param_1[1];
      *(undefined1 *)(*param_1 + uVar23) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar23 - 0x10 & uVar19)) = 0xff;
      *(undefined8 *)pauVar27[5] = *(undefined8 *)pauVar22[5];
      uVar36 = *(undefined8 *)(pauVar22[4] + 8);
      *(undefined8 *)pauVar27[4] = *(undefined8 *)pauVar22[4];
      *(undefined8 *)(pauVar27[4] + 8) = uVar36;
      auVar32 = *pauVar22;
      uVar36 = *(undefined8 *)pauVar22[1];
      uVar37 = *(undefined8 *)(pauVar22[1] + 8);
      uVar6 = *(undefined8 *)pauVar22[2];
      uVar7 = *(undefined8 *)(pauVar22[2] + 8);
      uVar8 = *(undefined8 *)(pauVar22[3] + 8);
      *(undefined8 *)pauVar27[3] = *(undefined8 *)pauVar22[3];
      *(undefined8 *)(pauVar27[3] + 8) = uVar8;
      *(undefined8 *)pauVar27[2] = uVar6;
      *(undefined8 *)(pauVar27[2] + 8) = uVar7;
      *(undefined8 *)pauVar27[1] = uVar36;
      *(undefined8 *)(pauVar27[1] + 8) = uVar37;
      *pauVar27 = auVar32;
    }
LAB_0046ae17:
    bVar31 = uVar23 != uVar12;
    uVar23 = uVar23 + 1;
  } while (bVar31);
  uVar19 = param_1[1];
  lVar21 = param_1[3];
  uVar23 = (uVar19 + 1 & 0xfffffffffffffff8) - (uVar19 + 1 >> 3);
  if (uVar19 < 8) {
    uVar23 = uVar19;
  }
LAB_0046aeb6:
  param_1[2] = uVar23 - lVar21;
  return 0xffffffffffffffff;
}


