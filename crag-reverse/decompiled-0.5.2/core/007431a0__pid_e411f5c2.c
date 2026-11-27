// 007431a0 pid

/* <std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::pid */

void __rustcall <std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::pid(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  int *local_38;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_80 = 1;
  iVar2 = (*(code *)PTR_ioctl_00799ed0)(0,&local_80);
  if (iVar2 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    puVar1 = PTR_OS_FUNCTIONS_007990a8;
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      local_38 = piVar3;
      (*(code *)PTR_set_functions_inner_007990c0)();
      piVar3 = local_38;
    }
    local_40 = (longlong)iVar2 << 0x20 | 2;
    if ((iVar2 == 0x16) || (iVar2 == 0x19)) {
      if (PTR_pidfd_getpid_0079aec8 == (undefined *)0x0) {
        *(ulonglong *)(param_1 + 2) = local_40;
      }
      else {
        iVar2 = (*(code *)PTR_pidfd_getpid_0079aec8)();
        if (iVar2 != -1) {
          param_1[1] = iVar2;
          *param_1 = 0;
          return;
        }
        iVar2 = *piVar3;
        if (*(undefined ***)puVar1 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        *(ulonglong *)(param_1 + 2) = (longlong)iVar2 << 0x20 | 2;
      }
      *param_1 = 1;
    }
    else {
      *(ulonglong *)(param_1 + 2) = local_40;
      *param_1 = 1;
    }
  }
  else {
    param_1[1] = (undefined4)uStack_70;
    *param_1 = 0;
  }
  return;
}


