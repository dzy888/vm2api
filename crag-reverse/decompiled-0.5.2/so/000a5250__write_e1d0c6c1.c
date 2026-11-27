// 000a5250 write

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write */

bool __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_write_000c3be8)();
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_000c3cf0)(),
     *(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600)) {
    (*(code *)PTR_set_functions_inner_000c3d08)();
  }
  return lVar1 == -1;
}


