// 0025f7e0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x208) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x40);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 0x40);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x208) == '\x03') {
    <(tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep)>
              (param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x20c) = 0;
    lVar2 = *(longlong *)(param_1 + 0x98);
    for (lVar3 = *(longlong *)(param_1 + 0xa0) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar2);
      lVar2 = lVar2 + 0x848;
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    *(undefined1 *)(param_1 + 0x20a) = 0;
    plVar1 = *(longlong **)(param_1 + 0x78);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 0x78);
    }
    *(undefined1 *)(param_1 + 0x20b) = 0;
  }
  return;
}


