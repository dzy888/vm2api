// 003ca010 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::File,core[c0acaeba6ab4c2e0]::io::error::Error>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::File,
   core[c0acaeba6ab4c2e0]::io::error::Error>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::File,core[c0acaeba6ab4c2e0]::io::error::Error>>>
          (int *param_1)

{
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      (*(code *)PTR_close_00799030)();
      return;
    }
    if ((1 < ((uint)*(ulonglong *)(param_1 + 2) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 2) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


