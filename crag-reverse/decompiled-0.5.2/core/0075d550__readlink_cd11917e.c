// 0075d550 readlink

/* WARNING: Switch with 1 destination removed at 0x0075d66e */
/* std[6c98fd8553dbae28]::sys::fs::unix::readlink */

void __rustcall std[6c98fd8553dbae28]::sys::fs::unix::readlink(ulonglong *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  uVar6 = 0x100;
  local_40 = (*(code *)PTR___rust_alloc_00799000)();
  if (local_40 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
    (*(code *)PTR___rust_dealloc_00798fc8)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_48 = 0x100;
  local_38 = 0;
  uVar4 = (*(code *)PTR_readlink_0079b0a0)();
  puVar3 = PTR_readlink_0079b0a0;
  if (uVar4 != 0xffffffffffffffff) {
    do {
      local_38 = uVar4;
      if (uVar6 != uVar4) {
        if (uVar4 < uVar6) {
          if (uVar4 == 0) {
            uVar6 = 1;
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          else {
            uVar6 = (*(code *)PTR___rust_realloc_007997f0)(uVar4,1);
            if (uVar6 == 0) {
              (*(code *)PTR_handle_error_00798ff0)();
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
        return;
      }
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_48,uVar6,1,1,1);
      uVar6 = local_48;
      uVar4 = (*(code *)puVar3)();
    } while (uVar4 != 0xffffffffffffffff);
  }
  piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar1 = *piVar5;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  param_1[1] = (longlong)iVar1 << 0x20 | 2;
  *param_1 = 0xffffffffffffffff;
  if (uVar6 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


