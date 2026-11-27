// 001ec570 set_arg_0

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::set_arg_0 */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::set_arg_0
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong local_50;
  undefined8 local_48;
  
  (*(code *)PTR_spec_new_impl_0021a110)();
  if (local_50 == -1) {
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  else {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    local_48 = (*(code *)PTR_from_0021aa20)();
    if (local_50 != 0) {
      param_3 = 1;
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar1 == 0) {
    (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00217990,0);
  }
  else {
    if (lVar1 != 1) {
      **(undefined8 **)(param_1 + 8) = local_48;
      puVar3 = (undefined1 *)(*(code *)PTR_from_raw_0021a780)();
      *puVar3 = 0;
      if (param_3 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
      return;
    }
    (*(code *)PTR_panic_bounds_check_0021a020)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


