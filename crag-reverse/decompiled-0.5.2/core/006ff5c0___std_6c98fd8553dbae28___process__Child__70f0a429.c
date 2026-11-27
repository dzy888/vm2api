// 006ff5c0 <std[6c98fd8553dbae28]::process::Child>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::process::Child> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::process::Child>(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    return;
  }
  (*(code *)PTR_close_00799030)();
  return;
}


