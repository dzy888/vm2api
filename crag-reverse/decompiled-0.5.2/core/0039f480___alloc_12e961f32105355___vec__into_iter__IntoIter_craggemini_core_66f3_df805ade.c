// 0039f480 <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>>

/* WARNING: Switch with 1 destination removed at 0x0039f533 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::InlineMedia>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>>
          (longlong param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) != lVar3) {
    uVar2 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar3) / 0x48;
    lVar3 = lVar3 + 0x38;
    do {
      if (*(longlong *)(lVar3 + -0x38) != 0) {
        (*(code *)puVar1)();
      }
      if (*(longlong *)(lVar3 + -0x20) != 0) {
        (*(code *)puVar1)();
      }
      if ((*(longlong *)(lVar3 + -8) != -1) && (*(longlong *)(lVar3 + -8) != 0)) {
        (*(code *)puVar1)();
      }
      lVar3 = lVar3 + 0x48;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


