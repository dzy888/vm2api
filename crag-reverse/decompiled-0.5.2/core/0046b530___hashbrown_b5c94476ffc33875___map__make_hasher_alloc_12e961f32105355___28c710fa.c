// 0046b530 <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::subagents::SubagentRecord)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  
  auVar22 = _DAT_00183f90;
  lVar12 = param_1[3];
  uVar13 = lVar12 + 1;
  if (uVar13 == 0) {
    uVar13 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar13;
  }
  uVar9 = param_1[1];
  uVar8 = uVar9 + 1;
  uVar17 = (uVar8 & 0xfffffffffffffff8) - (uVar8 >> 3);
  if (uVar9 < 8) {
    uVar17 = uVar9;
  }
  if (uVar17 >> 1 < uVar13) {
    uVar8 = uVar17 + 1;
    if (uVar17 + 1 <= uVar13) {
      uVar8 = uVar13;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
    <alloc[12e961f32105355]::alloc::Global>(&local_50,0xe0,uVar8);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    lVar12 = param_1[3];
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      pauVar18 = (undefined1 (*) [16])*param_1;
      auVar22 = *pauVar18;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
      lVar19 = 0;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar22 = pauVar18[1];
            pauVar18 = pauVar18 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
            lVar19 = lVar19 + 0x10;
          } while (uVar11 == 0);
        }
        uVar10 = 0;
        for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>
                           (param_2,*param_1 + ((ulonglong)uVar10 + lVar19) * -0xe0 + -0xe0);
        uVar8 = uVar13 & local_48;
        auVar22 = *(undefined1 (*) [16])(*local_50 + uVar8);
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
        uVar10 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar14 = 0x10;
          do {
            uVar8 = uVar8 + lVar14 & local_48;
            auVar22 = *(undefined1 (*) [16])(*local_50 + uVar8);
            lVar14 = lVar14 + 0x10;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
          } while (uVar10 == 0);
        }
        uVar7 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar8 = uVar7 + uVar8 & local_48;
        if (-1 < (char)(*local_50)[uVar8]) {
          auVar22 = *local_50;
          uVar10 = 0;
          for (uVar7 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar7 & 1) == 0;
              uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uVar8 = (ulonglong)uVar10;
        }
        uVar11 = uVar11 - 1 & uVar11;
        uVar9 = uVar8 - 0x10 & local_48;
        bVar5 = (byte)(uVar13 >> 0x39);
        (*local_50)[uVar8] = bVar5;
        local_50[1][uVar9] = bVar5;
        lVar12 = lVar12 + -1;
        (*(code *)PTR_memcpy_00799008)(uVar9,0xe0);
      } while (lVar12 != 0);
      lVar12 = param_1[3];
    }
    lVar19 = param_1[1];
    *param_1 = (longlong)local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar12;
    param_1[3] = lVar12;
    if (lVar19 == 0) {
      return 0xffffffffffffffff;
    }
    if (lVar19 * 0xe1 == -0xf1) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(lVar12,0x10);
    return 0xffffffffffffffff;
  }
  if (uVar8 == 0) {
    uVar13 = 0;
    goto LAB_0046bc04;
  }
  lVar12 = *param_1;
  uVar13 = ((uVar8 >> 4) + 1) - (ulonglong)((uVar8 & 0xf) == 0);
  if (uVar13 == 1) {
    lVar19 = 0;
LAB_0046b7e4:
    pcVar1 = (char *)(lVar12 + lVar19);
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
    *(undefined1 (*) [16])(lVar12 + lVar19) = auVar22 | _DAT_00183f90;
  }
  else {
    uVar17 = uVar13 & 0x1ffffffffffffffe;
    lVar19 = 0;
    do {
      pcVar1 = (char *)(lVar12 + lVar19);
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
      *(undefined1 (*) [16])(lVar12 + lVar19) = auVar23 | auVar22;
      pcVar1 = (char *)(lVar12 + 0x10 + lVar19);
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
      *(undefined1 (*) [16])(lVar12 + 0x10 + lVar19) = auVar24 | auVar22;
      lVar19 = lVar19 + 0x20;
      uVar17 = uVar17 - 2;
    } while (uVar17 != 0);
    if ((uVar13 & 1) != 0) goto LAB_0046b7e4;
  }
  if (0xf < uVar8) {
    uVar8 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar19,uVar8);
  uVar13 = 0;
  do {
    lVar12 = *param_1;
    if (SBORROW1('\0',*(char *)(lVar12 + uVar13))) {
      puVar20 = (undefined8 *)(~uVar13 * 0xe0 + lVar12);
      while( true ) {
        uVar6 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&alloc[12e961f32105355]::string::String>
                          (param_2,lVar12 + uVar13 * -0xe0 + -0xe0);
        pauVar18 = (undefined1 (*) [16])*param_1;
        uVar8 = param_1[1];
        uVar15 = uVar8 & uVar6;
        auVar22 = *(undefined1 (*) [16])(*pauVar18 + uVar15);
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
        uVar17 = uVar15;
        if (uVar4 == 0) {
          lVar12 = 0x10;
          do {
            uVar17 = uVar17 + lVar12 & uVar8;
            auVar22 = *(undefined1 (*) [16])(*pauVar18 + uVar17);
            lVar12 = lVar12 + 0x10;
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
        uVar10 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar17 = uVar10 + uVar17 & uVar8;
        if (-1 < (char)(*pauVar18)[uVar17]) {
          auVar22 = *pauVar18;
          uVar11 = 0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          uVar17 = (ulonglong)uVar11;
        }
        bVar5 = (byte)(uVar6 >> 0x38);
        if (((uVar17 - uVar15 ^ uVar13 - uVar15) & uVar8) < 0x10) {
          bVar5 = bVar5 >> 1;
          (*pauVar18)[uVar13] = bVar5;
          *(byte *)(*param_1 + 0x10 + (uVar8 & uVar13 - 0x10)) = bVar5;
          goto LAB_0046bb86;
        }
        pauVar16 = pauVar18 + ~uVar17 * 0xe;
        cVar2 = (*pauVar18)[uVar17];
        bVar5 = bVar5 >> 1;
        (*pauVar18)[uVar17] = bVar5;
        *(byte *)(*param_1 + 0x10 + (uVar17 - 0x10 & uVar8)) = bVar5;
        if (cVar2 == -1) break;
        uVar3 = *puVar20;
        *puVar20 = *(undefined8 *)*pauVar16;
        *(undefined8 *)*pauVar16 = uVar3;
        uVar3 = puVar20[1];
        puVar20[1] = *(undefined8 *)(*pauVar16 + 8);
        *(undefined8 *)(*pauVar16 + 8) = uVar3;
        uVar3 = puVar20[2];
        puVar20[2] = *(undefined8 *)pauVar16[1];
        *(undefined8 *)pauVar16[1] = uVar3;
        uVar3 = puVar20[3];
        puVar20[3] = *(undefined8 *)(pauVar16[1] + 8);
        *(undefined8 *)(pauVar16[1] + 8) = uVar3;
        uVar3 = puVar20[4];
        puVar20[4] = *(undefined8 *)pauVar16[2];
        *(undefined8 *)pauVar16[2] = uVar3;
        uVar3 = puVar20[5];
        puVar20[5] = *(undefined8 *)(pauVar16[2] + 8);
        *(undefined8 *)(pauVar16[2] + 8) = uVar3;
        uVar3 = puVar20[6];
        puVar20[6] = *(undefined8 *)pauVar16[3];
        *(undefined8 *)pauVar16[3] = uVar3;
        uVar3 = puVar20[7];
        puVar20[7] = *(undefined8 *)(pauVar16[3] + 8);
        *(undefined8 *)(pauVar16[3] + 8) = uVar3;
        uVar3 = puVar20[8];
        puVar20[8] = *(undefined8 *)pauVar16[4];
        *(undefined8 *)pauVar16[4] = uVar3;
        uVar3 = puVar20[9];
        puVar20[9] = *(undefined8 *)(pauVar16[4] + 8);
        *(undefined8 *)(pauVar16[4] + 8) = uVar3;
        uVar3 = puVar20[10];
        puVar20[10] = *(undefined8 *)pauVar16[5];
        *(undefined8 *)pauVar16[5] = uVar3;
        uVar3 = puVar20[0xb];
        puVar20[0xb] = *(undefined8 *)(pauVar16[5] + 8);
        *(undefined8 *)(pauVar16[5] + 8) = uVar3;
        uVar3 = puVar20[0xc];
        puVar20[0xc] = *(undefined8 *)pauVar16[6];
        *(undefined8 *)pauVar16[6] = uVar3;
        uVar3 = puVar20[0xd];
        puVar20[0xd] = *(undefined8 *)(pauVar16[6] + 8);
        *(undefined8 *)(pauVar16[6] + 8) = uVar3;
        uVar3 = puVar20[0xe];
        puVar20[0xe] = *(undefined8 *)pauVar16[7];
        *(undefined8 *)pauVar16[7] = uVar3;
        uVar3 = puVar20[0xf];
        puVar20[0xf] = *(undefined8 *)(pauVar16[7] + 8);
        *(undefined8 *)(pauVar16[7] + 8) = uVar3;
        uVar3 = puVar20[0x10];
        puVar20[0x10] = *(undefined8 *)pauVar16[8];
        *(undefined8 *)pauVar16[8] = uVar3;
        uVar3 = puVar20[0x11];
        puVar20[0x11] = *(undefined8 *)(pauVar16[8] + 8);
        *(undefined8 *)(pauVar16[8] + 8) = uVar3;
        uVar3 = puVar20[0x12];
        puVar20[0x12] = *(undefined8 *)pauVar16[9];
        *(undefined8 *)pauVar16[9] = uVar3;
        uVar3 = puVar20[0x13];
        puVar20[0x13] = *(undefined8 *)(pauVar16[9] + 8);
        *(undefined8 *)(pauVar16[9] + 8) = uVar3;
        uVar3 = puVar20[0x14];
        puVar20[0x14] = *(undefined8 *)pauVar16[10];
        *(undefined8 *)pauVar16[10] = uVar3;
        uVar3 = puVar20[0x15];
        puVar20[0x15] = *(undefined8 *)(pauVar16[10] + 8);
        *(undefined8 *)(pauVar16[10] + 8) = uVar3;
        uVar3 = puVar20[0x16];
        puVar20[0x16] = *(undefined8 *)pauVar16[0xb];
        *(undefined8 *)pauVar16[0xb] = uVar3;
        uVar3 = puVar20[0x17];
        puVar20[0x17] = *(undefined8 *)(pauVar16[0xb] + 8);
        *(undefined8 *)(pauVar16[0xb] + 8) = uVar3;
        uVar3 = puVar20[0x18];
        puVar20[0x18] = *(undefined8 *)pauVar16[0xc];
        *(undefined8 *)pauVar16[0xc] = uVar3;
        uVar3 = puVar20[0x19];
        puVar20[0x19] = *(undefined8 *)(pauVar16[0xc] + 8);
        *(undefined8 *)(pauVar16[0xc] + 8) = uVar3;
        uVar3 = puVar20[0x1a];
        puVar20[0x1a] = *(undefined8 *)pauVar16[0xd];
        *(undefined8 *)pauVar16[0xd] = uVar3;
        uVar3 = puVar20[0x1b];
        puVar20[0x1b] = *(undefined8 *)(pauVar16[0xd] + 8);
        *(undefined8 *)(pauVar16[0xd] + 8) = uVar3;
        lVar12 = *param_1;
      }
      uVar8 = param_1[1];
      *(undefined1 *)(*param_1 + uVar13) = 0xff;
      lVar12 = *param_1;
      *(undefined1 *)(lVar12 + 0x10 + (uVar13 - 0x10 & uVar8)) = 0xff;
      (*(code *)PTR_memcpy_00799008)(lVar12,0xe0);
    }
LAB_0046bb86:
    bVar21 = uVar13 != uVar9;
    uVar13 = uVar13 + 1;
  } while (bVar21);
  uVar8 = param_1[1];
  lVar12 = param_1[3];
  uVar13 = (uVar8 + 1 & 0xfffffffffffffff8) - (uVar8 + 1 >> 3);
  if (uVar8 < 8) {
    uVar13 = uVar8;
  }
LAB_0046bc04:
  param_1[2] = uVar13 - lVar12;
  return 0xffffffffffffffff;
}


