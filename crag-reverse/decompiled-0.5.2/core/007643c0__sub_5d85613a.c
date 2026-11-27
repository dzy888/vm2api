// 007643c0 sub

/* <std[6c98fd8553dbae28]::time::Instant as core[c0acaeba6ab4c2e0]::ops::arith::Sub>::sub */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::time::Instant_as_core[c0acaeba6ab4c2e0]::ops::arith::Sub>::sub
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  char local_40 [8];
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = param_3;
  local_20 = param_4;
  local_18 = param_1;
  local_10 = param_2;
  <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::sub_timespec
            (local_40,&local_18,&local_28);
  uVar1 = (ulonglong)local_30;
  if (local_40[0] != '\0') {
    uVar1 = 0;
    local_38 = 0;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = local_38;
  return auVar2;
}


