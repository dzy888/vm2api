// 0075d470 canonicalize

/* std[6c98fd8553dbae28]::sys::fs::unix::canonicalize */

void __rustcall std[6c98fd8553dbae28]::sys::fs::unix::canonicalize(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar3 = (*(code *)PTR_realpath_0079b098)();
  if (lVar3 == 0) {
    piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    param_1[1] = (longlong)iVar1 << 0x20 | 2;
    *param_1 = -1;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_0079aa38)();
    if (lVar3 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)PTR_memcpy_00799008)();
    }
    (*(code *)PTR_free_0079adc8)();
    *param_1 = lVar3;
    param_1[1] = lVar4;
    param_1[2] = lVar3;
  }
  return;
}


