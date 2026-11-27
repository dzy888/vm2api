// 0037f3f0 <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>

/* WARNING: Switch with 1 destination removed at 0x0037f43e */
/* WARNING: Switch with 1 destination removed at 0x006efff5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  (*(code *)PTR_drop_00799148)();
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake(lVar2 + 0x80,0x3f);
  if (*(longlong *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0xb0) + 0x18))();
  }
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0xc0) + 0x18))();
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,0x80);
      return;
    }
  }
  return;
}


