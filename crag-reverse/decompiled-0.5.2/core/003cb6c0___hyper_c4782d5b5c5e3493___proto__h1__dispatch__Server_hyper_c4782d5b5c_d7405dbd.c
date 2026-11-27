// 003cb6c0 <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
          (longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_1;
  if (*plVar2 == 0) goto LAB_003cba72;
  if ((char)plVar2[0x77c] != '\x03') {
    if ((char)plVar2[0x77c] == '\0') {
      plVar3 = (longlong *)plVar2[0x20];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
        drop_slow(plVar2 + 0x20);
      }
      <http[56314f485c23ccf6]::request::Request<hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
                (plVar2 + 1);
    }
    goto LAB_003cba72;
  }
  if (0x25 < *(byte *)(plVar2 + 0x70)) goto switchD_003cb73f_caseD_1;
  switch(*(byte *)(plVar2 + 0x70)) {
  case 0:
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
              (plVar2 + 0x21);
  default:
    goto switchD_003cb73f_caseD_1;
  case 3:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>(plVar2 + 0x71);
    goto LAB_003cb904;
  case 4:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>(plVar2 + 0x71);
LAB_003cb904:
    <craggemini_core[66f3c71560d70857]::multiprotocol::OutputProtocol>(plVar2 + 0x6c);
    goto switchD_003cb73f_caseD_f;
  case 5:
    <craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::_closure_0_>
              (plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 6:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 7:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 8:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 9:
    <craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::_closure_0_>
              (plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 10:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 0xb:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 0xc:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 0xd:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 0xe:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(plVar2 + 0x71);
  case 0xf:
  case 0x11:
    goto switchD_003cb73f_caseD_f;
  case 0x10:
    <craggemini_core[66f3c71560d70857]::server::resume_conversation::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 0x12:
    <craggemini_core[66f3c71560d70857]::server::handle_subagent_action::_closure_0_>(plVar2 + 0x71);
    goto switchD_003cb73f_caseD_f;
  case 0x13:
    <craggemini_core[66f3c71560d70857]::server::handle_live_control::_closure_0_>(plVar2 + 0x71);
switchD_003cb73f_caseD_f:
    if ((1 < *(byte *)(plVar2 + 0x68)) && (plVar2[0x69] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 0x14:
    <craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::_closure_0_>
              (plVar2 + 0x71);
    break;
  case 0x15:
    if ((char)plVar2[0xe3] == '\0') {
      lVar5 = 0x280;
LAB_003cbb5c:
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                ((longlong)(plVar2 + 0x21) + lVar5);
    }
    else if ((char)plVar2[0xe3] == '\x03') {
      if ((char)plVar2[0xe2] == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (plVar2[0xb7] != 0) {
          (**(code **)(plVar2[0xb7] + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (plVar2 + 0xbb);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)((longlong)plVar2 + 0x712) = 0;
      }
      else {
        lVar5 = 0x380;
        if ((char)plVar2[0xe2] == '\0') goto LAB_003cbb5c;
      }
    }
    break;
  case 0x16:
    cVar1 = (char)plVar2[0x91];
    if (cVar1 == '\x04') {
      cVar1 = *(char *)((longlong)plVar2 + 0x991);
      if (cVar1 == '\x04') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>
                  (plVar2 + 0x164);
        plVar3 = (longlong *)plVar2[0x135];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(plVar2 + 0x135);
        }
        plVar3 = (longlong *)plVar2[0x134];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(plVar2 + 0x134);
        }
        <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(plVar2 + 0x136);
        plVar3 = (longlong *)plVar2[0x133];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(plVar2 + 0x133);
        }
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(plVar2 + 199);
          }
          goto LAB_003cbbb6;
        }
        <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::_closure_0_>
                  (plVar2 + 0x133);
      }
      plVar3 = (longlong *)plVar2[0x131];
      if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x993) != '\0')) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(plVar2 + 0x131);
        }
      }
      *(undefined1 *)((longlong)plVar2 + 0x993) = 0;
      lVar5 = 0x60a;
