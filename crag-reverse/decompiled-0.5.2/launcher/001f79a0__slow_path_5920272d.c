// 001f79a0 slow_path

/* WARNING: Removing unreachable block (ram,0x001f7a54) */
/* <std[6c98fd8553dbae28]::sys::os_str::bytes::Slice>::try_check_public_boundary::slow_path */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sys::os_str::bytes::Slice>::try_check_public_boundary::slow_path
          (undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_48;
  longlong local_40;
  
  if (param_2 < param_3) {
    return 0;
  }
  uVar4 = 4;
  if (param_2 - param_3 < 4) {
    uVar4 = param_2 - param_3;
  }
  (*(code *)PTR_from_utf8_00219d78)(param_4,uVar4);
  puVar1 = PTR_from_utf8_00219d78;
  uVar2 = 1;
  if ((local_48 == 1) && (local_40 == 0)) {
    uVar4 = 4;
    if (param_3 < 4) {
      uVar4 = param_3;
    }
    if (param_3 < 2) {
      uVar2 = 0;
    }
    else {
      uVar5 = 2;
      do {
        (*(code *)puVar1)();
        uVar3 = uVar5 + (uVar5 < uVar4);
        uVar2 = 0;
        if (uVar4 <= uVar5) {
          return 0;
        }
        uVar5 = uVar3;
      } while (uVar3 <= uVar4);
    }
  }
  return uVar2;
}


