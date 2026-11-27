// 001bedd0 from_num_days_from_ce_opt

/* <chrono[1cd233408897ab2f]::naive::date::NaiveDate>::from_num_days_from_ce_opt */

ulonglong __rustcall
<chrono[1cd233408897ab2f]::naive::date::NaiveDate>::from_num_days_from_ce_opt(int param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = 0;
  if (!SCARRY4(param_1,0x16d)) {
    iVar3 = (param_1 + 0x16d) / 0x23ab1;
    iVar5 = (param_1 + 0x16d) % 0x23ab1;
    uVar4 = iVar5 >> 0x1f;
    uVar8 = (uVar4 & 0x23ab1) + iVar5;
    uVar7 = (ulonglong)(uVar8 / 0x16d);
    uVar9 = uVar8 % 0x16d;
    uVar6 = uVar9 - (byte)(&anon_d722e35c9b1b1d1c2314433ae8498633_16_llvm_2013973091214785171)
                          [uVar7];
    if (uVar9 < (byte)(&anon_d722e35c9b1b1d1c2314433ae8498633_16_llvm_2013973091214785171)[uVar7]) {
      uVar6 = uVar8 / 0x16d - 1;
      uVar7 = (ulonglong)uVar6;
      if (400 < uVar6) {
        (*(code *)PTR_panic_bounds_check_0021a020)
                  (iVar3,&anon_d722e35c9b1b1d1c2314433ae8498633_23_llvm_2013973091214785171);
LAB_001beed6:
        (*(code *)PTR_panic_bounds_check_0021a020)();
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar6 = (uVar9 - (byte)(&anon_d722e35c9b1b1d1c2314433ae8498633_16_llvm_2013973091214785171)
                             [uVar7]) + 0x16d;
    }
    else if (0x23a4f < uVar8) goto LAB_001beed6;
    if ((uVar6 < 0x16e) &&
       (iVar3 = (uVar4 + iVar3) * 400, 0xfff80001 < ((int)uVar7 + iVar3) - 0x3ffffU)) {
      uVar4 = uVar6 * 0x10 + ((int)uVar7 + iVar3) * 0x2000 + 0x10 |
              (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171[uVar7];
      uVar2 = 0;
      if ((uVar4 & 0x1ff8) < 0x16e1) {
        uVar2 = (ulonglong)uVar4;
      }
    }
  }
  return uVar2;
}


