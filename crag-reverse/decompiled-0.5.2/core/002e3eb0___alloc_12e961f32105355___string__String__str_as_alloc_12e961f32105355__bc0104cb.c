// 002e3eb0 <alloc[12e961f32105355]::string::String,<str_as_alloc[12e961f32105355]::borrow::ToOwned>::to_owned>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::map::<alloc[12e961f32105355]::string::String,
   <str as alloc[12e961f32105355]::borrow::ToOwned>::to_owned> */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::map::
<alloc[12e961f32105355]::string::String,<str_as_alloc[12e961f32105355]::borrow::ToOwned>::to_owned>
          (longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (param_3 < 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      if (param_3 == 0) {
        lVar2 = 1;
LAB_002e3f22:
        *param_1 = param_3;
        param_1[1] = lVar2;
        param_1[2] = param_3;
        return;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar2 = (*(code *)PTR___rust_alloc_00799000)();
      plVar1 = (longlong *)0x1;
      if (lVar2 != 0) {
        (*(code *)PTR_memcpy_00799008)(param_4,param_3);
        goto LAB_002e3f22;
      }
    }
    param_1 = plVar1;
    (*(code *)PTR_handle_error_00798ff0)();
  }
  *param_1 = -1;
  return;
}


