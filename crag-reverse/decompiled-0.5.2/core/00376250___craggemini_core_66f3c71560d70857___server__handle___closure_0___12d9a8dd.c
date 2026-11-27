// 00376250 <craggemini_core[66f3c71560d70857]::server::handle::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle::_closure_0_>(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  switch(*(undefined1 *)(param_1 + 0x278)) {
  case 0:
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  default:
    goto switchD_0037627d_caseD_1;
  case 3:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto LAB_0037649b;
  case 4:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
LAB_0037649b:
    if ((1 < *(byte *)(param_1 + 600)) && (*(longlong *)(param_1 + 0x260) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto switchD_0037627d_caseD_f;
  case 5:
    <craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::_closure_0_>
              (param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 6:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 7:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 8:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 9:
    <craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::_closure_0_>
              (param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 10:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 0xb:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 0xc:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 0xd:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 0xe:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(param_1 + 0x280);
  case 0xf:
  case 0x11:
    goto switchD_0037627d_caseD_f;
  case 0x10:
    <craggemini_core[66f3c71560d70857]::server::resume_conversation::_closure_0_>(param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 0x12:
    <craggemini_core[66f3c71560d70857]::server::handle_subagent_action::_closure_0_>
              (param_1 + 0x280);
    goto switchD_0037627d_caseD_f;
  case 0x13:
    <craggemini_core[66f3c71560d70857]::server::handle_live_control::_closure_0_>(param_1 + 0x280);
switchD_0037627d_caseD_f:
    if ((1 < *(byte *)(param_1 + 0x238)) && (*(longlong *)(param_1 + 0x240) != 0)) {
LAB_003765a1:
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 0x14:
    switch(*(undefined1 *)(param_1 + 0x4d0)) {
    case 0:
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
      if (*(longlong *)(param_1 + 0x370) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x388) == 0) goto switchD_0037627d_caseD_1d;
      goto LAB_003765a1;
    default:
      goto switchD_0037627d_caseD_1d;
    case 3:
      if (*(char *)(param_1 + 0x509) == '\x03') {
        if (*(char *)(param_1 + 0x13a9) == '\x03') {
          lVar4 = 0xed0;
          <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                    (param_1 + 0x7c8);
          goto LAB_00376eb1;
        }
      }
      else if (*(char *)(param_1 + 0x509) == '\x04') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>
                  (param_1 + 0x528);
        plVar3 = *(longlong **)(param_1 + 0x520);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x520);
        }
        plVar3 = *(longlong **)(param_1 + 0x518);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        lVar4 = 0x30;
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x518);
        }
LAB_00376eb1:
        *(undefined1 *)(param_1 + 0x4d8 + lVar4) = 0;
      }
      break;
    case 4:
      if (*(char *)(param_1 + 0x508) == '\x04') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
                  (param_1 + 0x5f8);
        plVar3 = *(longlong **)(param_1 + 0x5f0);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x5f0);
        }
        <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(param_1 + 0x510);
      }
      else if ((*(char *)(param_1 + 0x508) == '\x03') && (*(char *)(param_1 + 0x18c8) == '\x03')) {
        <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
                  (param_1 + 0x548);
        plVar3 = *(longlong **)(param_1 + 0x540);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x540);
        }
      }
      break;
    case 5:
      if (*(char *)(param_1 + 0x760) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x608) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x608) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x628);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)(param_1 + 0x762) = 0;
      }
      else if (*(char *)(param_1 + 0x760) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x4d8);
      }
      goto switchD_00376bab_caseD_1;
    case 6:
      switch(*(undefined1 *)(param_1 + 0x5a1)) {
      case 0:
        if (*(longlong *)(param_1 + 0x528) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00376bab::switchdataD_0019224c,1);
        }
        if (*(longlong *)(param_1 + 0x540) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x558) != -1) && (*(longlong *)(param_1 + 0x558) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      default:
        goto switchD_00376bab_caseD_1;
      case 3:
        if (*(char *)(param_1 + 0x1489) == '\x03') {
          lVar4 = 0xf60;
          <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                    (param_1 + 0x8a8);
LAB_003775e3:
          *(undefined1 *)(param_1 + 0x528 + lVar4) = 0;
        }
        break;
      case 4:
        if (*(char *)(param_1 + 0x23a9) == '\x03') {
          if (*(char *)(param_1 + 0x23a1) == '\x03') {
            <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
                      (param_1 + 0xb90);
            *(undefined2 *)(param_1 + 0x23a2) = 0;
            *(undefined1 *)(param_1 + 0x23a4) = 0;
          }
          else if (*(char *)(param_1 + 0x23a1) == '\0') {
            <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x7b0);
          }
          *(undefined4 *)(param_1 + 0x23aa) = 0;
          plVar3 = *(longlong **)(param_1 + 0x608);
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
            ::drop_slow(param_1 + 0x608);
          }
          *(undefined2 *)(param_1 + 0x23ae) = 0;
          lVar4 = 0x1e88;
          goto LAB_003775e3;
        }
        if (*(char *)(param_1 + 0x23a9) == '\0') {
          if (*(longlong *)(param_1 + 0x5a8) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00376bab::switchdataD_0019224c,1);
          }
          if (*(longlong *)(param_1 + 0x5c0) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if ((*(longlong *)(param_1 + 0x5d8) != -1) && (*(longlong *)(param_1 + 0x5d8) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        break;
      case 5:
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
                  (param_1 + 0x5b8);
        plVar3 = *(longlong **)(param_1 + 0x5b0);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x5b0);
        }
        plVar3 = *(longlong **)(param_1 + 0x5a8);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x5a8);
        }
      }
      if (((*(char *)(param_1 + 0x5a3) != '\0') && (*(longlong *)(param_1 + 0x5d8) != -1)) &&
         (*(longlong *)(param_1 + 0x5d8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x5a3) = 0;
      if ((*(char *)(param_1 + 0x5a4) != '\0') && (*(longlong *)(param_1 + 0x5c0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x5a4) = 0;
      if ((*(char *)(param_1 + 0x5a5) != '\0') && (*(longlong *)(param_1 + 0x5a8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x5a5) = 0;
switchD_00376bab_caseD_1:
      *(undefined2 *)(param_1 + 0x4d3) = 0;
      *(undefined1 *)(param_1 + 0x4d5) = 0;
      break;
    case 7:
      if (*(char *)(param_1 + 0x760) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x608) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x608) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x628);
        (*(code *)PTR_drop_007994f0)();
LAB_00376efb:
        *(undefined1 *)(param_1 + 0x762) = 0;
      }
      else if (*(char *)(param_1 + 0x760) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x4d8);
      }
      break;
    case 8:
      if (*(char *)(param_1 + 0x3808) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scale_extended::_closure_0_>
                  (param_1 + 0x6b0);
        <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x540);
        plVar3 = *(longlong **)(param_1 + 0x538);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x538);
        }
        plVar3 = *(longlong **)(param_1 + 0x530);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x530);
        }
      }
      break;
    case 9:
      if (*(char *)(param_1 + 0x760) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x608) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x608) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x628);
        (*(code *)PTR_drop_007994f0)();
        goto LAB_00376efb;
      }
      if (*(char *)(param_1 + 0x760) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x4d8);
      }
      break;
    case 10:
      if (*(char *)(param_1 + 0x528) == '\x04') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::_closure_0_>
                  (param_1 + 0x538);
        plVar3 = *(longlong **)(param_1 + 0x530);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x530);
        }
