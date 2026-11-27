// 00555cc0 <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),
   craggemini_core[66f3c71560d70857]::protocol::Failure>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
          (undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    uVar5 = plVar2[0xe];
    do {
      LOCK();
      uVar1 = plVar2[0xe];
      bVar7 = uVar5 == uVar1;
      if (bVar7) {
        plVar2[0xe] = uVar5 | 4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar7);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(plVar2[10] + 0x10))();
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      plVar2[0xe] = plVar2[0xe] & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar5 & 2) != 0) {
      lVar6 = plVar2[2];
      lVar3 = plVar2[5];
      lVar4 = plVar2[8];
      plVar2[2] = -3;
      if (-2 < lVar6) {
        if (0 < lVar6) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (lVar3 - 1U < 0xfffffffffffffffe) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
          lVar6 = lVar3;
        }
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (lVar4,lVar6);
      }
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


