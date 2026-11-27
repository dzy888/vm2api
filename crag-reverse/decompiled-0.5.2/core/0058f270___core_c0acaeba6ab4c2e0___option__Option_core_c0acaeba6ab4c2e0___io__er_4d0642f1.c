// 0058f270 <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::io::error::Error>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::io::error::Error>>
          (ulonglong param_1)

{
  if (param_1 != 0) {
    if ((1 < ((uint)param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


