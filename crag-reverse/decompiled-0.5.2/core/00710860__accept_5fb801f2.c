// 00710860 accept

/* <mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>::accept */

uint * __rustcall <mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>::accept(uint *param_1)

{
  int local_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  mio[4b4dae02747c797f]::sys::unix::tcp::accept(&local_30);
  if (local_30 != 1) {
    *(undefined8 *)(param_1 + 6) = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
    *(undefined8 *)(param_1 + 2) = local_28;
    *(undefined8 *)(param_1 + 4) = uStack_20;
    param_1[1] = local_2c;
  }
  else {
    *(undefined8 *)(param_1 + 2) = local_28;
  }
  *param_1 = (uint)(local_30 == 1);
  return param_1;
}


