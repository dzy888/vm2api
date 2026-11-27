// 004849c0 list_summary

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::list_summary */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::list_summary
          (undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = *(longlong *)(param_2 + 8);
  local_38 = local_40 + *(longlong *)(param_2 + 0x10) * 0x18;
  local_30 = param_2;
  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0}>>>
  ::from_iter(&local_58,&local_40);
  aggregate_summary(param_1,local_50,local_48);
  lVar1 = local_50;
  for (lVar2 = local_48 + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar1);
    lVar1 = lVar1 + 200;
  }
  if (local_58 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return param_1;
}


