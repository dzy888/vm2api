// 00499950 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>

/* WARNING: Switch with 1 destination removed at 0x004999a4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if ((char)param_1[8] == '\0') {
    plVar1 = (longlong *)param_1[3];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 3);
    }
  }
  else {
    if ((char)param_1[8] != '\x03') {
      return;
    }
    plVar1 = (longlong *)param_1[3];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 3);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


