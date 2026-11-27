// 00068060 <hashbrown[b5c94476ffc33875]::map::make_hasher<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,
   agy_bridge[64a9e9deac6c45ce]::StreamSlot)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<u32,
   agy_bridge[64a9e9deac6c45ce]::StreamSlot,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot)>>::
reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  bool bVar23;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar24 = _DAT_00009070;
  uVar7 = param_1[3];
  uVar17 = param_2 + uVar7;
  if (CARRY8(param_2,uVar7)) goto LAB_00068188;
  uVar3 = param_1[1];
  uVar8 = uVar3 + 1;
  uVar11 = (uVar8 & 0xfffffffffffffff8) - (uVar8 >> 3);
  if (uVar3 < 8) {
    uVar11 = uVar3;
  }
  if (uVar11 >> 1 < uVar17) {
    uVar8 = uVar11 + 1;
    if (uVar11 + 1 <= uVar17) {
      uVar8 = uVar17;
    }
    if (uVar8 < 0xf) {
      uVar17 = 4;
      if (3 < uVar8) {
        uVar17 = (ulonglong)((uint)uVar8 & 8) + 8;
      }
    }
    else {
      if (0x1fffffffffffffff < uVar8) goto LAB_00068188;
      uVar17 = (uVar8 * 8) / 7 - 1;
      lVar10 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar17 = (0xffffffffffffffffU >> (~(byte)lVar10 & 0x3f)) + 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar17;
    uVar8 = SUB168(auVar4 * ZEXT816(0x140),0);
    if (SUB168(auVar4 * ZEXT816(0x140),8) == 0) {
      uVar11 = uVar17 + 0x10;
      if (uVar8 + uVar11 < 0x7ffffffffffffff1 && !CARRY8(uVar8,uVar11)) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        lVar10 = (*(code *)PTR___rust_alloc_000c3a90)();
        if (lVar10 == 0) {
          uVar9 = (*(code *)PTR_alloc_err_000c3f88)(extraout_XMM0_Qa,uVar8 + uVar11);
          return uVar9;
        }
        pauVar19 = (undefined1 (*) [16])(lVar10 + uVar8);
        uVar8 = uVar17 - 1;
        uVar16 = (uVar17 & 0xfffffffffffffff8) - (uVar17 >> 3);
        if (uVar17 < 9) {
          uVar16 = uVar8;
        }
        (*(code *)PTR_memset_000c3cd8)(uVar8,uVar11);
        if (uVar7 != 0) {
          pauVar20 = (undefined1 (*) [16])*param_1;
          auVar24 = *pauVar20;
          uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
          lVar10 = 0;
          uVar17 = uVar7;
          pauVar21 = pauVar20;
          do {
            if ((short)uVar22 == 0) {
              do {
                auVar24 = pauVar21[1];
                pauVar21 = pauVar21 + 1;
                uVar22 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
                lVar10 = lVar10 + 0x10;
              } while (uVar22 == 0);
            }
            uVar15 = 0;
            for (uVar12 = uVar22; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&u32>(param_3,pauVar20 +
                                                ((ulonglong)uVar15 + lVar10) * -0x14 + -0x14);
            uVar13 = uVar11 & uVar8;
            auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar13);
            uVar5 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
            uVar15 = (uint)uVar5;
            if (uVar5 == 0) {
              lVar18 = 0x10;
              do {
                uVar13 = uVar13 + lVar18 & uVar8;
                auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar13);
                lVar18 = lVar18 + 0x10;
                uVar15 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
              } while (uVar15 == 0);
            }
            uVar12 = 0;
            for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            uVar13 = uVar12 + uVar13 & uVar8;
            if (-1 < (char)(*pauVar19)[uVar13]) {
              auVar24 = *pauVar19;
              uVar15 = 0;
              for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
                  (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                uVar15 = uVar15 + 1;
              }
              uVar13 = (ulonglong)uVar15;
            }
            uVar22 = uVar22 - 1 & uVar22;
            uVar17 = uVar17 - 1;
            uVar14 = uVar13 - 0x10 & uVar8;
            bVar6 = (byte)(uVar11 >> 0x39);
            (*pauVar19)[uVar13] = bVar6;
            pauVar19[1][uVar14] = bVar6;
            (*(code *)PTR_memcpy_000c3aa8)(uVar14,0x140);
          } while (uVar17 != 0);
        }
        *param_1 = pauVar19;
        param_1[1] = uVar8;
        param_1[2] = uVar16 - uVar7;
        if (uVar3 == 0) {
          return 0xffffffffffffffff;
        }
        lVar10 = uVar3 * 0x140 + 0x140;
        if (uVar3 + lVar10 == -0x11) {
          return 0xffffffffffffffff;
        }
        (*(code *)PTR___rust_dealloc_000c3aa0)(lVar10,0x10);
        goto LAB_0006895b;
      }
    }
