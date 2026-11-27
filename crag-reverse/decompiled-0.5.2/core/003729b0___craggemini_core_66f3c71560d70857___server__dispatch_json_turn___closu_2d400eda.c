// 003729b0 <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::dispatch_json_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::dispatch_json_turn::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x6d9) != '\0') {
    if (*(char *)(param_1 + 0x6d9) == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::_closure_0_>
                (param_1 + 0x280);
      *(undefined2 *)(param_1 + 0x6da) = 0;
      *(undefined1 *)(param_1 + 0x6dc) = 0;
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x60);
  if ((*(longlong *)(param_1 + 0x260) != -1) && (*(longlong *)(param_1 + 0x260) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x230);
  return;
}


