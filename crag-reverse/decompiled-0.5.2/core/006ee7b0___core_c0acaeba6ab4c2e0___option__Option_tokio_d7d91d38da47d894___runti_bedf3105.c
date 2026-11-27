// 006ee7b0 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::signal::Handle>>

/* WARNING: Switch with 1 destination removed at 0x006ee7cb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::signal::Handle>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::signal::Handle>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (param_1 - 1U < 0xfffffffffffffffe) {
    LOCK();
    plVar1 = (longlong *)(param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


