// 0026ca60 <(tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio[d7d91d38da47d894]::time::sleep::Sleep)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep)>
          (longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0xd8);
  <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(puVar1);
  plVar2 = (longlong *)*puVar1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(puVar1);
    }
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x70) + 0x18))();
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x18))();
  }
  if (*(char *)(param_1 + 0xe0) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0xe8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0xe8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 0xf0);
  return;
}


