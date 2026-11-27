// 0035e0b0 <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
          (longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x10);
    uVar5 = *(ulonglong *)(lVar3 + 0x70);
    do {
      LOCK();
      uVar2 = *(ulonglong *)(lVar3 + 0x70);
      bVar6 = uVar5 == uVar2;
      if (bVar6) {
        *(ulonglong *)(lVar3 + 0x70) = uVar5 | 4;
      }
      else {
        uVar5 = uVar2;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar3 + 0x50) + 0x10))();
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar3 + 0x70) = *(ulonglong *)(lVar3 + 0x70) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar5 & 2) != 0) {
      local_68 = *(undefined4 *)plVar1;
      uStack_64 = *(undefined4 *)(lVar3 + 0x14);
      lVar4 = *plVar1;
      uStack_60 = *(undefined4 *)(lVar3 + 0x18);
      uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
      local_58 = *(undefined4 *)(lVar3 + 0x20);
      uStack_54 = *(undefined4 *)(lVar3 + 0x24);
      uStack_50 = *(undefined4 *)(lVar3 + 0x28);
      uStack_4c = *(undefined4 *)(lVar3 + 0x2c);
      local_48 = *(undefined4 *)(lVar3 + 0x30);
      uStack_44 = *(undefined4 *)(lVar3 + 0x34);
      uStack_40 = *(undefined4 *)(lVar3 + 0x38);
      uStack_3c = *(undefined4 *)(lVar3 + 0x3c);
      local_38 = *(undefined4 *)(lVar3 + 0x40);
      uStack_34 = *(undefined4 *)(lVar3 + 0x44);
      uStack_30 = *(undefined4 *)(lVar3 + 0x48);
      uStack_2c = *(undefined4 *)(lVar3 + 0x4c);
      *plVar1 = -3;
      if (lVar4 != -3) {
        <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                  (&local_68);
      }
    }
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


