// 003b81b0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::ClientTool>,
   craggemini_core[66f3c71560d70857]::tools::compile_native_prompt::{closure#2}>>>::from_iter */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::ClientTool>,craggemini_core[66f3c71560d70857]::tools::compile_native_prompt::{closure#2}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  ulonglong local_88;
  undefined4 *local_80;
  longlong local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar3 = (ulonglong)(param_3 - param_2) / 0xa8;
  if (param_3 == param_2) {
    local_88 = 0;
    local_80 = (undefined4 *)&DAT_00000008;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    puVar1 = PTR_format_inner_00799048;
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                (&local_88,uVar3 * 0x18);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    uVar4 = 0;
    uVar5 = extraout_XMM0_Da;
    local_88 = uVar3;
    local_80 = puVar2;
    do {
      local_58 = param_2 + 0x30;
      local_60 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
      local_50 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
      local_68 = param_2;
      (*(code *)puVar1)(uVar5,&local_68);
      *(undefined8 *)(puVar2 + 4) = local_38;
      *puVar2 = local_48;
      puVar2[1] = uStack_44;
      puVar2[2] = uStack_40;
      puVar2[3] = uStack_3c;
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 6;
      param_2 = param_2 + 0xa8;
      uVar5 = local_48;
    } while (uVar3 != uVar4);
  }
  param_1[2] = uVar3;
  *param_1 = local_88;
  param_1[1] = (ulonglong)local_80;
  return;
}


