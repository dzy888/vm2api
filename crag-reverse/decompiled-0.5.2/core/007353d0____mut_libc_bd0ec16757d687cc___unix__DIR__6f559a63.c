// 007353d0 <*mut_libc[bd0ec16757d687cc]::unix::DIR>

/* std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<*mut
   libc[bd0ec16757d687cc]::unix::DIR> */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
<*mut_libc[bd0ec16757d687cc]::unix::DIR>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong local_40;
  undefined1 *local_38;
  longlong local_30;
  
  (*(code *)PTR_spec_new_impl_00799f20)(param_4,param_2);
  if (local_40 == -1) {
    puVar1 = (undefined1 *)(*(code *)PTR_opendir_0079ac80)();
    *local_38 = 0;
    if (local_30 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    uVar2 = 0;
  }
  else {
    puVar1 = &DAT_00796450;
    if (local_40 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
  }
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


