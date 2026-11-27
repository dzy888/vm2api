// 0008ec50 elapsed

/* <std[6c98fd8553dbae28]::time::Instant>::elapsed */

undefined1  [16] __rustcall <std[6c98fd8553dbae28]::time::Instant>::elapsed(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  char local_48 [8];
  undefined8 local_40;
  uint local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20 [12];
  
  local_20 = <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(1);
  local_30 = *param_1;
  local_28 = *(undefined4 *)(param_1 + 1);
  <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::sub_timespec(local_48,local_20,&local_30)
  ;
  uVar1 = (ulonglong)local_38;
  if (local_48[0] != '\0') {
    uVar1 = 0;
    local_40 = 0;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = local_40;
  return auVar2;
}


