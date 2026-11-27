// 005873d0 open_read_at

/* craggemini_core[66f3c71560d70857]::license::files::open_read_at */

ulonglong __rustcall craggemini_core[66f3c71560d70857]::license::files::open_read_at(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  
  (*(code *)PTR_spec_new_impl_00799f08)();
  if (local_50 == -1) {
    uVar4 = 0;
    uVar2 = (*(code *)PTR_openat_00799f10)();
    if ((int)uVar2 < 0) {
      (*(code *)PTR___errno_location_007990a0)();
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar1 = (**(code **)(lVar3 + 8))();
      if (cVar1 != '\0') {
        *local_48 = 0;
        if (local_40 == 0) {
          return 0x301;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)();
        return 0x301;
      }
      uVar4 = 1;
      *local_48 = 0;
    }
    else {
      *local_48 = 0;
    }
    if (local_40 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = uVar4 | (ulonglong)uVar2 << 0x20;
  }
  else {
    if (local_50 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = 0x301;
  }
  return uVar4;
}


