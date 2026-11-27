// 001f94d0 write

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write */

bool __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_write_0021a900)();
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_00219f18)(),
     *(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8)) {
    (*(code *)PTR_set_functions_inner_00219f28)();
  }
  return lVar1 == -1;
}


