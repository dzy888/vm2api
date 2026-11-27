// 003c3a10 drop

/* WARNING: Switch with 1 destination removed at 0x003c3a71 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) != lVar1) {
    uVar2 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar1) / 0x1a0;
    do {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar1);
      lVar1 = lVar1 + 0x1a0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


