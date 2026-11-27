// 003de780 <craggemini_core[66f3c71560d70857]::server::submit_with_target::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003de830 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::submit_with_target::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::submit_with_target::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x209);
  if (cVar1 == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    if (*(longlong *)(param_1 + 0xf0) < 1) {
      return;
    }
    (*(code *)PTR_free_0079adc8)(param_4,1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x500) == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x3a8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                (param_1 + 0x3c8);
      (*(code *)PTR_drop_007994f0)();
      *(undefined1 *)(param_1 + 0x502) = 0;
      *(undefined1 *)(param_1 + 0x210) = 0;
      cVar1 = *(char *)(param_1 + 0x20c);
      goto joined_r0x003de887;
    }
    if (*(char *)(param_1 + 0x500) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x278);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    <craggemini_core[66f3c71560d70857]::server::execute_envelope::_closure_0_>(param_1 + 0x218);
  }
  *(undefined1 *)(param_1 + 0x210) = 0;
  cVar1 = *(char *)(param_1 + 0x20c);
joined_r0x003de887:
  if ((cVar1 != '\0') && (0 < *(longlong *)(param_1 + 0x260))) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  *(undefined1 *)(param_1 + 0x20c) = 0;
  if ((*(char *)(param_1 + 0x20d) != '\0') && (0 < *(longlong *)(param_1 + 0x248))) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  *(undefined1 *)(param_1 + 0x20d) = 0;
  if ((*(char *)(param_1 + 0x20e) != '\0') && (0 < *(longlong *)(param_1 + 0x230))) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  *(undefined1 *)(param_1 + 0x20e) = 0;
  if ((*(char *)(param_1 + 0x20f) != '\0') && (0 < *(longlong *)(param_1 + 0x218))) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  *(undefined1 *)(param_1 + 0x20f) = 0;
  *(undefined1 *)(param_1 + 0x20b) = 0;
  return;
}


