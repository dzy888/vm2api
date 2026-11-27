// 00520370 digest

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>::digest */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>::digest
          (undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  short sVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined3 uVar14;
  undefined3 uVar15;
  uint uVar16;
  undefined5 uVar17;
  undefined5 uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  byte bVar27;
  byte bVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong extraout_RDX;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulonglong local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  byte local_100;
  undefined4 local_ff;
  undefined2 local_fb;
  undefined1 local_f9;
  byte local_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  char cStack_f2;
  char cStack_f1;
  byte bStack_f0;
  char cStack_ef;
  char cStack_ee;
  char cStack_ed;
  char cStack_ec;
  char cStack_eb;
  char cStack_ea;
  char cStack_e9;
  byte local_e8;
  char cStack_e7;
  char cStack_e6;
  char cStack_e5;
  char cStack_e4;
  char cStack_e3;
  char cStack_e2;
  char cStack_e1;
  byte bStack_e0;
  char cStack_df;
  char cStack_de;
  char cStack_dd;
  char cStack_dc;
  char cStack_db;
  char cStack_da;
  char cStack_d9;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  byte local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  uVar25 = _UNK_0018cff8;
  uVar24 = _DAT_0018cff0;
  uVar23 = _UNK_0018cfe8;
  uVar38 = _DAT_0018cfe0;
  uVar33 = *(ulonglong *)(param_2 + 0x10);
  local_80 = param_1;
  if (uVar33 == 5) {
    uVar31 = (byte)(*(uint **)(param_2 + 8))[1] ^ 0x6c | **(uint **)(param_2 + 8) ^ 0x65646f6d;
    param_4 = (ulonglong)uVar31;
    uVar33 = (ulonglong)(uVar31 == 0) * 4 + 5;
  }
  else {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    local_100 = 0;
    if (0x3f < uVar33) {
      uVar31 = (uint)uVar33 & 0x3f;
      local_148 = uVar33 >> 6;
      uVar37 = (*(code *)PTR_compress256_00799158)(param_4,local_148);
      uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,(ulonglong)uVar31);
      local_100 = (byte)uVar31;
      uVar33 = (ulonglong)uVar31;
      goto joined_r0x005204df;
    }
  }
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uVar37 = (*(code *)PTR_memcpy_00799008)(param_4,uVar33);
  local_100 = (byte)uVar33;
joined_r0x005204df:
  if (uVar33 == 0x3f) {
    uStack_108 = uStack_108 & 0xffffffffffffff;
    local_148 = local_148 + 1;
    (*(code *)PTR_compress256_00799158)(uVar37,1);
    local_100 = 0;
  }
  else {
    *(undefined1 *)((longlong)&uStack_140 + uVar33) = 0;
    local_100 = (char)uVar33 + 1;
  }
  uVar37 = ::<str>::trim_matches::<<char>::is_whitespace>
                     (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  uVar33 = (ulonglong)local_100;
  uVar29 = 0x40 - uVar33;
  uVar32 = extraout_RDX - uVar29;
  if (extraout_RDX < uVar29) {
    uVar37 = (*(code *)PTR_memcpy_00799008)();
    uVar33 = extraout_RDX + uVar33;
  }
  else {
    if (uVar33 == 0) {
      uVar32 = extraout_RDX;
    }
    else {
      uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,uVar29);
      local_148 = local_148 + 1;
      uVar37 = (*(code *)PTR_compress256_00799158)(uVar37,1);
    }
    uVar33 = (ulonglong)((uint)uVar32 & 0x3f);
    if (uVar32 >> 6 != 0) {
      local_148 = local_148 + (uVar32 >> 6);
      uVar37 = (*(code *)PTR_compress256_00799158)();
    }
    uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,uVar33);
  }
  local_100 = (byte)uVar33;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar34 = *(longlong *)(param_2 + 0x38);
    lVar30 = *(longlong *)(param_2 + 0x40) * 0x60;
    lVar35 = 0;
