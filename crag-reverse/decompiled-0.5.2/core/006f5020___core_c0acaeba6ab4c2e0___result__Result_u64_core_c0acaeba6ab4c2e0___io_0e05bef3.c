// 006f5020 <core[c0acaeba6ab4c2e0]::result::Result<u64,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<u64,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<u64,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (longlong param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((1 < (param_2 & 3) - 2) && ((param_2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


