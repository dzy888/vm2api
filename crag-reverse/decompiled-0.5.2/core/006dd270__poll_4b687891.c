// 006dd270 poll

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar5;
  char cVar6;
  ulonglong *unaff_R14;
  bool bVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  ulonglong *local_40;
  undefined **local_38;
  undefined **local_30;
  undefined8 local_28;
  
  uVar3 = *param_1;
  do {
    while( true ) {
      if ((uVar3 & 4) == 0) {
        (*(code *)PTR_panic_00799338)
                  (param_4,&anon_c153c4d816f71af2accb98944a80e600_21_llvm_2617760850115737065);
        goto LAB_006dd498;
      }
      if ((uVar3 & 3) == 0) break;
      if (uVar3 < 0x40) goto LAB_006dd498;
      param_4 = uVar3 - 0x40;
      uVar4 = (ulonglong)(param_4 < 0x40) | 2;
      LOCK();
      uVar1 = *param_1;
      bVar7 = uVar3 == uVar1;
      if (bVar7) {
        *param_1 = param_4;
      }
      else {
        uVar3 = uVar1;
      }
      UNLOCK();
      if (bVar7) goto LAB_006dd2d4;
    }
    param_4 = (uVar3 & 0xfffffffffffffff8) + 1;
    uVar4 = uVar3 >> 5 & 1;
    LOCK();
    uVar1 = *param_1;
    bVar7 = uVar3 == uVar1;
    if (bVar7) {
      *param_1 = param_4;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar7);
LAB_006dd2d4:
  switch(uVar4) {
  case 0:
    local_48 = PTR_WAKER_VTABLE_00799fd0;
    unaff_R14 = param_1 + 4;
    local_38 = &local_48;
    local_28 = 0;
    local_40 = param_1;
    local_30 = local_38;
    bVar2 = <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
            ::poll(unaff_R14);
    if ((bVar2 & 1) != 0) {
      uVar3 = *param_1;
      do {
        if ((uVar3 & 1) == 0) goto LAB_006dd4b1;
        if ((uVar3 & 0x20) != 0) {
          cVar6 = '\x03';
          local_88 = 0;
          break;
        }
        if ((uVar3 & 4) == 0) {
          if (uVar3 < 0x40) goto LAB_006dd498;
          local_68 = (uVar3 & 0xffffffffffffffde) - 0x40;
          cVar6 = (local_68 < 0x40) * '\x02';
        }
        else {
          if ((longlong)uVar3 < 0) goto LAB_006dd4ca;
          local_68 = (uVar3 & 0xffffffffffffffde) + 0x40;
          cVar6 = '\x01';
        }
        local_88 = 1;
        LOCK();
        uVar1 = *param_1;
        bVar7 = uVar3 == uVar1;
        if (bVar7) {
          *param_1 = local_68;
        }
        else {
          uVar3 = uVar1;
        }
        UNLOCK();
      } while (!bVar7);
      switch(cVar6) {
      case '\0':
        goto switchD_006dd2e5_caseD_2;
      case '\x01':
        goto switchD_006dd3e6_caseD_1;
      case '\x03':
        local_88 = 2;
        <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
        ::set_stage(unaff_R14,&local_88);
        uVar5 = extraout_RDX_00;
        goto LAB_006dd408;
      }
      goto switchD_006dd2e5_caseD_3;
    }
    local_80 = 0;
    local_78 = 0;
    local_88 = CONCAT44(local_88._4_4_,1);
    local_70 = (ulonglong)bVar2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(unaff_R14,&local_88);
    break;
  case 1:
    local_88 = CONCAT44(local_88._4_4_,2);
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 4,&local_88);
    uVar5 = extraout_RDX;
LAB_006dd408:
    unaff_R14 = param_1 + 4;
    local_58 = 0;
    goto LAB_006dd40a;
  case 2:
    goto switchD_006dd2e5_caseD_2;
  case 3:
switchD_006dd2e5_caseD_3:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
              (param_1);
    goto switchD_006dd2e5_caseD_2;
  }
  goto LAB_006dd459;
LAB_006dd498:
  (*(code *)PTR_panic_00799338)();
LAB_006dd4b1:
  (*(code *)PTR_panic_00799338)();
LAB_006dd4ca:
  (*(code *)PTR_panic_00799338)();
switchD_006dd3e6_caseD_1:
  <tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule_as_tokio[d7d91d38da47d894]::runtime::task::Schedule>
  ::yield_now(unaff_R14,param_1);
  uVar5 = extraout_RDX_01;
  local_58 = (*(code *)PTR_cleanup_00799c40)();
LAB_006dd40a:
  local_60 = param_1[6];
  local_68 = CONCAT44(local_68._4_4_,1);
  local_50 = uVar5;
  <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
  ::set_stage(unaff_R14,&local_68);
LAB_006dd459:
  complete(param_1);
switchD_006dd2e5_caseD_2:
  return;
}


