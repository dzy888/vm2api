// 002e9410 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#8}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#8}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_::_closure_8_>>
          (longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[0x211] == '\x03') {
    if (((((char)param_1[0x22c] != '\x03') || ((char)param_1[0x22b] != '\x03')) ||
        ((char)param_1[0x22a] != '\x03')) ||
       (((char)param_1[0x229] != '\x03' || ((char)param_1[0x228] != '\x03')))) goto LAB_002e94bc;
    (*(code *)PTR_drop_007990e0)();
  }
  else {
    if ((((char)param_1[0x211] != '\x04') || ((char)param_1[0x22c] != '\x03')) ||
       (((char)param_1[0x22b] != '\x03' ||
        ((((char)param_1[0x22a] != '\x03' || ((char)param_1[0x229] != '\x03')) ||
         ((char)param_1[0x228] != '\x03')))))) goto LAB_002e94bc;
    (*(code *)PTR_drop_007990e0)();
  }
  if (param_1[0x223] != 0) {
    (**(code **)(param_1[0x223] + 0x18))();
  }
LAB_002e94bc:
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