LAB_003cbe8b:
      *(undefined1 *)((longlong)(plVar2 + 0x71) + lVar5) = 0;
      *(undefined1 *)((longlong)plVar2 + 0x489) = 0;
    }
    else if (cVar1 == '\x03') {
      if ((char)plVar2[0xe3] == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (plVar2[0xb8] != 0) {
          (**(code **)(plVar2[0xb8] + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (plVar2 + 0xbc);
        lVar5 = 0x392;
        (*(code *)PTR_drop_007994f0)();
        goto LAB_003cbe8b;
      }
      if ((char)plVar2[0xe3] == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (plVar2 + 0x92);
      }
LAB_003cbbb6:
      *(undefined1 *)((longlong)plVar2 + 0x489) = 0;
    }
    else if (cVar1 == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (plVar2 + 0x71);
    }
    break;
  case 0x17:
    <craggemini_core[66f3c71560d70857]::server::submit_with_target::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x18:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x19:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x1a:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x1b:
    <craggemini_core[66f3c71560d70857]::server::submit_web_tool::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x1c:
    <craggemini_core[66f3c71560d70857]::server::submit_web_tool::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x1d:
  case 0x1f:
    break;
  case 0x1e:
    <craggemini_core[66f3c71560d70857]::server::resume_conversation::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x20:
    <craggemini_core[66f3c71560d70857]::server::handle_subagent_action::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x21:
    <craggemini_core[66f3c71560d70857]::server::handle_live_control::_closure_0_>(plVar2 + 0x71);
    break;
  case 0x22:
    if ((char)plVar2[0x103] == '\x03') {
      if ((char)plVar2[0x102] == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (plVar2[0xd7] != 0) {
          (**(code **)(plVar2[0xd7] + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (plVar2 + 0xdb);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)((longlong)plVar2 + 0x812) = 0;
      }
      else if ((char)plVar2[0x102] == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (plVar2 + 0xb1);
      }
      plVar3 = (longlong *)plVar2[0xb0];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(plVar2 + 0xb0);
      }
LAB_003cbcfe:
      *(undefined1 *)((longlong)plVar2 + 0x819) = 0;
    }
    else if ((char)plVar2[0x103] == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (plVar2 + 0x71);
    }
    break;
  case 0x23:
    if ((char)plVar2[0x92] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                (plVar2 + 0x7c);
      *(undefined1 *)((longlong)plVar2 + 0x491) = 0;
    }
    plVar3 = (longlong *)plVar2[0x71];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(plVar2 + 0x71);
    }
    break;
  case 0x24:
    cVar1 = (char)plVar2[0xb1];
    if (cVar1 == '\x04') {
      cVar1 = (char)plVar2[0xc6];
      if (cVar1 == '\x04') {
        plVar3 = plVar2 + 0xd5;
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(plVar3);
        plVar4 = (longlong *)*plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
            ::drop_slow(plVar3);
          }
        }
        if (plVar2[199] != 2) {
          if (plVar2[199] == 0) {
            plVar3 = (longlong *)plVar2[200];
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar3 = (longlong *)plVar2[200];
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (plVar2 + 0xc9);
        }
LAB_003cbf97:
        *(undefined1 *)((longlong)plVar2 + 0x635) = 0;
        plVar3 = plVar2 + 0xc5;
        <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(plVar3);
        plVar4 = (longlong *)*plVar3;
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
          ::drop_slow(plVar3);
        }
        if (*(char *)((longlong)plVar2 + 0x634) != '\0') {
          plVar3 = plVar2 + 199;
          <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(plVar3);
          plVar4 = (longlong *)*plVar3;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
              ::drop_slow(plVar3);
            }
          }
        }
        *(undefined1 *)((longlong)plVar2 + 0x634) = 0;
        *(undefined1 *)((longlong)plVar2 + 0x631) = 0;
        if (plVar2[0xc2] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined2 *)((longlong)plVar2 + 0x632) = 0;
        *(undefined1 *)((longlong)plVar2 + 0x636) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          if ((char)plVar2[0xf4] == '\x03') {
            if (((char)plVar2[0xf3] == '\x03') && (*(char *)((longlong)plVar2 + 0x749) == '\x04')) {
              (*(code *)PTR_drop_00799100)();
              if (plVar2[0xec] != 0) {
                (**(code **)(plVar2[0xec] + 0x18))();
              }
              <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<_>>::reserve_inner::{closure#0}::WakeReceiverOnDrop<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(plVar2 + 0xea);
              *(undefined1 *)(plVar2 + 0xe9) = 0;
            }
            <craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>(plVar2 + 0xd6);
            *(undefined1 *)((longlong)plVar2 + 0x7a1) = 0;
          }
          else if ((char)plVar2[0xf4] == '\0') {
            <craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>(plVar2 + 200);
          }
          goto LAB_003cbf97;
        }
        if ((cVar1 == '\0') &&
           (<serde_json[dc3825464c436029]::value::Value>(plVar2 + 0xb5), 0 < plVar2[0xb2])) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      if (plVar2[0xf5] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                    (plVar2 + 0x71);
        }
        break;
      }
      if ((char)plVar2[0x103] == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (plVar2[0xd8] != 0) {
          (**(code **)(plVar2[0xd8] + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (plVar2 + 0xdc);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)((longlong)plVar2 + 0x81a) = 0;
      }
      else if ((char)plVar2[0x103] == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (plVar2 + 0xb2);
      }
    }
    *(undefined2 *)((longlong)plVar2 + 0x58a) = 0;
    plVar3 = (longlong *)plVar2[0xb0];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(plVar2 + 0xb0);
    }
    *(undefined1 *)((longlong)plVar2 + 0x589) = 0;
    break;
  case 0x25:
    if ((char)plVar2[0x103] == '\x03') {
      if ((char)plVar2[0x102] == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (plVar2[0xd7] != 0) {
          (**(code **)(plVar2[0xd7] + 0x18))();
        }
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                  (plVar2 + 0xdb);
        (*(code *)PTR_drop_007994f0)();
        *(undefined1 *)((longlong)plVar2 + 0x812) = 0;
      }
      else if ((char)plVar2[0x102] == '\0') {
        <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                  (plVar2 + 0xb1);
      }
      plVar3 = (longlong *)plVar2[0xb0];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(plVar2 + 0xb0);
      }
      goto LAB_003cbcfe;
    }
    if ((char)plVar2[0x103] == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (plVar2 + 0x71);
    }
  }
  if (0 < plVar2[0x61]) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (plVar2[0x5e] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(char *)((longlong)plVar2 + 0x381) != '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
              (plVar2 + 0x40);
  }
  *(undefined1 *)((longlong)plVar2 + 0x381) = 0;
switchD_003cb73f_caseD_1:
  plVar3 = (longlong *)plVar2[0x20];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
    drop_slow(plVar2 + 0x20);
  }
LAB_003cba72:
  (*(code *)PTR___rust_dealloc_00798fc8)();
  plVar2 = (longlong *)param_1[1];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
    drop_slow(param_1 + 1,0x3be8);
    return;
  }
  return;
}


