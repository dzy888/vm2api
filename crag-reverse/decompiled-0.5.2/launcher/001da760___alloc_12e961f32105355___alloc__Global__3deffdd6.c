// 001da760 <alloc[12e961f32105355]::alloc::Global>

/* <u8 as <[_]>::to_vec_in::ConvertVec>::to_vec::<alloc[12e961f32105355]::alloc::Global> */

void __rustcall
<u8_as<[_]>::to_vec_in::ConvertVec>::to_vec::<alloc[12e961f32105355]::alloc::Global>
          (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_1 = param_3;
    param_1[1] = lVar2;
    (*(code *)PTR_memcpy_00219c60)(param_4,param_3);
    param_1[2] = param_3;
  }
  return;
}


