// 0070d650 copy_from_slice

/* <bytes[e9829e187354639b]::bytes::Bytes>::copy_from_slice */

undefined8 __rustcall
<bytes[e9829e187354639b]::bytes::Bytes>::copy_from_slice
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    (*(code *)PTR_memcpy_00799008)(param_4,param_3);
  }
  (*(code *)PTR_from_00799a68)();
  return param_1;
}


