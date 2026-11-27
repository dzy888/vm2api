// 001e07c0 file_name

/* <std[6c98fd8553dbae28]::path::Path>::file_name */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::path::Path>::file_name
          (undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  (*(code *)PTR_next_back_0021a718)();
  if (local_80 == -1) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  if (local_80 == '\t') {
    auVar3._8_8_ = local_70;
    auVar3._0_8_ = local_78;
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_70;
  return auVar2 << 0x40;
}


