// 00180290 {closure#0}

/* <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::send::_closure_0_(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar2 = *param_1;
  plVar3 = (longlong *)param_1[1];
  <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::register(plVar3 + 0x20,uVar2,param_2);
  uVar12 = ~plVar3[0x32] & plVar3[0x10];
  if ((*plVar3 + plVar3[0x31] != uVar12) || ((plVar3[0x32] & plVar3[0x10]) != 0)) {
    LOCK();
    if (*(longlong *)(param_2 + 0x18) == 0) {
      *(longlong *)(param_2 + 0x18) = 1;
    }
    UNLOCK();
  }
  puVar8 = PTR_park_00219fe0;
  puVar7 = PTR_park_timeout_00219fd0;
  puVar6 = PTR_now_00219fc8;
  uVar1 = (uint)((ulonglong *)param_1[2])[1];
  if (uVar1 == 0xffffffff) {
    uVar10 = *(ulonglong *)(param_2 + 0x18);
    while (uVar10 == 0) {
      (*(code *)puVar8)();
      uVar10 = *(ulonglong *)(param_2 + 0x18);
    }
  }
  else {
    uVar9 = *(ulonglong *)param_1[2];
    uVar10 = *(ulonglong *)(param_2 + 0x18);
    while (uVar10 == 0) {
      uVar11 = (uint)uVar12;
      uVar12 = (*(code *)puVar6)();
      bVar5 = (longlong)uVar12 < (longlong)uVar9;
      if (uVar12 == uVar9) {
        bVar5 = uVar11 < uVar1;
      }
      if (!bVar5) {
        uVar9 = 0;
        LOCK();
        uVar12 = *(ulonglong *)(param_2 + 0x18);
        if (uVar12 == 0) {
          *(ulonglong *)(param_2 + 0x18) = 1;
        }
        else {
          uVar9 = uVar12;
        }
        UNLOCK();
        uVar10 = 3;
        if (uVar9 < 3) {
          uVar10 = uVar9;
        }
        if (uVar12 == 0) goto LAB_001803fe;
        goto LAB_001803f4;
      }
      (*(code *)PTR_sub_00219fd8)();
      (*(code *)puVar7)();
      uVar10 = *(ulonglong *)(param_2 + 0x18);
    }
  }
  if (uVar10 - 1 < 2) {
LAB_001803f4:
    if (uVar10 - 1 < 2) {
LAB_001803fe:
      <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::unregister
                (&local_48,plVar3 + 0x20,uVar2);
      if (CONCAT44(uStack_44,local_48) == 0) goto LAB_0018046d;
      local_58 = local_38;
      local_68 = local_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      plVar3 = (longlong *)CONCAT44(uStack_44,local_48);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_68);
      }
    }
    else if (uVar10 != 3) {
      (*(code *)PTR_panic_00219ca8)(uVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_00215a20);
LAB_0018046d:
      (*(code *)PTR_unwrap_failed_00219e58)();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


