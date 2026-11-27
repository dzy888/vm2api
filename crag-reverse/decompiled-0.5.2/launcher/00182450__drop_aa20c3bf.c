// 00182450 drop

/* WARNING: Switch with 1 destination removed at 0x001825a2 */
/* <std[6c98fd8553dbae28]::sync::mpmc::Sender<()> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (longlong *param_1)

{
  char cVar1;
  ulonglong *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  bool bVar7;
  
  puVar2 = (ulonglong *)param_1[1];
  if (*param_1 == 0) {
    LOCK();
    puVar5 = puVar2 + 0x40;
    *puVar5 = *puVar5 - 1;
    UNLOCK();
    if (*puVar5 == 0) {
      uVar4 = puVar2[0x10];
      do {
        LOCK();
        uVar6 = puVar2[0x10];
        bVar7 = uVar4 == uVar6;
        if (bVar7) {
          puVar2[0x10] = uVar4 | puVar2[0x32];
        }
        else {
          uVar4 = uVar6;
        }
        UNLOCK();
      } while (!bVar7);
      if ((puVar2[0x32] & uVar4) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(puVar2 + 0x28);
        LOCK();
        cVar1 = (char)puVar2[0x42];
        *(char *)(puVar2 + 0x42) = '\x01';
        UNLOCK();
      }
      else {
        LOCK();
        cVar1 = (char)puVar2[0x42];
        *(char *)(puVar2 + 0x42) = '\x01';
        UNLOCK();
      }
      if (cVar1 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>>>
                  (puVar2);
        return;
      }
    }
  }
  else if ((int)*param_1 == 1) {
    LOCK();
    puVar5 = puVar2 + 0x30;
    *puVar5 = *puVar5 - 1;
    UNLOCK();
    if (*puVar5 == 0) {
      LOCK();
      puVar5 = puVar2 + 0x10;
      uVar4 = *puVar5;
      *puVar5 = *puVar5 | 1;
      UNLOCK();
      if ((uVar4 & 1) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(puVar2 + 0x20);
        LOCK();
        cVar1 = (char)puVar2[0x32];
        *(char *)(puVar2 + 0x32) = '\x01';
        UNLOCK();
        pcVar3 = (code *)PTR___rust_dealloc_00219c40;
      }
      else {
        LOCK();
        cVar1 = (char)puVar2[0x32];
        *(char *)(puVar2 + 0x32) = '\x01';
        UNLOCK();
        pcVar3 = (code *)PTR___rust_dealloc_00219c40;
      }
      PTR___rust_dealloc_00219c40 = pcVar3;
      if (cVar1 != '\0') {
        uVar4 = puVar2[0x10];
        puVar5 = (ulonglong *)puVar2[1];
        for (uVar6 = *puVar2 & 0xfffffffffffffffe; uVar6 != (uVar4 & 0xfffffffffffffffe);
            uVar6 = uVar6 + 2) {
          if ((~(uint)uVar6 & 0x3e) == 0) {
            puVar5 = (ulonglong *)*puVar5;
            (*pcVar3)();
          }
        }
        if (puVar5 != (ulonglong *)0x0) {
          (*(code *)PTR___rust_dealloc_00219c40)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar2 + 0x21);
LAB_00182596:
        (*(code *)PTR_free_0021a8b8)();
        return;
      }
    }
  }
  else {
    LOCK();
    puVar5 = puVar2 + 0xe;
    *puVar5 = *puVar5 - 1;
    UNLOCK();
    if (*puVar5 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect(puVar2);
      LOCK();
      uVar4 = puVar2[0x10];
      *(char *)(puVar2 + 0x10) = '\x01';
      UNLOCK();
      if ((char)uVar4 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar2 + 1);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar2 + 7);
        goto LAB_00182596;
      }
    }
  }
  return;
}


