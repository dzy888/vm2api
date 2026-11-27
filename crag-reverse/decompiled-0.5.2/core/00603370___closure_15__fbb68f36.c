// 00603370 {closure#15}

/* craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#15} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::_closure_15_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  longlong *local_70;
  code *local_68;
  undefined2 local_56;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  
  local_88 = PTR_fmt_007991f0;
  local_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_68 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_90 = param_2;
  local_80 = param_3;
  local_70 = param_4;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_90);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_90,400,&DAT_001845e0,0x10,local_50);
  local_56 = 0x700;
  (*(code *)PTR_format_inner_00799048)();
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,&local_90,local_38);
  if (*param_4 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


