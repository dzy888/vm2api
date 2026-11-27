// 001b9ab0 mul_base

/* WARNING: Removing unreachable block (ram,0x001b9b68) */
/* WARNING: Removing unreachable block (ram,0x001b9fb8) */
/* <curve25519_dalek[8828c522c30c513]::edwards::EdwardsBasepointTable as
   curve25519_dalek[8828c522c30c513]::traits::BasepointTable>::mul_base */

undefined8 __rustcall
<curve25519_dalek[8828c522c30c513]::edwards::EdwardsBasepointTable_as_curve25519_dalek[8828c522c30c513]::traits::BasepointTable>
::mul_base(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStack_2d8 [40];
  undefined1 local_2b0 [40];
  undefined1 local_288 [40];
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_160 [40];
  undefined1 local_138 [40];
  undefined1 local_110 [64];
  undefined1 local_d0 [160];
  
  local_260 = param_1;
  <curve25519_dalek[8828c522c30c513]::scalar::Scalar>::as_radix_16(local_110,param_3);
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_238 = 0;
  local_230 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._0_8_;
  uStack_228 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._8_8_;
  local_220 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._16_8_;
  uStack_218 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._24_8_;
  local_210 = 0;
  local_208 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._0_8_;
  uStack_200 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._8_8_;
  local_1f8 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._16_8_;
  uStack_1f0 = anon_dfafb6f5c379a5c9cd1a5a6db40b776c_2_llvm_4473284813622289990._24_8_;
  local_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uVar4 = 0;
  do {
    while ((uVar4 & 1) == 0) {
      uVar4 = uVar4 + 1;
      if (0x3f < uVar4) goto LAB_001b9c51;
    }
    uVar5 = <curve25519_dalek[8828c522c30c513]::window::LookupTable<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>
            ::select(local_d0,(uVar4 >> 1) * 0x3c0 + param_2,local_110[uVar4]);
    uVar5 = (*(code *)PTR_add_0021a5c8)(uVar5,local_d0);
    puVar1 = PTR_mul_0021a550;
    uVar5 = (*(code *)PTR_mul_0021a550)(uVar5,local_288);
    uVar5 = (*(code *)puVar1)(uVar5,local_2b0);
    uVar5 = (*(code *)puVar1)(uVar5,local_288);
    uVar5 = (*(code *)puVar1)(uVar5,auStack_2d8);
    (*(code *)PTR_memcpy_00219c60)(uVar5,0xa0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
LAB_001b9c51:
  uVar5 = (*(code *)PTR_double_0021a578)();
  uVar5 = (*(code *)PTR_memcpy_00219c60)(uVar5,0xa0);
  puVar1 = PTR_mul_0021a550;
  uVar5 = (*(code *)PTR_mul_0021a550)(uVar5,local_138);
  uVar5 = (*(code *)puVar1)(uVar5,local_160);
  (*(code *)puVar1)(uVar5,local_138);
  puVar2 = PTR_double_0021a578;
  uVar5 = (*(code *)PTR_double_0021a578)();
  uVar5 = (*(code *)PTR_memcpy_00219c60)(uVar5,0xa0);
  uVar5 = (*(code *)puVar1)(uVar5,local_138);
  uVar5 = (*(code *)puVar1)(uVar5,local_160);
  (*(code *)puVar1)(uVar5,local_138);
  uVar5 = (*(code *)puVar2)();
  uVar5 = (*(code *)PTR_memcpy_00219c60)(uVar5,0xa0);
  uVar5 = (*(code *)puVar1)(uVar5,local_138);
  uVar5 = (*(code *)puVar1)(uVar5,local_160);
  (*(code *)puVar1)(uVar5,local_138);
  uVar5 = (*(code *)puVar2)();
  uVar5 = (*(code *)puVar1)(uVar5,local_288);
  uVar5 = (*(code *)puVar1)(uVar5,local_2b0);
  uVar5 = (*(code *)puVar1)(uVar5,local_288);
  uVar5 = (*(code *)puVar1)(uVar5,auStack_2d8);
  uVar5 = (*(code *)PTR_memcpy_00219c60)(uVar5,0xa0);
  uVar4 = 0;
  do {
    while ((uVar4 & 1) != 0) {
      uVar4 = uVar4 + 1;
      if (0x3f < uVar4) goto LAB_001ba0a1;
    }
    uVar5 = <curve25519_dalek[8828c522c30c513]::window::LookupTable<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>
            ::select(local_d0,(uVar4 >> 1) * 0x3c0 + param_2,local_110[uVar4]);
    uVar5 = (*(code *)PTR_add_0021a5c8)(uVar5,local_d0);
    puVar1 = PTR_mul_0021a550;
    uVar5 = (*(code *)PTR_mul_0021a550)(uVar5,local_288);
    uVar5 = (*(code *)puVar1)(uVar5,local_2b0);
    uVar5 = (*(code *)puVar1)(uVar5,local_288);
    uVar5 = (*(code *)puVar1)(uVar5,auStack_2d8);
    uVar5 = (*(code *)PTR_memcpy_00219c60)(uVar5,0xa0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
LAB_001ba0a1:
  uVar3 = local_260;
  (*(code *)PTR_memcpy_00219c60)(uVar5,0xa0);
  return uVar3;
}


