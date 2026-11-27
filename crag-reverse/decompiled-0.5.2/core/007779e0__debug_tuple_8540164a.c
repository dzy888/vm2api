// 007779e0 debug_tuple

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_tuple */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_tuple
          (undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(param_4,param_4);
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *param_1 = 0;
  *(bool *)((longlong)param_1 + 0x11) = param_4 == 0;
  return param_1;
}


