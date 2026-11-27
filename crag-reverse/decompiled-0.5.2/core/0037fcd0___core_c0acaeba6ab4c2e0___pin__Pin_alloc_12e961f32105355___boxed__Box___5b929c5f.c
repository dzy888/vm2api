// 0037fcd0 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>

/* tokio[d7d91d38da47d894]::runtime::task::raw::drop_abort_handle::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::drop_abort_handle::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
          (undefined8 param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)PTR_ref_dec_00799640)();
  if (cVar1 == '\0') {
    return;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_::_closure_3_>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
            (param_1);
  return;
}


