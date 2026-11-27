// 000636f0 drop

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_000c3aa0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8) + 8;
    do {
      if (*(longlong *)(lVar3 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


