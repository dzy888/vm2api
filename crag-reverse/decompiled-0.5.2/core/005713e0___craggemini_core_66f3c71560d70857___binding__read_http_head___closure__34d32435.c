// 005713e0 <craggemini_core[66f3c71560d70857]::binding::read_http_head::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::read_http_head::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::read_http_head::_closure_0_>(longlong param_1)

{
  if (1 < *(byte *)(param_1 + 0x1091) - 4) {
    if (*(byte *)(param_1 + 0x1091) != 3) {
      return;
    }
    if ((((*(char *)(param_1 + 0x1178) == '\x03') && (*(char *)(param_1 + 0x1100) == '\x03')) &&
        (*(char *)(param_1 + 0x1170) == '\x03')) && (*(char *)(param_1 + 0x1168) == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x1140) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1140) + 0x18))();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1070) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x1058) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x1090) = 0;
  return;
}


