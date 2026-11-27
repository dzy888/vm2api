// 000756e0 ignore_str

/* <serde_json[dc3825464c436029]::read::SliceRead as
   serde_json[dc3825464c436029]::read::Read>::ignore_str */

undefined8 __rustcall
<serde_json[dc3825464c436029]::read::SliceRead_as_serde_json[dc3825464c436029]::read::Read>::
ignore_str(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape();
  uVar12 = param_1[1];
  uVar11 = param_1[2];
  if (uVar11 == uVar12) {
LAB_00075843:
    (**(code **)PTR_FN_000c3fd0)();
    (**(code **)PTR_FN_000c3fd8)();
LAB_00075912:
    uVar9 = (*(code *)PTR_syntax_000c3d50)();
    return uVar9;
  }
LAB_0007573b:
  if (uVar12 <= uVar11) {
    (*(code *)PTR_panic_bounds_check_000c3dd8)();
LAB_00075a56:
    (*(code *)PTR_slice_index_fail_000c3bb0)
              (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,uVar12);
LAB_00075a82:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar7 = *param_1;
  if (*(char *)(lVar7 + uVar11) == '\\') {
    param_1[2] = uVar11 + 1;
    if (uVar12 <= uVar11 + 1) {
      (**(code **)PTR_FN_000c3fd0)();
      (**(code **)PTR_FN_000c3fd8)();
LAB_00075946:
      uVar9 = (*(code *)PTR_syntax_000c3d50)();
      return uVar9;
    }
    uVar2 = *(undefined1 *)(lVar7 + 1 + uVar11);
    uVar1 = uVar11 + 2;
    param_1[2] = uVar1;
    switch(uVar2) {
    case 0x22:
    case 0x2f:
    case 0x5c:
    case 0x62:
    case 0x66:
    case 0x6e:
    case 0x72:
    case 0x74:
      goto switchD_0007578b_caseD_22;
    default:
      if (uVar1 <= uVar12) {
        (**(code **)PTR_FN_000c3fd0)();
        (**(code **)PTR_FN_000c3fd8)();
        goto LAB_00075946;
      }
      goto LAB_00075a56;
    case 0x75:
      goto switchD_0007578b_caseD_75;
    }
  }
  if (*(char *)(lVar7 + uVar11) == '\"') {
    param_1[2] = uVar11 + 1;
    return 0;
  }
  (**(code **)PTR_FN_000c3fd0)();
  (**(code **)PTR_FN_000c3fd8)();
  goto LAB_00075912;
switchD_0007578b_caseD_75:
  if (uVar12 - uVar1 < 4) {
    param_1[2] = uVar12;
    (**(code **)PTR_FN_000c3fd0)();
    (**(code **)PTR_FN_000c3fd8)();
    uVar9 = (*(code *)PTR_syntax_000c3d50)();
    return uVar9;
  }
  bVar3 = *(byte *)(lVar7 + 2 + uVar11);
  bVar4 = *(byte *)(lVar7 + 3 + uVar11);
  bVar5 = *(byte *)(lVar7 + 4 + uVar11);
  bVar6 = *(byte *)(lVar7 + 5 + uVar11);
  uVar11 = uVar11 + 6;
  param_1[2] = uVar11;
  uVar10 = *(ushort *)(PTR_HEX0_000c4028 + (ulonglong)bVar4 * 2) |
           *(ushort *)(PTR_HEX1_000c4020 + (ulonglong)bVar3 * 2) |
           *(ushort *)(PTR_HEX1_000c4020 + (ulonglong)bVar5 * 2) |
           *(ushort *)(PTR_HEX0_000c4028 + (ulonglong)bVar6 * 2);
  if ((short)uVar10 < 0) {
    if (uVar12 < uVar11) {
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,uVar12);
      goto LAB_00075a82;
    }
    (**(code **)PTR_FN_000c3fd0)(uVar10,lVar7 + uVar11);
    (**(code **)PTR_FN_000c3fd8)();
    goto LAB_00075912;
  }
switchD_0007578b_caseD_22:
  <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape(param_1);
  uVar12 = param_1[1];
  uVar11 = param_1[2];
  if (uVar11 == uVar12) goto LAB_00075843;
  goto LAB_0007573b;
}


