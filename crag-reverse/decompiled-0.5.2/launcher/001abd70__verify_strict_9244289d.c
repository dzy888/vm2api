// 001abd70 verify_strict

/* <ed25519_dalek[c4d14793384b02cc]::verifying::VerifyingKey>::verify_strict */

undefined8 * __rustcall
<ed25519_dalek[c4d14793384b02cc]::verifying::VerifyingKey>::verify_strict
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined2 uStack_21b;
  undefined1 uStack_219;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined7 uStack_200;
  undefined7 uStack_1f8;
  undefined7 uStack_1f0;
  char local_1e9;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined1 local_1e2;
  undefined8 local_1e1;
  undefined4 uStack_1d8;
  undefined2 uStack_1d4;
  undefined1 uStack_1d2;
  undefined8 local_1d1;
  undefined1 local_1c9;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  undefined8 local_1a1;
  undefined1 local_199;
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_192;
  undefined8 local_191;
  undefined1 local_189;
  undefined8 local_180;
  undefined1 local_178;
  char local_170;
  char cStack_16f;
  char cStack_16e;
  char cStack_16d;
  char cStack_16c;
  char cStack_16b;
  char cStack_16a;
  char cStack_169;
  char cStack_168;
  char cStack_167;
  char cStack_166;
  char cStack_165;
  char cStack_164;
  char cStack_163;
  char cStack_162;
  char cStack_161;
  char cStack_160;
  char cStack_15f;
  char cStack_15e;
  char cStack_15d;
  char cStack_15c;
  char cStack_15b;
  char cStack_15a;
  char cStack_159;
  char cStack_158;
  char cStack_157;
  char cStack_156;
  char cStack_155;
  char cStack_154;
  char cStack_153;
  char cStack_152;
  char cStack_151;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined8 local_b1;
  undefined1 local_a9;
  char local_a8;
  
  (*(code *)PTR_to_bytes_0021a510)();
  (*(code *)PTR_from_canonical_bytes_0021a518)();
  if (local_a8 == '\x01') {
    uStack_21b = (undefined2)(uStack_c4 & 0xffffff);
    uStack_219 = (undefined1)((uStack_c4 & 0xffffff) >> 0x10);
    local_1e1 = CONCAT71(uStack_c0,uStack_c4._3_1_);
    local_180 = local_b1;
    local_178 = local_a9;
    local_208 = CONCAT13(cStack_16d,CONCAT12(cStack_16e,CONCAT11(cStack_16f,local_170)));
    uStack_204 = CONCAT13(cStack_169,
                          (int3)(CONCAT13(cStack_16a,
                                          CONCAT12(cStack_16b,CONCAT11(cStack_16c,cStack_16d))) >> 8
                                ));
    uStack_200 = (undefined7)
                 (CONCAT17(cStack_162,
                           CONCAT16(cStack_163,
                                    CONCAT15(cStack_164,
                                             CONCAT14(cStack_165,
                                                      CONCAT13(cStack_166,
                                                               CONCAT12(cStack_167,
                                                                        CONCAT11(cStack_168,
                                                                                 cStack_169)))))))
                 >> 8);
    uStack_1f8 = (undefined7)
                 (CONCAT17(cStack_15a,
                           CONCAT16(cStack_15b,
                                    CONCAT15(cStack_15c,
                                             CONCAT14(cStack_15d,
                                                      CONCAT13(cStack_15e,
                                                               CONCAT12(cStack_15f,
                                                                        CONCAT11(cStack_160,
                                                                                 cStack_161)))))))
                 >> 8);
    uStack_1f0 = (undefined7)
                 (CONCAT17(cStack_152,
                           CONCAT16(cStack_153,
                                    CONCAT15(cStack_154,
                                             CONCAT14(cStack_155,
                                                      CONCAT13(cStack_156,
                                                               CONCAT12(cStack_157,
                                                                        CONCAT11(cStack_158,
                                                                                 cStack_159)))))))
                 >> 8);
    local_1e9 = cStack_151;
    local_1e8 = local_c8;
    local_1e4 = uStack_21b;
    local_1e2 = uStack_219;
    local_1c9 = local_a9;
    local_1d1 = local_b1;
    local_1a8 = local_c8;
    local_1a4 = uStack_21b;
    local_1a2 = uStack_219;
    local_199 = uStack_b9;
    local_1b8 = CONCAT17(cStack_159,uStack_1f8);
    uStack_1b0 = CONCAT17(cStack_151,uStack_1f0);
    local_1c8 = CONCAT44(uStack_204,local_208);
    uStack_1c0 = CONCAT17(cStack_161,uStack_200);
    uStack_1d8 = (undefined4)uStack_b8;
    local_198 = uStack_1d8;
    uStack_1d4 = (undefined2)((uint7)uStack_b8 >> 0x20);
    local_194 = uStack_1d4;
    uStack_1d2 = (undefined1)((uint7)uStack_b8 >> 0x30);
    local_192 = uStack_1d2;
    local_191 = local_b1;
    local_189 = local_a9;
    local_1a1 = local_1e1;
    uVar4 = (*(code *)PTR_decompress_00219dd0)();
    if (CONCAT13(cStack_16d,CONCAT12(cStack_16e,CONCAT11(cStack_16f,local_170))) == 1) {
      (*(code *)PTR_memcpy_00219c60)(uVar4,0x90);
      cVar2 = (*(code *)PTR_is_small_order_0021a520)();
      if ((cVar2 == '\0') && (cVar2 = (*(code *)PTR_is_small_order_0021a520)(), cVar2 == '\0')) {
        <ed25519_dalek[c4d14793384b02cc]::verifying::RCompute<digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha512VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha512>>>>
        ::compute(&local_170,param_2,&local_208,param_3,param_4);
        auVar6[0] = -(cStack_160 == (char)local_1b8);
        auVar6[1] = -(cStack_15f == local_1b8._1_1_);
        auVar6[2] = -(cStack_15e == local_1b8._2_1_);
        auVar6[3] = -(cStack_15d == local_1b8._3_1_);
        auVar6[4] = -(cStack_15c == local_1b8._4_1_);
        auVar6[5] = -(cStack_15b == local_1b8._5_1_);
        auVar6[6] = -(cStack_15a == local_1b8._6_1_);
        auVar6[7] = -(cStack_159 == local_1b8._7_1_);
        auVar6[8] = -(cStack_158 == (char)uStack_1b0);
        auVar6[9] = -(cStack_157 == uStack_1b0._1_1_);
        auVar6[10] = -(cStack_156 == uStack_1b0._2_1_);
        auVar6[0xb] = -(cStack_155 == uStack_1b0._3_1_);
        auVar6[0xc] = -(cStack_154 == uStack_1b0._4_1_);
        auVar6[0xd] = -(cStack_153 == uStack_1b0._5_1_);
        auVar6[0xe] = -(cStack_152 == uStack_1b0._6_1_);
        auVar6[0xf] = -(cStack_151 == uStack_1b0._7_1_);
        auVar5[0] = -(local_170 == (char)local_1c8);
        auVar5[1] = -(cStack_16f == local_1c8._1_1_);
        auVar5[2] = -(cStack_16e == local_1c8._2_1_);
        auVar5[3] = -(cStack_16d == local_1c8._3_1_);
        auVar5[4] = -(cStack_16c == local_1c8._4_1_);
        auVar5[5] = -(cStack_16b == local_1c8._5_1_);
        auVar5[6] = -(cStack_16a == local_1c8._6_1_);
        auVar5[7] = -(cStack_169 == local_1c8._7_1_);
        auVar5[8] = -(cStack_168 == (char)uStack_1c0);
        auVar5[9] = -(cStack_167 == uStack_1c0._1_1_);
        auVar5[10] = -(cStack_166 == uStack_1c0._2_1_);
        auVar5[0xb] = -(cStack_165 == uStack_1c0._3_1_);
        auVar5[0xc] = -(cStack_164 == uStack_1c0._4_1_);
        auVar5[0xd] = -(cStack_163 == uStack_1c0._5_1_);
        auVar5[0xe] = -(cStack_162 == uStack_1c0._6_1_);
        auVar5[0xf] = -(cStack_161 == uStack_1c0._7_1_);
        auVar5 = auVar5 & auVar6;
        if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
          uVar4 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
          puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
          if (puVar3 == (undefined8 *)0x0) goto LAB_001ac082;
          *puVar3 = 3;
          param_1[1] = puVar3;
          param_1[2] = &DAT_00216cf8;
          uVar4 = 1;
        }
        *param_1 = uVar4;
        return param_1;
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar3 == (undefined8 *)0x0) {
LAB_001ac082:
      (*(code *)PTR_handle_alloc_error_00219eb0)();
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined8 *)(*pcVar1)();
      return puVar3;
    }
    *puVar3 = 3;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar3 == (undefined8 *)0x0) goto LAB_001ac082;
    *puVar3 = 1;
  }
  param_1[1] = puVar3;
  param_1[2] = &DAT_00216cf8;
  *param_1 = 1;
  return param_1;
}


