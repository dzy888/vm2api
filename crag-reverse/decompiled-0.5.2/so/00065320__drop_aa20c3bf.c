// 00065320 drop

/* WARNING: Switch with 1 destination removed at 0x00065381 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<(serde_core[48776c27239fa21f]::private::content::Content,
   serde_core[48776c27239fa21f]::private::content::Content)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar3 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar2) >> 6;
  while (bVar4 = uVar3 != 0, uVar3 = uVar3 - 1, bVar4) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(lVar2);
    lVar1 = lVar2 + 0x20;
    lVar2 = lVar2 + 0x40;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(lVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


