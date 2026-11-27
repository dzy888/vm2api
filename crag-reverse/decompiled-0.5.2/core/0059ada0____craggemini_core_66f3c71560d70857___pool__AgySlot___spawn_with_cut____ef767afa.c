// 0059ada0 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  switch(*(undefined1 *)(param_1 + 0x9aa)) {
  case 3:
    if (*(char *)(param_1 + 0xcc8) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
                (param_1 + 0x9d0);
    }
    goto LAB_0059b3b1;
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
    goto LAB_0059b3b1;
  case 5:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0xa60);
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0xa58) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0xa58) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_0059b37a;
  case 6:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9b0);
    goto LAB_0059b36e;
  case 8:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9b0);
  case 7:
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0x7c8) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0x7c8) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    (*(code *)PTR_close_00799030)();
    goto LAB_0059b317;
  case 9:
    if (*(char *)(param_1 + 0xa59) == '\x04') {
      switch(*(undefined1 *)(param_1 + 0xcc7)) {
      case 3:
        goto switchD_0059b0a7_caseD_3;
      case 4:
        if (*(char *)(param_1 + 0x1159) == '\x03') {
          cVar2 = *(char *)(param_1 + 0xd1d);
          if (cVar2 == '\0') {
            lVar4 = 0xce0;
            goto switchD_0059b774_default;
          }
          if (cVar2 == '\x04') {
            lVar4 = 0xcf8;
            switch(*(undefined1 *)(param_1 + 0xe52)) {
            case 3:
              if (*(char *)(param_1 + 0xe90) == '\x03') {
                if (*(char *)(param_1 + 0xe88) == '\x03') {
                  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_1 + 0xe80);
                  goto LAB_0059b8e5;
                }
                if (*(char *)(param_1 + 0xe88) != '\0') goto LAB_0059b8e5;
                lVar3 = *(longlong *)(param_1 + 0xe68);
                goto LAB_0059b8d1;
              }
              goto LAB_0059b8e5;
            case 4:
              <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
                        (param_1 + 0xe58);
              break;
            case 5:
              if (*(char *)(param_1 + 0xe90) == '\x03') {
                if (*(char *)(param_1 + 0xe88) == '\x03') {
                  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_1 + 0xe80);
                }
                else if (*(char *)(param_1 + 0xe88) == '\0') {
                  lVar3 = *(longlong *)(param_1 + 0xe68);
                  goto joined_r0x0059b8b3;
                }
              }
              break;
            case 6:
              if (*(char *)(param_1 + 0xf60) == '\x03') {
                lVar3 = 0xf20;
                if (*(char *)(param_1 + 0xf58) == '\x03') {
                  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_1 + 0xf50);
                }
                else if ((*(char *)(param_1 + 0xf58) == '\0') &&
                        (*(longlong *)(param_1 + 0xf38) != 0)) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0059b774::switchdataD_0019ccfc,1);
                }
              }
              else {
                lVar3 = 0xf08;
                if (*(char *)(param_1 + 0xf60) != '\0') break;
              }
              lVar3 = *(longlong *)(param_1 + lVar3);
joined_r0x0059b8b3:
              if (lVar3 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
              break;
            default:
              goto switchD_0059b774_default;
            }
            lVar3 = *(longlong *)(param_1 + 0xe30);
