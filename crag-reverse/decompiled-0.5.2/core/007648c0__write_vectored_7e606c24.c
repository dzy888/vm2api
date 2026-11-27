// 007648c0 write_vectored

/* <&std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream as
   std[6c98fd8553dbae28]::io::Write>::write_vectored
   <&std[6c98fd8553dbae28]::fs::File as std[6c98fd8553dbae28]::io::Write>::write_vectored */

bool __rustcall
<&std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream_as_std[6c98fd8553dbae28]::io::Write>::
write_vectored(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (0x3ff < param_3) {
    param_3 = 0x400;
  }
  lVar1 = (*(code *)PTR_writev_0079ade8)(param_4,param_3);
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_007990a0)(),
     *(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return lVar1 == -1;
}


