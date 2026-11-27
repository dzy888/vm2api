// 006de480 poll

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char cVar4;
  ulonglong *unaff_R14;
  bool bVar5;
  undefined8 uVar6;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 uStack_50;
  undefined *local_48;
  ulonglong *local_40;
  undefined **local_38;
  undefined **local_30;
  undefined8 local_28;
  
  uVar2 = *param_1;
  do {
    while( true ) {
      if ((uVar2 & 4) == 0) {
        (*(code *)PTR_panic_00799338)
                  (param_4,&anon_c153c4d816f71af2accb98944a80e600_21_llvm_2617760850115737065);
        goto LAB_006de6e9;
      }
      if ((uVar2 & 3) == 0) break;
      if (uVar2 < 0x40) goto LAB_006de6e9;
      param_4 = uVar2 - 0x40;
      uVar3 = (ulonglong)(param_4 < 0x40) | 2;
      LOCK();
      uVar1 = *param_1;
      bVar5 = uVar2 == uVar1;
      if (bVar5) {
        *param_1 = param_4;
      }
      else {
        uVar2 = uVar1;
      }
      UNLOCK();
      if (bVar5) goto LAB_006de4e4;
    }
    param_4 = (uVar2 & 0xfffffffffffffff8) + 1;
    uVar3 = uVar2 >> 5 & 1;
    LOCK();
    uVar1 = *param_1;
    bVar5 = uVar2 == uVar1;
    if (bVar5) {
      *param_1 = param_4;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
LAB_006de4e4:
  switch(uVar3) {
  case 0:
    local_48 = PTR_WAKER_VTABLE_00799fd0;
    unaff_R14 = param_1 + 4;
    local_38 = &local_48;
    local_28 = 0;
    local_40 = param_1;
    local_30 = local_38;
    uVar6 = <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
            ::poll(&local_a8,unaff_R14,&local_38);
    if (local_a8 == 0) {
      local_70 = 0;
      local_68 = local_a0;
      uStack_50 = uStack_88;
    }
    else {
      if (local_a8 != 2) {
        uVar2 = *param_1;
        do {
          if ((uVar2 & 1) == 0) goto LAB_006de702;
          if ((uVar2 & 0x20) != 0) {
            cVar4 = '\x03';
            local_78 = 0;
            break;
          }
          if ((uVar2 & 4) == 0) {
            if (uVar2 < 0x40) goto LAB_006de6e9;
            local_a8 = (uVar2 & 0xffffffffffffffde) - 0x40;
            cVar4 = (local_a8 < 0x40) * '\x02';
          }
          else {
            if ((longlong)uVar2 < 0) goto LAB_006de71b;
            local_a8 = (uVar2 & 0xffffffffffffffde) + 0x40;
            cVar4 = '\x01';
          }
          local_78 = 1;
          LOCK();
          uVar1 = *param_1;
          bVar5 = uVar2 == uVar1;
          if (bVar5) {
            *param_1 = local_a8;
          }
          else {
            uVar2 = uVar1;
          }
          UNLOCK();
        } while (!bVar5);
        switch(cVar4) {
        case '\0':
          goto switchD_006de4f5_caseD_2;
        case '\x01':
          goto switchD_006de617_caseD_1;
        case '\x03':
          local_78 = 2;
          <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
          ::set_stage(unaff_R14,&local_78);
          uVar6 = extraout_RDX_00;
          goto LAB_006de63f;
        }
        goto switchD_006de4f5_caseD_3;
      }
      local_70 = 1;
      local_68 = param_1[6];
      uStack_50 = 0;
    }
    local_78 = CONCAT44(local_78._4_4_,1);
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(unaff_R14,&local_78);
    break;
  case 1:
    local_78 = CONCAT44(local_78._4_4_,2);
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 4,&local_78);
    uVar6 = extraout_RDX;
LAB_006de63f:
    unaff_R14 = param_1 + 4;
    local_90 = 0;
    goto LAB_006de641;
  case 2:
    goto switchD_006de4f5_caseD_2;
  case 3:
switchD_006de4f5_caseD_3:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
              (param_1);
    goto switchD_006de4f5_caseD_2;
  }
  goto LAB_006de6a1;
LAB_006de6e9:
  uVar6 = (*(code *)PTR_panic_00799338)();
LAB_006de702:
  uVar6 = (*(code *)PTR_panic_00799338)
                    (uVar6,&anon_c153c4d816f71af2accb98944a80e600_19_llvm_2617760850115737065);
LAB_006de71b:
  (*(code *)PTR_panic_00799338)
            (uVar6,&anon_c153c4d816f71af2accb98944a80e600_61_llvm_2617760850115737065);
switchD_006de617_caseD_1:
  <tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule_as_tokio[d7d91d38da47d894]::runtime::task::Schedule>
  ::yield_now(unaff_R14,param_1);
  uVar6 = extraout_RDX_01;
  local_90 = (*(code *)PTR_cleanup_00799c40)();
LAB_006de641:
  local_98 = param_1[6];
  local_a0 = 1;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  uStack_88 = uVar6;
  <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
  ::set_stage(unaff_R14,&local_a8);
LAB_006de6a1:
  complete(param_1);
switchD_006de4f5_caseD_2:
  return;
}


