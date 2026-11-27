// 00584d30 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00584d61 */
/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>>::
drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(lVar2 + 0x18);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


