// 002e9580 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}::{closure#1}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}::{closure#1}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::_closure_0_::_closure_1_>>
          (longlong *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x10a1) == '\x04') {
    if ((char)param_1[0x215] == '\0') {
      plVar1 = (longlong *)param_1[0x216];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = (longlong *)param_1[0x216];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x217);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x10a1) != '\x03') goto LAB_002e967e;
    if (((((char)param_1[0x23d] == '\x03') && ((char)param_1[0x23c] == '\x03')) &&
        ((char)param_1[0x23b] == '\x03')) &&
       (((char)param_1[0x23a] == '\x03' && ((char)param_1[0x239] == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (param_1[0x234] != 0) {
        (**(code **)(param_1[0x234] + 0x18))();
      }
    }
    if (param_1[0x215] != 2) {
      if (param_1[0x215] == 0) {
        plVar1 = (longlong *)param_1[0x216];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = (longlong *)param_1[0x216];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x217);
    }
  }
  *(undefined1 *)(param_1 + 0x214) = 0;
LAB_002e967e:
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


