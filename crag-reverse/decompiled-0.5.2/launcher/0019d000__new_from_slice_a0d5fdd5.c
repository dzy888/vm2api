// 0019d000 new_from_slice

/* <aes_gcm[5f8529cb003b2bf0]::AesGcm<aes[8e0128500682d16e]::autodetect::Aes256,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B1>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>> as
   crypto_common[3c47e24a51feb738]::KeyInit>::new_from_slice */

undefined8 * __rustcall
<aes_gcm[5f8529cb003b2bf0]::AesGcm<aes[8e0128500682d16e]::autodetect::Aes256,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_crypto_common[3c47e24a51feb738]::KeyInit>
::new_from_slice(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong local_9b8;
  ulonglong uStack_9b0;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined1 local_8b8 [240];
  ulonglong local_7c8;
  ulonglong uStack_7c0;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3e8 [960];
  
  puVar2 = PTR_STORAGE_00219dc8;
  if (param_3 != 0x20) {
    param_1[1] = 0;
    *param_1 = 1;
    return param_1;
  }
  if ((*PTR_STORAGE_00219dc8 == '\x01') ||
     ((*PTR_STORAGE_00219dc8 == -1 && (cVar3 = (*(code *)PTR_init_inner_0021a388)(), cVar3 != '\0'))
     )) {
    (*(code *)PTR_new_0021a390)();
    uVar5 = aes[8e0128500682d16e]::ni::aes256::inv_expanded_keys(local_8b8,&local_7c8);
    puVar1 = PTR_memcpy_00219c60;
    uVar5 = (*(code *)PTR_memcpy_00219c60)(uVar5,0xf0);
    uVar5 = (*(code *)puVar1)(uVar5,0x1e0);
  }
  else {
    uVar5 = (*(code *)PTR_aes256_key_schedule_0021a380)();
  }
  (*(code *)PTR_memcpy_00219c60)(uVar5,0x3c0);
  local_9b8 = 0;
  uStack_9b0 = 0;
  if (*puVar2 == '\x01') {
    <aes[8e0128500682d16e]::autodetect::Aes256_as_cipher[92111fe3d9585f38]::block::BlockEncrypt>::
    encrypt_with_backend::inner::
    <cipher[92111fe3d9585f38]::block::BlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>
              (local_3e8,&local_9b8);
  }
  else {
    local_978 = 0;
    uStack_970 = 0;
    local_988 = 0;
    uStack_980 = 0;
    local_998 = 0;
    uStack_990 = 0;
    local_9a8 = 0;
    uStack_9a4 = 0;
    uStack_9a0 = 0;
    uStack_99c = 0;
    (*(code *)PTR_aes256_encrypt_00219fb8)(0,&local_9a8);
    local_9b8 = local_7c8;
    uStack_9b0 = uStack_7c0;
  }
  uVar4 = local_9b8 >> 7 & 1;
  local_7c8 = uVar4 + ((uStack_9b0 >> 8 & 0xff) << 0x30 | uStack_9b0 << 0x38 |
                       (uStack_9b0 >> 0x10 & 0xff) << 0x28 | (uStack_9b0 >> 0x18 & 0xff) << 0x20 |
                       (uStack_9b0 >> 0x20 & 0xff) << 0x18 | (uStack_9b0 >> 0x28 & 0xff) << 0x10 |
                       uStack_9b0 >> 0x38 | (uStack_9b0 >> 0x30 & 0xff) << 8) * 2;
  uStack_7c0 = (uVar4 << 0x39 | uVar4 << 0x3e | local_9b8 << 0x38 & 0x8000000000000000) ^
               (((local_9b8 >> 0x30 & 0xff) << 8 |
                 (local_9b8 >> 0x28 & 0xff) << 0x10 |
                 (local_9b8 >> 0x20 & 0xff) << 0x18 |
                 (local_9b8 >> 0x18 & 0xff) << 0x20 |
                 (local_9b8 >> 0x10 & 0xff) << 0x28 | (local_9b8 >> 8 & 0xff) << 0x30 |
                 local_9b8 >> 0x38 | local_9b8 << 0x38) << 1 | uStack_9b0 >> 7 & 1);
  uVar5 = (*(code *)PTR_new_with_init_block_0021a398)(0,0);
  puVar2 = PTR_memcpy_00219c60;
  (*(code *)PTR_memcpy_00219c60)(uVar5,0x3c0);
  local_408 = local_9a8;
  uStack_404 = uStack_9a4;
  uStack_400 = uStack_9a0;
  uStack_3fc = uStack_99c;
  local_3f8 = (undefined4)local_998;
  uStack_3f4 = local_998._4_4_;
  uStack_3f0 = (undefined4)uStack_990;
  uStack_3ec = uStack_990._4_4_;
  (*(code *)puVar2)(local_9a8,0x3e0);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


