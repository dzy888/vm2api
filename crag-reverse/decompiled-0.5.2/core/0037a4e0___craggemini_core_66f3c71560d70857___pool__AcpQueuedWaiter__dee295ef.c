// 0037a4e0 <craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  plVar1 = (longlong *)param_1[5];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_1 + 5);
  }
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar3 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar2 + 0x60) + 0x10))();
    }
    plVar1 = (longlong *)param_1[6];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow(param_1 + 6);
        return;
      }
    }
  }
  return;
}


