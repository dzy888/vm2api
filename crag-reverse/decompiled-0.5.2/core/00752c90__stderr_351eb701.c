// 00752c90 stderr

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::stderr */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::stderr
          (longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x58) == 3) {
    (*(code *)PTR_close_00799030)();
  }
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  return;
}


