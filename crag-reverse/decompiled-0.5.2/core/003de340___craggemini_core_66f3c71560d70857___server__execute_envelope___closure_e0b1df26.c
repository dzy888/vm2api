// 003de340 <craggemini_core[66f3c71560d70857]::server::execute_envelope::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::execute_envelope::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::execute_envelope::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x11d9) == '\0') {
    if (0 < *(longlong *)(param_1 + 0xb8)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0xd0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0xe8)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0x100)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0x48)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0x60)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0x78)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x90);
    return;
  }
  if (*(char *)(param_1 + 0x11d9) == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::execute_turn_request::_closure_0_>(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x11e2) = 0;
    *(undefined8 *)(param_1 + 0x11da) = 0;
    return;
  }
  return;
}


