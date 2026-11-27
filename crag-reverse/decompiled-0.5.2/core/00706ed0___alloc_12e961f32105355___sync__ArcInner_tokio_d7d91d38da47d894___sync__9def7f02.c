// 00706ed0 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Sender<()>>>

/* WARNING: Switch with 1 destination removed at 0x006efd1e */
/* WARNING: Switch with 1 destination removed at 0x00706f32 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Sender<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Sender<()>>>
          (longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar5 = *(ulonglong *)(lVar2 + 0x30);
    do {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_00706f1a;
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      if (uVar4 == uVar1) {
        *(ulonglong *)(lVar2 + 0x30) = uVar4 | 2;
        uVar5 = uVar4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (uVar4 != uVar1);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x10))();
    }
LAB_00706f1a:
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        uVar5 = *(ulonglong *)(lVar2 + 0x30);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))();
        }
        if ((uVar5 & 8) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))();
        }
        if (lVar2 != -1) {
          LOCK();
          plVar3 = (longlong *)(lVar2 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            (*(code *)PTR_free_0079adc8)();
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


