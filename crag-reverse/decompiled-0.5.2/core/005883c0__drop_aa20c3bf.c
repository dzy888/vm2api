// 005883c0 drop

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),
   craggemini_core[66f3c71560d70857]::protocol::Failure>> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar5 = *(ulonglong *)(lVar2 + 0x70);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x70);
      bVar7 = uVar5 == uVar1;
      if (bVar7) {
        *(ulonglong *)(lVar2 + 0x70) = uVar5 | 4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar7);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x50) + 0x10))();
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x70) = *(ulonglong *)(lVar2 + 0x70) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar5 & 2) != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x10);
      lVar3 = *(longlong *)(lVar2 + 0x28);
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffd;
      if (-2 < lVar6) {
        if (0 < lVar6) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (lVar3 - 1U < 0xfffffffffffffffe) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
          lVar6 = lVar3;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (uVar4,lVar6);
        return;
      }
    }
  }
  return;
}


