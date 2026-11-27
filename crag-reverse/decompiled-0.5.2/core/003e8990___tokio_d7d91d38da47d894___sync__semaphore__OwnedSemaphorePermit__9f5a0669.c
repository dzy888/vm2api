// 003e8990 <tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit>

/* WARNING: Switch with 1 destination removed at 0x003e89b0 */
/* WARNING: Switch with 1 destination removed at 0x006eff4a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  (*(code *)PTR_drop_007990f0)();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  if (*param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(*param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


