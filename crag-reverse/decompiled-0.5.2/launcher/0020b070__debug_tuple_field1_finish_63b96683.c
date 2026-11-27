// 0020b070 debug_tuple_field1_finish

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_tuple_field1_finish */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_tuple_field1_finish
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          longlong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  pcVar3 = *(code **)(lVar2 + 0x18);
  local_48 = param_5;
  local_40 = param_4;
  cVar4 = (*pcVar3)();
  uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  if (cVar4 != '\0') goto LAB_0020b157;
  if ((*(byte *)((longlong)param_1 + 0x12) & 0x80) == 0) {
    cVar4 = (*pcVar3)(uVar6,1);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(local_48 + 0x18))();
joined_r0x0020b153:
      if (cVar4 == '\0') {
        if ((param_3 == 0) && ((*(byte *)((longlong)param_1 + 0x12) & 0x80) == 0)) {
          cVar4 = (**(code **)(param_1[1] + 0x18))();
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
          if (cVar4 != '\0') goto LAB_0020b157;
        }
        uVar5 = (**(code **)(param_1[1] + 0x18))();
        uVar6 = (ulonglong)uVar5;
        goto LAB_0020b157;
      }
    }
  }
  else {
    cVar4 = (*pcVar3)(uVar6,2);
    if (cVar4 == '\0') {
      local_31 = 1;
      local_68 = &local_31;
      local_50 = param_1[2];
      local_60 = &local_78;
      local_58 = &DAT_002190f0;
      local_78 = uVar1;
      local_70 = lVar2;
      cVar4 = (**(code **)(local_48 + 0x18))();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(local_58 + 0x18))();
        goto joined_r0x0020b153;
      }
    }
  }
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_0020b157:
  return uVar6 & 0xffffffff;
}


