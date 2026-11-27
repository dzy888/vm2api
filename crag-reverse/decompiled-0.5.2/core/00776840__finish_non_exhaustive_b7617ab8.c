// 00776840 finish_non_exhaustive

/* <core[c0acaeba6ab4c2e0]::fmt::builders::DebugStruct>::finish_non_exhaustive */

void __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::DebugStruct>::finish_non_exhaustive
          (undefined4 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  
  uVar2 = 1;
  if ((char)param_2[1] == '\0') {
    puVar1 = (undefined4 *)*param_2;
    if (*(char *)((longlong)param_2 + 9) == '\0') {
      lVar4 = *(longlong *)(puVar1 + 2);
      uVar5 = 7;
    }
    else if ((*(byte *)((longlong)puVar1 + 0x12) & 0x80) == 0) {
      lVar4 = *(longlong *)(puVar1 + 2);
      uVar5 = 6;
    }
    else {
      cVar3 = (*(code *)PTR_write_str_0079b358)(*puVar1,3);
      if (cVar3 != '\0') {
        uVar2 = 1;
        goto LAB_00776891;
      }
      lVar4 = *(longlong *)(puVar1 + 2);
      uVar5 = 1;
      param_1 = extraout_XMM0_Da;
    }
    uVar2 = (**(code **)(lVar4 + 0x18))(param_1,uVar5);
  }
LAB_00776891:
  *(undefined1 *)(param_2 + 1) = uVar2;
  return;
}


