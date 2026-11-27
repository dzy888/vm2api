// 001cf9f0 <std[6c98fd8553dbae28]::sys::process::unix::common::ChildPipes>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::process::unix::common::ChildPipes>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sys::process::unix::common::ChildPipes>(uint *param_1)

{
  uint uVar1;
  
  if (*param_1 < 2) {
    uVar1 = param_1[2];
  }
  else {
    (*(code *)PTR_close_00219d60)();
    uVar1 = param_1[2];
  }
  if (uVar1 < 2) {
    uVar1 = param_1[4];
  }
  else {
    (*(code *)PTR_close_00219d60)();
    uVar1 = param_1[4];
  }
  if (uVar1 < 2) {
    return;
  }
  (*(code *)PTR_close_00219d60)();
  return;
}


