// 006f50c0 <alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>

/* WARNING: Switch with 1 destination removed at 0x006f5121 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop((undefined8 *)(param_1 + 0x10));
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799c38)();
    }
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)();
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,puVar2[2]);
      return;
    }
  }
  return;
}


