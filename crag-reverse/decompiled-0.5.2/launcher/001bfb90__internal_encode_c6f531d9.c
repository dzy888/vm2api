// 001bfb90 internal_encode

/* <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose as
   base64[729f3f786a952ed7]::engine::Engine>::internal_encode */

undefined1 (*) [16] __rustcall
<base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose_as_base64[729f3f786a952ed7]::engine::Engine>
::internal_encode(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                 undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 (*pauVar12) [16];
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong uVar24;
  undefined1 auVar25 [16];
  
  uVar19 = 0;
  pauVar18 = (undefined1 (*) [16])0x0;
  uVar16 = param_3 - 0x1a;
  bVar20 = uVar16 != 0;
  if (param_3 < 0x1a) {
    uVar16 = 0;
  }
  if (param_3 >= 0x1a && bVar20) {
    uVar19 = 0;
    pauVar12 = (undefined1 (*) [16])0x0;
    do {
      if (param_3 < uVar19 + 0x1a) {
        (*(code *)PTR_slice_index_fail_00219d80)
                  (&PTR_s__vendor_base64_0_22_1_src_engine_00217010,param_3);
LAB_001c004c:
        (*(code *)PTR_slice_index_fail_00219d80)
                  (&PTR_s__vendor_base64_0_22_1_src_engine_00216ff8,param_5);
        goto LAB_001c0063;
      }
      pauVar18 = pauVar12 + 2;
      if (param_5 < pauVar18) goto LAB_001c004c;
      uVar24 = *(ulonglong *)(param_2 + uVar19);
      uVar4 = (uVar24 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar24 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar14 = uVar3 | (uVar24 & 0xff000000) << 8 | (uVar24 & 0xff0000) << 0x18 |
               (uVar24 & 0xff00) << 0x28 | uVar24 << 0x38;
      (*pauVar12)[param_4] = *(undefined1 *)(param_1 + 3 + ((uVar24 & 0xff) >> 2));
      uVar6 = (uint)(uVar14 >> 0x20);
      (*pauVar12)[param_4 + 1] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      (*pauVar12)[param_4 + 2] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      (*pauVar12)[param_4 + 3] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      (*pauVar12)[param_4 + 4] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      (*pauVar12)[param_4 + 5] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar14 >> 0x1c) & 0x3f));
      (*pauVar12)[param_4 + 6] =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f));
      uVar24 = *(ulonglong *)(param_2 + 6 + uVar19);
      uVar5 = (uVar24 & 0xff0000000000) >> 0x18;
      uVar14 = (uVar24 & 0xff00000000) >> 8;
      uVar4 = uVar5 | uVar14;
      uVar15 = uVar4 | (uVar24 & 0xff000000) << 8 | (uVar24 & 0xff0000) << 0x18 |
               (uVar24 & 0xff00) << 0x28 | uVar24 << 0x38;
      (*pauVar12)[param_4 + 7] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      (*pauVar12)[param_4 + 8] = *(undefined1 *)(param_1 + 3 + ((uVar24 & 0xff) >> 2));
      uVar6 = (uint)(uVar15 >> 0x20);
      (*pauVar12)[param_4 + 9] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      (*pauVar12)[param_4 + 10] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      (*pauVar12)[param_4 + 0xb] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      (*pauVar12)[param_4 + 0xc] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      (*pauVar12)[param_4 + 0xd] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar15 >> 0x1c) & 0x3f));
      (*pauVar12)[param_4 + 0xe] =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar5 & 0xffc00000 | uVar14) >> 0x16) & 0x3f));
      (*pauVar12)[param_4 + 0xf] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar4 >> 0x10 & 0x3f));
      uVar24 = *(ulonglong *)(param_2 + 0xc + uVar19);
      uVar4 = (uVar24 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar24 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar14 = uVar3 | (uVar24 & 0xff000000) << 8 | (uVar24 & 0xff0000) << 0x18 |
               (uVar24 & 0xff00) << 0x28 | uVar24 << 0x38;
      pauVar12[1][param_4] = *(undefined1 *)(param_1 + 3 + ((uVar24 & 0xff) >> 2));
      uVar6 = (uint)(uVar14 >> 0x20);
      pauVar12[1][param_4 + 1] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      pauVar12[1][param_4 + 2] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      pauVar12[1][param_4 + 3] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      pauVar12[1][param_4 + 4] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      pauVar12[1][param_4 + 5] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar14 >> 0x1c) & 0x3f));
      pauVar12[1][param_4 + 6] =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f));
      pauVar12[1][param_4 + 7] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      uVar24 = *(ulonglong *)(param_2 + 0x12 + uVar19);
      uVar4 = (uVar24 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar24 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar14 = uVar3 | (uVar24 & 0xff000000) << 8 | (uVar24 & 0xff0000) << 0x18 |
               (uVar24 & 0xff00) << 0x28 | uVar24 << 0x38;
      pauVar12[1][param_4 + 8] = *(undefined1 *)(param_1 + 3 + ((uVar24 & 0xff) >> 2));
      uVar6 = (uint)(uVar14 >> 0x20);
      pauVar12[1][param_4 + 9] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      pauVar12[1][param_4 + 10] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      pauVar12[1][param_4 + 0xb] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      pauVar12[1][param_4 + 0xc] = *(undefined1 *)(param_1 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      pauVar12[1][param_4 + 0xd] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)(uVar14 >> 0x1c) & 0x3f));
      pauVar12[1][param_4 + 0xe] =
           *(undefined1 *)
            (param_1 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f));
      pauVar12[1][param_4 + 0xf] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      uVar19 = uVar19 + 0x18;
      pauVar12 = pauVar18;
    } while (uVar19 <= uVar16);
  }
  uVar16 = (param_3 / 3) * 3;
  pauVar12 = pauVar18;
  if (uVar19 < uVar16) {
    do {
      uVar24 = uVar19 + 3;
      if (param_3 < uVar24) goto LAB_001c0063;
      pauVar18 = (undefined1 (*) [16])(*pauVar12 + 4);
      if (param_5 < pauVar18) goto LAB_001c007a;
      bVar13 = *(byte *)(param_2 + uVar19);
      (*pauVar12)[param_4] = *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar13 >> 2));
      bVar2 = *(byte *)(param_2 + 1 + uVar19);
      (*pauVar12)[param_4 + 1] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((byte)(bVar2 >> 4 | bVar13 << 4) & 0x3f));
      bVar13 = *(byte *)(param_2 + 2 + uVar19);
      (*pauVar12)[param_4 + 2] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((byte)(bVar13 >> 6 | bVar2 << 2) & 0x3f));
      (*pauVar12)[param_4 + 3] = *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar13 & 0x3f));
      pauVar12 = pauVar18;
      uVar19 = uVar24;
    } while (uVar24 < uVar16);
    if (param_3 % 3 == 1) goto LAB_001bffe9;
