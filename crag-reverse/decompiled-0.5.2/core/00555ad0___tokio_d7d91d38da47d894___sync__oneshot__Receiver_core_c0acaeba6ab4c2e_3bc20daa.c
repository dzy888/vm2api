// 00555ad0 <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
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
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 2;
    uVar5 = plVar3[0xe];
    do {
      LOCK();
      uVar2 = plVar3[0xe];
      bVar6 = uVar5 == uVar2;
      if (bVar6) {
        plVar3[0xe] = uVar5 | 4;
      }
      else {
        uVar5 = uVar2;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(plVar3[10] + 0x10))();
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      plVar3[0xe] = plVar3[0xe] & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar5 & 2) != 0) {
      local_68 = (undefined4)*plVar1;
      uStack_64 = *(undefined4 *)((longlong)plVar3 + 0x14);
      lVar4 = *plVar1;
      uStack_60 = (undefined4)plVar3[3];
      uStack_5c = *(undefined4 *)((longlong)plVar3 + 0x1c);
      local_58 = (undefined4)plVar3[4];
      uStack_54 = *(undefined4 *)((longlong)plVar3 + 0x24);
      uStack_50 = (undefined4)plVar3[5];
      uStack_4c = *(undefined4 *)((longlong)plVar3 + 0x2c);
      local_48 = (undefined4)plVar3[6];
      uStack_44 = *(undefined4 *)((longlong)plVar3 + 0x34);
      uStack_40 = (undefined4)plVar3[7];
      uStack_3c = *(undefined4 *)((longlong)plVar3 + 0x3c);
      local_38 = (undefined4)plVar3[8];
      uStack_34 = *(undefined4 *)((longlong)plVar3 + 0x44);
      uStack_30 = (undefined4)plVar3[9];
      uStack_2c = *(undefined4 *)((longlong)plVar3 + 0x4c);
      *plVar1 = -3;
      if (lVar4 != -3) {
        <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                  (&local_68);
      }
    }
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


