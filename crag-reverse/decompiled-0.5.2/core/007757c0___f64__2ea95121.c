// 007757c0 <f64>

/* core[c0acaeba6ab4c2e0]::num::imp::dec2flt::lemire::compute_float::<f64> */

undefined1  [16] __rustcall
core[c0acaeba6ab4c2e0]::num::imp::dec2flt::lemire::compute_float::<f64>
          (longlong param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_1 < -0x156 || param_2 == 0) {
LAB_007757d4:
    return ZEXT816(0);
  }
  if (param_1 < 0x135) {
    uVar11 = 0x3f;
    if (param_2 != 0) {
      for (; param_2 >> uVar11 == 0; uVar11 = uVar11 - 1) {
      }
    }
    param_2 = param_2 << ((byte)(uVar11 ^ 0x3f) & 0x3f);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(PTR_POWER_OF_FIVE_128_0079b350 + param_1 * 0x10 + 0x1560);
    auVar1 = auVar1 * auVar3;
    if ((~auVar1._8_4_ & 0x1ff) == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(PTR_POWER_OF_FIVE_128_0079b350 + param_1 * 0x10 + 0x1568);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = SUB168(auVar2 * auVar4,8);
      auVar1 = auVar1 + auVar5;
    }
    uVar8 = auVar1._8_8_;
    if ((0x52 < param_1 + 0x1bU) && (auVar1._0_8_ == 0xffffffffffffffff)) {
      return ZEXT816(0xffffffff) << 0x40;
    }
    bVar7 = (char)-((longlong)uVar8 >> 0x3f) + 9;
    uVar6 = uVar8 >> (bVar7 & 0x3f);
    iVar9 = (int)-((longlong)uVar8 >> 0x3f) +
            (((int)param_1 * 0x3526a >> 0x10) - (int)(uVar11 ^ 0x3f));
    uVar10 = iVar9 + 0x3f;
    if ((int)uVar10 < -0x3fe) {
      if (0xfffffbc2 < uVar10) {
        bVar7 = 2 - (char)uVar10;
        uVar11 = (uVar6 >> (bVar7 & 0x3f)) +
                 (ulonglong)((uVar6 >> ((ulonglong)bVar7 & 0x3f) & 1) != 0);
        auVar12._0_8_ = uVar11 >> 1;
        auVar12[8] = uVar11 >> 0x35 != 0;
        auVar12._9_7_ = 0;
        return auVar12;
      }
      goto LAB_007757d4;
    }
    uVar11 = uVar6 & 0xfffffffffffffc;
    if (uVar6 << (bVar7 & 0x3f) != uVar8 || ((uint)uVar6 & 3) != 1) {
      uVar11 = uVar6;
    }
    if (1 < auVar1._0_8_) {
      uVar11 = uVar6;
    }
    if (0x1b < param_1 + 4U) {
      uVar11 = uVar6;
    }
    uVar11 = ((uint)uVar11 & 1) + uVar11;
    uVar8 = uVar11 >> 0x36;
    uVar10 = (iVar9 - (uint)(uVar8 == 0)) + 0x43f;
    if (uVar10 < 0x7ff) {
      uVar6 = 0;
      if (uVar8 == 0) {
        uVar6 = uVar11 >> 1 & 0x7fefffffffffffff;
      }
      auVar13._8_4_ = uVar10;
      auVar13._0_8_ = uVar6;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
  return ZEXT816(0x7ff) << 0x40;
}


