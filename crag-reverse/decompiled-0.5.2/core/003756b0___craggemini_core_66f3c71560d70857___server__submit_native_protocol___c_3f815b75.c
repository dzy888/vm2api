// 003756b0 <craggemini_core[66f3c71560d70857]::server::submit_native_protocol::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00375880 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::submit_native_protocol::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::submit_native_protocol::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x242);
  if (cVar1 == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    if ((*(longlong *)(param_1 + 0xf0) != -1) && (*(longlong *)(param_1 + 0xf0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x108) != -1) && (*(longlong *)(param_1 + 0x108) != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::read_request<serde_json[dc3825464c436029]::value::Value>::_closure_0_>
                (param_1 + 0x2c8);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      <craggemini_core[66f3c71560d70857]::server::execute_native_body::_closure_0_>(param_1 + 0x250)
      ;
    }
    *(undefined1 *)(param_1 + 0x24b) = 0;
    if (((*(char *)(param_1 + 0x246) != '\0') && (*(longlong *)(param_1 + 0x2b0) != -1)) &&
       (*(longlong *)(param_1 + 0x2b0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x246) = 0;
    if (((*(char *)(param_1 + 0x247) != '\0') && (*(longlong *)(param_1 + 0x298) != -1)) &&
       (*(longlong *)(param_1 + 0x298) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x247) = 0;
    if (((*(char *)(param_1 + 0x248) != '\0') && (*(longlong *)(param_1 + 0x280) != -1)) &&
       (*(longlong *)(param_1 + 0x280) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x248) = 0;
    if ((1 < *(byte *)(param_1 + 0x220)) && (*(longlong *)(param_1 + 0x228) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (((*(char *)(param_1 + 0x249) != '\0') && (*(longlong *)(param_1 + 0x268) != -1)) &&
       (*(longlong *)(param_1 + 0x268) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x249) = 0;
    if (((*(char *)(param_1 + 0x24a) != '\0') && (*(longlong *)(param_1 + 0x250) != -1)) &&
       (*(longlong *)(param_1 + 0x250) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x24a) = 0;
    *(undefined1 *)(param_1 + 0x245) = 0;
  }
  return;
}