LAB_00376f74:
        plVar3 = *(longlong **)(param_1 + 0x520);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x520);
        }
      }
      else if (*(char *)(param_1 + 0x528) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::_closure_0_>
                  (param_1 + 0x538);
        plVar3 = *(longlong **)(param_1 + 0x530);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x530);
        }
        goto LAB_00376f74;
      }
      if (*(longlong *)(param_1 + 0x4d8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      break;
    case 0xb:
      if (*(char *)(param_1 + 0x19c8) != '\x03') break;
      if (*(byte *)(param_1 + 0x85d) - 3 < 4) {
        switch((uint)*(byte *)(param_1 + 0x85d)) {
        case 3:
          if (*(char *)(param_1 + 0x16f9) == '\x03') {
            <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                      (param_1 + 0xb18);
            *(undefined1 *)(param_1 + 0x16f8) = 0;
          }
          goto switchD_00376c4f_default;
        case 4:
          if (*(char *)(param_1 + 0x18e8) == '\x03') {
            if ((((*(char *)(param_1 + 0x19c0) == '\x03') && (*(char *)(param_1 + 0x19b8) == '\x03')
                 ) && (*(char *)(param_1 + 0x19b0) == '\x03')) &&
               ((*(char *)(param_1 + 0x19a8) == '\x03' && (*(char *)(param_1 + 0x19a0) == '\x03'))))
            {
              (*(code *)PTR_drop_007990e0)();
              goto LAB_00377549;
            }
          }
          else if (((*(char *)(param_1 + 0x18e8) == '\x04') &&
                   (*(char *)(param_1 + 0x19c0) == '\x03')) &&
                  ((*(char *)(param_1 + 0x19b8) == '\x03' &&
                   (((*(char *)(param_1 + 0x19b0) == '\x03' &&
                     (*(char *)(param_1 + 0x19a8) == '\x03')) &&
                    (*(char *)(param_1 + 0x19a0) == '\x03')))))) {
            (*(code *)PTR_drop_007990e0)();
LAB_00377549:
            if (*(longlong *)(param_1 + 0x1978) != 0) {
              (**(code **)(*(longlong *)(param_1 + 0x1978) + 0x18))();
            }
          }
          if (*(longlong *)(param_1 + 0x860) != 2) {
            if (*(longlong *)(param_1 + 0x860) == 0) {
              plVar3 = *(longlong **)(param_1 + 0x868);
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                (*(code *)PTR_drop_slow_00799078)();
              }
            }
            else {
              plVar3 = *(longlong **)(param_1 + 0x868);
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                (*(code *)PTR_drop_slow_00799070)();
              }
            }
            <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                      (param_1 + 0x870);
          }
          goto LAB_0037770f;
        case 5:
          if (*(longlong *)(param_1 + 0x860) != 2) {
            if (*(longlong *)(param_1 + 0x860) == 0) {
              plVar3 = *(longlong **)(param_1 + 0x868);
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                (*(code *)PTR_drop_slow_00799078)();
              }
            }
            else {
              plVar3 = *(longlong **)(param_1 + 0x868);
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                (*(code *)PTR_drop_slow_00799070)();
              }
            }
            <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                      (param_1 + 0x870);
          }
          break;
        case 6:
          if (*(char *)(param_1 + 0xd48) == '\x03') {
            <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                      (param_1 + 0x960);
          }
          else if (*(char *)(param_1 + 0xd48) == '\0') {
            <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x860);
          }
        }
        <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::time::error::Elapsed>>
                  (param_1 + 0x6f8);
        *(undefined1 *)(param_1 + 0x851) = 0;
        *(undefined1 *)(param_1 + 0x857) = 0;
