// 0074c7a0 name

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::Symbol>::name */

longlong * __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::Symbol>::name
          (longlong *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  if (*param_2 == -1) {
    lVar2 = *(longlong *)(param_2 + 2);
    lVar3 = *(longlong *)(param_2 + 4);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 10);
    if (lVar2 == 0) {
      *param_1 = -1;
      return param_1;
    }
    lVar3 = *(longlong *)(param_2 + 0xc);
  }
  uVar4 = (*(code *)PTR_from_utf8_00799468)(param_4,lVar3);
  if (local_60 == 1) {
    lVar1 = 2;
  }
  else {
    (*(code *)PTR_try_demangle_0079af70)(uVar4,lStack_50);
    lVar1 = CONCAT44(uStack_5c,local_60);
    if (lVar1 != 2) {
      local_68 = local_28;
      local_78 = local_38;
      lStack_70 = lStack_30;
      local_88 = local_48;
      lStack_80 = lStack_40;
      local_98 = local_58;
      lStack_90 = lStack_50;
    }
  }
  *param_1 = lVar1;
  param_1[1] = local_98;
  param_1[2] = lStack_90;
  param_1[3] = local_88;
  param_1[4] = lStack_80;
  param_1[5] = local_78;
  param_1[6] = lStack_70;
  param_1[7] = local_68;
  param_1[8] = lVar2;
  param_1[9] = lVar3;
  return param_1;
}


