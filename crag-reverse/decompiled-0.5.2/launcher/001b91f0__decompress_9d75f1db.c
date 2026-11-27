// 001b91f0 decompress

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <curve25519_dalek[8828c522c30c513]::edwards::CompressedEdwardsY>::decompress */

ulonglong * __rustcall
<curve25519_dalek[8828c522c30c513]::edwards::CompressedEdwardsY>::decompress(ulonglong *param_1)

{
  undefined1 auVar1 [12];
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar5;
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  char local_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  curve25519_dalek[8828c522c30c513]::edwards::decompress::step_1(&local_90);
  auStack_100._8_8_ = local_70;
  auStack_100._0_8_ = lStack_78;
  auStack_110._8_8_ = local_80;
  auStack_110._0_8_ = lStack_88;
  local_c8 = local_48;
  local_d8 = local_58;
  uStack_d0 = uStack_50;
  local_e8 = local_68;
  uStack_e0 = uStack_60;
  local_98 = local_18;
  local_a8 = local_28;
  uStack_a0 = uStack_20;
  local_b8 = local_38;
  uStack_b0 = uStack_30;
  if (local_40 != '\0') {
    bVar2 = (*(code *)PTR_<u8>_0021a368)();
    uVar3 = -(ulonglong)bVar2;
    uVar5 = _UNK_00114118 - local_80;
    auVar10._0_8_ = (_DAT_00114110 - lStack_88 & _DAT_00113e40) + (_DAT_00113bf0 - local_90 >> 0x33)
    ;
    auVar10._8_8_ = (uVar5 & _UNK_00113e48) + ((ulonglong)(_UNK_00113bf8 - lStack_88) >> 0x33);
    auVar6._8_4_ = (int)uVar3;
    auVar6._0_8_ = uVar3;
    auVar6._12_4_ = (int)(uVar3 >> 0x20);
    auVar10 = auVar10 & auVar6 | ~auVar6 & auStack_110;
    uVar8 = _DAT_00114110 - lStack_78;
    uVar9 = _UNK_00114118 - local_70;
    auVar1._4_8_ = uVar5;
    auVar1._0_4_ = (int)(uVar5 >> 0x20);
    auVar7._0_8_ = auVar1._0_8_ << 0x20;
    auVar7._8_4_ = (int)uVar8;
    auVar7._12_4_ = (int)(uVar8 >> 0x20);
    auVar4._0_8_ = ((auVar1._0_8_ & 0xffffffff) >> 0x13) + (_DAT_00113e40 & uVar8);
    auVar4._8_8_ = (auVar7._8_8_ >> 0x33) + (_UNK_00113e48 & uVar9);
    auVar7 = ~auVar6 & auStack_100 | auVar4 & auVar6;
    auStack_110._8_8_ = auVar10._8_8_;
    auStack_100._0_8_ = auVar7._0_8_;
    param_1[3] = auStack_110._8_8_;
    param_1[4] = auStack_100._0_8_;
    auStack_100._8_8_ = auVar7._8_8_;
    param_1[5] = auStack_100._8_8_;
    param_1[1] = ((uVar9 >> 0x33) * 0x13 + (0x7fffffffffed0 - local_90 & 0x7ffffffffffff) ^ local_90
                 ) & uVar3 ^ local_90;
    auStack_110._0_8_ = auVar10._0_8_;
    param_1[2] = auStack_110._0_8_;
    (*(code *)PTR_mul_0021a550)(local_90,&local_e8);
    param_1[10] = local_c8;
    param_1[8] = local_d8;
    param_1[9] = uStack_d0;
    param_1[6] = local_e8;
    param_1[7] = uStack_e0;
    param_1[0xb] = local_b8;
    param_1[0xc] = uStack_b0;
    param_1[0xd] = local_a8;
    param_1[0xe] = uStack_a0;
    param_1[0xf] = local_98;
  }
  *param_1 = (ulonglong)(local_40 != '\0');
  return param_1;
}


