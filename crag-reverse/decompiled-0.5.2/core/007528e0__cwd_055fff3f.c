// 007528e0 cwd

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::cwd */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::cwd
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  (*(code *)PTR_spec_new_impl_00799f20)();
  if (local_50 == -1) {
    puVar1 = *(undefined1 **)(param_1 + 0x90);
  }
  else {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    local_48 = (*(code *)PTR_from_0079afa0)();
    if (local_50 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar1 = *(undefined1 **)(param_1 + 0x90);
    local_40 = param_3;
  }
  if ((puVar1 != (undefined1 *)0x0) && (*puVar1 = 0, *(longlong *)(param_1 + 0x98) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  *(undefined8 *)(param_1 + 0x90) = local_48;
  *(undefined8 *)(param_1 + 0x98) = local_40;
  return;
}


