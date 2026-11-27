// 0040c2d0 into

/* <&str as core[c0acaeba6ab4c2e0]::convert::Into<alloc[12e961f32105355]::string::String>>::into */

void __rustcall
<&str_as_core[c0acaeba6ab4c2e0]::convert::Into<alloc[12e961f32105355]::string::String>>::into
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)PTR_memcpy_00799008)(param_4,param_3);
  *param_1 = param_3;
  param_1[1] = lVar2;
  param_1[2] = param_3;
  return;
}


