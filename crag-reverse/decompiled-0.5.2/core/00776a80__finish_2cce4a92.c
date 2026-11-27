// 00776a80 finish

/* <core[c0acaeba6ab4c2e0]::fmt::builders::DebugStruct>::finish */

void __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::DebugStruct>::finish
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    uVar1 = 1;
    if ((char)param_1[1] == '\0') {
      lVar2 = *param_1;
      if ((*(byte *)(lVar2 + 0x12) & 0x80) == 0) {
        lVar2 = *(longlong *)(lVar2 + 8);
        uVar3 = 2;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        uVar3 = 1;
      }
      uVar1 = (**(code **)(lVar2 + 0x18))(param_4,uVar3);
    }
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  return;
}


