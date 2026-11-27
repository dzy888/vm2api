// 001d2fe0 <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>

/* std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>
    */

void __rustcall
std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_40;
  undefined1 *local_38;
  longlong local_30;
  
  (*(code *)PTR_spec_new_impl_0021a110)();
  if (local_40 == -1) {
    env::unix::getenv::_closure_0_(param_1,0xffffffffffffffff,local_38);
    *local_38 = 0;
  }
  else {
    param_1[1] = &DAT_002175c0;
    *param_1 = 0xfffffffffffffffe;
    local_30 = local_40;
  }
  if (local_30 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  return;
}


