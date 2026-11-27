// 003ce860 <tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>

/* WARNING: Switch with 1 destination removed at 0x003ce8bd */
/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
          (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799078)();
  }
  <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>>
            (param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x3118) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3118) + 0x18))();
  }
  plVar1 = *(longlong **)(param_1 + 0x3128);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x3128);
      puVar3 = *(undefined8 **)(param_1 + 0x3130);
      uVar4 = puVar3[2];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar4 - 1 & 0xfffffffffffffff0);
      }
      if (lVar2 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar2 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar5 = 8;
          if (8 < uVar4) {
            uVar5 = uVar4;
          }
          if ((-uVar5 & puVar3[1] + uVar5 + 0xf) != 0) {
            (*(code *)PTR_free_0079adc8)();
            return;
          }
        }
      }
      return;
    }
  }
  return;
}


