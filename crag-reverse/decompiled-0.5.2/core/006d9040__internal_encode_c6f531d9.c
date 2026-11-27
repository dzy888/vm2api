// 006d9040 internal_encode

/* <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose as
   base64[729f3f786a952ed7]::engine::Engine>::internal_encode */

char * __rustcall
<base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose_as_base64[729f3f786a952ed7]::engine::Engine>
::internal_encode(undefined4 param_1,longlong param_2,longlong param_3,ulonglong param_4,
                 undefined **param_5,char *param_6)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  char *pcVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined **ppuVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *pcVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Da;
  int iStack_70;
  longlong lStack_60;
  
  uVar23 = 0;
  pcVar22 = (char *)0x0;
  uVar20 = param_4 - 0x1a;
  bVar24 = uVar20 != 0;
  if (param_4 < 0x1a) {
    uVar20 = 0;
  }
  if (param_4 >= 0x1a && bVar24) {
    uVar23 = 0;
    pcVar15 = (char *)0x0;
    do {
      if (param_4 < uVar23 + 0x1a) {
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&PTR_s__vendor_base64_0_22_1_src_engine_007936c0,param_4);
LAB_006d94fc:
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&PTR_s__vendor_base64_0_22_1_src_engine_007936a8,param_6);
        goto LAB_006d9513;
      }
      pcVar22 = pcVar15 + 0x20;
      if (param_6 < pcVar22) goto LAB_006d94fc;
      uVar2 = *(ulonglong *)(param_3 + uVar23);
      uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar2 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar17 = uVar3 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
               (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      pcVar15[(longlong)param_5] = *(char *)(param_2 + 3 + ((uVar2 & 0xff) >> 2));
      uVar6 = (uint)(uVar17 >> 0x20);
      pcVar15[(longlong)param_5 + 1] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      pcVar15[(longlong)param_5 + 2] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      pcVar15[(longlong)param_5 + 3] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      pcVar15[(longlong)param_5 + 4] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      pcVar15[(longlong)param_5 + 5] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)(uVar17 >> 0x1c) & 0x3f));
      pcVar15[(longlong)param_5 + 6] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f))
      ;
      uVar2 = *(ulonglong *)(param_3 + 6 + uVar23);
      uVar5 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar17 = (uVar2 & 0xff00000000) >> 8;
      uVar4 = uVar5 | uVar17;
      uVar18 = uVar4 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
               (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      pcVar15[(longlong)param_5 + 7] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      pcVar15[(longlong)(param_5 + 1)] = *(char *)(param_2 + 3 + ((uVar2 & 0xff) >> 2));
      uVar6 = (uint)(uVar18 >> 0x20);
      pcVar15[(longlong)param_5 + 9] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f));
      pcVar15[(longlong)param_5 + 10] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      pcVar15[(longlong)param_5 + 0xb] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      pcVar15[(longlong)param_5 + 0xc] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      pcVar15[(longlong)param_5 + 0xd] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)(uVar18 >> 0x1c) & 0x3f));
      pcVar15[(longlong)param_5 + 0xe] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)((uVar5 & 0xffc00000 | uVar17) >> 0x16) & 0x3f)
                    );
      pcVar15[(longlong)param_5 + 0xf] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)uVar4 >> 0x10 & 0x3f));
      uVar2 = *(ulonglong *)(param_3 + 0xc + uVar23);
      uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar2 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar17 = uVar3 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
               (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      pcVar15[(longlong)(param_5 + 2)] = *(char *)(param_2 + 3 + ((uVar2 & 0xff) >> 2));
      uVar6 = (uint)(uVar17 >> 0x20);
      pcVar15[(longlong)param_5 + 0x11] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f))
      ;
      pcVar15[(longlong)param_5 + 0x12] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      pcVar15[(longlong)param_5 + 0x13] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      pcVar15[(longlong)param_5 + 0x14] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      pcVar15[(longlong)param_5 + 0x15] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)(uVar17 >> 0x1c) & 0x3f));
      pcVar15[(longlong)param_5 + 0x16] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f))
      ;
      pcVar15[(longlong)param_5 + 0x17] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      uVar2 = *(ulonglong *)(param_3 + 0x12 + uVar23);
      uVar4 = (uVar2 & 0xff0000000000) >> 0x18;
      uVar5 = (uVar2 & 0xff00000000) >> 8;
      uVar3 = uVar4 | uVar5;
      uVar17 = uVar3 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
               (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
      pcVar15[(longlong)(param_5 + 3)] = *(char *)(param_2 + 3 + ((uVar2 & 0xff) >> 2));
      uVar6 = (uint)(uVar17 >> 0x20);
      pcVar15[(longlong)param_5 + 0x19] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0x14 & 0x3f))
      ;
      pcVar15[(longlong)param_5 + 0x1a] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 0xe & 0x3f));
      pcVar15[(longlong)param_5 + 0x1b] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 8 & 0x3f));
      pcVar15[(longlong)param_5 + 0x1c] = *(char *)(param_2 + 3 + (ulonglong)(uVar6 >> 2 & 0x3f));
      pcVar15[(longlong)param_5 + 0x1d] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)(uVar17 >> 0x1c) & 0x3f));
      pcVar15[(longlong)param_5 + 0x1e] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)((uVar4 & 0xffc00000 | uVar5) >> 0x16) & 0x3f))
      ;
      pcVar15[(longlong)param_5 + 0x1f] =
           *(char *)(param_2 + 3 + (ulonglong)((uint)uVar3 >> 0x10 & 0x3f));
      uVar23 = uVar23 + 0x18;
      pcVar15 = pcVar22;
    } while (uVar23 <= uVar20);
  }
  uVar20 = (param_4 / 3) * 3;
  pcVar15 = pcVar22;
  if (uVar23 < uVar20) {
    do {
      uVar2 = uVar23 + 3;
      if (param_4 < uVar2) goto LAB_006d9513;
      pcVar22 = pcVar15 + 4;
      if (param_6 < pcVar22) goto LAB_006d952a;
      bVar16 = *(byte *)(param_3 + uVar23);
      pcVar15[(longlong)param_5] = *(char *)(param_2 + 3 + (ulonglong)(bVar16 >> 2));
      bVar1 = *(byte *)(param_3 + 1 + uVar23);
      pcVar15[(longlong)param_5 + 1] =
           *(char *)(param_2 + 3 + (ulonglong)((byte)(bVar1 >> 4 | bVar16 << 4) & 0x3f));
      bVar16 = *(byte *)(param_3 + 2 + uVar23);
      pcVar15[(longlong)param_5 + 2] =
           *(char *)(param_2 + 3 + (ulonglong)((byte)(bVar16 >> 6 | bVar1 << 2) & 0x3f));
      pcVar15[(longlong)param_5 + 3] = *(char *)(param_2 + 3 + (ulonglong)(bVar16 & 0x3f));
      pcVar15 = pcVar22;
      uVar23 = uVar2;
    } while (uVar2 < uVar20);
    if (param_4 % 3 != 1) goto LAB_006d9419;
LAB_006d9499:
    if (param_6 <= pcVar22) goto LAB_006d9554;
    bVar16 = *(byte *)(param_3 + uVar20);
    pcVar22[(longlong)param_5] = *(char *)(param_2 + 3 + (ulonglong)(bVar16 >> 2));
    pcVar15 = pcVar22 + 1;
    if (pcVar15 < param_6) {
      bVar16 = (bVar16 & 3) << 4;
      lVar21 = 2;
      goto LAB_006d94cd;
    }
    goto LAB_006d957a;
  }
  if (param_4 % 3 == 1) goto LAB_006d9499;
