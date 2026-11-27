// 00492e20 <u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>

/* <[(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key::<u64,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}> */

void __rustcall
<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
::sort_by_key::
<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>
          (undefined8 param_1,ulonglong param_2)

{
  undefined1 local_9;
  undefined1 *local_8;
  
  local_8 = &local_9;
  if (param_2 < 2) {
    return;
  }
  if (param_2 < 0x15) {
    core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
    <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
              (param_1,param_2,1,&local_8);
    return;
  }
  core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
  <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
            (param_1,param_2,&local_8);
  return;
}


