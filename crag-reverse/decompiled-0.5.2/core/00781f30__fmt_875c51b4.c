// 00781f30 fmt

/* <core[c0acaeba6ab4c2e0]::time::Duration as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<core[c0acaeba6ab4c2e0]::time::Duration_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (ulonglong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  uVar2 = *(uint *)(param_2 + 0x10) & 0x200000;
  pcVar6 = (char *)0x1;
  if (uVar2 != 0) {
    pcVar6 = "+";
  }
  uVar1 = (uint)param_1[1];
  uVar5 = (ulonglong)uVar1;
  if (*param_1 == 0) {
    if (uVar1 < 1000000) {
      if (999 < uVar1) {
        uVar5 = uVar5 / 1000;
        uVar4 = (ulonglong)(uVar1 + (int)uVar5 * -1000);
        pcVar7 = &DAT_001c62d5;
        uVar3 = 100;
        uVar8 = 3;
        goto LAB_00781fe7;
      }
      pcVar7 = &DAT_001c62d3;
      uVar4 = 0;
      uVar3 = 1;
    }
    else {
      uVar5 = uVar5 / 1000000;
      uVar4 = (ulonglong)(uVar1 + (int)uVar5 * -1000000);
      pcVar7 = "ms";
      uVar3 = 100000;
    }
    uVar8 = 2;
  }
  else {
    pcVar7 = "s";
    uVar3 = 100000000;
    uVar8 = 1;
    uVar4 = uVar5;
    uVar5 = *param_1;
  }
LAB_00781fe7:
  fmt::fmt_decimal(param_2,uVar5,uVar4,uVar3,pcVar6,uVar2 >> 0x15,pcVar7,uVar8);
  return;
}


