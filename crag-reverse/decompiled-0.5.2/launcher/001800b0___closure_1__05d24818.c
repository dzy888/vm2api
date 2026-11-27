// 001800b0 {closure#1}

/* <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv::_closure_1_(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
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
  puVar3 = (ulonglong *)param_1[1];
  <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::register(puVar3 + 0x28,uVar2,param_2);
  uVar13 = ~puVar3[0x32] & puVar3[0x10];
  if ((uVar13 != *puVar3) || ((puVar3[0x32] & puVar3[0x10]) != 0)) {
    LOCK();
    if (*(longlong *)(param_2 + 0x18) == 0) {
      *(longlong *)(param_2 + 0x18) = 1;
    }
    UNLOCK();
  }
  puVar9 = PTR_park_00219fe0;
  puVar8 = PTR_park_timeout_00219fd0;
  puVar7 = PTR_now_00219fc8;
  uVar1 = (uint)((ulonglong *)param_1[2])[1];
  if (uVar1 == 0xffffffff) {
    uVar11 = *(ulonglong *)(param_2 + 0x18);
    while (uVar11 == 0) {
      (*(code *)puVar9)();
      uVar11 = *(ulonglong *)(param_2 + 0x18);
    }
  }
  else {
    uVar10 = *(ulonglong *)param_1[2];
    uVar11 = *(ulonglong *)(param_2 + 0x18);
    while (uVar11 == 0) {
      uVar12 = (uint)uVar13;
      uVar13 = (*(code *)puVar7)();
      bVar5 = (longlong)uVar13 < (longlong)uVar10;
      if (uVar13 == uVar10) {
        bVar5 = uVar12 < uVar1;
      }
      if (!bVar5) {
        uVar10 = 0;
        LOCK();
        uVar13 = *(ulonglong *)(param_2 + 0x18);
        if (uVar13 == 0) {
          *(ulonglong *)(param_2 + 0x18) = 1;
        }
        else {
          uVar10 = uVar13;
        }
        UNLOCK();
        uVar11 = 3;
        if (uVar10 < 3) {
          uVar11 = uVar10;
        }
        if (uVar13 == 0) goto LAB_0018020e;
        goto LAB_00180204;
      }
      (*(code *)PTR_sub_00219fd8)();
      (*(code *)puVar8)();
      uVar11 = *(ulonglong *)(param_2 + 0x18);
    }
  }
  if (uVar11 - 1 < 2) {
LAB_00180204:
    if (uVar11 - 1 < 2) {
LAB_0018020e:
      <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::unregister
                (&local_48,puVar3 + 0x28,uVar2);
      if (CONCAT44(uStack_44,local_48) == 0) goto LAB_0018027d;
      local_58 = local_38;
      local_68 = local_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      plVar6 = (longlong *)CONCAT44(uStack_44,local_48);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_68);
      }
    }
    else if (uVar11 != 3) {
      (*(code *)PTR_panic_00219ca8)(uVar11,&PTR_s__rustc_48a229ceaefd4985c50990b14_002159f0);
LAB_0018027d:
      (*(code *)PTR_unwrap_failed_00219e58)();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


