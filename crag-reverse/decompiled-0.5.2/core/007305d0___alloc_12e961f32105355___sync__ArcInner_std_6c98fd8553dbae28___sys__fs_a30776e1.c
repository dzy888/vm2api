// 007305d0 <alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sys::fs::unix::InnerReadDir>>

/* WARNING: Switch with 1 destination removed at 0x007305fa */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sys::fs::unix::InnerReadDir>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sys::fs::unix::InnerReadDir>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)PTR_drop_0079ac38)();
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


