// 00063d20 <core[c0acaeba6ab4c2e0]::cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::any::Any+core[c0acaeba6ab4c2e0]::marker::Send>>>>>

/* WARNING: Switch with 1 destination removed at 0x00063d5a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),
   alloc[12e961f32105355]::boxed::Box<dyn core[c0acaeba6ab4c2e0]::any::Any +
   core[c0acaeba6ab4c2e0]::marker::Send>>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::any::Any_core[c0acaeba6ab4c2e0]::marker::Send>>>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    puVar1 = (undefined8 *)param_1[2];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_000c4290)(param_4,puVar1[2]);
      return;
    }
  }
  return;
}


