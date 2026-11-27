// 003b8300 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>,
   <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>::digest>>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>,<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>::digest>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_60;
  undefined4 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar3 = (ulonglong)(param_3 - param_2) / 0x90;
  if (param_3 == param_2) {
    local_60 = 0;
    local_58 = (undefined4 *)&DAT_00000008;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar1 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar1 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                (&local_60,uVar3 * 0x18);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    uVar2 = 0;
    local_60 = uVar3;
    local_58 = puVar1;
    do {
      <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>::digest(&local_48,param_2);
      *(undefined8 *)(puVar1 + 4) = local_38;
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + 0x90;
    } while (uVar3 != uVar2);
  }
  param_1[2] = uVar3;
  *param_1 = local_60;
  param_1[1] = (ulonglong)local_58;
  return param_1;
}


