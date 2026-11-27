// 003afe20 <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,usize,usize,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::{closure#0},<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::{closure#0}>>::{closure#0}>::{closure#0}>

/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<usize,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,
   usize, usize,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::{closure#0}, <usize as
   core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::{closure#0}>>::{closure#0}>::{closure#0}>
    */

longlong __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,usize,usize,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::_closure_0_>>::_closure_0_>::_closure_0_>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != *(undefined8 **)(param_1 + 0x18)) {
    do {
      plVar1 = (longlong *)*puVar4;
      *(undefined8 **)(param_1 + 8) = puVar4 + 1;
      local_60 = plVar1;
      <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics(&local_58,plVar1 + 2);
      lVar3 = local_50;
      lVar2 = local_58;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(&local_60);
      }
      param_2 = param_2 + lVar2 + lVar3;
      puVar4 = *(undefined8 **)(param_1 + 8);
    } while (puVar4 != *(undefined8 **)(param_1 + 0x18));
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  return param_2;
}


