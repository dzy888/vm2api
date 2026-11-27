// 006d78a0 diff_months

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <chrono[1cd233408897ab2f]::naive::date::NaiveDate>::diff_months */

ulonglong __rustcall
<chrono[1cd233408897ab2f]::naive::date::NaiveDate>::diff_months
          (undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_30 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  uVar5 = param_2 >> 3;
  uVar7 = uVar5 & 0x3ff;
  if (uVar7 < 0x2dd) {
    iVar2 = (uVar7 + (byte)""[uVar7] >> 6) + ((int)param_2 >> 0xd) * 0xc + -1;
    iVar3 = iVar2 + param_3;
    if (SCARRY4(iVar2,param_3)) {
      return 0;
    }
    iVar2 = iVar3 % 0xc;
    uVar6 = iVar2 >> 0x1f;
    iVar3 = iVar3 / 0xc + uVar6;
    uVar8 = (iVar3 % 400 >> 0x1f & 400U) + iVar3 % 400;
    if (uVar8 < 400) {
      uVar6 = (uVar6 & 0xc) + iVar2;
      uVar4 = 0;
      local_30[0] = 0x1f;
      local_30[1] = ((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                           [(int)uVar8] < 8) + 0x1c;
      local_28 = _DAT_00182670;
      uStack_20 = _UNK_00182678;
      local_18 = _DAT_00183b80;
      uStack_10 = _UNK_00183b88;
      local_8 = 0x1f0000001e;
      uVar5 = uVar5 + (byte)""[uVar7] >> 1 & 0x1f;
      if (local_30[uVar6] <= uVar5) {
        uVar5 = local_30[uVar6];
      }
      if (0xfff80001 < iVar3 - 0x3ffffU) {
        uVar5 = uVar5 * 0x10 + uVar6 * 0x200 + 0x200 |
                (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                            [(int)uVar8];
        if (""[uVar5 >> 3] != 0) {
          uVar4 = (ulonglong)(uVar5 + ""[uVar5 >> 3] * -8 | iVar3 * 0x2000);
        }
      }
      return uVar4;
    }
  }
  else {
    param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                        (uVar5,&anon_d722e35c9b1b1d1c2314433ae8498633_10_llvm_2013973091214785171);
  }
  (*(code *)PTR_panic_bounds_check_00799520)
            (param_1,&anon_d722e35c9b1b1d1c2314433ae8498633_13_llvm_2013973091214785171);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}


