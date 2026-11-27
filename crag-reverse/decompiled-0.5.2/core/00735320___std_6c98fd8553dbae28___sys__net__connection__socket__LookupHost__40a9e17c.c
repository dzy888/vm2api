// 00735320 <std[6c98fd8553dbae28]::sys::net::connection::socket::LookupHost>

/* std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<std[6c98fd8553dbae28]::sys::net::connection::socket::LookupHost>
    */

void __rustcall
std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
<std[6c98fd8553dbae28]::sys::net::connection::socket::LookupHost>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_48;
  undefined1 *local_40;
  longlong local_38;
  
  (*(code *)PTR_spec_new_impl_00799f20)();
  if (local_48 == -1) {
    net::connection::socket::lookup_host::_closure_0_(param_1,param_4,local_40);
    *local_40 = 0;
  }
  else {
    param_1[1] = &DAT_00796450;
    *param_1 = 1;
    local_38 = local_48;
  }
  if (local_38 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


