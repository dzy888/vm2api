// 0073ec70 checked_add

/* <std[6c98fd8553dbae28]::time::Instant>::checked_add
   <std[6c98fd8553dbae28]::time::SystemTime>::checked_add */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::time::Instant>::checked_add(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar1 = *param_1 + param_2;
  if (param_2 < 0 != SCARRY8(*param_1,param_2)) {
LAB_0073eca5:
    auVar5._8_8_ = 0xffffffff;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  uVar2 = param_3 + (int)param_1[1];
  if (999999999 < uVar2) {
    bVar3 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar3) goto LAB_0073eca5;
    uVar2 = uVar2 + 0xc4653600;
  }
  auVar4._8_4_ = uVar2;
  auVar4._0_8_ = lVar1;
  auVar4._12_4_ = 0;
  return auVar4;
}


