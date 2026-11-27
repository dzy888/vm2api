// 002f0090 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::scale_account::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::scale_account::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::scale_account::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x3330) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scale_extended::_closure_0_>
              (param_1 + 0x1d8);
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x68);
    plVar1 = *(longlong **)(param_1 + 0x60);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x60);
    }
    plVar1 = *(longlong **)(param_1 + 0x58);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x58);
      return;
    }
  }
  return;
}


