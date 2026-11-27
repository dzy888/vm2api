// 003ce220 <tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>

/* WARNING: Switch with 1 destination removed at 0x003ce2cd */
/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
          (longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799070)();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      pcVar3 = (code *)*puVar2;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      if (puVar2[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_>
              (param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x1090) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x1090) + 0x18))();
  }
  plVar1 = *(longlong **)(param_1 + 0x10a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x10a0);
      puVar2 = *(undefined8 **)(param_1 + 0x10a8);
      uVar5 = puVar2[2];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar5 - 1 & 0xfffffffffffffff0);
      }
      if (lVar4 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar4 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar6 = 8;
          if (8 < uVar5) {
            uVar6 = uVar5;
          }
          if ((-uVar6 & puVar2[1] + uVar6 + 0xf) != 0) {
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


