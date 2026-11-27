// 001a9d00 parse_str

/* <serde_json[dc3825464c436029]::read::StrRead as
   serde_json[dc3825464c436029]::read::Read>::parse_str */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::read::StrRead_as_serde_json[dc3825464c436029]::read::Read>::parse_str
          (undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong unaff_RBP;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_48 [3];
  
  puVar3 = PTR_memcpy_00219c60;
  do {
    uVar1 = param_2[2];
    <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape(param_2);
    uVar6 = param_2[1];
    uVar2 = param_2[2];
    if (uVar2 == uVar6) {
      local_48[0] = 4;
      (**(code **)PTR_FN_0021a478)();
      (**(code **)PTR_FN_0021a480)();
LAB_001a9f69:
      lVar4 = (*(code *)PTR_syntax_00219cb8)();
      break;
    }
    if (uVar6 <= uVar2) {
      (*(code *)PTR_panic_bounds_check_0021a020)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::ErrorCode>
                (local_48,uVar6);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    lVar4 = *param_2;
    if (*(char *)(lVar4 + uVar2) != '\\') {
      if (*(char *)(lVar4 + uVar2) != '\"') {
        param_2[2] = uVar2 + 1;
        local_48[0] = 0x10;
        (**(code **)PTR_FN_0021a478)();
        (**(code **)PTR_FN_0021a480)();
        goto LAB_001a9f69;
      }
      uVar6 = param_3[2];
      if (uVar6 == 0) {
        if (uVar1 <= uVar2) {
          param_2[2] = uVar2 + 1;
          *param_1 = 0;
          param_1[1] = lVar4 + uVar1;
          param_1[2] = uVar2 - uVar1;
          return param_1;
        }
        goto LAB_001a9fb6;
      }
      unaff_RBP = uVar2 - uVar1;
      if (uVar2 < uVar1) goto LAB_001a9fa3;
      if (unaff_RBP <= *param_3 - uVar6) goto joined_r0x001a9e28;
LAB_001a9fc9:
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_3,uVar6,unaff_RBP,1,1);
      uVar6 = param_3[2];
joined_r0x001a9e28:
      if (uVar2 != uVar1) {
        (*(code *)PTR_memcpy_00219c60)();
        uVar6 = param_3[2];
      }
      param_3[2] = uVar6 + unaff_RBP;
      param_2[2] = uVar2 + 1;
      lVar4 = param_3[1];
      *param_1 = 1;
      param_1[1] = lVar4;
      param_1[2] = uVar6 + unaff_RBP;
      return param_1;
    }
    unaff_RBP = uVar2 - uVar1;
    if (uVar2 < uVar1) {
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216c30);
LAB_001a9fa3:
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216c18);
LAB_001a9fb6:
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216c00);
      uVar6 = uVar1;
      goto LAB_001a9fc9;
    }
    lVar5 = param_3[2];
    if ((ulonglong)(*param_3 - lVar5) < unaff_RBP) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_3,lVar5,unaff_RBP,1,1,param_6,param_1,lVar4);
      lVar5 = param_3[2];
    }
    if (uVar2 != uVar1) {
      (*(code *)puVar3)();
      lVar5 = param_3[2];
    }
    param_3[2] = lVar5 + unaff_RBP;
    param_2[2] = uVar2 + 1;
    lVar4 = serde_json[dc3825464c436029]::read::parse_escape::
            <serde_json[dc3825464c436029]::read::SliceRead>(param_2,1,param_3);
  } while (lVar4 == 0);
  param_1[1] = lVar4;
  *param_1 = 2;
  return param_1;
}


