// 005c3db0 <craggemini_core[66f3c71560d70857]::schema::ensure_required_properties::{closure#1}>

/* <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<craggemini_core[66f3c71560d70857]::schema::ensure_required_properties::{closure#1}>
   <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<craggemini_core[66f3c71560d70857]::mcp::write_slot_mcp_config_files::{closure#2}>
   <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<craggemini_core[66f3c71560d70857]::schema::merge_schema_object::{closure#0}>
   <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<craggemini_core[66f3c71560d70857]::schema::project_tool_schema::{closure#0}>
   <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<craggemini_core[66f3c71560d70857]::schema::ensure_required_properties::{closure#2}>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::map::Entry>::or_insert_with::
<craggemini_core[66f3c71560d70857]::schema::ensure_required_properties::_closure_1_>
          (longlong *param_1)

{
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  longlong local_8;
  
  if (*param_1 == -1) {
    return param_1[3] * 0x20 + param_1[1];
  }
  local_70 = 0;
  local_60 = 0;
  local_78[0] = 5;
  local_8 = param_1[6];
  local_38 = (undefined4)*param_1;
  uStack_34 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_30 = (undefined4)param_1[1];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_28 = (undefined4)param_1[2];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_20 = (undefined4)param_1[3];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_18 = (undefined4)param_1[4];
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_10 = (undefined4)param_1[5];
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x2c);
  <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert_entry(local_58,&local_38,local_78);
  return local_48 * 0x20 + local_58[0];
}


