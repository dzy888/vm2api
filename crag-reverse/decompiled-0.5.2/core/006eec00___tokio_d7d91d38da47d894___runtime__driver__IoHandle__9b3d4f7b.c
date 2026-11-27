// 006eec00 <tokio[d7d91d38da47d894]::runtime::driver::IoHandle>

/* WARNING: Switch with 1 destination removed at 0x006eecd1 */
/* WARNING: Switch with 1 destination removed at 0x006eff7a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::IoHandle> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::IoHandle>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)param_1 + 0x44) != -1) {
    (*(code *)PTR_close_00799030)();
    puVar3 = PTR_drop_slow_00799150;
    lVar1 = param_1[3];
    if (param_1[4] != 0) {
      lVar4 = 1 - param_1[4];
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar5);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)puVar3)();
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (lVar4 != 1);
    }
    if (param_1[2] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    (*(code *)PTR_close_00799030)();
    return;
  }
  plVar2 = (longlong *)*param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  if (*param_1 != -1) {
    LOCK();
    plVar2 = (longlong *)(*param_1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


