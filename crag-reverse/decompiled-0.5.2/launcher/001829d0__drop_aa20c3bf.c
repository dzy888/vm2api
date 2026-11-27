// 001829d0 drop

/* WARNING: Switch with 1 destination removed at 0x00182bdb */
/* <std[6c98fd8553dbae28]::sync::mpmc::Receiver<()> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Receiver<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  
  puVar1 = (ulonglong *)param_1[1];
  if (*param_1 == 0) {
    LOCK();
    puVar8 = puVar1 + 0x41;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    if (*puVar8 == 0) {
      uVar4 = puVar1[0x10];
      do {
        LOCK();
        uVar9 = puVar1[0x10];
        bVar12 = uVar4 == uVar9;
        if (bVar12) {
          puVar1[0x10] = uVar4 | puVar1[0x32];
        }
        else {
          uVar4 = uVar9;
        }
        UNLOCK();
      } while (!bVar12);
      uVar9 = puVar1[0x32];
      if ((uVar9 & uVar4) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(puVar1 + 0x20);
        uVar9 = puVar1[0x32];
      }
      puVar3 = PTR_yield_now_00219ff8;
      uVar7 = ~uVar9;
      uVar11 = 0;
      uVar10 = *puVar1;
      while( true ) {
        while( true ) {
          uVar9 = uVar9 - 1 & uVar10;
          uVar2 = *(ulonglong *)(puVar1[0x33] + uVar9 * 8);
          if (uVar10 + 1 != uVar2) break;
          if (uVar9 + 1 < puVar1[0x30]) {
            uVar9 = puVar1[0x32];
            uVar10 = uVar2;
          }
          else {
            uVar10 = (uVar10 & -puVar1[0x31]) + puVar1[0x31];
            uVar9 = puVar1[0x32];
          }
        }
        if ((uVar4 & uVar7) == uVar10) break;
        if (uVar11 < 7) {
          if (uVar11 != 0) {
            uVar6 = uVar11 * uVar11;
            uVar5 = uVar6 & 5;
            if (7 < uVar6) {
              uVar6 = uVar6 & 0x38;
              do {
                uVar6 = uVar6 - 8;
              } while (uVar6 != 0);
              if (uVar5 == 0) goto LAB_00182b89;
            }
            do {
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        else {
          (*(code *)puVar3)();
        }
LAB_00182b89:
        uVar11 = uVar11 + 1;
        uVar9 = puVar1[0x32];
      }
      LOCK();
      uVar4 = puVar1[0x42];
      *(char *)(puVar1 + 0x42) = '\x01';
      UNLOCK();
      if ((char)uVar4 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<()>>>>
                  (puVar1);
        return;
      }
    }
  }
  else if ((int)*param_1 == 1) {
    LOCK();
    puVar8 = puVar1 + 0x31;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    if (*puVar8 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::disconnect_receivers(puVar1);
      LOCK();
      uVar4 = puVar1[0x32];
      *(char *)(puVar1 + 0x32) = '\x01';
      puVar3 = PTR___rust_dealloc_00219c40;
      UNLOCK();
      if ((char)uVar4 != '\0') {
        uVar4 = puVar1[0x10];
        puVar8 = (ulonglong *)puVar1[1];
        for (uVar9 = *puVar1 & 0xfffffffffffffffe; uVar9 != (uVar4 & 0xfffffffffffffffe);
            uVar9 = uVar9 + 2) {
          if ((~(uint)uVar9 & 0x3e) == 0) {
            puVar8 = (ulonglong *)*puVar8;
            (*(code *)puVar3)();
          }
        }
        if (puVar8 != (ulonglong *)0x0) {
          (*(code *)PTR___rust_dealloc_00219c40)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar1 + 0x21);
LAB_00182bcf:
        (*(code *)PTR_free_0021a8b8)();
        return;
      }
    }
  }
  else {
    LOCK();
    puVar8 = puVar1 + 0xf;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    if (*puVar8 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect(puVar1);
      LOCK();
      uVar4 = puVar1[0x10];
      *(char *)(puVar1 + 0x10) = '\x01';
      UNLOCK();
      if ((char)uVar4 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar1 + 1);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar1 + 7);
        goto LAB_00182bcf;
      }
    }
  }
  return;
}


