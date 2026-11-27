// 002e4700 <craggemini_core[66f3c71560d70857]::protocol::Failure,craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}::{closure#8}>

/* <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard,
   core[c0acaeba6ab4c2e0]::io::error::Error>>::map_err::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   craggemini_core[66f3c71560d70857]::server::execute_turn_request::{closure#0}::{closure#8}> */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard,core[c0acaeba6ab4c2e0]::io::error::Error>>
::map_err::
<craggemini_core[66f3c71560d70857]::protocol::Failure,craggemini_core[66f3c71560d70857]::server::execute_turn_request::_closure_0_::_closure_8_>
          (undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong local_78;
  undefined1 *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined1 local_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  local_70 = (undefined1 *)&local_78;
  if (*param_2 != -1) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    lVar4 = param_2[3];
    lVar5 = param_2[5];
    param_1[5] = param_2[4];
    param_1[6] = lVar5;
    param_1[3] = lVar3;
    param_1[4] = lVar4;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    *param_1 = 0xfffffffffffffffe;
    return;
  }
  local_78 = param_2[1];
  puStack_68 = PTR_fmt_007991d0;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_70);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_70,400,&DAT_00190790,0xd,local_20);
  local_36 = 0x700;
  if ((1 < ((uint)local_78 & 3) - 2) && ((local_78 & 3) != 0)) {
    local_28 = local_78 - 1;
    local_30 = 3;
    (*(code *)PTR_drop_00799040)();
  }
  param_1[6] = local_40;
  *(undefined2 *)(param_1 + 7) = local_38;
  *(undefined2 *)((longlong)param_1 + 0x3a) = local_36;
  *(undefined4 *)((longlong)param_1 + 0x3c) = local_34;
  param_1[4] = local_50;
  param_1[5] = uStack_48;
  param_1[2] = local_60;
  param_1[3] = uStack_58;
  *param_1 = local_70;
  param_1[1] = puStack_68;
  return;
}


