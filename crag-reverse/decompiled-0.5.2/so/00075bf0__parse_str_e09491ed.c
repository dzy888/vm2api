// 00075bf0 parse_str

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
  
  puVar8 = PTR_memcpy_000c3aa8;
  do {
    uVar1 = param_2[2];
    uVar10 = <serde_json[dc3825464c436029]::read::SliceRead>::skip_to_escape(param_2);
    uVar7 = param_2[1];
    uVar2 = param_2[2];
    if (uVar2 == uVar7) {
      local_60[0] = 4;
      lVar4 = *param_2;
      lVar3 = lVar4 + uVar2;
      lVar6 = (**(code **)PTR_FN_000c3fd0)(uVar10,lVar3);
      if (lVar6 == 1) {
        lVar3 = (lVar3 - lVar4) + 1;
      }
      else {
        lVar3 = 0;
      }
      uVar10 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Da,lVar4 + lVar3);
      lVar3 = uVar2 - lVar3;
LAB_00075e8e:
      lVar3 = (*(code *)PTR_syntax_000c3d50)(uVar10,lVar3);
      break;
    }
    if (uVar7 <= uVar2) {
      (*(code *)PTR_panic_bounds_check_000c3dd8)
                (uVar10,&
                        PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_000c1128
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
          if (uVar2 < uVar1) goto LAB_00075ec9;
          if ((undefined *)(*param_3 - uVar7) < puVar8) goto LAB_00075eef;
          goto joined_r0x00075d18;
        }
        puVar8 = (undefined *)(uVar2 - uVar1);
        if (uVar2 < uVar1) goto LAB_00075edc;
        param_2[2] = uVar2 + 1;
        puVar5 = puVar8;
        (*(code *)PTR_from_utf8_000c3bd8)();
        if (local_48 == '\0') {
          *param_1 = 0;
          param_1[1] = local_40;
          param_1[2] = uStack_38;
          return param_1;
        }
        uVar10 = (*(code *)PTR_position_000c3d68)();
        bVar9 = puVar5 < puVar8 + -local_40;
        lVar3 = (longlong)puVar5 - (longlong)(puVar8 + -local_40);
        goto LAB_00075f5f;
      }
      param_2[2] = uVar2 + 1;
      local_60[0] = 0x10;
      lVar6 = lVar3 + uVar2 + 1;
      lVar4 = (**(code **)PTR_FN_000c3fd0)(uVar10,lVar6);
      if (lVar4 == 1) {
        lVar4 = (lVar6 - lVar3) + 1;
      }
      else {
        lVar4 = 0;
      }
      uVar10 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Da_00,lVar3 + lVar4);
      lVar3 = (uVar2 + 1) - lVar4;
      goto LAB_00075e8e;
    }
    uVar7 = uVar2 - uVar1;
    if (uVar2 < uVar1) {
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_000c1170);
LAB_00075ec9:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_000c1158);
LAB_00075edc:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_000c1140);
LAB_00075eef:
      uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,uVar7,puVar8,1,1);
      uVar7 = param_3[2];
joined_r0x00075d18:
      if (uVar2 != uVar1) {
        (*(code *)PTR_memcpy_000c3aa8)(uVar10,puVar8);
        uVar7 = param_3[2];
      }
      puVar8 = puVar8 + uVar7;
      param_3[2] = (longlong)puVar8;
      param_2[2] = uVar2 + 1;
      puVar5 = puVar8;
      (*(code *)PTR_from_utf8_000c3bd8)();
      if (local_48 == '\0') {
        *param_1 = 1;
        param_1[1] = local_40;
        param_1[2] = uStack_38;
        return param_1;
      }
      uVar10 = (*(code *)PTR_position_000c3d68)();
      bVar9 = puVar5 < puVar8 + -local_40;
      lVar3 = (longlong)puVar5 - (longlong)(puVar8 + -local_40);
LAB_00075f5f:
      local_60[0] = 0xf;
      if (bVar9) {
        lVar3 = 0;
      }
      goto LAB_00075e8e;
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


