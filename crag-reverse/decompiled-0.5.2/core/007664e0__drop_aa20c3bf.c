// 007664e0 drop

/* <std[6c98fd8553dbae28]::sys::fs::unix::DirStream as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sys::fs::unix::DirStream_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (void)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 in_RCX;
  ulonglong *local_40;
  undefined *local_38;
  ulonglong local_30;
  
  (*(code *)PTR_dirfd_0079afa8)();
  iVar4 = (*(code *)PTR_closedir_0079b170)();
  if (iVar4 != 0) {
    piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
    puVar2 = PTR_OS_FUNCTIONS_007990a8;
    iVar4 = *piVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    local_40 = (ulonglong *)((longlong)iVar4 << 0x20 | 2);
    lVar6 = (*(code *)PTR_get_os_functions_007992e0)();
    cVar3 = (**(code **)(lVar6 + 0x10))();
    if (cVar3 == '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>(&local_40);
      iVar4 = *piVar5;
      if (*(undefined ***)puVar2 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      local_30 = (longlong)iVar4 << 0x20 | 2;
      local_40 = &local_30;
      local_38 = PTR_fmt_007994c0;
      (*(code *)PTR_panic_fmt_007991a8)(in_RCX,&PTR_s__rustc_48a229ceaefd4985c50990b14_00797360);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}


