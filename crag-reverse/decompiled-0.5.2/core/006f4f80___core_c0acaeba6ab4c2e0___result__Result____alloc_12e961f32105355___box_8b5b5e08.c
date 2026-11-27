// 006f4f80 <core[c0acaeba6ab4c2e0]::result::Result<(),alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::any::Any+core[c0acaeba6ab4c2e0]::marker::Send>>>

/* WARNING: Switch with 1 destination removed at 0x006f4fb2 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(),
   alloc[12e961f32105355]::boxed::Box<dyn core[c0acaeba6ab4c2e0]::any::Any +
   core[c0acaeba6ab4c2e0]::marker::Send>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(),alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::any::Any_core[c0acaeba6ab4c2e0]::marker::Send>>>
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


