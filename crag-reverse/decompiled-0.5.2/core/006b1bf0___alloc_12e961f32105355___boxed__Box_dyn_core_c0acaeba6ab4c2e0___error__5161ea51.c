// 006b1bf0 <alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>

/* WARNING: Switch with 1 destination removed at 0x006b1c21 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::error::Error + core[c0acaeba6ab4c2e0]::marker::Send +
   core[c0acaeba6ab4c2e0]::marker::Sync>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>>
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


