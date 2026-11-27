// 006d4af0 aes256_encrypt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* aes[8e0128500682d16e]::soft::fixslice::aes256_encrypt */

undefined8 __rustcall
aes[8e0128500682d16e]::soft::fixslice::aes256_encrypt
          (undefined8 param_1,uint *param_2,longlong param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  uint *local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_58 = param_1;
  bitslice(local_a8,param_3,param_3 + 0x10,param_3 + 0x20,param_3 + 0x30);
  local_a8._4_4_ = param_2[1] ^ local_a8._4_4_;
  local_a8._0_4_ = *param_2 ^ local_a8._0_4_;
  local_a8._8_4_ = param_2[2] ^ local_a8._8_4_;
  local_a8._12_4_ = param_2[3] ^ local_a8._12_4_;
  local_98._4_4_ = param_2[5] ^ local_98._4_4_;
  local_98._0_4_ = param_2[4] ^ local_98._0_4_;
  local_98._8_4_ = param_2[6] ^ local_98._8_4_;
  local_98._12_4_ = param_2[7] ^ local_98._12_4_;
  local_88._4_4_ = param_2[9] ^ local_88._4_4_;
  local_88._0_4_ = param_2[8] ^ local_88._0_4_;
  local_88._8_4_ = param_2[10] ^ local_88._8_4_;
  local_88._12_4_ = param_2[0xb] ^ local_88._12_4_;
  local_78._8_8_ = *(ulonglong *)(param_2 + 0xe) ^ local_78._8_8_;
  local_78._0_8_ = *(ulonglong *)(param_2 + 0xc) ^ local_78._0_8_;
  lVar8 = 0;
  local_60 = param_2;
  while( true ) {
    sub_bytes(local_a8);
    mix_columns_1(local_a8);
    local_a8 = *(undefined1 (*) [16])(local_60 + lVar8 * 2 + 0x10) ^ local_a8;
    local_98 = *(undefined1 (*) [16])(local_60 + lVar8 * 2 + 0x14) ^ local_98;
    local_88 = *(undefined1 (*) [16])(local_60 + lVar8 * 2 + 0x18) ^ local_88;
    puVar1 = local_60 + lVar8 * 2 + 0x1c;
    local_78._0_8_ = CONCAT44(puVar1[1] ^ local_78._4_4_,*puVar1 ^ local_78._0_4_);
    local_78._8_4_ = puVar1[2] ^ local_78._8_4_;
    local_78._12_4_ = puVar1[3] ^ local_78._12_4_;
    if (lVar8 == 0x60) break;
    sub_bytes(local_a8);
    puVar2 = local_60;
    uVar11 = local_a8._0_8_ << 0x38 | (ulonglong)local_a8._0_8_ >> 8 & 0xff00ff00ff00ff00 |
             (local_a8._0_8_ << 0x28 | (ulonglong)local_a8._0_8_ >> 0x18) & 0xff00ff00ff00ff;
    uVar10 = local_a8._8_8_ << 0x38 | (ulonglong)local_a8._8_8_ >> 8 & 0xff00ff00ff00ff00 |
             (local_a8._8_8_ << 0x28 | (ulonglong)local_a8._8_8_ >> 0x18) & 0xff00ff00ff00ff;
    uVar9 = local_98._0_8_ << 0x38 | (ulonglong)local_98._0_8_ >> 8 & 0xff00ff00ff00ff00 |
            (local_98._0_8_ << 0x28 | (ulonglong)local_98._0_8_ >> 0x18) & 0xff00ff00ff00ff;
    uVar13 = local_98._8_8_ << 0x38 | (ulonglong)local_98._8_8_ >> 8 & 0xff00ff00ff00ff00 |
             (local_98._8_8_ << 0x28 | (ulonglong)local_98._8_8_ >> 0x18) & 0xff00ff00ff00ff;
    local_48 = local_88._0_8_;
    uVar7 = local_88._0_8_ << 0x38 | (ulonglong)local_88._0_8_ >> 8 & 0xff00ff00ff00ff00 |
            (local_88._0_8_ << 0x28 | (ulonglong)local_88._0_8_ >> 0x18) & 0xff00ff00ff00ff;
    local_40 = local_88._8_8_;
    local_38 = local_78._0_8_;
    local_50 = local_88._8_8_ << 0x38 | (ulonglong)local_88._8_8_ >> 8 & 0xff00ff00ff00ff00 |
               (local_88._8_8_ << 0x28 | (ulonglong)local_88._8_8_ >> 0x18) & 0xff00ff00ff00ff;
    uVar4 = local_78._0_8_ << 0x38 | (ulonglong)local_78._0_8_ >> 8 & 0xff00ff00ff00ff00 |
            (local_78._0_8_ << 0x28 | (ulonglong)local_78._0_8_ >> 0x18) & 0xff00ff00ff00ff;
    uVar6 = local_78._8_8_ << 0x38 | (ulonglong)local_78._8_8_ >> 8 & 0xff00ff00ff00ff00 |
            (local_78._8_8_ << 0x28 | (ulonglong)local_78._8_8_ >> 0x18) & 0xff00ff00ff00ff;
    uVar12 = local_a8._0_8_ ^ uVar11;
    local_78._8_8_ = local_78._8_8_ ^ uVar6;
    uVar5 = local_a8._8_8_ ^ uVar10;
    local_a8._8_8_ =
         uVar12 ^ uVar10 ^ local_78._8_8_ ^
         (uVar5 << 0x20 | uVar5 >> 0x20) ^ *(ulonglong *)(local_60 + lVar8 * 2 + 0x22);
    local_a8._0_8_ =
         uVar11 ^ local_78._8_8_ ^
         (uVar12 << 0x20 | uVar12 >> 0x20) ^ *(ulonglong *)(local_60 + lVar8 * 2 + 0x20);
    uVar11 = local_98._0_8_ ^ uVar9;
    uVar10 = local_98._8_8_ ^ uVar13;
    uVar12 = local_88._0_8_ ^ uVar7;
    local_98._8_8_ =
         uVar11 ^ uVar13 ^ local_78._8_8_ ^
         (uVar10 << 0x20 | uVar10 >> 0x20) ^ *(ulonglong *)(local_60 + lVar8 * 2 + 0x26);
    local_98._0_8_ =
         uVar5 ^ uVar9 ^
         (uVar11 << 0x20 | uVar11 >> 0x20) ^ *(ulonglong *)(local_60 + lVar8 * 2 + 0x24);
    uVar9 = local_88._8_8_ ^ local_50;
    local_88._8_8_ =
         uVar12 ^ local_50 ^
         (uVar9 << 0x20 | uVar9 >> 0x20) ^ *(ulonglong *)(local_60 + lVar8 * 2 + 0x2a);
    local_88._0_8_ =
         uVar10 ^ uVar7 ^ local_78._8_8_ ^
         (uVar12 << 0x20 | uVar12 >> 0x20) ^ *(ulonglong *)(local_60 + lVar8 * 2 + 0x28);
    uVar5 = local_78._0_8_ ^ uVar4;
    local_78._0_8_ =
         uVar9 ^ uVar4 ^
         (uVar5 << 0x20 | uVar5 >> 0x20) ^ *(ulonglong *)(local_60 + lVar8 * 2 + 0x2c);
    local_78._8_8_ =
         uVar5 ^ uVar6 ^
         (local_78._8_8_ << 0x20 | (ulonglong)local_78._8_8_ >> 0x20) ^
         *(ulonglong *)(local_60 + lVar8 * 2 + 0x2e);
    sub_bytes(local_a8);
    mix_columns_3(local_a8);
    puVar1 = puVar2 + lVar8 * 2 + 0x30;
    local_a8._4_4_ = puVar1[1] ^ local_a8._4_4_;
    local_a8._0_4_ = *puVar1 ^ local_a8._0_4_;
    local_a8._8_4_ = puVar1[2] ^ local_a8._8_4_;
    local_a8._12_4_ = puVar1[3] ^ local_a8._12_4_;
    puVar1 = puVar2 + lVar8 * 2 + 0x34;
    local_98._4_4_ = puVar1[1] ^ local_98._4_4_;
    local_98._0_4_ = *puVar1 ^ local_98._0_4_;
    local_98._8_4_ = puVar1[2] ^ local_98._8_4_;
    local_98._12_4_ = puVar1[3] ^ local_98._12_4_;
    puVar1 = puVar2 + lVar8 * 2 + 0x38;
    local_88._4_4_ = puVar1[1] ^ local_88._4_4_;
    local_88._0_4_ = *puVar1 ^ local_88._0_4_;
    local_88._8_4_ = puVar1[2] ^ local_88._8_4_;
    local_88._12_4_ = puVar1[3] ^ local_88._12_4_;
    local_78._0_8_ = *(ulonglong *)(puVar2 + lVar8 * 2 + 0x3c) ^ local_78._0_8_;
    local_78._8_8_ = *(ulonglong *)((longlong)(puVar2 + lVar8 * 2 + 0x3c) + 8) ^ local_78._8_8_;
    sub_bytes(local_a8);
    uVar4 = local_a8._0_8_ << 0x30 | (ulonglong)local_a8._0_8_ >> 0x10;
    uVar5 = local_78._8_8_ << 0x30 | (ulonglong)local_78._8_8_ >> 0x10;
    uVar11 = local_a8._0_8_ ^ uVar4;
    local_78._8_8_ = local_78._8_8_ ^ uVar5;
    uVar6 = local_a8._8_8_ << 0x30 | (ulonglong)local_a8._8_8_ >> 0x10;
    uVar10 = local_a8._8_8_ ^ uVar6;
    uVar7 = local_98._0_8_ << 0x30 | (ulonglong)local_98._0_8_ >> 0x10;
    uVar9 = local_98._0_8_ ^ uVar7;
    local_a8._8_8_ =
         uVar11 ^ uVar6 ^ local_78._8_8_ ^
         (uVar10 << 0x20 | uVar10 >> 0x20) ^ *(ulonglong *)(puVar2 + lVar8 * 2 + 0x42);
    local_a8._0_8_ =
         uVar4 ^ local_78._8_8_ ^
         (uVar11 << 0x20 | uVar11 >> 0x20) ^ *(ulonglong *)(puVar2 + lVar8 * 2 + 0x40);
    uVar12 = local_98._8_8_ << 0x30 | (ulonglong)local_98._8_8_ >> 0x10;
    uVar11 = local_88._0_8_ << 0x30 | (ulonglong)local_88._0_8_ >> 0x10;
    uVar6 = local_98._8_8_ ^ uVar12;
    uVar13 = local_88._8_8_ << 0x30 | (ulonglong)local_88._8_8_ >> 0x10;
    uVar4 = local_88._0_8_ ^ uVar11;
    local_98._8_8_ =
         uVar9 ^ uVar12 ^ local_78._8_8_ ^
         (uVar6 << 0x20 | uVar6 >> 0x20) ^ *(ulonglong *)(puVar2 + lVar8 * 2 + 0x46);
    local_98._0_8_ =
         uVar10 ^ uVar7 ^
         (uVar9 << 0x20 | uVar9 >> 0x20) ^ *(ulonglong *)(puVar2 + lVar8 * 2 + 0x44);
    uVar9 = local_78._0_8_ << 0x30 | (ulonglong)local_78._0_8_ >> 0x10;
    uVar7 = local_88._8_8_ ^ uVar13;
    local_78._0_8_ = local_78._0_8_ ^ uVar9;
    local_88._8_8_ =
         uVar4 ^ uVar13 ^
         (uVar7 << 0x20 | uVar7 >> 0x20) ^ *(ulonglong *)(puVar2 + lVar8 * 2 + 0x4a);
    local_88._0_8_ =
         uVar6 ^ uVar11 ^ local_78._8_8_ ^
         (uVar4 << 0x20 | uVar4 >> 0x20) ^ *(ulonglong *)(puVar2 + lVar8 * 2 + 0x48);
    local_78._8_8_ =
         local_78._0_8_ ^ uVar5 ^
         (local_78._8_8_ << 0x20 | (ulonglong)local_78._8_8_ >> 0x20) ^
         *(ulonglong *)(puVar2 + lVar8 * 2 + 0x4e);
    local_78._0_8_ =
         uVar7 ^ uVar9 ^
         (local_78._0_8_ << 0x20 | (ulonglong)local_78._0_8_ >> 0x20) ^
         *(ulonglong *)(puVar2 + lVar8 * 2 + 0x4c);
    lVar8 = lVar8 + 0x20;
  }
  auVar18._0_8_ = local_a8._0_8_ >> 8;
  auVar18._8_8_ = local_a8._8_8_ >> 8;
  auVar19 = (auVar18 ^ local_a8) & _DAT_00184200;
  auVar21._0_8_ = auVar19._0_8_ << 8;
  auVar21._8_8_ = auVar19._8_8_ << 8;
  local_a8 = (auVar21 | auVar19) ^ local_a8;
  auVar16._0_8_ = local_98._0_8_ >> 8;
  auVar16._8_8_ = local_98._8_8_ >> 8;
  auVar19 = (auVar16 ^ local_98) & _DAT_00184200;
  auVar20._0_8_ = auVar19._0_8_ << 8;
  auVar20._8_8_ = auVar19._8_8_ << 8;
  local_98 = (auVar20 | auVar19) ^ local_98;
  auVar14._0_8_ = local_88._0_8_ >> 8;
  auVar14._8_8_ = local_88._8_8_ >> 8;
  auVar19 = (auVar14 ^ local_88) & _DAT_00184200;
  auVar17._0_8_ = auVar19._0_8_ << 8;
  auVar17._8_8_ = auVar19._8_8_ << 8;
  local_88 = (auVar17 | auVar19) ^ local_88;
  auVar19._0_8_ = (ulonglong)local_78._0_8_ >> 8;
  auVar19._8_8_ = local_78._8_8_ >> 8;
  auVar19 = (auVar19 ^ local_78) & _DAT_00184200;
  auVar15._0_8_ = auVar19._0_8_ << 8;
  auVar15._8_8_ = auVar19._8_8_ << 8;
  local_78 = (auVar15 | auVar19) ^ local_78;
  sub_bytes(local_a8);
  uVar3 = local_58;
  local_a8._4_4_ = local_60[0xe1] ^ local_a8._4_4_;
  local_a8._0_4_ = local_60[0xe0] ^ local_a8._0_4_;
  local_a8._8_4_ = local_60[0xe2] ^ local_a8._8_4_;
  local_a8._12_4_ = local_60[0xe3] ^ local_a8._12_4_;
  local_98._4_4_ = local_60[0xe5] ^ local_98._4_4_;
  local_98._0_4_ = local_60[0xe4] ^ local_98._0_4_;
  local_98._8_4_ = local_60[0xe6] ^ local_98._8_4_;
  local_98._12_4_ = local_60[0xe7] ^ local_98._12_4_;
  local_88._4_4_ = local_60[0xe9] ^ local_88._4_4_;
  local_88._0_4_ = local_60[0xe8] ^ local_88._0_4_;
  local_88._8_4_ = local_60[0xea] ^ local_88._8_4_;
  local_88._12_4_ = local_60[0xeb] ^ local_88._12_4_;
  local_78._4_4_ = local_60[0xed] ^ local_78._4_4_;
  local_78._0_4_ = local_60[0xec] ^ local_78._0_4_;
  local_78._8_4_ = local_60[0xee] ^ local_78._8_4_;
  local_78._12_4_ = local_60[0xef] ^ local_78._12_4_;
  inv_bitslice(local_58,local_a8);
  return uVar3;
}


