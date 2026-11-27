// 0049db80 <(core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>,core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,
   core[c0acaeba6ab4c2e0]::io::error::Error>,
   core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,
   core[c0acaeba6ab4c2e0]::io::error::Error>)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>,core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>)>
          (ulonglong *param_1)

{
  if ((int)param_1[1] == -1) {
    if ((1 < ((uint)*param_1 & 3) - 2) && ((*param_1 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  if ((int)param_1[3] == -1) {
    if ((1 < ((uint)param_1[2] & 3) - 2) && ((param_1[2] & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
      return;
    }
  }
  return;
}


