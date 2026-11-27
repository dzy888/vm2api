// 006ea2c0 <&usize>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[6c98fd8553dbae28]::hash::random::RandomState as
   core[c0acaeba6ab4c2e0]::hash::BuildHasher>::hash_one::<&usize> */

ulonglong __rustcall
<std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>::
hash_one::<&usize>(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  undefined8 local_8;
  
  local_28 = *param_1;
  auVar7._0_8_ = local_28._0_8_;
  auVar7._8_4_ = local_28._0_4_;
  auVar7._12_4_ = local_28._4_4_;
  local_48 = auVar7 ^ _DAT_00183170;
  auVar8._0_8_ = local_28._8_8_;
  auVar8._8_4_ = local_28._8_4_;
  auVar8._12_4_ = local_28._12_4_;
  local_38 = auVar8 ^ _DAT_00182bf0;
  local_18 = (undefined1  [16])0x0;
  local_8 = 0;
  local_50 = *param_2;
  <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>::
  write(local_48,&local_50,8);
  uVar6 = local_18._0_8_ << 0x38 | local_18._8_8_;
  uVar2 = local_38._8_8_ ^ uVar6;
  uVar1 = local_48._0_8_ + local_38._0_8_;
  uVar4 = (local_38._0_8_ << 0xd | (ulonglong)local_38._0_8_ >> 0x33) ^ uVar1;
  uVar3 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ local_48._8_8_ + uVar2;
  uVar5 = local_48._8_8_ + uVar2 + uVar4;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar3;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar5;
  uVar2 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 ^ uVar6) + uVar4;
  uVar5 = ((uVar5 << 0x20 | uVar5 >> 0x20) ^ 0xff) + uVar2;
  uVar3 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar5;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = uVar1 + uVar3;
  uVar4 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar4;
  uVar4 = uVar4 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar4;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1 + uVar3;
  uVar1 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar4;
  uVar4 = uVar4 + uVar3;
  return (uVar4 << 0x20 | uVar4 >> 0x20) ^ (uVar3 << 0x11 | uVar3 >> 0x2f) ^
         (uVar1 << 0x15 | uVar1 >> 0x2b) ^ uVar4;
}


