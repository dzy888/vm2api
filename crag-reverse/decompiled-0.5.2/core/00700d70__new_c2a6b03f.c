// 00700d70 new

/* <tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::new */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::new(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 extraout_XMM0_Da;
  
  if (param_2 != (longlong *)0x0) {
    LOCK();
    lVar2 = *param_2;
    *param_2 = *param_2 + 1;
    UNLOCK();
    if (*param_2 == 0 || SCARRY8(lVar2,1) != *param_2 < 0) goto LAB_00700e8c;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 != 0) {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x100);
    return lVar2;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00700e8c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


