// 003b5c30 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#4}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#5}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#4}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#5}>>>
::from_iter(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong local_98;
  undefined1 (*pauStack_90) [16];
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar5 = <core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#4}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#5}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
           ::next(param_2);
  local_80 = param_1;
  if (auVar5._0_8_ == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_2);
  }
  else {
    local_68 = auVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pauVar3 = (undefined1 (*) [16])(*(code *)PTR___rust_alloc_00799000)();
    if (pauVar3 == (undefined1 (*) [16])0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *pauVar3 = auVar5;
    local_98 = 4;
    local_88 = 1;
    local_38 = param_2[6];
    local_68._0_8_ = *param_2;
    local_68._8_8_ = param_2[1];
    local_58 = param_2[2];
    uStack_50 = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    lVar4 = 0x18;
    pauStack_90 = pauVar3;
    while( true ) {
      lVar2 = local_88;
      auVar5 = <core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#4}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#5}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
               ::next(local_68);
      if (auVar5._0_8_ == 0) break;
      local_78 = auVar5;
      if (lVar2 == local_98) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_98,lVar2,1,8,0x10);
        pauVar3 = pauStack_90;
      }
      *(longlong *)(pauVar3[-1] + lVar4 + 8) = auVar5._0_8_;
      *(longlong *)(*pauVar3 + lVar4) = auVar5._8_8_;
      local_88 = lVar2 + 1;
      lVar4 = lVar4 + 0x10;
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(local_68);
    local_80[2] = local_88;
    *local_80 = local_98;
    local_80[1] = (longlong)pauStack_90;
  }
  return local_80;
}


