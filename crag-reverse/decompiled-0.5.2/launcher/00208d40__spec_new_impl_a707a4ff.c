// 00208d40 spec_new_impl

/* <&[u8] as <alloc[12e961f32105355]::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl */

longlong * __rustcall
<&[u8]as<alloc[12e961f32105355]::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
          (longlong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((longlong)(param_3 + 1) < 0) {
    uVar5 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    uVar5 = 1;
    lVar1 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar1 != 0) {
      if (param_3 == 0) {
        uVar4 = 0;
      }
      else {
        (*(code *)PTR_memcpy_00219c60)();
        if (param_3 < 0x10) {
          uVar3 = 0;
          do {
            if (*(char *)(param_2 + uVar3) == '\0') goto LAB_00208deb;
            uVar3 = uVar3 + 1;
            uVar4 = param_3;
          } while (param_3 != uVar3);
        }
        else {
          uVar3 = param_3;
          lVar2 = (*(code *)PTR_memchr_aligned_00219d40)();
          uVar4 = uVar3;
          if (lVar2 == 1) {
LAB_00208deb:
            *param_1 = param_3 + 1;
            param_1[1] = lVar1;
            param_1[2] = param_3;
            param_1[3] = uVar3;
            return param_1;
          }
        }
      }
      lVar1 = (*(code *)PTR__from_vec_unchecked_0021a060)();
      param_1[1] = lVar1;
      param_1[2] = uVar4;
      *param_1 = -1;
      return param_1;
    }
  }
  (*(code *)PTR_handle_error_00219c78)();
  (*(code *)PTR___rust_dealloc_00219c40)(param_4,1,param_5,param_6,uVar5);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


