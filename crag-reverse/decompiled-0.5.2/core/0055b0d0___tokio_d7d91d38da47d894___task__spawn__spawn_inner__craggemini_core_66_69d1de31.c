// 0055b0d0 <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0055b125 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x28);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x28);
    }
  }
  else {
    if (*(char *)(param_1 + 0x50) != '\x03') {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x28);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x28);
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


