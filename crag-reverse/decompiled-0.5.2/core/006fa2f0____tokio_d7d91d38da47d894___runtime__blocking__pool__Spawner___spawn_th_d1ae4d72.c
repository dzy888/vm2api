// 006fa2f0 <<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},()>

/* std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},
   ()> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_,()>
          (undefined4 param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  longlong *in_FS_OFFSET;
  longlong local_30;
  longlong *in_stack_ffffffffffffffd8;
  
  lVar4 = *in_FS_OFFSET;
  cVar1 = *(char *)(lVar4 + -0xf0);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') goto LAB_006fa437;
    param_1 = (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar4 + -0xf0) = 0;
  }
  param_1 = (*(code *)PTR_set_current_007996c0)(param_1,param_2);
  if (local_30 != -1) {
    lVar4 = 0x238;
    if (*param_2 != '\0') {
      lVar4 = 0x330;
    }
    <tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>::run
              (*(longlong *)(*(longlong *)(param_2 + 8) + lVar4) + 0x10,
               *(undefined8 *)(param_2 + 0x18));
    plVar2 = *(longlong **)(param_2 + 0x10);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_0079a798)();
    }
    <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
    ::with::
    <<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,()>
              ();
    if (local_30 != 2) {
      if (local_30 == 0) {
        LOCK();
        *in_stack_ffffffffffffffd8 = *in_stack_ffffffffffffffd8 + -1;
        UNLOCK();
        if (*in_stack_ffffffffffffffd8 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        LOCK();
        *in_stack_ffffffffffffffd8 = *in_stack_ffffffffffffffd8 + -1;
        UNLOCK();
        if (*in_stack_ffffffffffffffd8 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
    }
    if (*param_2 == '\0') {
      plVar2 = *(longlong **)(param_2 + 8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar2 = *(longlong **)(param_2 + 8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    return;
  }
LAB_006fa437:
  (*(code *)PTR_panic_fmt_007991a8)
            (param_1,&anon_1c7207ea9655bfcf55d918eab6d9918c_27_llvm_17559541839288726608,in_R8,in_R9
             ,<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


