// 00707680 <tokio[d7d91d38da47d894]::runtime::driver::IoStack>

/* WARNING: Switch with 1 destination removed at 0x006eff7a */
/* WARNING: Switch with 1 destination removed at 0x007076b7 */
/* WARNING: Switch with 1 destination removed at 0x007076d5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::IoStack> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::IoStack>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_1 == -1) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (param_1[1] != -1) {
        LOCK();
        plVar1 = (longlong *)(param_1[1] + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) goto __rustc_100742bb89c490cb____rust_dealloc;
      }
      return;
    }
  }
  else {
    <tokio[d7d91d38da47d894]::runtime::signal::Driver>(param_1);
    if (param_1[9] != -1) {
      LOCK();
      plVar1 = (longlong *)(param_1[9] + 8);
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


