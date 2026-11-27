// 006f51f0 <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},()>::{closure#1}>

/* WARNING: Switch with 1 destination removed at 0x006efc0d */
/* WARNING: Switch with 1 destination removed at 0x006f521d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},
   ()>::{closure#1}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_,()>::_closure_1_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  <<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_>();
  <std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x40);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 != 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop((undefined8 *)(lVar1 + 0x10));
  plVar3 = *(longlong **)(lVar1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_00799c38)();
    }
  }
  if ((*(longlong *)(lVar1 + 0x18) != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x28);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)();
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar2[2]);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar1 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


