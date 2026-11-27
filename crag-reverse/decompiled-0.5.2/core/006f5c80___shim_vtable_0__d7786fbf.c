// 006f5c80 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},
   ()>::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

void __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},()>::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  (*(code *)
    PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_,()>::_closure_1_::_closure_0_::_closure_0_,()>_0079a910
  )();
  uVar4 = (*(code *)
            PTR_<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_,()>_0079a918
          )();
  plVar2 = *(longlong **)(param_1 + 0x40);
  if ((plVar2[3] != 0) && (plVar2[4] != 0)) {
    puVar3 = (undefined8 *)plVar2[5];
    if ((code *)*puVar3 != (code *)0x0) {
      uVar4 = (*(code *)*puVar3)();
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,puVar3[2]);
    }
  }
  plVar2[3] = 1;
  plVar2[4] = 0;
  plVar2[5] = lVar1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_00799c58)();
  }
  return;
}


