// 002e4a60 <craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#3}>

/* <core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener,
   core[c0acaeba6ab4c2e0]::io::error::Error>>::map_err::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   <craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#3}> */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener,core[c0acaeba6ab4c2e0]::io::error::Error>>
::map_err::
<craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_3_>
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
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
  
  if ((int)*param_2 != 2) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[3];
    param_1[3] = param_2[2];
    param_1[4] = lVar3;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    *param_1 = -2;
    return;
  }
  local_88 = param_2[1];
  uVar4 = (*(code *)PTR_remove_dir_all_00799038)();
  uVar5 = extraout_XMM0_Da;
  if (uVar4 != 0) {
    if ((1 < ((uint)uVar4 & 3) - 2) && ((uVar4 & 3) != 0)) {
      pcStack_78 = (code *)(uVar4 - 1);
      local_80 = (undefined **)CONCAT71(local_80._1_7_,3);
      uVar5 = (*(code *)PTR_drop_00799040)();
    }
  }
  local_18 = (undefined1 *)&local_88;
  local_28 = &DAT_001905bd;
  local_20 = 0x1f;
  local_10 = &PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_00786058;
  local_80 = &local_28;
  pcStack_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_70 = &local_18;
  pcStack_68 = <&dyn_core[c0acaeba6ab4c2e0]::fmt::Display_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
               fmt;
  (*(code *)PTR_format_inner_00799048)(uVar5,&local_80);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_80,500,&DAT_001905ac,0x11,local_40);
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


