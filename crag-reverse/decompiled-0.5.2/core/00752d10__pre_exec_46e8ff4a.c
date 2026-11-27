// 00752d10 pre_exec

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::pre_exec */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::pre_exec
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == *(longlong *)(param_1 + 0x18)) {
    (*(code *)PTR_grow_one_0079ac10)();
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(lVar2 + lVar1 * 0x10) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = param_3;
  *(longlong *)(param_1 + 0x28) = lVar1 + 1;
  return;
}


