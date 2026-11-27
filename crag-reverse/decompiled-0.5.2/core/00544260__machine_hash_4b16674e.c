// 00544260 machine_hash

/* WARNING: Switch with 1 destination removed at 0x00544327 */
/* craggemini_core[66f3c71560d70857]::license::machine_hash */

void __rustcall craggemini_core[66f3c71560d70857]::license::machine_hash(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar3 [16];
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar2 = (*(code *)PTR_inner_00799760)();
  lVar1 = CONCAT44(uStack_4c,local_50);
  if (lVar1 == -1) {
    if ((1 < ((uint)local_48 & 3) - 2) && ((local_48 & 3) != 0)) {
      uStack_28 = local_48 - 1;
      local_30 = CONCAT31(local_30._1_3_,3);
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (*(code *)PTR_from_utf8_00799468)(uVar2,local_40);
    if (local_50 != 1) {
      auVar3 = ::<str>::trim_matches::<<char>::is_whitespace>(local_48,local_40);
      uVar2 = extraout_XMM0_Da;
      if (auVar3._8_8_ != 0) {
        <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
        ::digest::<&[u8]>(&local_50,auVar3._0_8_);
        hex(&local_30,&local_50,0x20);
        param_1[2] = local_20;
        *(undefined4 *)param_1 = local_30;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_2c;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_28;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_28._4_4_;
        if (lVar1 == 0) {
          return;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(local_30,1);
        return;
      }
    }
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0xffffffffffffffff;
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(uVar2,1);
      return;
    }
  }
  return;
}


