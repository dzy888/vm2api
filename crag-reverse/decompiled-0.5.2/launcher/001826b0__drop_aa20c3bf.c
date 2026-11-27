// 001826b0 drop

/* WARNING: Switch with 1 destination removed at 0x001828da */
/* <std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  puVar2 = (ulonglong *)param_1[1];
  if (*param_1 == 0) {
    LOCK();
    puVar1 = puVar2 + 0x41;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      uVar5 = puVar2[0x10];
      do {
        LOCK();
        uVar6 = puVar2[0x10];
        bVar13 = uVar5 == uVar6;
        if (bVar13) {
          puVar2[0x10] = uVar5 | puVar2[0x32];
        }
        else {
          uVar5 = uVar6;
        }
        UNLOCK();
      } while (!bVar13);
      uVar6 = puVar2[0x32];
      if ((uVar6 & uVar5) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(puVar2 + 0x20);
        uVar6 = puVar2[0x32];
      }
      puVar3 = PTR_yield_now_00219ff8;
      uVar8 = ~uVar6;
      uVar10 = 0;
      uVar12 = *puVar2;
      while( true ) {
        while( true ) {
          uVar6 = uVar6 - 1 & uVar12;
          lVar9 = uVar6 * 0x40;
          uVar11 = *(ulonglong *)(puVar2[0x33] + lVar9);
          if (uVar12 + 1 != uVar11) break;
          if (puVar2[0x30] <= uVar6 + 1) {
            uVar11 = (uVar12 & -puVar2[0x31]) + puVar2[0x31];
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
                    (puVar2[0x33] + lVar9 + 8);
          uVar6 = puVar2[0x32];
          uVar12 = uVar11;
        }
        if ((uVar5 & uVar8) == uVar12) break;
        if (uVar10 < 7) {
          if (uVar10 != 0) {
            uVar7 = uVar10 * uVar10;
            uVar4 = uVar7 & 5;
            if (7 < uVar7) {
              uVar7 = uVar7 & 0x38;
              do {
                uVar7 = uVar7 - 8;
              } while (uVar7 != 0);
              if (uVar4 == 0) goto LAB_00182883;
            }
            do {
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
        }
        else {
          (*(code *)puVar3)();
        }
LAB_00182883:
        uVar10 = uVar10 + 1;
        uVar6 = puVar2[0x32];
      }
      LOCK();
      uVar5 = puVar2[0x42];
      *(char *)(puVar2 + 0x42) = '\x01';
      UNLOCK();
      if ((char)uVar5 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>>
                  (puVar2);
        return;
      }
    }
  }
  else if ((int)*param_1 == 1) {
    LOCK();
    puVar1 = puVar2 + 0x31;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::disconnect_receivers(puVar2);
      LOCK();
      uVar5 = puVar2[0x32];
      *(char *)(puVar2 + 0x32) = '\x01';
      puVar3 = PTR___rust_dealloc_00219c40;
      UNLOCK();
      if ((char)uVar5 != '\0') {
        uVar5 = puVar2[0x10];
        uVar6 = puVar2[1];
        for (uVar12 = *puVar2 & 0xfffffffffffffffe; uVar12 != (uVar5 & 0xfffffffffffffffe);
            uVar12 = uVar12 + 2) {
          uVar10 = (uint)(uVar12 >> 1) & 0x1f;
          if (uVar10 == 0x1f) {
            uVar6 = *(ulonglong *)(uVar6 + 0x7c0);
            (*(code *)puVar3)();
          }
          else {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
                      ((uVar10 << 6) + uVar6);
          }
        }
        if (uVar6 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar2 + 0x21);
LAB_001828c9:
        (*(code *)PTR_free_0021a8b8)();
        return;
      }
    }
  }
  else {
    LOCK();
    puVar1 = puVar2 + 0xf;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect(puVar2);
      LOCK();
      uVar5 = puVar2[0x10];
      *(char *)(puVar2 + 0x10) = '\x01';
      UNLOCK();
      if ((char)uVar5 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar2 + 1);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar2 + 7);
        goto LAB_001828c9;
      }
    }
  }
  return;
}


