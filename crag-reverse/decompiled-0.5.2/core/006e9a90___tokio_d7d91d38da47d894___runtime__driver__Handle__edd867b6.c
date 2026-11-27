// 006e9a90 <tokio[d7d91d38da47d894]::runtime::driver::Handle>

/* WARNING: Switch with 1 destination removed at 0x006e9b6c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Handle> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Handle>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(int *)((longlong)param_1 + 0x44) == -1) {
    plVar1 = (longlong *)*param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799668)();
    }
  }
  else {
    (*(code *)PTR_close_00799030)();
    puVar2 = PTR_drop_slow_00799150;
    if (param_1[4] != 0) {
      puVar4 = (undefined8 *)param_1[3];
      lVar3 = 1 - param_1[4];
      do {
        plVar1 = (longlong *)*puVar4;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)puVar2)();
        }
        puVar4 = puVar4 + 1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
    if (param_1[2] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    (*(code *)PTR_close_00799030)();
  }
  if (param_1[9] - 1 < 0xfffffffffffffffe) {
    LOCK();
    plVar1 = (longlong *)(param_1[9] + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  if (*(int *)(param_1 + 0x12) == -1) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


