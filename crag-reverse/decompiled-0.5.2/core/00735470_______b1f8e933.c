// 00735470 <()>

/* std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<()> */

undefined1 * __rustcall
std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<()>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 *puVar1;
  longlong local_48;
  undefined1 *local_40;
  longlong local_38;
  
  (*(code *)PTR_spec_new_impl_00799f20)(param_4,param_2);
  if (local_48 == -1) {
    puVar1 = (undefined1 *)(*param_4)();
    *local_40 = 0;
  }
  else {
    puVar1 = &DAT_00796450;
    local_38 = local_48;
  }
  if (local_38 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return puVar1;
}


