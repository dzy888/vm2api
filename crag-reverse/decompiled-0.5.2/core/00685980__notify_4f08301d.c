// 00685980 notify

/* <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify */

void __rustcall <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  local_50 = param_1 + 0x18;
  local_60 = *(longlong **)(param_1 + 0x20);
  local_48 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar7 = PTR_futex_wake_00799b60;
  puVar6 = PTR_drop_slow_007995f0;
  local_58 = local_60 + local_48 * 3;
  local_40 = 0;
  if (local_48 != 0) {
    do {
      plVar1 = local_60 + 3;
      local_38 = (undefined4)*local_60;
      uStack_34 = *(undefined4 *)((longlong)local_60 + 4);
      plVar5 = (longlong *)*local_60;
      lVar4 = *local_60;
      uStack_30 = (undefined4)local_60[1];
      uStack_2c = *(undefined4 *)((longlong)local_60 + 0xc);
      local_28 = local_60[2];
      LOCK();
      bVar8 = *(longlong *)(*local_60 + 0x18) == 0;
      if (bVar8) {
        *(longlong *)(*local_60 + 0x18) = local_60[1];
      }
      UNLOCK();
      local_60 = plVar1;
      if (bVar8) {
        LOCK();
        piVar2 = (int *)(*(longlong *)(lVar4 + 0x10) + 0x28);
        iVar3 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
        if (iVar3 == -1) {
          (*(code *)puVar7)();
        }
      }
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        (*(code *)puVar6)();
      }
    } while (local_60 != local_58);
  }
  <alloc[12e961f32105355]::vec::drain::Drain<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_60);
  return;
}


