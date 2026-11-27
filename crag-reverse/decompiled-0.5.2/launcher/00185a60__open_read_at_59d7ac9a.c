// 00185a60 open_read_at

/* craggemini[b21da2d71f2da7a3]::license::files::open_read_at */

ulonglong __rustcall craggemini[b21da2d71f2da7a3]::license::files::open_read_at(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  
  (*(code *)PTR_spec_new_impl_0021a068)();
  if (local_50 == -1) {
    uVar4 = 0;
    uVar2 = (*(code *)PTR_openat_0021a070)();
    if ((int)uVar2 < 0) {
      (*(code *)PTR___errno_location_00219f18)();
      if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 !=
          &anon_16a3b356826a16bc04f9b830aca94c66_0_llvm_11779858384484307972) {
        (*(code *)PTR_set_functions_inner_00219f28)();
      }
      lVar3 = (*(code *)PTR_get_os_functions_0021a0e8)();
      cVar1 = (**(code **)(lVar3 + 8))();
      if (cVar1 != '\0') {
        *local_48 = 0;
        if (local_40 == 0) {
          return 0x301;
        }
        (*(code *)PTR___rust_dealloc_00219c40)();
        return 0x301;
      }
      uVar4 = 1;
      *local_48 = 0;
    }
    else {
      *local_48 = 0;
    }
    if (local_40 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    uVar4 = uVar4 | (ulonglong)uVar2 << 0x20;
  }
  else {
    if (local_50 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    uVar4 = 0x301;
  }
  return uVar4;
}


