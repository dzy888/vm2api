// 0058a500 drop

/* WARNING: Switch with 1 destination removed at 0x0058a624 */
/* <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  lVar5 = param_1[1];
  if (*param_1 == 0) {
    LOCK();
    plVar1 = (longlong *)(lVar5 + 0x200);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar6 = *(ulonglong *)(lVar5 + 0x80);
      do {
        LOCK();
        uVar4 = *(ulonglong *)(lVar5 + 0x80);
        bVar7 = uVar6 == uVar4;
        if (bVar7) {
          *(ulonglong *)(lVar5 + 0x80) = uVar6 | *(ulonglong *)(lVar5 + 400);
        }
        else {
          uVar6 = uVar4;
        }
        UNLOCK();
      } while (!bVar7);
      if ((*(ulonglong *)(lVar5 + 400) & uVar6) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(lVar5 + 0x140);
        LOCK();
        cVar3 = *(char *)(lVar5 + 0x210);
        *(char *)(lVar5 + 0x210) = '\x01';
        UNLOCK();
      }
      else {
        LOCK();
        cVar3 = *(char *)(lVar5 + 0x210);
        *(char *)(lVar5 + 0x210) = '\x01';
        UNLOCK();
      }
      if (cVar3 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>>
                  (lVar5);
        return;
      }
    }
  }
  else if ((int)*param_1 == 1) {
    LOCK();
    plVar1 = (longlong *)(lVar5 + 0x180);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      LOCK();
      puVar2 = (ulonglong *)(lVar5 + 0x80);
      uVar6 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar6 & 1) == 0) {
        <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(lVar5 + 0x100);
        LOCK();
        cVar3 = *(char *)(lVar5 + 400);
        *(char *)(lVar5 + 400) = '\x01';
        UNLOCK();
      }
      else {
        LOCK();
        cVar3 = *(char *)(lVar5 + 400);
        *(char *)(lVar5 + 400) = '\x01';
        UNLOCK();
      }
      if (cVar3 != '\0') {
        <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(lVar5);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (lVar5 + 0x108);
LAB_0058a61a:
        (*(code *)PTR_free_0079adc8)();
        return;
      }
    }
  }
  else {
    LOCK();
    plVar1 = (longlong *)(lVar5 + 0x70);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect(lVar5);
      LOCK();
      cVar3 = *(char *)(lVar5 + 0x80);
      *(char *)(lVar5 + 0x80) = '\x01';
      UNLOCK();
      if (cVar3 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (lVar5 + 8);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (lVar5 + 0x38);
        goto LAB_0058a61a;
      }
    }
  }
  return;
}


