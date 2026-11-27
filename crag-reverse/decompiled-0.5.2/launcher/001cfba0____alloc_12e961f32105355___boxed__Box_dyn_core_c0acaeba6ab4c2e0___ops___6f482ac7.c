// 001cfba0 <[alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send>]>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(), Output = ()> +
   core[c0acaeba6ab4c2e0]::marker::Send>]> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<[alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send>]>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR___rust_dealloc_00219c40;
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      puVar1 = *(undefined8 **)(param_1 + -0x10);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)puVar2)(param_4,puVar1[2]);
      }
      param_1 = param_1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


