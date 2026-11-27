// 00778880 debug_struct_fields_finish

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_fields_finish */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::debug_struct_fields_finish
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,longlong param_5,
          longlong param_6,longlong param_7)

{
  code *pcVar1;
  undefined *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_40;
  byte local_38;
  byte local_37;
  
  local_40 = param_7;
  if (param_5 != param_7) {
    (*(code *)PTR_<usize,usize>_00799710)
              (0,&local_40,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798428);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))();
  puVar2 = PTR_field_0079a400;
  local_38 = (byte)uVar3;
  local_37 = 0;
  if (param_5 != 0) {
    lVar5 = 0;
    local_40 = param_1;
    do {
      (*(code *)puVar2)(param_6 + lVar5,*(undefined8 *)(param_4 + 8 + lVar5),&DAT_00798408);
      lVar5 = lVar5 + 0x10;
    } while (param_5 * 0x10 != lVar5);
    if (((~local_37 | local_38) & 1) == 0) {
      if ((*(byte *)(local_40 + 0x12) & 0x80) == 0) {
        lVar5 = *(longlong *)(local_40 + 8);
        uVar4 = 2;
      }
      else {
        lVar5 = *(longlong *)(local_40 + 8);
        uVar4 = 1;
      }
      uVar3 = (**(code **)(lVar5 + 0x18))(local_38,uVar4);
    }
    else {
      uVar3 = (ulonglong)(local_37 | local_38);
    }
  }
  return uVar3 & 0xffffffffffffff01;
}


