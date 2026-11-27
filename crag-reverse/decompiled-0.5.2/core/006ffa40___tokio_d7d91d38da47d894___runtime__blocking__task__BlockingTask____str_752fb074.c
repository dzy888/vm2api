// 006ffa40 <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* WARNING: Switch with 1 destination removed at 0x006dcd5b */
/* tokio[d7d91d38da47d894]::runtime::task::raw::drop_abort_handle::<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::drop_abort_handle::
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 0x40;
  UNLOCK();
  if (uVar1 >> 6 == 1) {
    plVar2 = (longlong *)param_1[4];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799678)();
      }
    }
    if ((int)param_1[7] == 1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
                (param_1 + 8);
    }
    else if ((((int)param_1[7] == 0) && (param_1[8] != 0xffffffffffffffff)) && (param_1[8] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[0xf] != 0) {
      (**(code **)(param_1[0xf] + 0x18))();
    }
    plVar2 = (longlong *)param_1[0x11];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799678)();
      }
    }
    (*(code *)PTR_free_0079adc8)(param_4,0x80);
    return;
  }
  if (uVar1 >> 6 == 0) {
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


