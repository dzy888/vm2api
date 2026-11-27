// 00580310 pop

/* <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>::pop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>
::pop(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  lVar7 = *param_2;
  uVar10 = *(ulonglong *)(lVar7 + 0x600);
  pcVar3 = (code *)PTR___rust_dealloc_00798fc8;
  while (PTR___rust_dealloc_00798fc8 = pcVar3, uVar10 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar7 = *(longlong *)(lVar7 + 0x608);
    if (lVar7 == 0) goto LAB_005803c9;
    *param_2 = lVar7;
    pcVar3 = (code *)PTR___rust_dealloc_00798fc8;
    uVar10 = *(ulonglong *)(lVar7 + 0x600);
  }
  lVar2 = param_2[1];
  if ((lVar2 != lVar7) && ((*(ulonglong *)(lVar2 + 0x610) >> 0x20 & 1) != 0)) {
    lVar11 = *(longlong *)(lVar2 + 0x618) - param_2[2];
    while (lVar11 < 1) {
      if (*(longlong *)(lVar2 + 0x608) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_2[1] = *(longlong *)(lVar2 + 0x608);
      *(undefined8 *)(lVar2 + 0x600) = 0;
      *(undefined8 *)(lVar2 + 0x608) = 0;
      *(undefined8 *)(lVar2 + 0x610) = 0;
      lVar7 = *param_3;
      *(longlong *)(lVar2 + 0x600) = *(longlong *)(lVar7 + 0x600) + 0x20;
      lVar11 = 0;
      plVar1 = (longlong *)(lVar7 + 0x608);
      LOCK();
      lVar7 = *plVar1;
      if (lVar7 == 0) {
        *plVar1 = lVar2;
      }
      else {
        lVar11 = lVar7;
      }
      UNLOCK();
      if (lVar7 != 0) {
        *(longlong *)(lVar2 + 0x600) = *(longlong *)(lVar11 + 0x600) + 0x20;
        lVar8 = 0;
        LOCK();
        lVar7 = *(longlong *)(lVar11 + 0x608);
        if (lVar7 == 0) {
          *(longlong *)(lVar11 + 0x608) = lVar2;
        }
        else {
          lVar8 = lVar7;
        }
        UNLOCK();
        if (lVar7 != 0) {
          *(longlong *)(lVar2 + 0x600) = *(longlong *)(lVar8 + 0x600) + 0x20;
          LOCK();
          bVar12 = *(longlong *)(lVar8 + 0x608) == 0;
          if (bVar12) {
            *(longlong *)(lVar8 + 0x608) = lVar2;
          }
          UNLOCK();
          if (!bVar12) {
            (*pcVar3)(lVar2,8);
          }
        }
      }
      lVar7 = *param_2;
      lVar2 = param_2[1];
      if ((lVar2 == lVar7) || ((*(ulonglong *)(lVar2 + 0x610) & 0x100000000) == 0)) break;
      lVar11 = *(longlong *)(lVar2 + 0x618) - param_2[2];
    }
  }
  lVar2 = param_2[2];
  uVar9 = (uint)lVar2;
  if (((uint)*(ulonglong *)(lVar7 + 0x610) >> (uVar9 & 0x1f) & 1) == 0) {
    if ((*(ulonglong *)(lVar7 + 0x610) >> 0x21 & 1) == 0) {
LAB_005803c9:
      *param_1 = -1;
    }
    else {
      *param_1 = 2;
    }
  }
  else {
    uVar10 = (ulonglong)((uVar9 & 0x1f) * 0x30);
    lVar11 = ((longlong *)(lVar7 + uVar10))[1];
    plVar1 = (longlong *)(lVar7 + 0x10 + uVar10);
    lVar8 = *plVar1;
    lVar4 = plVar1[1];
    plVar1 = (longlong *)(lVar7 + 0x20 + uVar10);
    lVar5 = *plVar1;
    lVar6 = plVar1[1];
    *param_1 = *(longlong *)(lVar7 + uVar10);
    param_1[1] = lVar11;
    param_1[4] = lVar5;
    param_1[5] = lVar6;
    param_1[2] = lVar8;
    param_1[3] = lVar4;
    if ((*param_1 != 2) && (*param_1 != -1)) {
      param_2[2] = lVar2 + 1;
    }
  }
  return;
}


