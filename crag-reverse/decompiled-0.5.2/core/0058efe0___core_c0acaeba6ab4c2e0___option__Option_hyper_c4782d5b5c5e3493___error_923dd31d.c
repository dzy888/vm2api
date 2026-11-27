// 0058efe0 <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x0058f03a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
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


