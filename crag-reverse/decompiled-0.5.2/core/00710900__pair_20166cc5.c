// 00710900 pair

/* <mio[4b4dae02747c797f]::net::uds::stream::UnixStream>::pair */

uint * __rustcall <mio[4b4dae02747c797f]::net::uds::stream::UnixStream>::pair(uint *param_1)

{
  int local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  mio[4b4dae02747c797f]::sys::unix::uds::stream::pair(&local_18);
  if (local_18 != 1) {
    *(ulonglong *)(param_1 + 1) = CONCAT44(local_10,uStack_14);
  }
  else {
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_c,local_10);
  }
  *param_1 = (uint)(local_18 == 1);
  return param_1;
}


