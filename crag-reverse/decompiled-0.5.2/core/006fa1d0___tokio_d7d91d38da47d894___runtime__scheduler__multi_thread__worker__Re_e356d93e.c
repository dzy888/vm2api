// 006fa1d0 <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>

/* WARNING: Switch with 1 destination removed at 0x006f0923 */
/* WARNING: Switch with 1 destination removed at 0x006fa201 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_00799650)();
  }
  plVar2 = (longlong *)param_1[1];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar2 = *(longlong **)(lVar1 + 0x10);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_0079a860)();
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


