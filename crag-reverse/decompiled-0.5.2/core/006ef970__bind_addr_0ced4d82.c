// 006ef970 bind_addr

/* <tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::bind_addr */

longlong * __rustcall
<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::bind_addr
          (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_34;
  int local_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong local_20;
  
  uVar2 = param_3;
  (*(code *)PTR_bind_addr_0079a878)();
  local_34 = uStack_2c;
  if (local_30 == 1) {
    param_1[1] = local_28;
    *param_1 = 2;
  }
  else {
    uVar1 = (*(code *)PTR_current_00799480)();
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle
    ::<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>
              (&local_30,&local_34,3,uVar1,uVar2,param_3);
    if (CONCAT44(uStack_2c,local_30) == 2) {
      (*(code *)PTR_close_00799030)();
      param_1[1] = local_28;
      *param_1 = 2;
    }
    else {
      param_1[2] = local_20;
      *(undefined4 *)(param_1 + 3) = local_34;
      *param_1 = CONCAT44(uStack_2c,local_30);
      param_1[1] = local_28;
    }
  }
  return param_1;
}


