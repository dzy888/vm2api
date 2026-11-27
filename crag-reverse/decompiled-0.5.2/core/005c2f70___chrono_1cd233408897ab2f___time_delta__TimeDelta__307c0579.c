// 005c2f70 <chrono[1cd233408897ab2f]::time_delta::TimeDelta>

/* chrono[1cd233408897ab2f]::expect::<chrono[1cd233408897ab2f]::time_delta::TimeDelta> */

undefined1  [16] __rustcall
chrono[1cd233408897ab2f]::expect::<chrono[1cd233408897ab2f]::time_delta::TimeDelta>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  code *local_8;
  
  if (*param_1 == 1) {
    auVar3._12_4_ = 0;
    auVar3._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    return auVar3;
  }
  local_10 = &local_20;
  local_8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  ppuVar2 = &anon_30b5cef53457a6ea696e8d7e9f6273d6_2_llvm_8436237269785592069;
  local_20 = param_2;
  local_18 = param_3;
  (*(code *)PTR_panic_fmt_007991a8)
            (param_4,&anon_30b5cef53457a6ea696e8d7e9f6273d6_2_llvm_8436237269785592069);
  pcVar1 = (code *)swi(3);
  auVar4._0_8_ = (*pcVar1)();
  auVar4._8_8_ = ppuVar2;
  return auVar4;
}


