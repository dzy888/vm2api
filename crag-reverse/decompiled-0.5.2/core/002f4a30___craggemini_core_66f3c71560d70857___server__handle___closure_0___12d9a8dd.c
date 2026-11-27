// 002f4a30 <craggemini_core[66f3c71560d70857]::server::handle::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle::_closure_0_>(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  switch(*(undefined1 *)(param_1 + 0x278)) {
  case 0:
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  default:
    goto switchD_002f4a56_caseD_1;
  case 3:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto LAB_002f4c4b;
  case 4:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
LAB_002f4c4b:
    if ((1 < *(byte *)(param_1 + 600)) && (*(longlong *)(param_1 + 0x260) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto switchD_002f4a56_caseD_f;
  case 5:
    <craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::_closure_0_>
              (param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 6:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 7:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 8:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 9:
    <craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::_closure_0_>
              (param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 10:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 0xb:
    <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
              (param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 0xc:
    <craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>(param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 0xd:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(param_1 + 0x280);
    goto switchD_002f4a56_caseD_f;
  case 0xe:
    <craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>(param_1 + 0x280);
  case 0xf:
  case 0x11:
    goto switchD_002f4a56_caseD_f;
  case 0x10:
    cVar1 = *(char *)(param_1 + 0x380);
    if (cVar1 == '\x04') {
      lVar3 = param_1 + 0x3f0;
LAB_002f4e61:
      <craggemini_core[66f3c71560d70857]::server::ResumeRequest>(lVar3);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                    (param_1 + 0x280);
        }
        goto switchD_002f4a56_caseD_f;
      }
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x388);
    }
LAB_002f4e66:
    *(undefined1 *)(param_1 + 0x381) = 0;
    goto switchD_002f4a56_caseD_f;
  case 0x12:
    cVar1 = *(char *)(param_1 + 0x380);
    if (cVar1 == '\x04') {
      lVar3 = param_1 + 0x388;
      goto LAB_002f4e61;
    }
    if (cVar1 == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x388);
      goto LAB_002f4e66;
    }
    if (cVar1 == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
    goto switchD_002f4a56_caseD_f;
  case 0x13:
    <craggemini_core[66f3c71560d70857]::server::handle_live_control::_closure_0_>(param_1 + 0x280);
switchD_002f4a56_caseD_f:
    if ((1 < *(byte *)(param_1 + 0x238)) && (*(longlong *)(param_1 + 0x240) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 0x14:
    <craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::_closure_0_>
              (param_1 + 0x280);
    break;
  case 0x15:
    if (*(char *)(param_1 + 0x610) == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x380);
    }
    else if (*(char *)(param_1 + 0x610) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
    break;
  case 0x16:
    cVar1 = *(char *)(param_1 + 0x380);
    if (cVar1 == '\x04') {
      lVar3 = 0x381;
      <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::upsert_account::_closure_0_>
                (param_1 + 0x530);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                    (param_1 + 0x280);
        }
        break;
      }
      lVar3 = 0x381;
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x388);
    }
LAB_002f4f65:
    *(undefined1 *)(param_1 + lVar3) = 0;
    lVar3 = *(longlong *)(param_1 + 0x200);
    goto joined_r0x002f4f75;
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
    cVar1 = *(char *)(param_1 + 0x380);
    if (cVar1 == '\x04') {
      lVar3 = param_1 + 0x3f0;
LAB_002f4f5a:
      <craggemini_core[66f3c71560d70857]::server::ResumeRequest>(lVar3);
      lVar3 = 0x381;
      goto LAB_002f4f65;
    }
    if (cVar1 == '\x03') {
      lVar3 = 0x381;
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x388);
      goto LAB_002f4f65;
    }
    if (cVar1 == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
    break;
  case 0x20:
    cVar1 = *(char *)(param_1 + 0x380);
    if (cVar1 == '\x04') {
      lVar3 = param_1 + 0x388;
      goto LAB_002f4f5a;
    }
    if (cVar1 == '\x03') {
      lVar3 = 0x381;
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x388);
      goto LAB_002f4f65;
    }
    if (cVar1 == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
    break;
  case 0x21:
    <craggemini_core[66f3c71560d70857]::server::handle_live_control::_closure_0_>(param_1 + 0x280);
    break;
  case 0x22:
    if (*(char *)(param_1 + 0x710) == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x480);
      plVar2 = *(longlong **)(param_1 + 0x478);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      lVar3 = 0x711;
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x478);
      }
      goto LAB_002f4f65;
    }
    if (*(char *)(param_1 + 0x710) == '\0') {
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
    plVar2 = *(longlong **)(param_1 + 0x280);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x280);
    }
    break;
  case 0x24:
    <craggemini_core[66f3c71560d70857]::server::handle_mcp_call::_closure_0_>(param_1 + 0x280);
    break;
  case 0x25:
    if (*(char *)(param_1 + 0x710) == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x480);
      plVar2 = *(longlong **)(param_1 + 0x478);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      lVar3 = 0x711;
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x478);
      }
      goto LAB_002f4f65;
    }
    if (*(char *)(param_1 + 0x710) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x280);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x200);
joined_r0x002f4f75:
  if ((lVar3 != -1) && (lVar3 != 0)) {
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
switchD_002f4a56_caseD_1:
  return;
}


