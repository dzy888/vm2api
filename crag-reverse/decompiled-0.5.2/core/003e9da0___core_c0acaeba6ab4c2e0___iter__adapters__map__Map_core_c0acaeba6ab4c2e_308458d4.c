// 003e9da0 <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#8}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#9}>,(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>

/* alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#8}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#9}>,
   (alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)> */

ulonglong * __rustcall
alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_8_>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_9_>,(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>
          (ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong extraout_RDX;
  ulonglong uVar6;
  
  uVar5 = *param_2;
  uVar1 = param_2[2];
  <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#8}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#9}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
  ::try_fold::
  <alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,_>>
            (param_2,uVar5,uVar5,param_2[3]);
  uVar6 = extraout_RDX - uVar5;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_2[2] = 0;
  *param_2 = 8;
  param_2[1] = 8;
  param_2[3] = 8;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
            (uVar2,(uVar3 - uVar2 >> 3) * -0x5555555555555555);
  uVar1 = uVar1 * 0x18;
  if ((uVar1 & 8) != 0) {
    if ((uVar1 & 0xfffffffffffffff0) == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
      uVar5 = 8;
    }
    else {
      uVar5 = (*(code *)PTR___rust_realloc_007997f0)(uVar1 & 0xfffffffffffffff0);
      if (uVar5 == 0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
  }
  *param_1 = uVar1 >> 4;
  param_1[1] = uVar5;
  param_1[2] = uVar6 >> 4;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>
            (8,0);
  return param_1;
}


