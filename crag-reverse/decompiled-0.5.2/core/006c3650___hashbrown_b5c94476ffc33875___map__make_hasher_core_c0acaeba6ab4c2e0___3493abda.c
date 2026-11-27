// 006c3650 <hashbrown[b5c94476ffc33875]::map::make_hasher<core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>,core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>::{closure#0}>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,
   alloc[12e961f32105355]::boxed::Box<dyn http[56314f485c23ccf6]::extensions::AnyClone +
   core[c0acaeba6ab4c2e0]::marker::Send +
   core[c0acaeba6ab4c2e0]::marker::Sync>)>>::reserve_rehash::<hashbrown[b5c94476ffc33875]::map::make_hasher<core[c0acaeba6ab4c2e0]::any::TypeId,
   alloc[12e961f32105355]::boxed::Box<dyn http[56314f485c23ccf6]::extensions::AnyClone +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>,
   core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>::{closure#0}>
    */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>>
::reserve_rehash::
<hashbrown[b5c94476ffc33875]::map::make_hasher<core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>,core[c0acaeba6ab4c2e0]::hash::BuildHasherDefault<http[56314f485c23ccf6]::extensions::IdHasher>>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  byte bVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  bool bVar24;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar25 = _DAT_00183f90;
  uVar7 = param_1[3];
  uVar12 = param_2 + uVar7;
  if (CARRY8(param_2,uVar7)) goto LAB_006c3776;
  uVar3 = param_1[1];
  uVar18 = uVar3 + 1;
  uVar20 = (uVar18 & 0xfffffffffffffff8) - (uVar18 >> 3);
  if (uVar3 < 8) {
    uVar20 = uVar3;
  }
  if (uVar20 >> 1 < uVar12) {
    uVar18 = uVar20 + 1;
    if (uVar20 + 1 <= uVar12) {
      uVar18 = uVar12;
    }
    if (uVar18 < 0xf) {
      uVar12 = 4;
      if (3 < uVar18) {
        uVar12 = (ulonglong)((uint)uVar18 & 8) + 8;
      }
LAB_006c3751:
      uVar18 = uVar12 * 0x20;
      uVar20 = uVar12 + 0x10 + uVar18;
      if (uVar20 < 0x7ffffffffffffff1 && !CARRY8(uVar12 + 0x10,uVar18)) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar9 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar9 == 0) {
          uVar8 = (*(code *)PTR_alloc_err_00799998)(extraout_XMM0_Qa,uVar20);
          return uVar8;
        }
        pauVar22 = (undefined1 (*) [16])(lVar9 + uVar18);
        (*(code *)PTR_memset_00799090)(extraout_XMM0_Qa,uVar12 + 0x10);
        uVar18 = uVar12 - 1;
        uVar20 = (uVar12 & 0xfffffffffffffff8) - (uVar12 >> 3);
        if (uVar12 < 9) {
          uVar20 = uVar18;
        }
        if (uVar7 != 0) {
          pauVar23 = (undefined1 (*) [16])*param_1;
          auVar25 = *pauVar23;
          uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
          pauVar13 = pauVar23;
          uVar12 = uVar7;
          do {
            if ((short)uVar15 == 0) {
              do {
                auVar25 = pauVar13[1];
                pauVar13 = pauVar13 + 1;
                uVar15 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
              } while (uVar15 == 0);
            }
            uVar10 = 0;
            for (uVar11 = uVar15; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            lVar17 = (ulonglong)uVar10 + lVar9;
            uVar19 = *(ulonglong *)(pauVar23[lVar17 * -2 + -2] + 8) & uVar18;
            auVar25 = *(undefined1 (*) [16])(*pauVar22 + uVar19);
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
            uVar10 = (uint)uVar4;
            if (uVar4 == 0) {
              lVar21 = 0x10;
              do {
                uVar19 = uVar19 + lVar21 & uVar18;
                auVar25 = *(undefined1 (*) [16])(*pauVar22 + uVar19);
                lVar21 = lVar21 + 0x10;
                uVar10 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
              } while (uVar10 == 0);
            }
            uVar11 = 0;
            for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar19 = uVar11 + uVar19 & uVar18;
            if (-1 < (char)(*pauVar22)[uVar19]) {
              auVar25 = *pauVar22;
              uVar10 = 0;
              for (uVar11 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                  (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar10 = uVar10 + 1;
              }
              uVar19 = (ulonglong)uVar10;
            }
            uVar15 = uVar15 - 1 & uVar15;
            uVar12 = uVar12 - 1;
            bVar14 = (byte)(*(ulonglong *)(pauVar23[lVar17 * -2 + -2] + 8) >> 0x39);
            (*pauVar22)[uVar19] = bVar14;
            pauVar22[1][uVar19 - 0x10 & uVar18] = bVar14;
            uVar8 = *(undefined8 *)(pauVar23[lVar17 * -2 + -2] + 8);
            uVar5 = *(undefined8 *)pauVar23[lVar17 * -2 + -1];
            uVar6 = *(undefined8 *)(pauVar23[lVar17 * -2 + -1] + 8);
            *(undefined8 *)pauVar22[uVar19 * -2 + -2] = *(undefined8 *)pauVar23[lVar17 * -2 + -2];
            *(undefined8 *)(pauVar22[uVar19 * -2 + -2] + 8) = uVar8;
            *(undefined8 *)pauVar22[uVar19 * -2 + -1] = uVar5;
            *(undefined8 *)(pauVar22[uVar19 * -2 + -1] + 8) = uVar6;
          } while (uVar12 != 0);
        }
        *param_1 = pauVar22;
        param_1[1] = uVar18;
        param_1[2] = uVar20 - uVar7;
        if (uVar3 == 0) {
          return 0xffffffffffffffff;
        }
        lVar9 = uVar3 * 0x20 + 0x20;
        if (uVar3 + lVar9 == -0x11) {
          return 0xffffffffffffffff;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(lVar9,0x10);
        goto LAB_006c3b54;
      }
    }
    else if (uVar18 < 0x2000000000000000) {
      uVar12 = (uVar18 * 8) / 7 - 1;
      lVar9 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar12 = 0xffffffffffffffff >> (~(byte)lVar9 & 0x3f);
      if (uVar12 < 0x7ffffffffffffff) {
        uVar12 = uVar12 + 1;
        goto LAB_006c3751;
      }
    }
LAB_006c3776:
    uVar8 = (*(code *)PTR_capacity_overflow_00799958)();
  }
  else {
    if (uVar18 == 0) {
      uVar12 = 0;
    }
    else {
      pauVar22 = (undefined1 (*) [16])*param_1;
      uVar7 = ((uVar18 >> 4) + 1) - (ulonglong)((uVar18 & 0xf) == 0);
      if (uVar7 == 1) {
        lVar9 = 0;
LAB_006c3968:
        pcVar1 = *pauVar22 + lVar9;
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
        *(undefined1 (*) [16])(*pauVar22 + lVar9) = auVar25 | _DAT_00183f90;
      }
      else {
        uVar12 = uVar7 & 0x1ffffffffffffffe;
        lVar9 = 0;
        do {
          pcVar1 = *pauVar22 + lVar9;
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
          *(undefined1 (*) [16])(*pauVar22 + lVar9) = auVar26 | auVar25;
          pcVar1 = pauVar22[1] + lVar9;
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
          *(undefined1 (*) [16])(pauVar22[1] + lVar9) = auVar27 | auVar25;
          lVar9 = lVar9 + 0x20;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        if ((uVar7 & 1) != 0) goto LAB_006c3968;
      }
      if (0xf < uVar18) {
        uVar18 = 0x10;
      }
      (*(code *)PTR_memmove_00799258)(lVar9,uVar18);
      uVar7 = 0;
      do {
        pauVar23 = pauVar22;
        if (SBORROW1('\0',(*pauVar22)[uVar7])) {
          pauVar13 = pauVar22 + ~uVar7 * 2;
          while( true ) {
            uVar12 = param_1[1];
            uVar20 = uVar12 & *(ulonglong *)(pauVar22[uVar7 * -2 + -2] + 8);
            auVar25 = *(undefined1 (*) [16])(*pauVar22 + uVar20);
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
            uVar15 = (uint)uVar4;
            uVar18 = uVar20;
            if (uVar4 == 0) {
              lVar9 = 0x10;
              do {
                uVar18 = uVar18 + lVar9 & uVar12;
                auVar25 = *(undefined1 (*) [16])(*pauVar22 + uVar18);
                lVar9 = lVar9 + 0x10;
                uVar15 = (uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
              } while (uVar15 == 0);
            }
            uVar10 = 0;
            for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar18 = uVar10 + uVar18 & uVar12;
            if (-1 < (char)(*pauVar22)[uVar18]) {
              auVar25 = *pauVar22;
              uVar15 = 0;
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
                                          (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
                  (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar15 = uVar15 + 1;
              }
              uVar18 = (ulonglong)uVar15;
            }
            bVar14 = (byte)(*(ulonglong *)(pauVar22[uVar7 * -2 + -2] + 8) >> 0x38);
            if (((uVar18 - uVar20 ^ uVar7 - uVar20) & uVar12) < 0x10) {
              bVar14 = bVar14 >> 1;
              (*pauVar22)[uVar7] = bVar14;
              pauVar23 = (undefined1 (*) [16])*param_1;
              pauVar23[1][uVar12 & uVar7 - 0x10] = bVar14;
              goto LAB_006c3ad7;
            }
            pauVar16 = pauVar22 + uVar18 * -2 + -2;
            cVar2 = (*pauVar22)[uVar18];
            bVar14 = bVar14 >> 1;
            (*pauVar22)[uVar18] = bVar14;
            pauVar23 = (undefined1 (*) [16])*param_1;
            pauVar23[1][uVar18 - 0x10 & uVar12] = bVar14;
            if (cVar2 == -1) break;
            uVar8 = *(undefined8 *)*pauVar13;
            *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar16;
            *(undefined8 *)*pauVar16 = uVar8;
            uVar8 = *(undefined8 *)(*pauVar13 + 8);
            *(undefined8 *)(*pauVar13 + 8) = *(undefined8 *)(pauVar22[uVar18 * -2 + -2] + 8);
            *(undefined8 *)(pauVar22[uVar18 * -2 + -2] + 8) = uVar8;
            uVar8 = *(undefined8 *)pauVar13[1];
            *(undefined8 *)pauVar13[1] = *(undefined8 *)pauVar22[uVar18 * -2 + -1];
            *(undefined8 *)pauVar22[uVar18 * -2 + -1] = uVar8;
            uVar8 = *(undefined8 *)(pauVar13[1] + 8);
            *(undefined8 *)(pauVar13[1] + 8) = *(undefined8 *)(pauVar22[uVar18 * -2 + -1] + 8);
            *(undefined8 *)(pauVar22[uVar18 * -2 + -1] + 8) = uVar8;
            pauVar22 = (undefined1 (*) [16])*param_1;
          }
          uVar12 = param_1[1];
          (*pauVar23)[uVar7] = 0xff;
          pauVar23[1][uVar7 - 0x10 & uVar12] = 0xff;
          uVar8 = *(undefined8 *)*pauVar13;
          uVar5 = *(undefined8 *)(*pauVar13 + 8);
          uVar6 = *(undefined8 *)(pauVar13[1] + 8);
          *(undefined8 *)pauVar22[uVar18 * -2 + -1] = *(undefined8 *)pauVar13[1];
          *(undefined8 *)(pauVar22[uVar18 * -2 + -1] + 8) = uVar6;
          *(undefined8 *)*pauVar16 = uVar8;
          *(undefined8 *)(pauVar22[uVar18 * -2 + -2] + 8) = uVar5;
        }
LAB_006c3ad7:
        bVar24 = uVar7 != uVar3;
        uVar7 = uVar7 + 1;
        pauVar22 = pauVar23;
      } while (bVar24);
      uVar18 = param_1[1];
      uVar7 = param_1[3];
      uVar12 = (uVar18 + 1 & 0xfffffffffffffff8) - (uVar18 + 1 >> 3);
      if (uVar18 < 8) {
        uVar12 = uVar18;
      }
    }
    param_1[2] = uVar12 - uVar7;
LAB_006c3b54:
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
}


