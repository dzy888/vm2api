// 006ce330 mul_base_clamped

/* WARNING: Removing unreachable block (ram,0x006ce788) */
/* WARNING: Removing unreachable block (ram,0x006cebd8) */
/* WARNING: Switch with 1 destination removed at 0x006ce348 */
/* <curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>::mul_base_clamped */

undefined8 __rustcall
<curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>::mul_base_clamped
          (undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStack_2d8 [40];
  undefined1 auStack_2b0 [40];
  undefined1 auStack_288 [40];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [160];
  
  *param_2 = *param_2 & 0xf8;
  param_2[0x1f] = param_2[0x1f] & 0x3f | 0x40;
  puVar2 = PTR_ED25519_BASEPOINT_TABLE_INNER_DOC_HIDDEN_0079a620;
  uStack_260 = param_1;
  <curve25519_dalek[8828c522c30c513]::scalar::Scalar>::as_radix_16(auStack_110,param_2);
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_230 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._0_8_;
  uStack_228 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._8_8_;
  uStack_220 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._16_8_;
  uStack_218 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._24_8_;
  uStack_210 = 0;
  uStack_208 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._0_8_;
  uStack_200 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._8_8_;
  uStack_1f8 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._16_8_;
  uStack_1f0 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._24_8_;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uVar5 = 0;
  do {
    while ((uVar5 & 1) != 0) {
      uVar6 = <curve25519_dalek[8828c522c30c513]::window::LookupTable<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>
              ::select(auStack_d0,puVar2 + (uVar5 >> 1) * 0x3c0,auStack_110[uVar5]);
      uVar6 = (*(code *)PTR_add_0079a680)(uVar6,auStack_d0);
      puVar1 = PTR_mul_0079a608;
      uVar6 = (*(code *)PTR_mul_0079a608)(uVar6,auStack_288);
      uVar6 = (*(code *)puVar1)(uVar6,auStack_2b0);
      uVar6 = (*(code *)puVar1)(uVar6,auStack_288);
      uVar6 = (*(code *)puVar1)(uVar6,auStack_2d8);
      (*(code *)PTR_memcpy_00799008)(uVar6,0xa0);
      uVar5 = uVar5 + 1;
      if (0x3f < uVar5) goto LAB_006ce871;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
LAB_006ce871:
  uVar6 = (*(code *)PTR_double_0079a630)();
  uVar6 = (*(code *)PTR_memcpy_00799008)(uVar6,0xa0);
  puVar1 = PTR_mul_0079a608;
  uVar6 = (*(code *)PTR_mul_0079a608)(uVar6,auStack_138);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_160);
  (*(code *)puVar1)(uVar6,auStack_138);
  puVar3 = PTR_double_0079a630;
  uVar6 = (*(code *)PTR_double_0079a630)();
  uVar6 = (*(code *)PTR_memcpy_00799008)(uVar6,0xa0);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_138);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_160);
  (*(code *)puVar1)(uVar6,auStack_138);
  uVar6 = (*(code *)puVar3)();
  uVar6 = (*(code *)PTR_memcpy_00799008)(uVar6,0xa0);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_138);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_160);
  (*(code *)puVar1)(uVar6,auStack_138);
  uVar6 = (*(code *)puVar3)();
  uVar6 = (*(code *)puVar1)(uVar6,auStack_288);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_2b0);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_288);
  uVar6 = (*(code *)puVar1)(uVar6,auStack_2d8);
  uVar6 = (*(code *)PTR_memcpy_00799008)(uVar6,0xa0);
  uVar5 = 0;
  do {
    while ((uVar5 & 1) == 0) {
      uVar6 = <curve25519_dalek[8828c522c30c513]::window::LookupTable<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>
              ::select(auStack_d0,puVar2 + (uVar5 >> 1) * 0x3c0,auStack_110[uVar5]);
      uVar6 = (*(code *)PTR_add_0079a680)(uVar6,auStack_d0);
      puVar1 = PTR_mul_0079a608;
      uVar6 = (*(code *)PTR_mul_0079a608)(uVar6,auStack_288);
      uVar6 = (*(code *)puVar1)(uVar6,auStack_2b0);
      uVar6 = (*(code *)puVar1)(uVar6,auStack_288);
      uVar6 = (*(code *)puVar1)(uVar6,auStack_2d8);
      uVar6 = (*(code *)PTR_memcpy_00799008)(uVar6,0xa0);
      uVar5 = uVar5 + 1;
      if (0x3f < uVar5) goto LAB_006cecc1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
LAB_006cecc1:
  uVar4 = uStack_260;
  (*(code *)PTR_memcpy_00799008)(uVar6,0xa0);
  return uVar4;
}


