// 003979b0 <<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>::spawn::<<craggemini_core[66f3c71560d70857]::guard::GuardHandle
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}> */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>::spawn::
<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = <tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
          ::new(param_2,plVar1,0xcc,param_3);
  lVar4 = <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
          ::bind_inner(plVar1 + 0x27,uVar3,uVar3);
  (*(code *)PTR_spawn_007997b8)();
  if (lVar4 != 0) {
    (*(code *)PTR_schedule_00799698)();
  }
  return uVar3;
}


