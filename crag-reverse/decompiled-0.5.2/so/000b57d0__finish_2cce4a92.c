// 000b57d0 finish

/* <core[c0acaeba6ab4c2e0]::fmt::builders::DebugList>::finish */

void __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::DebugList>::finish
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((char)param_1[1] == '\0') {
    uVar1 = (**(code **)(*(longlong *)(*param_1 + 8) + 0x18))(param_4,1);
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


