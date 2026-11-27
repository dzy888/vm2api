// 001773b0 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::path::PathBuf,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x001773c9 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::path::PathBuf,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::path::PathBuf,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 == -1) {
    if ((1 < (param_2 & 3) - 2) && ((param_2 & 3) != 0)) {
      (*(code *)PTR_drop_00219c58)();
    }
  }
  else if (param_1 != 0) {
    (*(code *)PTR_free_0021a8b8)(param_4,1);
    return;
  }
  return;
}


