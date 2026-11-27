// 006f0760 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006f0842 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(longlong *)(lVar1 + 0x2d8);
  if ((lVar3 != -1) && (lVar3 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(lVar1 + 0x140) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x140) * 0x18;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::config::Config>
            (lVar1 + 0x170,lVar3);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Handle>
            (lVar1 + 0x240);
  plVar2 = *(longlong **)(lVar1 + 0x238);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_00799af8)();
  }
  plVar2 = *(longlong **)(lVar1 + 0x200);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x210);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,0x80);
      return;
    }
  }
  return;
}


