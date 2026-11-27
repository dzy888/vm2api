// 0046c260 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   (alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String))>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   (alloc[12e961f32105355]::string::String, alloc[12e961f32105355]::string::String),
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String))>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  longlong lVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  longlong *plVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  auVar29 = _DAT_00183f90;
  lVar21 = param_1[3];
  uVar22 = lVar21 + 1;
  if (uVar22 == 0) {
    uVar22 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar22;
  }
  uVar13 = param_1[1];
  uVar19 = uVar13 + 1;
  uVar16 = (uVar19 & 0xfffffffffffffff8) - (uVar19 >> 3);
  if (uVar13 < 8) {
    uVar16 = uVar13;
  }
  if (uVar16 >> 1 < uVar22) {
    uVar19 = uVar16 + 1;
    if (uVar16 + 1 <= uVar22) {
      uVar19 = uVar22;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x48,uVar19);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar32 = param_1 + 4;
    uVar33 = 0x48;
    uVar34 = 0x10;
    lVar21 = param_1[3];
    pauVar35 = local_50;
    uVar22 = local_48;
    lVar17 = local_40;
    uVar19 = local_38;
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      pauVar26 = (undefined1 (*) [16])*param_1;
      auVar29 = *pauVar26;
      uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
      lVar27 = 0;
      do {
        if ((short)uVar20 == 0) {
          do {
            auVar29 = pauVar26[1];
            pauVar26 = pauVar26 + 1;
            uVar20 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
            lVar27 = lVar27 + 0x10;
          } while (uVar20 == 0);
        }
        uVar25 = 0;
        for (uVar18 = uVar20; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar25 + lVar27) * -0x48 + -0x48);
        uVar16 = uVar13 & local_48;
        auVar29 = *(undefined1 (*) [16])(*local_50 + uVar16);
        uVar6 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
        uVar18 = (uint)uVar6;
        if (uVar6 == 0) {
          lVar23 = 0x10;
          do {
            uVar16 = uVar16 + lVar23 & local_48;
            auVar29 = *(undefined1 (*) [16])(*local_50 + uVar16);
            lVar23 = lVar23 + 0x10;
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
        uVar15 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        uVar16 = uVar15 + uVar16 & local_48;
        if (-1 < (char)(*local_50)[uVar16]) {
          auVar29 = *local_50;
          uVar18 = 0;
          for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
              uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar16 = (ulonglong)uVar18;
        }
        uVar20 = uVar20 - 1 & uVar20;
        local_38 = (ulonglong)uVar20;
        lVar21 = lVar21 + -1;
        bVar12 = (byte)(uVar13 >> 0x39);
        (*local_50)[uVar16] = bVar12;
        local_50[1][uVar16 - 0x10 & local_48] = bVar12;
        lVar23 = *param_1;
        uVar13 = ~((ulonglong)uVar25 + lVar27);
        uVar16 = ~uVar16;
        *(undefined8 *)((longlong)local_50 + uVar16 * 0x48 + 0x40) =
             *(undefined8 *)(lVar23 + 0x40 + uVar13 * 0x48);
        auVar29 = *(undefined1 (*) [16])(lVar23 + uVar13 * 0x48);
        puVar3 = (undefined8 *)(lVar23 + 0x10 + uVar13 * 0x48);
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        puVar3 = (undefined8 *)(lVar23 + 0x20 + uVar13 * 0x48);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (undefined8 *)(lVar23 + 0x30 + uVar13 * 0x48);
        uVar11 = puVar3[1];
        puVar4 = (undefined8 *)((longlong)local_50 + uVar16 * 0x48 + 0x30);
        *puVar4 = *puVar3;
        puVar4[1] = uVar11;
        puVar3 = (undefined8 *)((longlong)local_50 + uVar16 * 0x48 + 0x20);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3 = (undefined8 *)((longlong)local_50 + uVar16 * 0x48 + 0x10);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        *(undefined1 (*) [16])((longlong)local_50 + uVar16 * 0x48) = auVar29;
      } while (lVar21 != 0);
      lVar21 = param_1[3];
    }
    lVar27 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar21;
    param_1[3] = lVar21;
    if (lVar27 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar27 + (lVar27 * 0x48 + 0x57U & 0xfffffffffffffff0) == -0x11) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,param_1,local_48,plVar32,uVar33,uVar34,pauVar35,uVar22,lVar17,uVar19);
    return 0xffffffffffffffff;
  }
  if (uVar19 == 0) {
    uVar22 = 0;
    goto LAB_0046c792;
  }
  lVar21 = *param_1;
  uVar22 = ((uVar19 >> 4) + 1) - (ulonglong)((uVar19 & 0xf) == 0);
  if (uVar22 == 1) {
    lVar17 = 0;
LAB_0046c514:
    pcVar1 = (char *)(lVar21 + lVar17);
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
    *(undefined1 (*) [16])(lVar21 + lVar17) = auVar29 | _DAT_00183f90;
  }
  else {
    uVar16 = uVar22 & 0x1ffffffffffffffe;
    lVar17 = 0;
    do {
      pcVar1 = (char *)(lVar21 + lVar17);
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
      *(undefined1 (*) [16])(lVar21 + lVar17) = auVar30 | auVar29;
      pcVar1 = (char *)(lVar21 + 0x10 + lVar17);
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
      *(undefined1 (*) [16])(lVar21 + 0x10 + lVar17) = auVar31 | auVar29;
      lVar17 = lVar17 + 0x20;
      uVar16 = uVar16 - 2;
    } while (uVar16 != 0);
    if ((uVar22 & 1) != 0) goto LAB_0046c514;
  }
  if (0xf < uVar19) {
    uVar19 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar17,uVar19);
  uVar22 = 0;
  do {
    lVar21 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar21 + uVar22))) {
      pauVar35 = (undefined1 (*) [16])(lVar21 + ~uVar22 * 0x48);
      while( true ) {
        uVar14 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,lVar21 + uVar22 * -0x48 + -0x48);
        pauVar26 = (undefined1 (*) [16])*param_1;
        uVar19 = param_1[1];
        uVar24 = uVar19 & uVar14;
        auVar29 = *(undefined1 (*) [16])(*pauVar26 + uVar24);
        uVar6 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
        uVar20 = (uint)uVar6;
        uVar16 = uVar24;
        if (uVar6 == 0) {
          lVar21 = 0x10;
          do {
            uVar16 = uVar16 + lVar21 & uVar19;
            auVar29 = *(undefined1 (*) [16])(*pauVar26 + uVar16);
            lVar21 = lVar21 + 0x10;
            uVar20 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
          } while (uVar20 == 0);
        }
        uVar25 = 0;
        for (; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar16 = uVar25 + uVar16 & uVar19;
        if (-1 < (char)(*pauVar26)[uVar16]) {
          auVar29 = *pauVar26;
          uVar20 = 0;
          for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          uVar16 = (ulonglong)uVar20;
        }
        bVar12 = (byte)(uVar14 >> 0x38);
        if (((uVar16 - uVar24 ^ uVar22 - uVar24) & uVar19) < 0x10) {
          bVar12 = bVar12 >> 1;
          (*pauVar26)[uVar22] = bVar12;
          *(byte *)(*param_1 + 0x10 + (uVar19 & uVar22 - 0x10)) = bVar12;
          goto LAB_0046c6f7;
        }
        pauVar2 = (undefined1 (*) [16])((longlong)pauVar26 + ~uVar16 * 0x48);
        cVar5 = (*pauVar26)[uVar16];
        bVar12 = bVar12 >> 1;
        (*pauVar26)[uVar16] = bVar12;
        *(byte *)(*param_1 + 0x10 + (uVar16 - 0x10 & uVar19)) = bVar12;
        if (cVar5 == -1) break;
        uVar33 = *(undefined8 *)*pauVar35;
        *(undefined8 *)*pauVar35 = *(undefined8 *)*pauVar2;
        *(undefined8 *)*pauVar2 = uVar33;
        uVar33 = *(undefined8 *)(*pauVar35 + 8);
        *(undefined8 *)(*pauVar35 + 8) = *(undefined8 *)(*pauVar2 + 8);
        *(undefined8 *)(*pauVar2 + 8) = uVar33;
        uVar33 = *(undefined8 *)pauVar35[1];
        *(undefined8 *)pauVar35[1] = *(undefined8 *)pauVar2[1];
        *(undefined8 *)pauVar2[1] = uVar33;
        uVar33 = *(undefined8 *)(pauVar35[1] + 8);
        *(undefined8 *)(pauVar35[1] + 8) = *(undefined8 *)(pauVar2[1] + 8);
        *(undefined8 *)(pauVar2[1] + 8) = uVar33;
        uVar33 = *(undefined8 *)pauVar35[2];
        *(undefined8 *)pauVar35[2] = *(undefined8 *)pauVar2[2];
        *(undefined8 *)pauVar2[2] = uVar33;
        uVar33 = *(undefined8 *)(pauVar35[2] + 8);
        *(undefined8 *)(pauVar35[2] + 8) = *(undefined8 *)(pauVar2[2] + 8);
        *(undefined8 *)(pauVar2[2] + 8) = uVar33;
        uVar33 = *(undefined8 *)pauVar35[3];
        *(undefined8 *)pauVar35[3] = *(undefined8 *)pauVar2[3];
        *(undefined8 *)pauVar2[3] = uVar33;
        uVar33 = *(undefined8 *)(pauVar35[3] + 8);
        *(undefined8 *)(pauVar35[3] + 8) = *(undefined8 *)(pauVar2[3] + 8);
        *(undefined8 *)(pauVar2[3] + 8) = uVar33;
        uVar33 = *(undefined8 *)pauVar35[4];
        *(undefined8 *)pauVar35[4] = *(undefined8 *)pauVar2[4];
        *(undefined8 *)pauVar2[4] = uVar33;
        lVar21 = *param_1;
      }
      uVar19 = param_1[1];
      *(undefined1 *)(*param_1 + uVar22) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar22 - 0x10 & uVar19)) = 0xff;
      *(undefined8 *)pauVar2[4] = *(undefined8 *)pauVar35[4];
      auVar29 = *pauVar35;
      uVar33 = *(undefined8 *)pauVar35[1];
      uVar34 = *(undefined8 *)(pauVar35[1] + 8);
      uVar7 = *(undefined8 *)pauVar35[2];
      uVar8 = *(undefined8 *)(pauVar35[2] + 8);
      uVar9 = *(undefined8 *)(pauVar35[3] + 8);
      *(undefined8 *)pauVar2[3] = *(undefined8 *)pauVar35[3];
      *(undefined8 *)(pauVar2[3] + 8) = uVar9;
      *(undefined8 *)pauVar2[2] = uVar7;
      *(undefined8 *)(pauVar2[2] + 8) = uVar8;
      *(undefined8 *)pauVar2[1] = uVar33;
      *(undefined8 *)(pauVar2[1] + 8) = uVar34;
      *pauVar2 = auVar29;
    }
LAB_0046c6f7:
    bVar28 = uVar22 != uVar13;
    uVar22 = uVar22 + 1;
  } while (bVar28);
  uVar19 = param_1[1];
  lVar21 = param_1[3];
  uVar22 = (uVar19 + 1 & 0xfffffffffffffff8) - (uVar19 + 1 >> 3);
  if (uVar19 < 8) {
    uVar22 = uVar19;
  }
LAB_0046c792:
  param_1[2] = uVar22 - lVar21;
  return 0xffffffffffffffff;
}


