// 00169940 machine_code

/* craggemini[b21da2d71f2da7a3]::license::machine_code */

undefined8 * __rustcall
craggemini[b21da2d71f2da7a3]::license::machine_code
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  code *pcVar10;
  ulonglong extraout_RDX;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined4 local_2a8 [2];
  undefined8 local_2a0;
  undefined8 **ppuStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 *local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined4 uStack_237;
  undefined3 uStack_233;
  undefined1 local_230;
  undefined4 uStack_22f;
  undefined3 uStack_22b;
  undefined1 uStack_228;
  undefined4 uStack_227;
  undefined3 uStack_223;
  undefined1 uStack_220;
  undefined4 uStack_21f;
  undefined3 uStack_21b;
  undefined1 uStack_218;
  undefined4 uStack_217;
  undefined4 uStack_213;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 local_200;
  undefined7 uStack_1ff;
  undefined1 auStack_1f8 [17];
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined4 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined4 uStack_f7;
  undefined4 uStack_f3;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 - 1 < 0x100) {
    if (param_3 < 0x10) {
      uVar7 = 0;
      do {
        if (*(char *)(param_2 + uVar7) == '\0') goto LAB_001699c8;
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
    }
    else {
      lVar9 = (*(code *)PTR_memchr_aligned_00219d40)(param_4,param_3);
      if (lVar9 == 1) goto LAB_001699c8;
    }
    uVar12 = <str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
    if ((extraout_RDX == param_3) &&
       (iVar6 = (*(code *)PTR_bcmp_00219d38)(uVar12,param_3), iVar6 == 0)) {
      uVar7 = <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open(param_4,param_5,1);
      if ((uVar7 & 1) != 0) {
        *(char *)(param_1 + 1) = (char)(uVar7 >> 8);
        goto LAB_001699cc;
      }
      local_2a8[0] = (undefined4)(uVar7 >> 0x20);
      <craggemini[b21da2d71f2da7a3]::license::Device>::load
                (&local_b0,local_2a8,param_2,param_3,"/etc/machine-id",0xf);
      if (local_b0 == (undefined4 *)0xffffffffffffffff) {
        if ((char)uStack_a8 != '\0') {
          *(char *)(param_1 + 1) = (char)uStack_a8;
          *param_1 = 0xffffffffffffffff;
          goto LAB_00169ece;
        }
        local_248 = 0;
        uStack_244 = 0;
        local_240 = 0;
        uStack_23c = 0;
        local_258 = (undefined4 *)0x0;
        uStack_250 = 0;
        uStack_24c = 0;
        (*(code *)PTR_fill_bytes_00219da8)(0,0x20);
        local_268 = local_248;
        uStack_264 = uStack_244;
        uStack_260 = local_240;
        uStack_25c = uStack_23c;
        local_278 = (undefined4)local_258;
        uStack_274 = local_258._4_4_;
        uStack_270 = uStack_250;
        uStack_26c = uStack_24c;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
        if (puVar8 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_error_00219c78)();
          goto LAB_0016a515;
        }
        *puVar8 = 0x696d656767617263;
        *(undefined2 *)(puVar8 + 1) = 0x696e;
        uVar12 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                           (&local_258,param_3,0,1,1);
        local_2b0 = CONCAT44(uStack_24c,uStack_250);
        if ((char)local_258 != '\0') {
          (*(code *)PTR_handle_error_00219c78)();
          goto LAB_0016a515;
        }
        local_288 = CONCAT44(uStack_244,local_248);
        (*(code *)PTR_memcpy_00219c60)(uVar12,param_3);
        uVar12 = machine_hash(&local_258,"/etc/machine-id",0xf);
        local_280 = local_258;
        if (local_258 == (undefined4 *)0xffffffffffffffff) {
          *(byte *)(param_1 + 1) = (byte)uStack_250;
          *param_1 = 0xffffffffffffffff;
          if (local_2b0 != 0) {
            uVar12 = (*(code *)PTR___rust_dealloc_00219c40)(0xffffffffffffffff,1);
          }
          (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
        }
        else {
          uVar7 = (ulonglong)(byte)uStack_250;
          uVar11 = (ulonglong)uStack_24c._1_3_;
          uVar1 = CONCAT13((undefined1)uStack_24c,uStack_250._1_3_);
          local_148 = CONCAT44(uStack_244,local_248);
          local_150 = puVar8;
          base64[729f3f786a952ed7]::engine::Engine::encode::inner::
          <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                    (&local_2a0,"",&local_278,0x20);
          (*(code *)PTR_from_00219d48)();
          base64[729f3f786a952ed7]::engine::Engine::encode::inner::
          <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                    (&local_2c8,"",&local_258,0x20);
          uStack_160 = 1;
          local_1d8 = (undefined4 *)0xa;
          uStack_1d0 = local_150;
          local_1c8 = 10;
          uStack_1c0 = local_2b0;
          uStack_1b8 = local_288;
          local_1a8 = local_280;
          local_198 = local_148;
          ppuStack_190 = local_2a0;
          ppuStack_188 = ppuStack_298;
          local_180 = local_290;
          local_178 = (undefined4)local_2c8;
          uStack_174 = local_2c8._4_4_;
          uStack_170 = (undefined4)uStack_2c0;
          uStack_16c = uStack_2c0._4_4_;
          local_168 = local_2b8;
          uStack_1b0 = param_3;
          uStack_1a0 = (ulonglong)uVar1 << 8 | uVar11 << 0x28 | uVar7;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
          lVar9 = (*(code *)PTR___rust_alloc_00219c88)();
          if (lVar9 == 0) {
            (*(code *)PTR_handle_error_00219c78)();
            goto LAB_0016a515;
          }
          local_258 = (undefined4 *)&DAT_00000080;
          uStack_250 = (undefined4)lVar9;
          uStack_24c = (undefined4)((ulonglong)lVar9 >> 0x20);
          local_248 = 0;
          uStack_244 = 0;
          local_140 = &local_258;
          <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                    (local_140,&anon_c9247e0b0208fc9c8c019285c3882aec_59_llvm_5798562142159169407,1)
          ;
          local_2a0 = (undefined4 **)CONCAT62(local_2a0._2_6_,0x100);
          ppuStack_298 = &local_140;
          pcVar10 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                            ::serialize_entry::<str,u8>
                                      (&local_2a0,
                                       &
                                       anon_c9247e0b0208fc9c8c019285c3882aec_20_llvm_5798562142159169407
                                       ,7,&uStack_160);
          uVar12 = extraout_XMM0_Da_01;
          if (pcVar10 == (code *)0x0) {
            if (local_2a0._0_1_ != (code)0x0) {
LAB_00169e50:
              pcVar10 = (code *)(*(code *)PTR_invalid_raw_value_00219d20)();
              uVar12 = extraout_XMM0_Da_02;
              goto LAB_0016a1ad;
            }
            pcVar10 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                              ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                                        (&local_2a0,
                                         &
                                         anon_c9247e0b0208fc9c8c019285c3882aec_21_llvm_5798562142159169407
                                         ,7,&local_1d8);
            uVar12 = extraout_XMM0_Da_07;
            if (pcVar10 != (code *)0x0) goto LAB_0016a1ad;
            if (local_2a0._0_1_ != (code)0x0) goto LAB_00169e50;
            pcVar10 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                              ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                                        (&local_2a0,
                                         &
                                         anon_c9247e0b0208fc9c8c019285c3882aec_22_llvm_5798562142159169407
                                         ,5,&uStack_1c0);
            uVar12 = extraout_XMM0_Da_08;
            if (pcVar10 != (code *)0x0) goto LAB_0016a1ad;
            if (local_2a0._0_1_ != (code)0x0) goto LAB_00169e50;
            pcVar10 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                              ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                                        (&local_2a0,
                                         anon_c9247e0b0208fc9c8c019285c3882aec_23_llvm_5798562142159169407
                                         ,0xf,&local_1a8);
            uVar12 = extraout_XMM0_Da_09;
            if (pcVar10 != (code *)0x0) goto LAB_0016a1ad;
            if (local_2a0._0_1_ != (code)0x0) goto LAB_00169e50;
            pcVar10 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                              ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                                        (&local_2a0,
                                         anon_c9247e0b0208fc9c8c019285c3882aec_24_llvm_5798562142159169407
                                         ,0xb,&ppuStack_190);
            uVar12 = extraout_XMM0_Da_10;
            if (pcVar10 != (code *)0x0) goto LAB_0016a1ad;
            if (local_2a0._0_1_ != (code)0x0) goto LAB_00169e50;
            pcVar10 = (code *)<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                              ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                                        (&local_2a0,
                                         anon_c9247e0b0208fc9c8c019285c3882aec_25_llvm_5798562142159169407
                                         ,10,&local_178);
            uVar12 = extraout_XMM0_Da_11;
            if (pcVar10 != (code *)0x0) goto LAB_0016a1ad;
            if ((((ulonglong)local_2a0 & 1) == 0) && (local_2a0._1_1_ != '\0')) {
              <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                        (*ppuStack_298,
                         &anon_c9247e0b0208fc9c8c019285c3882aec_58_llvm_5798562142159169407,1);
            }
            pcVar10 = (code *)CONCAT44(uStack_24c,uStack_250);
            if (local_258 == (undefined4 *)0xffffffffffffffff) goto LAB_0016a1c7;
            local_2b8 = CONCAT44(uStack_244,local_248);
            local_2c8 = local_258;
            uStack_2c0 = pcVar10;
            cVar5 = <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::write
                              (local_2a8,"device.json",0xb,pcVar10,local_2b8,0);
            if (cVar5 == -1) {
              local_c8 = (undefined1)local_168;
              uStack_c7 = (undefined7)((ulonglong)local_168 >> 8);
              uStack_c0 = uStack_160;
              uStack_bf = uStack_15f;
              local_d8 = (undefined1)local_178;
              uStack_d7 = (undefined7)(CONCAT44(uStack_174,local_178) >> 8);
              uStack_d0 = (undefined1)uStack_170;
              uStack_cf = (undefined7)(CONCAT44(uStack_16c,uStack_170) >> 8);
              local_e8 = SUB81(ppuStack_188,0);
              uStack_e7 = (undefined7)((ulonglong)ppuStack_188 >> 8);
              uStack_e0 = (undefined1)local_180;
              uStack_df = (undefined7)((ulonglong)local_180 >> 8);
              local_f8 = (undefined1)local_198;
              uStack_f7 = (undefined4)((ulonglong)local_198 >> 8);
              uStack_f3._0_3_ = (undefined3)((ulonglong)local_198 >> 0x28);
              uStack_f3._3_1_ = SUB81(ppuStack_190,0);
              uStack_ef = (undefined7)((ulonglong)ppuStack_190 >> 8);
              local_108 = (undefined4)local_1a8;
              uStack_104 = local_1a8._4_4_;
              uStack_100 = (undefined4)uStack_1a0;
              uStack_fc = uStack_1a0._4_4_;
              local_118 = (undefined4)uStack_1b8;
              uStack_114 = uStack_1b8._4_4_;
              uStack_110 = (undefined4)uStack_1b0;
              uStack_10c = uStack_1b0._4_4_;
              local_128 = (undefined4)local_1c8;
              uStack_124 = local_1c8._4_4_;
              uStack_120 = (undefined4)uStack_1c0;
              uStack_11c = uStack_1c0._4_4_;
              local_138 = local_1d8;
              uStack_130 = (undefined4)uStack_1d0;
              uStack_12c = uStack_1d0._4_4_;
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>
                        (&local_2c8);
LAB_0016a4b9:
              (*(code *)PTR_zeroize_00219d50)();
              goto LAB_00169ac5;
            }
            <craggemini[b21da2d71f2da7a3]::license::Device>::load
                      (&local_258,local_2a8,param_2,param_3,"/etc/machine-id",0xf);
            if (local_258 != (undefined4 *)0xffffffffffffffff) {
              uStack_bf = uStack_1df;
              uStack_cf = auStack_1f8._9_7_;
              local_c8 = auStack_1f8[0x10];
              uStack_c7 = uStack_1e7;
              uStack_c0 = uStack_1e0;
              uStack_df = uStack_1ff;
              local_d8 = auStack_1f8[0];
              uStack_d7 = auStack_1f8._1_7_;
              uStack_d0 = auStack_1f8[8];
              uStack_ef = uStack_20f;
              local_e8 = uStack_208;
              uStack_e7 = uStack_207;
              uStack_e0 = local_200;
              uStack_fc._1_3_ = (undefined3)_uStack_21b;
              uStack_fc = CONCAT31(uStack_fc._1_3_,(char)((uint)uStack_21f >> 0x18));
              local_f8 = (undefined1)((uint)_uStack_21b >> 0x18);
              uStack_f7 = uStack_217;
              uStack_f3 = uStack_213;
              uStack_10c._1_3_ = (undefined3)_uStack_22b;
              uStack_10c = CONCAT31(uStack_10c._1_3_,(char)((uint)uStack_22f >> 0x18));
              local_108._1_3_ = (undefined3)uStack_227;
              local_108 = CONCAT31(local_108._1_3_,(char)((uint)_uStack_22b >> 0x18));
              uStack_104._1_3_ = (undefined3)_uStack_223;
              uStack_104 = CONCAT31(uStack_104._1_3_,(char)((uint)uStack_227 >> 0x18));
              uStack_100._0_1_ = (undefined1)((uint)_uStack_223 >> 0x18);
              uStack_100 = CONCAT31((int3)uStack_21f,(undefined1)uStack_100);
              uStack_11c = uStack_23c;
              local_118 = CONCAT31((int3)uStack_237,uStack_238);
              uStack_114._1_3_ = (undefined3)_uStack_233;
              uStack_114 = CONCAT31(uStack_114._1_3_,(char)((uint)uStack_237 >> 0x18));
              uStack_110._0_1_ = (undefined1)((uint)_uStack_233 >> 0x18);
              uStack_110 = CONCAT31((int3)uStack_22f,(undefined1)uStack_110);
              uStack_12c = uStack_24c;
              local_128 = local_248;
              uStack_124 = uStack_244;
              uStack_120 = local_240;
              local_138 = local_258;
              uStack_130 = uStack_250;
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>
                        (&local_2c8);
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini[b21da2d71f2da7a3]::license::Device>(&local_1d8);
              goto LAB_0016a4b9;
            }
            *(byte *)(param_1 + 1) = (byte)uStack_250;
            *param_1 = 0xffffffffffffffff;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>(&local_2c8)
            ;
          }
          else {
LAB_0016a1ad:
            if (local_258 != (undefined4 *)0x0) {
              (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
            }
LAB_0016a1c7:
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                      (pcVar10);
            *(undefined1 *)(param_1 + 1) = 3;
            *param_1 = 0xffffffffffffffff;
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Device>
                    (&local_1d8);
        }
        (*(code *)PTR_zeroize_00219d50)();
        goto LAB_00169ece;
      }
      local_c8 = (undefined1)local_40;
      uStack_c7 = (undefined7)((ulonglong)local_40 >> 8);
      uStack_c0 = (undefined1)uStack_38;
      uStack_bf = (undefined7)((ulonglong)uStack_38 >> 8);
      local_d8 = (undefined1)local_50;
      uStack_d7 = (undefined7)((ulonglong)local_50 >> 8);
      uStack_d0 = (undefined1)uStack_48;
      uStack_cf = (undefined7)((ulonglong)uStack_48 >> 8);
      local_e8 = (undefined1)local_60;
      uStack_e7 = (undefined7)((ulonglong)local_60 >> 8);
      uStack_e0 = (undefined1)uStack_58;
      uStack_df = (undefined7)((ulonglong)uStack_58 >> 8);
      local_f8 = (undefined1)local_70;
      uStack_f7 = (undefined4)((ulonglong)local_70 >> 8);
      uStack_f3._0_3_ = (undefined3)((ulonglong)local_70 >> 0x28);
      uStack_f3._3_1_ = (undefined1)uStack_68;
      uStack_ef = (undefined7)((ulonglong)uStack_68 >> 8);
      local_108 = (undefined4)local_80;
      uStack_104 = (undefined4)((ulonglong)local_80 >> 0x20);
      uStack_100 = (undefined4)uStack_78;
      uStack_fc = (undefined4)((ulonglong)uStack_78 >> 0x20);
      local_118 = (undefined4)local_90;
      uStack_114 = (undefined4)((ulonglong)local_90 >> 0x20);
      uStack_110 = (undefined4)uStack_88;
      uStack_10c = (undefined4)((ulonglong)uStack_88 >> 0x20);
      local_128 = (undefined4)local_a0;
      uStack_124 = (undefined4)((ulonglong)local_a0 >> 0x20);
      uStack_120 = (undefined4)uStack_98;
      uStack_11c = (undefined4)((ulonglong)uStack_98 >> 0x20);
      local_138 = local_b0;
      uStack_130 = (undefined4)uStack_a8;
      uStack_12c = uStack_a8._4_4_;
LAB_00169ac5:
      <craggemini[b21da2d71f2da7a3]::license::Device>::machine(&local_258,&local_138);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      uStack_a8 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (uStack_a8 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00219c78)();
LAB_0016a515:
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      local_b0 = (undefined4 *)&DAT_00000080;
      local_a0 = 0;
      local_2a0 = &local_b0;
      <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                (&local_b0,&anon_c9247e0b0208fc9c8c019285c3882aec_59_llvm_5798562142159169407,1);
      local_2c8 = (undefined4 *)CONCAT62(local_2c8._2_6_,0x100);
      uStack_2c0 = (code *)&local_2a0;
      puVar8 = (undefined8 *)
               <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
               ::serialize_entry::<str,u8>
                         (&local_2c8,
                          &anon_c9247e0b0208fc9c8c019285c3882aec_20_llvm_5798562142159169407,7,
                          auStack_1f8);
      uVar12 = extraout_XMM0_Da;
      if (puVar8 == (undefined8 *)0x0) {
        if ((char)local_2c8 != '\0') {
LAB_00169b71:
          puVar8 = (undefined8 *)(*(code *)PTR_invalid_raw_value_00219d20)();
          uVar12 = extraout_XMM0_Da_00;
          goto LAB_00169e83;
        }
        puVar8 = (undefined8 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                           (&local_2c8,
                            &anon_c9247e0b0208fc9c8c019285c3882aec_21_llvm_5798562142159169407,7,
                            &local_258);
        uVar12 = extraout_XMM0_Da_03;
        if (puVar8 != (undefined8 *)0x0) goto LAB_00169e83;
        if ((char)local_2c8 != '\0') goto LAB_00169b71;
        puVar8 = (undefined8 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                           (&local_2c8,
                            &anon_c9247e0b0208fc9c8c019285c3882aec_22_llvm_5798562142159169407,5,
                            &local_240);
        uVar12 = extraout_XMM0_Da_04;
        if (puVar8 != (undefined8 *)0x0) goto LAB_00169e83;
        if ((char)local_2c8 != '\0') goto LAB_00169b71;
        puVar8 = (undefined8 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                           (&local_2c8,
                            anon_c9247e0b0208fc9c8c019285c3882aec_23_llvm_5798562142159169407,0xf,
                            &uStack_228);
        uVar12 = extraout_XMM0_Da_05;
        if (puVar8 != (undefined8 *)0x0) goto LAB_00169e83;
        if ((char)local_2c8 != '\0') goto LAB_00169b71;
        puVar8 = (undefined8 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                           (&local_2c8,
                            anon_c9247e0b0208fc9c8c019285c3882aec_27_llvm_5798562142159169407,0x11,
                            (longlong)&uStack_213 + 3);
        uVar12 = extraout_XMM0_Da_06;
        if (puVar8 != (undefined8 *)0x0) goto LAB_00169e83;
        if ((((ulonglong)local_2c8 & 1) == 0) && (local_2c8._1_1_ != '\0')) {
          <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                    (*(undefined8 *)uStack_2c0,
                     &anon_c9247e0b0208fc9c8c019285c3882aec_58_llvm_5798562142159169407,1);
        }
        puVar3 = local_b0;
        puVar8 = uStack_a8;
        if (local_b0 != (undefined4 *)0xffffffffffffffff) {
          uVar12 = base64[729f3f786a952ed7]::engine::Engine::encode::inner::
                   <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                             (&local_278,"",uStack_a8,local_a0);
          if (puVar3 != (undefined4 *)0x0) {
            uVar12 = (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
          }
          local_2c8 = &local_278;
          uStack_2c0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                       ::fmt;
          uVar12 = (*(code *)PTR_format_inner_00219db0)(uVar12,&local_2c8);
          if (CONCAT44(uStack_274,local_278) != 0) {
            (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
          }
          uVar7 = CONCAT35(uStack_22b,CONCAT41(uStack_22f,local_230));
          uStack_1c0 = CONCAT44(uStack_23c,local_240);
          uVar2 = CONCAT35(uStack_233,CONCAT41(uStack_237,uStack_238));
          puVar3 = (undefined4 *)CONCAT71(uStack_20f,uStack_213._3_1_);
          uVar11 = CONCAT71(uStack_207,uStack_208);
          local_198 = CONCAT71(uStack_1ff,local_200);
          ppuStack_190 = (undefined4 **)CONCAT35(uStack_223,CONCAT41(uStack_227,uStack_228));
          ppuStack_188 = (undefined8 **)CONCAT35(uStack_21b,CONCAT41(uStack_21f,uStack_220));
          local_180 = CONCAT35((undefined3)uStack_213,CONCAT41(uStack_217,uStack_218));
          local_1d8 = local_b0;
          puVar4 = local_1d8;
          uStack_1d0 = uStack_a8;
          puVar8 = uStack_1d0;
          local_1c8 = local_a0;
          param_1[10] = ppuStack_188;
          param_1[0xb] = local_180;
          param_1[8] = local_198;
          param_1[9] = ppuStack_190;
          local_1d8._0_4_ = SUB84(local_b0,0);
          local_1d8._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
          uStack_1d0._0_4_ = SUB84(uStack_a8,0);
          uStack_1d0._4_4_ = (undefined4)((ulonglong)uStack_a8 >> 0x20);
          uStack_1b8._0_4_ = (undefined4)CONCAT41(uStack_237,uStack_238);
          uStack_1b8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_1b0._0_4_ = (undefined4)CONCAT41(uStack_22f,local_230);
          uStack_1b0._4_4_ = (undefined4)(uVar7 >> 0x20);
          local_1a8._0_4_ = SUB84(puVar3,0);
          local_1a8._4_4_ = (undefined4)((uint7)uStack_20f >> 0x18);
          uStack_1a0._0_4_ = (undefined4)uVar11;
          uStack_1a0._4_4_ = (undefined4)((uint7)uStack_207 >> 0x18);
          *(undefined4 *)(param_1 + 6) = (undefined4)local_1a8;
          *(undefined4 *)((longlong)param_1 + 0x34) = local_1a8._4_4_;
          *(undefined4 *)(param_1 + 7) = (undefined4)uStack_1a0;
          *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_1a0._4_4_;
          *(undefined4 *)(param_1 + 4) = (undefined4)uStack_1b8;
          *(undefined4 *)((longlong)param_1 + 0x24) = uStack_1b8._4_4_;
          *(undefined4 *)(param_1 + 5) = (undefined4)uStack_1b0;
          *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_1b0._4_4_;
          param_1[2] = local_a0;
          param_1[3] = uStack_1c0;
          *(undefined4 *)param_1 = (undefined4)local_1d8;
          *(undefined4 *)((longlong)param_1 + 4) = local_1d8._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1d0;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1d0._4_4_;
          param_1[0xc] = &DAT_00117870;
          param_1[0xd] = 10;
          local_1d8 = puVar4;
          uStack_1d0 = puVar8;
          uStack_1b8 = uVar2;
          uStack_1b0 = uVar7;
          local_1a8 = puVar3;
          uStack_1a0 = uVar11;
          if (local_258 != (undefined4 *)0x0) {
            (*(code *)PTR___rust_dealloc_00219c40)(uStack_1c0,1);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Device>
                    (&local_138);
          goto LAB_00169ece;
        }
      }
      else {
LAB_00169e83:
        if (local_b0 != (undefined4 *)0x0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
        }
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(puVar8);
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 0xffffffffffffffff;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini[b21da2d71f2da7a3]::license::MachineIdentity>(&local_258);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Device>
                (&local_138);
LAB_00169ece:
      (*(code *)PTR_close_00219d60)();
      return param_1;
    }
  }
LAB_001699c8:
  *(undefined1 *)(param_1 + 1) = 3;
LAB_001699cc:
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


