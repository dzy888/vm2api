// 00724800 write_to_zmij_buffer

/* <f64 as zmij[d3c5782749dc14a3]::private::Sealed>::write_to_zmij_buffer */

undefined1 * __rustcall
<f64_as_zmij[d3c5782749dc14a3]::private::Sealed>::write_to_zmij_buffer
          (ulonglong param_1,undefined1 *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ushort uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  ulonglong uVar24;
  char cVar25;
  int iVar26;
  uint uVar27;
  undefined2 *puVar28;
  undefined1 *puVar29;
  undefined4 *puVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  ulonglong uVar34;
  int iVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined8 uVar39;
  longlong lVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  uVar34 = param_1 & 0xfffffffffffff;
  *param_2 = 0x2d;
  puVar28 = (undefined2 *)(param_2 + -((longlong)param_1 >> 0x3f));
  uVar24 = param_1 >> 0x34 & 0x7ff;
  if (uVar24 == 0) {
    if (uVar34 == 0) {
      *puVar28 = 0x2e30;
      *(undefined1 *)(puVar28 + 1) = 0x30;
      return (undefined1 *)((longlong)puVar28 + 3);
    }
    uVar36 = 0xfffffebc;
    uVar34 = uVar34 << (zmij[d3c5782749dc14a3]::STATIC_DATA[0x71] & 0x3f);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = zmij[d3c5782749dc14a3]::STATIC_DATA._17088_8_;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar34;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = zmij[d3c5782749dc14a3]::STATIC_DATA._17096_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = SUB168(auVar44 * auVar14,8);
    auVar43 = auVar43 * auVar13 + auVar19 >> 6;
    uVar24 = auVar43._0_8_;
    uVar34 = ((ulonglong)zmij[d3c5782749dc14a3]::STATIC_DATA._17088_8_ >>
             (7 - zmij[d3c5782749dc14a3]::STATIC_DATA[0x71] & 0x3f)) +
             (ulonglong)(~(uint)param_1 & 1);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar24;
    lVar37 = 2;
    if (uVar24 != 0x4000000000000000) {
      lVar37 = SUB168(auVar5 * ZEXT816(10),8) +
               (ulonglong)(0x7ffffffffffffff9 < SUB168(auVar5 * ZEXT816(10),0));
    }
    if (uVar24 < uVar34) {
      lVar37 = 0;
    }
    if (CARRY8(uVar34,uVar24)) {
      lVar37 = 0;
    }
    uVar24 = lVar37 + (auVar43._8_8_ + (ulonglong)CARRY8(uVar24,uVar34)) * 10;
    if (uVar24 < 1000000000000000) {
      do {
        uVar24 = uVar24 * 10;
        uVar36 = uVar36 - 1;
      } while ((longlong)uVar24 < 1000000000000000);
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar24;
    uVar34 = SUB168(auVar6 * ZEXT816(0x199999999999999a),8);
    uVar24 = uVar24 + uVar34 * -10;
    bVar33 = uVar24 != 0;
  }
  else {
    iVar26 = (int)uVar24 + -0x433;
    iVar35 = iVar26 * 0x4d105;
    if (uVar34 == 0) {
      uVar36 = iVar35 + -0x20000 >> 0x14;
      cVar25 = (char)(~uVar36 * 0x3526b >> 0x10) + (char)iVar26;
      uVar34 = (ulonglong)(uVar36 * -2 + 0x248);
      uVar24 = 0x10000000000000 << (cVar25 + 7U & 0x3f);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(zmij[d3c5782749dc14a3]::STATIC_DATA + uVar34 * 8 + 0x1c40);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar24;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar24;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *(ulonglong *)(zmij[d3c5782749dc14a3]::STATIC_DATA + uVar34 * 8 + 0x1c48);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = SUB168(auVar8 * auVar16,8);
      auVar43 = auVar7 * auVar15 + auVar20 >> 6;
      uVar38 = auVar43._0_8_;
      uVar32 = *(ulonglong *)(zmij[d3c5782749dc14a3]::STATIC_DATA + uVar34 * 8 + 0x1c40) >>
               (-cVar25 & 0x3fU);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar32;
      uVar34 = SUB168(auVar43 + auVar21,8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar38;
      uVar31 = SUB164(auVar9 * ZEXT816(10),8) +
               (uint)(0x8000000000000000 < SUB168(auVar9 * ZEXT816(10),0));
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar38 - (uVar32 >> 1);
      uVar27 = SUB164(auVar10 * ZEXT816(10),8) + (uint)(SUB168(auVar10 * ZEXT816(10),0) != 0);
      if (uVar27 < uVar31) {
        uVar27 = uVar31;
      }
      uVar24 = (ulonglong)uVar27;
      bVar33 = CARRY8(uVar32,uVar38) || uVar38 < uVar32 >> 1;
    }
    else {
      uVar36 = iVar35 >> 0x14;
      lVar37 = (longlong)(int)(uVar36 * -2 + 0x248);
      uVar34 = uVar34 + 0x10000000000000 <<
               (zmij[d3c5782749dc14a3]::STATIC_DATA[uVar24 + 0x70] & 0x3f);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(zmij[d3c5782749dc14a3]::STATIC_DATA + lVar37 * 8 + 0x1c40);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(zmij[d3c5782749dc14a3]::STATIC_DATA + lVar37 * 8 + 0x1c48);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = SUB168(auVar3 * auVar12,8);
      auVar43 = auVar2 * auVar11 + auVar18 >> 6;
      uVar32 = auVar43._0_8_;
      uVar38 = (*(ulonglong *)(zmij[d3c5782749dc14a3]::STATIC_DATA + lVar37 * 8 + 0x1c40) >>
               (7 - zmij[d3c5782749dc14a3]::STATIC_DATA[uVar24 + 0x70] & 0x3f)) +
               (ulonglong)(~(uint)param_1 & 1);
      uVar34 = auVar43._8_8_ + (ulonglong)CARRY8(uVar38,uVar32);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar32;
      uVar24 = 2;
      if (uVar32 != 0x4000000000000000) {
        uVar24 = (ulonglong)
                 (byte)(SUB161(auVar4 * ZEXT816(10),8) +
                       (0x7ffffffffffffff9 < SUB168(auVar4 * ZEXT816(10),0)));
      }
      bVar33 = CARRY8(uVar38,uVar32) || uVar32 < uVar38;
    }
    bVar33 = (bool)(bVar33 ^ 1);
  }
  bVar1 = 999999999999999 < uVar34;
  uVar32 = (ulonglong)bVar1;
  uVar31 = uVar36 + bVar1 + 0xf;
  uVar38 = uVar34 / 100000000 & 0xffffffff;
  lVar37 = ((zmij[d3c5782749dc14a3]::STATIC_DATA._64_8_ & 0xffffffff) * (uVar34 % 100000000) >> 0x28
           ) * (ulonglong)(uint)zmij[d3c5782749dc14a3]::STATIC_DATA._80_4_ + uVar34 % 100000000;
  lVar42 = ((zmij[d3c5782749dc14a3]::STATIC_DATA._72_8_ & 0xffffffff) * uVar38 >> 0x28) *
           (ulonglong)(uint)zmij[d3c5782749dc14a3]::STATIC_DATA._88_4_ + uVar38;
  auVar40._4_4_ = (int)lVar42;
  auVar40._0_4_ = (int)((ulonglong)lVar42 >> 0x20);
  auVar40._8_4_ = (int)((ulonglong)lVar37 >> 0x20);
  auVar40._12_4_ = (int)lVar37;
  auVar43 = pmulhuw((undefined1  [16])zmij[d3c5782749dc14a3]::STATIC_DATA._0_16_,auVar40);
  auVar41._0_2_ = auVar43._0_2_ >> 3;
  auVar41._2_2_ = auVar43._2_2_ >> 3;
  auVar41._4_2_ = auVar43._4_2_ >> 3;
  auVar41._6_2_ = auVar43._6_2_ >> 3;
  auVar41._8_2_ = auVar43._8_2_ >> 3;
  auVar41._10_2_ = auVar43._10_2_ >> 3;
  auVar41._12_2_ = auVar43._12_2_ >> 3;
  auVar41._14_2_ = auVar43._14_2_ >> 3;
  uVar27 = (uint)(ushort)((short)lVar42 - zmij[d3c5782749dc14a3]::STATIC_DATA._36_2_ * auVar41._4_2_
                         );
  uVar39 = CONCAT26((short)((ulonglong)lVar37 >> 0x30) -
                    zmij[d3c5782749dc14a3]::STATIC_DATA._42_2_ * auVar41._10_2_,
                    CONCAT24((short)((ulonglong)lVar37 >> 0x20) -
                             zmij[d3c5782749dc14a3]::STATIC_DATA._40_2_ * auVar41._8_2_,uVar27));
  auVar23._8_2_ = (short)lVar37 - zmij[d3c5782749dc14a3]::STATIC_DATA._44_2_ * auVar41._12_2_;
  auVar23._0_8_ = uVar39;
  auVar23._10_2_ =
       (short)((ulonglong)lVar37 >> 0x10) -
       zmij[d3c5782749dc14a3]::STATIC_DATA._46_2_ * auVar41._14_2_;
  auVar22._2_4_ = uVar27 << 0x10;
  auVar22._0_2_ =
       (short)((ulonglong)lVar42 >> 0x20) -
       zmij[d3c5782749dc14a3]::STATIC_DATA._32_2_ * auVar41._0_2_;
  auVar22._6_4_ = (int)((ulonglong)uVar39 >> 0x20) << 0x10;
  auVar22._10_4_ = auVar23._8_4_ << 0x10;
  auVar22._14_2_ = 0;
  auVar41 = auVar22 << 0x10 | auVar41;
  auVar43 = pmulhuw(auVar41,(undefined1  [16])zmij[d3c5782749dc14a3]::STATIC_DATA._16_16_);
  auVar44 = psllw(auVar41,8);
  auVar45._0_2_ = auVar44._0_2_ - auVar43._0_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._48_2_;
  auVar45._2_2_ = auVar44._2_2_ - auVar43._2_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._50_2_;
  auVar45._4_2_ = auVar44._4_2_ - auVar43._4_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._52_2_;
  auVar45._6_2_ = auVar44._6_2_ - auVar43._6_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._54_2_;
  auVar45._8_2_ = auVar44._8_2_ - auVar43._8_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._56_2_;
  auVar45._10_2_ = auVar44._10_2_ - auVar43._10_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._58_2_;
  auVar45._12_2_ = auVar44._12_2_ - auVar43._12_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._60_2_;
  auVar45._14_2_ = auVar44._14_2_ - auVar43._14_2_ * zmij[d3c5782749dc14a3]::STATIC_DATA._62_2_;
  auVar46[0] = -('\0' < (char)auVar45._0_2_);
  auVar46[1] = -('\0' < (char)((ushort)auVar45._0_2_ >> 8));
  auVar46[2] = -('\0' < (char)auVar45._2_2_);
  auVar46[3] = -('\0' < (char)((ushort)auVar45._2_2_ >> 8));
  auVar46[4] = -('\0' < (char)auVar45._4_2_);
  auVar46[5] = -('\0' < (char)((ushort)auVar45._4_2_ >> 8));
  auVar46[6] = -('\0' < (char)auVar45._6_2_);
  auVar46[7] = -('\0' < (char)((ushort)auVar45._6_2_ >> 8));
  auVar46[8] = -('\0' < (char)auVar45._8_2_);
  auVar46[9] = -('\0' < (char)((ushort)auVar45._8_2_ >> 8));
  auVar46[10] = -('\0' < (char)auVar45._10_2_);
  auVar46[0xb] = -('\0' < (char)((ushort)auVar45._10_2_ >> 8));
  auVar46[0xc] = -('\0' < (char)auVar45._12_2_);
  auVar46[0xd] = -('\0' < (char)((ushort)auVar45._12_2_ >> 8));
  auVar46[0xe] = -('\0' < (char)auVar45._14_2_);
  auVar46[0xf] = -('\0' < (char)((ushort)auVar45._14_2_ >> 8));
  uVar17 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
  uVar27 = 0x1f;
  if (uVar17 != 0) {
    for (; uVar17 >> uVar27 == 0; uVar27 = uVar27 - 1) {
    }
  }
  *(undefined1 (*) [16])((longlong)puVar28 + uVar32) =
       auVar45 | (undefined1  [16])zmij[d3c5782749dc14a3]::STATIC_DATA._96_16_;
  cVar25 = (char)uVar24 + '0';
  uVar39 = CONCAT71((int7)(uVar24 >> 8),cVar25);
  uVar24 = 0x11;
  if (!bVar33) {
    uVar24 = (ulonglong)((uVar27 ^ 0xffffffe0) + 0x21);
  }
  *(char *)((longlong)puVar28 + uVar32 + 0x10) = cVar25;
  lVar37 = uVar24 + uVar32;
  uVar34 = lVar37 - 1;
  if (uVar36 + bVar1 + 0x14 < 0x15) {
    if ((int)uVar31 < (int)lVar37 + -2) {
      if ((int)uVar31 < 0) {
        uVar39 = (*(code *)PTR_memmove_00799258)(uVar39,uVar34);
        (*(code *)PTR_memset_00799090)(uVar39,(ulonglong)(1 - uVar31));
        *(undefined1 *)((longlong)puVar28 + 1) = 0x2e;
        puVar29 = (undefined1 *)((longlong)puVar28 + uVar34 + (1 - uVar31));
      }
      else {
        (*(code *)PTR_memmove_00799258)(uVar39,(ulonglong)uVar31 + 1);
        *(undefined1 *)((longlong)puVar28 + (ulonglong)uVar31 + 1) = 0x2e;
        puVar29 = (undefined1 *)((longlong)puVar28 + uVar24 + uVar32);
      }
    }
    else {
      uVar39 = (*(code *)PTR_memmove_00799258)(uVar39,uVar34);
      lVar37 = (longlong)(int)uVar31;
      (*(code *)PTR_memset_00799090)(uVar39,(lVar37 + 3) - uVar34);
      *(undefined1 *)((longlong)puVar28 + lVar37 + 1) = 0x2e;
      puVar29 = (undefined1 *)((longlong)puVar28 + lVar37 + 3);
    }
  }
  else {
    *(undefined1 *)puVar28 = *(undefined1 *)((longlong)puVar28 + 1);
    *(undefined1 *)((longlong)puVar28 + 1) = 0x2e;
    puVar30 = (undefined4 *)((longlong)puVar28 + (lVar37 - (ulonglong)(uVar34 < 2)));
    uVar24 = *(ulonglong *)
              (zmij[d3c5782749dc14a3]::STATIC_DATA + (longlong)(int)uVar31 * 8 + 0x1290);
    *puVar30 = (int)uVar24;
    *(char *)(puVar30 + 1) = (char)(uVar24 >> 0x20);
    puVar29 = (undefined1 *)((longlong)puVar30 + (uVar24 >> 0x30));
  }
  return puVar29;
}


