// 0064c820 with_capacity

/* <alloc[12e961f32105355]::vec::Vec<u8>>::with_capacity */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>>::with_capacity(undefined8 *param_1,undefined8 param_2)

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
  *param_1 = param_2;
  param_1[1] = lVar2;
  param_1[2] = 0;
  return;
}


