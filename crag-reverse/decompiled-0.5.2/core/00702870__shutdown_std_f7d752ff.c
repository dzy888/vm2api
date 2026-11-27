// 00702870 shutdown_std

/* <tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::shutdown_std */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::shutdown_std(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  uVar2 = (*(code *)PTR_shutdown_0079a9e0)();
  if (uVar2 != 0) {
    uVar4 = (uint)uVar2 & 3;
    switch(uVar4) {
    case 0:
      cVar1 = *(char *)(uVar2 + 0x10);
      break;
    case 1:
      cVar1 = *(char *)(uVar2 + 0x1f);
      break;
    case 2:
      lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar1 = (**(code **)(lVar3 + 8))();
      break;
    case 3:
      cVar1 = (char)(uVar2 >> 0x20);
    }
    if (cVar1 != '\a') {
      return uVar2;
    }
    if ((1 < uVar4 - 2) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return 0;
}


