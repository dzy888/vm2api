// 003c4a30 drop

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    do {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar1);
      lVar1 = lVar1 + 0x1a0;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


