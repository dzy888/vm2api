// 00085c60 <std[6c98fd8553dbae28]::path::PathBuf>

/* std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<std[6c98fd8553dbae28]::path::PathBuf>
    */

void __rustcall
std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
<std[6c98fd8553dbae28]::path::PathBuf>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  longlong local_48;
  undefined1 *local_40;
  longlong local_38;
  
  (*(code *)PTR_spec_new_impl_000c4160)();
  if (local_48 == -1) {
    (*param_4)(local_38,local_40);
    *local_40 = 0;
  }
  else {
    param_1[1] = &DAT_000c1618;
    *param_1 = 0xffffffffffffffff;
    local_38 = local_48;
  }
  if (local_38 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)();
  }
  return;
}


