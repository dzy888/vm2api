// 006f8200 <mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>
    */

ulonglong * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::
<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
          longlong *param_5,undefined8 param_6)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  
  plVar2 = param_5 + 0x67;
  if ((param_4 & 1) == 0) {
    plVar2 = param_5 + 0x48;
  }
  if (*(int *)((longlong)plVar2 + 0x44) == -1) {
    (*(code *)PTR_expect_failed_00799440)((char)param_4,param_6);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  auVar3 = <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::add_source::
           <mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>(plVar2);
  if (auVar3._0_8_ != 1) {
    *param_1 = param_4;
    param_1[1] = (ulonglong)param_5;
    param_1[2] = auVar3._8_8_;
    return param_1;
  }
  param_1[1] = auVar3._8_8_;
  *param_1 = 2;
  if ((char)param_4 == '\0') {
    LOCK();
    *param_5 = *param_5 + -1;
    UNLOCK();
    if (*param_5 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
      return param_1;
    }
  }
  else {
    LOCK();
    *param_5 = *param_5 + -1;
    UNLOCK();
    if (*param_5 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  return param_1;
}


