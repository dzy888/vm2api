// 0061ca00 sanitize_tool_name

/* craggemini_core[66f3c71560d70857]::schema::sanitize_tool_name */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::schema::sanitize_tool_name
          (undefined4 param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte *local_c8;
  char **local_b8;
  code *local_b0;
  longlong *local_a8;
  code *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *local_58;
  char local_50;
  char local_4f;
  char local_4e;
  char local_4d [29];
  
  uVar10 = param_4 == (byte *)0x0;
  if (-1 < (longlong)param_4) goto LAB_0061ca28;
  param_2 = (undefined8 *)0x0;
  do {
    uVar10 = 1;
    param_1 = (*(code *)PTR_handle_error_00798ff0)();
    param_3 = param_4;
LAB_0061ca28:
    if ((bool)uVar10) {
      local_d8 = (byte *)0x0;
      uStack_d0 = (char *)0x1;
      local_c8 = (byte *)0x0;
      goto LAB_0061cc1f;
    }
    local_70 = param_2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    param_2 = (undefined8 *)0x1;
    uStack_d0 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  } while (uStack_d0 == (char *)0x0);
  local_c8 = (byte *)0x0;
  pbVar9 = param_3;
  param_1 = extraout_XMM0_Da;
  local_d8 = param_4;
  do {
    pbVar5 = local_c8;
    bVar2 = *pbVar9;
    if ((char)bVar2 < '\0') {
      uVar6 = bVar2 & 0x1f;
      pbVar1 = pbVar9 + 1;
      if (bVar2 < 0xe0) {
        pbVar9 = pbVar9 + 2;
        uVar8 = uVar6 << 6 | *pbVar1 & 0x3f;
        goto joined_r0x0061cb03;
      }
      uVar8 = pbVar9[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
      if (0xef < bVar2) {
        pbVar1 = pbVar9 + 3;
        pbVar9 = pbVar9 + 4;
        uVar8 = *pbVar1 & 0x3f | uVar8 << 6 | (bVar2 & 7) << 0x12;
        goto joined_r0x0061cb03;
      }
      pbVar9 = pbVar9 + 3;
      uVar8 = uVar8 | uVar6 << 0xc;
      if (9 < uVar8 - 0x30) goto LAB_0061cb40;
LAB_0061ca80:
      if (local_c8 == local_d8) {
        param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[12e961f32105355]::alloc::Global>(&local_d8,local_c8,1,1,1);
      }
      uStack_d0[(longlong)pbVar5] = (char)uVar8;
    }
    else {
      pbVar9 = pbVar9 + 1;
      uVar8 = (uint)bVar2;
joined_r0x0061cb03:
      if (uVar8 - 0x30 < 10) goto LAB_0061ca80;
LAB_0061cb40:
      if ((((uVar8 & 0xffffffdf) - 0x41 < 0x1a) || (uVar8 == 0x5f)) || (uVar8 == 0x2d))
      goto LAB_0061ca80;
      if (local_c8 == local_d8) {
        param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[12e961f32105355]::alloc::Global>(&local_d8,local_c8,1,1,1);
      }
      uStack_d0[(longlong)pbVar5] = '_';
    }
    local_c8 = pbVar5 + 1;
  } while (pbVar9 != param_4 + (longlong)param_3);
  cVar3 = *uStack_d0;
  param_2 = local_70;
  if ((0x19 < (byte)(cVar3 + 0xbfU)) && (cVar3 != '_' && 0x19 < (byte)(cVar3 + 0x9fU))) {
LAB_0061cc1f:
    local_b0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    ;
    local_b8 = (char **)&local_d8;
    uVar11 = (*(code *)PTR_format_inner_00799048)(param_1,&local_b8);
    if (local_d8 != (byte *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
    local_d8 = (byte *)CONCAT44(uStack_64,local_68);
    uStack_d0 = (char *)CONCAT44(uStack_5c,uStack_60);
    local_c8 = local_58;
  }
  if (local_c8 < &DAT_00000038) {
    param_2[2] = local_c8;
    *param_2 = local_d8;
    param_2[1] = uStack_d0;
    return param_2;
  }
  <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
  ::digest::<&[u8]>(&local_50,param_3,param_4);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar7 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar7 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    local_98 = 8;
    local_88 = 0;
    local_b0 = <&u8_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt;
    local_b8 = &local_80;
    local_90 = lVar7;
    local_80 = &local_50;
    (*(code *)PTR_write_007994b0)(&local_b8,&DAT_00185228);
    local_80 = &local_4f;
    local_b0 = <&u8_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt;
    local_b8 = &local_80;
    (*(code *)PTR_write_007994b0)(&local_b8,&DAT_00185228);
    local_80 = &local_4e;
    local_b0 = <&u8_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt;
    local_b8 = &local_80;
    (*(code *)PTR_write_007994b0)(&local_b8,&DAT_00185228);
    local_80 = local_4d;
    local_b0 = <&u8_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt;
    local_b8 = &local_80;
    uVar11 = (*(code *)PTR_write_007994b0)(&local_b8,&DAT_00185228);
    if (local_c8 < (byte *)0x2f) {
      if (local_c8 == (byte *)0x2e) {
LAB_0061cddf:
        local_80 = uStack_d0;
        local_78 = 0x2e;
        local_b0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_a0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                   ::fmt;
        local_b8 = &local_80;
        local_a8 = &local_98;
        uVar11 = (*(code *)PTR_format_inner_00799048)(uVar11,&local_b8);
        if (local_98 != 0) {
          uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
        }
        if (local_d8 != (byte *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
        }
        return param_2;
      }
    }
    else if (-0x41 < uStack_d0[0x2e]) goto LAB_0061cddf;
    (*(code *)PTR_slice_error_fail_00799408)(0x2e,0,&PTR_s_src_schema_rs_0078f6d8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


