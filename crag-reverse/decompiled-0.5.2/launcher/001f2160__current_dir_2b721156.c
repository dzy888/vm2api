// 001f2160 current_dir

/* std[6c98fd8553dbae28]::env::current_dir */

ulonglong * __rustcall std[6c98fd8553dbae28]::env::current_dir(ulonglong *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  uVar6 = 0x200;
  local_40 = (*(code *)PTR___rust_alloc_00219c88)();
  if (local_40 == 0) {
    (*(code *)PTR_handle_error_00219c78)();
    (*(code *)PTR___rust_dealloc_00219c40)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_48 = 0x200;
  local_38 = 0;
  lVar3 = (*(code *)PTR_getcwd_0021aa88)();
  if (lVar3 == 0) {
    piVar5 = (int *)(*(code *)PTR___errno_location_00219f18)();
    do {
      iVar1 = *piVar5;
      if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
        (*(code *)PTR_set_functions_inner_00219f28)();
      }
      if (iVar1 != 0x22) {
        param_1[1] = (longlong)iVar1 << 0x20 | 2;
        *param_1 = 0xffffffffffffffff;
        if (uVar6 == 0) {
          return param_1;
        }
        (*(code *)PTR___rust_dealloc_00219c40)();
        return param_1;
      }
      local_38 = uVar6;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_48,uVar6,1,1,1);
      uVar6 = local_48;
      lVar3 = (*(code *)PTR_getcwd_0021aa88)();
    } while (lVar3 == 0);
  }
  uVar4 = (*(code *)PTR_strlen_0021a890)();
  local_38 = uVar4;
  if (uVar4 < uVar6) {
    if (uVar4 == 0) {
      uVar6 = 1;
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    else {
      uVar6 = (*(code *)PTR___rust_realloc_0021a150)(uVar4,1);
      if (uVar6 == 0) {
        (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    local_48 = uVar4;
    local_40 = uVar6;
  }
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = local_40;
  return param_1;
}


