// 0075a710 remove_dir_all

/* std[6c98fd8553dbae28]::sys::fs::remove_dir_all */

undefined1 * __rustcall
std[6c98fd8553dbae28]::sys::fs::remove_dir_all
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 local_1b0 [384];
  char local_30;
  undefined8 local_28;
  
  if (0x17f < param_2) {
    puVar1 = (undefined1 *)
             helpers::small_c_string::run_with_cstr_allocating::<()>
                       (param_1,param_2,1,
                        <std[6c98fd8553dbae28]::sys::fs::unix::remove_dir_impl::remove_dir_all_modern_as_core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>
                        ::call);
    return puVar1;
  }
  (*(code *)PTR_memcpy_00799008)(param_4,param_2);
  local_1b0[param_2] = 0;
  (*(code *)PTR_from_bytes_with_nul_0079abd0)();
  if (local_30 == '\0') {
    puVar1 = (undefined1 *)unix::remove_dir_impl::remove_dir_all_modern(local_28,local_1b0);
  }
  else {
    puVar1 = &DAT_00796450;
  }
  return puVar1;
}


