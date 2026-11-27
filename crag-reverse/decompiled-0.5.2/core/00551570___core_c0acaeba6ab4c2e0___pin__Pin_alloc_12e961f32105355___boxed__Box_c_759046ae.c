// 00551570 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<core[c0acaeba6ab4c2e0]::option::Option<axum_core[61c49771464cda0a]::body::Body>>>>

/* WARNING: Switch with 1 destination removed at 0x005515c5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<core[c0acaeba6ab4c2e0]::option::Option<axum_core[61c49771464cda0a]::body::Body>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<core[c0acaeba6ab4c2e0]::option::Option<axum_core[61c49771464cda0a]::body::Body>>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
    }
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


