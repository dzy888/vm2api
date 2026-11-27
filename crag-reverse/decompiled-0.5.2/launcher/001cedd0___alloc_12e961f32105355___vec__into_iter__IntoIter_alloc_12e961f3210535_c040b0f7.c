// 001cedd0 <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send>>>

/* WARNING: Switch with 1 destination removed at 0x001cee07 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(), Output = ()> +
   core[c0acaeba6ab4c2e0]::marker::Send>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <[alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send>]>
            (*(longlong *)(param_1 + 8),
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 4);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,8);
  return;
}


