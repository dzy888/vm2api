// 006d7a30 from_ymd_opt

/* <chrono[1cd233408897ab2f]::naive::date::NaiveDate>::from_ymd_opt */

uint __rustcall
<chrono[1cd233408897ab2f]::naive::date::NaiveDate>::from_ymd_opt
          (int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_3 < 0x20 && param_2 < 0xd) && (0xfff80001 < param_1 - 0x3ffffU)) {
    uVar1 = param_3 << 4 | param_2 << 9 |
            (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                        [(param_1 % 400 >> 0x1f & 400U) + param_1 % 400];
    if (""[uVar1 >> 3] != 0) {
      uVar2 = uVar1 + ""[uVar1 >> 3] * -8 | param_1 << 0xd;
    }
  }
  return uVar2;
}


