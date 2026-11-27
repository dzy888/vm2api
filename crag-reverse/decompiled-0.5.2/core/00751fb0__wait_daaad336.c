// 00751fb0 wait

/* <std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::wait */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::wait(undefined4 *param_1,int *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong unaff_R12;
  int local_40;
  char local_3c;
  int local_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_get_os_functions_007992e0;
  if (*param_2 == 1) {
    local_40 = param_2[1];
LAB_00751fd0:
    param_1[1] = local_40;
    *param_1 = 0;
  }
  else if (param_2[3] == -1) {
    local_40 = 0;
    do {
      iVar3 = (*(code *)PTR_waitpid_00799128)();
      if (iVar3 != -1) {
        *param_2 = 1;
        param_2[1] = local_40;
        goto LAB_00751fd0;
      }
      piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar3 = *piVar4;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      lVar5 = (*(code *)puVar1)();
      cVar2 = (**(code **)(lVar5 + 0x10))();
    } while (cVar2 != '\0');
    *(ulonglong *)(param_1 + 2) = (longlong)iVar3 << 0x20 | 2;
    *param_1 = 1;
  }
  else {
    <std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::waitid(&local_40,param_2[3],4);
    if ((char)local_40 == '\0') {
      if (local_3c == '\0') {
        (*(code *)PTR_panic_fmt_007991a8)();
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                  (1,unaff_R12 << 0x20 | 2);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      *param_2 = 1;
      param_2[1] = local_38;
      param_1[1] = local_38;
      *param_1 = 0;
    }
    else {
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_34,local_38);
      *param_1 = 1;
    }
  }
  return;
}


