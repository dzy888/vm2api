// 001bb0c0 neg

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint as
   core[c0acaeba6ab4c2e0]::ops::arith::Neg>::neg */

void __rustcall
<curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint_as_core[c0acaeba6ab4c2e0]::ops::arith::Neg>
::neg(longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  lVar11 = _UNK_00114118;
  lVar10 = _DAT_00114110;
  uVar9 = _UNK_00113e48;
  uVar8 = _DAT_00113e40;
  lVar7 = _UNK_00113bf8;
  lVar6 = _DAT_00113bf0;
  uVar15 = _DAT_00113bf0 - *param_2;
  uVar16 = _UNK_00113bf8 - param_2[1];
  uVar14 = _UNK_00114118 - param_2[2];
  uVar17 = uVar14 & _UNK_00113e48;
  param_1[1] = (_DAT_00114110 - param_2[1] & _DAT_00113e40) + (uVar15 >> 0x33);
  param_1[2] = uVar17 + (uVar16 >> 0x33);
  lVar3 = param_2[4];
  uVar16 = lVar10 - param_2[3];
  auVar1._4_8_ = uVar14;
  auVar1._0_4_ = (int)(uVar14 >> 0x20);
  auVar12._0_8_ = auVar1._0_8_ << 0x20;
  auVar12._8_4_ = (int)uVar16;
  auVar12._12_4_ = (int)(uVar16 >> 0x20);
  *param_1 = ((ulonglong)(lVar11 - lVar3) >> 0x33) * 0x13 + (uVar15 & 0x7ffffffffffff);
  param_1[3] = ((auVar1._0_8_ & 0xffffffff) >> 0x13) + (uVar16 & uVar8);
  param_1[4] = (auVar12._8_8_ >> 0x33) + (lVar11 - lVar3 & uVar9);
  param_1[9] = param_2[9];
  lVar3 = param_2[5];
  lVar4 = param_2[6];
  lVar5 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = lVar5;
  param_1[5] = lVar3;
  param_1[6] = lVar4;
  lVar3 = param_2[0xb];
  lVar4 = param_2[0xc];
  lVar5 = param_2[0xd];
  param_1[10] = param_2[10];
  param_1[0xb] = lVar3;
  param_1[0xc] = lVar4;
  param_1[0xd] = lVar5;
  param_1[0xe] = param_2[0xe];
  lVar3 = param_2[0xf];
  lVar4 = param_2[0x10];
  uVar15 = lVar11 - param_2[0x11];
  param_1[0x10] = (lVar10 - param_2[0x10] & uVar8) + ((ulonglong)(lVar6 - lVar3) >> 0x33);
  param_1[0x11] = (uVar15 & uVar9) + ((ulonglong)(lVar7 - lVar4) >> 0x33);
  lVar4 = param_2[0x13];
  uVar14 = lVar10 - param_2[0x12];
  auVar2._4_8_ = uVar15;
  auVar2._0_4_ = (int)(uVar15 >> 0x20);
  auVar13._0_8_ = auVar2._0_8_ << 0x20;
  auVar13._8_4_ = (int)uVar14;
  auVar13._12_4_ = (int)(uVar14 >> 0x20);
  param_1[0xf] = ((ulonglong)(lVar11 - lVar4) >> 0x33) * 0x13 + (lVar6 - lVar3 & 0x7ffffffffffffU);
  param_1[0x12] = ((auVar2._0_8_ & 0xffffffff) >> 0x13) + (uVar8 & uVar14);
  param_1[0x13] = (auVar13._8_8_ >> 0x33) + (uVar9 & lVar11 - lVar4);
  return;
}