LAB_0037770f:
        *(undefined2 *)(param_1 + 0x858) = 0;
        if (*(longlong *)(param_1 + 0x810) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(longlong *)(param_1 + 0x7f8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)(param_1 + 0x85a) = 0;
        plVar3 = *(longlong **)(param_1 + 0x7f0);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>
          ::drop_slow(param_1 + 0x7f0);
        }
        *(undefined1 *)(param_1 + 0x85b) = 0;
        <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x748);
        *(undefined1 *)(param_1 + 0x85c) = 0;
        <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x628);
        *(undefined2 *)(param_1 + 0x852) = 0;
        if (*(char *)(param_1 + 0x854) != '\0') {
          <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x4f8);
        }
        *(undefined2 *)(param_1 + 0x854) = 0;
        *(undefined1 *)(param_1 + 0x856) = 0;
      }
switchD_00376c4f_default:
      plVar3 = *(longlong **)(param_1 + 0x4f0);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x4f0);
      }
      break;
    case 0xc:
      if (*(char *)(param_1 + 0x760) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x608) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x608) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x628);
        (*(code *)PTR_drop_007994f0)();
        goto LAB_00376efb;
      }
      if (*(char *)(param_1 + 0x760) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x4d8);
      }
      break;
    case 0xd:
      if (*(char *)(param_1 + 0x1e28) != '\x03') goto LAB_0037794e;
      switch(*(undefined1 *)(param_1 + 0xc35)) {
      case 3:
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0xc38);
        break;
      case 4:
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0xc38);
        break;
      case 5:
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0xc38);
        break;
      case 6:
        if ((((*(char *)(param_1 + 0xd08) == '\x03') && (*(char *)(param_1 + 0xd00) == '\x03')) &&
            (*(char *)(param_1 + 0xcf8) == '\x03')) &&
           ((*(char *)(param_1 + 0xcf0) == '\x03' && (*(char *)(param_1 + 0xce8) == '\x03')))) {
          (*(code *)PTR_drop_007990e0)();
          if (*(longlong *)(param_1 + 0xcc0) != 0) {
            (**(code **)(*(longlong *)(param_1 + 0xcc0) + 0x18))();
          }
        }
        goto LAB_003778b2;
      case 7:
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0xc40);
        if ((1 < ((uint)*(ulonglong *)(param_1 + 0xc38) & 3) - 2) &&
           ((*(ulonglong *)(param_1 + 0xc38) & 3) != 0)) {
          (*(code *)PTR_drop_00799040)();
        }
        goto LAB_003778b2;
      case 8:
        if (*(char *)(param_1 + 0x1cd9) == '\x04') {
          if (*(char *)(param_1 + 0x1ce0) == '\0') {
            plVar3 = *(longlong **)(param_1 + 0x1ce8);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar3 = *(longlong **)(param_1 + 0x1ce8);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x1cf0);
LAB_0037781e:
          *(undefined1 *)(param_1 + 0x1cd8) = 0;
        }
        else if (*(char *)(param_1 + 0x1cd9) == '\x03') {
          if ((((*(char *)(param_1 + 0x1e20) == '\x03') && (*(char *)(param_1 + 0x1e18) == '\x03'))
              && (*(char *)(param_1 + 0x1e10) == '\x03')) &&
             ((*(char *)(param_1 + 0x1e08) == '\x03' && (*(char *)(param_1 + 0x1e00) == '\x03')))) {
            (*(code *)PTR_drop_007990e0)();
            if (*(longlong *)(param_1 + 0x1dd8) != 0) {
              (**(code **)(*(longlong *)(param_1 + 0x1dd8) + 0x18))();
            }
          }
          if (*(longlong *)(param_1 + 0x1ce0) != 2) {
            if (*(longlong *)(param_1 + 0x1ce0) == 0) {
              plVar3 = *(longlong **)(param_1 + 0x1ce8);
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                (*(code *)PTR_drop_slow_00799078)();
              }
            }
            else {
              plVar3 = *(longlong **)(param_1 + 0x1ce8);
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                (*(code *)PTR_drop_slow_00799070)();
              }
            }
            <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                      (param_1 + 0x1cf0);
          }
          goto LAB_0037781e;
        }
        if (*(longlong *)(param_1 + 0xc38) != 2) {
          if (*(longlong *)(param_1 + 0xc38) == 0) {
            plVar3 = *(longlong **)(param_1 + 0xc40);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar3 = *(longlong **)(param_1 + 0xc40);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0xc48);
        }
        goto LAB_00377866;
      case 9:
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0xc38);
        <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::oauth::TokenMetadata,craggemini_core[66f3c71560d70857]::protocol::Failure>,tokio[d7d91d38da47d894]::time::error::Elapsed>>
                  (param_1 + 0xbd8);
