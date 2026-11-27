// 006ba630 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006ba729 */
/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,
   hyper[c4782d5b5c5e3493]::error::Error>>>>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>>>>
::drop_slow(undefined4 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
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
  undefined8 local_28;
  
  lVar2 = *param_2;
  lVar3 = *(longlong *)(lVar2 + 0x18);
  if (lVar3 != 0) {
    uVar6 = *(ulonglong *)(lVar3 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      bVar7 = uVar6 == uVar1;
      if (bVar7) {
        *(ulonglong *)(lVar3 + 0x30) = uVar6 | 4;
      }
      else {
        uVar6 = uVar1;
      }
      UNLOCK();
    } while (!bVar7);
    if (((uint)uVar6 & 10) == 8) {
      param_1 = (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))();
    }
    if (((uint)uVar6 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      param_1 = (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar6 & 2) != 0) {
      local_28 = *(undefined8 *)(lVar3 + 0x68);
      param_1 = *(undefined4 *)(lVar3 + 0x38);
      lVar5 = *(longlong *)(lVar3 + 0x38);
      uStack_50 = *(undefined4 *)(lVar3 + 0x40);
      uStack_4c = *(undefined4 *)(lVar3 + 0x44);
      local_48 = *(undefined4 *)(lVar3 + 0x48);
      uStack_44 = *(undefined4 *)(lVar3 + 0x4c);
      uStack_40 = *(undefined4 *)(lVar3 + 0x50);
      uStack_3c = *(undefined4 *)(lVar3 + 0x54);
      local_38 = *(undefined4 *)(lVar3 + 0x58);
      uStack_34 = *(undefined4 *)(lVar3 + 0x5c);
      uStack_30 = *(undefined4 *)(lVar3 + 0x60);
      uStack_2c = *(undefined4 *)(lVar3 + 100);
      *(undefined8 *)(lVar3 + 0x38) = 0;
      if (lVar5 != 0) {
        param_1 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
                            (&uStack_50);
      }
    }
    plVar4 = *(longlong **)(lVar2 + 0x18);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        param_1 = (*(code *)PTR_drop_slow_007994c8)();
      }
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar4 = (longlong *)(lVar2 + 8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_free_0079adc8)(param_1,8);
      return;
    }
  }
  return;
}


