// 00602a60 {closure#4}

/* craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#4} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::_closure_4_
          (undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  code *local_80;
  longlong *local_78;
  code *local_70;
  undefined2 local_4e;
  undefined1 local_48 [24];
  
  local_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_70 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_88 = param_2;
  local_78 = param_3;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_88);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>
            (&local_88,400,"invalid_system_prompt",0x15,local_48);
  local_4e = 0x700;
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 < 0) {
LAB_00602ae3:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar1 == 0) {
    lVar3 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 == 0) goto LAB_00602ae3;
    (*(code *)PTR_memcpy_00799008)();
  }
  local_a0 = lVar1;
  local_98 = lVar3;
  local_90 = lVar1;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,&local_88,&local_a0);
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