LAB_0052060e:
    do {
      puVar26 = PTR_memcpy_00799008;
      uVar32 = uVar33 & 0xff;
      if ((byte)uVar33 < 0x3c) {
        *(undefined4 *)((longlong)&uStack_140 + uVar32) = 0x3a43541e;
        lVar36 = uVar32 + 4;
      }
      else {
        lVar36 = uVar32 - 0x3c;
        uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,0x40 - uVar32);
        local_148 = local_148 + 1;
        uVar37 = (*(code *)PTR_compress256_00799158)(uVar37,1);
        uVar37 = (*(code *)puVar26)(uVar37,lVar36);
      }
      local_100 = (byte)lVar36;
      uVar33 = *(ulonglong *)(lVar34 + 0x10 + lVar35);
      if (uVar33 < 0x40U - lVar36) {
        uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,uVar33);
        uVar33 = uVar33 + lVar36;
        local_100 = (byte)uVar33;
        if (uVar33 == 0x3f) goto LAB_005206d9;
LAB_0052079d:
        *(undefined1 *)((longlong)&uStack_140 + uVar33) = 0x3a;
        uVar31 = (int)uVar33 + 1;
      }
      else {
        if (lVar36 != 0) {
          uVar37 = (*(code *)PTR_memcpy_00799008)();
          local_148 = local_148 + 1;
          (*(code *)PTR_compress256_00799158)(uVar37,1);
          uVar33 = uVar33 - (0x40U - lVar36);
        }
        if (uVar33 >> 6 != 0) {
          local_148 = local_148 + (uVar33 >> 6);
          (*(code *)PTR_compress256_00799158)();
        }
        uVar31 = (uint)uVar33 & 0x3f;
        uVar33 = (ulonglong)uVar31;
        uVar37 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar33);
        local_100 = (byte)uVar31;
        if (uVar33 != 0x3f) goto LAB_0052079d;
