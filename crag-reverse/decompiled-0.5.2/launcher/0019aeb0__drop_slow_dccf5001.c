// 0019aeb0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x0019af3c */
/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  puVar1 = (undefined8 *)(lVar2 + 0x10);
  <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop(puVar1);
  plVar3 = (longlong *)*puVar1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::scoped::ScopeData>>::
      drop_slow(puVar1);
    }
  }
  if ((*(longlong *)(lVar2 + 0x18) != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
    puVar1 = *(undefined8 **)(lVar2 + 0x28);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,puVar1[2]);
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar2 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,8);
      return;
    }
  }
  return;
}


