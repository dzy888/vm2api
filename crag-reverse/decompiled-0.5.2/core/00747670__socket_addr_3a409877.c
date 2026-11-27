// 00747670 socket_addr

/* WARNING: Removing unreachable block (ram,0x007476e6) */
/* WARNING: Removing unreachable block (ram,0x007477b8) */
/* WARNING: Removing unreachable block (ram,0x007476ef) */
/* WARNING: Removing unreachable block (ram,0x0074773e) */
/* WARNING: Removing unreachable block (ram,0x007477d1) */
/* WARNING: Removing unreachable block (ram,0x00747747) */
/* <std[6c98fd8553dbae28]::sys::net::connection::socket::TcpStream>::socket_addr */

void __rustcall
<std[6c98fd8553dbae28]::sys::net::connection::socket::TcpStream>::socket_addr(undefined2 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 local_1c;
  
  local_1c = 0x80;
  iVar1 = (*(code *)PTR_getsockname_0079aa58)(0,&local_1c,in_R8,in_R9,0,0,0,0,0,0,0,0,0,0,0,0);
  if (iVar1 == -1) {
    piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 4) = (longlong)iVar1 << 0x20 | 2;
  }
  else {
    *(undefined ***)(param_1 + 4) = &PTR_DAT_00797088;
  }
  *param_1 = 2;
  return;
}