LAB_005206d9:
        uStack_108 = CONCAT17(0x3a,(undefined7)uStack_108);
        local_148 = local_148 + 1;
        uVar37 = (*(code *)PTR_compress256_00799158)(uVar37,1);
        uVar31 = 0;
      }
      local_100 = (byte)uVar31;
      uVar33 = *(ulonglong *)(lVar34 + 0x28 + lVar35);
      uVar32 = (ulonglong)(uVar31 & 0xff);
      if (0x40 - uVar32 <= uVar33) {
        if (uVar32 != 0) {
          uVar37 = (*(code *)PTR_memcpy_00799008)();
          local_148 = local_148 + 1;
          (*(code *)PTR_compress256_00799158)(uVar37,1);
          uVar33 = uVar33 - (0x40 - uVar32);
        }
        if (uVar33 >> 6 != 0) {
          local_148 = local_148 + (uVar33 >> 6);
          (*(code *)PTR_compress256_00799158)();
        }
        uVar31 = (uint)uVar33 & 0x3f;
        uVar33 = (ulonglong)uVar31;
        uVar37 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar33);
        local_100 = (byte)uVar31;
        lVar35 = lVar35 + 0x60;
        if (lVar30 == lVar35) break;
        goto LAB_0052060e;
      }
      uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,uVar33);
      uVar33 = uVar33 + uVar32;
      local_100 = (byte)uVar33;
      lVar35 = lVar35 + 0x60;
    } while (lVar30 != lVar35);
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
    lVar34 = *(longlong *)(param_2 + 0x50);
    lVar30 = *(longlong *)(param_2 + 0x58) * 0x58;
    do {
      puVar26 = PTR_memcpy_00799008;
      uVar33 = (ulonglong)local_100;
      if (uVar33 < 0x3c) {
        *(undefined4 *)((longlong)&uStack_140 + uVar33) = 0x3a52541e;
        lVar35 = uVar33 + 4;
      }
      else {
        lVar35 = uVar33 - 0x3c;
        uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,0x40 - uVar33);
        local_148 = local_148 + 1;
        uVar37 = (*(code *)PTR_compress256_00799158)(uVar37,1);
        (*(code *)puVar26)(uVar37,lVar35);
      }
      local_100 = (byte)lVar35;
      uVar37 = <craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>::digest
                         (&local_f8,lVar34);
      bVar28 = local_e8;
      bVar27 = local_100;
      uVar33 = CONCAT17(cStack_e1,
                        CONCAT16(cStack_e2,
                                 CONCAT15(cStack_e3,
                                          CONCAT14(cStack_e4,
                                                   CONCAT13(cStack_e5,
                                                            CONCAT12(cStack_e6,
                                                                     CONCAT11(cStack_e7,local_e8))))
                                         )));
      uVar32 = 0x40 - (ulonglong)local_100;
      if (uVar33 < uVar32) {
        uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,uVar33);
        local_100 = bVar28 + bVar27;
      }
      else {
        if ((ulonglong)local_100 != 0) {
          uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,uVar32);
          local_148 = local_148 + 1;
          (*(code *)PTR_compress256_00799158)(uVar37,1);
          uVar33 = uVar33 - uVar32;
        }
        if (uVar33 >> 6 != 0) {
          local_148 = local_148 + (uVar33 >> 6);
          (*(code *)PTR_compress256_00799158)();
        }
        uVar31 = (uint)uVar33 & 0x3f;
        uVar37 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar31);
        local_100 = (byte)uVar31;
      }
      if (CONCAT17(cStack_f1,
                   CONCAT16(cStack_f2,
                            CONCAT15(cStack_f3,
                                     CONCAT14(cStack_f4,
                                              CONCAT13(cStack_f5,
                                                       CONCAT12(cStack_f6,
                                                                CONCAT11(cStack_f7,local_f8)))))))
          != 0) {
        uVar37 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar37,1);
      }
      lVar34 = lVar34 + 0x58;
      lVar30 = lVar30 + -0x58;
    } while (lVar30 != 0);
  }
  if (*(longlong *)(param_2 + 0x70) != 0) {
    lVar34 = *(longlong *)(param_2 + 0x68);
    lVar30 = *(longlong *)(param_2 + 0x70) * 0x18;
    uVar33 = (ulonglong)local_100;
    lVar35 = 0;
    do {
      while( true ) {
        puVar26 = PTR_memcpy_00799008;
        uVar32 = uVar33 & 0xff;
        if ((byte)uVar33 < 0x3d) {
          *(undefined1 *)((longlong)&uStack_140 + uVar32 + 2) = 0x3a;
          *(undefined2 *)((longlong)&uStack_140 + uVar32) = 0x4d1e;
          lVar36 = uVar32 + 3;
        }
        else {
          lVar36 = uVar32 - 0x3d;
          uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,0x40 - uVar32);
          local_148 = local_148 + 1;
          uVar37 = (*(code *)PTR_compress256_00799158)(uVar37,1);
          uVar37 = (*(code *)puVar26)(uVar37,lVar36);
        }
        local_100 = (byte)lVar36;
        uVar33 = *(ulonglong *)(lVar34 + 0x10 + lVar35);
        if (uVar33 < 0x40U - lVar36) break;
        if (lVar36 != 0) {
          uVar37 = (*(code *)PTR_memcpy_00799008)();
          local_148 = local_148 + 1;
          (*(code *)PTR_compress256_00799158)(uVar37,1);
          uVar33 = uVar33 - (0x40U - lVar36);
        }
        if (uVar33 >> 6 != 0) {
          local_148 = local_148 + (uVar33 >> 6);
          (*(code *)PTR_compress256_00799158)();
        }
        uVar31 = (uint)uVar33 & 0x3f;
        uVar33 = (ulonglong)uVar31;
        uVar37 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar33);
        local_100 = (byte)uVar31;
        lVar35 = lVar35 + 0x18;
        if (lVar30 == lVar35) goto LAB_00520c2d;
      }
      uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,uVar33);
      uVar33 = uVar33 + lVar36;
      local_100 = (byte)uVar33;
      lVar35 = lVar35 + 0x18;
    } while (lVar30 != lVar35);
  }
