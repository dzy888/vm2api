// 005c6230 <ctr[21a3dbcb6f8741b9]::backend::Closure<ctr[21a3dbcb6f8741b9]::flavors::ctr32::Ctr32BE,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,cipher[92111fe3d9585f38]::stream_core::WriteBlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>

/* <aes[8e0128500682d16e]::autodetect::Aes256 as
   cipher[92111fe3d9585f38]::block::BlockEncrypt>::encrypt_with_backend::inner::<ctr[21a3dbcb6f8741b9]::backend::Closure<ctr[21a3dbcb6f8741b9]::flavors::ctr32::Ctr32BE,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>,
   cipher[92111fe3d9585f38]::stream_core::WriteBlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>>>> */

void __rustcall
<aes[8e0128500682d16e]::autodetect::Aes256_as_cipher[92111fe3d9585f38]::block::BlockEncrypt>::
encrypt_with_backend::inner::
<ctr[21a3dbcb6f8741b9]::backend::Closure<ctr[21a3dbcb6f8741b9]::flavors::ctr32::Ctr32BE,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,cipher[92111fe3d9585f38]::stream_core::WriteBlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
          (uint *param_1,uint *param_2,undefined1 (*param_3) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2[3] + param_2[4];
  auVar2._0_4_ = *param_2 ^ *param_1;
  auVar2._4_4_ = param_2[1] ^ param_1[1];
  auVar2._8_4_ = param_2[2] ^ param_1[2];
  auVar2._12_4_ =
       (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 * 0x1000000) ^
       param_1[3];
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 4));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 8));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0xc));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x10));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x14));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x18));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x1c));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x20));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x24));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x28));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x2c));
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x30));
  param_2[4] = param_2[4] + 1;
  auVar2 = aesenc(auVar2,*(undefined1 (*) [16])(param_1 + 0x34));
  auVar2 = aesenclast(auVar2,*(undefined1 (*) [16])(param_1 + 0x38));
  *param_3 = auVar2;
  return;
}


