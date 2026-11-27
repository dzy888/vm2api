// 006ffa80 <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* tokio[d7d91d38da47d894]::runtime::task::raw::drop_join_handle_slow::<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::drop_join_handle_slow::
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
          (ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 auStack_40 [8];
  
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    if ((uVar2 & 8) == 0) {
      (*(code *)PTR_panic_00799338)
                (uVar2,&anon_c153c4d816f71af2accb98944a80e600_25_llvm_2617760850115737065);
      param_1[0xd] = 0;
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    uVar4 = 0xfffffffffffffff7;
    if ((uVar2 & 2) == 0) {
      uVar4 = 0xffffffffffffffe5;
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar4 & uVar2;
      uVar3 = uVar2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  if ((uVar2 & 2) != 0) {
    auStack_40[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 4,auStack_40);
  }
  if ((uVar4 & uVar2 & 0x10) == 0) {
    if (param_1[0xd] != 0) {
      (**(code **)(param_1[0xd] + 0x18))();
    }
    param_1[0xd] = 0;
  }
  LOCK();
  uVar3 = *param_1;
  *param_1 = *param_1 - 0x40;
  UNLOCK();
  if (uVar3 >> 6 != 1) {
    if (uVar3 >> 6 != 0) {
      return;
    }
    (*(code *)PTR_panic_00799338)();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
            (param_1);
  return;
}


