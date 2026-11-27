// 0035b150 <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<dyn_hyper[c4782d5b5c5e3493]::rt::timer::Sleep<Output=()>>>>>

/* WARNING: Switch with 1 destination removed at 0x0035b182 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<dyn
   hyper[c4782d5b5c5e3493]::rt::timer::Sleep<Output = ()>>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<dyn_hyper[c4782d5b5c5e3493]::rt::timer::Sleep<Output_()>>>>>
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


