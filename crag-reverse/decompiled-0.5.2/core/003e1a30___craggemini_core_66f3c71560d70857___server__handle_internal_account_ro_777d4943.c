// 003e1a30 <craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003e1aac */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switch(*(undefined1 *)(param_1 + 0x250)) {
  case 0:
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x108) == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)();
    return;
  default:
    goto switchD_003e1a5d_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x289) == '\x03') {
      if (*(char *)(param_1 + 0x1129) == '\x03') {
        lVar2 = 0xed0;
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0x548);
        goto LAB_003e1eec;
      }
    }
    else if (*(char *)(param_1 + 0x289) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>
                (param_1 + 0x2a8);
      plVar1 = *(longlong **)(param_1 + 0x2a0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x2a0);
      }
      plVar1 = *(longlong **)(param_1 + 0x298);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      lVar2 = 0x30;
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x298);
      }
LAB_003e1eec:
      *(undefined1 *)(param_1 + 600 + lVar2) = 0;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x288) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
                (param_1 + 0x378);
      plVar1 = *(longlong **)(param_1 + 0x370);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x370);
      }
      <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(param_1 + 0x290);
    }
    else if ((*(char *)(param_1 + 0x288) == '\x03') && (*(char *)(param_1 + 0x1648) == '\x03')) {
      <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
                (param_1 + 0x2c8);
      plVar1 = *(longlong **)(param_1 + 0x2c0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x2c0);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x4e0) == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x388) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x388) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                (param_1 + 0x3a8);
      (*(code *)PTR_drop_007994f0)();
      *(undefined1 *)(param_1 + 0x4e2) = 0;
    }
    else if (*(char *)(param_1 + 0x4e0) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 600);
    }
    goto switchD_003e1d10_caseD_1;
  case 6:
    switch(*(undefined1 *)(param_1 + 0x321)) {
    case 0:
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003e1d10::switchdataD_0019322c,1);
      }
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (0 < *(longlong *)(param_1 + 0x2d8)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    default:
      goto switchD_003e1d10_caseD_1;
    case 3:
      if (*(char *)(param_1 + 0x1209) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0x628);
        *(undefined1 *)(param_1 + 0x1208) = 0;
      }
      break;
    case 4:
      if (*(char *)(param_1 + 0x2129) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::_closure_0_>
                  (param_1 + 0x530);
        *(undefined4 *)(param_1 + 0x212a) = 0;
        plVar1 = *(longlong **)(param_1 + 0x388);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x388);
        }
        *(undefined2 *)(param_1 + 0x212e) = 0;
        *(undefined1 *)(param_1 + 0x2130) = 0;
      }
      else if (*(char *)(param_1 + 0x2129) == '\0') {
        if (*(longlong *)(param_1 + 0x328) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003e1d10::switchdataD_0019322c,1);
        }
        if (*(longlong *)(param_1 + 0x340) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (0 < *(longlong *)(param_1 + 0x358)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      break;
    case 5:
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
                (param_1 + 0x338);
      plVar1 = *(longlong **)(param_1 + 0x330);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x330);
      }
      plVar1 = *(longlong **)(param_1 + 0x328);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x328);
      }
    }
    if ((*(char *)(param_1 + 0x323) != '\0') && (0 < *(longlong *)(param_1 + 0x358))) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x323) = 0;
    if ((*(char *)(param_1 + 0x324) != '\0') && (*(longlong *)(param_1 + 0x340) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x324) = 0;
    if ((*(char *)(param_1 + 0x325) != '\0') && (*(longlong *)(param_1 + 0x328) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x325) = 0;
switchD_003e1d10_caseD_1:
    *(undefined2 *)(param_1 + 0x253) = 0;
    *(undefined1 *)(param_1 + 0x255) = 0;
    break;
  case 7:
    if (*(char *)(param_1 + 0x4e0) == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x388) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x388) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                (param_1 + 0x3a8);
      (*(code *)PTR_drop_007994f0)();
LAB_003e1f36:
      *(undefined1 *)(param_1 + 0x4e2) = 0;
    }
    else if (*(char *)(param_1 + 0x4e0) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 600);
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x3588) != '\x03') break;
    switch(*(undefined1 *)(param_1 + 0x4d0)) {
    case 3:
      if (*(char *)(param_1 + 0x3580) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                  (param_1 + 0x1de8);
        <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x1de0);
        *(undefined1 *)(param_1 + 0x3581) = 0;
      }
      else if (*(char *)(param_1 + 0x3580) == '\0') {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0xd48);
      }
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0xd28);
      break;
    case 4:
      if (((*(char *)(param_1 + 0x550) == '\x03') && (*(char *)(param_1 + 0x548) == '\x03')) &&
         (*(char *)(param_1 + 0x500) == '\x04')) {
        (*(code *)PTR_drop_00799100)();
        if (*(longlong *)(param_1 + 0x510) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x510) + 0x18))();
        }
      }
      break;
    case 5:
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::_closure_0_>
                (param_1 + 0x4e0);
      goto LAB_003e229e;
    case 6:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                (param_1 + 0x598);
      if (*(longlong *)(param_1 + 0x580) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x4d5) = 0;
      <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x558);
      *(undefined1 *)(param_1 + 0x4d6) = 0;
      plVar1 = *(longlong **)(param_1 + 0x550);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0x550);
      }
      if ((*(char *)(param_1 + 0x4d1) != '\0') && (*(longlong *)(param_1 + 0x4f0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x4d1) = 0;
      *(undefined2 *)(param_1 + 0x4d7) = 0;
      if (*(char *)(param_1 + 0x4d2) != '\0') {
        plVar1 = *(longlong **)(param_1 + 0x4e8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
          ::drop_slow(param_1 + 0x4e8);
        }
      }
      *(undefined1 *)(param_1 + 0x4d2) = 0;
      *(undefined1 *)(param_1 + 0x4d9) = 0;
LAB_003e229e:
      (*(code *)PTR_release_00799050)();
      break;
    case 7:
      if (*(char *)(param_1 + 0x1668) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                  (param_1 + 0x508);
      }
      goto LAB_003e269c;
    case 8:
      if (*(char *)(param_1 + 0x3560) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                  (param_1 + 0x1dc8);
        <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x1dc0);
        *(undefined1 *)(param_1 + 0x3561) = 0;
      }
      else if (*(char *)(param_1 + 0x3560) == '\0') {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0xd28);
      }
      *(undefined1 *)(param_1 + 0x4d3) = 0;
