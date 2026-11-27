// 0056e860 <craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0056e8bd */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::submit_external_messages_or_envelope::_closure_0_>
          (longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 0x268)) {
  case 0:
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    if (*(longlong *)(param_1 + 0xf0) == -1) {
      return;
    }
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)();
    return;
  default:
    goto switchD_0056e886_caseD_1;
  case 3:
    <craggemini_core[66f3c71560d70857]::server::read_request<serde_json[dc3825464c436029]::value::Value>::_closure_0_>
              (param_1 + 0x2d0);
    break;
  case 4:
    <craggemini_core[66f3c71560d70857]::server::execute_envelope::_closure_0_>(param_1 + 0x270);
    *(undefined1 *)(param_1 + 0x26e) = 0;
    break;
  case 5:
    <craggemini_core[66f3c71560d70857]::server::execute_native_body::_closure_0_>(param_1 + 0x270);
    if ((1 < *(byte *)(param_1 + 0x248)) && (*(longlong *)(param_1 + 0x250) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x269) = 0;
  if (((*(char *)(param_1 + 0x26a) != '\0') && (*(longlong *)(param_1 + 0x2b8) != -1)) &&
     (*(longlong *)(param_1 + 0x2b8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x26a) = 0;
  if (((*(char *)(param_1 + 0x26b) != '\0') && (*(longlong *)(param_1 + 0x2a0) != -1)) &&
     (*(longlong *)(param_1 + 0x2a0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x26b) = 0;
  if (((*(char *)(param_1 + 0x26c) != '\0') && (*(longlong *)(param_1 + 0x288) != -1)) &&
     (*(longlong *)(param_1 + 0x288) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x26c) = 0;
  if ((1 < *(byte *)(param_1 + 0x208)) && (*(longlong *)(param_1 + 0x210) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((*(char *)(param_1 + 0x26d) != '\0') && (*(longlong *)(param_1 + 0x270) != -1)) &&
     (*(longlong *)(param_1 + 0x270) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x26d) = 0;
  *(undefined1 *)(param_1 + 0x26f) = 0;
switchD_0056e886_caseD_1:
  return;
}


