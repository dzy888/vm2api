// 0076d6fd ident

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident */

undefined8 * __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident
          (undefined4 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  bool bVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 unaff_RBX;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined4 extraout_XMM0_Da;
  char cStack_50;
  undefined1 uStack_4f;
  ulonglong uStack_48;
  undefined8 uStack_40;
  
  uVar4 = param_3[1];
  uVar17 = param_3[2];
  if ((uVar17 < uVar4) && (*(char *)(*param_3 + uVar17) == 'u')) {
    uVar17 = uVar17 + 1;
    param_3[2] = uVar17;
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (uVar4 <= uVar17) goto LAB_0076d79e;
  puVar16 = (undefined8 *)*param_3;
  bVar8 = *(char *)((longlong)puVar16 + uVar17) - 0x30;
  if (9 < bVar8) goto LAB_0076d79e;
  uVar17 = uVar17 + 1;
  param_3[2] = uVar17;
  if (bVar8 != 0) {
    puVar10 = (undefined8 *)(ulonglong)bVar8;
    do {
      if (uVar4 <= uVar17) goto LAB_0076d77a;
      bVar8 = *(char *)((longlong)puVar16 + uVar17) - 0x30;
      unaff_RBX = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar8);
      if (9 < bVar8) goto LAB_0076d77a;
      uVar17 = uVar17 + 1;
      param_3[2] = uVar17;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = puVar10;
      uVar9 = SUB168(auVar5 * ZEXT816(10),0);
    } while ((SUB168(auVar5 * ZEXT816(10),8) == 0) &&
            (puVar10 = (undefined8 *)(uVar9 + bVar8), !CARRY8(uVar9,(ulonglong)bVar8)));
    goto LAB_0076d79e;
  }
  puVar10 = (undefined8 *)0x0;
LAB_0076d77a:
  if ((uVar17 < uVar4) && (*(char *)((longlong)puVar16 + uVar17) == '_')) {
    uVar17 = uVar17 + 1;
    param_3[2] = uVar17;
  }
  uVar9 = uVar17 + (longlong)puVar10;
  if ((CARRY8(uVar17,(ulonglong)puVar10)) || (param_3[2] = uVar9, uVar4 < uVar9)) goto LAB_0076d79e;
  if ((uVar17 != uVar4) &&
     ((*(char *)((longlong)puVar16 + uVar17) < -0x40 ||
      ((uVar9 != uVar4 && (*(char *)((longlong)puVar16 + uVar9) < -0x40)))))) {
    puVar10 = (undefined8 *)
              (*(code *)PTR_slice_error_fail_00799408)
                        (uVar9,uVar17,&PTR_s__rust_deps_rustc_demangle_0_1_27_007978d8);
    param_1 = extraout_XMM0_Da;
    goto LAB_0076d8b5;
  }
  puVar16 = (undefined8 *)((longlong)puVar16 + uVar17);
  if (!bVar7) {
    *param_2 = puVar16;
    param_2[1] = puVar10;
    param_2[2] = 1;
    param_2[3] = 0;
    return param_2;
  }
  lVar2 = (longlong)puVar16 + (longlong)puVar10;
  puVar11 = (undefined8 *)0x0;
  lVar1 = 0;
  do {
    lVar12 = lVar1;
    if ((longlong)puVar10 + lVar12 == 0) {
      puVar14 = (undefined8 *)0x1;
      goto LAB_0076d885;
    }
    lVar1 = lVar12 + -1;
  } while (*(char *)(lVar2 + -1 + lVar12) != '_');
  puVar13 = (undefined8 *)((longlong)puVar10 + lVar12);
  puVar11 = (undefined8 *)((longlong)puVar10 + lVar1);
  if (puVar11 == (undefined8 *)0x0) {
LAB_0076d846:
    puVar14 = puVar16;
    if (puVar13 < puVar10) {
      if (*(char *)(lVar2 + 1 + lVar1) < -0x40) {
LAB_0076d861:
        puVar11 = puVar10;
        puVar10 = (undefined8 *)
                  (*(code *)PTR_slice_error_fail_00799408)
                            (puVar10,puVar13,&PTR_s__rust_deps_rustc_demangle_0_1_27_00797908);
        param_2 = puVar16;
        puVar16 = puVar14;
        goto LAB_0076d877;
      }
      puVar15 = puVar13;
    }
    else {
      puVar15 = puVar10;
      if (lVar1 != -1) goto LAB_0076d861;
    }
  }
  else {
    if (puVar11 < puVar10) {
      if (*(char *)(lVar2 + lVar1) < -0x40) goto LAB_0076d8b5;
      goto LAB_0076d846;
    }
    if (lVar1 != 0) {
LAB_0076d8b5:
      (*(code *)PTR_slice_error_fail_00799408)
                (param_1,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_007978f0);
      lVar1 = puVar10[2];
      uStack_40 = unaff_RBX;
      integer_62(&cStack_50);
      if (cStack_50 == '\x01') {
        *(undefined1 *)(puVar16 + 1) = uStack_4f;
      }
      else if (uStack_48 < lVar1 - 1U) {
        iVar3 = *(int *)(puVar10 + 3);
        if (iVar3 + 1U < 0x1f5) {
          uVar6 = puVar10[1];
          *puVar16 = *puVar10;
          puVar16[1] = uVar6;
          puVar16[2] = uStack_48;
          *(uint *)(puVar16 + 3) = iVar3 + 1U;
          return puVar16;
        }
        *(undefined1 *)(puVar16 + 1) = 1;
      }
      else {
        *(undefined1 *)(puVar16 + 1) = 0;
      }
      *puVar16 = 0;
      return puVar16;
    }
    if (puVar13 != (undefined8 *)0x0) goto LAB_0076d846;
LAB_0076d877:
    puVar15 = (undefined8 *)0x0;
    puVar14 = puVar16;
  }
  puVar10 = (undefined8 *)((longlong)puVar10 - (longlong)puVar15);
  puVar16 = (undefined8 *)((longlong)puVar15 + (longlong)puVar14);
LAB_0076d885:
  if (puVar10 != (undefined8 *)0x0) {
    *param_2 = puVar14;
    param_2[1] = puVar11;
    param_2[2] = puVar16;
    param_2[3] = puVar10;
    return param_2;
  }
LAB_0076d79e:
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = 0;
  return param_2;
}


