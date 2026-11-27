// 001f8930 read_buf

/* <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream as
   std[6c98fd8553dbae28]::io::Read>::read_buf */

ulonglong __rustcall
<std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream_as_std[6c98fd8553dbae28]::io::Read>::
read_buf(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar3 = (*(code *)PTR_recv_0021a8e8)(0,*(longlong *)(param_2 + 8) - lVar2);
  if (lVar3 != -1) {
    *(longlong *)(param_2 + 0x10) = lVar3 + lVar2;
    return 0;
  }
  piVar4 = (int *)(*(code *)PTR___errno_location_00219f18)();
  iVar1 = *piVar4;
  if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
    (*(code *)PTR_set_functions_inner_00219f28)();
  }
  return (longlong)iVar1 << 0x20 | 2;
}


