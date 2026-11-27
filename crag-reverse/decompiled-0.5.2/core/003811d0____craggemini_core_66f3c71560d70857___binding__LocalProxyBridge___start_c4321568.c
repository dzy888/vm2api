// 003811d0 <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>

/* WARNING: Switch with 1 destination removed at 0x0038123d */
/* tokio[d7d91d38da47d894]::runtime::task::raw::dealloc::<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::dealloc::
<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799078)();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_::_closure_0_>>
            (param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x1608) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x1608) + 0x18))();
  }
  plVar1 = *(longlong **)(param_1 + 0x1618);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  (*(code *)PTR_free_0079adc8)(param_4,0x80);
  return;
}


