// 00555bd0 <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
          (undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    uVar4 = plVar2[6];
    do {
      LOCK();
      uVar1 = plVar2[6];
      bVar5 = uVar4 == uVar1;
      if (bVar5) {
        plVar2[6] = uVar4 | 4;
      }
      else {
        uVar4 = uVar1;
      }
      UNLOCK();
    } while (!bVar5);
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(plVar2[2] + 0x10))();
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      plVar2[6] = plVar2[6] & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar4 & 2) != 0) {
      local_28 = plVar2[0xb];
      lVar3 = plVar2[7];
      uStack_40 = (undefined4)plVar2[8];
      uStack_3c = *(undefined4 *)((longlong)plVar2 + 0x44);
      local_38 = (undefined4)plVar2[9];
      uStack_34 = *(undefined4 *)((longlong)plVar2 + 0x4c);
      uStack_30 = (undefined4)plVar2[10];
      uStack_2c = *(undefined4 *)((longlong)plVar2 + 0x54);
      plVar2[7] = 2;
      if (lVar3 != 2) {
        <serde_json[dc3825464c436029]::value::Value>(&uStack_40);
      }
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


