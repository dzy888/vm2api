// 00602bb0 {closure#5}

/* craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::{closure#5} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_message_body_with_policy::_closure_5_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
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
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>
            (&local_60,400,"invalid_system_prompt_mode",0x1a,local_20);
  local_26 = 0x700;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_70 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar4 = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_170_llvm_10049508496007902178._12_4_;
  uVar3 = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_170_llvm_10049508496007902178._8_4_;
  uVar2 = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_170_llvm_10049508496007902178._4_4_;
  if (local_70 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined4 *)local_70 =
       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_170_llvm_10049508496007902178._0_4_;
  *(undefined4 *)(local_70 + 4) = uVar2;
  *(undefined4 *)(local_70 + 8) = uVar3;
  *(undefined4 *)(local_70 + 0xc) = uVar4;
  local_70[0x10] = 'd';
  local_70[0x11] = 'e';
  local_78 = 0x12;
  local_68 = 0x12;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param(param_1,&local_60,&local_78);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(&local_80);
  return;
}


