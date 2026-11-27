// 00498490 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn::{closure#0}>

/* WARNING: Type propagation algorithm not settling */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x1188) != '\x03') {
    return;
  }
  if (0xc < *(byte *)(param_1 + 0x9d2) - 3) {
    return;
  }
  switch((uint)*(byte *)(param_1 + 0x9d2)) {
  case 3:
    if (*(char *)(param_1 + 0xcf0) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
                (param_1 + 0x9f8);
    }
    goto LAB_00498ab2;
  case 4:
    if (*(char *)(param_1 + 0xec0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xad8);
    }
    else if (*(char *)(param_1 + 0xec0) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x9d8);
    }
    if (((*(longlong *)(param_1 + 0x718) == -1) &&
        (1 < ((uint)*(ulonglong *)(param_1 + 0x720) & 3) - 2)) &&
       ((*(ulonglong *)(param_1 + 0x720) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_00498ab2;
  case 5:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0xa88);
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0xa80) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0xa80) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_00498a7b;
  case 6:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9d8);
    goto LAB_00498a6f;
  case 8:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9d8);
  case 7:
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0x7f0) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0x7f0) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    (*(code *)PTR_close_00799030)();
    goto LAB_00498a17;
  case 9:
    if (*(char *)(param_1 + 0xa81) == '\x04') {
      switch(*(undefined1 *)(param_1 + 0xcef)) {
      case 3:
        goto switchD_004987a7_caseD_3;
      case 4:
        if (*(char *)(param_1 + 0x1181) == '\x03') {
          cVar2 = *(char *)(param_1 + 0xd45);
          if (cVar2 == '\0') {
            lVar4 = 0xd08;
            goto switchD_00498e77_default;
          }
          if (cVar2 == '\x04') {
            lVar4 = 0xd20;
            switch(*(undefined1 *)(param_1 + 0xe7a)) {
            case 3:
              if (*(char *)(param_1 + 0xeb8) == '\x03') {
                if (*(char *)(param_1 + 0xeb0) == '\x03') {
                  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_1 + 0xea8);
                  goto LAB_00498fe8;
                }
                if (*(char *)(param_1 + 0xeb0) != '\0') goto LAB_00498fe8;
                lVar3 = *(longlong *)(param_1 + 0xe90);
                goto LAB_00498fd4;
              }
              goto LAB_00498fe8;
            case 4:
              <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
                        (param_1 + 0xe80);
              break;
            case 5:
              if (*(char *)(param_1 + 0xeb8) == '\x03') {
                if (*(char *)(param_1 + 0xeb0) == '\x03') {
                  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_1 + 0xea8);
                }
                else if (*(char *)(param_1 + 0xeb0) == '\0') {
                  lVar3 = *(longlong *)(param_1 + 0xe90);
                  goto joined_r0x00498fb6;
                }
              }
              break;
            case 6:
              if (*(char *)(param_1 + 0xf88) == '\x03') {
                lVar3 = 0xf48;
                if (*(char *)(param_1 + 0xf80) == '\x03') {
                  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_1 + 0xf78);
                }
                else if ((*(char *)(param_1 + 0xf80) == '\0') &&
                        (*(longlong *)(param_1 + 0xf60) != 0)) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00498e77::switchdataD_00195d48,1);
                }
              }
              else {
                lVar3 = 0xf30;
                if (*(char *)(param_1 + 0xf88) != '\0') break;
              }
              lVar3 = *(longlong *)(param_1 + lVar3);
joined_r0x00498fb6:
              if (lVar3 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
              break;
            default:
              goto switchD_00498e77_default;
            }
            lVar3 = *(longlong *)(param_1 + 0xe58);
