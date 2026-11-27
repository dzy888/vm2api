// 006eeb70 <tokio[d7d91d38da47d894]::runtime::driver::Handle>

/* WARNING: Switch with 1 destination removed at 0x006eebbf */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Handle> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Handle>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  <tokio[d7d91d38da47d894]::runtime::driver::IoHandle>();
  if (*(longlong *)(param_1 + 0x48) - 1U < 0xfffffffffffffffe) {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  if (*(int *)(param_1 + 0x90) == -1) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


