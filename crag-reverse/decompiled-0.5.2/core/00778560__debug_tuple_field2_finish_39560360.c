// 00778560 debug_tuple_field2_finish

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_tuple_field2_finish */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_tuple_field2_finish
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5,undefined8 param_6,longlong param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 2) + 0x18);
  local_58 = param_6;
  cVar3 = (*pcVar1)();
  uVar5 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  if (cVar3 != '\0') goto LAB_007786b7;
  if ((*(byte *)((longlong)param_1 + 0x12) & 0x80) == 0) {
    cVar3 = (*pcVar1)(uVar5,1);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(param_5 + 0x18))();
      uVar2 = extraout_XMM0_Da;
joined_r0x00778642:
      if (cVar3 == '\0') {
        if ((*(byte *)((longlong)param_1 + 0x12) & 0x80) == 0) {
          cVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x18))(uVar2,2);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(param_7 + 0x18))();
LAB_007786df:
            uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
            if (cVar3 == '\0') {
              uVar4 = (**(code **)(*(longlong *)(param_1 + 2) + 0x18))(uVar5,1);
              uVar5 = (ulonglong)uVar4;
            }
            goto LAB_007786b7;
          }
        }
        else {
          local_31 = 1;
          local_78 = *param_1;
          uStack_74 = param_1[1];
          uStack_70 = param_1[2];
          uStack_6c = param_1[3];
          local_68 = &local_31;
          local_40 = *(undefined8 *)(param_1 + 4);
          local_50 = &local_78;
          local_48 = &DAT_00798378;
          cVar3 = (**(code **)(param_7 + 0x18))();
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(local_48 + 0x18))(extraout_XMM0_Da_02,2);
            goto LAB_007786df;
          }
        }
      }
    }
  }
  else {
    cVar3 = (*pcVar1)(uVar5,2);
    if (cVar3 == '\0') {
      local_31 = 1;
      local_78 = *param_1;
      uStack_74 = param_1[1];
      uStack_70 = param_1[2];
      uStack_6c = param_1[3];
      local_68 = &local_31;
      local_40 = *(undefined8 *)(param_1 + 4);
      local_50 = &local_78;
      local_48 = &DAT_00798378;
      cVar3 = (**(code **)(param_5 + 0x18))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(local_48 + 0x18))(extraout_XMM0_Da_00,2);
        uVar2 = extraout_XMM0_Da_01;
        goto joined_r0x00778642;
      }
    }
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_007786b7:
  return uVar5 & 0xffffffff;
}


