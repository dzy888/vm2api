// 000819e0 <alloc[12e961f32105355]::boxed::Box<[alloc[12e961f32105355]::string::String]>>

/* WARNING: Switch with 1 destination removed at 0x00081a4d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<[alloc[12e961f32105355]::string::String]>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<[alloc[12e961f32105355]::string::String]>>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR___rust_dealloc_000c3aa0;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + 8;
  do {
    if (*(longlong *)(param_1 + -8) != 0) {
      (*(code *)puVar1)(param_4,1);
    }
    param_1 = param_1 + 0x18;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


