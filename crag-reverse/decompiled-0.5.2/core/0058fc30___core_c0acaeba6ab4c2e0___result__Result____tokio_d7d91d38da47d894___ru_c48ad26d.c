// 0058fc30 <core[c0acaeba6ab4c2e0]::result::Result<(),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>

/* WARNING: Switch with 1 destination removed at 0x0058fc6a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(),
   tokio[d7d91d38da47d894]::runtime::task::error::JoinError>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    puVar1 = (undefined8 *)param_1[2];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
      return;
    }
  }
  return;
}


