// 00707440 <tokio[d7d91d38da47d894]::runtime::driver::Driver>

/* WARNING: Switch with 1 destination removed at 0x006eff7a */
/* WARNING: Switch with 1 destination removed at 0x0070749f */
/* WARNING: Switch with 1 destination removed at 0x007074bd */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Driver> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Driver>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 1;
  if (*param_1 == 0) {
    if (*plVar1 == -1) goto LAB_007074a5;
    <tokio[d7d91d38da47d894]::runtime::signal::Driver>();
  }
  else if ((int)*param_1 == 1) {
    if (*plVar1 == -1) {
LAB_007074a5:
      plVar1 = (longlong *)param_1[2];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        return;
      }
      if (param_1[2] == -1) {
        return;
      }
      LOCK();
      plVar1 = (longlong *)(param_1[2] + 8);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        return;
      }
      goto __rustc_100742bb89c490cb____rust_dealloc;
    }
    <tokio[d7d91d38da47d894]::runtime::signal::Driver>();
  }
  else {
    if (*plVar1 == -1) goto LAB_007074a5;
    <tokio[d7d91d38da47d894]::runtime::signal::Driver>();
  }
  if (param_1[10] != -1) {
    LOCK();
    plVar1 = (longlong *)(param_1[10] + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
__rustc_100742bb89c490cb____rust_dealloc:
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


