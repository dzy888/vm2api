// 002e6100 <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::oauth::TokenMetadata,craggemini_core[66f3c71560d70857]::protocol::Failure>,tokio[d7d91d38da47d894]::time::error::Elapsed>>

/* WARNING: Switch with 1 destination removed at 0x002e617d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::oauth::TokenMetadata,
   craggemini_core[66f3c71560d70857]::protocol::Failure>,
   tokio[d7d91d38da47d894]::time::error::Elapsed>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::oauth::TokenMetadata,craggemini_core[66f3c71560d70857]::protocol::Failure>,tokio[d7d91d38da47d894]::time::error::Elapsed>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -3) {
    if (lVar1 == -2) {
      <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 1);
      return;
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[3] != -1) && (param_1[3] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[6] != -1) && (param_1[6] != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


