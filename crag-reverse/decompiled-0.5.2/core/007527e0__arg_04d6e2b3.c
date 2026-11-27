// 007527e0 arg

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::arg */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::arg
          (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  
  (*(code *)PTR_spec_new_impl_00799f20)();
  if (local_50 == -1) {
    lVar2 = param_1[2];
    param_3 = local_40;
    if (lVar2 != *param_1) goto LAB_00752866;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    local_48 = (undefined1 *)(*(code *)PTR_from_0079afa0)();
    if (local_50 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    lVar2 = param_1[2];
    if (lVar2 != *param_1) goto LAB_00752866;
  }
  (*(code *)PTR_grow_one_0079af30)();
LAB_00752866:
  lVar1 = param_1[1];
  *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
  param_1[2] = lVar2 + 1;
  if (lVar2 != 0) {
    *(undefined1 **)(lVar1 + -8 + lVar2 * 8) = local_48;
    return;
  }
  (*(code *)PTR_panic_bounds_check_00799520)
            (param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796978);
  *local_48 = 0;
  if (param_3 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


