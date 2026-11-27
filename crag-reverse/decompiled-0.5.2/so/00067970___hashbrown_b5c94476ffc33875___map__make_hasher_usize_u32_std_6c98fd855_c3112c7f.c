// 00067970 <hashbrown[b5c94476ffc33875]::map::make_hasher<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,
   u32)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<usize, u32,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,u32)>>::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ushort uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  auVar23 = _DAT_00009070;
  uVar6 = param_1[3];
  uVar16 = param_2 + uVar6;
  if (CARRY8(param_2,uVar6)) goto LAB_00067aa0;
  uVar3 = param_1[1];
  uVar9 = uVar3 + 1;
  uVar21 = (uVar9 & 0xfffffffffffffff8) - (uVar9 >> 3);
  if (uVar3 < 8) {
    uVar21 = uVar3;
  }
  if (uVar21 >> 1 < uVar16) {
    uVar9 = uVar21 + 1;
    if (uVar21 + 1 <= uVar16) {
      uVar9 = uVar16;
    }
    if (uVar9 < 0xf) {
      uVar16 = 4;
      if (3 < uVar9) {
        uVar16 = (ulonglong)((uint)uVar9 & 8) + 8;
      }
LAB_00067a78:
      uVar21 = uVar16 * 0x10;
      uVar9 = uVar16 + 0x10;
      if (uVar9 + uVar21 < 0x7ffffffffffffff1 && !CARRY8(uVar9,uVar21)) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        lVar8 = (*(code *)PTR___rust_alloc_000c3a90)();
        if (lVar8 == 0) {
          uVar7 = (*(code *)PTR_alloc_err_000c3f88)(extraout_XMM0_Qa,uVar9 + uVar21);
          return uVar7;
        }
        pauVar18 = (undefined1 (*) [16])(lVar8 + uVar21);
        uVar21 = uVar16 - 1;
        uVar13 = (uVar16 & 0xfffffffffffffff8) - (uVar16 >> 3);
        if (uVar16 < 9) {
          uVar13 = uVar21;
        }
        (*(code *)PTR_memset_000c3cd8)(uVar21,uVar9);
        if (uVar6 != 0) {
          pauVar14 = (undefined1 (*) [16])*param_1;
          auVar23 = *pauVar14;
          uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
          lVar8 = 0;
          uVar16 = uVar6;
          pauVar19 = pauVar14;
          do {
            if ((short)uVar20 == 0) {
              do {
                auVar23 = pauVar19[1];
                pauVar19 = pauVar19 + 1;
                uVar20 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) ^ 0xffff;
                lVar8 = lVar8 + 0x10;
              } while (uVar20 == 0);
            }
            uVar15 = 0;
            for (uVar12 = uVar20; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                    ::hash_one::<&usize>(param_3,pauVar14 + (-1 - ((ulonglong)uVar15 + lVar8)));
            uVar11 = uVar9 & uVar21;
            auVar23 = *(undefined1 (*) [16])(*pauVar18 + uVar11);
            uVar4 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
            uVar12 = (uint)uVar4;
            if (uVar4 == 0) {
              lVar17 = 0x10;
              do {
                uVar11 = uVar11 + lVar17 & uVar21;
                auVar23 = *(undefined1 (*) [16])(*pauVar18 + uVar11);
                lVar17 = lVar17 + 0x10;
                uVar12 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
              } while (uVar12 == 0);
            }
            uVar10 = 0;
            for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar11 = uVar10 + uVar11 & uVar21;
            if (-1 < (char)(*pauVar18)[uVar11]) {
              auVar23 = *pauVar18;
              uVar12 = 0;
              for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
                  (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              uVar11 = (ulonglong)uVar12;
            }
            uVar20 = uVar20 - 1 & uVar20;
            uVar16 = uVar16 - 1;
            bVar5 = (byte)(uVar9 >> 0x39);
            (*pauVar18)[uVar11] = bVar5;
            pauVar18[1][uVar11 - 0x10 & uVar21] = bVar5;
            pauVar18[~uVar11] = pauVar14[~((ulonglong)uVar15 + lVar8)];
          } while (uVar16 != 0);
        }
        *param_1 = pauVar18;
        param_1[1] = uVar21;
        param_1[2] = uVar13 - uVar6;
        if (uVar3 == 0) {
          return 0xffffffffffffffff;
        }
        lVar8 = uVar3 * 0x10 + 0x10;
        if (uVar3 + lVar8 == -0x11) {
          return 0xffffffffffffffff;
        }
        (*(code *)PTR___rust_dealloc_000c3aa0)(lVar8,0x10);
        goto LAB_00067e6a;
      }
    }
    else if (uVar9 < 0x2000000000000000) {
      uVar16 = (uVar9 * 8) / 7 - 1;
      lVar8 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar16 = 0xffffffffffffffff >> (~(byte)lVar8 & 0x3f);
      if (uVar16 < 0xfffffffffffffff) {
        uVar16 = uVar16 + 1;
        goto LAB_00067a78;
      }
    }
LAB_00067aa0:
    uVar7 = (*(code *)PTR_capacity_overflow_000c3f80)();
  }
  else {
    if (uVar9 == 0) {
      uVar16 = 0;
    }
    else {
      pauVar18 = (undefined1 (*) [16])*param_1;
      uVar6 = ((uVar9 >> 4) + 1) - (ulonglong)((uVar9 & 0xf) == 0);
      if (uVar6 == 1) {
        lVar8 = 0;
LAB_00067c98:
        pcVar1 = *pauVar18 + lVar8;
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
        *(undefined1 (*) [16])(*pauVar18 + lVar8) = auVar23 | _DAT_00009070;
      }
      else {
        uVar16 = uVar6 & 0x1ffffffffffffffe;
        lVar8 = 0;
        do {
          pcVar1 = *pauVar18 + lVar8;
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
          *(undefined1 (*) [16])(*pauVar18 + lVar8) = auVar24 | auVar23;
          pcVar1 = pauVar18[1] + lVar8;
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
          *(undefined1 (*) [16])(pauVar18[1] + lVar8) = auVar25 | auVar23;
          lVar8 = lVar8 + 0x20;
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
        if ((uVar6 & 1) != 0) goto LAB_00067c98;
      }
      if (0xf < uVar9) {
        uVar9 = 0x10;
      }
      (*(code *)PTR_memmove_000c3c50)(lVar8,uVar9);
      uVar6 = 0;
      do {
        if (SBORROW1('\0',(*pauVar18)[uVar6])) {
          pauVar14 = pauVar18 + ~uVar6;
          while( true ) {
            uVar21 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&usize>(param_3,pauVar18 + (-1 - uVar6));
            uVar16 = param_1[1];
            uVar13 = uVar16 & uVar21;
            auVar23 = *(undefined1 (*) [16])(*pauVar18 + uVar13);
            uVar4 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
            uVar20 = (uint)uVar4;
            uVar9 = uVar13;
            if (uVar4 == 0) {
              lVar8 = 0x10;
              do {
                uVar9 = uVar9 + lVar8 & uVar16;
                auVar23 = *(undefined1 (*) [16])(*pauVar18 + uVar9);
                lVar8 = lVar8 + 0x10;
                uVar20 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
              } while (uVar20 == 0);
            }
            uVar15 = 0;
            for (; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar9 = uVar15 + uVar9 & uVar16;
            if (-1 < (char)(*pauVar18)[uVar9]) {
              auVar23 = *pauVar18;
              uVar20 = 0;
              for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
                  (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
                uVar20 = uVar20 + 1;
              }
              uVar9 = (ulonglong)uVar20;
            }
            bVar5 = (byte)(uVar21 >> 0x38);
            if (((uVar9 - uVar13 ^ uVar6 - uVar13) & uVar16) < 0x10) {
              bVar5 = bVar5 >> 1;
              (*pauVar18)[uVar6] = bVar5;
              pauVar18 = (undefined1 (*) [16])*param_1;
              pauVar18[1][uVar16 & uVar6 - 0x10] = bVar5;
              goto LAB_00067df9;
            }
            pauVar19 = pauVar18 + ~uVar9;
            cVar2 = (*pauVar18)[uVar9];
            bVar5 = bVar5 >> 1;
            (*pauVar18)[uVar9] = bVar5;
            pauVar18 = (undefined1 (*) [16])*param_1;
            pauVar18[1][uVar9 - 0x10 & uVar16] = bVar5;
            if (cVar2 == -1) break;
            uVar7 = *(undefined8 *)*pauVar14;
            *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar19;
            *(undefined8 *)*pauVar19 = uVar7;
            uVar7 = *(undefined8 *)(*pauVar14 + 8);
            *(undefined8 *)(*pauVar14 + 8) = *(undefined8 *)(*pauVar19 + 8);
            *(undefined8 *)(*pauVar19 + 8) = uVar7;
            pauVar18 = (undefined1 (*) [16])*param_1;
          }
          uVar16 = param_1[1];
          (*pauVar18)[uVar6] = 0xff;
          pauVar18[1][uVar6 - 0x10 & uVar16] = 0xff;
          *pauVar19 = *pauVar14;
        }
LAB_00067df9:
        bVar22 = uVar6 != uVar3;
        uVar6 = uVar6 + 1;
      } while (bVar22);
      uVar9 = param_1[1];
      uVar6 = param_1[3];
      uVar16 = (uVar9 + 1 & 0xfffffffffffffff8) - (uVar9 + 1 >> 3);
      if (uVar9 < 8) {
        uVar16 = uVar9;
      }
    }
    param_1[2] = uVar16 - uVar6;
LAB_00067e6a:
    uVar7 = 0xffffffffffffffff;
  }
  return uVar7;
}


