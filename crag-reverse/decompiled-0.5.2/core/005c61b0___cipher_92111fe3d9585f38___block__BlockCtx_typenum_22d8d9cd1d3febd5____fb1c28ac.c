// 005c61b0 <cipher[92111fe3d9585f38]::block::BlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>

/* <aes[8e0128500682d16e]::autodetect::Aes256 as
   cipher[92111fe3d9585f38]::block::BlockEncrypt>::encrypt_with_backend::inner::<cipher[92111fe3d9585f38]::block::BlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>>> */

void __rustcall
<aes[8e0128500682d16e]::autodetect::Aes256_as_cipher[92111fe3d9585f38]::block::BlockEncrypt>::
encrypt_with_backend::inner::
<cipher[92111fe3d9585f38]::block::BlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>
          (undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = aesenc(*param_2 ^ *param_1,param_1[1]);
  auVar1 = aesenc(auVar1,param_1[2]);
  auVar1 = aesenc(auVar1,param_1[3]);
  auVar1 = aesenc(auVar1,param_1[4]);
  auVar1 = aesenc(auVar1,param_1[5]);
  auVar1 = aesenc(auVar1,param_1[6]);
  auVar1 = aesenc(auVar1,param_1[7]);
  auVar1 = aesenc(auVar1,param_1[8]);
  auVar1 = aesenc(auVar1,param_1[9]);
  auVar1 = aesenc(auVar1,param_1[10]);
  auVar1 = aesenc(auVar1,param_1[0xb]);
  auVar1 = aesenc(auVar1,param_1[0xc]);
  auVar1 = aesenc(auVar1,param_1[0xd]);
  auVar1 = aesenclast(auVar1,param_1[0xe]);
  *param_3 = auVar1;
  return;
}


