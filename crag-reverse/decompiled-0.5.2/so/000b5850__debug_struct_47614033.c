// 000b5850 debug_struct

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(param_4,param_4);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  return param_1;
}


