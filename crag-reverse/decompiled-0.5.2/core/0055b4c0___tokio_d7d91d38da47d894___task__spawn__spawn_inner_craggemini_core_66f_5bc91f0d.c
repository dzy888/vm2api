// 0055b4c0 <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::_closure_0_>::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0x1098)) {
  case 0:
    <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x10);
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x10);
    if (*(int *)(param_1 + 0x28) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    (*(code *)PTR_drop_007990c8)();
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    plVar1 = *(longlong **)(param_1 + 0x38);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
      ::drop_slow(param_1 + 0x38);
      return;
    }
    return;
  default:
    goto switchD_0055b4eb_caseD_1;
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x10e0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x10e0) + 0x18))();
    }
    if (((*(char *)(param_1 + 0x11d0) == '\x03') && (*(char *)(param_1 + 0x11c8) == '\x03')) &&
       ((*(char *)(param_1 + 0x11c0) == '\x03' &&
        ((*(char *)(param_1 + 0x11b8) == '\x03' && (*(char *)(param_1 + 0x11b0) == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x1188) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1188) + 0x18))();
      }
    }
    goto LAB_0055b6d8;
  case 4:
    if (((*(char *)(param_1 + 0x1170) == '\x03') && (*(char *)(param_1 + 0x1168) == '\x03')) &&
       ((*(char *)(param_1 + 0x1160) == '\x03' &&
        ((*(char *)(param_1 + 0x1158) == '\x03' && (*(char *)(param_1 + 0x1150) == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x1128) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1128) + 0x18))();
      }
    }
    break;
  case 5:
    if ((((*(char *)(param_1 + 0x1170) == '\x03') && (*(char *)(param_1 + 0x1168) == '\x03')) &&
        (*(char *)(param_1 + 0x1160) == '\x03')) &&
       ((*(char *)(param_1 + 0x1158) == '\x03' && (*(char *)(param_1 + 0x1150) == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x1128) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1128) + 0x18))();
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x1088) != 0) &&
      (1 < ((uint)*(ulonglong *)(param_1 + 0x1090) & 3) - 2)) &&
     ((*(ulonglong *)(param_1 + 0x1090) & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
LAB_0055b6d8:
  if (*(longlong *)(param_1 + 0x1070) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
    ::drop_slow(param_1 + 0x68);
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x60);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x40);
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x40);
  if (*(int *)(param_1 + 0x58) != -1) {
    (*(code *)PTR_close_00799030)();
  }
switchD_0055b4eb_caseD_1:
  return;
}


