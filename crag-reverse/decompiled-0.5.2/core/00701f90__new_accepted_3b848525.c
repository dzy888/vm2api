// 00701f90 new_accepted

/* <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::new_accepted */

longlong * __rustcall
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::new_accepted
          (longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  uVar2 = (*(code *)PTR_current_00799480)();
  local_34 = param_2;
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::
  <mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>
            (&local_30,&local_34,3,uVar2,param_3,
             &anon_ed01ef58651a73351ccd2244bf431f77_10_llvm_1588049147593173555);
  if (local_30 == 2) {
    (*(code *)PTR_close_00799030)();
    param_1[1] = local_28;
    *param_1 = 2;
  }
  else {
    uVar3 = *(ulonglong *)(local_20 + 0x90);
    do {
      if ((int)uVar3 < 0) break;
      LOCK();
      uVar1 = *(ulonglong *)(local_20 + 0x90);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(ulonglong *)(local_20 + 0x90) = uVar3 | 3;
      }
      else {
        uVar3 = uVar1;
      }
      UNLOCK();
    } while (!bVar4);
    *param_1 = local_30;
    param_1[1] = local_28;
    param_1[2] = local_20;
    *(undefined4 *)(param_1 + 3) = local_34;
  }
  return param_1;
}


