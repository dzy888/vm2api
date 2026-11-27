// 005882a0 drop

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 uVar7;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
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
      uVar7 = *(undefined4 *)plVar1;
      lVar4 = *plVar1;
      uStack_50 = *(undefined4 *)(lVar3 + 0x18);
      uStack_4c = *(undefined4 *)(lVar3 + 0x1c);
      local_48 = *(undefined4 *)(lVar3 + 0x20);
      uStack_44 = *(undefined4 *)(lVar3 + 0x24);
      uStack_40 = *(undefined4 *)(lVar3 + 0x28);
      uStack_3c = *(undefined4 *)(lVar3 + 0x2c);
      local_38 = *(undefined4 *)(lVar3 + 0x30);
      uStack_34 = *(undefined4 *)(lVar3 + 0x34);
      uStack_30 = *(undefined4 *)(lVar3 + 0x38);
      uStack_2c = *(undefined4 *)(lVar3 + 0x3c);
      local_28 = *(undefined4 *)(lVar3 + 0x40);
      uStack_24 = *(undefined4 *)(lVar3 + 0x44);
      uStack_20 = *(undefined4 *)(lVar3 + 0x48);
      uStack_1c = *(undefined4 *)(lVar3 + 0x4c);
      *plVar1 = -3;
      if (lVar4 != -3) {
        if (lVar4 == -2) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&uStack_50);
        }
        else {
          if ((lVar4 != -1) && (lVar4 != 0)) {
            uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
          }
          if ((CONCAT44(uStack_3c,uStack_40) != -1) && (CONCAT44(uStack_3c,uStack_40) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                    (CONCAT44(uStack_24,local_28));
        }
      }
    }
  }
  return;
}


