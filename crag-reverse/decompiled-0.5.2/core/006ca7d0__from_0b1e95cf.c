// 006ca7d0 from

/* <curve25519_dalek[8828c522c30c513]::window::NafLookupTable5<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::ProjectiveNielsPoint>
   as 
   core[c0acaeba6ab4c2e0]::convert::From<&curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>>::from
    */

undefined8 __rustcall
<curve25519_dalek[8828c522c30c513]::window::NafLookupTable5<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::ProjectiveNielsPoint>as_core[c0acaeba6ab4c2e0]::convert::From<&curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>>
::from(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong local_650;
  longlong local_648;
  longlong local_640;
  longlong local_638;
  longlong local_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  longlong local_608;
  undefined1 local_600 [40];
  undefined8 local_5d8;
  undefined1 local_530 [160];
  undefined1 local_490 [160];
  undefined1 local_3f0 [160];
  undefined1 local_350 [160];
  undefined1 local_2b0 [160];
  undefined1 local_210 [160];
  undefined1 local_170 [320];
  
  uVar5 = (param_2[5] + 0x7ffffffffffed0) - *param_2;
  uVar9 = (param_2[6] - param_2[1]) + 0x7ffffffffffff0;
  uVar10 = (param_2[7] - param_2[2]) + 0x7ffffffffffff0;
  uVar8 = (param_2[8] - param_2[3]) + 0x7ffffffffffff0;
  uVar7 = (param_2[9] - param_2[4]) + 0x7ffffffffffff0;
  uVar6 = uVar7 >> 0x33;
  local_628 = (undefined4)param_2[10];
  uStack_624 = *(undefined4 *)((longlong)param_2 + 0x54);
  uStack_620 = (undefined4)param_2[0xb];
  uStack_61c = *(undefined4 *)((longlong)param_2 + 0x5c);
  local_618 = (undefined4)param_2[0xc];
  uStack_614 = *(undefined4 *)((longlong)param_2 + 100);
  uStack_610 = (undefined4)param_2[0xd];
  uStack_60c = *(undefined4 *)((longlong)param_2 + 0x6c);
  local_608 = param_2[0xe];
  local_5d8 = param_1;
  uVar11 = (*(code *)PTR_mul_0079a608)
                     (uVar6,anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  puVar3 = PTR_memcpy_00799008;
  local_650 = uVar6 * 0x13 + (uVar5 & 0x7ffffffffffff);
  local_648 = (uVar9 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  local_640 = (uVar10 & 0x7ffffffffffff) + (uVar9 >> 0x33);
  local_638 = (uVar8 & 0x7ffffffffffff) + (uVar10 >> 0x33);
  local_630 = (uVar7 & 0x7ffffffffffff) + (uVar8 >> 0x33);
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar11 = (*(code *)puVar3)(uVar11,0xa0);
  uVar11 = (*(code *)puVar3)(uVar11,0xa0);
  uVar11 = (*(code *)puVar3)(uVar11,0xa0);
  uVar11 = (*(code *)puVar3)(uVar11,0xa0);
  uVar11 = (*(code *)puVar3)(uVar11,0xa0);
  uVar11 = (*(code *)puVar3)(uVar11,0xa0);
  (*(code *)puVar3)(uVar11,0xa0);
  lVar1 = param_2[9];
  lVar2 = param_2[4];
  uVar11 = (*(code *)PTR_double_0079a630)();
  puVar3 = PTR_mul_0079a608;
  uVar11 = (*(code *)PTR_mul_0079a608)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)PTR_add_0079a678)(uVar11,local_530);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)puVar3)((lVar1 - lVar2) + 0x7ffffffffffff0U >> 0x33,
                             anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar11 = (*(code *)PTR_add_0079a678)(uVar11,local_490);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)puVar3)((lVar1 - lVar2) + 0x7ffffffffffff0U >> 0x33,
                             anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar11 = (*(code *)PTR_add_0079a678)(uVar11,local_3f0);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)puVar3)((lVar1 - lVar2) + 0x7ffffffffffff0U >> 0x33,
                             anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar11 = (*(code *)PTR_add_0079a678)(uVar11,local_350);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)puVar3)((lVar1 - lVar2) + 0x7ffffffffffff0U >> 0x33,
                             anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar11 = (*(code *)PTR_add_0079a678)(uVar11,local_2b0);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)puVar3)((lVar1 - lVar2) + 0x7ffffffffffff0U >> 0x33,
                             anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar11 = (*(code *)PTR_add_0079a678)(uVar11,local_210);
  puVar3 = PTR_mul_0079a608;
  uVar11 = (*(code *)PTR_mul_0079a608)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)PTR_mul_0079a608)
                     ((lVar1 - lVar2) + 0x7ffffffffffff0U >> 0x33,
                      anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar11 = (*(code *)PTR_add_0079a678)(uVar11,local_170);
  puVar3 = PTR_mul_0079a608;
  uVar11 = (*(code *)PTR_mul_0079a608)(uVar11,local_600);
  uVar11 = (*(code *)puVar3)(uVar11,&local_628);
  uVar11 = (*(code *)puVar3)(uVar11,local_600);
  (*(code *)puVar3)(uVar11,&local_650);
  uVar11 = (*(code *)puVar3)((lVar1 - lVar2) + 0x7ffffffffffff0U >> 0x33,
                             anon_dfafb6f5c379a5c9cd1a5a6db40b776c_0_llvm_4473284813622289990);
  puVar3 = PTR_memcpy_00799008;
  uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa0);
  uVar4 = local_5d8;
  (*(code *)puVar3)(uVar11,0x500);
  return uVar4;
}


