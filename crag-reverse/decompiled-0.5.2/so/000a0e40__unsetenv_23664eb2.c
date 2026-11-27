// 000a0e40 unsetenv

/* std[6c98fd8553dbae28]::sys::env::unix::unsetenv */

undefined1 * __rustcall
std[6c98fd8553dbae28]::sys::env::unix::unsetenv
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 local_1b0 [384];
  char local_30 [8];
  undefined8 local_28;
  
  if (0x17f < param_2) {
    puVar1 = (undefined1 *)
             helpers::small_c_string::run_with_cstr_allocating::<()>
                       (param_1,param_2,1,unsetenv::_closure_0_);
    return puVar1;
  }
  (*(code *)PTR_memcpy_000c3aa8)(param_4,param_2);
  local_1b0[param_2] = 0;
  (*(code *)PTR_from_bytes_with_nul_000c40a8)();
  if (local_30[0] == '\0') {
    puVar1 = (undefined1 *)unsetenv::_closure_0_(local_30,local_28);
  }
  else {
    puVar1 = &DAT_000c1618;
  }
  return puVar1;
}


