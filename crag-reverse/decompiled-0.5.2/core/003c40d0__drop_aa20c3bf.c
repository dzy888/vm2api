// 003c40d0 drop

/* WARNING: Switch with 1 destination removed at 0x003c4180 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,
   craggemini_core[66f3c71560d70857]::binding::ParsedProxy, std[6c98fd8553dbae28]::path::PathBuf)>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,craggemini_core[66f3c71560d70857]::binding::ParsedProxy,std[6c98fd8553dbae28]::path::PathBuf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) != lVar2) {
    uVar3 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar2) / 0x238;
    lVar2 = lVar2 + 0x1a0;
    do {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar2 + -0x1a0);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(lVar2);
      if (*(longlong *)(lVar2 + 0x80) != 0) {
        (*(code *)puVar1)();
      }
      lVar2 = lVar2 + 0x238;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


