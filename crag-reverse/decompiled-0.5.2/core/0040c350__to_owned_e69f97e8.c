// 0040c350 to_owned

/* <str as alloc[12e961f32105355]::borrow::ToOwned>::to_owned */

void __rustcall
<str_as_alloc[12e961f32105355]::borrow::ToOwned>::to_owned
          (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    lVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)PTR_memcpy_00799008)(param_4,param_3);
  }
  *param_1 = param_3;
  param_1[1] = lVar2;
  param_1[2] = param_3;
  return;
}


