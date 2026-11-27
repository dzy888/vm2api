// 006f6180 local_addr

/* <tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::local_addr */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::local_addr
          (undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x18) == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  (*(code *)PTR_local_addr_0079a930)();
  return param_1;
}


