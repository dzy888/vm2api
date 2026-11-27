// 002f02a0 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::upsert_account::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::upsert_account::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::upsert_account::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x359);
  if (cVar1 == '\0') {
    <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x1f51) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
                (param_1 + 0x740);
      *(undefined2 *)(param_1 + 0x1f52) = 0;
      *(undefined1 *)(param_1 + 0x1f54) = 0;
      plVar2 = *(longlong **)(param_1 + 0x350);
      goto joined_r0x002f03a3;
    }
    if (*(char *)(param_1 + 0x1f51) == '\0') {
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x360);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>(param_1 + 0x4e8)
    ;
    plVar2 = *(longlong **)(param_1 + 0x370);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x370);
    }
    plVar2 = *(longlong **)(param_1 + 0x368);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x368);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x378);
    plVar2 = *(longlong **)(param_1 + 0x360);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x360);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x350);
joined_r0x002f03a3:
  if ((plVar2 != (longlong *)0x0) && (*(char *)(param_1 + 0x35b) != '\0')) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x350);
    }
  }
  *(undefined2 *)(param_1 + 0x35a) = 0;
  return;
}


