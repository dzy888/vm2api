// 006dea40 shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::shutdown(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined **extraout_RDX;
  undefined **ppuVar4;
  ulonglong *unaff_RBX;
  ulonglong *unaff_R14;
  undefined4 local_70 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined4 local_40 [12];
  
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = (uVar2 & 3) == 0 | uVar2 | 0x20;
      uVar3 = uVar2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  if ((uVar2 & 3) == 0) {
    unaff_RBX = param_1 + 4;
    local_40[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(unaff_RBX,local_40);
    local_58 = 0;
    ppuVar4 = extraout_RDX;
  }
  else {
    LOCK();
    uVar3 = *param_1;
    *param_1 = *param_1 - 0x40;
    UNLOCK();
    if (uVar3 >> 6 == 1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
                ();
      return;
    }
    if (uVar3 >> 6 != 0) {
      return;
    }
    ppuVar4 = &anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065;
    (*(code *)PTR_panic_00799338)();
    local_58 = (*(code *)PTR_cleanup_00799c40)();
    param_1 = unaff_R14;
  }
  local_60 = param_1[6];
  local_68 = 1;
  local_70[0] = 1;
  local_50 = ppuVar4;
  <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
  ::set_stage(unaff_RBX,local_70);
  complete(param_1);
  return;
}


