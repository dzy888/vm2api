// 006f2f00 <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>

/* WARNING: Switch with 1 destination removed at 0x006efff5 */
/* WARNING: Switch with 1 destination removed at 0x006f2f54 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::clear_wakers
            (*(longlong *)(param_1 + 0x10) + 0x80);
  if (*param_1 == '\0') {
    plVar2 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake(lVar1 + 0x80,0x3f);
  if (*(longlong *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0xb0) + 0x18))();
  }
  if (*(longlong *)(lVar1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0xc0) + 0x18))();
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


