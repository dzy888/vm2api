// 003d04a0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>>

/* WARNING: Switch with 1 destination removed at 0x003d04e6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*param_1 == 0) {
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>
              (param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) && (*(longlong *)(param_1 + 4) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
      return;
    }
  }
  return;
}