LAB_006d9419:
  if (param_4 % 3 != 2) {
    return pcVar22;
  }
  if (param_6 <= pcVar22) goto LAB_006d9541;
  bVar16 = *(byte *)(param_3 + uVar20);
  pcVar22[(longlong)param_5] = *(char *)(param_2 + 3 + (ulonglong)(bVar16 >> 2));
  if (param_6 <= pcVar22 + 1) goto LAB_006d9567;
  bVar1 = *(byte *)(param_3 + 1 + uVar20);
  pcVar22[(longlong)param_5 + 1] =
       *(char *)(param_2 + 3 + (ulonglong)((byte)(bVar16 << 4 | bVar1 >> 4) & 0x3f));
  pcVar15 = pcVar22 + 2;
  if (pcVar15 < param_6) {
    bVar16 = (bVar1 & 0xf) << 2;
    lVar21 = 3;
LAB_006d94cd:
    pcVar15[(longlong)param_5] = *(char *)(param_2 + 3 + (ulonglong)bVar16);
    return pcVar22 + lVar21;
  }
  goto LAB_006d958d;
LAB_006d9513:
  (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__vendor_base64_0_22_1_src_engine_00793690,param_4)
  ;
LAB_006d952a:
  param_5 = &PTR_s__vendor_base64_0_22_1_src_engine_00793678;
  param_1 = (*(code *)PTR_slice_index_fail_007993c8)
                      (&PTR_s__vendor_base64_0_22_1_src_engine_00793678,param_6);
