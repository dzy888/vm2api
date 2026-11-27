// 003b3ca0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
   as 
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,
   <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#0}>,
   <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#1}>>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#0}>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#1}>>>>
::from_iter(longlong *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  longlong local_1c0 [25];
  longlong local_f8 [25];
  
  <core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#0}>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#1}>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
  ::next(local_1c0);
  local_1f0 = param_1;
  if (local_1c0[0] == -1) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,200);
    puVar2 = PTR_memcpy_00799008;
    local_208 = 4;
    local_1f8 = 1;
    local_1c8 = *(undefined8 *)(param_2 + 8);
    local_1e8 = *param_2;
    uStack_1e4 = param_2[1];
    uStack_1e0 = param_2[2];
    uStack_1dc = param_2[3];
    local_1d8 = *(undefined8 *)(param_2 + 4);
    uStack_1d0 = *(undefined8 *)(param_2 + 6);
    lStack_200 = lVar3;
    while( true ) {
      lVar3 = local_1f8;
      uVar4 = <core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#0}>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#1}>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
              ::next(local_f8,&local_1e8);
      if (local_f8[0] == -1) break;
      if (lVar3 == local_208) {
        uVar4 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_208,lVar3,1,8,200);
      }
      (*(code *)puVar2)(uVar4,200);
      local_1f8 = lVar3 + 1;
    }
    local_1f0[2] = local_1f8;
    *local_1f0 = local_208;
    local_1f0[1] = lStack_200;
  }
  return local_1f0;
}


