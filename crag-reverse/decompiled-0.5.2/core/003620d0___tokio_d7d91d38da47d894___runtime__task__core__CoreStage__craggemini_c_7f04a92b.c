// 003620d0 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00362149 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar2 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      if (puVar2[1] != 0) {
        (*(code *)PTR_free_0079adc8)(param_4,puVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0xc34] != '\0') {
      if ((char)param_1[0xc34] != '\x03') {
        return;
      }
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>(param_1 + 4);
    }
    plVar1 = *(longlong **)(param_1 + 2);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 2);
      return;
    }
  }
  return;
}


