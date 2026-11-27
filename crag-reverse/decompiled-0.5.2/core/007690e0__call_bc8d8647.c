// 007690e0 call

/* <std[6c98fd8553dbae28]::sys::fs::unix::unlink as
   core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>::call */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sys::fs::unix::unlink_as_core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>
::call(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)PTR_unlink_0079b048)();
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return (longlong)iVar1 << 0x20 | 2;
}


