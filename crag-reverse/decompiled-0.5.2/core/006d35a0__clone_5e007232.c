// 006d35a0 clone

/* <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

undefined8 * __rustcall
<polyval[1df58e1208c50bb2]::backend::autodetect::Polyval_as_core[c0acaeba6ab4c2e0]::clone::Clone>::
clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}