LAB_003e269c:
      *(undefined1 *)(param_1 + 0x4d4) = 0;
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x2c0);
    plVar1 = *(longlong **)(param_1 + 0x2b8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x2b8);
    }
    plVar1 = *(longlong **)(param_1 + 0x2b0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x2b0);
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x4e0) == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x388) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x388) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                (param_1 + 0x3a8);
      (*(code *)PTR_drop_007994f0)();
      goto LAB_003e1f36;
    }
    if (*(char *)(param_1 + 0x4e0) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 600);
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x2a8) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::_closure_0_>
                (param_1 + 0x2b8);
      plVar1 = *(longlong **)(param_1 + 0x2b0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x2b0);
      }
LAB_003e1faf:
      plVar1 = *(longlong **)(param_1 + 0x2a0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x2a0);
      }
    }
    else if (*(char *)(param_1 + 0x2a8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::_closure_0_>
                (param_1 + 0x2b8);
      plVar1 = *(longlong **)(param_1 + 0x2b0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x2b0);
      }
      goto LAB_003e1faf;
    }
    if (*(longlong *)(param_1 + 600) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x1748) != '\x03') break;
    if (*(byte *)(param_1 + 0x5dd) - 3 < 4) {
      switch((uint)*(byte *)(param_1 + 0x5dd)) {
      case 3:
        if (*(char *)(param_1 + 0x1479) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                    (param_1 + 0x898);
          *(undefined1 *)(param_1 + 0x1478) = 0;
        }
        goto switchD_003e1daa_default;
      case 4:
        if (*(char *)(param_1 + 0x1668) == '\x03') {
          if ((((*(char *)(param_1 + 0x1740) == '\x03') && (*(char *)(param_1 + 0x1738) == '\x03'))
              && (*(char *)(param_1 + 0x1730) == '\x03')) &&
             ((*(char *)(param_1 + 0x1728) == '\x03' && (*(char *)(param_1 + 0x1720) == '\x03')))) {
            (*(code *)PTR_drop_007990e0)();
            goto LAB_003e25fd;
          }
        }
        else if (((*(char *)(param_1 + 0x1668) == '\x04') && (*(char *)(param_1 + 0x1740) == '\x03')
                 ) && ((*(char *)(param_1 + 0x1738) == '\x03' &&
                       (((*(char *)(param_1 + 0x1730) == '\x03' &&
                         (*(char *)(param_1 + 0x1728) == '\x03')) &&
                        (*(char *)(param_1 + 0x1720) == '\x03')))))) {
          (*(code *)PTR_drop_007990e0)();
LAB_003e25fd:
          if (*(longlong *)(param_1 + 0x16f8) != 0) {
            (**(code **)(*(longlong *)(param_1 + 0x16f8) + 0x18))();
          }
        }
        if (*(longlong *)(param_1 + 0x5e0) != 2) {
          if (*(longlong *)(param_1 + 0x5e0) == 0) {
            plVar1 = *(longlong **)(param_1 + 0x5e8);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar1 = *(longlong **)(param_1 + 0x5e8);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x5f0);
        }
        goto LAB_003e2791;
      case 5:
        if (*(longlong *)(param_1 + 0x5e0) != 2) {
          if (*(longlong *)(param_1 + 0x5e0) == 0) {
            plVar1 = *(longlong **)(param_1 + 0x5e8);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar1 = *(longlong **)(param_1 + 0x5e8);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x5f0);
        }
        break;
      case 6:
        if (*(char *)(param_1 + 0xac8) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                    (param_1 + 0x6e0);
        }
        else if (*(char *)(param_1 + 0xac8) == '\0') {
          <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x5e0);
        }
      }
      if (*(longlong *)(param_1 + 0x478) != -2) {
        if (*(longlong *)(param_1 + 0x478) == -1) {
          if ((1 < ((uint)*(ulonglong *)(param_1 + 0x480) & 3) - 2) &&
             ((*(ulonglong *)(param_1 + 0x480) & 3) != 0)) {
            (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>
                    (param_1 + 0x478);
        }
      }
      *(undefined1 *)(param_1 + 0x5d1) = 0;
      *(undefined1 *)(param_1 + 0x5d7) = 0;
LAB_003e2791:
      *(undefined2 *)(param_1 + 0x5d8) = 0;
      if (*(longlong *)(param_1 + 0x590) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x578) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x5da) = 0;
      plVar1 = *(longlong **)(param_1 + 0x570);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>
        ::drop_slow(param_1 + 0x570);
      }
      *(undefined1 *)(param_1 + 0x5db) = 0;
      <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x4c8);
      *(undefined1 *)(param_1 + 0x5dc) = 0;
      <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x3a8);
      *(undefined2 *)(param_1 + 0x5d2) = 0;
      if (*(char *)(param_1 + 0x5d4) != '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x278);
      }
      *(undefined2 *)(param_1 + 0x5d4) = 0;
      *(undefined1 *)(param_1 + 0x5d6) = 0;
    }
