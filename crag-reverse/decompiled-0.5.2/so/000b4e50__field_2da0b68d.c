// 000b4e50 field

/* <core[c0acaeba6ab4c2e0]::fmt::builders::DebugStruct>::field */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::DebugStruct>::field
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_31;
  
  uVar3 = 1;
  if ((char)param_1[1] == '\0') {
    puVar1 = (undefined4 *)*param_1;
    local_48 = param_4;
    local_40 = param_5;
    if ((*(byte *)((longlong)puVar1 + 0x12) & 0x80) == 0) {
      cVar2 = (**(code **)(*(longlong *)(puVar1 + 2) + 0x18))
                        (&DAT_00017c34,*(byte *)((longlong)param_1 + 9) ^ 3);
      if (((cVar2 == '\0') &&
          (cVar2 = (**(code **)(*(longlong *)(puVar1 + 2) + 0x18))(extraout_XMM0_Da,param_3),
          cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(longlong *)(puVar1 + 2) + 0x18))(extraout_XMM0_Da_00,2),
         cVar2 == '\0')) {
        uVar3 = (**(code **)(local_40 + 0x18))();
      }
    }
    else {
      if (*(byte *)((longlong)param_1 + 9) == 0) {
        cVar2 = (**(code **)(*(longlong *)(puVar1 + 2) + 0x18))(*(longlong *)(puVar1 + 2),3);
        uVar3 = 1;
        if (cVar2 != '\0') goto LAB_000b4e6d;
      }
      uVar3 = 1;
      local_31 = 1;
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      local_68 = &local_31;
      local_50 = *(undefined8 *)(puVar1 + 4);
      local_60 = &local_78;
      local_58 = &DAT_000c2f88;
      cVar2 = (*(code *)PTR_write_str_000c4758)(local_78,param_3);
      if (((cVar2 == '\0') &&
          (cVar2 = (*(code *)PTR_write_str_000c4758)(extraout_XMM0_Da_01,2), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(local_40 + 0x18))(), cVar2 == '\0')) {
        uVar3 = (**(code **)(local_58 + 0x18))(extraout_XMM0_Da_02,2);
      }
    }
  }
LAB_000b4e6d:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return param_1;
}


