// 00188e10 drop

/* <alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::ContextAccount> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::ContextAccount>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00219c40;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8) + 0x38;
    do {
      if ((*(longlong *)(lVar3 + -0x38) != -1) && (*(longlong *)(lVar3 + -0x38) != 0)) {
        (*(code *)puVar1)(param_4,1);
      }
      if ((*(longlong *)(lVar3 + -0x20) != -1) && (*(longlong *)(lVar3 + -0x20) != 0)) {
        (*(code *)puVar1)(param_4,1);
      }
      if ((*(longlong *)(lVar3 + -8) != -1) && (*(longlong *)(lVar3 + -8) != 0)) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar3 = lVar3 + 0x48;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


