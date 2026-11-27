// 00081820 <alloc[12e961f32105355]::boxed::Box<dyn_for<'a,'b>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a_std[6c98fd8553dbae28]::panic::PanicHookInfo<'b>,),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>

/* WARNING: Switch with 1 destination removed at 0x00081857 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<dyn for<'a, 'b>
   core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a std[6c98fd8553dbae28]::panic::PanicHookInfo<'b>,),
   Output = ()> + core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<dyn_for<_a,_b>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&_a_std[6c98fd8553dbae28]::panic::PanicHookInfo<_b>,),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>>
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)();
  }
  if (param_2[1] == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,param_2[2]);
  return;
}


