// 002f4350 <craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002f43c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_internal_account_route::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
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
    goto switchD_002f4376_caseD_1;
  case 3:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::remove_account::_closure_0_>
              (param_1 + 600);
    break;
  case 4:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::calibrate_account::_closure_0_>
              (param_1 + 600);
    break;
  case 5:
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 600);
    goto LAB_002f44cd;
  case 6:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::rebind_proxy::_closure_0_>
              (param_1 + 0x2a8);
LAB_002f44cd:
    *(undefined2 *)(param_1 + 0x253) = 0;
    *(undefined1 *)(param_1 + 0x255) = 0;
    break;
  case 7:
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 600);
    break;
  case 8:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::scale_account::_closure_0_>
              (param_1 + 600);
    break;
  case 9:
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 600);
    break;
  case 10:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::account_lifecycle::_closure_0_>
              (param_1 + 0x270);
    if (*(longlong *)(param_1 + 600) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x1748) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_>
                (param_1 + 0x278);
      plVar1 = *(longlong **)(param_1 + 0x270);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x270);
      }
    }
    break;
  case 0xc:
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 600);
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x1ba8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::_closure_0_>
                (param_1 + 0x358);
      plVar1 = *(longlong **)(param_1 + 0x350);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x350);
      }
    }
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
switchD_002f4376_caseD_1:
  return;
}


