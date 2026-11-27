// 002f01b0 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::remove_account::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::remove_account::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::remove_account::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x31) == '\x03') {
    if (*(char *)(param_1 + 0xed1) != '\x03') {
      return;
    }
    lVar2 = 0xed0;
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x2f0);
  }
  else {
    if (*(char *)(param_1 + 0x31) != '\x04') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>(param_1 + 0x50);
    plVar1 = *(longlong **)(param_1 + 0x48);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x48);
    }
    plVar1 = *(longlong **)(param_1 + 0x40);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar2 = 0x30;
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x40);
    }
  }
  *(undefined1 *)(param_1 + lVar2) = 0;
  return;
}


