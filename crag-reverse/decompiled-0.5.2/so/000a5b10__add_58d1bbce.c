// 000a5b10 add

/* <std[6c98fd8553dbae28]::time::Instant as
   core[c0acaeba6ab4c2e0]::ops::arith::Add<core[c0acaeba6ab4c2e0]::time::Duration>>::add */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::time::Instant_as_core[c0acaeba6ab4c2e0]::ops::arith::Add<core[c0acaeba6ab4c2e0]::time::Duration>>
::add(longlong param_1,int param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar3 = param_1 + param_3;
  if (param_3 < 0 != SCARRY8(param_1,param_3)) {
LAB_000a5b3b:
    (*(code *)PTR_expect_failed_000c3d38)(param_4,param_5);
    pcVar1 = (code *)swi(3);
    auVar6._0_8_ = (*pcVar1)();
    auVar6._8_8_ = param_5;
    return auVar6;
  }
  uVar2 = (int)param_4 + param_2;
  param_4 = (ulonglong)uVar2;
  if (999999999 < uVar2) {
    bVar4 = SCARRY8(lVar3,1);
    lVar3 = lVar3 + 1;
    if (bVar4) goto LAB_000a5b3b;
    uVar2 = uVar2 + 0xc4653600;
  }
  auVar5._8_4_ = uVar2;
  auVar5._0_8_ = lVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}


