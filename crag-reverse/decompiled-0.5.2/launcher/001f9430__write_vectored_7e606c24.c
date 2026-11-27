// 001f9430 write_vectored

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as
   std[6c98fd8553dbae28]::io::Write>::write_vectored */

bool __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
write_vectored(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  lVar1 = (*(code *)PTR_writev_0021a8f8)(param_4,param_3);
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_00219f18)(),
     *(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8)) {
    (*(code *)PTR_set_functions_inner_00219f28)();
  }
  return lVar1 == -1;
}


