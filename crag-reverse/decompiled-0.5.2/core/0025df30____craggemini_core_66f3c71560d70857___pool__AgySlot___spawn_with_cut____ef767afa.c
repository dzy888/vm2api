// 0025df30 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  switch(*(undefined1 *)(param_1 + 0x9aa)) {
  case 3:
    if (*(char *)(param_1 + 0xcc8) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
                (param_1 + 0x9d0);
    }
    goto LAB_0025e1d4;
  case 4:
    if (*(char *)(param_1 + 0xe98) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xab0);
    }
    else if (*(char *)(param_1 + 0xe98) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x9b0);
    }
    if (((*(longlong *)(param_1 + 0x6f0) == -1) &&
        (1 < ((uint)*(ulonglong *)(param_1 + 0x6f8) & 3) - 2)) &&
       ((*(ulonglong *)(param_1 + 0x6f8) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_0025e1d4;
  case 5:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0xa60);
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0xa58) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0xa58) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_0025e19d;
  case 6:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9b0);
    goto LAB_0025e191;
  case 8:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9b0);
  case 7:
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0x7c8) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0x7c8) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    (*(code *)PTR_close_00799030)();
    goto LAB_0025e13a;
  case 9:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_>>
              (param_1 + 0x9b0);
    *(undefined2 *)(param_1 + 0x992) = 0;
    lVar2 = *(longlong *)(param_1 + 2000);
    goto joined_r0x0025e674;
  case 10:
    if (*(longlong *)(param_1 + 0x9b0) != 2) {
      if (*(longlong *)(param_1 + 0x9b0) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x9b8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x9b8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x9c0);
    }
    break;
  case 0xb:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x9b0);
    *(undefined1 *)(param_1 + 0x99c) = 0;
    break;
  case 0xc:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9b0);
    break;
  case 0xd:
    if (*(longlong *)(param_1 + 0x9b0) != 2) {
      if (*(longlong *)(param_1 + 0x9b0) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x9b8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x9b8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x9c0);
    }
    goto LAB_0025e5ec;
  case 0xe:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x9b0);
    *(undefined1 *)(param_1 + 0x99a) = 0;
    goto LAB_0025e5ec;
  case 0xf:
    if (*(char *)(param_1 + 0xe98) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xab0);
    }
    else if (*(char *)(param_1 + 0xe98) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x9b0);
    }
LAB_0025e5ec:
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x7e8);
    goto LAB_0025e5f8;
  default:
    goto switchD_0025df5d_default;
  }
  if (*(longlong *)(param_1 + 0x940) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x99d) = 0;
  if (*(longlong *)(param_1 + 0x2a0) != -1) {
    if (((int)*(longlong *)(param_1 + 0x2a0) != 2) && (*(char *)(param_1 + 0x991) != '\0')) {
      <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x2a0);
    }
    *(undefined1 *)(param_1 + 0x991) = 0;
  }
  *(undefined1 *)(param_1 + 0x991) = 0;
LAB_0025e5f8:
  *(undefined1 *)(param_1 + 0x99b) = 0;
  if ((*(char *)(param_1 + 0x992) != '\0') && (*(longlong *)(param_1 + 0x140) != -1)) {
    if (((int)*(longlong *)(param_1 + 0x140) == 2) &&
       (((*(char *)(param_1 + 0x993) != '\0' &&
         (1 < ((uint)*(ulonglong *)(param_1 + 0x148) & 3) - 2)) &&
        ((*(ulonglong *)(param_1 + 0x148) & 3) != 0)))) {
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 0x993) = 0;
  }
  *(undefined1 *)(param_1 + 0x992) = 0;
  *(undefined2 *)(param_1 + 0x992) = 0;
  lVar2 = *(longlong *)(param_1 + 2000);
joined_r0x0025e674:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((*(longlong *)(param_1 + 0x7c0) != 0) && (*(char *)(param_1 + 0x999) != '\0')) &&
     (cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)(), cVar3 != '\0')) {
    (*(code *)PTR_drop_join_handle_slow_00799088)();
  }
  *(undefined1 *)(param_1 + 0x99e) = 0;
LAB_0025e13a:
  *(undefined1 *)(param_1 + 0x99e) = 0;
  *(undefined1 *)(param_1 + 0x999) = 0;
  plVar1 = *(longlong **)(param_1 + 0x7b8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
    ::drop_slow(param_1 + 0x7b8);
  }
  *(undefined1 *)(param_1 + 0x99f) = 0;
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x7b0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  *(undefined1 *)(param_1 + 0x9a0) = 0;
LAB_0025e191:
  <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x708);
LAB_0025e19d:
  *(undefined1 *)(param_1 + 0x9a1) = 0;
  <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x460);
  if ((*(longlong *)(param_1 + 0x6d8) != -1) && (*(longlong *)(param_1 + 0x6d8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_0025e1d4:
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x698);
  *(undefined1 *)(param_1 + 0x9a2) = 0;
  plVar1 = *(longlong **)(param_1 + 0x690);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
    drop_slow(param_1 + 0x690);
  }
  *(undefined1 *)(param_1 + 0x9a3) = 0;
  if (*(longlong *)(param_1 + 0x678) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9a4) = 0;
  if (*(char *)(param_1 + 0x994) == '\0') {
    *(undefined1 *)(param_1 + 0x994) = 0;
    if (*(char *)(param_1 + 0x995) != '\0') goto LAB_0025e291;
LAB_0025e26f:
    *(undefined1 *)(param_1 + 0x995) = 0;
    cVar3 = *(char *)(param_1 + 0x996);
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x994) = 0;
    if (*(char *)(param_1 + 0x995) == '\0') goto LAB_0025e26f;
LAB_0025e291:
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x995) = 0;
    cVar3 = *(char *)(param_1 + 0x996);
  }
  if (cVar3 != '\0') {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1);
  }
  *(undefined1 *)(param_1 + 0x996) = 0;
  if (*(char *)(param_1 + 0x997) == '\0') {
    *(undefined1 *)(param_1 + 0x997) = 0;
    if (*(char *)(param_1 + 0x998) != '\0') goto LAB_0025e307;
LAB_0025e2e1:
    *(undefined1 *)(param_1 + 0x998) = 0;
    plVar1 = *(longlong **)(param_1 + 0x670);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar2 = *plVar1;
    UNLOCK();
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x997) = 0;
    if (*(char *)(param_1 + 0x998) == '\0') goto LAB_0025e2e1;
LAB_0025e307:
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x998) = 0;
    plVar1 = *(longlong **)(param_1 + 0x670);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar2 = *plVar1;
    UNLOCK();
  }
  if (lVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x670);
  }
  *(undefined1 *)(param_1 + 0x9a5) = 0;
  if (*(longlong *)(param_1 + 0x608) != -1) {
    <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
    drop((longlong *)(param_1 + 0x608));
    if (*(longlong *)(param_1 + 0x608) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    (*(code *)PTR_munmap_007990b8)();
  }
  *(undefined1 *)(param_1 + 0x9a6) = 0;
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x100);
  if (*(int *)(param_1 + 0x118) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9a7) = 0;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9a8) = 0;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9a9) = 0;
switchD_0025df5d_default:
  return;
}


