// 0039fd30 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
          (longlong *param_1)

{
  longlong *plVar1;
  
  if (((((char)param_1[0x11] == '\x03') && ((char)param_1[0x28] == '\x03')) &&
      ((char)param_1[0x27] == '\x03')) &&
     (((char)param_1[0x26] == '\x03' && ((char)param_1[0x25] == '\x03')))) {
    (*(code *)PTR_drop_007990e0)();
    if (param_1[0x20] != 0) {
      (**(code **)(param_1[0x20] + 0x18))();
    }
  }
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 == 0) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
  return;
}


