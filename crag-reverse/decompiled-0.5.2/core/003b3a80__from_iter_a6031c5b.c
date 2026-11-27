// 003b3a80 from_iter

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
   as 
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,
   <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0}>>>
::from_iter(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  longlong local_200;
  longlong lStack_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong local_1c0 [25];
  longlong local_f8 [25];
  
  local_1e8 = param_2 + 2;
  lVar4 = *param_2;
  lVar1 = param_2[1];
  do {
    if (lVar4 == lVar1) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    lVar4 = lVar4 + 0x18;
    *param_2 = lVar4;
    <&mut<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(&alloc[12e961f32105355]::string::String,)>>
    ::call_mut(local_1c0,&local_1e8);
  } while (local_1c0[0] == -1);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar4 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar4 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,200);
  local_200 = 4;
  local_1f0 = 1;
  local_1d8 = param_2[2];
  local_1e8 = (longlong *)*param_2;
  uStack_1e0 = (undefined4)param_2[1];
  uStack_1dc = *(undefined4 *)((longlong)param_2 + 0xc);
  lStack_1f8 = lVar4;
  local_1d0 = lVar4;
  do {
    lVar4 = local_1f0;
    local_1c8 = &local_1d8;
    plVar3 = (longlong *)CONCAT44(uStack_1dc,uStack_1e0);
    plVar5 = local_1e8;
    do {
      if (plVar5 == plVar3) {
        param_1[2] = local_1f0;
        *param_1 = local_200;
        param_1[1] = lStack_1f8;
        return param_1;
      }
      plVar5 = plVar5 + 3;
      local_1e8 = plVar5;
      uVar6 = <&mut<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(&alloc[12e961f32105355]::string::String,)>>
              ::call_mut(local_f8,&local_1c8);
    } while (local_f8[0] == -1);
    if (lVar4 == local_200) {
      uVar6 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_200,lVar4,1,8,200);
      local_1d0 = lStack_1f8;
    }
    (*(code *)PTR_memcpy_00799008)(uVar6,200);
    local_1f0 = lVar4 + 1;
  } while( true );
}


