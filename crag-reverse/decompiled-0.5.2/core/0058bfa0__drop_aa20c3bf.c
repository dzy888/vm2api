// 0058bfa0 drop

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<bytes[e9829e187354639b]::bytes::Bytes,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x1b8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1b8) = 1;
  }
  lVar1 = lVar4 + 0x1c0;
  (*(code *)PTR_close_00799f70)();
  (*(code *)PTR_notify_waiters_00799550)();
  local_28 = lVar4 + 0x1a0;
  local_20 = lVar4 + 0x80;
  uVar5 = *(ulonglong *)(lVar4 + 0x110);
  do {
    LOCK();
    uVar2 = *(ulonglong *)(lVar4 + 0x110);
    bVar6 = uVar5 == uVar2;
    if (bVar6) {
      *(ulonglong *)(lVar4 + 0x110) = uVar5 | 2;
    }
    else {
      uVar5 = uVar2;
    }
    UNLOCK();
  } while (!bVar6);
  local_18 = lVar1;
  if (uVar5 == 0) {
    lVar1 = *(longlong *)(lVar4 + 0x100);
    *(undefined8 *)(lVar4 + 0x100) = 0;
    LOCK();
    uVar3 = *(undefined8 *)(lVar4 + 0x110);
    *(undefined8 *)(lVar4 + 0x110) = 0;
    UNLOCK();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(uVar3);
    }
  }
  <<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
  ::drain(&local_28);
  <<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
  ::drain(&local_28);
  return;
}


