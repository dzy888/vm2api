// 000a51b0 write_vectored

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
  lVar1 = (*(code *)PTR_writev_000c42d8)(param_4,param_3);
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_000c3cf0)(),
     *(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600)) {
    (*(code *)PTR_set_functions_inner_000c3d08)();
  }
  return lVar1 == -1;
}


