// 006fb4b0 drop

/* <alloc[12e961f32105355]::vec::drain::Drain<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::drain::Drain<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = 8;
  param_1[1] = 8;
  puVar5 = PTR_drop_slow_00799670;
  uVar6 = lVar2 - lVar1;
  if (uVar6 == 0) {
    lVar1 = param_1[4];
    if (lVar1 != 0) {
      lVar2 = param_1[2];
      lVar4 = *(longlong *)(lVar2 + 0x10);
      if (param_1[3] != lVar4) {
        (*(code *)PTR_memmove_00799258)(*(undefined8 *)(lVar2 + 8),lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar4 + lVar1;
    }
  }
  else {
    uVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar1 + uVar7 * 8);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)puVar5)();
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 >> 3 != uVar7);
    lVar1 = param_1[4];
    if (lVar1 != 0) {
      lVar2 = param_1[2];
      lVar4 = *(longlong *)(lVar2 + 0x10);
      if (param_1[3] != lVar4) {
        (*(code *)PTR_memmove_00799258)(*(undefined8 *)(lVar2 + 8),lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar4 + lVar1;
    }
  }
  return;
}


