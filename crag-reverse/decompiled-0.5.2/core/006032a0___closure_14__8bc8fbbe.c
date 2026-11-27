// 006032a0 {closure#14}

/* craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#14} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::_closure_14_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_98;
  undefined *local_90;
  undefined2 local_5e;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  puVar1 = PTR_format_inner_00799048;
  local_90 = PTR_fmt_007991f0;
  local_98 = param_2;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_98);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_98,400,&DAT_001845e0,0x10,local_40);
  local_5e = 0x700;
  (*(code *)puVar1)();
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,&local_98,local_58);
  return;
}


