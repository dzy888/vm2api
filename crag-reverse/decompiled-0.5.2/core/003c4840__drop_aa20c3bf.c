// 003c4840 drop

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::pool::AgySlot> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  for (lVar2 = *(longlong *)(param_1 + 0x10) + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AgySlot>
              (lVar1);
    lVar1 = lVar1 + 0x848;
  }
  return;
}


