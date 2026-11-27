// 0019c760 decrypt_in_place_detached

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <aes_gcm[5f8529cb003b2bf0]::AesGcm<aes[8e0128500682d16e]::autodetect::Aes256,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B1>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>> as
   aead[feaa57d69515bc75]::AeadInPlace>::decrypt_in_place_detached */

bool __rustcall
<aes_gcm[5f8529cb003b2bf0]::AesGcm<aes[8e0128500682d16e]::autodetect::Aes256,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_aead[feaa57d69515bc75]::AeadInPlace>
::decrypt_in_place_detached
          (undefined8 param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
          longlong param_5,ulonglong param_6)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 *local_c8;
  ulonglong uStack_c0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  
  bVar9 = true;
  if (param_4 < 0x1000000001 && param_6 < 0x1000000011) {
    uStack_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = _UNK_00113ad8;
    uStack_38 = _UNK_00113adc;
    local_118 = 0;
    uStack_110 = 0;
    local_e0 = param_6;
    local_50 = param_1;
    if (*PTR_STORAGE_00219dc8 == '\x01') {
      <aes[8e0128500682d16e]::autodetect::Aes256_as_cipher[92111fe3d9585f38]::block::BlockEncrypt>::
      encrypt_with_backend::inner::
      <ctr[21a3dbcb6f8741b9]::backend::Closure<ctr[21a3dbcb6f8741b9]::flavors::ctr32::Ctr32BE,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,cipher[92111fe3d9585f38]::stream_core::WriteBlockCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
                (param_1,&uStack_48,&local_118);
    }
    else {
      uStack_38 = 1;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_8c = 0x1000000;
      local_98 = uStack_48;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      (*(code *)PTR_aes256_encrypt_00219fb8)(param_2[2],&local_98);
    }
    local_108 = uStack_40;
    uStack_104 = uStack_3c;
    uStack_100 = uStack_38;
    uStack_fc = uStack_34;
    local_118 = local_50;
    uStack_110 = CONCAT44(uStack_44,uStack_48);
    (*(code *)PTR_clone_0021a358)();
    uVar10 = <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>
             ::update_with_backend::
             <<ghash[f56ef8f107c5cc09]::GHash_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>::update_with_backend::GHashClosure<universal_hash[1e98f6c6ee470aee]::UniversalHash::update::Ctx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
                       (&local_98,param_3,param_4 >> 4);
    uVar7 = param_4 & 0xf;
    if (uVar7 != 0) {
      uVar10 = (*(code *)PTR_memset_00219d00)(uVar10,0x10 - uVar7);
      (*(code *)PTR_memcpy_00219c60)(uVar10,uVar7);
      <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>
      ::update_with_backend::
      <<ghash[f56ef8f107c5cc09]::GHash_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>::update_with_backend::GHashClosure<universal_hash[1e98f6c6ee470aee]::UniversalHash::update::Ctx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
                (&local_98,&local_d8,1);
    }
    uVar7 = local_e0;
    local_58 = local_e0 >> 4;
    uVar10 = <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>
             ::update_with_backend::
             <<ghash[f56ef8f107c5cc09]::GHash_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>::update_with_backend::GHashClosure<universal_hash[1e98f6c6ee470aee]::UniversalHash::update::Ctx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
                       (&local_98,param_5);
    uVar5 = uVar7 & 0xf;
    local_e8 = uVar5;
    if (uVar5 != 0) {
      uVar10 = (*(code *)PTR_memset_00219d00)(uVar10,0x10 - uVar5);
      (*(code *)PTR_memcpy_00219c60)(uVar10,uVar5);
      <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>
      ::update_with_backend::
      <<ghash[f56ef8f107c5cc09]::GHash_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>::update_with_backend::GHashClosure<universal_hash[1e98f6c6ee470aee]::UniversalHash::update::Ctx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
                (&local_98,&local_d8,1);
    }
    uVar6 = param_4 << 3;
    uVar5 = uVar7 * 8;
    local_d8 = (undefined8 *)
               ((param_4 & 0x1fffffffffffffff) >> 0x35 | (uVar6 & 0xff000000000000) >> 0x28 |
                (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 | (uVar6 & 0xff00) << 0x28 |
               param_4 << 0x3b);
    uStack_d0 = (undefined4 *)
                ((uVar7 & 0x1fffffffffffffff) >> 0x35 | (uVar5 & 0xff000000000000) >> 0x28 |
                 (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                 (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 |
                uVar7 << 0x3b);
    local_f0 = param_5;
    <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>
    ::update_with_backend::
    <<ghash[f56ef8f107c5cc09]::GHash_as_universal_hash[1e98f6c6ee470aee]::UniversalHash>::update_with_backend::GHashClosure<universal_hash[1e98f6c6ee470aee]::UniversalHash::update::Ctx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
              (&local_98,&local_d8,1);
    local_c8 = (undefined4 *)local_88;
    uStack_c0 = uStack_80;
    local_d8 = (undefined8 *)CONCAT44(uStack_94,local_98);
    uStack_d0 = (undefined4 *)CONCAT44(uStack_8c,uStack_90);
    (*(code *)PTR_finalize_0021a360)();
    puVar2 = PTR_<u8>_0021a368;
    (*(code *)PTR_<u8>_0021a368)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    cVar3 = (*(code *)puVar2)();
    uVar7 = local_e8;
    bVar9 = cVar3 == '\0';
    if (!bVar9) {
      if ((local_e8 != 0) && (~uStack_100 <= (uint)local_e8)) {
        (*(code *)PTR_unwrap_failed_00219ec0)
                  (&DAT_00216680,&local_119,&PTR_s__vendor_cipher_0_4_4_src_stream__002166a0);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar5 = local_e0;
      if (0x10 < local_e0) {
        lVar8 = (local_e0 & 0x1ffffffff0) + local_f0;
        uStack_d0 = (undefined4 *)local_f0;
        local_c8 = (undefined4 *)local_f0;
        uStack_c0 = local_58;
        local_d8 = &uStack_110;
        <&aes[8e0128500682d16e]::autodetect::Aes256_as_cipher[92111fe3d9585f38]::block::BlockEncryptMut>
        ::encrypt_with_backend_mut::
        <ctr[21a3dbcb6f8741b9]::backend::Closure<ctr[21a3dbcb6f8741b9]::flavors::ctr32::Ctr32BE,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,cipher[92111fe3d9585f38]::stream_core::ApplyBlocksCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
                  (&local_118,&local_d8);
        local_f0 = lVar8;
        uVar5 = uVar7;
      }
      if (uVar5 != 0) {
        lVar8 = 0;
        if (uVar5 < 0x10) {
          lVar8 = 0x10 - uVar5;
        }
        uVar10 = (*(code *)PTR_memset_00219d00)(0x10 - uVar5,lVar8);
        puVar2 = PTR_memcpy_00219c60;
        (*(code *)PTR_memcpy_00219c60)(uVar10,uVar5);
        uStack_c0 = 1;
        local_d8 = &uStack_110;
        uStack_d0 = &local_98;
        local_c8 = &local_98;
        uVar10 = <&aes[8e0128500682d16e]::autodetect::Aes256_as_cipher[92111fe3d9585f38]::block::BlockEncryptMut>
                 ::encrypt_with_backend_mut::
                 <ctr[21a3dbcb6f8741b9]::backend::Closure<ctr[21a3dbcb6f8741b9]::flavors::ctr32::Ctr32BE,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,cipher[92111fe3d9585f38]::stream_core::ApplyBlocksCtx<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>>>
                           (&local_118,&local_d8);
        (*(code *)puVar2)(uVar10,uVar5);
      }
    }
  }
  return bVar9;
}


