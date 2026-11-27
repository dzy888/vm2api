// 00362380 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>>

/* WARNING: Switch with 1 destination removed at 0x003623f3 */
/* WARNING: Switch with 1 destination removed at 0x00362426 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar2 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      if (puVar2[1] != 0) {
        uVar3 = puVar2[2];
        goto __rustc_100742bb89c490cb____rust_dealloc;
      }
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x12] == '\0') {
      plVar1 = *(longlong **)(param_1 + 8);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 8);
      }
    }
    else {
      if ((char)param_1[0x12] != '\x03') {
        return;
      }
      plVar1 = *(longlong **)(param_1 + 8);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 8);
      }
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      uVar3 = 1;
__rustc_100742bb89c490cb____rust_dealloc:
      (*(code *)PTR_free_0079adc8)(param_4,uVar3);
      return;
    }
  }
  return;
}


