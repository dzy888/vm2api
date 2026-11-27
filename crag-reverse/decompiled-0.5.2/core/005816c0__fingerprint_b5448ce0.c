// 005816c0 fingerprint

/* <craggemini_core[66f3c71560d70857]::license::files::HostDir>::fingerprint */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::license::files::HostDir>::fingerprint
          (undefined1 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  int local_c8;
  uint local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_78;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = craggemini_core[66f3c71560d70857]::license::files::open_read_at(*param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR_metadata_00799b30)();
    if (local_c8 == 2) {
      if ((1 < (local_c0 & 3) - 2) && ((local_c0 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      param_1[1] = 3;
      uVar1 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 8) = local_a8;
      *(undefined4 *)(param_1 + 0xc) = uStack_a4;
      *(undefined4 *)(param_1 + 0x10) = uStack_a0;
      *(undefined4 *)(param_1 + 0x14) = uStack_9c;
      *(undefined8 *)(param_1 + 0x18) = local_78;
      *(undefined8 *)(param_1 + 0x20) = local_50;
      *(undefined8 *)(param_1 + 0x28) = uStack_48;
      *(undefined8 *)(param_1 + 0x30) = local_40;
      *(undefined8 *)(param_1 + 0x38) = uStack_38;
      uVar1 = 0;
    }
    *param_1 = uVar1;
    (*(code *)PTR_close_00799030)();
  }
  else {
    param_1[1] = (char)(uVar2 >> 8);
    *param_1 = 1;
  }
  return param_1;
}


