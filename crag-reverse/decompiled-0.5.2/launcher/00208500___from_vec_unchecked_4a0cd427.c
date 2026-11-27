// 00208500 _from_vec_unchecked

/* <alloc[12e961f32105355]::ffi::c_str::CString>::_from_vec_unchecked */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::ffi::c_str::CString>::_from_vec_unchecked(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  int local_38 [2];
  ulonglong local_30;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  if (uVar3 == uVar4) {
    uVar3 = uVar4 + 1;
    <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow(local_38,uVar4,param_1[1],uVar3);
    if (local_38[0] == 1) {
      (*(code *)PTR_handle_error_00219c78)();
      goto LAB_002085ba;
    }
    param_1[1] = local_30;
  }
  uVar2 = param_1[1];
  *(undefined1 *)(uVar2 + uVar4) = 0;
  uVar4 = uVar4 + 1;
  if (uVar4 < uVar3) {
    if (uVar4 == 0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
      uVar2 = 1;
    }
    else {
      uVar2 = (*(code *)PTR___rust_realloc_0021a150)(uVar4);
      if (uVar2 == 0) {
        (*(code *)PTR_handle_error_00219c78)();
LAB_002085ba:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}


