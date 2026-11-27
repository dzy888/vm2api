// 005405d0 chain_digests_from

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::resume::chain_digests_from */

void __rustcall
craggemini_core[66f3c71560d70857]::resume::chain_digests_from
          (longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  short sVar3;
  longlong lVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined3 uVar17;
  undefined3 uVar18;
  uint uVar19;
  undefined5 uVar20;
  undefined5 uVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  char cVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  byte bVar36;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  longlong local_180;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  byte local_108;
  char cStack_107;
  char cStack_106;
  char cStack_105;
  char cStack_104;
  char cStack_103;
  char cStack_102;
  char cStack_101;
  byte bStack_100;
  char cStack_ff;
  char cStack_fe;
  char cStack_fd;
  char cStack_fc;
  char cStack_fb;
  char cStack_fa;
  char cStack_f9;
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
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  byte local_a0;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  local_80 = param_4;
  if (param_5 == 0) {
LAB_0054062d:
    lVar30 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar30 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar30 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0054062d;
    }
  }
  local_180 = 0;
  if ((longlong)param_3 < 0) {
LAB_0054064d:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_88 = param_5 * 0x18;
  if (param_3 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar31 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar31 == 0) goto LAB_0054064d;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_3);
  }
  local_90 = param_1;
  if (param_5 == 0) {
    uVar33 = param_3;
  }
  else {
    lVar31 = 0;
    uVar32 = param_3;
    do {
      uVar28 = _UNK_0018cff8;
      uVar27 = _DAT_0018cff0;
      uVar26 = _UNK_0018cfe8;
      uVar38 = _DAT_0018cfe0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      local_110 = 0;
      local_158 = 0;
      uVar37 = _DAT_0018cfe0;
      if (0x3f < param_3) {
        local_158 = param_3 >> 6;
        uVar37 = (*(code *)PTR_compress256_00799158)();
        param_3 = (ulonglong)((uint)param_3 & 0x3f);
      }
      uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,param_3);
      local_110 = (byte)param_3;
      if (param_3 == 0x3f) {
        uStack_118 = CONCAT17(0x3a,(undefined7)uStack_118);
        local_158 = local_158 + 1;
        (*(code *)PTR_compress256_00799158)(uVar37,1);
        uVar34 = 0;
      }
      else {
        *(undefined1 *)((longlong)&uStack_150 + param_3) = 0x3a;
        uVar34 = (int)param_3 + 1;
      }
      cVar29 = (char)uVar34;
      uVar33 = *(ulonglong *)(local_80 + 0x10 + lVar31);
      uVar35 = 0x40 - (ulonglong)(uVar34 & 0xff);
      local_110 = cVar29;
      if (uVar33 < uVar35) {
        (*(code *)PTR_memcpy_00799008)(local_80,uVar33);
        bVar36 = (char)uVar33 + cVar29;
      }
      else {
        if ((ulonglong)(uVar34 & 0xff) != 0) {
          uVar37 = (*(code *)PTR_memcpy_00799008)(local_80,uVar35);
          local_158 = local_158 + 1;
          (*(code *)PTR_compress256_00799158)(uVar37,1);
          uVar33 = uVar33 - uVar35;
        }
        if (uVar33 >> 6 != 0) {
          local_158 = local_158 + (uVar33 >> 6);
          (*(code *)PTR_compress256_00799158)();
        }
        uVar34 = (uint)uVar33 & 0x3f;
        bVar36 = (byte)uVar34;
        (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar34);
      }
      local_a8 = uStack_118;
      local_9f = local_10f;
      local_9b = local_10b;
      local_99 = local_109;
      local_e8 = local_158;
      uStack_e0 = uStack_150;
      local_b8 = uStack_128;
      uStack_b0 = local_120;
      local_c8 = uStack_138;
      uStack_c0 = local_130;
      local_d8 = uStack_148;
      uStack_d0 = uStack_140;
      local_f8 = (byte)uVar27;
      cStack_f7 = (char)((ulonglong)uVar27 >> 8);
      cStack_f6 = (char)((ulonglong)uVar27 >> 0x10);
      cStack_f5 = (char)((ulonglong)uVar27 >> 0x18);
      cStack_f4 = (char)((ulonglong)uVar27 >> 0x20);
      cStack_f3 = (char)((ulonglong)uVar27 >> 0x28);
      cStack_f2 = (char)((ulonglong)uVar27 >> 0x30);
      cStack_f1 = (char)((ulonglong)uVar27 >> 0x38);
      bStack_f0 = (byte)uVar28;
      cStack_ef = (char)((ulonglong)uVar28 >> 8);
      cStack_ee = (char)((ulonglong)uVar28 >> 0x10);
      cStack_ed = (char)((ulonglong)uVar28 >> 0x18);
      cStack_ec = (char)((ulonglong)uVar28 >> 0x20);
      cStack_eb = (char)((ulonglong)uVar28 >> 0x28);
      cStack_ea = (char)((ulonglong)uVar28 >> 0x30);
      cStack_e9 = (char)((ulonglong)uVar28 >> 0x38);
      local_108 = (byte)uVar38;
      cStack_107 = (char)((ulonglong)uVar38 >> 8);
      cStack_106 = (char)((ulonglong)uVar38 >> 0x10);
      cStack_105 = (char)((ulonglong)uVar38 >> 0x18);
      cStack_104 = (char)((ulonglong)uVar38 >> 0x20);
      cStack_103 = (char)((ulonglong)uVar38 >> 0x28);
      cStack_102 = (char)((ulonglong)uVar38 >> 0x30);
      cStack_101 = (char)((ulonglong)uVar38 >> 0x38);
      bStack_100 = (byte)uVar26;
      cStack_ff = (char)((ulonglong)uVar26 >> 8);
      cStack_fe = (char)((ulonglong)uVar26 >> 0x10);
      cStack_fd = (char)((ulonglong)uVar26 >> 0x18);
      cStack_fc = (char)((ulonglong)uVar26 >> 0x20);
      cStack_fb = (char)((ulonglong)uVar26 >> 0x28);
      cStack_fa = (char)((ulonglong)uVar26 >> 0x30);
      cStack_f9 = (char)((ulonglong)uVar26 >> 0x38);
      uVar33 = local_158 << 9;
      uVar33 = (local_158 & 0x7fffffffffffff) >> 0x2f | (uVar33 & 0xff000000000000) >> 0x28 |
               (uVar33 & 0xff0000000000) >> 0x18 | (uVar33 & 0xff00000000) >> 8 |
               (uVar33 & 0xff000000) << 8 | (uVar33 & 0xff0000) << 0x18 |
               (((uint)bVar36 * 8 | uVar33) & 0xff00) << 0x28 |
               (ulonglong)((uint)bVar36 * 8) << 0x38;
      local_a0 = bVar36;
      local_78[(ulonglong)bVar36 - 0x68] = 0x80;
      local_110 = bVar36;
      if ((bVar36 == 0x3f) ||
         (uVar38 = (*(code *)PTR_memset_00799090)(uVar38,(ulonglong)bVar36 ^ 0x3f),
         (bVar36 ^ 0x38) < 8)) {
        (*(code *)PTR_compress256_00799158)(uVar38,1);
        local_58 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_48 = 0;
        local_40 = uVar33;
        (*(code *)PTR_compress256_00799158)(0,1);
      }
      else {
        local_a8 = uVar33;
        (*(code *)PTR_compress256_00799158)(uVar38,1);
      }
      uVar17 = CONCAT12(cStack_ff,CONCAT11(bStack_100,cStack_101));
      uVar34 = CONCAT13(cStack_fe,uVar17);
      uVar20 = CONCAT14(cStack_fd,uVar34);
      auVar24[5] = cStack_fc;
      auVar24._0_5_ = uVar20;
      uVar18 = CONCAT12(cStack_ef,CONCAT11(bStack_f0,cStack_f1));
      uVar19 = CONCAT13(cStack_ee,uVar18);
      uVar21 = CONCAT14(cStack_ed,uVar19);
      auVar25[5] = cStack_ec;
      auVar25._0_5_ = uVar21;
      auVar42[1] = 0;
      auVar42[0] = bStack_100;
      auVar42[2] = cStack_ff;
      auVar42[3] = 0;
      auVar42[4] = cStack_fe;
      auVar42[5] = 0;
      auVar42[6] = cStack_fd;
      auVar42[7] = 0;
      auVar42[8] = cStack_fc;
      auVar42[9] = 0;
      auVar42[10] = cStack_fb;
      auVar42[0xb] = 0;
      auVar42[0xc] = cStack_fa;
      auVar42[0xd] = 0;
      auVar42[0xe] = cStack_f9;
      auVar42[0xf] = 0;
      auVar39 = pshuflw(auVar42,auVar42,0x1b);
      auVar40 = pshufhw(auVar39,auVar39,0x1b);
      auVar24._6_8_ = 0;
      auVar5[0xe] = cStack_101;
      auVar5._0_14_ = auVar24 << 0x38;
      auVar22._4_8_ = 0;
      auVar22._0_4_ = uVar34;
      auVar7._12_3_ = (int3)(CONCAT26(auVar5._13_2_,CONCAT15(cStack_102,uVar20)) >> 0x28);
      auVar7._0_12_ = auVar22 << 0x38;
      auVar9._10_5_ = (int5)(CONCAT44(auVar7._11_4_,CONCAT13(cStack_103,uVar17)) >> 0x18);
      auVar9._0_10_ = (unkuint10)CONCAT11(bStack_100,cStack_101) << 0x38;
      auVar11._7_8_ = 0;
      auVar11._0_7_ = (uint7)(CONCAT62(auVar9._9_6_,CONCAT11(cStack_104,cStack_101)) >> 8);
      auVar12._1_8_ = SUB158(auVar11 << 0x40,7);
      auVar12[0] = cStack_105;
      auVar12._9_6_ = 0;
      auVar13._1_10_ = SUB1510(auVar12 << 0x30,5);
      auVar13[0] = cStack_106;
      auVar13._11_4_ = 0;
      auVar39._3_12_ = SUB1512(auVar13 << 0x20,3);
      auVar39[2] = cStack_107;
      auVar39[1] = 0;
      auVar39[0] = local_108;
      auVar39[0xf] = 0;
      auVar39 = pshuflw(auVar39,auVar39,0x1b);
      auVar39 = pshufhw(auVar39,auVar39,0x1b);
      sVar3 = auVar39._0_2_;
      local_108 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[0] - (0xff < sVar3);
      sVar3 = auVar39._2_2_;
      cStack_107 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[2] - (0xff < sVar3);
      sVar3 = auVar39._4_2_;
      cStack_106 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[4] - (0xff < sVar3);
      sVar3 = auVar39._6_2_;
      cStack_105 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[6] - (0xff < sVar3);
      sVar3 = auVar39._8_2_;
      cStack_104 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[8] - (0xff < sVar3);
      sVar3 = auVar39._10_2_;
      cStack_103 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[10] - (0xff < sVar3);
      sVar3 = auVar39._12_2_;
      cStack_102 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[0xc] - (0xff < sVar3);
      sVar3 = auVar39._14_2_;
      cStack_101 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[0xe] - (0xff < sVar3);
      sVar3 = auVar40._0_2_;
      bStack_100 = (0 < sVar3) * (sVar3 < 0x100) * auVar40[0] - (0xff < sVar3);
      sVar3 = auVar40._2_2_;
      cStack_ff = (0 < sVar3) * (sVar3 < 0x100) * auVar40[2] - (0xff < sVar3);
      sVar3 = auVar40._4_2_;
      cStack_fe = (0 < sVar3) * (sVar3 < 0x100) * auVar40[4] - (0xff < sVar3);
      sVar3 = auVar40._6_2_;
      cStack_fd = (0 < sVar3) * (sVar3 < 0x100) * auVar40[6] - (0xff < sVar3);
      sVar3 = auVar40._8_2_;
      cStack_fc = (0 < sVar3) * (sVar3 < 0x100) * auVar40[8] - (0xff < sVar3);
      sVar3 = auVar40._10_2_;
      cStack_fb = (0 < sVar3) * (sVar3 < 0x100) * auVar40[10] - (0xff < sVar3);
      sVar3 = auVar40._12_2_;
      cStack_fa = (0 < sVar3) * (sVar3 < 0x100) * auVar40[0xc] - (0xff < sVar3);
      sVar3 = auVar40._14_2_;
      cStack_f9 = (0 < sVar3) * (sVar3 < 0x100) * auVar40[0xe] - (0xff < sVar3);
      auVar41[1] = 0;
      auVar41[0] = bStack_f0;
      auVar41[2] = cStack_ef;
      auVar41[3] = 0;
      auVar41[4] = cStack_ee;
      auVar41[5] = 0;
      auVar41[6] = cStack_ed;
      auVar41[7] = 0;
      auVar41[8] = cStack_ec;
      auVar41[9] = 0;
      auVar41[10] = cStack_eb;
      auVar41[0xb] = 0;
      auVar41[0xc] = cStack_ea;
      auVar41[0xd] = 0;
      auVar41[0xe] = cStack_e9;
      auVar41[0xf] = 0;
      auVar39 = pshuflw(auVar41,auVar41,0x1b);
      auVar42 = pshufhw(auVar39,auVar39,0x1b);
      auVar25._6_8_ = 0;
      auVar6[0xe] = cStack_f1;
      auVar6._0_14_ = auVar25 << 0x38;
      auVar23._4_8_ = 0;
      auVar23._0_4_ = uVar19;
      auVar8._12_3_ = (int3)(CONCAT26(auVar6._13_2_,CONCAT15(cStack_f2,uVar21)) >> 0x28);
      auVar8._0_12_ = auVar23 << 0x38;
      auVar10._10_5_ = (int5)(CONCAT44(auVar8._11_4_,CONCAT13(cStack_f3,uVar18)) >> 0x18);
      auVar10._0_10_ = (unkuint10)CONCAT11(bStack_f0,cStack_f1) << 0x38;
      auVar14._7_8_ = 0;
      auVar14._0_7_ = (uint7)(CONCAT62(auVar10._9_6_,CONCAT11(cStack_f4,cStack_f1)) >> 8);
      auVar15._1_8_ = SUB158(auVar14 << 0x40,7);
      auVar15[0] = cStack_f5;
      auVar15._9_6_ = 0;
      auVar16._1_10_ = SUB1510(auVar15 << 0x30,5);
      auVar16[0] = cStack_f6;
      auVar16._11_4_ = 0;
      auVar40._3_12_ = SUB1512(auVar16 << 0x20,3);
      auVar40[2] = cStack_f7;
      auVar40[1] = 0;
      auVar40[0] = local_f8;
      auVar40[0xf] = 0;
      auVar39 = pshuflw(auVar40,auVar40,0x1b);
      auVar39 = pshufhw(auVar39,auVar39,0x1b);
      sVar3 = auVar39._0_2_;
      local_f8 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[0] - (0xff < sVar3);
      sVar3 = auVar39._2_2_;
      cStack_f7 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[2] - (0xff < sVar3);
      sVar3 = auVar39._4_2_;
      cStack_f6 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[4] - (0xff < sVar3);
      sVar3 = auVar39._6_2_;
      cStack_f5 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[6] - (0xff < sVar3);
      sVar3 = auVar39._8_2_;
      cStack_f4 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[8] - (0xff < sVar3);
      sVar3 = auVar39._10_2_;
      cStack_f3 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[10] - (0xff < sVar3);
      sVar3 = auVar39._12_2_;
      cStack_f2 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[0xc] - (0xff < sVar3);
      sVar3 = auVar39._14_2_;
      cStack_f1 = (0 < sVar3) * (sVar3 < 0x100) * auVar39[0xe] - (0xff < sVar3);
      sVar3 = auVar42._0_2_;
      bStack_f0 = (0 < sVar3) * (sVar3 < 0x100) * auVar42[0] - (0xff < sVar3);
      sVar3 = auVar42._2_2_;
      cStack_ef = (0 < sVar3) * (sVar3 < 0x100) * auVar42[2] - (0xff < sVar3);
      sVar3 = auVar42._4_2_;
      cStack_ee = (0 < sVar3) * (sVar3 < 0x100) * auVar42[4] - (0xff < sVar3);
      sVar3 = auVar42._6_2_;
      cStack_ed = (0 < sVar3) * (sVar3 < 0x100) * auVar42[6] - (0xff < sVar3);
      sVar3 = auVar42._8_2_;
      cStack_ec = (0 < sVar3) * (sVar3 < 0x100) * auVar42[8] - (0xff < sVar3);
      sVar3 = auVar42._10_2_;
      cStack_eb = (0 < sVar3) * (sVar3 < 0x100) * auVar42[10] - (0xff < sVar3);
      sVar3 = auVar42._12_2_;
      cStack_ea = (0 < sVar3) * (sVar3 < 0x100) * auVar42[0xc] - (0xff < sVar3);
      sVar3 = auVar42._14_2_;
      cStack_e9 = (0 < sVar3) * (sVar3 < 0x100) * auVar42[0xe] - (0xff < sVar3);
      (*(code *)PTR_format_inner_00799048)();
      uVar33 = local_78._0_8_;
      param_3 = local_68._0_8_;
      (*(code *)PTR_clone_00798fd0)();
      if (local_180 == param_5) {
        (*(code *)PTR_grow_one_00799328)();
      }
      lVar4 = local_180 * 3;
      *(ulonglong *)(lVar30 + 0x10 + local_180 * 0x18) =
           CONCAT17(cStack_f1,
                    CONCAT16(cStack_f2,
                             CONCAT15(cStack_f3,
                                      CONCAT14(cStack_f4,
                                               CONCAT13(cStack_f5,
                                                        CONCAT12(cStack_f6,
                                                                 CONCAT11(cStack_f7,local_f8)))))));
      puVar1 = (undefined8 *)(lVar30 + local_180 * 0x18);
      *puVar1 = CONCAT17(cStack_101,
                         CONCAT16(cStack_102,
                                  CONCAT15(cStack_103,
                                           CONCAT14(cStack_104,
                                                    CONCAT13(cStack_105,
                                                             CONCAT12(cStack_106,
                                                                      CONCAT11(cStack_107,local_108)
                                                                     ))))));
      puVar1[1] = CONCAT17(cStack_f9,
                           CONCAT16(cStack_fa,
                                    CONCAT15(cStack_fb,
                                             CONCAT14(cStack_fc,
                                                      CONCAT13(cStack_fd,
                                                               CONCAT12(cStack_fe,
                                                                        CONCAT11(cStack_ff,
                                                                                 bStack_100)))))));
      local_180 = local_180 + 1;
      if (uVar32 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(lVar4,1);
      }
      lVar31 = lVar31 + 0x18;
      uVar32 = uVar33;
    } while (local_88 != lVar31);
  }
  local_90[2] = local_180;
  *local_90 = param_5;
  local_90[1] = lVar30;
  if (uVar33 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(local_90,1);
  }
  return;
}


