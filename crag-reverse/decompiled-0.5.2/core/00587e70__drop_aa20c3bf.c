// 00587e70 drop

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong local_868;
  longlong local_860;
  longlong local_848;
  undefined8 local_830;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x880);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x880);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(ulonglong *)(lVar2 + 0x880) = uVar3 | 4;
      }
      else {
        uVar3 = uVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (((uint)uVar3 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x860) + 0x10))();
    }
    if (((uint)uVar3 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x880) = *(ulonglong *)(lVar2 + 0x880) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar3 & 2) != 0) {
      (*(code *)PTR_memcpy_00799008)();
      *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      if (local_868 != -2) {
        if ((int)local_868 == -1) {
          if ((local_860 != -1) && (local_860 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if ((local_848 != -1) && (local_848 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                    (local_830);
        }
        else if ((int)local_868 != 2) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AgySlot>
                    (&local_868,(undefined8 *)(lVar2 + 0x10));
        }
      }
    }
  }
  return;
}


