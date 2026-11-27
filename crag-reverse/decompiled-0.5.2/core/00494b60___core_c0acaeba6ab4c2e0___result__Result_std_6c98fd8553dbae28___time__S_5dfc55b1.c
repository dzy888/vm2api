// 00494b60 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (uint param_1,int param_2)

{
  if (param_2 == -1) {
    if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
      return;
    }
  }
  return;
}


