// 005129b0 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x005136ab */
/* WARNING: Switch with 1 destination removed at 0x006efc0d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  
  if (*param_1 == 0) {
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    return;
  }
  (*(code *)PTR_drop_00799c50)();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007996e8)();
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = param_1[1];
  <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop((undefined8 *)(lVar2 + 0x10));
  plVar1 = *(longlong **)(lVar2 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799c38)();
    }
  }
  if ((*(longlong *)(lVar2 + 0x18) != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
    puVar3 = *(undefined8 **)(lVar2 + 0x28);
    pcVar4 = (code *)*puVar3;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


