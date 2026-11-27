// 0073f7d0 name

/* <std[6c98fd8553dbae28]::thread::builder::Builder>::name */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::thread::builder::Builder>::name
          (undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0 < (longlong)param_3[2]) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  param_3[4] = param_4[2];
  uVar1 = param_4[1];
  param_3[2] = *param_4;
  param_3[3] = uVar1;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  param_2[4] = param_3[4];
  param_2[5] = uVar5;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}


