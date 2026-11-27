// 001a9840 parse_str

/* <serde_json[dc3825464c436029]::read::SliceRead as
   serde_json[dc3825464c436029]::read::Read>::parse_str */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::read::SliceRead_as_serde_json[dc3825464c436029]::read::Read>::
parse_str(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_60 [3];
  char local_48;
  longlong local_40;
  undefined8 uStack_38;
  
  puVar8 = PTR_memcpy_00219c60;
  do {
    uVar1 = param_2[2];
    uVar10 = <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape(param_2);
    uVar7 = param_2[1];
    uVar2 = param_2[2];
    if (uVar2 == uVar7) {
      local_60[0] = 4;
      lVar4 = *param_2;
      lVar3 = lVar4 + uVar2;
      lVar6 = (**(code **)PTR_FN_0021a478)(uVar10,lVar3);
      if (lVar6 == 1) {
        lVar3 = (lVar3 - lVar4) + 1;
      }
      else {
        lVar3 = 0;
      }
      uVar10 = (**(code **)PTR_FN_0021a480)(extraout_XMM0_Da,lVar4 + lVar3);
      lVar3 = uVar2 - lVar3;
LAB_001a9ade:
      lVar3 = (*(code *)PTR_syntax_00219cb8)(uVar10,lVar3);
      break;
    }
    if (uVar7 <= uVar2) {
      (*(code *)PTR_panic_bounds_check_0021a020)
                (uVar10,&
                        PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216be8
                );
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::ErrorCode>
                (local_60,uVar7);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    lVar3 = *param_2;
    if (*(char *)(lVar3 + uVar2) != '\\') {
      if (*(char *)(lVar3 + uVar2) == '\"') {
        uVar7 = param_3[2];
        if (uVar7 != 0) {
          puVar8 = (undefined *)(uVar2 - uVar1);
          if (uVar2 < uVar1) goto LAB_001a9b19;
          if ((undefined *)(*param_3 - uVar7) < puVar8) goto LAB_001a9b3f;
          goto joined_r0x001a9968;
        }
        puVar8 = (undefined *)(uVar2 - uVar1);
        if (uVar2 < uVar1) goto LAB_001a9b2c;
        param_2[2] = uVar2 + 1;
        puVar5 = puVar8;
        (*(code *)PTR_from_utf8_00219d78)();
        if (local_48 == '\0') {
          *param_1 = 0;
          param_1[1] = local_40;
          param_1[2] = uStack_38;
          return param_1;
        }
        uVar10 = (*(code *)PTR_position_00219cf8)();
        bVar9 = puVar5 < puVar8 + -local_40;
        lVar3 = (longlong)puVar5 - (longlong)(puVar8 + -local_40);
        goto LAB_001a9baf;
      }
      param_2[2] = uVar2 + 1;
      local_60[0] = 0x10;
      lVar6 = lVar3 + uVar2 + 1;
      lVar4 = (**(code **)PTR_FN_0021a478)(uVar10,lVar6);
      if (lVar4 == 1) {
        lVar4 = (lVar6 - lVar3) + 1;
      }
      else {
        lVar4 = 0;
      }
      uVar10 = (**(code **)PTR_FN_0021a480)(extraout_XMM0_Da_00,lVar3 + lVar4);
      lVar3 = (uVar2 + 1) - lVar4;
      goto LAB_001a9ade;
    }
    uVar7 = uVar2 - uVar1;
    if (uVar2 < uVar1) {
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216c30);
LAB_001a9b19:
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216c18);
LAB_001a9b2c:
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_00216c00);
LAB_001a9b3f:
      uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,uVar7,puVar8,1,1);
      uVar7 = param_3[2];
joined_r0x001a9968:
      if (uVar2 != uVar1) {
        (*(code *)PTR_memcpy_00219c60)(uVar10,puVar8);
        uVar7 = param_3[2];
      }
      puVar8 = puVar8 + uVar7;
      param_3[2] = (longlong)puVar8;
      param_2[2] = uVar2 + 1;
      puVar5 = puVar8;
      (*(code *)PTR_from_utf8_00219d78)();
      if (local_48 == '\0') {
        *param_1 = 1;
        param_1[1] = local_40;
        param_1[2] = uStack_38;
        return param_1;
      }
      uVar10 = (*(code *)PTR_position_00219cf8)();
      bVar9 = puVar5 < puVar8 + -local_40;
      lVar3 = (longlong)puVar5 - (longlong)(puVar8 + -local_40);
LAB_001a9baf:
      local_60[0] = 0xf;
      if (bVar9) {
        lVar3 = 0;
      }
      goto LAB_001a9ade;
    }
    lVar3 = param_3[2];
    if ((ulonglong)(*param_3 - lVar3) < uVar7) {
      uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,lVar3,uVar7,1,1);
      lVar3 = param_3[2];
    }
    if (uVar2 != uVar1) {
      (*(code *)puVar8)(uVar10,uVar7);
      lVar3 = param_3[2];
    }
    param_3[2] = lVar3 + uVar7;
    param_2[2] = uVar2 + 1;
    lVar3 = serde_json[dc3825464c436029]::read::parse_escape::
            <serde_json[dc3825464c436029]::read::SliceRead>(param_2,1,param_3);
  } while (lVar3 == 0);
  param_1[1] = lVar3;
  *param_1 = 2;
  return param_1;
}


