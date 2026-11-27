// 00540cb0 compact_json_preview

/* craggemini_core[66f3c71560d70857]::resume::compact_json_preview */

void __rustcall
craggemini_core[66f3c71560d70857]::resume::compact_json_preview
          (ulonglong *param_1,char *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_02;
  undefined1 auVar10 [16];
  undefined1 local_a0 [16];
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  ulonglong *local_58;
  char local_50 [8];
  undefined1 local_48 [24];
  
  if (*param_2 == '\x03') {
    local_a0 = ::<str>::trim_matches::<<char>::is_whitespace>
                         (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    lVar6 = local_a0._8_8_;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = local_a0;
    serde_json[dc3825464c436029]::de::from_trait::
    <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
              (local_50,local_a0);
    if (local_50[0] == -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(local_48)
      ;
      uVar8 = lVar6 == 0;
      if (-1 < lVar6) goto LAB_00540ecc;
      puVar5 = (ulonglong *)0x0;
      do {
        uVar8 = 1;
        (*(code *)PTR_handle_error_00798ff0)();
        param_1 = puVar5;
LAB_00540ecc:
        if ((bool)uVar8) {
          lVar6 = 0;
          lVar3 = 1;
          lVar7 = 0;
          goto LAB_00540d95;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar5 = (ulonglong *)0x1;
        lVar3 = (*(code *)PTR___rust_alloc_00799000)();
      } while (lVar3 == 0);
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar6);
      lVar7 = lVar6;
    }
    else {
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 1;
      local_90 = 0;
      write_canonical_json(local_50,local_a0);
      lVar6 = local_90;
      lVar3 = local_a0._8_8_;
      lVar7 = local_a0._0_8_;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_50)
      ;
    }
  }
  else {
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 1;
    local_90 = 0;
    write_canonical_json(param_2,local_a0);
    lVar6 = local_90;
    lVar3 = local_a0._8_8_;
    lVar7 = local_a0._0_8_;
  }
LAB_00540d95:
  auVar10 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar3,lVar6);
  uVar4 = auVar10._8_8_;
  if (uVar4 < 0x20) {
    uVar2 = (*(code *)PTR_char_count_general_case_00799cf8)();
    uVar9 = extraout_XMM0_Da;
  }
  else {
    uVar2 = (*(code *)PTR_do_count_chars_00799d00)();
    uVar9 = extraout_XMM0_Da_00;
  }
  if (param_3 < uVar2) {
    local_a0._8_8_ = auVar10._0_8_ + uVar4;
    local_90 = param_3 - 3;
    local_a0._0_8_ = auVar10._0_8_;
    <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<char>>
    ::from_iter::
    <core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::str::iter::Chars>>
              (&local_70,local_a0);
    if (CONCAT44(uStack_6c,local_70) - local_60 < 3) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_70,local_60,3,1,1);
    }
    *(undefined1 *)(CONCAT44(uStack_64,uStack_68) + 2 + local_60) = 0x2e;
    *(undefined2 *)(CONCAT44(uStack_64,uStack_68) + local_60) = 0x2e2e;
    local_60 = local_60 + 3;
    param_1[2] = local_60;
    *(undefined4 *)param_1 = local_70;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_6c;
    *(undefined4 *)(param_1 + 1) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_64;
  }
  else {
    if ((longlong)uVar4 < 0) {
LAB_00540e5f:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 == 0) {
      uVar2 = 1;
    }
    else {
      local_58 = param_1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar2 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar2 == 0) goto LAB_00540e5f;
      uVar9 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,uVar4);
      param_1 = local_58;
    }
    *param_1 = uVar4;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    local_70 = uVar9;
  }
  if (lVar7 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(local_70,1);
  }
  return;
}


