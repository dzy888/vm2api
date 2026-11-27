// 00465100 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  longlong *plVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  longlong lVar31;
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  
  auVar25 = _DAT_00183f90;
  lVar14 = param_1[3];
  uVar15 = lVar14 + 1;
  if (uVar15 == 0) {
    uVar15 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar15;
  }
  uVar12 = param_1[1];
  uVar7 = uVar12 + 1;
  uVar19 = (uVar7 & 0xfffffffffffffff8) - (uVar7 >> 3);
  if (uVar12 < 8) {
    uVar19 = uVar12;
  }
  if (uVar19 >> 1 < uVar15) {
    uVar7 = uVar19 + 1;
    if (uVar19 + 1 <= uVar15) {
      uVar7 = uVar15;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0x20,uVar7);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    plVar28 = param_1 + 4;
    uVar29 = 0x20;
    uVar30 = 0x10;
    lVar14 = param_1[3];
    pauVar22 = local_50;
    uVar15 = local_48;
    lVar11 = local_40;
    lVar31 = local_38;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      pauVar20 = (undefined1 (*) [16])*param_1;
      auVar25 = *pauVar20;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
      lVar21 = 0;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar25 = pauVar20[1];
            pauVar20 = pauVar20 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) ^ 0xffff;
            lVar21 = lVar21 + 0x10;
          } while (uVar13 == 0);
        }
        uVar18 = 0;
        for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&alloc[12e961f32105355]::string::String>
                          (param_2,*param_1 + ((ulonglong)uVar18 + lVar21) * -0x20 + -0x20);
        uVar12 = uVar7 & local_48;
        auVar25 = *(undefined1 (*) [16])(*local_50 + uVar12);
        uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
        uVar9 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar23 = 0x10;
          do {
            uVar12 = uVar12 + lVar23 & local_48;
            auVar25 = *(undefined1 (*) [16])(*local_50 + uVar12);
            lVar23 = lVar23 + 0x10;
            uVar9 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
          } while (uVar9 == 0);
        }
        uVar10 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar12 = uVar10 + uVar12 & local_48;
        if (-1 < (char)(*local_50)[uVar12]) {
          auVar25 = *local_50;
          uVar9 = 0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          uVar12 = (ulonglong)uVar9;
        }
        uVar13 = uVar13 - 1 & uVar13;
        lVar14 = lVar14 + -1;
        bVar6 = (byte)(uVar7 >> 0x39);
        (*local_50)[uVar12] = bVar6;
        local_50[1][uVar12 - 0x10 & local_48] = bVar6;
        lVar23 = ~((ulonglong)uVar18 + lVar21) * 0x20;
        uVar12 = ~uVar12;
        local_38 = uVar12 * 0x20;
        auVar25 = *(undefined1 (*) [16])(*param_1 + lVar23);
        puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar23);
        uVar5 = puVar2[1];
        *(undefined8 *)local_50[uVar12 * 2 + 1] = *puVar2;
        *(undefined8 *)(local_50[uVar12 * 2 + 1] + 8) = uVar5;
        local_50[uVar12 * 2] = auVar25;
      } while (lVar14 != 0);
      lVar14 = param_1[3];
    }
    lVar21 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar14;
    param_1[3] = lVar14;
    if (lVar21 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar21 * 0x21 == -0x31) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)
              (local_38,0x10,param_1,local_48,plVar28,uVar29,uVar30,pauVar22,uVar15,lVar11,lVar31);
    return 0xffffffffffffffff;
  }
  if (uVar7 == 0) {
    uVar15 = 0;
    goto LAB_004655a7;
  }
  lVar14 = *param_1;
  uVar15 = ((uVar7 >> 4) + 1) - (ulonglong)((uVar7 & 0xf) == 0);
  if (uVar15 == 1) {
    lVar11 = 0;
LAB_00465394:
    pcVar1 = (char *)(lVar14 + lVar11);
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
    *(undefined1 (*) [16])(lVar14 + lVar11) = auVar25 | _DAT_00183f90;
  }
  else {
    uVar19 = uVar15 & 0x1ffffffffffffffe;
    lVar11 = 0;
    do {
      pcVar1 = (char *)(lVar14 + lVar11);
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
      *(undefined1 (*) [16])(lVar14 + lVar11) = auVar26 | auVar25;
      pcVar1 = (char *)(lVar14 + 0x10 + lVar11);
      auVar27[0] = -(*pcVar1 < '\0');
      auVar27[1] = -(pcVar1[1] < '\0');
      auVar27[2] = -(pcVar1[2] < '\0');
      auVar27[3] = -(pcVar1[3] < '\0');
      auVar27[4] = -(pcVar1[4] < '\0');
      auVar27[5] = -(pcVar1[5] < '\0');
      auVar27[6] = -(pcVar1[6] < '\0');
      auVar27[7] = -(pcVar1[7] < '\0');
      auVar27[8] = -(pcVar1[8] < '\0');
      auVar27[9] = -(pcVar1[9] < SUB161((undefined1  [16])0x0,9));
      auVar27[10] = -(pcVar1[10] < SUB161((undefined1  [16])0x0,10));
      auVar27[0xb] = -(pcVar1[0xb] < SUB161((undefined1  [16])0x0,0xb));
      auVar27[0xc] = -(pcVar1[0xc] < SUB161((undefined1  [16])0x0,0xc));
      auVar27[0xd] = -(pcVar1[0xd] < SUB161((undefined1  [16])0x0,0xd));
      auVar27[0xe] = -(pcVar1[0xe] < SUB161((undefined1  [16])0x0,0xe));
      auVar27[0xf] = -(pcVar1[0xf] < SUB161((undefined1  [16])0x0,0xf));
      *(undefined1 (*) [16])(lVar14 + 0x10 + lVar11) = auVar27 | auVar25;
      lVar11 = lVar11 + 0x20;
      uVar19 = uVar19 - 2;
    } while (uVar19 != 0);
    if ((uVar15 & 1) != 0) goto LAB_00465394;
  }
  if (0xf < uVar7) {
    uVar7 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar11,uVar7);
  uVar15 = 0;
  do {
    lVar14 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar14 + uVar15))) {
      pauVar22 = (undefined1 (*) [16])(~uVar15 * 0x20 + lVar14);
      while( true ) {
        uVar8 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&alloc[12e961f32105355]::string::String>
                          (param_2,lVar14 + uVar15 * -0x20 + -0x20);
        pauVar20 = (undefined1 (*) [16])*param_1;
        uVar7 = param_1[1];
        uVar16 = uVar7 & uVar8;
        auVar25 = *(undefined1 (*) [16])(*pauVar20 + uVar16);
        uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar4;
        uVar19 = uVar16;
        if (uVar4 == 0) {
          lVar14 = 0x10;
          do {
            uVar19 = uVar19 + lVar14 & uVar7;
            auVar25 = *(undefined1 (*) [16])(*pauVar20 + uVar19);
            lVar14 = lVar14 + 0x10;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
          } while (uVar13 == 0);
        }
        uVar18 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        uVar19 = uVar18 + uVar19 & uVar7;
        if (-1 < (char)(*pauVar20)[uVar19]) {
          auVar25 = *pauVar20;
          uVar13 = 0;
          for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar19 = (ulonglong)uVar13;
        }
        bVar6 = (byte)(uVar8 >> 0x38);
        if (((uVar19 - uVar16 ^ uVar15 - uVar16) & uVar7) < 0x10) {
          bVar6 = bVar6 >> 1;
          (*pauVar20)[uVar15] = bVar6;
          *(byte *)(*param_1 + 0x10 + (uVar7 & uVar15 - 0x10)) = bVar6;
          goto LAB_00465527;
        }
        pauVar17 = pauVar20 + ~uVar19 * 2;
        cVar3 = (*pauVar20)[uVar19];
        bVar6 = bVar6 >> 1;
        (*pauVar20)[uVar19] = bVar6;
        *(byte *)(*param_1 + 0x10 + (uVar19 - 0x10 & uVar7)) = bVar6;
        if (cVar3 == -1) break;
        uVar29 = *(undefined8 *)*pauVar22;
        *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar17;
        *(undefined8 *)*pauVar17 = uVar29;
        uVar29 = *(undefined8 *)(*pauVar22 + 8);
        *(undefined8 *)(*pauVar22 + 8) = *(undefined8 *)(*pauVar17 + 8);
        *(undefined8 *)(*pauVar17 + 8) = uVar29;
        uVar29 = *(undefined8 *)pauVar22[1];
        *(undefined8 *)pauVar22[1] = *(undefined8 *)pauVar17[1];
        *(undefined8 *)pauVar17[1] = uVar29;
        uVar29 = *(undefined8 *)(pauVar22[1] + 8);
        *(undefined8 *)(pauVar22[1] + 8) = *(undefined8 *)(pauVar17[1] + 8);
        *(undefined8 *)(pauVar17[1] + 8) = uVar29;
        lVar14 = *param_1;
      }
      uVar7 = param_1[1];
      *(undefined1 *)(*param_1 + uVar15) = 0xff;
      *(undefined1 *)(*param_1 + 0x10 + (uVar15 - 0x10 & uVar7)) = 0xff;
      auVar25 = *pauVar22;
      uVar29 = *(undefined8 *)(pauVar22[1] + 8);
      *(undefined8 *)pauVar17[1] = *(undefined8 *)pauVar22[1];
      *(undefined8 *)(pauVar17[1] + 8) = uVar29;
      *pauVar17 = auVar25;
    }
LAB_00465527:
    bVar24 = uVar15 != uVar12;
    uVar15 = uVar15 + 1;
  } while (bVar24);
  uVar7 = param_1[1];
  lVar14 = param_1[3];
  uVar15 = (uVar7 + 1 & 0xfffffffffffffff8) - (uVar7 + 1 >> 3);
  if (uVar7 < 8) {
    uVar15 = uVar7;
  }
LAB_004655a7:
  param_1[2] = uVar15 - lVar14;
  return 0xffffffffffffffff;
}


