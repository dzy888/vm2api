// 00081350 <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send>>>

/* WARNING: Switch with 1 destination removed at 0x0008138b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(), Output = ()> +
   core[c0acaeba6ab4c2e0]::marker::Send>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <[alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send>]>
            (param_1[1],param_1[2]);
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


