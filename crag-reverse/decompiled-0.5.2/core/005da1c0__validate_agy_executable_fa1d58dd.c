// 005da1c0 validate_agy_executable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable
          (longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4,longlong param_5,
          longlong param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  code *local_250;
  undefined1 *local_248;
  code *pcStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  ushort uStack_200;
  undefined1 uStack_1fe;
  undefined1 uStack_1fd;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  byte local_120;
  undefined7 uStack_11f;
  longlong local_118;
  undefined1 local_110 [8];
  code *local_108;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  cVar5 = (*(code *)PTR_is_absolute_00799b58)();
  if (cVar5 == '\0') {
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
              (&local_f0,500,&DAT_0019e7b2,0x12,&DAT_0019e7c4,0x24);
    param_1[4] = local_d0;
    param_1[5] = lStack_c8;
    param_1[2] = local_e0;
    param_1[3] = lStack_d8;
    *param_1 = local_f0;
    param_1[1] = lStack_e8;
    param_1[6] = local_c0;
    *(undefined2 *)(param_1 + 7) = local_b8;
    *(undefined1 *)((longlong)param_1 + 0x3a) = local_b6;
    *(undefined1 *)((longlong)param_1 + 0x3b) = 4;
    local_74 = local_b4;
  }
  else {
    uVar10 = (*(code *)PTR_metadata_00799308)(extraout_XMM0_Da,param_3);
    if ((int)local_238 == 2) {
      local_250 = (code *)CONCAT26(uStack_22a,CONCAT24(uStack_22c,uStack_230));
      local_238 = &local_250;
      uStack_230 = SUB84(PTR_fmt_007991d0,0);
      uStack_22c = (undefined2)((ulonglong)PTR_fmt_007991d0 >> 0x20);
      uStack_22a = (undefined2)((ulonglong)PTR_fmt_007991d0 >> 0x30);
      (*(code *)PTR_format_inner_00799048)(uVar10,&local_238);
      <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
      <&str,alloc[12e961f32105355]::borrow::Cow<str>>
                (&local_238,0x1f7,&DAT_0019de92,0x16,&local_188);
      uStack_1fd = 4;
      if ((1 < ((uint)local_250 & 3) - 2) && (((ulonglong)local_250 & 3) != 0)) {
        local_108 = local_250 + -1;
        local_110[0] = 3;
        (*(code *)PTR_drop_00799040)();
      }
      param_1[1] = CONCAT26(uStack_22a,CONCAT24(uStack_22c,uStack_230));
      param_1[2] = CONCAT44(uStack_224,uStack_228);
      *param_1 = (longlong)local_238;
      param_1[3] = CONCAT44(uStack_21c,uStack_220);
      param_1[4] = CONCAT44(uStack_214,uStack_218);
      param_1[5] = CONCAT44(uStack_20c,local_210);
      param_1[6] = CONCAT44(uStack_204,local_208);
      *(ushort *)(param_1 + 7) = uStack_200;
      *(undefined1 *)((longlong)param_1 + 0x3a) = uStack_1fe;
      *(undefined1 *)((longlong)param_1 + 0x3b) = uStack_1fd;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1fc;
      return param_1;
    }
    if ((uStack_200 & 0x49) != 0 && (uStack_200 & 0xf000) == 0x8000) {
      if ((param_4 & param_6 != 0) == 0) {
        *param_1 = -2;
        return param_1;
      }
      local_238 = (code **)0x1b600000000;
      uStack_22c = 0;
      uStack_230 = 1;
      uVar10 = (*(code *)PTR__open_00799768)(param_3,param_2);
      if ((int)local_248 == 1) {
        local_250 = pcStack_240;
        local_238 = &local_250;
        uStack_230 = SUB84(PTR_fmt_007991d0,0);
        uStack_22c = (undefined2)((ulonglong)PTR_fmt_007991d0 >> 0x20);
        uStack_22a = (undefined2)((ulonglong)PTR_fmt_007991d0 >> 0x30);
        (*(code *)PTR_format_inner_00799048)(uVar10,&local_238);
        <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
        <&str,alloc[12e961f32105355]::borrow::Cow<str>>
                  (&local_238,0x1f7,&DAT_0019de92,0x16,&local_188);
        uStack_1fd = 4;
        if ((1 < ((uint)local_250 & 3) - 2) && (((ulonglong)local_250 & 3) != 0)) {
          local_108 = local_250 + -1;
          local_110[0] = 3;
          (*(code *)PTR_drop_00799040)();
        }
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1fc;
        *(ulonglong *)((longlong)param_1 + 0x2c) = CONCAT44(local_208,uStack_20c);
        *(undefined4 *)((longlong)param_1 + 0x34) = uStack_204;
        *(ushort *)(param_1 + 7) = uStack_200;
        *(undefined1 *)((longlong)param_1 + 0x3a) = uStack_1fe;
        *(undefined1 *)((longlong)param_1 + 0x3b) = uStack_1fd;
        *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_218,uStack_21c);
        *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(local_210,uStack_214);
        *(ulonglong *)((longlong)param_1 + 0xc) =
             CONCAT44(uStack_228,CONCAT22(uStack_22a,uStack_22c));
        *(ulonglong *)((longlong)param_1 + 0x14) = CONCAT44(uStack_220,uStack_224);
        *param_1 = (longlong)local_238;
        *(undefined4 *)(param_1 + 1) = uStack_230;
        return param_1;
      }
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      local_188 = _DAT_0018cfe0;
      uStack_180 = _UNK_0018cfe8;
      local_178 = _DAT_0018cff0;
      uStack_174 = _UNK_0018cff4;
      uStack_170 = _UNK_0018cff8;
      uStack_16c = _UNK_0018cffc;
      local_168 = 0;
      local_120 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
      if (lVar6 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
LAB_005da9a5:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_118 = param_6;
      do {
        uVar7 = 0x40000;
        lVar6 = (*(code *)PTR_read_007999d0)();
        bVar4 = local_120;
        if (lVar6 == 1) {
          validate_agy_executable::_closure_2_(&local_238,uVar7);
          param_1[6] = CONCAT44(uStack_204,local_208);
          param_1[7] = CONCAT44(uStack_1fc,CONCAT13(uStack_1fd,CONCAT12(uStack_1fe,uStack_200)));
          param_1[4] = CONCAT44(uStack_214,uStack_218);
          param_1[5] = CONCAT44(uStack_20c,local_210);
          param_1[2] = CONCAT44(uStack_224,uStack_228);
          param_1[3] = CONCAT44(uStack_21c,uStack_220);
          *(int *)param_1 = (int)local_238;
          *(undefined4 *)((longlong)param_1 + 4) = local_238._4_4_;
          *(undefined4 *)(param_1 + 1) = uStack_230;
          *(uint *)((longlong)param_1 + 0xc) = CONCAT22(uStack_22a,uStack_22c);
          local_70 = (int)local_238;
LAB_005da958:
          (*(code *)PTR___rust_dealloc_00798fc8)(local_70,1);
          (*(code *)PTR_close_00799030)();
          return param_1;
        }
        if (uVar7 == 0) {
          uStack_1d0 = CONCAT71(uStack_11f,local_120);
          local_1d8 = uStack_128;
          local_1e8 = uStack_138;
          uStack_1e0 = local_130;
          local_1f8 = uStack_148;
          uStack_1f0 = local_140;
          local_208 = (undefined4)uStack_158;
          uStack_204 = uStack_158._4_4_;
          uStack_200 = (ushort)uStack_150;
          uStack_1fe = (undefined1)((ulonglong)uStack_150 >> 0x10);
          uStack_1fd = (undefined1)((ulonglong)uStack_150 >> 0x18);
          uStack_1fc = uStack_150._4_4_;
          uStack_218 = (undefined4)local_168;
          uStack_214 = local_168._4_4_;
          local_210 = (undefined4)uStack_160;
          uStack_20c = uStack_160._4_4_;
          uStack_228 = local_178;
          uStack_224 = uStack_174;
          uStack_220 = uStack_170;
          uStack_21c = uStack_16c;
          local_238 = (code **)local_188;
          uStack_230 = (undefined4)uStack_180;
          uStack_22c = (undefined2)((ulonglong)uStack_180 >> 0x20);
          uStack_22a = (undefined2)((ulonglong)uStack_180 >> 0x30);
          uVar10 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::FixedOutput>
                   ::finalize_fixed(local_110,&local_238);
          pcStack_240 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                        ::fmt;
          local_248 = local_110;
          (*(code *)PTR_format_inner_00799048)(uVar10,&local_248);
          lVar3 = (longlong)local_238;
          uVar2 = CONCAT26(uStack_22a,CONCAT24(uStack_22c,uStack_230));
          lVar6 = param_5 + param_6 * 0x18;
          uStack_230 = (undefined4)lVar6;
          uStack_22c = (undefined2)((ulonglong)lVar6 >> 0x20);
          uStack_22a = (undefined2)((ulonglong)lVar6 >> 0x30);
          local_238 = (code **)param_5;
          cVar5 = <core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                  ::any::
                  <craggemini_core[66f3c71560d70857]::acp_backend::validate_agy_executable::_closure_3_>
                            (&local_238,uVar2,CONCAT44(uStack_224,uStack_228));
          if (cVar5 != '\0') {
            uVar10 = extraout_XMM0_Da_01;
            if (lVar3 != 0) {
              uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_01,1);
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
            (*(code *)PTR_close_00799030)();
            *param_1 = -2;
            return param_1;
          }
          <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
                    (&local_70,0x1f7,&DAT_0019e7e8,0x1a,&DAT_0019e802,0x3a);
          local_35 = 4;
          *(undefined4 *)(param_1 + 4) = local_50;
          *(undefined4 *)((longlong)param_1 + 0x24) = uStack_4c;
          *(undefined4 *)(param_1 + 5) = uStack_48;
          *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_44;
          *(undefined4 *)(param_1 + 2) = local_60;
          *(undefined4 *)((longlong)param_1 + 0x14) = uStack_5c;
          *(undefined4 *)(param_1 + 3) = uStack_58;
          *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_54;
          *(undefined4 *)param_1 = local_70;
          *(undefined4 *)((longlong)param_1 + 4) = uStack_6c;
          *(undefined4 *)(param_1 + 1) = uStack_68;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_64;
          param_1[6] = local_40;
          *(undefined2 *)(param_1 + 7) = local_38;
          *(undefined1 *)((longlong)param_1 + 0x3a) = local_36;
          *(undefined1 *)((longlong)param_1 + 0x3b) = 4;
          *(undefined4 *)((longlong)param_1 + 0x3c) = local_34;
          if (lVar3 != 0) {
            local_70 = (*(code *)PTR___rust_dealloc_00798fc8)(local_70,1);
          }
          goto LAB_005da958;
        }
        if (0x40000 < uVar7) {
          (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_acp_backend_rs_0078e5c0,0x40000);
          goto LAB_005da9a5;
        }
        uVar9 = 0x40 - (ulonglong)local_120;
        if (uVar7 < uVar9) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,uVar7);
          local_120 = (char)uVar7 + bVar4;
        }
        else {
          if ((ulonglong)local_120 != 0) {
            uVar10 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,uVar9);
            param_6 = local_118;
            local_168 = local_168 + 1;
            (*(code *)PTR_compress256_00799158)(uVar10,1);
            uVar7 = uVar7 - uVar9;
          }
          if (uVar7 >> 6 != 0) {
            local_168 = local_168 + (uVar7 >> 6);
            (*(code *)PTR_compress256_00799158)();
          }
          uVar8 = (uint)uVar7 & 0x3f;
          (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar8);
          local_120 = (byte)uVar8;
        }
      } while( true );
    }
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
              (&local_b0,0x1f7,&DAT_0019de92,0x16,&DAT_0019e83c,0x2a);
    param_1[4] = local_90;
    param_1[5] = lStack_88;
    param_1[2] = local_a0;
    param_1[3] = lStack_98;
    *param_1 = local_b0;
    param_1[1] = lStack_a8;
    param_1[6] = local_80;
    *(undefined2 *)(param_1 + 7) = local_78;
    *(undefined1 *)((longlong)param_1 + 0x3a) = local_76;
    *(undefined1 *)((longlong)param_1 + 0x3b) = 4;
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = local_74;
  return param_1;
}


