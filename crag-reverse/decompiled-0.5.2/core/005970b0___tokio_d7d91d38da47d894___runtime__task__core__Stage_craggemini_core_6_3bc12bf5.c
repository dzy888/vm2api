// 005970b0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00597111 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::_closure_0_>>
          (int *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    if (*(longlong *)(param_1 + 2) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 6);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    if (puVar1[1] == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)();
    return;
  }
  switch((char)param_1[0x424]) {
  case '\0':
    <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 2);
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 2);
    if (param_1[8] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    (*(code *)PTR_drop_007990c8)();
    plVar3 = *(longlong **)(param_1 + 10);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    plVar3 = *(longlong **)(param_1 + 0xc);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
      ::drop_slow(param_1 + 0xc);
      return;
    }
    return;
  default:
    goto switchD_00597136_caseD_1;
  case '\x03':
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x436) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x436) + 0x18))();
    }
    if ((((char)param_1[0x472] == '\x03') && ((char)param_1[0x470] == '\x03')) &&
       (((char)param_1[0x46e] == '\x03' &&
        (((char)param_1[0x46c] == '\x03' && ((char)param_1[0x46a] == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x460) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x460) + 0x18))();
      }
    }
    goto LAB_00597323;
  case '\x04':
    if ((((char)param_1[0x45a] == '\x03') && ((char)param_1[0x458] == '\x03')) &&
       (((char)param_1[0x456] == '\x03' &&
        (((char)param_1[0x454] == '\x03' && ((char)param_1[0x452] == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x448) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x448) + 0x18))();
      }
    }
    break;
  case '\x05':
    if (((((char)param_1[0x45a] == '\x03') && ((char)param_1[0x458] == '\x03')) &&
        ((char)param_1[0x456] == '\x03')) &&
       (((char)param_1[0x454] == '\x03' && ((char)param_1[0x452] == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x448) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x448) + 0x18))();
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x420) != 0) &&
      (1 < ((uint)*(ulonglong *)(param_1 + 0x422) & 3) - 2)) &&
     ((*(ulonglong *)(param_1 + 0x422) & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
LAB_00597323:
  if (*(longlong *)(param_1 + 0x41a) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
    ::drop_slow(param_1 + 0x18);
  }
  (*(code *)PTR_drop_007990c8)();
  plVar3 = *(longlong **)(param_1 + 0x16);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0xe);
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xe);
  if (param_1[0x14] != -1) {
    (*(code *)PTR_close_00799030)();
  }
switchD_00597136_caseD_1:
  return;
}


