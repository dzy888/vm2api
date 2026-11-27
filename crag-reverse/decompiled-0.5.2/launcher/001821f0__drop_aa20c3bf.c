// 001821f0 drop

/* WARNING: Switch with 1 destination removed at 0x0018234e */
/* <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  puVar3 = (ulonglong *)param_1[1];
  if (*param_1 == 0) {
    LOCK();
    puVar1 = puVar3 + 0x40;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      uVar5 = puVar3[0x10];
      do {
        LOCK();
        uVar7 = puVar3[0x10];
        bVar9 = uVar5 == uVar7;
        if (bVar9) {
          puVar3[0x10] = uVar5 | puVar3[0x32];
        }
        else {
          uVar5 = uVar7;
        }
        UNLOCK();
      } while (!bVar9);
      if ((puVar3[0x32] & uVar5) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(puVar3 + 0x28);
        LOCK();
        cVar2 = (char)puVar3[0x42];
        *(char *)(puVar3 + 0x42) = '\x01';
        UNLOCK();
      }
      else {
        LOCK();
        cVar2 = (char)puVar3[0x42];
        *(char *)(puVar3 + 0x42) = '\x01';
        UNLOCK();
      }
      if (cVar2 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>>
                  (puVar3);
        return;
      }
    }
  }
  else if ((int)*param_1 == 1) {
    LOCK();
    puVar1 = puVar3 + 0x30;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      LOCK();
      puVar1 = puVar3 + 0x10;
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if ((uVar5 & 1) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(puVar3 + 0x20);
        LOCK();
        cVar2 = (char)puVar3[0x32];
        *(char *)(puVar3 + 0x32) = '\x01';
        UNLOCK();
        pcVar4 = (code *)PTR___rust_dealloc_00219c40;
      }
      else {
        LOCK();
        cVar2 = (char)puVar3[0x32];
        *(char *)(puVar3 + 0x32) = '\x01';
        UNLOCK();
        pcVar4 = (code *)PTR___rust_dealloc_00219c40;
      }
      PTR___rust_dealloc_00219c40 = pcVar4;
      if (cVar2 != '\0') {
        uVar5 = puVar3[0x10];
        uVar7 = puVar3[1];
        for (uVar8 = *puVar3 & 0xfffffffffffffffe; uVar8 != (uVar5 & 0xfffffffffffffffe);
            uVar8 = uVar8 + 2) {
          uVar6 = (uint)(uVar8 >> 1) & 0x1f;
          if (uVar6 == 0x1f) {
            uVar7 = *(ulonglong *)(uVar7 + 0x7c0);
            (*pcVar4)();
          }
          else {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
                      ((uVar6 << 6) + uVar7);
          }
        }
        if (uVar7 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar3 + 0x21);
LAB_0018233d:
        (*(code *)PTR_free_0021a8b8)();
        return;
      }
    }
  }
  else {
    LOCK();
    puVar1 = puVar3 + 0xe;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect(puVar3);
      LOCK();
      uVar5 = puVar3[0x10];
      *(char *)(puVar3 + 0x10) = '\x01';
      UNLOCK();
      if ((char)uVar5 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar3 + 1);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (puVar3 + 7);
        goto LAB_0018233d;
      }
    }
  }
  return;
}


