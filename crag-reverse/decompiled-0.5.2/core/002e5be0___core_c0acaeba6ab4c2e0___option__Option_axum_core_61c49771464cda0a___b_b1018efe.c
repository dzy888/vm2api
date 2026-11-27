// 002e5be0 <core[c0acaeba6ab4c2e0]::option::Option<axum_core[61c49771464cda0a]::body::Body>>

/* WARNING: Switch with 1 destination removed at 0x002e5c12 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<axum_core[61c49771464cda0a]::body::Body>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<axum_core[61c49771464cda0a]::body::Body>>
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    if ((code *)*param_2 != (code *)0x0) {
      (*(code *)*param_2)();
    }
    if (param_2[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,param_2[2]);
      return;
    }
  }
  return;
}


