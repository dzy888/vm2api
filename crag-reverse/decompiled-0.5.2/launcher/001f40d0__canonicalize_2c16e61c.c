// 001f40d0 canonicalize

/* std[6c98fd8553dbae28]::sys::fs::unix::canonicalize */

void __rustcall std[6c98fd8553dbae28]::sys::fs::unix::canonicalize(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar3 = (*(code *)PTR_realpath_0021ab10)();
  if (lVar3 == 0) {
    piVar5 = (int *)(*(code *)PTR___errno_location_00219f18)();
    iVar1 = *piVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
      (*(code *)PTR_set_functions_inner_00219f28)();
    }
    param_1[1] = (longlong)iVar1 << 0x20 | 2;
    *param_1 = -1;
  }
  else {
    lVar3 = (*(code *)PTR_strlen_0021a890)();
    if (lVar3 == 0) {
      lVar4 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar4 = (*(code *)PTR___rust_alloc_00219c88)();
      if (lVar4 == 0) {
        (*(code *)PTR_handle_error_00219c78)();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)PTR_memcpy_00219c60)();
    }
    (*(code *)PTR_free_0021a8b8)();
    *param_1 = lVar3;
    param_1[1] = lVar4;
    param_1[2] = lVar3;
  }
  return;
}


