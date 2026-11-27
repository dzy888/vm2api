// 006d7be0 add_days

/* <chrono[1cd233408897ab2f]::naive::date::NaiveDate>::add_days */

ulonglong __rustcall
<chrono[1cd233408897ab2f]::naive::date::NaiveDate>::add_days(uint param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = param_1 >> 4 & 0x1ff;
  uVar2 = uVar9 + param_2;
  if ((0 < (int)uVar2 && !SCARRY4(uVar9,param_2)) &&
     (uVar2 <= ((int)(param_1 << 0x1c) >> 0x1f) + 0x16eU)) {
    return (ulonglong)(uVar2 * 0x10 | param_1 & 0xffffe00f);
  }
  iVar5 = ((int)param_1 >> 0xd) / 400;
  iVar3 = ((int)param_1 >> 0xd) % 400;
  uVar2 = iVar3 >> 0x1f;
  uVar6 = (uVar2 & 400) + iVar3;
  iVar3 = (uint)(byte)(&anon_d722e35c9b1b1d1c2314433ae8498633_16_llvm_2013973091214785171)[uVar6] +
          uVar9 + uVar6 * 0x16d + -1;
  uVar4 = 0;
  iVar7 = iVar3 + param_2;
  if (!SCARRY4(iVar3,param_2)) {
    iVar3 = iVar7 % 0x23ab1;
    uVar10 = iVar3 >> 0x1f;
    uVar11 = (uVar10 & 0x23ab1) + iVar3;
    uVar8 = (ulonglong)(uVar11 / 0x16d);
    uVar9 = uVar11 % 0x16d;
    uVar6 = uVar9 - (byte)(&anon_d722e35c9b1b1d1c2314433ae8498633_16_llvm_2013973091214785171)
                          [uVar8];
    if (uVar9 < (byte)(&anon_d722e35c9b1b1d1c2314433ae8498633_16_llvm_2013973091214785171)[uVar8]) {
      uVar6 = uVar11 / 0x16d - 1;
      uVar8 = (ulonglong)uVar6;
      if (400 < uVar6) {
        (*(code *)PTR_panic_bounds_check_00799520)
                  (iVar5,&anon_d722e35c9b1b1d1c2314433ae8498633_23_llvm_2013973091214785171);
LAB_006d7d8b:
        (*(code *)PTR_panic_bounds_check_00799520)();
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar6 = (uVar9 - (byte)(&anon_d722e35c9b1b1d1c2314433ae8498633_16_llvm_2013973091214785171)
                             [uVar8]) + 0x16d;
    }
    else if (0x23a4f < uVar11) goto LAB_006d7d8b;
    if ((uVar6 < 0x16e) &&
       (iVar5 = (uVar2 + iVar5 + iVar7 / 0x23ab1 + uVar10) * 400,
       0xfff80001 < ((int)uVar8 + iVar5) - 0x3ffffU)) {
      uVar2 = uVar6 * 0x10 + ((int)uVar8 + iVar5) * 0x2000 + 0x10 |
              (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171[uVar8];
      uVar4 = 0;
      if ((uVar2 & 0x1ff8) < 0x16e1) {
        uVar4 = (ulonglong)uVar2;
      }
    }
  }
  return uVar4;
}


