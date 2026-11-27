// 001e4f50 duration_since

/* <std[6c98fd8553dbae28]::time::SystemTime>::duration_since */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::time::SystemTime>::duration_since
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = param_3;
  local_18 = param_4;
  <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::sub_timespec(&local_38,param_2,&local_20)
  ;
  *(undefined4 *)(param_1 + 2) = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_30;
  return param_1;
}


