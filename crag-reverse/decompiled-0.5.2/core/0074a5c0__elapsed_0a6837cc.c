// 0074a5c0 elapsed

/* <std[6c98fd8553dbae28]::time::SystemTime>::elapsed */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::time::SystemTime>::elapsed(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [12];
  
  local_28 = <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(0);
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::sub_timespec
            (&local_58,local_28,&local_38);
  *(undefined4 *)(param_1 + 2) = local_48;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return param_1;
}


