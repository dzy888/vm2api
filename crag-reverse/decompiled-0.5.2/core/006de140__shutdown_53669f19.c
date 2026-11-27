// 006de140 shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::shutdown(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined **extraout_RDX;
  undefined **ppuVar4;
  ulonglong *unaff_RBX;
  ulonglong *unaff_R14;
  undefined4 local_90 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined4 local_50 [16];
  
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
    local_50[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(unaff_RBX,local_50);
    local_78 = 0;
    ppuVar4 = extraout_RDX;
  }
  else {
    LOCK();
    uVar3 = *param_1;
    *param_1 = *param_1 - 0x40;
    UNLOCK();
    if (uVar3 >> 6 == 1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
                ();
      return;
    }
    if (uVar3 >> 6 != 0) {
      return;
    }
    ppuVar4 = &anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065;
    (*(code *)PTR_panic_00799338)();
    local_78 = (*(code *)PTR_cleanup_00799c40)();
    param_1 = unaff_R14;
  }
  local_80 = param_1[6];
  local_88 = 0xffffffffffffffff;
  local_90[0] = 1;
  local_70 = ppuVar4;
  <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
  ::set_stage(unaff_RBX,local_90);
  complete(param_1);
  return;
}


