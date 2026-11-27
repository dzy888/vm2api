// 0049e1f0 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::ipnsort::<&str, <&str as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::ipnsort::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  
  if (param_2 < 2) {
    return;
  }
  uVar6 = param_1[3];
  uVar13 = param_1[1];
  uVar5 = uVar13;
  if (uVar6 < uVar13) {
    uVar5 = uVar6;
  }
  iVar4 = (*(code *)PTR_memcmp_00799528)(param_4,uVar5);
  lVar12 = uVar6 - uVar13;
  if (iVar4 != 0) {
    lVar12 = (longlong)iVar4;
  }
  uVar13 = 2;
  if (lVar12 < 0) {
    if (param_2 != 2) {
      puVar8 = param_1 + 5;
      uVar14 = extraout_XMM0_Da;
      do {
        uVar5 = *puVar8;
        uVar7 = uVar6;
        if (uVar5 < uVar6) {
          uVar7 = uVar5;
        }
        iVar4 = (*(code *)PTR_memcmp_00799528)(uVar14,uVar7);
        lVar9 = uVar5 - uVar6;
        if (iVar4 != 0) {
          lVar9 = (longlong)iVar4;
        }
        if (-1 < lVar9) goto LAB_0049e2a1;
        uVar13 = uVar13 + 1;
        puVar8 = puVar8 + 2;
        uVar6 = uVar5;
        uVar14 = extraout_XMM0_Da_01;
      } while (param_2 != uVar13);
      goto LAB_0049e2a6;
    }
  }
  else if (param_2 != 2) {
    puVar8 = param_1 + 5;
    uVar14 = extraout_XMM0_Da;
    do {
      uVar5 = *puVar8;
      uVar7 = uVar6;
      if (uVar5 < uVar6) {
        uVar7 = uVar5;
      }
      iVar4 = (*(code *)PTR_memcmp_00799528)(uVar14,uVar7);
      lVar9 = uVar5 - uVar6;
      if (iVar4 != 0) {
        lVar9 = (longlong)iVar4;
      }
      if (lVar9 < 0) goto LAB_0049e2a1;
      uVar13 = uVar13 + 1;
      puVar8 = puVar8 + 2;
      uVar6 = uVar5;
      uVar14 = extraout_XMM0_Da_00;
    } while (param_2 != uVar13);
    goto LAB_0049e2a6;
  }
LAB_0049e2a1:
  if (uVar13 != param_2) {
    lVar12 = 0x3f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    quicksort::quicksort::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (param_1,param_2,0,((uint)lVar12 ^ 0x3f) * 2 ^ 0x7e,param_3);
    return;
  }
LAB_0049e2a6:
  if (lVar12 < 0) {
    uVar6 = param_2 >> 1;
    if (uVar6 == 1) {
      uVar13 = 0;
    }
    else {
      puVar10 = param_1 + param_2 * 2 + -2;
      uVar13 = 0;
      puVar11 = param_1;
      do {
        uVar1 = *puVar11;
        uVar2 = puVar11[1];
        uVar3 = puVar10[1];
        *puVar11 = *puVar10;
        puVar11[1] = uVar3;
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        uVar1 = puVar11[2];
        uVar2 = puVar11[3];
        uVar3 = (param_1 + param_2 * 2 + (uVar13 ^ 0xffffffffffffffe) * 2)[1];
        puVar11[2] = param_1[param_2 * 2 + (uVar13 ^ 0xffffffffffffffe) * 2];
        puVar11[3] = uVar3;
        param_1[param_2 * 2 + (uVar13 ^ 0xffffffffffffffe) * 2] = uVar1;
        (param_1 + param_2 * 2 + (uVar13 ^ 0xffffffffffffffe) * 2)[1] = uVar2;
        uVar13 = uVar13 + 2;
        puVar11 = puVar11 + 4;
        puVar10 = puVar10 + -4;
      } while ((uVar6 & 0x3fffffffffffffe) != uVar13);
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
    uVar1 = param_1[uVar13 * 2];
    uVar2 = (param_1 + uVar13 * 2)[1];
    uVar3 = (param_1 + param_2 * 2 + ~uVar13 * 2)[1];
    param_1[uVar13 * 2] = param_1[param_2 * 2 + ~uVar13 * 2];
    (param_1 + uVar13 * 2)[1] = uVar3;
    param_1[param_2 * 2 + ~uVar13 * 2] = uVar1;
    (param_1 + param_2 * 2 + ~uVar13 * 2)[1] = uVar2;
  }
  return;
}


