// 00751ed0 send_signal

/* <std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::send_signal */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::send_signal
          (char *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*param_1 != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == -1) {
    iVar1 = (*(code *)PTR_kill_00799120)(param_4,param_2);
    if (iVar1 != -1) {
      return 0;
    }
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    return (longlong)iVar1 << 0x20 | 2;
  }
  uVar2 = (*(code *)PTR_syscall_00799e60)(0,param_2,0);
  uVar5 = uVar2;
  if (uVar2 == 0xffffffffffffffff) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    uVar5 = (longlong)iVar1 << 0x20 | 2;
  }
  uVar4 = 0;
  if (uVar2 == 0xffffffffffffffff) {
    uVar4 = uVar5;
  }
  return uVar4;
}


