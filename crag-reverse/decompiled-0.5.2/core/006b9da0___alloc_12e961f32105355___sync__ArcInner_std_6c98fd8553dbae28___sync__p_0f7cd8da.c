// 006b9da0 <alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>>>>

/* WARNING: Switch with 1 destination removed at 0x006b9e6f */
/* WARNING: Switch with 1 destination removed at 0x006ba5dc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,
   hyper[c4782d5b5c5e3493]::error::Error>>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>>>>
          (undefined4 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
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
  longlong local_28;
  undefined8 uStack_20;
  
  plVar2 = *(longlong **)(param_2 + 0x18);
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
      param_1 = (**(code **)(plVar2[2] + 0x10))();
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      plVar2[6] = plVar2[6] & 0xfffffffffffffffe;
      UNLOCK();
      param_1 = (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar4 & 2) != 0) {
      local_28 = plVar2[0xd];
      param_1 = (undefined4)plVar2[7];
      lVar3 = plVar2[7];
      uStack_50 = (undefined4)plVar2[8];
      uStack_4c = *(undefined4 *)((longlong)plVar2 + 0x44);
      local_48 = (undefined4)plVar2[9];
      uStack_44 = *(undefined4 *)((longlong)plVar2 + 0x4c);
      uStack_40 = (undefined4)plVar2[10];
      uStack_3c = *(undefined4 *)((longlong)plVar2 + 0x54);
      local_38 = (undefined4)plVar2[0xb];
      uStack_34 = *(undefined4 *)((longlong)plVar2 + 0x5c);
      uStack_30 = (undefined4)plVar2[0xc];
      uStack_2c = *(undefined4 *)((longlong)plVar2 + 100);
      plVar2[7] = 0;
      if (lVar3 != 0) {
        param_1 = <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
                            (&uStack_50);
      }
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
      uVar4 = *(ulonglong *)(lVar3 + 0x30);
      if ((uVar4 & 1) != 0) {
        uStack_20 = 0x6ba59b;
        param_1 = (*(code *)PTR_drop_task_00799060)();
      }
      if ((uVar4 & 8) != 0) {
        uStack_20 = 0x6ba5ab;
        param_1 = (*(code *)PTR_drop_task_00799060)();
      }
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        uStack_20 = 0x6ba5bb;
        param_1 = <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
                            (lVar3 + 0x40);
      }
      if (lVar3 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar3 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_free_0079adc8)(param_1,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


