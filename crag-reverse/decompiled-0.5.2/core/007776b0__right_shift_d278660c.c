// 007776b0 right_shift

/* <core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::DecimalSeq>::right_shift */

void __rustcall
<core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::DecimalSeq>::right_shift
          (ulonglong *param_1,byte param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  param_2 = param_2 & 0x3f;
  uVar1 = *param_1;
  uVar5 = 0;
  uVar6 = 0;
  do {
    if (uVar1 == uVar5) {
LAB_0077771e:
      if (uVar6 == 0) {
        return;
      }
      uVar5 = uVar1;
      if (uVar6 >> param_2 == 0) {
        do {
          uVar6 = uVar6 * 10;
          uVar5 = uVar5 + 1;
        } while (uVar6 >> param_2 == 0);
      }
      break;
    }
    if (uVar5 == 0x300) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (param_2,&PTR_s__rustc_48a229ceaefd4985c50990b14_007983d8);
      goto LAB_0077786a;
    }
    uVar6 = (ulonglong)*(byte *)((longlong)param_1 + uVar5 + 8) + uVar6 * 10;
    if (uVar6 >> param_2 != 0) {
      uVar5 = uVar5 + 1;
      break;
    }
    if (uVar1 - 1 == uVar5) goto LAB_0077771e;
    uVar6 = (ulonglong)*(byte *)((longlong)param_1 + uVar5 + 9) + uVar6 * 10;
    uVar5 = uVar5 + 2;
  } while (uVar6 >> param_2 == 0);
  iVar7 = ((int)param_1[0x61] - (int)uVar5) + 1;
  *(int *)(param_1 + 0x61) = iVar7;
  if (iVar7 < -0x7ff) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
    *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
    return;
  }
  uVar8 = uVar1 - uVar5;
  if (uVar1 < uVar5 || uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    do {
      if (0x2ff < uVar5) goto LAB_0077786a;
      uVar10 = uVar6 >> param_2;
      lVar3 = uVar5 + 8;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)*(byte *)((longlong)param_1 + lVar3) + (uVar6 & ~(-1L << param_2)) * 10;
      *(char *)((longlong)param_1 + lVar9 + 8) = (char)uVar10;
      lVar9 = lVar9 + 1;
    } while (uVar1 != uVar5);
  }
  for (; uVar6 != 0; uVar6 = (uVar6 & ~(-1L << param_2)) * 10) {
    cVar4 = (char)(uVar6 >> param_2);
    if (uVar8 < 0x300) {
      *(char *)((longlong)param_1 + uVar8 + 8) = cVar4;
      uVar8 = uVar8 + 1;
    }
    else if (cVar4 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x30c) = 1;
    }
  }
  uVar6 = uVar8;
  while( true ) {
    *param_1 = uVar6;
    if (uVar6 == 0) {
      return;
    }
    if (0x300 < uVar8) break;
    lVar9 = uVar6 + 7;
    uVar6 = uVar6 - 1;
    if (*(char *)((longlong)param_1 + lVar9) != '\0') {
      return;
    }
  }
LAB_0077787f:
  (*(code *)PTR_panic_bounds_check_00799520)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
LAB_0077786a:
  (*(code *)PTR_panic_bounds_check_00799520)();
  goto LAB_0077787f;
}


