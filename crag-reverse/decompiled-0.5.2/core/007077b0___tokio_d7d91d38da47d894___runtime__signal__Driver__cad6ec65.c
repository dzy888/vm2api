// 007077b0 <tokio[d7d91d38da47d894]::runtime::signal::Driver>

/* WARNING: Switch with 1 destination removed at 0x006f0dba */
/* WARNING: Switch with 1 destination removed at 0x00707827 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::signal::Driver> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::signal::Driver>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar2 = PTR_close_00799030;
  (*(code *)PTR_close_00799030)();
  (*(code *)puVar2)();
  plVar1 = (longlong *)param_1[7];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  if (param_1[7] != -1) {
    LOCK();
    plVar1 = (longlong *)(param_1[7] + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


