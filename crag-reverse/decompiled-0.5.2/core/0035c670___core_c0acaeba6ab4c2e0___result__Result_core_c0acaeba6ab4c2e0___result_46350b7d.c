// 0035c670 <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::time::error::Elapsed>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::io::error::Error>, tokio[d7d91d38da47d894]::time::error::Elapsed>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::time::error::Elapsed>>
          (longlong param_1,ulonglong param_2)

{
  if (param_2 != 0 && param_1 == 0) {
    if ((1 < ((uint)param_2 & 3) - 2) && ((param_2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


