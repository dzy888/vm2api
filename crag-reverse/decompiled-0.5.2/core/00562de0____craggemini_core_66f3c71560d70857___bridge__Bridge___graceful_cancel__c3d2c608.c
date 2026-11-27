// 00562de0 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::graceful_cancel::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  switch(*(undefined1 *)(param_1 + 0x70)) {
  case 3:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::_closure_0_>(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0x78) == 2) {
      return;
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x80);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x80);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x88);
    return;
  case 4:
    if (*(longlong *)(param_1 + 0x78) != 2) {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x88);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x270) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                (param_1 + 0xe8);
    }
    break;
  case 6:
    if (*(longlong *)(param_1 + 0x78) != 2) {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x88);
    }
    break;
  default:
    goto switchD_00562e0a_default;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x68);
  if (((uVar2 != 0 && *(char *)(param_1 + 0x60) == '\0') && (1 < ((uint)uVar2 & 3) - 2)) &&
     ((uVar2 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
switchD_00562e0a_default:
  return;
}


