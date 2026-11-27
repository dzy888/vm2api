// 0058c160 drop

/* WARNING: Switch with 1 destination removed at 0x0058c229 */
/* <std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1[1];
  if (*param_1 == 0) {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0x208);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::disconnect_receivers(lVar3);
      LOCK();
      cVar2 = *(char *)(lVar3 + 0x210);
      *(char *)(lVar3 + 0x210) = '\x01';
      UNLOCK();
      if (cVar2 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::sync::mpmc::counter::Counter<std[6c98fd8553dbae28]::sync::mpmc::array::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>>
                  (lVar3);
        return;
      }
    }
  }
  else if ((int)*param_1 == 1) {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0x188);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::disconnect_receivers(lVar3);
      LOCK();
      cVar2 = *(char *)(lVar3 + 400);
      *(char *)(lVar3 + 400) = '\x01';
      UNLOCK();
      if (cVar2 != '\0') {
        <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(lVar3);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (lVar3 + 0x108);
        uVar4 = 0x80;
LAB_0058c21f:
        (*(code *)PTR_free_0079adc8)(param_4,uVar4);
        return;
      }
    }
  }
  else {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0x78);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::disconnect(lVar3);
      LOCK();
      cVar2 = *(char *)(lVar3 + 0x80);
      *(char *)(lVar3 + 0x80) = '\x01';
      UNLOCK();
      if (cVar2 != '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (lVar3 + 8);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
                  (lVar3 + 0x38);
        uVar4 = 8;
        goto LAB_0058c21f;
      }
    }
  }
  return;
}


