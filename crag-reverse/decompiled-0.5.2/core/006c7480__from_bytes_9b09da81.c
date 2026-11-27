// 006c7480 from_bytes

/* <http[56314f485c23ccf6]::header::name::HeaderName>::from_bytes */

undefined8 * __rustcall
<http[56314f485c23ccf6]::header::name::HeaderName>::from_bytes
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_d0;
  undefined8 local_b8;
  code *local_b0;
  ulonglong *local_a8;
  code *local_a0;
  undefined *local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  if (param_3 == 0) goto LAB_006c7690;
  if (0x40 < param_3) {
    if (param_3 < 0x10000) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)PTR___rust_alloc_00799000)();
      puVar3 = PTR_put_slice_00799c88;
      if (lVar6 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        (*(code *)PTR_drop_007994e8)();
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      lVar1 = 0x3f;
      if (param_3 >> 10 != 0) {
        for (; (param_3 >> 10) >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar8 = 0x101 - (ulonglong)(((uint)lVar1 ^ 0x3f) << 2);
      local_d0 = 0;
      uVar7 = 0;
      uVar9 = extraout_XMM0_Da;
      uVar5 = param_3;
      do {
        if (""[*(byte *)(param_2 + uVar7)] == '\0') {
          *param_1 = 1;
          (*(code *)PTR_drop_007994e8)();
          return param_1;
        }
        local_b8 = (ulonglong *)CONCAT71(local_b8._1_7_,""[*(byte *)(param_2 + uVar7)]);
        uVar9 = (*(code *)puVar3)(uVar9,1,param_5,param_6,uVar5);
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
      if ((uVar8 & 1) == 0) {
        local_78 = PTR_SHARED_VTABLE_00799a60;
        local_60 = uVar8;
      }
      else {
        uVar8 = uVar8 >> 5;
        local_48 = uVar5 + uVar8;
        local_40 = lVar6 - uVar8;
        local_38 = uVar8;
        (*(code *)PTR_from_00799a68)();
        local_d0 = local_68 - uVar8;
        if (local_68 < uVar8) {
          local_50 = local_68;
          local_b8 = &local_58;
          local_b0 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
          local_a8 = &local_50;
          local_a0 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
          local_58 = uVar8;
          (*(code *)PTR_panic_fmt_007991a8)
                    (local_a8,&
                              PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00793208
                    );
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar6 = uVar8 + local_70;
      }
      param_1[1] = local_78;
      param_1[2] = lVar6;
      param_1[3] = local_d0;
      param_1[4] = local_60;
      *param_1 = 0;
      return param_1;
    }
    goto LAB_006c7690;
  }
  uVar5 = (ulonglong)((uint)param_3 & 3);
  if (param_3 < 4) {
    uVar8 = 0;
LAB_006c75f9:
    uVar7 = 0;
    do {
      *(char *)((longlong)&local_b8 + uVar7 + uVar8) = ""[*(byte *)(param_2 + uVar8 + uVar7)];
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  else {
    uVar8 = 0;
    do {
      *(char *)((longlong)&local_b8 + uVar8) = ""[*(byte *)(param_2 + uVar8)];
      *(char *)((longlong)&local_b8 + uVar8 + 1) = ""[*(byte *)(param_2 + 1 + uVar8)];
      *(char *)((longlong)&local_b8 + uVar8 + 2) = ""[*(byte *)(param_2 + 2 + uVar8)];
      *(char *)((longlong)&local_b8 + uVar8 + 3) = ""[*(byte *)(param_2 + 3 + uVar8)];
      uVar8 = uVar8 + 4;
    } while (((uint)param_3 & 0x7c) != uVar8);
    if (uVar5 != 0) goto LAB_006c75f9;
  }
  cVar4 = (*(code *)PTR_from_bytes_0079a588)();
  if (cVar4 != -1) {
    *(char *)(param_1 + 2) = cVar4;
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  if (param_3 < 0x10) {
    uVar5 = 0;
    do {
      if (*(char *)((longlong)&local_b8 + uVar5) == '\0') goto LAB_006c7690;
      uVar5 = uVar5 + 1;
      uVar9 = extraout_XMM0_Da_00;
    } while (param_3 != uVar5);
  }
  else {
    lVar6 = (*(code *)PTR_memchr_aligned_00799490)(extraout_XMM0_Da_00,param_3);
    uVar9 = extraout_XMM0_Da_01;
    if (lVar6 == 1) {
LAB_006c7690:
      *param_1 = 1;
      return param_1;
    }
  }
  (*(code *)PTR_copy_from_slice_0079a118)(uVar9,param_3);
  *param_1 = 0;
  return param_1;
}


