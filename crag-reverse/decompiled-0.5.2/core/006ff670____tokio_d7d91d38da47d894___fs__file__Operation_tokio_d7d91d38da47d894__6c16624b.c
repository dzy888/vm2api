// 006ff670 <(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio[d7d91d38da47d894]::fs::file::Operation,
   tokio[d7d91d38da47d894]::io::blocking::Buf)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>
          (longlong *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      if ((1 < ((uint)param_1[2] & 3) - 2) && ((param_1[2] & 3U) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
  }
  else if ((int)*param_1 == 1) {
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
  }
  else if (param_1[1] != 0) {
    if ((1 < ((uint)param_1[2] & 3) - 2) && ((param_1[2] & 3U) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