LAB_001bff69:
    if (param_3 % 3 != 2) {
      return pauVar18;
    }
    if (param_5 <= pauVar18) goto LAB_001c0091;
    bVar13 = *(byte *)(param_2 + uVar16);
    (*pauVar18)[param_4] = *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar13 >> 2));
    if ((undefined1 (*) [16])(*pauVar18 + 1) < param_5) {
      bVar2 = *(byte *)(param_2 + 1 + uVar16);
      (*pauVar18)[param_4 + 1] =
           *(undefined1 *)(param_1 + 3 + (ulonglong)((byte)(bVar13 << 4 | bVar2 >> 4) & 0x3f));
      pauVar12 = (undefined1 (*) [16])(*pauVar18 + 2);
      if (pauVar12 < param_5) {
        bVar13 = (bVar2 & 0xf) << 2;
        lVar17 = 3;
        goto LAB_001c001d;
      }
      goto LAB_001c00dd;
    }
    goto LAB_001c00b7;
  }
  if (param_3 % 3 != 1) goto LAB_001bff69;
LAB_001bffe9:
  if (param_5 <= pauVar18) goto LAB_001c00a4;
  bVar13 = *(byte *)(param_2 + uVar16);
  (*pauVar18)[param_4] = *(undefined1 *)(param_1 + 3 + (ulonglong)(bVar13 >> 2));
  pauVar12 = (undefined1 (*) [16])(*pauVar18 + 1);
  if (pauVar12 < param_5) {
    bVar13 = (bVar13 & 3) << 4;
    lVar17 = 2;
LAB_001c001d:
    (*pauVar12)[param_4] = *(undefined1 *)(param_1 + 3 + (ulonglong)bVar13);
    return (undefined1 (*) [16])(*pauVar18 + lVar17);
  }
  goto LAB_001c00ca;
