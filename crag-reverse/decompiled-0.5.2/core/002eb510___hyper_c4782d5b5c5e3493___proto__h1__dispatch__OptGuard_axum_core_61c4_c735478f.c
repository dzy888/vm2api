// 002eb510 <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::OptGuard<axum_core[61c49771464cda0a]::body::Body>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::OptGuard<axum_core[61c49771464cda0a]::body::Body>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::OptGuard<axum_core[61c49771464cda0a]::body::Body>>
          (longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if ((param_2 & 1) != 0) {
    if (*param_1 != 0) {
      puVar1 = (undefined8 *)param_1[1];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
      }
    }
    *param_1 = 0;
  }
  return;
}


