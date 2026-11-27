// 00776c10 finish

/* <core[c0acaeba6ab4c2e0]::fmt::builders::DebugTuple>::finish */

uint __rustcall <core[c0acaeba6ab4c2e0]::fmt::builders::DebugTuple>::finish(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    return (uint)*(byte *)(param_1 + 2);
  }
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (*(byte *)(param_1 + 2) == 0) {
    lVar1 = param_1[1];
    if (((*param_1 == 1) && (*(char *)((longlong)param_1 + 0x11) != '\0')) &&
       ((*(byte *)(lVar1 + 0x12) & 0x80) == 0)) {
      uVar3 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x18))(*(longlong *)(lVar1 + 8),1);
      uVar2 = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((char)uVar3 != '\0') goto LAB_00776c89;
    }
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x18))(*(longlong *)(lVar1 + 8),1);
  }
LAB_00776c89:
  *(char *)(param_1 + 2) = (char)uVar2;
  return uVar2;
}


