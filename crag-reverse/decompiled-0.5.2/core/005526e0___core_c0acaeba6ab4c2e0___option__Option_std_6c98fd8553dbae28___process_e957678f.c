// 005526e0 <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::process::Child>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::process::Child>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::process::Child>>(int *param_1)

{
  if (*param_1 != 2) {
    if (param_1[3] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    if (param_1[4] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    if (param_1[5] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    if (param_1[6] != -1) {
      (*(code *)PTR_close_00799030)();
      return;
    }
  }
  return;
}