switchD_003e1daa_default:
    plVar1 = *(longlong **)(param_1 + 0x270);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x270);
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x4e0) == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x388) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x388) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                (param_1 + 0x3a8);
      (*(code *)PTR_drop_007994f0)();
      goto LAB_003e1f36;
    }
    if (*(char *)(param_1 + 0x4e0) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 600);
    }
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x1ba8) != '\x03') goto LAB_003e29ea;
    switch(*(undefined1 *)(param_1 + 0x9b5)) {
    case 3:
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x9b8);
      break;
    case 4:
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x9b8);
      break;
    case 5:
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x9b8);
      break;
    case 6:
      if ((((*(char *)(param_1 + 0xa88) == '\x03') && (*(char *)(param_1 + 0xa80) == '\x03')) &&
          (*(char *)(param_1 + 0xa78) == '\x03')) &&
         ((*(char *)(param_1 + 0xa70) == '\x03' && (*(char *)(param_1 + 0xa68) == '\x03')))) {
        (*(code *)PTR_drop_007990e0)();
        if (*(longlong *)(param_1 + 0xa40) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0xa40) + 0x18))();
        }
      }
      goto LAB_003e2954;
    case 7:
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x9c0);
      if ((1 < ((uint)*(ulonglong *)(param_1 + 0x9b8) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 0x9b8) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      goto LAB_003e2954;
    case 8:
      if (*(char *)(param_1 + 0x1a59) == '\x04') {
        if (*(char *)(param_1 + 0x1a60) == '\0') {
          plVar1 = *(longlong **)(param_1 + 0x1a68);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar1 = *(longlong **)(param_1 + 0x1a68);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x1a70);
LAB_003e28c0:
        *(undefined1 *)(param_1 + 0x1a58) = 0;
      }
      else if (*(char *)(param_1 + 0x1a59) == '\x03') {
        if ((((*(char *)(param_1 + 0x1ba0) == '\x03') && (*(char *)(param_1 + 0x1b98) == '\x03')) &&
            (*(char *)(param_1 + 0x1b90) == '\x03')) &&
           ((*(char *)(param_1 + 0x1b88) == '\x03' && (*(char *)(param_1 + 0x1b80) == '\x03')))) {
          (*(code *)PTR_drop_007990e0)();
          if (*(longlong *)(param_1 + 7000) != 0) {
            (**(code **)(*(longlong *)(param_1 + 7000) + 0x18))();
          }
        }
        if (*(longlong *)(param_1 + 0x1a60) != 2) {
          if (*(longlong *)(param_1 + 0x1a60) == 0) {
            plVar1 = *(longlong **)(param_1 + 0x1a68);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar1 = *(longlong **)(param_1 + 0x1a68);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x1a70);
        }
        goto LAB_003e28c0;
      }
      if (*(longlong *)(param_1 + 0x9b8) != 2) {
        if (*(longlong *)(param_1 + 0x9b8) == 0) {
          plVar1 = *(longlong **)(param_1 + 0x9c0);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar1 = *(longlong **)(param_1 + 0x9c0);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x9c8);
      }
      goto LAB_003e2908;
    case 9:
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x9b8);
      <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::oauth::TokenMetadata,craggemini_core[66f3c71560d70857]::protocol::Failure>,tokio[d7d91d38da47d894]::time::error::Elapsed>>
                (param_1 + 0x958);
LAB_003e2908:
      *(undefined1 *)(param_1 + 0x9b0) = 0;
      *(undefined2 *)(param_1 + 0x9b2) = 0;
      if (*(longlong *)(param_1 + 0x940) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x928) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
LAB_003e2954:
      if (*(longlong *)(param_1 + 0x908) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      break;
    default:
      goto switchD_003e1bbc_default;
    }
    if (*(char *)(param_1 + 0x9b1) != '\0') {
      <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(param_1 + 0x398);
    }
    *(undefined1 *)(param_1 + 0x9b1) = 0;
    *(undefined1 *)(param_1 + 0x9b4) = 0;
    if (0 < *(longlong *)(param_1 + 0x648)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x630) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
switchD_003e1bbc_default:
    plVar1 = *(longlong **)(param_1 + 0x350);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x350);
    }
LAB_003e29ea:
    <craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>(param_1 + 600);
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x10f1) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x510);
      *(undefined1 *)(param_1 + 0x10f0) = 0;
    }
    break;
  case 0xf:
    <craggemini_core[66f3c71560d70857]::server::submit_with_target::_closure_0_>(param_1 + 600);
    break;
  case 0x10:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(param_1 + 600);
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(char *)(param_1 + 0x251) != '\0') && (*(longlong *)(param_1 + 0x220) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x251) = 0;
  if (*(char *)(param_1 + 0x252) != '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
              (param_1 + 0x130);
  }
  *(undefined1 *)(param_1 + 0x252) = 0;
switchD_003e1a5d_caseD_1:
  return;
}


