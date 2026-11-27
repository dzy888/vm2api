// 00756fc0 read

/* <std[6c98fd8553dbae28]::process::ChildStderr as std[6c98fd8553dbae28]::io::Read>::read
   <std[6c98fd8553dbae28]::sys::fs::unix::File>::read
   <std[6c98fd8553dbae28]::io::pipe::PipeReader as std[6c98fd8553dbae28]::io::Read>::read
   <std[6c98fd8553dbae28]::process::ChildStdout as std[6c98fd8553dbae28]::io::Read>::read */

bool __rustcall
<std[6c98fd8553dbae28]::process::ChildStderr_as_std[6c98fd8553dbae28]::io::Read>::read(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_read_00799e98)();
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_007990a0)(),
     *(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return lVar1 == -1;
}


