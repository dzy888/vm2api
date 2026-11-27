// 00752cd0 stdout

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::stdout */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::stdout
          (longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x50) == 3) {
    (*(code *)PTR_close_00799030)();
  }
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  return;
}


