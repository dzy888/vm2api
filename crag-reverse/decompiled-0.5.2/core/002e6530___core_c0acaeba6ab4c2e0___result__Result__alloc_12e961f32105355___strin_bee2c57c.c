// 002e6530 <core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::io::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x002e656c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),core[c0acaeba6ab4c2e0]::io::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == -1) {
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


