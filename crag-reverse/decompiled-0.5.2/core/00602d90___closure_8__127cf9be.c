// 00602d90 {closure#8}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#8} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::_closure_8_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined *local_58;
  undefined2 local_26;
  undefined1 local_20 [24];
  
  local_60 = &local_80;
  local_58 = PTR_fmt_00799518;
  local_80 = param_2;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_60);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_60,400,"invalid_crag_prompt",0x13,local_20)
  ;
  local_26 = 0x700;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_70 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar4 = _UNK_001841cc;
  uVar3 = _UNK_001841c8;
  uVar2 = _UNK_001841c4;
  if (local_70 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *local_70 = _DAT_001841c0;
  local_70[1] = uVar2;
  local_70[2] = uVar3;
  local_70[3] = uVar4;
  local_78 = 0x10;
  local_68 = 0x10;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,&local_60,&local_78);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(&local_80);
  return;
}


