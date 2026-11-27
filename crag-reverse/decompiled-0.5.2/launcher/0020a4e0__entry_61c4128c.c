// 0020a4e0 entry

/* <core[c0acaeba6ab4c2e0]::fmt::builders::DebugSet>::entry
   <core[c0acaeba6ab4c2e0]::fmt::builders::DebugList>::entry */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::DebugSet>::entry
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined4 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  uVar3 = 1;
  if ((char)param_1[1] == '\0') {
    puVar1 = (undefined4 *)*param_1;
    if ((*(byte *)((longlong)puVar1 + 0x12) & 0x80) == 0) {
      if (*(char *)((longlong)param_1 + 9) != '\0') {
        cVar2 = (**(code **)(*(longlong *)(puVar1 + 2) + 0x18))(*(longlong *)(puVar1 + 2),2);
        uVar3 = 1;
        if (cVar2 != '\0') goto LAB_0020a5db;
      }
      uVar3 = (**(code **)(param_3 + 0x18))();
    }
    else {
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        cVar2 = (**(code **)(*(longlong *)(puVar1 + 2) + 0x18))(*(longlong *)(puVar1 + 2),1);
        uVar3 = 1;
        if (cVar2 != '\0') goto LAB_0020a5db;
      }
      local_29 = 1;
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_58 = &local_29;
      local_38 = *(undefined8 *)(puVar1 + 4);
      local_48 = &local_68;
      local_40 = &DAT_002190f0;
      cVar2 = (**(code **)(param_3 + 0x18))();
      if (cVar2 == '\0') {
        uVar3 = (**(code **)(local_40 + 0x18))(extraout_XMM0_Da,2);
      }
      else {
        uVar3 = 1;
      }
    }
  }
LAB_0020a5db:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return param_1;
}


