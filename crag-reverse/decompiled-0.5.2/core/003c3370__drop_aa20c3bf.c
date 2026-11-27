// 003c3370 drop

/* WARNING: Switch with 1 destination removed at 0x003c33db */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8) + 0x28;
  for (lVar2 = ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 3) *
               -0x5c87b5f9d4d1bc25 + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(lVar1);
    lVar1 = lVar1 + 0x298;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


