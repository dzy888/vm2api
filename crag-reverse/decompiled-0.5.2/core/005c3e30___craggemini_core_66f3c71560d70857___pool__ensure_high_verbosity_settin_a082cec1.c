// 005c3e30 <craggemini_core[66f3c71560d70857]::pool::ensure_high_verbosity_settings::{closure#0}>

/* <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<craggemini_core[66f3c71560d70857]::pool::ensure_high_verbosity_settings::{closure#0}>
   <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<craggemini_core[66f3c71560d70857]::pool::ensure_high_verbosity_settings::{closure#1}>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::map::Entry>::or_insert_with::
<craggemini_core[66f3c71560d70857]::pool::ensure_high_verbosity_settings::_closure_0_>
          (longlong *param_1)

{
  code *pcVar1;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  if (*param_1 == -1) {
    local_78[0] = param_1[1] + param_1[3] * 0x20;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_88 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (local_88 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *local_88 = 0x68676968;
    local_90 = 4;
    local_80 = 4;
    local_98[0] = 3;
    local_28 = param_1[6];
    local_58 = (undefined4)*param_1;
    uStack_54 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_50 = (undefined4)param_1[1];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_48 = (undefined4)param_1[2];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_40 = (undefined4)param_1[3];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_38 = (undefined4)param_1[4];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_30 = (undefined4)param_1[5];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x2c);
    <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert_entry(local_78,&local_58,local_98);
    local_78[0] = local_68 * 0x20 + local_78[0];
  }
  return local_78[0];
}


