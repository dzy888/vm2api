// 00572d10 <craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[6] != -1) && (param_1[6] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  plVar1 = (longlong *)param_1[0xb];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_1 + 0xb);
  }
  plVar1 = (longlong *)param_1[0xc];
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar2 & 5) == 1) {
      (**(code **)(plVar1[0x10e] + 0x10))();
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1 + 0xc);
      return;
    }
  }
  return;
}