LAB_00377866:
        *(undefined1 *)(param_1 + 0xc30) = 0;
        *(undefined2 *)(param_1 + 0xc32) = 0;
        if (*(longlong *)(param_1 + 0xbc0) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(longlong *)(param_1 + 0xba8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
LAB_003778b2:
        if (*(longlong *)(param_1 + 0xb88) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        break;
      default:
        goto switchD_00376a50_default;
      }
      if (*(char *)(param_1 + 0xc31) != '\0') {
        <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(param_1 + 0x618);
      }
      *(undefined1 *)(param_1 + 0xc31) = 0;
      *(undefined1 *)(param_1 + 0xc34) = 0;
      if ((*(longlong *)(param_1 + 0x8c8) != -1) && (*(longlong *)(param_1 + 0x8c8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x8b0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
switchD_00376a50_default:
      plVar3 = *(longlong **)(param_1 + 0x5d0);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x5d0);
      }
LAB_0037794e:
      <craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest>(param_1 + 0x4d8);
      break;
    case 0xe:
      if (*(char *)(param_1 + 0x1371) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                  (param_1 + 0x790);
        *(undefined1 *)(param_1 + 0x1370) = 0;
      }
      break;
    case 0xf:
      <craggemini_core[66f3c71560d70857]::server::submit_with_target::_closure_0_>(param_1 + 0x4d8);
      break;
    case 0x10:
      <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(param_1 + 0x4d8);
    }
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(char *)(param_1 + 0x4d1) != '\0') && (*(longlong *)(param_1 + 0x4a0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x4d1) = 0;
    if (*(char *)(param_1 + 0x4d2) != '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x3b0);
    }
    *(undefined1 *)(param_1 + 0x4d2) = 0;
    break;
  case 0x15:
    if (*(char *)(param_1 + 0x610) == '\0') {
      lVar4 = 0x280;
LAB_003766be:
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (lVar4 + param_1);
    }
    else if (*(char *)(param_1 + 0x610) == '\x03') {
      if (*(char *)(param_1 + 0x608) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x4b0) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4b0) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x4d0);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)(param_1 + 0x60a) = 0;
      }
      else {
        lVar4 = 0x380;
        if (*(char *)(param_1 + 0x608) == '\0') goto LAB_003766be;
      }
    }
    break;
  case 0x16:
    cVar2 = *(char *)(param_1 + 0x380);
    if (cVar2 == '\x04') {
      cVar2 = *(char *)(param_1 + 0x889);
      if (cVar2 == '\x04') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>
                  (param_1 + 0xa18);
        plVar3 = *(longlong **)(param_1 + 0x8a0);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x8a0);
        }
        plVar3 = *(longlong **)(param_1 + 0x898);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x898);
        }
        <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x8a8);
        plVar3 = *(longlong **)(param_1 + 0x890);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(param_1 + 0x890);
        }
      }
      else {
        if (cVar2 != '\x03') {
          if (cVar2 == '\0') {
            <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x530);
          }
          goto LAB_00376716;
        }
        if (*(char *)(param_1 + 0x2481) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
                    (param_1 + 0xc70);
          *(undefined2 *)(param_1 + 0x2482) = 0;
          *(undefined1 *)(param_1 + 0x2484) = 0;
        }
        else if (*(char *)(param_1 + 0x2481) == '\0') {
          <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x890);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x880);
      if ((plVar3 != (longlong *)0x0) && (*(char *)(param_1 + 0x88b) != '\0')) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(param_1 + 0x880);
        }
      }
      *(undefined1 *)(param_1 + 0x88b) = 0;
      lVar4 = 0x60a;
