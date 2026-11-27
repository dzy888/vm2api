// 002f0140 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::complete_oauth::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::complete_oauth::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::complete_oauth::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x18d8) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::_closure_0_>
              (param_1 + 0x88);
    plVar1 = *(longlong **)(param_1 + 0x80);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x80);
      return;
    }
  }
  return;
}


