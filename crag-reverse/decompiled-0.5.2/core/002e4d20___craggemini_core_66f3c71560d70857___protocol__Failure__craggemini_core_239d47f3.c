// 002e4d20 <craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#7}>

/* <core[c0acaeba6ab4c2e0]::result::Result<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,
   std[6c98fd8553dbae28]::os::fd::owned::OwnedFd, std[6c98fd8553dbae28]::os::fd::owned::OwnedFd),
   core[c0acaeba6ab4c2e0]::io::error::Error>>::map_err::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   <craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#7}> */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd),core[c0acaeba6ab4c2e0]::io::error::Error>>
::map_err::
<craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_7_>
          (undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar2;
  ulonglong local_88;
  undefined **local_80;
  code *pcStack_78;
  undefined1 **local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
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
  
  if (*param_2 != -1) {
    (*(code *)PTR_memcpy_00799008)(param_4,0x108);
    return;
  }
  local_88 = *(ulonglong *)(param_2 + 2);
  uVar1 = (*(code *)PTR_remove_dir_all_00799038)();
  uVar2 = extraout_XMM0_Da;
  if (uVar1 != 0) {
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      pcStack_78 = (code *)(uVar1 - 1);
      local_80 = (undefined **)CONCAT71(local_80._1_7_,3);
      uVar2 = (*(code *)PTR_drop_00799040)();
    }
  }
  local_18 = (undefined1 *)&local_88;
  local_28 = &DAT_0019066f;
  local_20 = 0x24;
  local_10 = &PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_00786058;
  local_80 = &local_28;
  pcStack_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_70 = &local_18;
  pcStack_68 = <&dyn_core[c0acaeba6ab4c2e0]::fmt::Display_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
               fmt;
  (*(code *)PTR_format_inner_00799048)(uVar2,&local_80);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>
            (&local_80,0x1f7,"slot_guard_error/v1/images/edits",0x10,local_40);
  local_45 = 2;
  if ((1 < ((uint)local_88 & 3) - 2) && ((local_88 & 3) != 0)) {
    local_38 = local_88 - 1;
    local_40[0] = 3;
    (*(code *)PTR_drop_00799040)();
  }
  param_1[7] = local_50;
  *(undefined2 *)(param_1 + 8) = local_48;
  *(undefined1 *)((longlong)param_1 + 0x42) = local_46;
  *(undefined1 *)((longlong)param_1 + 0x43) = local_45;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_44;
  param_1[5] = local_60;
  param_1[6] = uStack_58;
  param_1[3] = local_70;
  param_1[4] = pcStack_68;
  param_1[1] = local_80;
  param_1[2] = pcStack_78;
  *param_1 = 0xffffffffffffffff;
  return;
}


