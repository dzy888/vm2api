// 00207b70 write_slice

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <adler2[9e7ad1142a23cf13]::Adler32>::write_slice */

void __rustcall
<adler2[9e7ad1142a23cf13]::Adler32>::write_slice(ushort *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  uint7 uVar10;
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  uint5 uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar25;
  int iVar26;
  undefined1 auVar24 [16];
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar31;
  int iVar32;
  undefined1 auVar30 [16];
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar41;
  int iVar42;
  ulonglong uVar40;
  
  uVar21 = (uint)param_1[1];
  uVar18 = param_3 & 0x7ffffffffffffffc;
  uVar19 = (uint)param_3 & 3;
  uVar22 = (uVar18 / 0x56c0) * 0x56c0;
  auVar24._4_4_ = 0;
  uVar16 = (uint)*param_1;
  if (uVar22 < 0x56c0) {
    auVar24._8_4_ = 0;
    auVar24._12_4_ = 0;
    auVar30._12_4_ = 0;
    auVar30._8_4_ = 0;
    auVar30._4_4_ = 0;
    auVar24._0_4_ = 0;
    auVar30._0_4_ = 0;
  }
  else {
    auVar24 = (undefined1  [16])0x0;
    auVar30 = (undefined1  [16])0x0;
    lVar17 = param_2;
    uVar20 = uVar22;
    do {
      lVar23 = -0x56c0;
      do {
        uVar1 = *(undefined4 *)(lVar17 + 0x56c0 + lVar23);
        uVar10 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
        auVar2._7_5_ = 0;
        auVar2._0_7_ = uVar10;
        auVar2[0xc] = (char)((uint)uVar1 >> 0x18);
        uVar15 = CONCAT32(auVar2._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
        auVar11._5_8_ = 0;
        auVar11._0_5_ = uVar15;
        iVar34 = (int)uVar10;
        auVar3[4] = (char)((uint)uVar1 >> 8);
        auVar3._0_4_ = iVar34;
        auVar3[5] = 0;
        auVar3._6_7_ = SUB137(auVar11 << 0x40,6);
        iVar34 = iVar34 + auVar30._0_4_;
        iVar36 = auVar3._4_4_ + auVar30._4_4_;
        iVar38 = (int)uVar15 + auVar30._8_4_;
        iVar41 = (uint)(uint3)(auVar2._10_3_ >> 0x10) + auVar30._12_4_;
        iVar25 = auVar24._4_4_;
        iVar26 = auVar24._8_4_;
        iVar27 = auVar24._12_4_;
        uVar1 = *(undefined4 *)(lVar17 + 0x56c4 + lVar23);
        uVar10 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
        auVar4._7_5_ = 0;
        auVar4._0_7_ = uVar10;
        auVar4[0xc] = (char)((uint)uVar1 >> 0x18);
        uVar15 = CONCAT32(auVar4._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
        auVar12._5_8_ = 0;
        auVar12._0_5_ = uVar15;
        iVar28 = (int)uVar10;
        auVar5[4] = (char)((uint)uVar1 >> 8);
        auVar5._0_4_ = iVar28;
        auVar5[5] = 0;
        auVar5._6_7_ = SUB137(auVar12 << 0x40,6);
        iVar28 = iVar28 + iVar34;
        iVar31 = auVar5._4_4_ + iVar36;
        iVar32 = (int)uVar15 + iVar38;
        iVar33 = (uint)(uint3)(auVar4._10_3_ >> 0x10) + iVar41;
        uVar1 = *(undefined4 *)(lVar17 + 0x56c8 + lVar23);
        uVar10 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
        auVar6._7_5_ = 0;
        auVar6._0_7_ = uVar10;
        auVar6[0xc] = (char)((uint)uVar1 >> 0x18);
        uVar15 = CONCAT32(auVar6._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
        auVar13._5_8_ = 0;
        auVar13._0_5_ = uVar15;
        iVar35 = (int)uVar10;
        auVar7[4] = (char)((uint)uVar1 >> 8);
        auVar7._0_4_ = iVar35;
        auVar7[5] = 0;
        auVar7._6_7_ = SUB137(auVar13 << 0x40,6);
        iVar35 = iVar35 + iVar28;
        iVar37 = auVar7._4_4_ + iVar31;
        iVar39 = (int)uVar15 + iVar32;
        iVar42 = (uint)(uint3)(auVar6._10_3_ >> 0x10) + iVar33;
        uVar1 = *(undefined4 *)(lVar17 + 0x56cc + lVar23);
        uVar10 = (uint7)(ushort)uVar1 & 0xffffffffff00ff;
        auVar8._7_5_ = 0;
        auVar8._0_7_ = uVar10;
        auVar8[0xc] = (char)((uint)uVar1 >> 0x18);
        uVar15 = CONCAT32(auVar8._10_3_,(ushort)(byte)((uint)uVar1 >> 0x10));
        auVar14._5_8_ = 0;
        auVar14._0_5_ = uVar15;
        iVar29 = (int)uVar10;
        auVar9[4] = (char)((uint)uVar1 >> 8);
        auVar9._0_4_ = iVar29;
        auVar9[5] = 0;
        auVar9._6_7_ = SUB137(auVar14 << 0x40,6);
        auVar30._0_4_ = iVar29 + iVar35;
        auVar30._4_4_ = auVar9._4_4_ + iVar37;
        auVar30._8_4_ = (int)uVar15 + iVar39;
        auVar30._12_4_ = (uint)(uint3)(auVar8._10_3_ >> 0x10) + iVar42;
        auVar24._0_4_ = auVar24._0_4_ + iVar34 + iVar28 + iVar35 + auVar30._0_4_;
        auVar24._4_4_ = iVar25 + iVar36 + iVar31 + iVar37 + auVar30._4_4_;
        auVar24._8_4_ = iVar26 + iVar38 + iVar32 + iVar39 + auVar30._8_4_;
        auVar24._12_4_ = iVar27 + iVar41 + iVar33 + iVar42 + auVar30._12_4_;
        lVar23 = lVar23 + 0x10;
      } while (lVar23 != 0);
      lVar17 = lVar17 + 0x56c0;
      uVar20 = uVar20 - 0x56c0;
      uVar40 = auVar30._8_8_;
      auVar30._0_4_ =
           auVar30._0_4_ -
           (uint)((ulonglong)auVar30._0_4_ * (ulonglong)_DAT_00113a60 >> 0x2f) * _DAT_00113df0;
      auVar30._4_4_ =
           auVar30._4_4_ -
           (uint)((ulonglong)auVar30._4_4_ * (ulonglong)_DAT_00113a60 >> 0x2f) * _DAT_00113df0;
      auVar30._8_4_ =
           auVar30._8_4_ -
           (int)(((uVar40 & 0xffffffff) * (ulonglong)_UNK_00113a68 >> 0x2f) *
                (ulonglong)_UNK_00113df8);
      auVar30._12_4_ =
           auVar30._12_4_ -
           (uint)((ulonglong)auVar30._12_4_ * (ulonglong)_UNK_00113a68 >> 0x2f) * _UNK_00113df8;
      uVar40 = auVar24._8_8_;
      auVar24._0_4_ =
           auVar24._0_4_ -
           (uint)((ulonglong)auVar24._0_4_ * (ulonglong)_DAT_00113a60 >> 0x2f) * _DAT_00113df0;
      auVar24._4_4_ =
           auVar24._4_4_ -
           (uint)((ulonglong)auVar24._4_4_ * (ulonglong)_DAT_00113a60 >> 0x2f) * _DAT_00113df0;
      auVar24._8_4_ =
           auVar24._8_4_ -
           (int)(((uVar40 & 0xffffffff) * (ulonglong)_UNK_00113a68 >> 0x2f) *
                (ulonglong)_UNK_00113df8);
      auVar24._12_4_ =
           auVar24._12_4_ -
           (uint)((ulonglong)auVar24._12_4_ * (ulonglong)_UNK_00113a68 >> 0x2f) * _UNK_00113df8;
      uVar21 = (uVar21 + uVar16 * 0x56c0) % 0xfff1;
    } while (0x56bf < uVar20);
  }
  if (uVar18 % 0x56c0 != 0) {
    do {
      auVar30._0_4_ = auVar30._0_4_ + *(byte *)(param_2 + uVar22);
      auVar30._4_4_ = auVar30._4_4_ + *(byte *)(param_2 + 1 + uVar22);
      auVar30._8_4_ = auVar30._8_4_ + *(byte *)(param_2 + 2 + uVar22);
      auVar30._12_4_ = auVar30._12_4_ + *(byte *)(param_2 + 3 + uVar22);
      auVar24._0_4_ = auVar24._0_4_ + auVar30._0_4_;
      auVar24._4_4_ = auVar24._4_4_ + auVar30._4_4_;
      auVar24._8_4_ = auVar24._8_4_ + auVar30._8_4_;
      auVar24._12_4_ = auVar24._12_4_ + auVar30._12_4_;
      uVar22 = uVar22 + 4;
    } while (uVar18 != uVar22);
    auVar30._0_4_ = auVar30._0_4_ % 0xfff1;
    auVar30._4_4_ = auVar30._4_4_ % 0xfff1;
    auVar30._8_4_ = auVar30._8_4_ % 0xfff1;
    auVar30._12_4_ = auVar30._12_4_ % 0xfff1;
    auVar24._0_4_ = auVar24._0_4_ % 0xfff1;
    auVar24._4_4_ = auVar24._4_4_ % 0xfff1;
    auVar24._8_4_ = auVar24._8_4_ % 0xfff1;
    auVar24._12_4_ = auVar24._12_4_ % 0xfff1;
  }
  auVar24._4_4_ =
       (((uVar21 + (int)(uVar18 % 0x56c0) * uVar16) % 0xfff1 + (auVar24._4_4_ + auVar24._8_4_) * 4 +
        (0xfff1 - auVar30._12_4_) * 3) - (auVar30._4_4_ + auVar30._8_4_ * 2)) +
       (auVar24._12_4_ + auVar24._0_4_) * 4 + 0x2ffd3;
  uVar16 = auVar30._12_4_ + auVar30._8_4_ + auVar30._4_4_ + auVar30._0_4_ + uVar16;
  if ((param_3 & 3) != 0) {
    uVar16 = uVar16 + *(byte *)(param_2 + uVar18);
    auVar24._4_4_ = auVar24._4_4_ + uVar16;
    if (uVar19 != 1) {
      uVar16 = uVar16 + *(byte *)(param_2 + 1 + uVar18);
      auVar24._4_4_ = auVar24._4_4_ + uVar16;
      if (uVar19 != 2) {
        uVar16 = uVar16 + *(byte *)(param_2 + 2 + uVar18);
        auVar24._4_4_ = auVar24._4_4_ + uVar16;
      }
    }
  }
  *param_1 = (short)uVar16 + (short)(uVar16 / 0xfff1) * 0xf;
  param_1[1] = (short)auVar24._4_4_ + (short)(auVar24._4_4_ / 0xfff1) * 0xf;
  return;
}


