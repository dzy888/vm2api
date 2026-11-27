// 00085d20 <std[6c98fd8553dbae28]::sys::fs::unix::File>

/* std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<std[6c98fd8553dbae28]::sys::fs::unix::File>
    */

void __rustcall
std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
<std[6c98fd8553dbae28]::sys::fs::unix::File>(undefined4 *param_1)

{
  code *in_R8;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  
  (*(code *)PTR_spec_new_impl_000c4160)();
  if (local_50 == -1) {
    (*in_R8)(local_40,local_48);
    *local_48 = 0;
  }
  else {
    *(undefined1 **)(param_1 + 2) = &DAT_000c1618;
    *param_1 = 1;
    local_40 = local_50;
  }
  if (local_40 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)();
  }
  return;
}


