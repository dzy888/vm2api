// 005e3c00 string_array

/* craggemini_core[66f3c71560d70857]::tools::string_array */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::string_array(undefined8 *param_1,char *param_2)

{
  if ((param_2 == (char *)0x0) || (*param_2 != '\x04')) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#0}>,craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#1}>,<str_as_alloc[12e961f32105355]::borrow::ToOwned>::to_owned>>>
  ::from_iter(param_1,*(longlong *)(param_2 + 0x10),
              *(longlong *)(param_2 + 0x18) * 0x20 + *(longlong *)(param_2 + 0x10));
  return;
}


