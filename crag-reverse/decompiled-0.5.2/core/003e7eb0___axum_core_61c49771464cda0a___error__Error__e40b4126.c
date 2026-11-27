// 003e7eb0 <axum_core[61c49771464cda0a]::error::Error>

/* WARNING: Switch with 1 destination removed at 0x003e7ede */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<axum_core[61c49771464cda0a]::error::Error> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<axum_core[61c49771464cda0a]::error::Error>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
  return;
}


