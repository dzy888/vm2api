// 006dcde0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x006dce26 */
/* WARNING: Switch with 1 destination removed at 0x006dce44 */
/* WARNING: Switch with 1 destination removed at 0x006f0d43 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::maybe_move_runtime::{closure#0}::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::_closure_0_>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [128];
  
  if (*param_1 == 0) {
    plVar3 = *(longlong **)(param_1 + 2);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        lVar4 = *(longlong *)(param_1 + 2);
        plVar3 = *(longlong **)(lVar4 + 0x10);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
        LOCK();
        lVar1 = *(longlong *)(lVar4 + 0x20);
        *(longlong *)(lVar4 + 0x20) = 0;
        UNLOCK();
        if (lVar1 != 0) {
          <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
                    (auStack_98 + 0x80);
        }
        if (lVar4 != -1) {
          LOCK();
          plVar3 = (longlong *)(lVar4 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            uVar5 = 8;
            goto __rustc_100742bb89c490cb____rust_dealloc;
          }
        }
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (*(longlong *)(param_1 + 4) != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)();
    }
    if (puVar2[1] != 0) {
      uVar5 = puVar2[2];
__rustc_100742bb89c490cb____rust_dealloc:
      (*(code *)PTR_free_0079adc8)(param_4,uVar5);
      return;
    }
  }
  return;
}


