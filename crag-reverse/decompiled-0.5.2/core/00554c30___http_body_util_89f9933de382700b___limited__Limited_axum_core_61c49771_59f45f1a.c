// 00554c30 <http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>

/* WARNING: Switch with 1 destination removed at 0x00554c5d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)();
  }
  if (param_2[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,param_2[2]);
  return;
}