LAB_00377004:
      *(undefined1 *)(param_1 + 0x280 + lVar4) = 0;
      *(undefined1 *)(param_1 + 0x381) = 0;
    }
    else if (cVar2 == '\x03') {
      if (*(char *)(param_1 + 0x610) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x4b8) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4b8) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x4d8);
        lVar4 = 0x392;
        (*(code *)PTR_drop_007994f0)();
        goto LAB_00377004;
      }
      if (*(char *)(param_1 + 0x610) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x388);
      }
LAB_00376716:
      *(undefined1 *)(param_1 + 0x381) = 0;
    }
    else if (cVar2 == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
    break;
  case 0x17:
    <craggemini_core[66f3c71560d70857]::server::submit_with_target::_closure_0_>(param_1 + 0x280);
    break;
  case 0x18:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(param_1 + 0x280);
    break;
  case 0x19:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(param_1 + 0x280);
    break;
  case 0x1a:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(param_1 + 0x280);
    break;
  case 0x1b:
    <craggemini_core[66f3c71560d70857]::server::submit_web_tool::_closure_0_>(param_1 + 0x280);
    break;
  case 0x1c:
    <craggemini_core[66f3c71560d70857]::server::submit_web_tool::_closure_0_>(param_1 + 0x280);
    break;
  case 0x1d:
  case 0x1f:
    break;
  case 0x1e:
    <craggemini_core[66f3c71560d70857]::server::resume_conversation::_closure_0_>(param_1 + 0x280);
    break;
  case 0x20:
    <craggemini_core[66f3c71560d70857]::server::handle_subagent_action::_closure_0_>
              (param_1 + 0x280);
    break;
  case 0x21:
    <craggemini_core[66f3c71560d70857]::server::handle_live_control::_closure_0_>(param_1 + 0x280);
    break;
  case 0x22:
    if (*(char *)(param_1 + 0x710) == '\x03') {
      if (*(char *)(param_1 + 0x708) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x5b0) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x5b0) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x5d0);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)(param_1 + 0x70a) = 0;
      }
      else if (*(char *)(param_1 + 0x708) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x480);
      }
      plVar3 = *(longlong **)(param_1 + 0x478);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x478);
      }
