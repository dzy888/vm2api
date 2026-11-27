// 006efd60 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006efde0 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Sender<()>>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Sender<()>>>::drop_slow
          (longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 != 0) {
    uVar6 = *(ulonglong *)(lVar3 + 0x30);
    do {
      uVar5 = uVar6;
      if ((uVar5 & 4) != 0) goto LAB_006efdaa;
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      if (uVar5 == uVar1) {
        *(ulonglong *)(lVar3 + 0x30) = uVar5 | 2;
        uVar6 = uVar5;
      }
      else {
        uVar6 = uVar1;
      }
      UNLOCK();
    } while (uVar5 != uVar1);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))();
    }
LAB_006efdaa:
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_00799b00)();
      }
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar4 = (longlong *)(lVar2 + 8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


