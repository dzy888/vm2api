// 0075ad20 metadata

/* std[6c98fd8553dbae28]::sys::fs::metadata */

undefined8 * __rustcall
std[6c98fd8553dbae28]::sys::fs::metadata(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined1 local_268 [384];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_38;
  undefined8 local_30;
  
  if (0x17f < param_3) {
    helpers::small_c_string::run_with_cstr_allocating::
    <std[6c98fd8553dbae28]::sys::fs::unix::FileAttr>
              (param_1,param_2,param_3,
               <std[6c98fd8553dbae28]::sys::fs::unix::stat_as_core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>
               ::call);
    return param_1;
  }
  uVar3 = (*(code *)PTR_memcpy_00799008)();
  local_268[param_3] = 0;
  (*(code *)PTR_from_bytes_with_nul_0079abd0)(uVar3,param_3 + 1);
  if (local_38 == 1) {
    param_1[1] = &DAT_00796450;
  }
  else {
    uVar3 = unix::try_statx(&local_e8,0xffffff9c,local_30,0);
    if ((int)local_e8 != -1) {
      (*(code *)PTR_memcpy_00799008)(uVar3,0xb0);
      return param_1;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    iVar1 = (*(code *)PTR_stat64_0079b060)();
    if (iVar1 != -1) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x90);
      *param_1 = 0;
      return param_1;
    }
    piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    param_1[1] = (longlong)iVar1 << 0x20 | 2;
  }
  *param_1 = 2;
  return param_1;
}


