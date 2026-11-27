// 003d0800 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>>>>

/* WARNING: Switch with 1 destination removed at 0x003d0854 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_7_>>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar1 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_7_>>>
              (*(undefined8 *)(param_1 + 2));
    return;
  }
  return;
}


