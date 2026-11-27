// 00474200 <craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt>

/* WARNING: Switch with 1 destination removed at 0x00474302 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt>(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    uVar6 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar7 = uVar6 == uVar1;
      if (bVar7) {
        *(ulonglong *)(lVar2 + 0x30) = uVar6 | 4;
      }
      else {
        uVar6 = uVar1;
      }
      UNLOCK();
    } while (!bVar7);
    if (((uint)uVar6 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))();
    }
    if (((uint)uVar6 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar6 & 2) != 0) {
      local_28 = *(undefined8 *)(lVar2 + 0x58);
      lVar5 = *(longlong *)(lVar2 + 0x38);
      uStack_40 = *(undefined4 *)(lVar2 + 0x40);
      uStack_3c = *(undefined4 *)(lVar2 + 0x44);
      local_38 = *(undefined4 *)(lVar2 + 0x48);
      uStack_34 = *(undefined4 *)(lVar2 + 0x4c);
      uStack_30 = *(undefined4 *)(lVar2 + 0x50);
      uStack_2c = *(undefined4 *)(lVar2 + 0x54);
      *(undefined8 *)(lVar2 + 0x38) = 2;
      if (lVar5 != 2) {
        <serde_json[dc3825464c436029]::value::Value>(&uStack_40);
      }
    }
    plVar3 = (longlong *)param_1[5];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
        ::drop_slow(param_1 + 5);
      }
    }
  }
  plVar3 = param_1 + 3;
  uVar8 = <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(plVar3);
  plVar4 = (longlong *)*plVar3;
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    uVar8 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
            ::drop_slow(plVar3);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(uVar8,1);
  return;
}