LAB_00520c2d:
  bVar27 = local_100;
  local_98 = uStack_108;
  local_90 = local_100;
  local_8f = local_ff;
  local_8b = local_fb;
  local_89 = local_f9;
  local_d8 = local_148;
  uStack_d0 = uStack_140;
  local_a8 = uStack_118;
  uStack_a0 = local_110;
  local_b8 = uStack_128;
  uStack_b0 = local_120;
  local_c8 = uStack_138;
  uStack_c0 = uStack_130;
  local_e8 = (byte)uVar24;
  cStack_e7 = (char)((ulonglong)uVar24 >> 8);
  cStack_e6 = (char)((ulonglong)uVar24 >> 0x10);
  cStack_e5 = (char)((ulonglong)uVar24 >> 0x18);
  cStack_e4 = (char)((ulonglong)uVar24 >> 0x20);
  cStack_e3 = (char)((ulonglong)uVar24 >> 0x28);
  cStack_e2 = (char)((ulonglong)uVar24 >> 0x30);
  cStack_e1 = (char)((ulonglong)uVar24 >> 0x38);
  bStack_e0 = (byte)uVar25;
  cStack_df = (char)((ulonglong)uVar25 >> 8);
  cStack_de = (char)((ulonglong)uVar25 >> 0x10);
  cStack_dd = (char)((ulonglong)uVar25 >> 0x18);
  cStack_dc = (char)((ulonglong)uVar25 >> 0x20);
  cStack_db = (char)((ulonglong)uVar25 >> 0x28);
  cStack_da = (char)((ulonglong)uVar25 >> 0x30);
  cStack_d9 = (char)((ulonglong)uVar25 >> 0x38);
  local_f8 = (byte)uVar38;
  cStack_f7 = (char)((ulonglong)uVar38 >> 8);
  cStack_f6 = (char)((ulonglong)uVar38 >> 0x10);
  cStack_f5 = (char)((ulonglong)uVar38 >> 0x18);
  cStack_f4 = (char)((ulonglong)uVar38 >> 0x20);
  cStack_f3 = (char)((ulonglong)uVar38 >> 0x28);
  cStack_f2 = (char)((ulonglong)uVar38 >> 0x30);
  cStack_f1 = (char)((ulonglong)uVar38 >> 0x38);
  bStack_f0 = (byte)uVar23;
  cStack_ef = (char)((ulonglong)uVar23 >> 8);
  cStack_ee = (char)((ulonglong)uVar23 >> 0x10);
  cStack_ed = (char)((ulonglong)uVar23 >> 0x18);
  cStack_ec = (char)((ulonglong)uVar23 >> 0x20);
  cStack_eb = (char)((ulonglong)uVar23 >> 0x28);
  cStack_ea = (char)((ulonglong)uVar23 >> 0x30);
  cStack_e9 = (char)((ulonglong)uVar23 >> 0x38);
  uVar33 = local_148 << 9;
  uVar33 = (local_148 & 0x7fffffffffffff) >> 0x2f | (uVar33 & 0xff000000000000) >> 0x28 |
           (uVar33 & 0xff0000000000) >> 0x18 | (uVar33 & 0xff00000000) >> 8 |
           (uVar33 & 0xff000000) << 8 | (uVar33 & 0xff0000) << 0x18 |
           (((uint)local_100 * 8 | uVar33) & 0xff00) << 0x28 |
           (ulonglong)((uint)local_100 * 8) << 0x38;
  local_78[(ulonglong)local_100 - 0x58] = 0x80;
  if ((local_100 == 0x3f) ||
     (uVar38 = (*(code *)PTR_memset_00799090)(uVar38,(ulonglong)local_100 ^ 0x3f),
     (bVar27 ^ 0x38) < 8)) {
    puVar26 = PTR_compress256_00799158;
    (*(code *)PTR_compress256_00799158)(uVar38,1);
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_48 = 0;
    local_40 = uVar33;
    (*(code *)puVar26)(0,1);
  }
  else {
    local_98 = uVar33;
    (*(code *)PTR_compress256_00799158)(uVar38,1);
  }
  uVar38 = local_80;
  uVar14 = CONCAT12(cStack_ef,CONCAT11(bStack_f0,cStack_f1));
  uVar31 = CONCAT13(cStack_ee,uVar14);
  uVar17 = CONCAT14(cStack_ed,uVar31);
  auVar21[5] = cStack_ec;
  auVar21._0_5_ = uVar17;
  uVar15 = CONCAT12(cStack_df,CONCAT11(bStack_e0,cStack_e1));
  uVar16 = CONCAT13(cStack_de,uVar15);
  uVar18 = CONCAT14(cStack_dd,uVar16);
  auVar22[5] = cStack_dc;
  auVar22._0_5_ = uVar18;
  auVar42[1] = 0;
  auVar42[0] = bStack_f0;
  auVar42[2] = cStack_ef;
  auVar42[3] = 0;
  auVar42[4] = cStack_ee;
  auVar42[5] = 0;
  auVar42[6] = cStack_ed;
  auVar42[7] = 0;
  auVar42[8] = cStack_ec;
  auVar42[9] = 0;
  auVar42[10] = cStack_eb;
  auVar42[0xb] = 0;
  auVar42[0xc] = cStack_ea;
  auVar42[0xd] = 0;
  auVar42[0xe] = cStack_e9;
  auVar42[0xf] = 0;
  auVar39 = pshuflw(auVar42,auVar42,0x1b);
  auVar40 = pshufhw(auVar39,auVar39,0x1b);
  auVar21._6_8_ = 0;
  auVar2[0xe] = cStack_f1;
  auVar2._0_14_ = auVar21 << 0x38;
  auVar19._4_8_ = 0;
  auVar19._0_4_ = uVar31;
  auVar4._12_3_ = (int3)(CONCAT26(auVar2._13_2_,CONCAT15(cStack_f2,uVar17)) >> 0x28);
  auVar4._0_12_ = auVar19 << 0x38;
  auVar6._10_5_ = (int5)(CONCAT44(auVar4._11_4_,CONCAT13(cStack_f3,uVar14)) >> 0x18);
  auVar6._0_10_ = (unkuint10)CONCAT11(bStack_f0,cStack_f1) << 0x38;
  auVar8._7_8_ = 0;
  auVar8._0_7_ = (uint7)(CONCAT62(auVar6._9_6_,CONCAT11(cStack_f4,cStack_f1)) >> 8);
  auVar9._1_8_ = SUB158(auVar8 << 0x40,7);
  auVar9[0] = cStack_f5;
  auVar9._9_6_ = 0;
  auVar10._1_10_ = SUB1510(auVar9 << 0x30,5);
  auVar10[0] = cStack_f6;
  auVar10._11_4_ = 0;
  auVar39._3_12_ = SUB1512(auVar10 << 0x20,3);
  auVar39[2] = cStack_f7;
  auVar39[1] = 0;
  auVar39[0] = local_f8;
  auVar39[0xf] = 0;
  auVar39 = pshuflw(auVar39,auVar39,0x1b);
  auVar39 = pshufhw(auVar39,auVar39,0x1b);
  sVar1 = auVar39._0_2_;
  local_f8 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[0] - (0xff < sVar1);
  sVar1 = auVar39._2_2_;
  cStack_f7 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[2] - (0xff < sVar1);
  sVar1 = auVar39._4_2_;
  cStack_f6 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[4] - (0xff < sVar1);
  sVar1 = auVar39._6_2_;
  cStack_f5 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[6] - (0xff < sVar1);
  sVar1 = auVar39._8_2_;
  cStack_f4 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[8] - (0xff < sVar1);
  sVar1 = auVar39._10_2_;
  cStack_f3 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[10] - (0xff < sVar1);
  sVar1 = auVar39._12_2_;
  cStack_f2 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[0xc] - (0xff < sVar1);
  sVar1 = auVar39._14_2_;
  cStack_f1 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[0xe] - (0xff < sVar1);
  sVar1 = auVar40._0_2_;
  bStack_f0 = (0 < sVar1) * (sVar1 < 0x100) * auVar40[0] - (0xff < sVar1);
  sVar1 = auVar40._2_2_;
  cStack_ef = (0 < sVar1) * (sVar1 < 0x100) * auVar40[2] - (0xff < sVar1);
  sVar1 = auVar40._4_2_;
  cStack_ee = (0 < sVar1) * (sVar1 < 0x100) * auVar40[4] - (0xff < sVar1);
  sVar1 = auVar40._6_2_;
  cStack_ed = (0 < sVar1) * (sVar1 < 0x100) * auVar40[6] - (0xff < sVar1);
  sVar1 = auVar40._8_2_;
  cStack_ec = (0 < sVar1) * (sVar1 < 0x100) * auVar40[8] - (0xff < sVar1);
  sVar1 = auVar40._10_2_;
  cStack_eb = (0 < sVar1) * (sVar1 < 0x100) * auVar40[10] - (0xff < sVar1);
  sVar1 = auVar40._12_2_;
  cStack_ea = (0 < sVar1) * (sVar1 < 0x100) * auVar40[0xc] - (0xff < sVar1);
  sVar1 = auVar40._14_2_;
  cStack_e9 = (0 < sVar1) * (sVar1 < 0x100) * auVar40[0xe] - (0xff < sVar1);
  auVar41[1] = 0;
  auVar41[0] = bStack_e0;
  auVar41[2] = cStack_df;
  auVar41[3] = 0;
  auVar41[4] = cStack_de;
  auVar41[5] = 0;
  auVar41[6] = cStack_dd;
  auVar41[7] = 0;
  auVar41[8] = cStack_dc;
  auVar41[9] = 0;
  auVar41[10] = cStack_db;
  auVar41[0xb] = 0;
  auVar41[0xc] = cStack_da;
  auVar41[0xd] = 0;
  auVar41[0xe] = cStack_d9;
  auVar41[0xf] = 0;
  auVar39 = pshuflw(auVar41,auVar41,0x1b);
  auVar42 = pshufhw(auVar39,auVar39,0x1b);
  auVar22._6_8_ = 0;
  auVar3[0xe] = cStack_e1;
  auVar3._0_14_ = auVar22 << 0x38;
  auVar20._4_8_ = 0;
  auVar20._0_4_ = uVar16;
  auVar5._12_3_ = (int3)(CONCAT26(auVar3._13_2_,CONCAT15(cStack_e2,uVar18)) >> 0x28);
  auVar5._0_12_ = auVar20 << 0x38;
  auVar7._10_5_ = (int5)(CONCAT44(auVar5._11_4_,CONCAT13(cStack_e3,uVar15)) >> 0x18);
  auVar7._0_10_ = (unkuint10)CONCAT11(bStack_e0,cStack_e1) << 0x38;
  auVar11._7_8_ = 0;
  auVar11._0_7_ = (uint7)(CONCAT62(auVar7._9_6_,CONCAT11(cStack_e4,cStack_e1)) >> 8);
  auVar12._1_8_ = SUB158(auVar11 << 0x40,7);
  auVar12[0] = cStack_e5;
  auVar12._9_6_ = 0;
  auVar13._1_10_ = SUB1510(auVar12 << 0x30,5);
  auVar13[0] = cStack_e6;
  auVar13._11_4_ = 0;
  auVar40._3_12_ = SUB1512(auVar13 << 0x20,3);
  auVar40[2] = cStack_e7;
  auVar40[1] = 0;
  auVar40[0] = local_e8;
  auVar40[0xf] = 0;
  auVar39 = pshuflw((undefined1  [16])0x0,auVar40,0x1b);
  auVar39 = pshufhw(auVar39,auVar39,0x1b);
  sVar1 = auVar39._0_2_;
  local_e8 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[0] - (0xff < sVar1);
  sVar1 = auVar39._2_2_;
  cStack_e7 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[2] - (0xff < sVar1);
  sVar1 = auVar39._4_2_;
  cStack_e6 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[4] - (0xff < sVar1);
  sVar1 = auVar39._6_2_;
  cStack_e5 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[6] - (0xff < sVar1);
  sVar1 = auVar39._8_2_;
  cStack_e4 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[8] - (0xff < sVar1);
  sVar1 = auVar39._10_2_;
  cStack_e3 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[10] - (0xff < sVar1);
  sVar1 = auVar39._12_2_;
  cStack_e2 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[0xc] - (0xff < sVar1);
  sVar1 = auVar39._14_2_;
  cStack_e1 = (0 < sVar1) * (sVar1 < 0x100) * auVar39[0xe] - (0xff < sVar1);
  sVar1 = auVar42._0_2_;
  bStack_e0 = (0 < sVar1) * (sVar1 < 0x100) * auVar42[0] - (0xff < sVar1);
  sVar1 = auVar42._2_2_;
  cStack_df = (0 < sVar1) * (sVar1 < 0x100) * auVar42[2] - (0xff < sVar1);
  sVar1 = auVar42._4_2_;
  cStack_de = (0 < sVar1) * (sVar1 < 0x100) * auVar42[4] - (0xff < sVar1);
  sVar1 = auVar42._6_2_;
  cStack_dd = (0 < sVar1) * (sVar1 < 0x100) * auVar42[6] - (0xff < sVar1);
  sVar1 = auVar42._8_2_;
  cStack_dc = (0 < sVar1) * (sVar1 < 0x100) * auVar42[8] - (0xff < sVar1);
  sVar1 = auVar42._10_2_;
  cStack_db = (0 < sVar1) * (sVar1 < 0x100) * auVar42[10] - (0xff < sVar1);
  sVar1 = auVar42._12_2_;
  cStack_da = (0 < sVar1) * (sVar1 < 0x100) * auVar42[0xc] - (0xff < sVar1);
  sVar1 = auVar42._14_2_;
  cStack_d9 = (0 < sVar1) * (sVar1 < 0x100) * auVar42[0xe] - (0xff < sVar1);
  local_78._8_8_ =
       <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
       ::fmt;
  local_78._0_8_ = &local_f8;
  (*(code *)PTR_format_inner_00799048)();
  return uVar38;
}