LAB_00068188:
    uVar9 = (*(code *)PTR_capacity_overflow_000c3f80)();
  }
  else {
    if (uVar8 == 0) {
      uVar17 = 0;
    }
    else {
      pauVar19 = (undefined1 (*) [16])*param_1;
      uVar7 = ((uVar8 >> 4) + 1) - (ulonglong)((uVar8 & 0xf) == 0);
      if (uVar7 == 1) {
        lVar10 = 0;
LAB_000683aa:
        pcVar1 = *pauVar19 + lVar10;
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
        *(undefined1 (*) [16])(*pauVar19 + lVar10) = auVar24 | _DAT_00009070;
      }
      else {
        uVar17 = uVar7 & 0x1ffffffffffffffe;
        lVar10 = 0;
        do {
          pcVar1 = *pauVar19 + lVar10;
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
          *(undefined1 (*) [16])(*pauVar19 + lVar10) = auVar25 | auVar24;
          pcVar1 = pauVar19[1] + lVar10;
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
          *(undefined1 (*) [16])(pauVar19[1] + lVar10) = auVar26 | auVar24;
          lVar10 = lVar10 + 0x20;
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
        if ((uVar7 & 1) != 0) goto LAB_000683aa;
      }
      if (0xf < uVar8) {
        uVar8 = 0x10;
      }
      (*(code *)PTR_memmove_000c3c50)(lVar10,uVar8);
      uVar7 = 0;
      do {
        if (SBORROW1('\0',(*pauVar19)[uVar7])) {
          pauVar20 = pauVar19 + ~uVar7 * 0x14;
          while( true ) {
            uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&u32>(param_3,pauVar19 + uVar7 * -0x14 + -0x14);
            uVar17 = param_1[1];
            uVar16 = uVar17 & uVar11;
            auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar16);
            uVar5 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
            uVar22 = (uint)uVar5;
            uVar8 = uVar16;
            if (uVar5 == 0) {
              lVar10 = 0x10;
              do {
                uVar8 = uVar8 + lVar10 & uVar17;
                auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar8);
                lVar10 = lVar10 + 0x10;
                uVar22 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
              } while (uVar22 == 0);
            }
            uVar15 = 0;
            for (; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar8 = uVar15 + uVar8 & uVar17;
            if (-1 < (char)(*pauVar19)[uVar8]) {
              auVar24 = *pauVar19;
              uVar22 = 0;
              for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
                  (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
                uVar22 = uVar22 + 1;
              }
              uVar8 = (ulonglong)uVar22;
            }
            bVar6 = (byte)(uVar11 >> 0x38);
            if (((uVar8 - uVar16 ^ uVar7 - uVar16) & uVar17) < 0x10) {
              bVar6 = bVar6 >> 1;
              (*pauVar19)[uVar7] = bVar6;
              pauVar19 = (undefined1 (*) [16])*param_1;
              pauVar19[1][uVar17 & uVar7 - 0x10] = bVar6;
              goto LAB_000688da;
            }
            pauVar21 = pauVar19 + ~uVar8 * 0x14;
            cVar2 = (*pauVar19)[uVar8];
            bVar6 = bVar6 >> 1;
            (*pauVar19)[uVar8] = bVar6;
            pauVar19 = (undefined1 (*) [16])*param_1;
            pauVar19[1][uVar8 - 0x10 & uVar17] = bVar6;
            if (cVar2 == -1) break;
            uVar9 = *(undefined8 *)*pauVar20;
            *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar21;
            *(undefined8 *)*pauVar21 = uVar9;
            uVar9 = *(undefined8 *)(*pauVar20 + 8);
            *(undefined8 *)(*pauVar20 + 8) = *(undefined8 *)(*pauVar21 + 8);
            *(undefined8 *)(*pauVar21 + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[1];
            *(undefined8 *)pauVar20[1] = *(undefined8 *)pauVar21[1];
            *(undefined8 *)pauVar21[1] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[1] + 8);
            *(undefined8 *)(pauVar20[1] + 8) = *(undefined8 *)(pauVar21[1] + 8);
            *(undefined8 *)(pauVar21[1] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[2];
            *(undefined8 *)pauVar20[2] = *(undefined8 *)pauVar21[2];
            *(undefined8 *)pauVar21[2] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[2] + 8);
            *(undefined8 *)(pauVar20[2] + 8) = *(undefined8 *)(pauVar21[2] + 8);
            *(undefined8 *)(pauVar21[2] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[3];
            *(undefined8 *)pauVar20[3] = *(undefined8 *)pauVar21[3];
            *(undefined8 *)pauVar21[3] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[3] + 8);
            *(undefined8 *)(pauVar20[3] + 8) = *(undefined8 *)(pauVar21[3] + 8);
            *(undefined8 *)(pauVar21[3] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[4];
            *(undefined8 *)pauVar20[4] = *(undefined8 *)pauVar21[4];
            *(undefined8 *)pauVar21[4] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[4] + 8);
            *(undefined8 *)(pauVar20[4] + 8) = *(undefined8 *)(pauVar21[4] + 8);
            *(undefined8 *)(pauVar21[4] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[5];
            *(undefined8 *)pauVar20[5] = *(undefined8 *)pauVar21[5];
            *(undefined8 *)pauVar21[5] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[5] + 8);
            *(undefined8 *)(pauVar20[5] + 8) = *(undefined8 *)(pauVar21[5] + 8);
            *(undefined8 *)(pauVar21[5] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[6];
            *(undefined8 *)pauVar20[6] = *(undefined8 *)pauVar21[6];
            *(undefined8 *)pauVar21[6] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[6] + 8);
            *(undefined8 *)(pauVar20[6] + 8) = *(undefined8 *)(pauVar21[6] + 8);
            *(undefined8 *)(pauVar21[6] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[7];
            *(undefined8 *)pauVar20[7] = *(undefined8 *)pauVar21[7];
            *(undefined8 *)pauVar21[7] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[7] + 8);
            *(undefined8 *)(pauVar20[7] + 8) = *(undefined8 *)(pauVar21[7] + 8);
            *(undefined8 *)(pauVar21[7] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[8];
            *(undefined8 *)pauVar20[8] = *(undefined8 *)pauVar21[8];
            *(undefined8 *)pauVar21[8] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[8] + 8);
            *(undefined8 *)(pauVar20[8] + 8) = *(undefined8 *)(pauVar21[8] + 8);
            *(undefined8 *)(pauVar21[8] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[9];
            *(undefined8 *)pauVar20[9] = *(undefined8 *)pauVar21[9];
            *(undefined8 *)pauVar21[9] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[9] + 8);
            *(undefined8 *)(pauVar20[9] + 8) = *(undefined8 *)(pauVar21[9] + 8);
            *(undefined8 *)(pauVar21[9] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[10];
            *(undefined8 *)pauVar20[10] = *(undefined8 *)pauVar21[10];
            *(undefined8 *)pauVar21[10] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[10] + 8);
            *(undefined8 *)(pauVar20[10] + 8) = *(undefined8 *)(pauVar21[10] + 8);
            *(undefined8 *)(pauVar21[10] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0xb];
            *(undefined8 *)pauVar20[0xb] = *(undefined8 *)pauVar21[0xb];
            *(undefined8 *)pauVar21[0xb] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0xb] + 8);
            *(undefined8 *)(pauVar20[0xb] + 8) = *(undefined8 *)(pauVar21[0xb] + 8);
            *(undefined8 *)(pauVar21[0xb] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0xc];
            *(undefined8 *)pauVar20[0xc] = *(undefined8 *)pauVar21[0xc];
            *(undefined8 *)pauVar21[0xc] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0xc] + 8);
            *(undefined8 *)(pauVar20[0xc] + 8) = *(undefined8 *)(pauVar21[0xc] + 8);
            *(undefined8 *)(pauVar21[0xc] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0xd];
            *(undefined8 *)pauVar20[0xd] = *(undefined8 *)pauVar21[0xd];
            *(undefined8 *)pauVar21[0xd] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0xd] + 8);
            *(undefined8 *)(pauVar20[0xd] + 8) = *(undefined8 *)(pauVar21[0xd] + 8);
            *(undefined8 *)(pauVar21[0xd] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0xe];
            *(undefined8 *)pauVar20[0xe] = *(undefined8 *)pauVar21[0xe];
            *(undefined8 *)pauVar21[0xe] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0xe] + 8);
            *(undefined8 *)(pauVar20[0xe] + 8) = *(undefined8 *)(pauVar21[0xe] + 8);
            *(undefined8 *)(pauVar21[0xe] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0xf];
            *(undefined8 *)pauVar20[0xf] = *(undefined8 *)pauVar21[0xf];
            *(undefined8 *)pauVar21[0xf] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0xf] + 8);
            *(undefined8 *)(pauVar20[0xf] + 8) = *(undefined8 *)(pauVar21[0xf] + 8);
            *(undefined8 *)(pauVar21[0xf] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0x10];
            *(undefined8 *)pauVar20[0x10] = *(undefined8 *)pauVar21[0x10];
            *(undefined8 *)pauVar21[0x10] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0x10] + 8);
            *(undefined8 *)(pauVar20[0x10] + 8) = *(undefined8 *)(pauVar21[0x10] + 8);
            *(undefined8 *)(pauVar21[0x10] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0x11];
            *(undefined8 *)pauVar20[0x11] = *(undefined8 *)pauVar21[0x11];
            *(undefined8 *)pauVar21[0x11] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0x11] + 8);
            *(undefined8 *)(pauVar20[0x11] + 8) = *(undefined8 *)(pauVar21[0x11] + 8);
            *(undefined8 *)(pauVar21[0x11] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0x12];
            *(undefined8 *)pauVar20[0x12] = *(undefined8 *)pauVar21[0x12];
            *(undefined8 *)pauVar21[0x12] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0x12] + 8);
            *(undefined8 *)(pauVar20[0x12] + 8) = *(undefined8 *)(pauVar21[0x12] + 8);
            *(undefined8 *)(pauVar21[0x12] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar20[0x13];
            *(undefined8 *)pauVar20[0x13] = *(undefined8 *)pauVar21[0x13];
            *(undefined8 *)pauVar21[0x13] = uVar9;
            uVar9 = *(undefined8 *)(pauVar20[0x13] + 8);
            *(undefined8 *)(pauVar20[0x13] + 8) = *(undefined8 *)(pauVar21[0x13] + 8);
            *(undefined8 *)(pauVar21[0x13] + 8) = uVar9;
            pauVar19 = (undefined1 (*) [16])*param_1;
          }
          uVar8 = param_1[1];
          (*pauVar19)[uVar7] = 0xff;
          pauVar19[1][uVar7 - 0x10 & uVar8] = 0xff;
          (*(code *)PTR_memcpy_000c3aa8)(uVar17,0x140);
        }
LAB_000688da:
        bVar23 = uVar7 != uVar3;
        uVar7 = uVar7 + 1;
      } while (bVar23);
      uVar8 = param_1[1];
      uVar7 = param_1[3];
      uVar17 = (uVar8 + 1 & 0xfffffffffffffff8) - (uVar8 + 1 >> 3);
      if (uVar8 < 8) {
        uVar17 = uVar8;
      }
    }
    param_1[2] = uVar17 - uVar7;
LAB_0006895b:
    uVar9 = 0xffffffffffffffff;
  }
  return uVar9;
}


