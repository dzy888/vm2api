// 001990d0 notify

/* <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify */

void __rustcall <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_28 = param_1 + 0x18;
  local_38 = *(longlong **)(param_1 + 0x20);
  local_20 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar5 = PTR_futex_wake_00219fe8;
  local_30 = local_38 + local_20 * 3;
  local_18 = 0;
  if (local_20 != 0) {
    do {
      plVar3 = local_38 + 3;
      local_58 = (undefined4)*local_38;
      uStack_54 = *(undefined4 *)((longlong)local_38 + 4);
      lVar4 = *local_38;
      uStack_50 = (undefined4)local_38[1];
      uStack_4c = *(undefined4 *)((longlong)local_38 + 0xc);
      local_48 = local_38[2];
      LOCK();
      bVar6 = *(longlong *)(*local_38 + 0x18) == 0;
      if (bVar6) {
        *(longlong *)(*local_38 + 0x18) = local_38[1];
      }
      UNLOCK();
      local_38 = plVar3;
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
      plVar3 = (longlong *)CONCAT44(uStack_54,local_58);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_58);
      }
    } while (local_38 != local_30);
  }
  <alloc[12e961f32105355]::vec::drain::Drain<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_38);
  return;
}


