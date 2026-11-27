// 001e0240 to_path_buf

/* <std[6c98fd8553dbae28]::path::Path>::to_path_buf */

longlong * __rustcall
<std[6c98fd8553dbae28]::path::Path>::to_path_buf
          (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 == 0) {
    lVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      pcVar1 = (code *)swi(3);
      plVar3 = (longlong *)(*pcVar1)();
      return plVar3;
    }
    (*(code *)PTR_memcpy_00219c60)(param_4,param_3);
  }
  *param_1 = param_3;
  param_1[1] = lVar2;
  param_1[2] = param_3;
  return param_1;
}


