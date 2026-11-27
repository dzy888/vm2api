// 00764df0 sub

/* <std[6c98fd8553dbae28]::time::SystemTime as
   core[c0acaeba6ab4c2e0]::ops::arith::Sub<core[c0acaeba6ab4c2e0]::time::Duration>>::sub */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::time::SystemTime_as_core[c0acaeba6ab4c2e0]::ops::arith::Sub<core[c0acaeba6ab4c2e0]::time::Duration>>
::sub(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar2 = param_1 - param_3;
  if (param_3 < 0 == SBORROW8(param_1,param_3)) {
    param_2 = param_2 - param_4;
    if (-1 < param_2) {
      auVar3._8_4_ = param_2;
      auVar3._0_8_ = lVar2;
      auVar3._12_4_ = 0;
      return auVar3;
    }
    if (!SBORROW8(lVar2,1)) {
      auVar4._8_4_ = param_2 + 1000000000;
      auVar4._0_8_ = lVar2 + -1;
      auVar4._12_4_ = 0;
      return auVar4;
    }
  }
  (*(code *)PTR_expect_failed_00799440)(param_4,param_5);
  pcVar1 = (code *)swi(3);
  auVar5._0_8_ = (*pcVar1)();
  auVar5._8_8_ = param_5;
  return auVar5;
}


