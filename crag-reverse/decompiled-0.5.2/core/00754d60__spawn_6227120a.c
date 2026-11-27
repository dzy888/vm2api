// 00754d60 spawn

/* <std[6c98fd8553dbae28]::process::Command>::spawn */

uint * __rustcall <std[6c98fd8553dbae28]::process::Command>::spawn(uint *param_1,undefined8 param_2)

{
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  uint local_1c;
  
  <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::spawn(&local_38,param_2,0,1);
  if (local_38 != 1) {
    *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_30,local_34);
    *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_28,uStack_2c);
    *(undefined8 *)(param_1 + 5) = local_24;
    param_1[7] = local_1c;
  }
  else {
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_2c,uStack_30);
  }
  *param_1 = (uint)(local_38 == 1);
  return param_1;
}


