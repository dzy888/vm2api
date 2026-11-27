// 006f5480 <tokio[d7d91d38da47d894]::fs::file::Operation>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::file::Operation> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::file::Operation>
          (longlong *param_1)

{
  ulonglong uVar1;
  
  if ((*param_1 == 0) || ((int)*param_1 != 1)) {
    if (param_1[1] == 0) {
      return;
    }
    uVar1 = param_1[2];
  }
  else {
    uVar1 = param_1[1];
    if (uVar1 == 0) {
      return;
    }
  }
  if ((((uint)uVar1 & 3) - 2 < 2) || ((uVar1 & 3) == 0)) {
    return;
  }
  (*(code *)PTR_drop_00799040)();
  return;
}


