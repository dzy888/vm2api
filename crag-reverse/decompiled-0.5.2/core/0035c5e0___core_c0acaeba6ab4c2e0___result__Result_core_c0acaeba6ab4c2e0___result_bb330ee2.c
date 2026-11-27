// 0035c5e0 <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::time::error::Elapsed>>

/* WARNING: Switch with 1 destination removed at 0x0035c62e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), core[c0acaeba6ab4c2e0]::io::error::Error>,
   tokio[d7d91d38da47d894]::time::error::Elapsed>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::time::error::Elapsed>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -2) {
    if (lVar1 == -1) {
      if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
        (*(code *)PTR_drop_00799040)();
        return;
      }
    }
    else {
      if (lVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      if (param_1[3] != 0) {
        (*(code *)PTR_free_0079adc8)();
        return;
      }
    }
  }
  return;
}


