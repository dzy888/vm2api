// 001b9410 to_montgomery

/* <curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>::to_montgomery */

undefined8 __rustcall
<curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>::to_montgomery
          (undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_48 [40];
  
  uVar2 = (*(longlong *)(param_2 + 0x58) + 0x7ffffffffffff0) - *(longlong *)(param_2 + 0x30);
  uVar3 = (*(longlong *)(param_2 + 0x60) + 0x7ffffffffffff0) - *(longlong *)(param_2 + 0x38);
  uVar6 = (*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x28)) + 0x7ffffffffffed0;
  uVar4 = (*(longlong *)(param_2 + 0x68) + 0x7ffffffffffff0) - *(longlong *)(param_2 + 0x40);
  uVar5 = (*(longlong *)(param_2 + 0x70) + 0x7ffffffffffff0) - *(longlong *)(param_2 + 0x48);
  local_118 = (uVar2 & 0x7ffffffffffff) + (uVar6 >> 0x33);
  local_110 = (uVar3 & 0x7ffffffffffff) + (uVar2 >> 0x33);
  local_108 = (uVar4 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  local_100 = (uVar5 & 0x7ffffffffffff) + (uVar4 >> 0x33);
  local_120 = (uVar5 >> 0x33) * 0x13 + (uVar6 & 0x7ffffffffffff);
  <curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::pow22501
            (&local_f8,&local_120);
  local_88 = local_d8;
  local_98 = local_e8;
  uStack_94 = uStack_e4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  local_a8 = local_f8;
  uStack_a0 = uStack_f0;
  local_58 = local_b0;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  local_78 = local_d0;
  uStack_74 = uStack_cc;
  uStack_70 = uStack_c8;
  uStack_6c = uStack_c4;
  uVar7 = (*(code *)PTR_pow2k_0021a548)(local_d0,5);
  puVar1 = PTR_mul_0021a550;
  uVar7 = (*(code *)PTR_mul_0021a550)(uVar7,&local_78);
  (*(code *)puVar1)(uVar7,local_48);
  (*(code *)PTR_as_bytes_0021a558)();
  return param_1;
}


