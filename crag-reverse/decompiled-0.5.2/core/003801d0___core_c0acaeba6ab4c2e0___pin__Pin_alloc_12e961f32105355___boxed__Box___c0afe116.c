// 003801d0 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>

/* tokio[d7d91d38da47d894]::runtime::task::raw::drop_join_handle_slow::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::drop_join_handle_slow::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::_closure_0_>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
          (longlong param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 auStack_40 [8];
  
  uVar2 = (*(code *)PTR_transition_to_join_handle_dropped_00799fb8)();
  if ((param_3 & 1) != 0) {
    auStack_40[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_40);
  }
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR_set_waker_00799fc0)();
  }
  cVar1 = (*(code *)PTR_ref_dec_00799640)();
  if (cVar1 == '\0') {
    return;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::_closure_0_>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
            (param_1);
  return;
}


