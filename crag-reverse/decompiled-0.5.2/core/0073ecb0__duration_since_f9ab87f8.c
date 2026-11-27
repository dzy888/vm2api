// 0073ecb0 duration_since

/* <std[6c98fd8553dbae28]::time::Instant>::duration_since
   <std[6c98fd8553dbae28]::time::Instant>::saturating_duration_since */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::time::Instant>::duration_since
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  char local_30 [8];
  undefined8 local_28;
  uint local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::sub_timespec(local_30,param_1,&local_18);
  uVar1 = (ulonglong)local_20;
  if (local_30[0] != '\0') {
    uVar1 = 0;
    local_28 = 0;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = local_28;
  return auVar2;
}


