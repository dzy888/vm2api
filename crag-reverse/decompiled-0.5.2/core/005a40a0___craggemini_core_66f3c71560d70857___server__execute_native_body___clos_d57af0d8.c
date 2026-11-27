// 005a40a0 <craggemini_core[66f3c71560d70857]::server::execute_native_body::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x005a41ab */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::execute_native_body::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::execute_native_body::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)((longlong)param_1 + 0x10d9) == '\0') {
    if ((*param_1 != -1) && (*param_1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[3] != -1) && (param_1[3] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[6] != -1) && (param_1[6] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[9] != -1) && (param_1[9] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xf);
    if ((param_1[0xc] != -1) && (param_1[0xc] != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x10d9) == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::execute_turn_request::_closure_0_>(param_1 + 0x1b);
    if (((param_1[0x18] != -1) && (*(char *)((longlong)param_1 + 0x10db) != '\0')) &&
       (param_1[0x18] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined2 *)((longlong)param_1 + 0x10df) = 0;
    *(undefined4 *)((longlong)param_1 + 0x10db) = 0;
  }
  return;
}