LAB_0059b8d1:
            if (lVar3 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
LAB_0059b8e5:
            if ((*(char *)(param_1 + 0xe51) != '\0') && (*(longlong *)(param_1 + 0xe18) != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            *(undefined1 *)(param_1 + 0xe51) = 0;
            if (*(longlong *)(param_1 + 0xe00) == 0) goto switchD_0059b774_default;
LAB_0059b924:
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          else {
            if (cVar2 != '\x03') break;
            if (*(char *)(param_1 + 0xd70) == '\x03') {
              if (*(char *)(param_1 + 0xd68) == '\x03') {
                <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                ::drop(param_1 + 0xd60);
              }
              else if ((*(char *)(param_1 + 0xd68) == '\0') && (*(longlong *)(param_1 + 0xd48) != 0)
                      ) {
                (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0059b0a7::switchdataD_0019cce4,1);
              }
            }
            if (*(longlong *)(param_1 + 0xd20) != 0) goto LAB_0059b924;
          }
          lVar4 = 0xcf8;
        }
        else {
          lVar4 = 0xcc8;
          if (*(char *)(param_1 + 0x1159) != '\0') break;
        }
switchD_0059b774_default:
        if (*(longlong *)(param_1 + lVar4) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        break;
      case 5:
      case 8:
        <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>(param_1 + 0xcc8);
        break;
      case 6:
        break;
      case 7:
        if (((*(char *)(param_1 + 0xd58) == '\x03') && (*(char *)(param_1 + 0xd50) == '\x03')) &&
           ((*(char *)(param_1 + 0xd48) == '\x03' && (*(char *)(param_1 + 0xd40) == '\x03')))) {
          (*(code *)PTR_drop_007990e0)();
          if (*(longlong *)(param_1 + 0xd18) != 0) {
            (**(code **)(*(longlong *)(param_1 + 0xd18) + 0x18))();
          }
        }
        break;
      default:
        goto switchD_0059b0a7_default;
      }
      if (((*(char *)(param_1 + 0xcc4) != '\0') && (*(longlong *)(param_1 + 0xc98) != -1)) &&
         (*(longlong *)(param_1 + 0xc98) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0xcc4) = 0;
      if ((*(char *)(param_1 + 0xcc5) != '\0') &&
         (<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop((longlong *)(param_1 + 0xc80)), *(longlong *)(param_1 + 0xc80) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0xcc5) = 0;
      if (*(longlong *)(param_1 + 0xc68) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0xc50) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
switchD_0059b0a7_caseD_3:
      *(undefined1 *)(param_1 + 0xcc6) = 0;
      goto switchD_0059b0a7_default;
    }
    if (((*(char *)(param_1 + 0xa59) == '\x03') && (*(char *)(param_1 + 0xb10) == '\x03')) &&
       ((*(char *)(param_1 + 0xa98) == '\x03' &&
        ((*(char *)(param_1 + 0xb08) == '\x03' && (*(char *)(param_1 + 0xb00) == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0xad8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xad8) + 0x18))();
      }
    }
    goto LAB_0059b181;
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
    goto LAB_0059b248;
  case 0xe:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x9b0);
    *(undefined1 *)(param_1 + 0x99a) = 0;
    goto LAB_0059b248;
  case 0xf:
    if (*(char *)(param_1 + 0xe98) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xab0);
    }
    else if (*(char *)(param_1 + 0xe98) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x9b0);
    }
LAB_0059b248:
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x7e8);
    goto LAB_0059b254;
  default:
    goto switchD_0059adcf_default;
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
LAB_0059b254:
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
LAB_0059b2be:
  *(undefined2 *)(param_1 + 0x992) = 0;
  if (*(longlong *)(param_1 + 2000) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((*(longlong *)(param_1 + 0x7c0) != 0) && (*(char *)(param_1 + 0x999) != '\0')) &&
     (cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)(), cVar2 != '\0')) {
    (*(code *)PTR_drop_join_handle_slow_00799088)();
  }
  *(undefined1 *)(param_1 + 0x99e) = 0;
LAB_0059b317:
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
LAB_0059b36e:
  <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x708);
LAB_0059b37a:
  *(undefined1 *)(param_1 + 0x9a1) = 0;
  <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x460);
  if ((*(longlong *)(param_1 + 0x6d8) != -1) && (*(longlong *)(param_1 + 0x6d8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_0059b3b1:
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
    if (*(char *)(param_1 + 0x995) != '\0') goto LAB_0059b46e;
LAB_0059b44c:
    *(undefined1 *)(param_1 + 0x995) = 0;
    cVar2 = *(char *)(param_1 + 0x996);
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x994) = 0;
    if (*(char *)(param_1 + 0x995) == '\0') goto LAB_0059b44c;
LAB_0059b46e:
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x995) = 0;
    cVar2 = *(char *)(param_1 + 0x996);
  }
  if (cVar2 != '\0') {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1);
  }
  *(undefined1 *)(param_1 + 0x996) = 0;
  if (*(char *)(param_1 + 0x997) == '\0') {
    *(undefined1 *)(param_1 + 0x997) = 0;
    if (*(char *)(param_1 + 0x998) != '\0') goto LAB_0059b4e4;
LAB_0059b4be:
    *(undefined1 *)(param_1 + 0x998) = 0;
    plVar1 = *(longlong **)(param_1 + 0x670);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar4 = *plVar1;
    UNLOCK();
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x997) = 0;
    if (*(char *)(param_1 + 0x998) == '\0') goto LAB_0059b4be;
LAB_0059b4e4:
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x998) = 0;
    plVar1 = *(longlong **)(param_1 + 0x670);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar4 = *plVar1;
    UNLOCK();
  }
  if (lVar4 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x670);
  }
  *(undefined1 *)(param_1 + 0x9a5) = 0;
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::shm::ShmOwner>>
            (param_1 + 0x608);
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
switchD_0059adcf_default:
  return;
switchD_0059b0a7_default:
  <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0xa60);
  *(undefined1 *)(param_1 + 0xa58) = 0;
LAB_0059b181:
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
  goto LAB_0059b2be;
}


