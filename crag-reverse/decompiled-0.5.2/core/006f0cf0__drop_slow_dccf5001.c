// 006f0cf0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006f0d43 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_18;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x10);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_00799070)();
  }
  LOCK();
  local_18 = *(longlong *)(lVar1 + 0x20);
  *(longlong *)(lVar1 + 0x20) = 0;
  UNLOCK();
  if (local_18 != 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
              (&local_18);
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


