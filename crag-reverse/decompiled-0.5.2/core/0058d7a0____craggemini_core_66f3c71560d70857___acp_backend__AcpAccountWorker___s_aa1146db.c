// 0058d7a0 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#10}>

/* <tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#10}>
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_10_>
          (int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*param_1 != 1) {
    uVar4 = <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>::spawn::
            <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_10_>
                      (param_1 + 2,param_2,param_3,
                       &anon_0acbc551f34e4a0bfb9a607189131925_1_llvm_9953415283177307294);
    return uVar4;
  }
  plVar2 = *(longlong **)(param_1 + 2);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar4 = <tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#10},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
          ::new(param_2,plVar2,0xcc,param_3);
  <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
  ::bind_inner(plVar2 + 0x3e,uVar4,uVar4);
  (*(code *)PTR_spawn_007997b8)();
  (*(code *)PTR_schedule_option_task_without_yield_00799fa0)();
  return uVar4;
}


