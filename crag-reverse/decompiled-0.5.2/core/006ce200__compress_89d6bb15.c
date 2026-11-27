// 006ce200 compress

/* <curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>::compress */

undefined8 * __rustcall
<curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint>::compress
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined7 uStack_b0;
  byte bStack_a9;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  
  <curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::pow22501
            (local_a8,param_2 + 0x50);
  local_d8 = local_60;
  local_e8 = local_70;
  uStack_e0 = uStack_68;
  local_f8 = local_80;
  uStack_f4 = uStack_7c;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  uVar3 = (*(code *)PTR_pow2k_0079a600)(local_80,5,param_5,param_6,local_88);
  puVar1 = PTR_mul_0079a608;
  uVar3 = (*(code *)PTR_mul_0079a608)(uVar3,&local_f8);
  uVar3 = (*(code *)puVar1)(uVar3,local_58);
  (*(code *)puVar1)(uVar3,local_58);
  puVar1 = PTR_as_bytes_0079a610;
  (*(code *)PTR_as_bytes_0079a610)();
  (*(code *)puVar1)();
  cVar2 = (*(code *)PTR_<u8>_00799268)();
  *param_1 = local_c8;
  param_1[1] = uStack_c0;
  param_1[2] = local_b8;
  param_1[3] = CONCAT17(bStack_a9 ^ cVar2 << 7,uStack_b0);
  return param_1;
}


