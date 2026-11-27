// 00587fb0 drop

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar5 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        *(ulonglong *)(lVar2 + 0x30) = uVar5 | 4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))();
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar5 & 2) != 0) {
      local_18 = *(undefined8 *)(lVar2 + 0xa8);
      local_28 = *(undefined8 *)(lVar2 + 0x98);
      uStack_20 = *(undefined8 *)(lVar2 + 0xa0);
      local_38 = *(undefined8 *)(lVar2 + 0x88);
      uStack_30 = *(undefined8 *)(lVar2 + 0x90);
      local_48 = *(undefined8 *)(lVar2 + 0x78);
      uStack_40 = *(undefined8 *)(lVar2 + 0x80);
      uVar7 = *(undefined4 *)(lVar2 + 0x38);
      uStack_84 = *(undefined4 *)(lVar2 + 0x3c);
      lVar3 = *(longlong *)(lVar2 + 0x38);
      uStack_80 = *(undefined4 *)(lVar2 + 0x40);
      uStack_7c = *(undefined4 *)(lVar2 + 0x44);
      lVar4 = *(longlong *)(lVar2 + 0x40);
      local_78 = *(undefined4 *)(lVar2 + 0x48);
      uStack_74 = *(undefined4 *)(lVar2 + 0x4c);
      uStack_70 = *(undefined4 *)(lVar2 + 0x50);
      uStack_6c = *(undefined4 *)(lVar2 + 0x54);
      local_68 = *(undefined4 *)(lVar2 + 0x58);
      uStack_64 = *(undefined4 *)(lVar2 + 0x5c);
      uStack_60 = *(undefined4 *)(lVar2 + 0x60);
      uStack_5c = *(undefined4 *)(lVar2 + 100);
      local_58 = *(undefined4 *)(lVar2 + 0x68);
      uStack_54 = *(undefined4 *)(lVar2 + 0x6c);
      uStack_50 = *(undefined4 *)(lVar2 + 0x70);
      uStack_4c = *(undefined4 *)(lVar2 + 0x74);
      *(undefined8 *)(lVar2 + 0x38) = 0xfffffffffffffffe;
      if (lVar3 != -2) {
        local_88 = uVar7;
        if (lVar3 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(&local_88);
          return;
        }
        if ((lVar4 != -1) && (lVar4 != 0)) {
          uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
        }
        if ((CONCAT44(uStack_64,local_68) != -1) && (CONCAT44(uStack_64,local_68) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (CONCAT44(uStack_4c,uStack_50));
        return;
      }
    }
  }
  return;
}


