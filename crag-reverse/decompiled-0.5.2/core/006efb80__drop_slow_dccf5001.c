// 006efb80 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006efc0d */
/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop((undefined8 *)(lVar1 + 0x10));
  plVar2 = *(longlong **)(lVar1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799c38)();
    }
  }
  if ((*(longlong *)(lVar1 + 0x18) != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) {
    puVar3 = *(undefined8 **)(lVar1 + 0x28);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar3[2]);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


