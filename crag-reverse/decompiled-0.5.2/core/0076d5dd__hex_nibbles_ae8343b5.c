// 0076d5dd hex_nibbles

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::hex_nibbles */

longlong * __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::hex_nibbles(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  bool bVar13;
  char cStack_40;
  undefined1 uStack_3f;
  longlong lStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  plVar8 = (longlong *)param_2[2];
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  lVar5 = 0;
  do {
    lVar10 = lVar5;
    if (plVar3 <= (longlong *)((longlong)plVar8 + lVar10)) goto LAB_0076d666;
    cVar1 = ((undefined1 *)((longlong)plVar2 + (longlong)plVar8))[lVar10];
    param_2[2] = (longlong)plVar8 + lVar10 + 1;
    iVar12 = (int)CONCAT71((int7)((ulonglong)((longlong)plVar8 + lVar10) >> 8),cVar1);
    iVar9 = iVar12 + -0x30;
    bVar13 = (byte)iVar9 < 10;
    iVar12 = iVar12 + -0x61;
    bVar11 = (byte)iVar12 < 6 || bVar13;
    lVar5 = lVar10 + 1;
  } while (bVar11);
  if (cVar1 != '_') {
LAB_0076d666:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return param_1;
  }
  plVar7 = (longlong *)((longlong)plVar8 + lVar10);
  if (((plVar8 <= plVar7) && (plVar7 <= plVar3)) &&
     ((plVar8 == plVar3 ||
      ((plVar8 == (longlong *)0x0 || (-0x41 < *(char *)((longlong)plVar2 + (longlong)plVar8))))))) {
    *param_1 = (longlong)plVar2 + (longlong)plVar8;
    param_1[1] = lVar10;
    return param_1;
  }
  uStack_20 = opt_integer_62;
  (*(code *)PTR_slice_error_fail_00799408)
            (plVar7,plVar8,&PTR_s__rust_deps_rustc_demangle_0_1_27_007978c0);
  uVar4 = plVar3[2];
  if ((uVar4 < (ulonglong)plVar3[1]) && (*(char *)(*plVar3 + uVar4) == (char)plVar8)) {
    plVar3[2] = uVar4 + 1;
    uStack_30 = (ulonglong)CONCAT31((int3)((uint)iVar9 >> 8),bVar13);
    uStack_28 = (ulonglong)CONCAT31((int3)((uint)iVar12 >> 8),bVar11);
    uStack_20 = (code *)((longlong)register0x00000020 + -8);
    integer_62(&cStack_40);
    if (cStack_40 == '\0') {
      if (lStack_38 != -1) {
        plVar2[1] = lStack_38 + 1;
        goto LAB_0076d6d4;
      }
      *(undefined1 *)((longlong)plVar2 + 1) = 0;
    }
    else {
      *(undefined1 *)((longlong)plVar2 + 1) = uStack_3f;
    }
    uVar6 = 1;
  }
  else {
    plVar2[1] = 0;
LAB_0076d6d4:
    uVar6 = 0;
  }
  *(undefined1 *)plVar2 = uVar6;
  return plVar2;
}


