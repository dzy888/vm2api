// 00707f20 {closure#0}

/* <tokio[d7d91d38da47d894]::runtime::builder::Builder>::new::{closure#0} */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::builder::Builder>::new::_closure_0_(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined8 *)(*pcVar1)();
    return puVar2;
  }
  *(undefined8 *)((longlong)puVar2 + 7) = 0x72656b726f772d74;
  *puVar2 = 0x74722d6f696b6f74;
  *param_1 = 0xf;
  param_1[1] = puVar2;
  param_1[2] = 0xf;
  return param_1;
}


