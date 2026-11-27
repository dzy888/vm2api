// 00264d50 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::enforce_memory_pressure::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00264de1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::enforce_memory_pressure::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::enforce_memory_pressure::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_>
              (param_1 + 0x50);
  }
  else {
    if (*(char *)(param_1 + 0x38) != '\x04') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_>
              (param_1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    lVar2 = 1 - *(longlong *)(param_1 + 0x30);
    do {
      plVar1 = (longlong *)*puVar3;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(puVar3);
      }
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1);
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


