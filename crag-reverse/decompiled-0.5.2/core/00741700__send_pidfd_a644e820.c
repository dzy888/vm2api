// 00741700 send_pidfd

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::send_pidfd */

void __rustcall <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::send_pidfd(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_31;
  
  uVar8 = (*(code *)PTR_getpid_00799ef0)();
  uVar5 = (*(code *)PTR_syscall_00799e60)(uVar8,0);
  puVar3 = PTR_sendmsg_0079a258;
  puVar2 = PTR_get_os_functions_007992e0;
  uVar8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_78 = 1;
  local_70 = 0;
  puVar9 = (undefined8 *)0x0;
  uVar10 = 0;
  uVar11 = 0;
  if (-1 < (longlong)uVar5) {
    uVar10 = 0x18;
    puVar9 = &local_68;
    uStack_60 = 0x100000001;
    local_68 = 0x14;
    local_58 = uVar5 & 0xffffffff;
  }
  do {
    local_40 = (*(code *)puVar3)(uVar8,0x80,in_R8,in_R9,puVar9,uVar10,uVar11);
    if (local_40 != 0xffffffffffffffff) {
      if (local_40 == 0) {
        return;
      }
      local_48 = 0;
      goto LAB_00741844;
    }
    piVar6 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar6;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    lVar7 = (*(code *)puVar2)();
    cVar4 = (**(code **)(lVar7 + 0x10))();
    uVar8 = extraout_XMM0_Da;
  } while (cVar4 != '\0');
  local_40 = (longlong)iVar1 << 0x20 | 2;
  local_48 = 1;
LAB_00741844:
  local_88 = &local_48;
  local_80 = <core[c0acaeba6ab4c2e0]::result::Result<isize,core[c0acaeba6ab4c2e0]::io::error::Error>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
             ::fmt;
  uVar10 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
           write_fmt(&local_31,&DAT_00187c49,&local_88);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar10);
  (*(code *)PTR_abort_00799748)();
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<isize,core[c0acaeba6ab4c2e0]::io::error::Error>>
            (local_48,local_40);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


