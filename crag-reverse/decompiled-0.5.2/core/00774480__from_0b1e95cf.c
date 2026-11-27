// 00774480 from

/* <alloc[12e961f32105355]::ffi::c_str::CString as
   core[c0acaeba6ab4c2e0]::convert::From<&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr>>::from
   <core[c0acaeba6ab4c2e0]::ffi::c_str::CStr as alloc[12e961f32105355]::borrow::ToOwned>::to_owned
   <core[c0acaeba6ab4c2e0]::wtf8::Wtf8>::into_box */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::ffi::c_str::CString_as_core[c0acaeba6ab4c2e0]::convert::From<&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr>>
::from(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar1 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar1 != 0) goto LAB_007744c1;
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  lVar1 = 1;
LAB_007744c1:
  (*(code *)PTR_memcpy_00799008)(param_4,param_2);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}


