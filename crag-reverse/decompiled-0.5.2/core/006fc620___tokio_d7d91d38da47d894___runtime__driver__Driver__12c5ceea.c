// 006fc620 <tokio[d7d91d38da47d894]::runtime::driver::Driver>

/* WARNING: Switch with 1 destination removed at 0x006eff7a */
/* WARNING: Switch with 1 destination removed at 0x006fc6c0 */
/* WARNING: Switch with 1 destination removed at 0x006fc6de */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Driver> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Driver>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
  if (*(longlong *)(param_1 + 8) == -1) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (*(longlong *)(param_1 + 0x10) != -1) {
        LOCK();
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) goto __rustc_100742bb89c490cb____rust_dealloc;
      }
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x20) != -1) && (*(longlong *)(param_1 + 0x20) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar2 = PTR_close_00799030;
    (*(code *)PTR_close_00799030)();
    (*(code *)puVar2)();
    plVar1 = *(longlong **)(param_1 + 0x40);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799660)();
    }
    if (*(longlong *)(param_1 + 0x50) != -1) {
      LOCK();
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + 8);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
__rustc_100742bb89c490cb____rust_dealloc:
        (*(code *)PTR_free_0079adc8)(param_4,8);
        return;
      }
    }
  }
  return;
}


