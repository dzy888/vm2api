// 001e05b0 _join

/* <std[6c98fd8553dbae28]::path::Path>::_join */

ulonglong * __rustcall
<std[6c98fd8553dbae28]::path::Path>::_join
          (undefined4 param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,char *param_5,
          ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  if (param_4 == 0) {
    uStack_40 = 1;
    local_38 = 0;
    bVar3 = false;
    if (param_6 != 0) goto LAB_001e0646;
LAB_001e0664:
    local_48 = local_38;
    if (bVar3) {
      param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_48,param_4,1,1,1);
      *(undefined1 *)(uStack_40 + local_38) = 0x2f;
      param_4 = local_38 + 1;
      uVar1 = local_48;
      local_38 = param_4;
    }
    else {
      uVar1 = param_4;
    }
    uVar2 = param_4;
    if (uVar1 - param_4 < param_6) {
LAB_001e06e6:
      param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_48,uVar2,param_6,1,1);
      uVar2 = local_38;
    }
    else if (param_6 == 0) goto LAB_001e06c2;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    uVar1 = (*(code *)PTR___rust_alloc_00219c88)();
    if (uVar1 == 0) {
      uVar4 = (*(code *)PTR_handle_error_00219c78)();
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar4,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    param_1 = (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da,param_4);
    bVar3 = *(char *)((uVar1 - 1) + param_4) != '/';
    uStack_40 = uVar1;
    local_38 = param_4;
    if (param_6 == 0) goto LAB_001e0664;
LAB_001e0646:
    local_48 = local_38;
    if (*param_5 != '/') goto LAB_001e0664;
    local_38 = 0;
    uVar2 = 0;
    if (param_4 < param_6) goto LAB_001e06e6;
  }
  (*(code *)PTR_memcpy_00219c60)(param_1,param_6);
LAB_001e06c2:
  param_2[2] = uVar2 + param_6;
  *param_2 = local_48;
  param_2[1] = uStack_40;
  return param_2;
}


