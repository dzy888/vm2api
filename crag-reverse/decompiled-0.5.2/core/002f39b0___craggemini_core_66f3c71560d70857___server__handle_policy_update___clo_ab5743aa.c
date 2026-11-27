// 002f39b0 <craggemini_core[66f3c71560d70857]::server::handle_policy_update::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002e809d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_policy_update::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_policy_update::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x390) != '\0') {
    if (*(char *)(param_1 + 0x390) == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
                (param_1 + 0x100);
      return;
    }
    return;
  }
  <http[56314f485c23ccf6]::request::Parts>();
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
  return;
}