LAB_00498fd4:
            if (lVar3 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
LAB_00498fe8:
            if ((*(char *)(param_1 + 0xe79) != '\0') && (*(longlong *)(param_1 + 0xe40) != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            *(undefined1 *)(param_1 + 0xe79) = 0;
            if (*(longlong *)(param_1 + 0xe28) == 0) goto switchD_00498e77_default;
LAB_00499027:
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          else {
            if (cVar2 != '\x03') break;
            if (*(char *)(param_1 + 0xd98) == '\x03') {
              if (*(char *)(param_1 + 0xd90) == '\x03') {
                <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                ::drop(param_1 + 0xd88);
              }
              else if ((*(char *)(param_1 + 0xd90) == '\0') && (*(longlong *)(param_1 + 0xd70) != 0)
                      ) {
                (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004987a7::switchdataD_00195d30,1);
              }
            }
            if (*(longlong *)(param_1 + 0xd48) != 0) goto LAB_00499027;
          }
          lVar4 = 0xd20;
        }
        else {
          lVar4 = 0xcf0;
          if (*(char *)(param_1 + 0x1181) != '\0') break;
        }
switchD_00498e77_default:
        if (*(longlong *)(param_1 + lVar4) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        break;
      case 5:
      case 8:
        <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>(param_1 + 0xcf0);
        break;
      case 6:
        break;
      case 7:
        if (((*(char *)(param_1 + 0xd80) == '\x03') && (*(char *)(param_1 + 0xd78) == '\x03')) &&
           ((*(char *)(param_1 + 0xd70) == '\x03' && (*(char *)(param_1 + 0xd68) == '\x03')))) {
          (*(code *)PTR_drop_007990e0)();
          if (*(longlong *)(param_1 + 0xd40) != 0) {
            (**(code **)(*(longlong *)(param_1 + 0xd40) + 0x18))();
          }
        }
        break;
      default:
        goto switchD_004987a7_default;
      }
      if (((*(char *)(param_1 + 0xcec) != '\0') && (*(longlong *)(param_1 + 0xcc0) != -1)) &&
         (*(longlong *)(param_1 + 0xcc0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0xcec) = 0;
      if ((*(char *)(param_1 + 0xced) != '\0') &&
         (<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop((longlong *)(param_1 + 0xca8)), *(longlong *)(param_1 + 0xca8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0xced) = 0;
      if (*(longlong *)(param_1 + 0xc90) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0xc78) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
switchD_004987a7_caseD_3:
      *(undefined1 *)(param_1 + 0xcee) = 0;
      goto switchD_004987a7_default;
    }
    if (((*(char *)(param_1 + 0xa81) == '\x03') && (*(char *)(param_1 + 0xb38) == '\x03')) &&
       ((*(char *)(param_1 + 0xac0) == '\x03' &&
        ((*(char *)(param_1 + 0xb30) == '\x03' && (*(char *)(param_1 + 0xb28) == '\x03')))))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0xb00) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xb00) + 0x18))();
      }
    }
    goto LAB_00498881;
  case 10:
    if (*(longlong *)(param_1 + 0x9d8) != 2) {
      if (*(longlong *)(param_1 + 0x9d8) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x9e0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x9e0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x9e8);
    }
    break;
  case 0xb:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x9d8);
    *(undefined1 *)(param_1 + 0x9c4) = 0;
    break;
  case 0xc:
    <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
              (param_1 + 0x9d8);
    break;
  case 0xd:
    if (*(longlong *)(param_1 + 0x9d8) != 2) {
      if (*(longlong *)(param_1 + 0x9d8) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x9e0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x9e0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x9e8);
    }
    goto LAB_00498949;
  case 0xe:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x9d8);
    *(undefined1 *)(param_1 + 0x9c2) = 0;
    goto LAB_00498949;
  case 0xf:
    if (*(char *)(param_1 + 0xec0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xad8);
    }
    else if (*(char *)(param_1 + 0xec0) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x9d8);
    }
LAB_00498949:
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x810);
    goto LAB_00498955;
  }
  if (*(longlong *)(param_1 + 0x968) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9c5) = 0;
  if (*(longlong *)(param_1 + 0x2c8) != -1) {
    if (((int)*(longlong *)(param_1 + 0x2c8) != 2) && (*(char *)(param_1 + 0x9b9) != '\0')) {
      <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x2c8);
    }
    *(undefined1 *)(param_1 + 0x9b9) = 0;
  }
  *(undefined1 *)(param_1 + 0x9b9) = 0;
