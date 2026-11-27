// 003626c0 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00362751 */
/* WARNING: Switch with 1 destination removed at 0x003627e6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar1 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        uVar3 = puVar1[2];
        goto __rustc_100742bb89c490cb____rust_dealloc;
      }
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x206] == '\0') {
      plVar2 = *(longlong **)(param_1 + 0xe);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0xe);
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x10);
      }
    }
    else {
      if ((char)param_1[0x206] != '\x03') {
        return;
      }
      if ((char)param_1[0x1e] == '\x04') {
        <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                  (param_1 + 0x20);
      }
      else if ((char)param_1[0x1e] == '\x03') {
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                  (param_1 + 0x24);
      }
      plVar2 = *(longlong **)(param_1 + 0xe);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0xe);
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x10);
      }
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 8) != -1) && (*(longlong *)(param_1 + 8) != 0)) {
      uVar3 = 1;
__rustc_100742bb89c490cb____rust_dealloc:
      (*(code *)PTR_free_0079adc8)(param_4,uVar3);
      return;
    }
  }
  return;
}


