// 003dbf80 <craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0x1088)) {
  case 0:
    <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    (*(code *)PTR_drop_007990c8)();
    plVar1 = *(longlong **)(param_1 + 0x20);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    plVar1 = *(longlong **)(param_1 + 0x28);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
      ::drop_slow(param_1 + 0x28);
      return;
    }
    return;
  default:
    goto switchD_003dbfab_caseD_1;
  case 3:
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,craggemini_core[66f3c71560d70857]::guard::pty_read::_closure_0_)>
              (param_1 + 0x10a8);
    goto LAB_003dc10e;
  case 4:
    if (((*(char *)(param_1 + 0x1160) == '\x03') && (*(char *)(param_1 + 0x1158) == '\x03')) &&
       ((*(char *)(param_1 + 0x1150) == '\x03' &&
        ((*(char *)(param_1 + 0x1148) == '\x03' && (*(char *)(param_1 + 0x1140) == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x1118) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1118) + 0x18))();
      }
    }
    break;
  case 5:
    if ((((*(char *)(param_1 + 0x1160) == '\x03') && (*(char *)(param_1 + 0x1158) == '\x03')) &&
        (*(char *)(param_1 + 0x1150) == '\x03')) &&
       ((*(char *)(param_1 + 0x1148) == '\x03' && (*(char *)(param_1 + 0x1140) == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x1118) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1118) + 0x18))();
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x1078) != 0) &&
      (1 < ((uint)*(ulonglong *)(param_1 + 0x1080) & 3) - 2)) &&
     ((*(ulonglong *)(param_1 + 0x1080) & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
LAB_003dc10e:
  if (*(longlong *)(param_1 + 0x1060) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
    ::drop_slow(param_1 + 0x58);
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x50);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x30);
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x30);
  if (*(int *)(param_1 + 0x48) != -1) {
    (*(code *)PTR_close_00799030)();
  }
switchD_003dbfab_caseD_1:
  return;
}


