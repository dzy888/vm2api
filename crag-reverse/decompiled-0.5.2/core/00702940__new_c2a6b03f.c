// 00702940 new

/* <tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::new */

longlong * __rustcall
<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::new
          (longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  uVar1 = (*(code *)PTR_current_00799480)();
  local_3c = param_2;
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::
  <mio[4b4dae02747c797f]::net::uds::stream::UnixStream>
            (&local_38,&local_3c,3,uVar1,param_3,
             &anon_ed01ef58651a73351ccd2244bf431f77_16_llvm_1588049147593173555);
  if (local_38 == 2) {
    (*(code *)PTR_close_00799030)();
  }
  else {
    param_1[2] = local_28;
    *(undefined4 *)(param_1 + 3) = local_3c;
  }
  param_1[1] = local_30;
  *param_1 = local_38;
  return param_1;
}


