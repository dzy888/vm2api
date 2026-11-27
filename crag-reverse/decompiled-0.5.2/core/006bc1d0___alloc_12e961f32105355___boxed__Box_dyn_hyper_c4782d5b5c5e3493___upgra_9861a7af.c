// 006bc1d0 <alloc[12e961f32105355]::boxed::Box<dyn_hyper[c4782d5b5c5e3493]::upgrade::Io+core[c0acaeba6ab4c2e0]::marker::Send>>

/* WARNING: Switch with 1 destination removed at 0x006bc1fd */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<dyn
   hyper[c4782d5b5c5e3493]::upgrade::Io + core[c0acaeba6ab4c2e0]::marker::Send>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<dyn_hyper[c4782d5b5c5e3493]::upgrade::Io_core[c0acaeba6ab4c2e0]::marker::Send>>
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