LAB_00498955:
  *(undefined1 *)(param_1 + 0x9c3) = 0;
  if ((*(char *)(param_1 + 0x9ba) != '\0') && (*(longlong *)(param_1 + 0x168) != -1)) {
    if (((int)*(longlong *)(param_1 + 0x168) == 2) &&
       (((*(char *)(param_1 + 0x9bb) != '\0' &&
         (1 < ((uint)*(ulonglong *)(param_1 + 0x170) & 3) - 2)) &&
        ((*(ulonglong *)(param_1 + 0x170) & 3) != 0)))) {
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 0x9bb) = 0;
  }
  *(undefined1 *)(param_1 + 0x9ba) = 0;
LAB_004989be:
  *(undefined2 *)(param_1 + 0x9ba) = 0;
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((*(longlong *)(param_1 + 0x7e8) != 0) && (*(char *)(param_1 + 0x9c1) != '\0')) &&
     (cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)(), cVar2 != '\0')) {
    (*(code *)PTR_drop_join_handle_slow_00799088)();
  }
  *(undefined1 *)(param_1 + 0x9c6) = 0;
LAB_00498a17:
  *(undefined1 *)(param_1 + 0x9c6) = 0;
  *(undefined1 *)(param_1 + 0x9c1) = 0;
  plVar1 = *(longlong **)(param_1 + 0x7e0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
    ::drop_slow(param_1 + 0x7e0);
  }
  *(undefined1 *)(param_1 + 0x9c7) = 0;
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x7d8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  *(undefined1 *)(param_1 + 0x9c8) = 0;
LAB_00498a6f:
  <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x730);
LAB_00498a7b:
  *(undefined1 *)(param_1 + 0x9c9) = 0;
  <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x488);
  if ((*(longlong *)(param_1 + 0x700) != -1) && (*(longlong *)(param_1 + 0x700) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_00498ab2:
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x6c0);
  *(undefined1 *)(param_1 + 0x9ca) = 0;
  plVar1 = *(longlong **)(param_1 + 0x6b8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
    drop_slow(param_1 + 0x6b8);
  }
  *(undefined1 *)(param_1 + 0x9cb) = 0;
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9cc) = 0;
  if (*(char *)(param_1 + 0x9bc) == '\0') {
    *(undefined1 *)(param_1 + 0x9bc) = 0;
    cVar2 = *(char *)(param_1 + 0x9bd);
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x9bc) = 0;
    cVar2 = *(char *)(param_1 + 0x9bd);
  }
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x9bd) = 0;
    cVar2 = *(char *)(param_1 + 0x9be);
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x9bd) = 0;
    cVar2 = *(char *)(param_1 + 0x9be);
  }
  if (cVar2 != '\0') {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x9be) = 0;
  if (*(char *)(param_1 + 0x9bf) == '\0') {
    *(undefined1 *)(param_1 + 0x9bf) = 0;
    cVar2 = *(char *)(param_1 + 0x9c0);
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x9bf) = 0;
    cVar2 = *(char *)(param_1 + 0x9c0);
  }
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x9c0) = 0;
    plVar1 = *(longlong **)(param_1 + 0x698);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar4 = *plVar1;
    UNLOCK();
  }
  else {
    (*(code *)PTR_close_00799030)();
    *(undefined1 *)(param_1 + 0x9c0) = 0;
    plVar1 = *(longlong **)(param_1 + 0x698);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar4 = *plVar1;
    UNLOCK();
  }
  if (lVar4 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x698);
  }
  *(undefined1 *)(param_1 + 0x9cd) = 0;
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::shm::ShmOwner>>
            (param_1 + 0x630);
  *(undefined1 *)(param_1 + 0x9ce) = 0;
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x128);
  if (*(int *)(param_1 + 0x140) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x618) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9cf) = 0;
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9d0) = 0;
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x588) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x9d1) = 0;
  return;
switchD_004987a7_default:
  <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0xa88);
  *(undefined1 *)(param_1 + 0xa80) = 0;
LAB_00498881:
  if (*(longlong *)(param_1 + 0x9d8) != 2) {
    if (*(longlong *)(param_1 + 0x9d8) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x9e0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x9e0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x9e8);
  }
  goto LAB_004989be;
}