LAB_001c0063:
  (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__vendor_base64_0_22_1_src_engine_00216fe0,param_3)
  ;
LAB_001c007a:
  (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__vendor_base64_0_22_1_src_engine_00216fc8,param_5)
  ;
LAB_001c0091:
  (*(code *)PTR_panic_bounds_check_0021a020)();
LAB_001c00a4:
  (*(code *)PTR_panic_bounds_check_0021a020)();
LAB_001c00b7:
  (*(code *)PTR_panic_bounds_check_0021a020)();
LAB_001c00ca:
  pauVar12 = param_5;
  param_5 = pauVar12;
  (*(code *)PTR_panic_bounds_check_0021a020)();
LAB_001c00dd:
  pauVar18 = (undefined1 (*) [16])(*(code *)PTR_panic_bounds_check_0021a020)();
  auVar21 = *param_5 ^ pauVar12[1];
  auVar1 = *pauVar12;
  auVar22._0_8_ = auVar1._8_8_;
  auVar22._8_4_ = auVar1._8_4_;
  auVar22._12_4_ = auVar1._12_4_;
  auVar23._0_8_ = auVar21._8_8_;
  auVar23._8_4_ = auVar21._8_4_;
  auVar23._12_4_ = auVar21._12_4_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar23 ^ auVar21,0);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar22 ^ auVar1,0);
  auVar25 = (undefined1  [16])0x0;
  for (uVar6 = 0; uVar6 < 0x40; uVar6 = uVar6 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar6) != (undefined1  [16])0x0) {
      auVar25 = auVar25 ^ auVar9 << uVar6;
    }
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar21._0_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = auVar1._0_8_;
  auVar1 = (undefined1  [16])0x0;
  for (uVar6 = 0; uVar6 < 0x40; uVar6 = uVar6 + 1) {
    if ((auVar8 & (undefined1  [16])0x1 << uVar6) != (undefined1  [16])0x0) {
      auVar1 = auVar1 ^ auVar21 << uVar6;
    }
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auVar23._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar22._0_8_;
  auVar7 = (undefined1  [16])0x0;
  for (uVar6 = 0; uVar6 < 0x40; uVar6 = uVar6 + 1) {
    if ((auVar10 & (undefined1  [16])0x1 << uVar6) != (undefined1  [16])0x0) {
      auVar7 = auVar7 ^ auVar11 << uVar6;
    }
  }
  auVar25 = auVar1 ^ auVar7 ^ auVar25;
  uVar16 = auVar1._0_8_;
  uVar19 = uVar16 << 0x3f ^ auVar1._8_8_ ^ auVar25._0_8_;
  uVar24 = uVar16 << 0x39 ^ uVar16 << 0x3e ^ uVar19;
  *(ulonglong *)pauVar12[1] =
       auVar25._8_8_ ^ uVar16 ^ auVar7._0_8_ ^
       uVar19 << 0x39 ^ uVar19 << 0x3f ^ uVar19 << 0x3e ^ uVar16 >> 7 ^ uVar16 >> 2 ^ uVar16 >> 1;
  *(ulonglong *)(pauVar12[1] + 8) = uVar24 >> 7 ^ uVar24 >> 1 ^ uVar24 >> 2 ^ auVar7._8_8_ ^ uVar24;
  return pauVar18;
}


