// 00731310 <std[6c98fd8553dbae28]::process::StdioPipes>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::process::StdioPipes> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::process::StdioPipes>(int *param_1)

{
  if (*param_1 != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (param_1[1] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (param_1[2] == -1) {
    return;
  }
  (*(code *)PTR_close_00799030)();
  return;
}


