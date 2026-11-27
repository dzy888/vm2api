// 0074c2a0 try_wait

/* <std[6c98fd8553dbae28]::process::Child>::try_wait */

undefined4 * __rustcall
<std[6c98fd8553dbae28]::process::Child>::try_wait
          (undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  
  if (*param_2 == 1) {
    local_28 = param_2[1];
    local_2c = 1;
  }
  else if (param_2[3] == -1) {
    local_30 = 0;
    iVar2 = (*(code *)PTR_waitpid_00799128)(param_4,1);
    if (iVar2 == 0) {
      piVar3 = &local_1c;
      local_30 = 0;
    }
    else {
      if (iVar2 == -1) {
        piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
        iVar2 = *piVar3;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        uVar4 = (longlong)iVar2 << 0x20 | 2;
        goto LAB_0074c338;
      }
      *param_2 = 1;
      param_2[1] = local_30;
      local_1c = 1;
      piVar3 = &local_20;
    }
    *piVar3 = local_30;
    local_28 = local_20;
    local_2c = local_1c;
  }
  else {
    <std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::waitid(&local_30,param_2[3],5);
    if ((char)local_30 != '\0') {
      uVar4 = CONCAT44(uStack_24,local_28);
LAB_0074c338:
      *(ulonglong *)(param_1 + 2) = uVar4;
      uVar1 = 1;
      goto LAB_0074c341;
    }
    if (local_2c == 1) {
      *param_2 = 1;
      param_2[1] = local_28;
    }
  }
  param_1[1] = local_2c;
  param_1[2] = local_28;
  uVar1 = 0;
LAB_0074c341:
  *param_1 = uVar1;
  return param_1;
}


