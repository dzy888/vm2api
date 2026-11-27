// 001ac0a0 compute

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <ed25519_dalek[c4d14793384b02cc]::verifying::RCompute<digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha512VarCore,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, sha2[7efb180a76699f7c]::OidSha512>>>>::compute */

void __rustcall
<ed25519_dalek[c4d14793384b02cc]::verifying::RCompute<digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha512VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha512>>>>
::compute(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
         ulonglong param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 local_378 [416];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [232];
  undefined1 local_d0 [160];
  
  (*(code *)PTR_memcpy_00219c60)(*param_2,0xc0);
  if (param_5 < 0x40) {
    uVar2 = (*(code *)PTR_memcpy_00219c60)(0,param_5);
  }
  else {
    uVar2 = (*(code *)PTR_compress512_0021a4f8)(*param_4,1);
    if (param_5 - 0x40 >> 7 != 0) {
      uVar2 = (*(code *)PTR_compress512_0021a4f8)();
    }
    uVar2 = (*(code *)PTR_memcpy_00219c60)(uVar2,(uint)(param_5 - 0x40) & 0x7f);
  }
  puVar1 = PTR_memcpy_00219c60;
  (*(code *)PTR_memcpy_00219c60)(uVar2,0x1e0);
  uVar2 = <curve25519_dalek[8828c522c30c513]::scalar::Scalar>::from_hash::
          <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha512VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha512>>>
                    (local_378,local_1b8);
  (*(code *)puVar1)(uVar2,0xa0);
  (*(code *)PTR_neg_0021a528)();
  (*(code *)PTR_vartime_double_scalar_mul_basepoint_0021a530)(local_1d8,local_d0);
  (*(code *)PTR_compress_0021a508)();
  return;
}


