// 006e6580 <hashbrown[b5c94476ffc33875]::map::make_hasher<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,
   std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<usize,
   std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,
   std[6c98fd8553dbae28]::hash::random::RandomState>::{closure#0}> */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
          (void)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ushort uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 in_RDX;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ulonglong in_RSI;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *in_RDI;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  bool bVar24;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar25 = _DAT_00183f90;
  uVar7 = in_RDI[3];
  uVar18 = in_RSI + uVar7;
  if (CARRY8(in_RSI,uVar7)) goto LAB_006e66b8;
  uVar3 = in_RDI[1];
  uVar15 = uVar3 + 1;
  uVar23 = (uVar15 & 0xfffffffffffffff8) - (uVar15 >> 3);
  if (uVar3 < 8) {
    uVar23 = uVar3;
  }
  if (uVar23 >> 1 < uVar18) {
    uVar15 = uVar23 + 1;
    if (uVar23 + 1 <= uVar18) {
      uVar15 = uVar18;
    }
    if (uVar15 < 0xf) {
      uVar18 = 4;
      if (3 < uVar15) {
        uVar18 = (ulonglong)((uint)uVar15 & 8) + 8;
      }
LAB_006e6690:
      uVar23 = uVar18 * 0x20;
      uVar15 = uVar18 + 0x10;
      if (uVar15 + uVar23 < 0x7ffffffffffffff1 && !CARRY8(uVar15,uVar23)) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar9 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar9 == 0) {
          uVar8 = (*(code *)PTR_alloc_err_00799998)(extraout_XMM0_Qa,uVar15 + uVar23);
          return uVar8;
        }
        pauVar20 = (undefined1 (*) [16])(lVar9 + uVar23);
        (*(code *)PTR_memset_00799090)(extraout_XMM0_Qa,uVar15);
        uVar15 = uVar18 - 1;
        uVar23 = (uVar18 & 0xfffffffffffffff8) - (uVar18 >> 3);
        if (uVar18 < 9) {
          uVar23 = uVar15;
        }
        if (uVar7 != 0) {
          pauVar21 = (undefined1 (*) [16])*in_RDI;
          auVar25 = *pauVar21;
          uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
          lVar9 = 0;
          pauVar22 = pauVar21;
          uVar18 = uVar7;
          do {
            if ((short)uVar17 == 0) {
              do {
                auVar25 = pauVar22[1];
                pauVar22 = pauVar22 + 1;
                uVar17 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                lVar9 = lVar9 + 0x10;
              } while (uVar17 == 0);
            }
            uVar14 = 0;
            for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            lVar10 = (ulonglong)uVar14 + lVar9;
            uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&usize>(in_RDX,pauVar21 + lVar10 * -2 + -2);
            uVar13 = uVar11 & uVar15;
            auVar25 = *(undefined1 (*) [16])(*pauVar20 + uVar13);
            uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
            uVar14 = (uint)uVar4;
            if (uVar4 == 0) {
              lVar19 = 0x10;
              do {
                uVar13 = uVar13 + lVar19 & uVar15;
                auVar25 = *(undefined1 (*) [16])(*pauVar20 + uVar13);
                lVar19 = lVar19 + 0x10;
                uVar14 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
              } while (uVar14 == 0);
            }
            uVar12 = 0;
            for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            uVar13 = uVar12 + uVar13 & uVar15;
            if (-1 < (char)(*pauVar20)[uVar13]) {
              auVar25 = *pauVar20;
              uVar14 = 0;
              for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                  (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                uVar14 = uVar14 + 1;
              }
              uVar13 = (ulonglong)uVar14;
            }
            uVar17 = uVar17 - 1 & uVar17;
            uVar18 = uVar18 - 1;
            bVar6 = (byte)(uVar11 >> 0x39);
            (*pauVar20)[uVar13] = bVar6;
            pauVar20[1][uVar13 - 0x10 & uVar15] = bVar6;
            uVar8 = *(undefined8 *)pauVar21[lVar10 * -2 + -1];
            uVar5 = *(undefined8 *)(pauVar21[lVar10 * -2 + -1] + 8);
            pauVar20[uVar13 * -2 + -2] = pauVar21[lVar10 * -2 + -2];
            *(undefined8 *)pauVar20[uVar13 * -2 + -1] = uVar8;
            *(undefined8 *)(pauVar20[uVar13 * -2 + -1] + 8) = uVar5;
          } while (uVar18 != 0);
        }
        *in_RDI = pauVar20;
        in_RDI[1] = uVar15;
        in_RDI[2] = uVar23 - uVar7;
        if (uVar3 == 0) {
          return 0xffffffffffffffff;
        }
        lVar9 = uVar3 * 0x20 + 0x20;
        if (uVar3 + lVar9 == -0x11) {
          return 0xffffffffffffffff;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(lVar9,0x10);
        goto LAB_006e6abc;
      }
    }
    else if (uVar15 < 0x2000000000000000) {
      uVar18 = (uVar15 * 8) / 7 - 1;
      lVar9 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar18 = 0xffffffffffffffff >> (~(byte)lVar9 & 0x3f);
      if (uVar18 < 0x7ffffffffffffff) {
        uVar18 = uVar18 + 1;
        goto LAB_006e6690;
      }
    }
LAB_006e66b8:
    uVar8 = (*(code *)PTR_capacity_overflow_00799958)();
  }
  else {
    if (uVar15 == 0) {
      uVar18 = 0;
    }
    else {
      pauVar20 = (undefined1 (*) [16])*in_RDI;
      uVar7 = ((uVar15 >> 4) + 1) - (ulonglong)((uVar15 & 0xf) == 0);
      if (uVar7 == 1) {
        lVar9 = 0;
LAB_006e68b8:
        pcVar1 = *pauVar20 + lVar9;
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
        *(undefined1 (*) [16])(*pauVar20 + lVar9) = auVar25 | _DAT_00183f90;
      }
      else {
        uVar18 = uVar7 & 0x1ffffffffffffffe;
        lVar9 = 0;
        do {
          pcVar1 = *pauVar20 + lVar9;
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
          *(undefined1 (*) [16])(*pauVar20 + lVar9) = auVar26 | auVar25;
          pcVar1 = pauVar20[1] + lVar9;
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
          *(undefined1 (*) [16])(pauVar20[1] + lVar9) = auVar27 | auVar25;
          lVar9 = lVar9 + 0x20;
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
        if ((uVar7 & 1) != 0) goto LAB_006e68b8;
      }
      if (0xf < uVar15) {
        uVar15 = 0x10;
      }
      (*(code *)PTR_memmove_00799258)(lVar9,uVar15);
      uVar7 = 0;
      do {
        pauVar21 = pauVar20;
        if (SBORROW1('\0',(*pauVar20)[uVar7])) {
          pauVar22 = pauVar20 + ~uVar7 * 2;
          while( true ) {
            uVar23 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&usize>(in_RDX,pauVar20 + uVar7 * -2 + -2);
            uVar18 = in_RDI[1];
            uVar11 = uVar18 & uVar23;
            auVar25 = *(undefined1 (*) [16])(*pauVar20 + uVar11);
            uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar4;
            uVar15 = uVar11;
            if (uVar4 == 0) {
              lVar9 = 0x10;
              do {
                uVar15 = uVar15 + lVar9 & uVar18;
                auVar25 = *(undefined1 (*) [16])(*pauVar20 + uVar15);
                lVar9 = lVar9 + 0x10;
                uVar17 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
              } while (uVar17 == 0);
            }
            uVar14 = 0;
            for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            uVar15 = uVar14 + uVar15 & uVar18;
            if (-1 < (char)(*pauVar20)[uVar15]) {
              auVar25 = *pauVar20;
              uVar17 = 0;
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
                                          (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
                  (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                uVar17 = uVar17 + 1;
              }
              uVar15 = (ulonglong)uVar17;
            }
            bVar6 = (byte)(uVar23 >> 0x38);
            if (((uVar15 - uVar11 ^ uVar7 - uVar11) & uVar18) < 0x10) {
              bVar6 = bVar6 >> 1;
              (*pauVar20)[uVar7] = bVar6;
              pauVar21 = (undefined1 (*) [16])*in_RDI;
              pauVar21[1][uVar18 & uVar7 - 0x10] = bVar6;
              goto LAB_006e6a3c;
            }
            pauVar16 = pauVar20 + uVar15 * -2 + -2;
            cVar2 = (*pauVar20)[uVar15];
            bVar6 = bVar6 >> 1;
            (*pauVar20)[uVar15] = bVar6;
            pauVar21 = (undefined1 (*) [16])*in_RDI;
            pauVar21[1][uVar15 - 0x10 & uVar18] = bVar6;
            if (cVar2 == -1) break;
            uVar8 = *(undefined8 *)*pauVar22;
            *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar16;
            *(undefined8 *)*pauVar16 = uVar8;
            uVar8 = *(undefined8 *)(*pauVar22 + 8);
            *(undefined8 *)(*pauVar22 + 8) = *(undefined8 *)(pauVar20[uVar15 * -2 + -2] + 8);
            *(undefined8 *)(pauVar20[uVar15 * -2 + -2] + 8) = uVar8;
            uVar8 = *(undefined8 *)pauVar22[1];
            *(undefined8 *)pauVar22[1] = *(undefined8 *)pauVar20[uVar15 * -2 + -1];
            *(undefined8 *)pauVar20[uVar15 * -2 + -1] = uVar8;
            uVar8 = *(undefined8 *)(pauVar22[1] + 8);
            *(undefined8 *)(pauVar22[1] + 8) = *(undefined8 *)(pauVar20[uVar15 * -2 + -1] + 8);
            *(undefined8 *)(pauVar20[uVar15 * -2 + -1] + 8) = uVar8;
            pauVar20 = (undefined1 (*) [16])*in_RDI;
          }
          uVar18 = in_RDI[1];
          (*pauVar21)[uVar7] = 0xff;
          pauVar21[1][uVar7 - 0x10 & uVar18] = 0xff;
          auVar25 = *pauVar22;
          uVar8 = *(undefined8 *)(pauVar22[1] + 8);
          *(undefined8 *)pauVar20[uVar15 * -2 + -1] = *(undefined8 *)pauVar22[1];
          *(undefined8 *)(pauVar20[uVar15 * -2 + -1] + 8) = uVar8;
          *pauVar16 = auVar25;
        }
LAB_006e6a3c:
        bVar24 = uVar7 != uVar3;
        uVar7 = uVar7 + 1;
        pauVar20 = pauVar21;
      } while (bVar24);
      uVar15 = in_RDI[1];
      uVar7 = in_RDI[3];
      uVar18 = (uVar15 + 1 & 0xfffffffffffffff8) - (uVar15 + 1 >> 3);
      if (uVar15 < 8) {
        uVar18 = uVar15;
      }
    }
    in_RDI[2] = uVar18 - uVar7;
LAB_006e6abc:
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
}


