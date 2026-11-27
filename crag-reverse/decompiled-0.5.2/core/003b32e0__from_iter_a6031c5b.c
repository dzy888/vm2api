// 003b32e0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,
   craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#0}>,
   craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#1}>,
   <str as alloc[12e961f32105355]::borrow::ToOwned>::to_owned>>>::from_iter
   <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,
   craggemini_core[66f3c71560d70857]::tools::string_array::{closure#0}::{closure#0}>,
   craggemini_core[66f3c71560d70857]::tools::string_array::{closure#0}::{closure#1}>, <str as
   alloc[12e961f32105355]::borrow::ToOwned>::to_owned>>>::from_iter */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#0}>,craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#1}>,<str_as_alloc[12e961f32105355]::borrow::ToOwned>::to_owned>>>
::from_iter(longlong *param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (param_2 != param_3) {
    do {
      if (*param_2 == '\x03') {
        auVar4 = ::<str>::trim_matches::<<char>::is_whitespace>
                           (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
        lVar3 = auVar4._8_8_;
        if ((auVar4._0_8_ != 0) && (lVar3 != 0)) {
          if (-1 < lVar3) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar2 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar2 != 0) {
              (*(code *)PTR_memcpy_00799008)();
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_60 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
              if (local_60 == (longlong *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_003b3521;
              }
              param_2 = param_2 + 0x20;
              *local_60 = lVar3;
              local_60[1] = lVar2;
              local_60[2] = lVar3;
              local_58 = 4;
              local_48 = 1;
              local_50 = local_60;
              if (param_2 == param_3) goto LAB_003b34e4;
              local_38 = 1;
              goto LAB_003b3400;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          break;
        }
      }
      param_2 = param_2 + 0x20;
    } while (param_2 != param_3);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
LAB_003b3400:
  if (*param_2 == '\x03') {
    auVar4 = ::<str>::trim_matches::<<char>::is_whitespace>
                       (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    lVar3 = auVar4._8_8_;
    if ((auVar4._0_8_ != 0) && (lVar3 != 0)) {
      if (lVar3 < 0) {
LAB_003b3506:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_003b3521:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar2 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar2 == 0) goto LAB_003b3506;
      local_40 = lVar2;
      (*(code *)PTR_memcpy_00799008)();
      lVar2 = local_38;
      if (local_38 == local_58) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_58,local_38,1,8,0x18);
        local_60 = local_50;
      }
      local_60[lVar2 * 3] = lVar3;
      local_60[lVar2 * 3 + 1] = local_40;
      local_60[lVar2 * 3 + 2] = lVar3;
      local_48 = lVar2 + 1;
      local_38 = local_48;
    }
  }
  param_2 = param_2 + 0x20;
  if (param_2 == param_3) {
LAB_003b34e4:
    param_1[2] = local_48;
    *param_1 = local_58;
    param_1[1] = (longlong)local_50;
    return param_1;
  }
  goto LAB_003b3400;
}


