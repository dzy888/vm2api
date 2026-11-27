// 0046fe50 <hashbrown[b5c94476ffc33875]::map::make_hasher<u32,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,
   alloc[12e961f32105355]::string::String)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<u32,
   alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

ulonglong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,alloc[12e961f32105355]::string::String)>>::
reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<u32,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ushort uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 (*local_50) [16];
  ulonglong local_48;
  longlong local_40;
  
  auVar25 = _DAT_00183f90;
  lVar17 = param_1[3];
  uVar9 = lVar17 + 1;
  if (uVar9 == 0) {
    uVar9 = (*(code *)PTR_capacity_overflow_00799958)();
    return uVar9;
  }
  uVar3 = param_1[1];
  uVar10 = uVar3 + 1;
  uVar16 = (uVar10 & 0xfffffffffffffff8) - (uVar10 >> 3);
  if (uVar3 < 8) {
    uVar16 = uVar3;
  }
  if (uVar16 >> 1 < uVar9) {
    uVar10 = uVar16 + 1;
    if (uVar16 + 1 <= uVar9) {
      uVar10 = uVar9;
    }
    uVar24 = <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
             <alloc[12e961f32105355]::alloc::Global>(&local_50,0x20,uVar10);
    if (local_50 == (undefined1 (*) [16])0x0) {
      return local_48;
    }
    if (lVar17 != 0) {
      pauVar19 = (undefined1 (*) [16])*param_1;
      auVar25 = *pauVar19;
      uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
      lVar22 = 0;
      pauVar20 = pauVar19;
      lVar21 = lVar17;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar25 = pauVar20[1];
            pauVar20 = pauVar20 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
            lVar22 = lVar22 + 0x10;
          } while (uVar18 == 0);
        }
        uVar14 = 0;
        for (uVar11 = uVar18; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&u32>(param_2,pauVar19 + ((ulonglong)uVar14 + lVar22) * -2 + -2);
        uVar10 = uVar9 & local_48;
        auVar25 = *(undefined1 (*) [16])(*local_50 + uVar10);
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
        uVar11 = (uint)uVar4;
        if (uVar4 == 0) {
          lVar15 = 0x10;
          do {
            uVar10 = uVar10 + lVar15 & local_48;
            auVar25 = *(undefined1 (*) [16])(*local_50 + uVar10);
            lVar15 = lVar15 + 0x10;
            uVar11 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
          } while (uVar11 == 0);
        }
        uVar8 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar10 = uVar8 + uVar10 & local_48;
        if (-1 < (char)(*local_50)[uVar10]) {
          auVar25 = *local_50;
          uVar11 = 0;
          for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar25[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          uVar10 = (ulonglong)uVar11;
        }
        uVar18 = uVar18 - 1 & uVar18;
        lVar21 = lVar21 + -1;
        bVar6 = (byte)(uVar9 >> 0x39);
        (*local_50)[uVar10] = bVar6;
        local_50[1][uVar10 - 0x10 & local_48] = bVar6;
        uVar9 = ~((ulonglong)uVar14 + lVar22);
        auVar25 = pauVar19[uVar9 * 2];
        uVar24 = auVar25._0_8_;
        uVar5 = *(undefined8 *)(pauVar19[uVar9 * 2 + 1] + 8);
        *(undefined8 *)local_50[~uVar10 * 2 + 1] = *(undefined8 *)pauVar19[uVar9 * 2 + 1];
        *(undefined8 *)(local_50[~uVar10 * 2 + 1] + 8) = uVar5;
        local_50[~uVar10 * 2] = auVar25;
      } while (lVar21 != 0);
    }
    *param_1 = local_50;
    param_1[1] = local_48;
    param_1[2] = local_40 - lVar17;
    if (uVar3 == 0) {
      return 0xffffffffffffffff;
    }
    if (uVar3 * 0x21 == -0x31) {
      return 0xffffffffffffffff;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar24,0x10);
    return 0xffffffffffffffff;
  }
  if (uVar10 == 0) {
    uVar9 = 0;
    goto LAB_004702bd;
  }
  pauVar19 = (undefined1 (*) [16])*param_1;
  uVar9 = ((uVar10 >> 4) + 1) - (ulonglong)((uVar10 & 0xf) == 0);
  if (uVar9 == 1) {
    lVar17 = 0;
LAB_004700c8:
    pcVar1 = *pauVar19 + lVar17;
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
    *(undefined1 (*) [16])(*pauVar19 + lVar17) = auVar25 | _DAT_00183f90;
  }
  else {
    uVar16 = uVar9 & 0x1ffffffffffffffe;
    lVar17 = 0;
    do {
      pcVar1 = *pauVar19 + lVar17;
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
      *(undefined1 (*) [16])(*pauVar19 + lVar17) = auVar26 | auVar25;
      pcVar1 = pauVar19[1] + lVar17;
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
      *(undefined1 (*) [16])(pauVar19[1] + lVar17) = auVar27 | auVar25;
      lVar17 = lVar17 + 0x20;
      uVar16 = uVar16 - 2;
    } while (uVar16 != 0);
    if ((uVar9 & 1) != 0) goto LAB_004700c8;
  }
  if (0xf < uVar10) {
    uVar10 = 0x10;
  }
  (*(code *)PTR_memmove_00799258)(lVar17,uVar10);
  uVar9 = 0;
  do {
    if (SBORROW1('\0',(*pauVar19)[uVar9])) {
      pauVar20 = pauVar19 + ~uVar9 * 2;
      while( true ) {
        uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                ::hash_one::<&u32>(param_2,pauVar19 + uVar9 * -2 + -2);
        uVar10 = param_1[1];
        uVar12 = uVar10 & uVar7;
        auVar25 = *(undefined1 (*) [16])(*pauVar19 + uVar12);
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
        uVar18 = (uint)uVar4;
        uVar16 = uVar12;
        if (uVar4 == 0) {
          lVar17 = 0x10;
          do {
            uVar16 = uVar16 + lVar17 & uVar10;
            auVar25 = *(undefined1 (*) [16])(*pauVar19 + uVar16);
            lVar17 = lVar17 + 0x10;
            uVar18 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
          } while (uVar18 == 0);
        }
        uVar14 = 0;
        for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar16 = uVar14 + uVar16 & uVar10;
        if (-1 < (char)(*pauVar19)[uVar16]) {
          auVar25 = *pauVar19;
          uVar18 = 0;
          for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar16 = (ulonglong)uVar18;
        }
        bVar6 = (byte)(uVar7 >> 0x38);
        if (((uVar16 - uVar12 ^ uVar9 - uVar12) & uVar10) < 0x10) {
          bVar6 = bVar6 >> 1;
          (*pauVar19)[uVar9] = bVar6;
          pauVar19 = (undefined1 (*) [16])*param_1;
          pauVar19[1][uVar10 & uVar9 - 0x10] = bVar6;
          goto LAB_00470249;
        }
        pauVar13 = pauVar19 + ~uVar16 * 2;
        cVar2 = (*pauVar19)[uVar16];
        bVar6 = bVar6 >> 1;
        (*pauVar19)[uVar16] = bVar6;
        pauVar19 = (undefined1 (*) [16])*param_1;
        pauVar19[1][uVar16 - 0x10 & uVar10] = bVar6;
        if (cVar2 == -1) break;
        uVar24 = *(undefined8 *)*pauVar20;
        *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar13;
        *(undefined8 *)*pauVar13 = uVar24;
        uVar24 = *(undefined8 *)(*pauVar20 + 8);
        *(undefined8 *)(*pauVar20 + 8) = *(undefined8 *)(*pauVar13 + 8);
        *(undefined8 *)(*pauVar13 + 8) = uVar24;
        uVar24 = *(undefined8 *)pauVar20[1];
        *(undefined8 *)pauVar20[1] = *(undefined8 *)pauVar13[1];
        *(undefined8 *)pauVar13[1] = uVar24;
        uVar24 = *(undefined8 *)(pauVar20[1] + 8);
        *(undefined8 *)(pauVar20[1] + 8) = *(undefined8 *)(pauVar13[1] + 8);
        *(undefined8 *)(pauVar13[1] + 8) = uVar24;
        pauVar19 = (undefined1 (*) [16])*param_1;
      }
      uVar10 = param_1[1];
      (*pauVar19)[uVar9] = 0xff;
      pauVar19[1][uVar9 - 0x10 & uVar10] = 0xff;
      auVar25 = *pauVar20;
      uVar24 = *(undefined8 *)(pauVar20[1] + 8);
      *(undefined8 *)pauVar13[1] = *(undefined8 *)pauVar20[1];
      *(undefined8 *)(pauVar13[1] + 8) = uVar24;
      *pauVar13 = auVar25;
    }
LAB_00470249:
    bVar23 = uVar9 != uVar3;
    uVar9 = uVar9 + 1;
  } while (bVar23);
  uVar10 = param_1[1];
  lVar17 = param_1[3];
  uVar9 = (uVar10 + 1 & 0xfffffffffffffff8) - (uVar10 + 1 >> 3);
  if (uVar10 < 8) {
    uVar9 = uVar10;
  }
LAB_004702bd:
  param_1[2] = uVar9 - lVar17;
  return 0xffffffffffffffff;
}


