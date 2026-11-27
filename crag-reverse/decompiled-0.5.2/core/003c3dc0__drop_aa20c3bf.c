// 003c3dc0 drop

/* WARNING: Switch with 1 destination removed at 0x003c3e15 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<serde_core[48776c27239fa21f]::private::content::Content>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<serde_core[48776c27239fa21f]::private::content::Content>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  for (lVar2 = ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 5) + 1;
      lVar2 != 1; lVar2 = lVar2 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(lVar1);
    lVar1 = lVar1 + 0x20;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


