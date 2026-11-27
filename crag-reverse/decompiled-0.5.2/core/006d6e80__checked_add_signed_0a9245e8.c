// 006d6e80 checked_add_signed

/* <chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::checked_add_signed */

int * __rustcall
<chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::checked_add_signed
          (int *param_1,longlong param_2,longlong param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 8);
  if (param_3 < 0) {
    bVar1 = 0 < param_4;
    iVar2 = param_4 + -1000000000;
    if (param_4 < 1) {
      iVar2 = param_4;
    }
    param_4 = iVar2;
    param_3 = param_3 + (ulonglong)bVar1;
    if (999999999 < iVar3) goto LAB_006d6ecf;
LAB_006d6f05:
    param_3 = (ulonglong)uVar6 + param_3;
    uVar5 = iVar3 + param_4;
joined_r0x006d6f2d:
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 1000000000;
      param_3 = param_3 + -1;
    }
    else if (999999999 < uVar5) {
      uVar5 = uVar5 + 0xc4653600;
      param_3 = param_3 + 1;
    }
    uVar4 = (ulonglong)((uint)(param_3 % 0x15180 >> 0x3f) & 0x15180) + param_3 % 0x15180;
    param_3 = param_3 - uVar4;
    if ((param_3 + 0xffdf3b645a1cac08U < 0xffbe76c8b4395811) ||
       (uVar6 = (uint)uVar4, param_3 - 0xa8c000000000U < 0xfffeae7ffffeae81)) goto LAB_006d6fd1;
  }
  else {
    if (iVar3 < 1000000000) goto LAB_006d6f05;
LAB_006d6ecf:
    if ((0 < param_3) || (2000000000 - param_4 <= iVar3 && 0 < param_4)) {
      iVar3 = iVar3 + -1000000000;
      goto LAB_006d6f05;
    }
    if (param_3 < 0) {
      param_3 = (ulonglong)uVar6 + 1 + param_3;
      uVar5 = iVar3 + -1000000000 + param_4;
      goto joined_r0x006d6f2d;
    }
    uVar5 = param_4 + iVar3;
    uVar4 = (ulonglong)uVar5;
    param_3 = 0;
  }
  iVar3 = (*(code *)PTR_add_days_0079a6c8)
                    (uVar4,SUB168(SEXT816(param_3) * SEXT816(0x1845c8a0ce512957),8) >> 0xd);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar5;
    return param_1;
  }
LAB_006d6fd1:
  *param_1 = 0;
  return param_1;
}


