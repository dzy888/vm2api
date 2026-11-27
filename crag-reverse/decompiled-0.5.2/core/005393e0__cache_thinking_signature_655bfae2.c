// 005393e0 cache_thinking_signature

/* <craggemini_core[66f3c71560d70857]::resume::SignatureCache>::cache_thinking_signature */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::cache_thinking_signature
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
          undefined8 param_5,longlong param_6,ulonglong param_7)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar9 [16];
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ulonglong *local_58;
  code *local_50;
  
  auVar9 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  if (0xf < auVar9._8_8_) {
    uVar8 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
            ::digest::<&[u8]>(&local_b0,auVar9._0_8_);
    local_50 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
               ::fmt;
    local_58 = &local_b0;
    (*(code *)PTR_format_inner_00799048)(uVar8,&local_58);
    uVar2 = <craggemini_core[66f3c71560d70857]::resume::ModelFamily>::from_model(param_4,param_5);
    (*(code *)PTR_now_00799478)();
    iVar7 = (int)(uint)local_b0 >> 0xd;
    iVar5 = iVar7 + -1;
    iVar3 = 0;
    if (iVar7 < 1) {
      iVar3 = (1U - iVar7) / 400 + 1;
      iVar5 = iVar5 + iVar3 * 400;
      iVar3 = iVar3 * -0x23ab1;
    }
    lVar4 = (local_a8 & 0xffffffff) / 1000000 +
            ((longlong)
             (int)(((((uint)local_b0 >> 4 & 0x1ff) + iVar3) - iVar5 / 100) + (iVar5 * 0x5b5 >> 2) +
                   (iVar5 / 100 >> 2) + -0xaf93b) * 0x15180 + (local_b0 >> 0x20)) * 1000;
    lVar6 = 0;
    if (0 < lVar4) {
      lVar6 = lVar4;
    }
    local_78 = local_60;
    local_88 = local_70;
    uStack_84 = uStack_6c;
    uStack_80 = uStack_68;
    uStack_7c = uStack_64;
    if (param_6 == 0) {
      param_7 = 0xffffffffffffffff;
    }
    else {
      if ((longlong)param_7 < 0) {
LAB_0053952f:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (param_7 == 0) {
        param_4 = 1;
        param_7 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        param_4 = (*(code *)PTR___rust_alloc_00799000)();
        if (param_4 == 0) goto LAB_0053952f;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_7);
      }
    }
    local_b0 = param_7;
    local_a8 = param_4;
    local_a0 = param_7;
    local_98 = lVar6;
    local_90 = uVar2;
    uVar8 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>>
            ::insert(&local_58,param_1 + 0x48,&local_88,&local_b0);
    if ((local_58 < (ulonglong *)0xfffffffffffffffe) && (local_58 != (ulonglong *)0x0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
    }
    *(undefined1 *)(param_1 + 200) = 1;
    prune_to_bounds(param_1);
  }
  return;
}