LAB_00376863:
      *(undefined1 *)(param_1 + 0x711) = 0;
    }
    else if (*(char *)(param_1 + 0x710) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
    break;
  case 0x23:
    if (*(char *)(param_1 + 0x388) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                (param_1 + 0x2d8);
      *(undefined1 *)(param_1 + 0x389) = 0;
    }
    plVar3 = *(longlong **)(param_1 + 0x280);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x280);
    }
    break;
  case 0x24:
    cVar2 = *(char *)(param_1 + 0x480);
    if (cVar2 == '\x04') {
      cVar2 = *(char *)(param_1 + 0x528);
      if (cVar2 == '\x04') {
        puVar1 = (undefined8 *)(param_1 + 0x5a0);
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar1);
        plVar3 = (longlong *)*puVar1;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
            ::drop_slow(puVar1);
          }
        }
        if (*(longlong *)(param_1 + 0x530) != 2) {
          if (*(longlong *)(param_1 + 0x530) == 0) {
            plVar3 = *(longlong **)(param_1 + 0x538);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar3 = *(longlong **)(param_1 + 0x538);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x540);
        }
LAB_00377180:
        *(undefined1 *)(param_1 + 0x52d) = 0;
        puVar1 = (undefined8 *)(param_1 + 0x520);
        <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar1);
        plVar3 = (longlong *)*puVar1;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
          ::drop_slow(puVar1);
        }
        if (*(char *)(param_1 + 0x52c) != '\0') {
          puVar1 = (undefined8 *)(param_1 + 0x530);
          <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(puVar1);
          plVar3 = (longlong *)*puVar1;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
              ::drop_slow(puVar1);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x52c) = 0;
        *(undefined1 *)(param_1 + 0x529) = 0;
        if (*(longlong *)(param_1 + 0x508) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined2 *)(param_1 + 0x52a) = 0;
        *(undefined1 *)(param_1 + 0x52e) = 0;
      }
      else {
        if (cVar2 == '\x03') {
          if (*(char *)(param_1 + 0x698) == '\x03') {
            if ((*(char *)(param_1 + 0x690) == '\x03') && (*(char *)(param_1 + 0x641) == '\x04')) {
              (*(code *)PTR_drop_00799100)();
              if (*(longlong *)(param_1 + 0x658) != 0) {
                (**(code **)(*(longlong *)(param_1 + 0x658) + 0x18))();
              }
              <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::{closure#0}::WakeReceiverOnDrop<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(param_1 + 0x648);
              *(undefined1 *)(param_1 + 0x640) = 0;
            }
            <craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>(param_1 + 0x5a8);
            *(undefined1 *)(param_1 + 0x699) = 0;
          }
          else if (*(char *)(param_1 + 0x698) == '\0') {
            <craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>(param_1 + 0x538);
          }
          goto LAB_00377180;
        }
        if (cVar2 == '\0') {
          <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x4a0);
          if ((*(longlong *)(param_1 + 0x488) != -1) && (*(longlong *)(param_1 + 0x488) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
      }
      if (*(longlong *)(param_1 + 0x6a0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    else {
      if (cVar2 != '\x03') {
        if (cVar2 == '\0') {
          <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                    (param_1 + 0x280);
        }
        break;
      }
      if (*(char *)(param_1 + 0x710) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x5b8) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x5b8) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x5d8);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)(param_1 + 0x712) = 0;
      }
      else if (*(char *)(param_1 + 0x710) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x488);
      }
    }
    *(undefined2 *)(param_1 + 0x482) = 0;
    plVar3 = *(longlong **)(param_1 + 0x478);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x478);
    }
    *(undefined1 *)(param_1 + 0x481) = 0;
    break;
  case 0x25:
    if (*(char *)(param_1 + 0x710) == '\x03') {
      if (*(char *)(param_1 + 0x708) == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x5b0) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x5b0) + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (param_1 + 0x5d0);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)(param_1 + 0x70a) = 0;
      }
      else if (*(char *)(param_1 + 0x708) == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (param_1 + 0x480);
      }
      plVar3 = *(longlong **)(param_1 + 0x478);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x478);
      }
      goto LAB_00376863;
    }
    if (*(char *)(param_1 + 0x710) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
  }
switchD_0037627d_caseD_1d:
  if ((*(longlong *)(param_1 + 0x200) != -1) && (*(longlong *)(param_1 + 0x200) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(char *)(param_1 + 0x279) != '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
              (param_1 + 0xf8);
  }
  *(undefined1 *)(param_1 + 0x279) = 0;
switchD_0037627d_caseD_1:
  return;
}


