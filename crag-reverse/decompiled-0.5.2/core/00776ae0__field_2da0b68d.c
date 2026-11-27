// 00776ae0 field

/* <core[c0acaeba6ab4c2e0]::fmt::builders::DebugTuple>::field */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::DebugTuple>::field
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  lVar1 = *param_1;
  uVar4 = 1;
  if ((char)param_1[2] == '\0') {
    puVar2 = (undefined4 *)param_1[1];
    if ((*(byte *)((longlong)puVar2 + 0x12) & 0x80) == 0) {
      puVar5 = &DAT_001c22dd;
      if (lVar1 == 0) {
        puVar5 = &DAT_001c22e6;
      }
      cVar3 = (**(code **)(*(longlong *)(puVar2 + 2) + 0x18))(puVar5,(lVar1 != 0) + '\x01');
      uVar4 = 1;
      if (cVar3 == '\0') {
        uVar4 = (**(code **)(param_3 + 0x18))();
      }
    }
    else {
      if (lVar1 == 0) {
        cVar3 = (**(code **)(*(longlong *)(puVar2 + 2) + 0x18))(*(longlong *)(puVar2 + 2),2);
        uVar4 = 1;
        if (cVar3 != '\0') goto LAB_00776aff;
      }
      local_31 = 1;
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      local_58 = &local_31;
      local_40 = *(undefined8 *)(puVar2 + 4);
      local_50 = &local_68;
      local_48 = &DAT_00798378;
      cVar3 = (**(code **)(param_3 + 0x18))();
      if (cVar3 == '\0') {
        uVar4 = (**(code **)(local_48 + 0x18))(extraout_XMM0_Da,2);
      }
      else {
        uVar4 = 1;
      }
    }
  }
LAB_00776aff:
  *(undefined1 *)(param_1 + 2) = uVar4;
  *param_1 = lVar1 + 1;
  return param_1;
}


