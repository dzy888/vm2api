// 00372610 <craggemini_core[66f3c71560d70857]::server::execute_envelope::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::execute_envelope::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::execute_envelope::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x11d9) == '\0') {
    if ((*(longlong *)(param_1 + 0xb8) != -1) && (*(longlong *)(param_1 + 0xb8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0xd0) != -1) && (*(longlong *)(param_1 + 0xd0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0xe8) != -1) && (*(longlong *)(param_1 + 0xe8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x100) != -1) && (*(longlong *)(param_1 + 0x100) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x48) != -1) && (*(longlong *)(param_1 + 0x48) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x60) != -1) && (*(longlong *)(param_1 + 0x60) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x78) != -1) && (*(longlong *)(param_1 + 0x78) != 0)) {
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


