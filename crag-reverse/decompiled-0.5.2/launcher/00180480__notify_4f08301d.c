// 00180480 notify

/* <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify */

void __rustcall <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  local_40 = param_1 + 0x18;
  local_50 = *(longlong **)(param_1 + 0x20);
  local_38 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar5 = PTR_futex_wake_00219fe8;
  local_48 = local_50 + local_38 * 3;
  local_30 = 0;
  if (local_38 != 0) {
    do {
      plVar3 = local_50 + 3;
      local_68 = (undefined4)*local_50;
      uStack_64 = *(undefined4 *)((longlong)local_50 + 4);
      lVar4 = *local_50;
      uStack_60 = (undefined4)local_50[1];
      uStack_5c = *(undefined4 *)((longlong)local_50 + 0xc);
      local_58 = local_50[2];
      LOCK();
      bVar6 = *(longlong *)(*local_50 + 0x18) == 0;
      if (bVar6) {
        *(longlong *)(*local_50 + 0x18) = local_50[1];
      }
      UNLOCK();
      local_50 = plVar3;
      local_28 = local_68;
      uStack_24 = uStack_64;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      local_18 = local_58;
      if (bVar6) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar4 + 0x10) + 0x28);
        iVar2 = *piVar1;
        *piVar1 = 1;
        UNLOCK();
        if (iVar2 == -1) {
          (*(code *)puVar5)();
        }
      }
      plVar3 = (longlong *)CONCAT44(uStack_64,local_68);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_68);
      }
    } while (local_50 != local_48);
  }
  <alloc[12e961f32105355]::vec::drain::Drain<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_50);
  return;
}


