// 006e7990 <alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>>

/* WARNING: Switch with 1 destination removed at 0x006e79a8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


