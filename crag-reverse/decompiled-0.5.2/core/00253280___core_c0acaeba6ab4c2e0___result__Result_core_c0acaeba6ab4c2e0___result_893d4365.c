// 00253280 <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>

/* WARNING: Switch with 1 destination removed at 0x002532f9 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,
   core[c0acaeba6ab4c2e0]::io::error::Error>,
   tokio[d7d91d38da47d894]::runtime::task::error::JoinError>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
          (longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == -1) {
    if (param_1[2] != 0) {
      puVar1 = (undefined8 *)param_1[3];
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR_free_0079adc8)();
        return;
      }
    }
  }
  else if ((((int)*param_1 == 2) && (1 < ((uint)param_1[1] & 3) - 2)) && ((param_1[1] & 3U) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


