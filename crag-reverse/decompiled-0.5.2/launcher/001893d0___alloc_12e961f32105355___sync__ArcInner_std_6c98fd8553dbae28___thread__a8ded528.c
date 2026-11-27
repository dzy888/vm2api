// 001893d0 <alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>

/* WARNING: Switch with 1 destination removed at 0x00189430 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop(puVar1);
  plVar2 = (longlong *)*puVar1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::scoped::ScopeData>>::
      drop_slow(puVar1);
    }
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,puVar1[2]);
      return;
    }
  }
  return;
}


