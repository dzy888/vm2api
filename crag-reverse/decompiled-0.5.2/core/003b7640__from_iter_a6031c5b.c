// 003b7640 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#0}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#2}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#0}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#2}>>>
::from_iter(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#0}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
  ::next(&local_98);
  local_a0 = param_1;
  if (local_98 == -1) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_2);
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar4 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plVar4 == (longlong *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    plVar4[2] = local_88;
    *plVar4 = local_98;
    plVar4[1] = lStack_90;
    local_b8 = 4;
    local_a8 = 1;
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = *(undefined8 *)(param_2 + 4);
    uStack_50 = *(undefined8 *)(param_2 + 6);
    local_48 = *(undefined8 *)(param_2 + 8);
    uStack_40 = *(undefined8 *)(param_2 + 10);
    lVar5 = 0x18;
    plStack_b0 = plVar4;
    while( true ) {
      lVar3 = local_a8;
      <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#0}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
      ::next(&local_80,&local_68);
      if (CONCAT44(uStack_7c,local_80) == -1) break;
      if (lVar3 == local_b8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_b8,lVar3,1,8,0x18);
        plVar4 = plStack_b0;
      }
      *(undefined8 *)((longlong)plVar4 + lVar5 + 0x10) = local_70;
      puVar1 = (undefined4 *)((longlong)plVar4 + lVar5);
      *puVar1 = local_80;
      puVar1[1] = uStack_7c;
      puVar1[2] = uStack_78;
      puVar1[3] = uStack_74;
      local_a8 = lVar3 + 1;
      lVar5 = lVar5 + 0x18;
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_68);
    local_a0[2] = local_a8;
    *local_a0 = local_b8;
    local_a0[1] = (longlong)plStack_b0;
  }
  return local_a0;
}


