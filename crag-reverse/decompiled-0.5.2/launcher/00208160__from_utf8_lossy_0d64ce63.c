// 00208160 from_utf8_lossy

/* <alloc[12e961f32105355]::string::String>::from_utf8_lossy */

ulonglong * __rustcall
<alloc[12e961f32105355]::string::String>::from_utf8_lossy
          (ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_68;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar3 = (*(code *)PTR_next_0021ad70)();
  if (local_80 == 0) {
    local_80 = 1;
    local_78 = 0;
LAB_002081d2:
    param_1[1] = local_80;
    param_1[2] = local_78;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  if (local_68 == 0) goto LAB_002081d2;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    uVar1 = (*(code *)PTR___rust_alloc_00219c88)();
    if (uVar1 == 0) {
      uVar3 = (*(code *)PTR_handle_error_00219c78)();
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar3,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    uVar3 = extraout_XMM0_Da;
  }
  local_38 = 0;
  local_48 = param_3;
  uStack_40 = uVar1;
  if (param_3 < local_78) {
    uVar3 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_48,0,local_78);
  }
  else {
    uVar2 = 0;
    if (local_78 == 0) goto LAB_00208220;
  }
  uVar2 = local_38;
  uVar1 = uStack_40;
  param_3 = local_48;
  (*(code *)PTR_memcpy_00219c60)(uVar3,local_78);
LAB_00208220:
  local_38 = uVar2 + local_78;
  if (param_3 - local_38 < 3) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_48,local_38,3);
    uVar1 = uStack_40;
  }
  *(undefined1 *)(uVar1 + 2 + local_38) = 0xbd;
  *(undefined2 *)(uVar1 + local_38) = 0xbfef;
  local_38 = local_38 + 3;
  do {
    uVar1 = local_38;
    uVar3 = (*(code *)PTR_next_0021ad70)();
    if (local_80 == 0) {
      param_1[2] = local_38;
      *param_1 = local_48;
      param_1[1] = uStack_40;
      return param_1;
    }
    if (local_48 - uVar1 < local_78) {
      uVar3 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_48,uVar1,local_78);
      uVar1 = local_38;
LAB_00208293:
      (*(code *)PTR_memcpy_00219c60)(uVar3,local_78);
    }
    else if (local_78 != 0) goto LAB_00208293;
    local_38 = uVar1 + local_78;
    if (local_68 != 0) {
      if (local_48 - local_38 < 3) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_48,local_38,3);
      }
      *(undefined1 *)(uStack_40 + 2 + local_38) = 0xbd;
      *(undefined2 *)(uStack_40 + local_38) = 0xbfef;
      local_38 = local_38 + 3;
    }
  } while( true );
}


