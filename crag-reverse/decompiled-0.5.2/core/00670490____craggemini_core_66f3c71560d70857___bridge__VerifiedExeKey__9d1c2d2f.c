// 00670490 <&craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[6c98fd8553dbae28]::hash::random::RandomState as
   core[c0acaeba6ab4c2e0]::hash::BuildHasher>::hash_one::<&craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>
    */

ulonglong __rustcall
<std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>::
hash_one::<&craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>
          (undefined1 (*param_1) [16],longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_38 = *param_1;
  auVar7._0_8_ = local_38._0_8_;
  auVar7._8_4_ = local_38._0_4_;
  auVar7._12_4_ = local_38._4_4_;
  local_58 = auVar7 ^ _DAT_00183170;
  auVar8._0_8_ = local_38._8_8_;
  auVar8._8_4_ = local_38._8_4_;
  auVar8._12_4_ = local_38._12_4_;
  local_48 = auVar8 ^ _DAT_00182bf0;
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  local_60 = *(undefined8 *)(param_2 + 0x18);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,8);
  local_60 = *(undefined8 *)(param_2 + 0x20);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,8);
  local_60 = *(undefined8 *)(param_2 + 0x28);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,8);
  local_60 = *(undefined8 *)(param_2 + 0x30);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,8);
  local_60 = *(undefined8 *)(param_2 + 0x38);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,8);
  local_60 = *(undefined8 *)(param_2 + 0x40);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,8);
  local_60 = *(undefined8 *)(param_2 + 0x48);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,8);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_60 = CONCAT71(local_60._1_7_,0xff);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_58,&local_60,1);
  uVar6 = local_28._0_8_ << 0x38 | local_28._8_8_;
  uVar2 = local_48._8_8_ ^ uVar6;
  uVar1 = local_58._0_8_ + local_48._0_8_;
  uVar4 = (local_48._0_8_ << 0xd | (ulonglong)local_48._0_8_ >> 0x33) ^ uVar1;
  uVar3 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ local_58._8_8_ + uVar2;
  uVar5 = local_58._8_8_ + uVar2 + uVar4;
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


