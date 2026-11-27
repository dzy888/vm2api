// 000acd7d ident

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident */

char * __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident
          (undefined4 param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  bool bVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 unaff_RBX;
  undefined8 *puVar14;
  char *pcVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined4 extraout_XMM0_Da;
  char cStack_50;
  byte bStack_4f;
  ulonglong uStack_48;
  undefined8 uStack_40;
  
  uVar3 = param_3[1];
  uVar17 = param_3[2];
  if ((uVar17 < uVar3) && (*(char *)(*param_3 + uVar17) == 'u')) {
    uVar17 = uVar17 + 1;
    param_3[2] = uVar17;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (uVar3 <= uVar17) goto LAB_000ace1e;
  pcVar15 = (char *)*param_3;
  bVar7 = pcVar15[uVar17] - 0x30;
  if (9 < bVar7) goto LAB_000ace1e;
  uVar17 = uVar17 + 1;
  param_3[2] = uVar17;
  if (bVar7 != 0) {
    puVar9 = (undefined8 *)(ulonglong)bVar7;
    do {
      if (uVar3 <= uVar17) goto LAB_000acdfa;
      bVar7 = pcVar15[uVar17] - 0x30;
      unaff_RBX = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar7);
      if (9 < bVar7) goto LAB_000acdfa;
      uVar17 = uVar17 + 1;
      param_3[2] = uVar17;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puVar9;
      uVar8 = SUB168(auVar4 * ZEXT816(10),0);
    } while ((SUB168(auVar4 * ZEXT816(10),8) == 0) &&
            (puVar9 = (undefined8 *)(uVar8 + bVar7), !CARRY8(uVar8,(ulonglong)bVar7)));
    goto LAB_000ace1e;
  }
  puVar9 = (undefined8 *)0x0;
LAB_000acdfa:
  if ((uVar17 < uVar3) && (pcVar15[uVar17] == '_')) {
    uVar17 = uVar17 + 1;
    param_3[2] = uVar17;
  }
  uVar8 = uVar17 + (longlong)puVar9;
  if ((CARRY8(uVar17,(ulonglong)puVar9)) || (param_3[2] = uVar8, uVar3 < uVar8)) goto LAB_000ace1e;
  if ((uVar17 != uVar3) &&
     ((pcVar15[uVar17] < -0x40 || ((uVar8 != uVar3 && (pcVar15[uVar8] < -0x40)))))) {
    puVar9 = (undefined8 *)
             (*(code *)PTR_slice_error_fail_000c3fc8)
                       (uVar8,uVar17,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2628);
    param_1 = extraout_XMM0_Da;
    goto LAB_000acf35;
  }
  pcVar15 = pcVar15 + uVar17;
  if (!bVar6) {
    *(char **)param_2 = pcVar15;
    *(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 *)(param_2 + 0x10) = 1;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return param_2;
  }
  pcVar16 = pcVar15 + (longlong)puVar9;
  puVar10 = (undefined8 *)0x0;
  lVar1 = 0;
  do {
    lVar11 = lVar1;
    if ((longlong)puVar9 + lVar11 == 0) {
      pcVar13 = Elf64_Ehdr_00000000.e_ident_magic_str;
      goto LAB_000acf05;
    }
    lVar1 = lVar11 + -1;
  } while (pcVar16[lVar11 + -1] != '_');
  puVar12 = (undefined8 *)((longlong)puVar9 + lVar11);
  puVar10 = (undefined8 *)((longlong)puVar9 + lVar1);
  if (puVar10 == (undefined8 *)0x0) {
LAB_000acec6:
    pcVar13 = pcVar15;
    if (puVar12 < puVar9) {
      if (pcVar16[lVar11] < -0x40) {
LAB_000acee1:
        puVar10 = puVar9;
        pcVar16 = pcVar15;
        puVar9 = (undefined8 *)
                 (*(code *)PTR_slice_error_fail_000c3fc8)
                           (puVar9,puVar12,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2658);
        param_2 = pcVar15;
        pcVar15 = pcVar16;
        goto LAB_000acef7;
      }
      puVar14 = puVar12;
    }
    else {
      puVar14 = puVar9;
      if (lVar1 != -1) goto LAB_000acee1;
    }
  }
  else {
    if (puVar10 < puVar9) {
      if (pcVar16[lVar1] < -0x40) goto LAB_000acf35;
      goto LAB_000acec6;
    }
    if (lVar1 != 0) {
LAB_000acf35:
      (*(code *)PTR_slice_error_fail_000c3fc8)
                (param_1,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2640);
      lVar1 = puVar9[2];
      uStack_40 = unaff_RBX;
      integer_62(&cStack_50);
      if (cStack_50 == '\x01') {
        pcVar15[8] = bStack_4f;
      }
      else if (uStack_48 < lVar1 - 1U) {
        iVar2 = *(int *)(puVar9 + 3);
        if (iVar2 + 1U < 0x1f5) {
          uVar5 = puVar9[1];
          *(undefined8 *)pcVar15 = *puVar9;
          *(undefined8 *)(pcVar15 + 8) = uVar5;
          *(ulonglong *)(pcVar15 + 0x10) = uStack_48;
          *(uint *)(pcVar15 + 0x18) = iVar2 + 1U;
          return pcVar15;
        }
        pcVar15[8] = 1;
      }
      else {
        pcVar15[8] = 0;
      }
      *(undefined8 *)pcVar15 = 0;
      return pcVar15;
    }
    if (puVar12 != (undefined8 *)0x0) goto LAB_000acec6;
LAB_000acef7:
    puVar14 = (undefined8 *)0x0;
    pcVar13 = pcVar15;
  }
  puVar9 = (undefined8 *)((longlong)puVar9 - (longlong)puVar14);
  pcVar15 = (char *)((longlong)puVar14 + (longlong)pcVar13);
LAB_000acf05:
  if (puVar9 != (undefined8 *)0x0) {
    *(char **)param_2 = pcVar13;
    *(undefined8 **)(param_2 + 8) = puVar10;
    *(char **)(param_2 + 0x10) = pcVar15;
    *(undefined8 **)(param_2 + 0x18) = puVar9;
    return param_2;
  }
LAB_000ace1e:
  param_2[8] = 0;
  *(undefined8 *)param_2 = 0;
  return param_2;
}


