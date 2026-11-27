// 006a5320 make_response

/* <axum[743f01f147681d98]::json::Json<_> as
   axum_core[61c49771464cda0a]::response::into_response::IntoResponse>::into_response::make_response
    */

undefined8 * __rustcall
<axum[743f01f147681d98]::json::Json<_>as_axum_core[61c49771464cda0a]::response::into_response::IntoResponse>
::into_response::make_response(undefined8 *param_1,longlong *param_2,undefined8 **param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 **ppuVar3;
  undefined1 local_221;
  undefined8 **local_220;
  undefined8 **local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined ***local_198;
  longlong lStack_190;
  undefined8 **local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined ***pppuStack_150;
  longlong local_148;
  longlong lStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 **local_110;
  undefined8 ***local_108;
  undefined **ppuStack_100;
  undefined ***local_f8;
  code *pcStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined ***local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined2 local_40;
  undefined ***local_38;
  longlong lStack_30;
  undefined8 **local_28;
  
  if (param_3 == (undefined8 **)0x0) {
    local_218 = (undefined8 **)0x0;
    uStack_210 = 0x1d;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = &PTR_static_clone_00791930;
    uStack_1f0 = &DAT_001835e0;
    local_1e8 = 0x10;
    uStack_1e0 = 0;
    local_1d8 = (ulonglong)local_1d8._1_7_ << 8;
    local_148 = *param_2;
    lStack_140 = param_2[1];
    local_138 = param_2[3];
    if ((local_138 & 1) == 0) {
      pppuStack_150 = (undefined ***)PTR_SHARED_VTABLE_00799a60;
    }
    else {
      ppuVar3 = (undefined8 **)(local_138 >> 5);
      local_88 = (undefined ***)((longlong)ppuVar3 + param_2[2]);
      lStack_80 = local_148 - (longlong)ppuVar3;
      local_78 = (longlong)ppuVar3 + lStack_140;
      (*(code *)PTR_from_00799a68)();
      lStack_140 = (longlong)local_188 - (longlong)ppuVar3;
      local_110 = ppuVar3;
      if (local_188 < ppuVar3) {
        local_220 = local_188;
        local_108 = &local_110;
        ppuStack_100 = (undefined **)<usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        local_f8 = (undefined ***)&local_220;
        pcStack_f0 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        (*(code *)PTR_panic_fmt_007991a8)
                  (local_f8,&
                            PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00791988
                  );
        goto LAB_006a5813;
      }
      local_148 = (longlong)ppuVar3 + lStack_190;
      local_138 = CONCAT44(uStack_17c,uStack_180);
      pppuStack_150 = local_198;
    }
    local_158 = local_1d8;
    local_168 = (undefined4)local_1e8;
    uStack_164 = local_1e8._4_4_;
    uStack_160 = (undefined4)uStack_1e0;
    uStack_15c = uStack_1e0._4_4_;
    local_178 = (undefined4)local_1f8;
    uStack_174 = local_1f8._4_4_;
    uStack_170 = (undefined4)uStack_1f0;
    uStack_16c = uStack_1f0._4_4_;
    local_188 = (undefined8 **)local_208;
    uStack_180 = (undefined4)uStack_200;
    uStack_17c = uStack_200._4_4_;
    local_198 = (undefined ***)local_218;
    lStack_190 = uStack_210;
    local_88 = pppuStack_150;
    lStack_80 = local_148;
    local_78 = lStack_140;
    uStack_70 = local_138;
    (*(code *)PTR_into_response_0079a3e8)();
    local_1a8 = local_98;
    uStack_1a0 = uStack_90;
    local_1b8 = local_a8;
    uStack_1b0 = uStack_a0;
    local_1c8 = local_b8;
    uStack_1c0 = uStack_b0;
    local_1d8 = local_c8;
    uStack_1d0 = uStack_c0;
    <[(http[56314f485c23ccf6]::header::name::HeaderName,http[56314f485c23ccf6]::header::value::HeaderValue);1:usize]as_axum_core[61c49771464cda0a]::response::into_response_parts::IntoResponseParts>
    ::into_response_parts(param_1,&local_198,&local_218);
  }
  else {
    local_218 = (undefined8 **)0x0;
    uStack_210 = 0x1d;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = &PTR_static_clone_00791930;
    uStack_1f0 = &DAT_001a5588;
    local_1e8 = 0x19;
    uStack_1e0 = 0;
    local_1d8 = (ulonglong)local_1d8._1_7_ << 8;
    local_198 = (undefined ***)0x0;
    lStack_190 = 1;
    local_188 = (undefined8 **)0x0;
    local_f8 = (undefined ***)0x60000020;
    local_108 = &local_198;
    ppuStack_100 = &PTR_<alloc[12e961f32105355]::string::String>_007919a0;
    local_220 = param_3;
    cVar2 = (*(code *)PTR_fmt_00799518)();
    if (cVar2 != '\0') {
      (*(code *)PTR_unwrap_failed_00799028)
                (&DAT_00791910,&local_221,
                 &PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_007919d0);
LAB_006a5813:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_28 = local_188;
    local_38 = local_198;
    lStack_30 = lStack_190;
    local_40 = 500;
    local_88 = (undefined ***)local_218;
    lStack_80 = uStack_210;
    local_78 = local_208;
    uStack_70 = uStack_200;
    local_68 = (undefined4)local_1f8;
    uStack_64 = local_1f8._4_4_;
    uStack_60 = (undefined4)uStack_1f0;
    uStack_5c = uStack_1f0._4_4_;
    local_58 = (undefined4)local_1e8;
    uStack_54 = local_1e8._4_4_;
    uStack_50 = (undefined4)uStack_1e0;
    uStack_4c = uStack_1e0._4_4_;
    local_48 = local_1d8;
    (*(code *)PTR_into_response_0079a3d0)();
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_a8 = local_138;
    uStack_a0 = uStack_130;
    local_b8 = local_148;
    uStack_b0 = lStack_140;
    local_c8 = local_158;
    uStack_c0 = pppuStack_150;
    local_d8 = local_168;
    uStack_d4 = uStack_164;
    uStack_d0 = uStack_160;
    uStack_cc = uStack_15c;
    local_e8 = local_178;
    uStack_e4 = uStack_174;
    uStack_e0 = uStack_170;
    uStack_dc = uStack_16c;
    local_f8 = (undefined ***)local_188;
    local_108 = (undefined8 ***)local_198;
    ppuStack_100 = (undefined **)lStack_190;
    <[(http[56314f485c23ccf6]::header::name::HeaderName,http[56314f485c23ccf6]::header::value::HeaderValue);1:usize]as_axum_core[61c49771464cda0a]::response::into_response_parts::IntoResponseParts>
    ::into_response_parts(&local_218,&local_88,&local_108);
    param_1[0xc] = local_1b8;
    param_1[0xd] = uStack_1b0;
    param_1[10] = local_1c8;
    param_1[0xb] = uStack_1c0;
    param_1[8] = local_1d8;
    param_1[9] = uStack_1d0;
    *(undefined4 *)(param_1 + 6) = (undefined4)local_1e8;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_1e8._4_4_;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_1e0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1e0._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)local_1f8;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_1f8._4_4_;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_1f0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_1f0._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_208;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_208._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_200;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_200._4_4_;
    *param_1 = local_218;
    param_1[1] = uStack_210;
    *(undefined4 *)(param_1 + 0xe) = (undefined4)local_1a8;
    *(undefined4 *)((longlong)param_1 + 0x74) = local_1a8._4_4_;
    *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_1a0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_1a0._4_4_;
    *(undefined2 *)(param_1 + 0xd) = 500;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(param_3);
    (*(code *)PTR_drop_007994e8)();
  }
  return param_1;
}


