// 0035d8f0 <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>

/* WARNING: Switch with 1 destination removed at 0x0035d92d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  <http[56314f485c23ccf6]::request::Parts>();
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
  return;
}


