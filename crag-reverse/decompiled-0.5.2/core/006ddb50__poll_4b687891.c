// 006ddb50 poll

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar4;
  char cVar5;
  ulonglong *unaff_R14;
  bool bVar6;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  ulonglong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  undefined **local_30;
  undefined8 local_28;
  
  uVar2 = *param_1;
  do {
    while( true ) {
      if ((uVar2 & 4) == 0) {
        (*(code *)PTR_panic_00799338)
                  (param_4,&anon_c153c4d816f71af2accb98944a80e600_21_llvm_2617760850115737065);
        goto LAB_006dddf1;
      }
      if ((uVar2 & 3) == 0) break;
      if (uVar2 < 0x40) goto LAB_006dddf1;
      param_4 = uVar2 - 0x40;
      uVar3 = (ulonglong)(param_4 < 0x40) | 2;
      LOCK();
      uVar1 = *param_1;
      bVar6 = uVar2 == uVar1;
      if (bVar6) {
        *param_1 = param_4;
      }
      else {
        uVar2 = uVar1;
      }
      UNLOCK();
      if (bVar6) goto LAB_006ddbb4;
    }
    param_4 = (uVar2 & 0xfffffffffffffff8) + 1;
    uVar3 = uVar2 >> 5 & 1;
    LOCK();
    uVar1 = *param_1;
    bVar6 = uVar2 == uVar1;
    if (bVar6) {
      *param_1 = param_4;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_006ddbb4:
  switch(uVar3) {
  case 0:
    local_68 = PTR_WAKER_VTABLE_00799fd0;
    unaff_R14 = param_1 + 4;
    local_38 = &local_68;
    local_28 = 0;
    local_60 = param_1;
    local_30 = local_38;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::poll(&local_e8,unaff_R14,&local_38);
    local_58 = local_c0;
    uStack_54 = uStack_bc;
    uStack_50 = uStack_b8;
    uStack_4c = uStack_b4;
    if (local_e8 == 0xffffffffffffffff) {
      uVar2 = *param_1;
      do {
        if ((uVar2 & 1) == 0) goto LAB_006dde0a;
        if ((uVar2 & 0x20) != 0) {
          cVar5 = '\x03';
          local_a8 = 0;
          break;
        }
        if ((uVar2 & 4) == 0) {
          if (uVar2 < 0x40) goto LAB_006dddf1;
          local_e8 = (uVar2 & 0xffffffffffffffde) - 0x40;
          cVar5 = (local_e8 < 0x40) * '\x02';
        }
        else {
          if ((longlong)uVar2 < 0) goto LAB_006dde23;
          local_e8 = (uVar2 & 0xffffffffffffffde) + 0x40;
          cVar5 = '\x01';
        }
        local_a8 = 1;
        LOCK();
        uVar1 = *param_1;
        bVar6 = uVar2 == uVar1;
        if (bVar6) {
          *param_1 = local_e8;
        }
        else {
          uVar2 = uVar1;
        }
        UNLOCK();
      } while (!bVar6);
      switch(cVar5) {
      case '\0':
        goto switchD_006ddbc5_caseD_2;
      case '\x01':
        goto switchD_006ddda7_caseD_1;
      case '\x03':
        local_a8 = 2;
        <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
        ::set_stage(unaff_R14,&local_a8);
        uVar4 = extraout_RDX_00;
        goto LAB_006ddcb5;
      }
      goto switchD_006ddbc5_caseD_3;
    }
    if (local_e8 == 0xfffffffffffffffe) {
      uStack_80 = 0;
      local_98 = param_1[6];
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_48 = local_c0;
      uStack_44 = uStack_bc;
      uStack_40 = uStack_b8;
      uStack_3c = uStack_b4;
      local_98 = local_e0;
      local_a0 = local_e8;
      uStack_80 = uStack_c8;
    }
    local_78 = CONCAT44(uStack_44,local_48);
    uStack_70 = CONCAT44(uStack_3c,uStack_40);
    local_a8 = CONCAT44(local_a8._4_4_,1);
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(unaff_R14,&local_a8);
    break;
  case 1:
    local_a8 = CONCAT44(local_a8._4_4_,2);
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 4,&local_a8);
    uVar4 = extraout_RDX;
LAB_006ddcb5:
    unaff_R14 = param_1 + 4;
    local_d0 = 0;
    goto LAB_006ddcb7;
  case 2:
    goto switchD_006ddbc5_caseD_2;
  case 3:
switchD_006ddbc5_caseD_3:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
              (param_1);
    goto switchD_006ddbc5_caseD_2;
  }
  goto LAB_006ddce5;
LAB_006dddf1:
  local_d0 = (*(code *)PTR_panic_00799338)();
LAB_006dde0a:
  local_d0 = (*(code *)PTR_panic_00799338)
                       (local_d0,&anon_c153c4d816f71af2accb98944a80e600_19_llvm_2617760850115737065)
  ;
LAB_006dde23:
  (*(code *)PTR_panic_00799338)
            (local_d0,&anon_c153c4d816f71af2accb98944a80e600_61_llvm_2617760850115737065);
switchD_006ddda7_caseD_1:
  <tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule_as_tokio[d7d91d38da47d894]::runtime::task::Schedule>
  ::yield_now(unaff_R14,param_1);
  uVar4 = extraout_RDX_01;
  local_d0 = (*(code *)PTR_cleanup_00799c40)();
LAB_006ddcb7:
  local_d8 = param_1[6];
  local_e0 = 0xffffffffffffffff;
  local_e8 = CONCAT44(local_e8._4_4_,1);
  uStack_c8 = uVar4;
  <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
  ::set_stage(unaff_R14,&local_e8);
LAB_006ddce5:
  complete(param_1);
switchD_006ddbc5_caseD_2:
  return;
}


