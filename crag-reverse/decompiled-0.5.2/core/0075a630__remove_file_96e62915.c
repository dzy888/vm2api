// 0075a630 remove_file

/* std[6c98fd8553dbae28]::sys::fs::remove_file */

undefined1 * __rustcall
std[6c98fd8553dbae28]::sys::fs::remove_file
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 local_1b0 [384];
  char local_30;
  
  if (0x17f < param_2) {
    puVar2 = (undefined1 *)
             helpers::small_c_string::run_with_cstr_allocating::<()>
                       (param_1,param_2,1,
                        <std[6c98fd8553dbae28]::sys::fs::unix::unlink_as_core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>
                        ::call);
    return puVar2;
  }
  (*(code *)PTR_memcpy_00799008)(param_4,param_2);
  local_1b0[param_2] = 0;
  (*(code *)PTR_from_bytes_with_nul_0079abd0)();
  if (local_30 == '\0') {
    iVar1 = (*(code *)PTR_unlink_0079b048)();
    if (iVar1 == -1) {
      piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar1 = *piVar3;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      puVar2 = (undefined1 *)((longlong)iVar1 << 0x20 | 2);
    }
    else {
      puVar2 = (undefined1 *)0x0;
    }
  }
  else {
    puVar2 = &DAT_00796450;
  }
  return puVar2;
}


