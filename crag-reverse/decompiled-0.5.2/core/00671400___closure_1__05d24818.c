// 00671400 {closure#1}

/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv::_closure_1_(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong extraout_RDX;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar3 = *param_1;
  puVar4 = (ulonglong *)param_1[1];
  <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::register(puVar4 + 0x20,uVar3,param_2);
  if ((1 < (puVar4[0x10] ^ *puVar4)) || ((puVar4[0x10] & 1) != 0)) {
    LOCK();
    if (*(longlong *)(param_2 + 0x18) == 0) {
      *(longlong *)(param_2 + 0x18) = 1;
    }
    UNLOCK();
  }
  puVar11 = PTR_park_00799b20;
  puVar10 = PTR_park_timeout_00799b18;
  puVar9 = PTR_now_00799250;
  uVar2 = *(uint *)((longlong *)param_1[2] + 1);
  if (uVar2 == 0xffffffff) {
    uVar14 = *(ulonglong *)(param_2 + 0x18);
    while (uVar14 == 0) {
      (*(code *)puVar11)();
      uVar14 = *(ulonglong *)(param_2 + 0x18);
    }
  }
  else {
    lVar5 = *(longlong *)param_1[2];
    uVar14 = *(ulonglong *)(param_2 + 0x18);
    lVar12 = extraout_RDX;
    while (uVar14 == 0) {
      uVar15 = (uint)lVar12;
      lVar12 = (*(code *)puVar9)();
      bVar7 = lVar12 < lVar5;
      if (lVar12 == lVar5) {
        bVar7 = uVar15 < uVar2;
      }
      if (!bVar7) {
        uVar13 = 0;
        LOCK();
        uVar1 = *(ulonglong *)(param_2 + 0x18);
        if (uVar1 == 0) {
          *(ulonglong *)(param_2 + 0x18) = 1;
        }
        else {
          uVar13 = uVar1;
        }
        UNLOCK();
        uVar14 = 3;
        if (uVar13 < 3) {
          uVar14 = uVar13;
        }
        if (uVar1 == 0) goto LAB_0067154e;
        goto LAB_00671544;
      }
      (*(code *)PTR_sub_00799b10)();
      (*(code *)puVar10)();
      uVar14 = *(ulonglong *)(param_2 + 0x18);
    }
  }
  if (uVar14 - 1 < 2) {
LAB_00671544:
    if (uVar14 - 1 < 2) {
LAB_0067154e:
      <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::unregister
                (&local_48,puVar4 + 0x20,uVar3);
      if (CONCAT44(uStack_44,local_48) == 0) goto LAB_006715be;
      plVar8 = (longlong *)CONCAT44(uStack_44,local_48);
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else if (uVar14 != 3) {
      (*(code *)PTR_panic_00799338)(uVar14,&PTR_s__rustc_48a229ceaefd4985c50990b14_00790c98);
LAB_006715be:
      (*(code *)PTR_unwrap_failed_00799278)();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}