LAB_006d9541:
  param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                      (param_1,&PTR_s__vendor_base64_0_22_1_src_engine_00793600);
LAB_006d9554:
  param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                      (param_1,&PTR_s__vendor_base64_0_22_1_src_engine_00793648);
LAB_006d9567:
  param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                      (param_1,&PTR_s__vendor_base64_0_22_1_src_engine_00793618);
LAB_006d957a:
  pcVar15 = param_6;
  param_6 = pcVar15;
  (*(code *)PTR_panic_bounds_check_00799520)
            (param_1,&PTR_s__vendor_base64_0_22_1_src_engine_00793660);
LAB_006d958d:
  ppuVar19 = &PTR_s__vendor_base64_0_22_1_src_engine_00793630;
  uVar25 = (*(code *)PTR_panic_bounds_check_00799520)();
  if (*param_6 == -1) goto switchD_006d95e2_default;
  switch(*param_6) {
  case '\f':
    lStack_60 = *(longlong *)(param_6 + 0x18);
    if (param_5 == (undefined **)0x0) goto switchD_006d95e2_default;
    goto LAB_006d9651;
  case '\r':
    lStack_60 = *(longlong *)(param_6 + 0x10);
    break;
  case '\x0e':
    uVar25 = (*(code *)PTR_from_utf8_00799468)
                       (&switchD_006d95e2::switchdataD_001b60ac,*(undefined8 *)(param_6 + 0x18));
    if ((char)iStack_70 != '\0') goto switchD_006d95e2_default;
    break;
  case '\x0f':
    uVar25 = (*(code *)PTR_from_utf8_00799468)
                       (&switchD_006d95e2::switchdataD_001b60ac,*(undefined8 *)(param_6 + 0x10));
    if (iStack_70 == 1) goto switchD_006d95e2_default;
    break;
  default:
    goto switchD_006d95e2_default;
  }
  if (param_5 != (undefined **)0x0) {
LAB_006d9651:
    lVar21 = 0;
    do {
      if ((*(longlong *)((longlong)ppuVar19 + lVar21 + 8) == lStack_60) &&
         (iVar14 = (*(code *)PTR_bcmp_00799020)(uVar25,lStack_60), uVar25 = extraout_XMM0_Da,
         iVar14 == 0)) {
        uVar7 = *(undefined8 *)param_6;
        uVar8 = *(undefined8 *)(param_6 + 8);
        uVar9 = *(undefined8 *)(param_6 + 0x10);
        uVar10 = *(undefined8 *)(param_6 + 0x18);
        uVar11 = *(undefined8 *)(param_6 + 0x20);
        uVar12 = *(undefined8 *)(param_6 + 0x28);
        uVar13 = *(undefined8 *)(param_6 + 0x38);
        *(undefined8 *)(pcVar15 + 0x30) = *(undefined8 *)(param_6 + 0x30);
        *(undefined8 *)(pcVar15 + 0x38) = uVar13;
        *(undefined8 *)(pcVar15 + 0x20) = uVar11;
        *(undefined8 *)(pcVar15 + 0x28) = uVar12;
        *(undefined8 *)(pcVar15 + 0x10) = uVar9;
        *(undefined8 *)(pcVar15 + 0x18) = uVar10;
        *(undefined8 *)pcVar15 = uVar7;
        *(undefined8 *)(pcVar15 + 8) = uVar8;
        goto LAB_006d96b5;
      }
      lVar21 = lVar21 + 0x10;
    } while ((longlong)param_5 * 0x10 != lVar21);
  }
switchD_006d95e2_default:
  param_6 = pcVar15;
LAB_006d96b5:
  *param_6 = -1;
  return pcVar15;
}


