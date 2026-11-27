// 00701f60 set_nodelay

/* WARNING: Switch with 1 destination removed at 0x00701f6e */
/* WARNING: Switch with 1 destination removed at 0x007104c0 */
/* <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::set_nodelay */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::set_nodelay
          (longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uStack_18 = (ulonglong)CONCAT14(param_2,in_EAX);
  iVar2 = (*(code *)PTR_setsockopt_0079aa48)((longlong)&uStack_18 + 4,1,4);
  if (iVar2 != -1) {
    return 0;
  }
  piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar2 = *piVar4;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return (longlong)iVar2 << 0x20 | 2;
}


