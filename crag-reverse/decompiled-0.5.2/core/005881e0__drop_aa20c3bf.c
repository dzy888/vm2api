// 005881e0 drop

/* <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar5 = uVar4 == uVar1;
      if (bVar5) {
        *(ulonglong *)(lVar2 + 0x30) = uVar4 | 4;
      }
      else {
        uVar4 = uVar1;
      }
      UNLOCK();
    } while (!bVar5);
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))();
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar4 & 2) != 0) {
      local_18 = *(undefined8 *)(lVar2 + 0x58);
      lVar3 = *(longlong *)(lVar2 + 0x38);
      uStack_30 = *(undefined4 *)(lVar2 + 0x40);
      uStack_2c = *(undefined4 *)(lVar2 + 0x44);
      local_28 = *(undefined4 *)(lVar2 + 0x48);
      uStack_24 = *(undefined4 *)(lVar2 + 0x4c);
      uStack_20 = *(undefined4 *)(lVar2 + 0x50);
      uStack_1c = *(undefined4 *)(lVar2 + 0x54);
      *(undefined8 *)(lVar2 + 0x38) = 2;
      if (lVar3 != 2) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&uStack_30);
        return;
      }
    }
  }
  return;
}


