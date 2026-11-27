// 00251820 <craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#1}>

/* <core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::io::error::Error>>::map_err::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   <craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#1}> */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>::map_err::
<craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_1_>
          (longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong local_88;
  undefined **local_80;
  code *pcStack_78;
  undefined1 **local_70;
  code *pcStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined *local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined **local_10;
  
  local_18 = (undefined1 *)&local_88;
  if (param_2 == 0) {
    *param_1 = -2;
    return;
  }
  local_28 = &DAT_0018db47;
  local_20 = 0x23;
  local_10 = &PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_007840d8;
  local_80 = &local_28;
  pcStack_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_70 = &local_18;
  pcStack_68 = <&dyn_core[c0acaeba6ab4c2e0]::fmt::Display_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
               fmt;
  local_88 = param_2;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_80);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_80,500,&DAT_0018da08,0xe,local_40);
  local_45 = 2;
  if ((1 < ((uint)local_88 & 3) - 2) && ((local_88 & 3) != 0)) {
    local_38 = local_88 - 1;
    local_40[0] = 3;
    (*(code *)PTR_drop_00799040)();
  }
  param_1[6] = local_50;
  *(undefined2 *)(param_1 + 7) = local_48;
  *(undefined1 *)((longlong)param_1 + 0x3a) = local_46;
  *(undefined1 *)((longlong)param_1 + 0x3b) = local_45;
  *(undefined4 *)((longlong)param_1 + 0x3c) = local_44;
  param_1[4] = local_60;
  param_1[5] = lStack_58;
  param_1[2] = (longlong)local_70;
  param_1[3] = (longlong)pcStack_68;
  *param_1 = (longlong)local_80;
  param_1[1] = (longlong)pcStack_78;
  return;
}


