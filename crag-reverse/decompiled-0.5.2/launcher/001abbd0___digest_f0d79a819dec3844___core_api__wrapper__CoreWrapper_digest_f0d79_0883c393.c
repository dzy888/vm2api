// 001abbd0 <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha512VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha512>>>

/* <curve25519_dalek[8828c522c30c513]::scalar::Scalar>::from_hash::<digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha512VarCore,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, sha2[7efb180a76699f7c]::OidSha512>>> */

void __rustcall
<curve25519_dalek[8828c522c30c513]::scalar::Scalar>::from_hash::
<digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha512VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha512>>>
          (void)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 in_RCX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong local_158;
  ulonglong local_150;
  undefined1 local_148 [112];
  ulonglong local_d8;
  ulonglong local_d0;
  byte local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  uVar5 = (*(code *)PTR_memcpy_00219c60)(in_RCX,0xe0);
  uVar4 = (ulonglong)local_c8;
  uVar3 = local_150 << 10;
  uVar2 = local_158 << 10;
  uVar2 = (local_158 & 0x3fffffffffffff) >> 0x2e | (uVar2 & 0xff000000000000) >> 0x28 |
          (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8
          | (uVar2 & 0xff0000) << 0x18 | (((uint)local_c8 * 8 | uVar2) & 0xff00) << 0x28 |
          (ulonglong)((uint)local_c8 * 8) << 0x38;
  uVar3 = (local_150 & 0x3fffffffffffff) >> 0x2e | (uVar3 & 0xff000000000000) >> 0x28 |
          (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8
          | (uVar3 & 0xff0000) << 0x18 | ((uVar3 | local_158 >> 0x36) & 0xff00) << 0x28 |
          (local_158 >> 0x36) << 0x38;
  local_148[uVar4] = 0x80;
  if (uVar4 != 0x7f) {
    uVar5 = (*(code *)PTR_memset_00219d00)(uVar5,uVar4 ^ 0x7f);
    if (0xf < (local_c8 ^ 0x70)) {
      local_d8 = uVar3;
      local_d0 = uVar2;
      (*(code *)PTR_compress512_0021a4f8)(uVar5,1);
      goto LAB_001abceb;
    }
  }
  puVar1 = PTR_compress512_0021a4f8;
  (*(code *)PTR_compress512_0021a4f8)(uVar5,1);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_48 = uVar3;
  local_40 = uVar2;
  (*(code *)puVar1)(0,1);
LAB_001abceb:
  (*(code *)PTR_from_bytes_mod_order_wide_0021a500)();
  return;
}


