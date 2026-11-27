// 00653f80 write_request

/* <craggemini_core[66f3c71560d70857]::shm::ShmOwner>::write_request */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::shm::ShmOwner>::write_request
          (longlong *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_4 - 1 < *(ulonglong *)(param_2 + 0x30)) {
    if (param_4 >> 0x20 == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      pbVar7 = (byte *)&local_50;
      <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
      ::digest::<&[u8]>(pbVar7,param_3,param_4);
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(int *)(lVar4 + 0x2c) == 0) {
        local_68 = lVar3;
        local_60 = param_2;
        (*(code *)PTR_memcpy_00799008)(param_2,param_4);
        local_70 = *(longlong *)(lVar4 + 0x20) + 1;
        *(longlong *)(lVar4 + 0x20) = local_70;
        *(int *)(lVar4 + 0x28) = (int)param_4;
        *(undefined4 *)(lVar4 + 0x40) = local_40;
        *(undefined4 *)(lVar4 + 0x44) = uStack_3c;
        *(undefined4 *)(lVar4 + 0x48) = uStack_38;
        *(undefined4 *)(lVar4 + 0x4c) = uStack_34;
        *(undefined4 *)(lVar4 + 0x30) = local_50;
        *(undefined4 *)(lVar4 + 0x34) = uStack_4c;
        *(undefined4 *)(lVar4 + 0x38) = uStack_48;
        *(undefined4 *)(lVar4 + 0x3c) = uStack_44;
        *(undefined4 *)(lVar4 + 0x2c) = 1;
        local_58 = param_4;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_80 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_80 == 0) {
          uVar8 = (*(code *)PTR_handle_error_00798ff0)();
          if (local_88 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
          }
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        local_88 = 0x40;
        local_78 = 0;
        do {
          lVar3 = local_78;
          bVar1 = *pbVar7;
          cVar2 = "0123456789abcdef"[bVar1 >> 4];
          if (local_78 == local_88) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_88,local_78,1,1,1);
          }
          *(char *)(local_80 + lVar3) = cVar2;
          local_78 = lVar3 + 1;
          cVar2 = "0123456789abcdef"[bVar1 & 0xf];
          if (local_78 == local_88) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_88,local_78,1,1,1);
          }
          *(char *)(local_80 + 1 + lVar3) = cVar2;
          local_78 = lVar3 + 2;
          pbVar7 = pbVar7 + 1;
        } while (local_78 != 0x40);
        if (local_88 != -1) {
          uVar6 = *(ulonglong *)(local_60 + 0x58);
          if (*(ulonglong *)(local_60 + 0x58) < local_58) {
            uVar6 = local_58;
          }
          *(ulonglong *)(local_60 + 0x58) = uVar6;
          *param_1 = local_88;
          param_1[1] = local_80;
          param_1[2] = 0x40;
          param_1[3] = local_70;
          param_1[4] = local_68;
          param_1[5] = local_58;
          return param_1;
        }
        goto LAB_00654010;
      }
      uVar5 = 0x1a;
      param_4 = param_2;
    }
    else {
      uVar5 = 0x25;
    }
  }
  else {
    uVar5 = 0x2d;
  }
  local_80 = (*(code *)PTR_<&str>_007991e8)(param_4,uVar5);
LAB_00654010:
  param_1[1] = local_80;
  *param_1 = -1;
  return param_1;
}


