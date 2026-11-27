// 006fbd50 drop

/* <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar3 = PTR_drop_slow_00799658;
  puVar2 = PTR_drop_slow_00799650;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    do {
      plVar1 = (longlong *)puVar4[-1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar2)();
      }
      plVar1 = (longlong *)*puVar4;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar3)();
      }
      puVar4 = puVar4 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}


