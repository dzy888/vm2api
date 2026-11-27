// 0039dae0 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::driver::Driver>>

/* WARNING: Switch with 1 destination removed at 0x0039db89 */
/* WARNING: Switch with 1 destination removed at 0x0039dba7 */
/* WARNING: Switch with 1 destination removed at 0x006eff7a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::driver::Driver>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::driver::Driver>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
  if (*param_1 != -1) {
    if (*(longlong *)(param_1 + 2) == -1) {
      plVar1 = *(longlong **)(param_1 + 4);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (*(longlong *)(param_1 + 4) != -1) {
          LOCK();
          plVar1 = (longlong *)(*(longlong *)(param_1 + 4) + 8);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) goto __rustc_100742bb89c490cb____rust_dealloc;
        }
        return;
      }
    }
    else {
      if (*(longlong *)(param_1 + 2) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      if ((*(longlong *)(param_1 + 8) != -1) && (*(longlong *)(param_1 + 8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      puVar2 = PTR_close_00799030;
      (*(code *)PTR_close_00799030)();
      (*(code *)puVar2)();
      plVar1 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799660)();
      }
      if (*(longlong *)(param_1 + 0x14) != -1) {
        LOCK();
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x14) + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
__rustc_100742bb89c490cb____rust_dealloc:
          (*(code *)PTR_free_0079adc8)(param_4,8);
          return;
        }
      }
    }
  }
  return;
}


