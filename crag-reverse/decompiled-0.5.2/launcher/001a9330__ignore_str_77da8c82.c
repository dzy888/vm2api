// 001a9330 ignore_str

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
LAB_001a9493:
    (**(code **)PTR_FN_0021a478)();
    (**(code **)PTR_FN_0021a480)();
LAB_001a9562:
    uVar9 = (*(code *)PTR_syntax_00219cb8)();
    return uVar9;
  }
LAB_001a938b:
  if (uVar12 <= uVar11) {
    (*(code *)PTR_panic_bounds_check_0021a020)();
LAB_001a96a6:
    (*(code *)PTR_slice_index_fail_00219d80)
              (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,uVar12);
LAB_001a96d2:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar7 = *param_1;
  if (*(char *)(lVar7 + uVar11) == '\\') {
    param_1[2] = uVar11 + 1;
    if (uVar12 <= uVar11 + 1) {
      (**(code **)PTR_FN_0021a478)();
      (**(code **)PTR_FN_0021a480)();
LAB_001a9596:
      uVar9 = (*(code *)PTR_syntax_00219cb8)();
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
      goto switchD_001a93db_caseD_22;
    default:
      if (uVar1 <= uVar12) {
        (**(code **)PTR_FN_0021a478)();
        (**(code **)PTR_FN_0021a480)();
        goto LAB_001a9596;
      }
      goto LAB_001a96a6;
    case 0x75:
      goto switchD_001a93db_caseD_75;
    }
  }
  if (*(char *)(lVar7 + uVar11) == '\"') {
    param_1[2] = uVar11 + 1;
    return 0;
  }
  (**(code **)PTR_FN_0021a478)();
  (**(code **)PTR_FN_0021a480)();
  goto LAB_001a9562;
switchD_001a93db_caseD_75:
  if (uVar12 - uVar1 < 4) {
    param_1[2] = uVar12;
    (**(code **)PTR_FN_0021a478)();
    (**(code **)PTR_FN_0021a480)();
    uVar9 = (*(code *)PTR_syntax_00219cb8)();
    return uVar9;
  }
  bVar3 = *(byte *)(lVar7 + 2 + uVar11);
  bVar4 = *(byte *)(lVar7 + 3 + uVar11);
  bVar5 = *(byte *)(lVar7 + 4 + uVar11);
  bVar6 = *(byte *)(lVar7 + 5 + uVar11);
  uVar11 = uVar11 + 6;
  param_1[2] = uVar11;
  uVar10 = *(ushort *)(PTR_HEX0_0021a4b8 + (ulonglong)bVar4 * 2) |
           *(ushort *)(PTR_HEX1_0021a4b0 + (ulonglong)bVar3 * 2) |
           *(ushort *)(PTR_HEX1_0021a4b0 + (ulonglong)bVar5 * 2) |
           *(ushort *)(PTR_HEX0_0021a4b8 + (ulonglong)bVar6 * 2);
  if ((short)uVar10 < 0) {
    if (uVar12 < uVar11) {
      (*(code *)PTR_slice_index_fail_00219d80)
                (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,uVar12);
      goto LAB_001a96d2;
    }
    (**(code **)PTR_FN_0021a478)(uVar10,lVar7 + uVar11);
    (**(code **)PTR_FN_0021a480)();
    goto LAB_001a9562;
  }
switchD_001a93db_caseD_22:
  <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape(param_1);
  uVar12 = param_1[1];
  uVar11 = param_1[2];
  if (uVar11 == uVar12) goto LAB_001a9493;
  goto LAB_001a938b;
}


