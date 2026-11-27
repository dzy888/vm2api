// 00188d50 drop

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(), Output = ()> +
   core[c0acaeba6ab4c2e0]::marker::Send>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::ops::function::FnMut<(), Output =
   core[c0acaeba6ab4c2e0]::result::Result<(), core[c0acaeba6ab4c2e0]::io::error::Error>> +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = PTR___rust_dealloc_00219c40;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(param_1 + 8) + 0x18;
    do {
      puVar1 = *(undefined8 **)(lVar3 + -0x10);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)puVar2)(param_4,puVar1[2]);
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


