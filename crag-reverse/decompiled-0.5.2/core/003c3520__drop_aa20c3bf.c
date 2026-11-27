// 003c3520 drop

/* WARNING: Switch with 1 destination removed at 0x003c35a3 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::string::String> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) != lVar3) {
    uVar2 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar3) / 0x18;
    lVar3 = lVar3 + 8;
    do {
      if (*(longlong *)(lVar3 + -8) != 0) {
        (*(code *)puVar1)();
      }
      lVar3 = lVar3 + 0x18;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


