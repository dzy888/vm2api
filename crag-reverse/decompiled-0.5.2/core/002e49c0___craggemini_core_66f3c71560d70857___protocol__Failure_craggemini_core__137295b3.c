// 002e49c0 <craggemini_core[66f3c71560d70857]::protocol::Failure,craggemini_core[66f3c71560d70857]::server::resume_conversation::{closure#0}::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::string::String>>::map_err::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   craggemini_core[66f3c71560d70857]::server::resume_conversation::{closure#0}::{closure#0}> */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::string::String>>
::map_err::
<craggemini_core[66f3c71560d70857]::protocol::Failure,craggemini_core[66f3c71560d70857]::server::resume_conversation::_closure_0_::_closure_0_>
          (undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined4 local_c;
  
  if (*param_2 == -1) {
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
    <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_48,0x194,&DAT_001908af,0x16,param_2 + 8);
    param_1[4] = local_28;
    param_1[5] = uStack_20;
    param_1[2] = local_38;
    param_1[3] = uStack_30;
    *param_1 = local_48;
    param_1[1] = uStack_40;
    param_1[6] = local_18;
    *(undefined2 *)(param_1 + 7) = local_10;
    *(undefined1 *)((longlong)param_1 + 0x3a) = local_e;
    *(undefined1 *)((longlong)param_1 + 0x3b) = 6;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_c;
    return;
  }
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  param_1[3] = *(undefined8 *)(param_2 + 0x10);
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *param_1 = 0xfffffffffffffffe;
  return;
}


