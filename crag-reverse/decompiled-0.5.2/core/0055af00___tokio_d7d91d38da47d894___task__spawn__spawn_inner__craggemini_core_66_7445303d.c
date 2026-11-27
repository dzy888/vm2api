// 0055af00 <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x30d8) != '\0') {
    if (*(char *)(param_1 + 0x30d8) != '\x03') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>(param_1 + 0x18);
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
    drop_slow((undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


