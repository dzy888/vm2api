// 006bf670 from

/* <httpdate[ed67980a84eed9e4]::date::HttpDate as
   core[c0acaeba6ab4c2e0]::convert::From<std[6c98fd8553dbae28]::time::SystemTime>>::from */

ulonglong __rustcall
<httpdate[ed67980a84eed9e4]::date::HttpDate_as_core[c0acaeba6ab4c2e0]::convert::From<std[6c98fd8553dbae28]::time::SystemTime>>
::from(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
      undefined **param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  int unaff_EBX;
  ulonglong uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint in_R10D;
  uint uVar10;
  ulonglong uVar11;
  int in_R11D;
  uint uVar12;
  bool bVar13;
  int local_48;
  undefined *local_40;
  undefined1 local_20 [16];
  
  (*(code *)PTR_duration_since_007993f8)(0,0,param_5,param_6,param_2);
  if (local_48 == 1) {
    local_40 = &DAT_00792cf0;
    param_5 = &PTR_s__vendor_httpdate_1_0_3_src_date__00792dd8;
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_00792cf0,local_20,&PTR_s__vendor_httpdate_1_0_3_src_date__00792dd8);
LAB_006bf91d:
    pcVar7 = "date must be before year 9999";
    ppuVar4 = &PTR_s__vendor_httpdate_1_0_3_src_date__00792df0;
    iVar6 = 0x3b;
    uVar3 = (*(code *)PTR_panic_fmt_007991a8)();
  }
  else {
    if (0x75ffe882 < (ulonglong)local_40 >> 7) goto LAB_006bf91d;
    iVar6 = (int)((ulonglong)local_40 / 0x15180);
    in_R11D = (iVar6 + -0x2b09) / 0x23ab1;
    unaff_EBX = iVar6 + in_R11D * -0x23ab1 + -0x2b09;
    uVar3 = (longlong)unaff_EBX + 0x23ab1;
    if (-1 < unaff_EBX) {
      uVar3 = (longlong)unaff_EBX;
    }
    pcVar7 = (char *)0x3;
    if (0x8eab < uVar3 - 0x23ab0) {
      pcVar7 = (char *)(uVar3 / 0x8eac);
    }
    lVar1 = (longlong)pcVar7 * -0x8eac + uVar3;
    param_5 = (undefined **)0x18;
    if (0x5b4 < ((longlong)pcVar7 * -0x8eac + uVar3) - 0x8ead) {
      param_5 = (undefined **)(lVar1 / 0x5b5);
    }
    lVar2 = (longlong)param_5 * -0x5b5 + lVar1;
    ppuVar4 = (undefined **)0x3;
    if (0x16c < ((longlong)param_5 * -0x5b5 + lVar1) - 0x5b4U) {
      ppuVar4 = (undefined **)(lVar2 / 0x16d);
    }
    local_40 = (undefined *)((ulonglong)local_40 % 0x15180);
    uVar3 = (longlong)ppuVar4 * -0x16d + lVar2;
    if ((longlong)uVar3 < 0x1f) {
      uVar10 = 0;
      iVar8 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0x3d) {
      uVar3 = uVar3 - 0x1f;
      iVar8 = 1;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0x5c) {
      uVar3 = uVar3 - 0x3d;
      iVar8 = 2;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0x7a) {
      uVar3 = uVar3 - 0x5c;
      iVar8 = 3;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0x99) {
      uVar3 = uVar3 - 0x7a;
      iVar8 = 4;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0xb8) {
      uVar3 = uVar3 - 0x99;
      iVar8 = 5;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0xd6) {
      uVar3 = uVar3 - 0xb8;
      iVar8 = 6;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0xf5) {
      uVar3 = uVar3 - 0xd6;
      iVar8 = 7;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0x113) {
      uVar3 = uVar3 - 0xf5;
      iVar8 = 8;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    if (uVar3 < 0x132) {
      uVar3 = uVar3 - 0x113;
      iVar8 = 9;
      uVar10 = 0;
      goto LAB_006bf94d;
    }
    uVar10 = 1;
    in_R10D = 1;
    if (uVar3 < 0x151) {
      uVar3 = uVar3 - 0x132;
      iVar8 = 10;
      goto LAB_006bf94d;
    }
  }
  uVar10 = in_R10D;
  uVar11 = uVar3 - 0x151;
  bVar13 = uVar3 < 0x16e;
  uVar3 = uVar3 - 0x16e;
  if (bVar13) {
    uVar3 = uVar11;
  }
  iVar8 = 0xb;
LAB_006bf94d:
  uVar9 = iVar8 + 3;
  if ((char)uVar10 != '\0') {
    uVar9 = iVar8 + 0xf7;
  }
  iVar8 = (int)((ulonglong)((longlong)(iVar6 + -0x2b06) * -0x6db6db6d) >> 0x20) + iVar6 + -0x2b06;
  uVar12 = (iVar6 + ((iVar8 >> 2) - (iVar8 >> 0x1f)) * -7) - 0x2b06;
  uVar5 = (ulonglong)uVar12 << 0x38;
  uVar11 = uVar5 + 0x700000000000000;
  if (0 < (int)uVar12) {
    uVar11 = uVar5;
  }
  return (ulonglong)
         ((int)ppuVar4 +
          ((unaff_EBX >> 0x1f) + in_R11D) * 400 + (int)pcVar7 * 100 + (int)param_5 * 4 +
          (uVar10 & 0xff) + 2000 & 0xffff) |
         ((ulonglong)
          (((int)local_40 + (uint)((ulonglong)((longlong)local_40 * 0x88888889) >> 0x25) * -0x3c) *
          0x10000) | ((ulonglong)((longlong)local_40 * 0x91a2b3c5) >> 0x2b) << 0x20 |
          (ulonglong)
          (((int)local_40 + (uint)((ulonglong)((longlong)local_40 * 0x91a2b3c5) >> 0x2b) * -0xe10) *
           0x44448 & 0xff000000) | uVar11) + ((ulonglong)(uVar9 & 0xff) << 0x30) +
         ((uVar3 << 0x28) + 0x10000000000 & 0xff0000000000);
}


