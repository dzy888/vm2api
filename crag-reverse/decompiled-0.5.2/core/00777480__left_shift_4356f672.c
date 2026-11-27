// 00777480 left_shift

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift */

void __rustcall
<core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift
          (ulonglong *param_1,uint param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  byte bVar11;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar5 = (ulonglong)(param_2 & 0x3f);
    uVar7 = (ulonglong)(*(ushort *)(&DAT_001c2b20 + uVar5 * 2) >> 0xb);
    uVar6 = (ulonglong)(*(ushort *)(&DAT_001c2b20 + uVar5 * 2) & 0x7ff);
    uVar3 = (*(ushort *)(&DAT_001c2b22 + uVar5 * 2) & 0x7ff) - uVar6;
    uVar9 = 0;
    do {
      if ((uVar3 == uVar9) || (0x51c - uVar6 == uVar9)) goto LAB_00777552;
      if (uVar4 == uVar9) {
LAB_0077754f:
        uVar7 = uVar7 - 1;
        goto LAB_00777552;
      }
      if (uVar9 == 0x300) goto LAB_00777699;
      bVar10 = (&DAT_001c2ba2)[uVar9 + uVar6];
      bVar11 = *(byte *)((longlong)param_1 + uVar9 + 8);
      if (bVar11 != bVar10) break;
      if ((uVar3 - 1 == uVar9) || (0x51b - uVar6 == uVar9)) goto LAB_00777552;
      if (uVar9 + 1 == uVar4) goto LAB_0077754f;
      bVar10 = (&DAT_001c2ba3)[uVar9 + uVar6];
      bVar11 = *(byte *)((longlong)param_1 + uVar9 + 9);
      uVar9 = uVar9 + 2;
    } while (bVar11 == bVar10);
    uVar7 = uVar7 - (bVar11 < bVar10);
LAB_00777552:
    uVar3 = 0;
    do {
      uVar9 = uVar4 - 1;
      if (0x300 < uVar4) {
        (*(code *)PTR_panic_bounds_check_00799520)
                  (uVar5,&PTR_s__rustc_48a229ceaefd4985c50990b14_007983c0);
        goto LAB_00777684;
      }
      uVar6 = ((ulonglong)*(byte *)((longlong)param_1 + uVar4 + 7) << (sbyte)(param_2 & 0x3f)) +
              uVar3;
      uVar3 = uVar6 / 10;
      if (uVar7 + uVar9 < 0x300) {
        *(char *)((longlong)param_1 + uVar9 + uVar7 + 8) = (char)(uVar6 % 10);
      }
      else if (uVar6 % 10 != 0) {
        *(undefined1 *)((longlong)param_1 + 0x30c) = 1;
      }
      uVar4 = uVar9;
      uVar2 = uVar7;
    } while (uVar9 != 0);
    while (uVar4 = uVar3, 9 < uVar6) {
      uVar5 = uVar2 - 1;
      uVar3 = uVar4 / 10;
      uVar6 = uVar4;
      if (uVar5 < 0x300) {
        *(char *)((longlong)param_1 + uVar2 + 7) = (char)(uVar4 % 10);
        uVar2 = uVar5;
      }
      else {
        uVar2 = uVar5;
        if (uVar4 % 10 != 0) {
          *(undefined1 *)((longlong)param_1 + 0x30c) = 1;
        }
      }
    }
    uVar4 = *param_1 + uVar7;
    uVar3 = 0x300;
    if (uVar4 < 0x300) {
      uVar3 = uVar4;
    }
    *param_1 = uVar3;
    *(int *)(param_1 + 0x61) = (int)param_1[0x61] + (int)uVar7;
    while (uVar4 != 0) {
      uVar4 = uVar3 - 1;
      if (0x300 < uVar3) goto LAB_00777684;
      if (*(char *)((longlong)param_1 + uVar3 + 7) != '\0') {
        return;
      }
      *param_1 = uVar4;
      uVar3 = uVar4;
    }
  }
  return;
LAB_0077786a:
  (*(code *)PTR_panic_bounds_check_00799520)();
  goto LAB_0077787f;
LAB_00777684:
  (*(code *)PTR_panic_bounds_check_00799520)();
LAB_00777699:
  (*(code *)PTR_panic_bounds_check_00799520)();
  uVar3 = _DAT_00000300;
  uVar5 = 0;
  uVar4 = 0;
  do {
    if (_DAT_00000300 == uVar5) {
LAB_0077771e:
      if (uVar4 == 0) {
        return;
      }
      if (uVar4 == 0) {
        do {
        } while( true );
      }
      uVar5 = _DAT_00000300;
      break;
    }
    if (uVar5 == 0x300) {
      (*(code *)PTR_panic_bounds_check_00799520)(0,&PTR_s__rustc_48a229ceaefd4985c50990b14_007983d8)
      ;
      goto LAB_0077786a;
    }
    uVar4 = (ulonglong)*(byte *)(uVar5 + 0x308) + uVar4 * 10;
    if (uVar4 != 0) {
      uVar5 = uVar5 + 1;
      break;
    }
    if (_DAT_00000300 - 1 == uVar5) goto LAB_0077771e;
    uVar4 = (ulonglong)*(byte *)(uVar5 + 0x309);
    uVar5 = uVar5 + 2;
  } while (uVar4 == 0);
  iRam0000000000000608 = (iRam0000000000000608 - (int)uVar5) + 1;
  if (iRam0000000000000608 < -0x7ff) {
    _DAT_00000300 = 0;
    iRam0000000000000608 = 0;
    uRam000000000000060c = 0;
    return;
  }
  uVar9 = _DAT_00000300 - uVar5;
  if (_DAT_00000300 < uVar5 || uVar9 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = uVar4;
    do {
      if (0x2ff < uVar5) goto LAB_0077786a;
      uVar4 = (ulonglong)*(byte *)(uVar5 + 0x308);
      uVar5 = uVar5 + 1;
      *(char *)(lVar8 + 0x308) = (char)uVar7;
      lVar8 = lVar8 + 1;
      uVar7 = uVar4;
    } while (uVar3 != uVar5);
  }
  while (uVar4 != 0) {
    if (uVar9 < 0x300) {
      *(char *)(uVar9 + 0x308) = (char)uVar4;
      uVar9 = uVar9 + 1;
    }
    else if ((char)uVar4 != '\0') {
      uRam000000000000060c = 1;
    }
    uVar4 = 0;
  }
  uVar4 = uVar9;
  while( true ) {
    _DAT_00000300 = uVar4;
    if (_DAT_00000300 == 0) {
      return;
    }
    if (0x300 < uVar9) break;
    uVar4 = _DAT_00000300 - 1;
    if (*(char *)(_DAT_00000300 + 0x307) != '\0') {
      return;
    }
  }
LAB_0077787f:
  (*(code *)PTR_panic_bounds_check_00799520)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


