// 003d4530 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
          (longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0x1a0)) {
  case 3:
    if (((*(char *)(param_1 + 0x218) == '\x03') && (*(char *)(param_1 + 0x210) == '\x03')) &&
       (*(char *)(param_1 + 0x1c8) == '\x04')) {
      (*(code *)PTR_drop_00799100)();
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x18))();
      }
    }
    break;
  case 4:
    if (*(longlong *)(param_1 + 0x1a8) != 2) {
      if (*(longlong *)(param_1 + 0x1a8) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x1b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x1b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x1b8);
    }
    goto LAB_003d47cf;
  case 5:
    if (*(longlong *)(param_1 + 0x1a8) != 2) {
      if (*(longlong *)(param_1 + 0x1a8) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x1b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x1b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x1b8);
    }
    if (((*(int *)(param_1 + 0x188) == 1) && (1 < ((uint)*(ulonglong *)(param_1 + 400) & 3) - 2)) &&
       ((*(ulonglong *)(param_1 + 400) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_003d47cf;
  case 6:
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x1b0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x1b0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x1b8);
LAB_003d47cf:
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0xe0);
    param_2 = 1;
    (*(code *)PTR_release_00799050)();
    break;
  case 7:
    if (((*(char *)(param_1 + 0x218) == '\x03') && (*(char *)(param_1 + 0x210) == '\x03')) &&
       (*(char *)(param_1 + 0x1c8) == '\x04')) {
      (*(code *)PTR_drop_00799100)();
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x18))();
      }
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x690) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x2a8);
    }
    else if (*(char *)(param_1 + 0x690) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x1a8);
    }
    param_2 = 1;
    (*(code *)PTR_release_00799050)();
    break;
  case 9:
    if (((*(char *)(param_1 + 0x218) == '\x03') && (*(char *)(param_1 + 0x210) == '\x03')) &&
       (*(char *)(param_1 + 0x1c8) == '\x04')) {
      (*(code *)PTR_drop_00799100)();
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x18))();
      }
    }
    break;
  default:
    goto switchD_003d455b_default;
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x10,param_2);
switchD_003d455b_default:
  return;
}


