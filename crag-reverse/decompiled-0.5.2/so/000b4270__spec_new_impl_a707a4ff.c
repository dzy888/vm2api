// 000b4270 spec_new_impl

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
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    uVar5 = 1;
    lVar1 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (lVar1 != 0) {
      if (param_3 == 0) {
        uVar4 = 0;
      }
      else {
        (*(code *)PTR_memcpy_000c3aa8)();
        if (param_3 < 0x10) {
          uVar3 = 0;
          do {
            if (*(char *)(param_2 + uVar3) == '\0') goto LAB_000b431b;
            uVar3 = uVar3 + 1;
            uVar4 = param_3;
          } while (param_3 != uVar3);
        }
        else {
          uVar3 = param_3;
          lVar2 = (*(code *)PTR_memchr_aligned_000c3cb0)();
          uVar4 = uVar3;
          if (lVar2 == 1) {
LAB_000b431b:
            *param_1 = param_3 + 1;
            param_1[1] = lVar1;
            param_1[2] = param_3;
            param_1[3] = uVar3;
            return param_1;
          }
        }
      }
      lVar1 = (*(code *)PTR__from_vec_unchecked_000c43a8)();
      param_1[1] = lVar1;
      param_1[2] = uVar4;
      *param_1 = -1;
      return param_1;
    }
  }
  (*(code *)PTR_handle_error_000c3a98)();
  (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1,param_5,param_6,uVar5);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


