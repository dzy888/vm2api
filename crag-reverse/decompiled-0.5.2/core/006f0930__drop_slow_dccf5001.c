// 006f0930 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006f09a1 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Shared>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Shared>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x18) == -1) {
    plVar1 = *(longlong **)(lVar2 + 0x20);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799668)();
    }
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::signal::Driver>();
    if (*(longlong *)(lVar2 + 0x60) != -1) {
      LOCK();
      plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x60) + 8);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
      }
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


