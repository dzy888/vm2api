// 0073f3e0 set_nodelay

/* <std[6c98fd8553dbae28]::net::tcp::TcpStream>::set_nodelay */

ulonglong __rustcall <std[6c98fd8553dbae28]::net::tcp::TcpStream>::set_nodelay(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_14 [4];
  
  iVar1 = (*(code *)PTR_setsockopt_0079aa48)(local_14,1,4);
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


