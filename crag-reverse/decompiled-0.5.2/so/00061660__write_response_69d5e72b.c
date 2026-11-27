// 00061660 write_response

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <agy_bridge[64a9e9deac6c45ce]::shm::ShmClient>::write_response */

longlong * __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ShmClient>::write_response
          (longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 uVar1;
  short sVar2;
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
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [16];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  byte *pbVar28;
  byte bVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  byte local_a0;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  byte local_98 [4];
  char cStack_94;
  char cStack_93;
  char cStack_92;
  char cStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  char local_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  if ((param_4 - 1 < (ulonglong)param_2[5]) && (param_4 >> 0x20 == 0)) {
    lVar26 = param_2[4];
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    local_a0 = 0;
    local_108 = _DAT_0000bdc0;
    uStack_100 = _UNK_0000bdc8;
    local_f8 = _DAT_0000bdd0;
    uStack_f0 = _UNK_0000bdd8;
    local_e8 = 0;
    if (param_4 < 0x40) {
      (*(code *)PTR_memcpy_000c3aa8)(param_4,param_4);
      uVar30 = param_4;
    }
    else {
      uVar30 = (ulonglong)((uint)param_4 & 0x3f);
      local_e8 = param_4 >> 6;
      uVar32 = (*(code *)PTR_compress256_000c3b98)(param_4,local_e8);
      (*(code *)PTR_memcpy_000c3aa8)(uVar32,uVar30);
    }
    lVar31 = local_108;
    bVar29 = (byte)uVar30;
    local_118 = uStack_a8;
    local_10f = local_9f;
    local_10b = local_9b;
    local_109 = local_99;
    local_158 = local_e8;
    uStack_150 = uStack_e0;
    local_128 = uStack_b8;
    uStack_120 = local_b0;
    local_138 = uStack_c8;
    uStack_130 = local_c0;
    local_148 = uStack_d8;
    uStack_140 = uStack_d0;
    local_168 = local_f8;
    uStack_160 = uStack_f0;
    local_178 = local_108;
    lStack_170 = uStack_100;
    uVar25 = local_e8 << 9;
    uVar25 = (local_e8 & 0x7fffffffffffff) >> 0x2f | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 |
             (((uint)bVar29 * 8 | uVar25) & 0xff00) << 0x28 | (ulonglong)((uint)bVar29 * 8) << 0x38;
    local_110 = bVar29;
    local_a0 = bVar29;
    *(undefined1 *)((longlong)&uStack_150 + (uVar30 & 0xff)) = 0x80;
    if ((bVar29 == 0x3f) ||
       (lVar31 = (*(code *)PTR_memset_000c3cd8)(lVar31,uVar30 & 0xff ^ 0x3f), (bVar29 ^ 0x38) < 8))
    {
      puVar24 = PTR_compress256_000c3b98;
      (*(code *)PTR_compress256_000c3b98)(lVar31,1);
      local_58 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_48 = 0;
      local_40 = uVar25;
      (*(code *)puVar24)(0,1);
    }
    else {
      local_118 = uVar25;
      (*(code *)PTR_compress256_000c3b98)(lVar31,1);
    }
    auVar33._8_8_ = lStack_170;
    auVar33._0_8_ = local_178;
    auVar17._8_8_ = uStack_160;
    auVar17._0_8_ = local_168;
    auVar34[1] = 0;
    auVar34[0] = (byte)lStack_170;
    auVar34[2] = (char)((ulonglong)lStack_170 >> 8);
    auVar34[3] = 0;
    auVar34[4] = (char)((ulonglong)lStack_170 >> 0x10);
    auVar34[5] = 0;
    auVar34[6] = (char)((ulonglong)lStack_170 >> 0x18);
    auVar34[7] = 0;
    auVar34[8] = (char)((ulonglong)lStack_170 >> 0x20);
    auVar34[9] = 0;
    auVar34[10] = (char)((ulonglong)lStack_170 >> 0x28);
    auVar34[0xb] = 0;
    auVar34[0xc] = (char)((ulonglong)lStack_170 >> 0x30);
    auVar34[0xd] = 0;
    auVar34[0xe] = (char)((ulonglong)lStack_170 >> 0x38);
    auVar34[0xf] = 0;
    auVar35 = pshuflw(auVar34,auVar34,0x1b);
    auVar36 = pshufhw(auVar35,auVar35,0x1b);
    auVar3[0xd] = 0;
    auVar3._0_13_ = auVar33._0_13_;
    auVar3[0xe] = (char)((ulonglong)local_178 >> 0x38);
    auVar5[0xc] = (char)((ulonglong)local_178 >> 0x30);
    auVar5._0_12_ = auVar33._0_12_;
    auVar5._13_2_ = auVar3._13_2_;
    auVar7[0xb] = 0;
    auVar7._0_11_ = auVar33._0_11_;
    auVar7._12_3_ = auVar5._12_3_;
    auVar9[10] = (char)((ulonglong)local_178 >> 0x28);
    auVar9._0_10_ = auVar33._0_10_;
    auVar9._11_4_ = auVar7._11_4_;
    auVar11[9] = 0;
    auVar11._0_9_ = auVar33._0_9_;
    auVar11._10_5_ = auVar9._10_5_;
    auVar13[8] = (char)((ulonglong)local_178 >> 0x20);
    auVar13._0_8_ = local_178;
    auVar13._9_6_ = auVar11._9_6_;
    auVar18._7_8_ = 0;
    auVar18._0_7_ = auVar13._8_7_;
    auVar19._1_8_ = SUB158(auVar18 << 0x40,7);
    auVar19[0] = (char)((ulonglong)local_178 >> 0x18);
    auVar19._9_6_ = 0;
    auVar20._1_10_ = SUB1510(auVar19 << 0x30,5);
    auVar20[0] = (char)((ulonglong)local_178 >> 0x10);
    auVar20._11_4_ = 0;
    auVar15[2] = (char)((ulonglong)local_178 >> 8);
    auVar15._0_2_ = (ushort)local_178;
    auVar15._3_12_ = SUB1512(auVar20 << 0x20,3);
    auVar35._0_2_ = (ushort)local_178 & 0xff;
    auVar35._2_13_ = auVar15._2_13_;
    auVar35[0xf] = 0;
    auVar33 = pshuflw(auVar35,auVar35,0x1b);
    auVar33 = pshufhw(auVar33,auVar33,0x1b);
    sVar2 = auVar33._0_2_;
    local_98[0] = (0 < sVar2) * (sVar2 < 0x100) * auVar33[0] - (0xff < sVar2);
    sVar2 = auVar33._2_2_;
    local_98[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar33[2] - (0xff < sVar2);
    sVar2 = auVar33._4_2_;
    local_98[2] = (0 < sVar2) * (sVar2 < 0x100) * auVar33[4] - (0xff < sVar2);
    sVar2 = auVar33._6_2_;
    local_98[3] = (0 < sVar2) * (sVar2 < 0x100) * auVar33[6] - (0xff < sVar2);
    sVar2 = auVar33._8_2_;
    cStack_94 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[8] - (0xff < sVar2);
    sVar2 = auVar33._10_2_;
    cStack_93 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[10] - (0xff < sVar2);
    sVar2 = auVar33._12_2_;
    cStack_92 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[0xc] - (0xff < sVar2);
    sVar2 = auVar33._14_2_;
    cStack_91 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[0xe] - (0xff < sVar2);
    sVar2 = auVar36._0_2_;
    cStack_90 = (0 < sVar2) * (sVar2 < 0x100) * auVar36[0] - (0xff < sVar2);
    sVar2 = auVar36._2_2_;
    cStack_8f = (0 < sVar2) * (sVar2 < 0x100) * auVar36[2] - (0xff < sVar2);
    sVar2 = auVar36._4_2_;
    cStack_8e = (0 < sVar2) * (sVar2 < 0x100) * auVar36[4] - (0xff < sVar2);
    sVar2 = auVar36._6_2_;
    cStack_8d = (0 < sVar2) * (sVar2 < 0x100) * auVar36[6] - (0xff < sVar2);
    sVar2 = auVar36._8_2_;
    cStack_8c = (0 < sVar2) * (sVar2 < 0x100) * auVar36[8] - (0xff < sVar2);
    sVar2 = auVar36._10_2_;
    cStack_8b = (0 < sVar2) * (sVar2 < 0x100) * auVar36[10] - (0xff < sVar2);
    sVar2 = auVar36._12_2_;
    cStack_8a = (0 < sVar2) * (sVar2 < 0x100) * auVar36[0xc] - (0xff < sVar2);
    sVar2 = auVar36._14_2_;
    cStack_89 = (0 < sVar2) * (sVar2 < 0x100) * auVar36[0xe] - (0xff < sVar2);
    auVar37[1] = 0;
    auVar37[0] = (byte)uStack_160;
    auVar37[2] = (char)((ulonglong)uStack_160 >> 8);
    auVar37[3] = 0;
    auVar37[4] = (char)((ulonglong)uStack_160 >> 0x10);
    auVar37[5] = 0;
    auVar37[6] = (char)((ulonglong)uStack_160 >> 0x18);
    auVar37[7] = 0;
    auVar37[8] = (char)((ulonglong)uStack_160 >> 0x20);
    auVar37[9] = 0;
    auVar37[10] = (char)((ulonglong)uStack_160 >> 0x28);
    auVar37[0xb] = 0;
    auVar37[0xc] = (char)((ulonglong)uStack_160 >> 0x30);
    auVar37[0xd] = 0;
    auVar37[0xe] = (char)((ulonglong)uStack_160 >> 0x38);
    auVar37[0xf] = 0;
    auVar33 = pshuflw(auVar37,auVar37,0x1b);
    auVar35 = pshufhw(auVar33,auVar33,0x1b);
    auVar4[0xd] = 0;
    auVar4._0_13_ = auVar17._0_13_;
    auVar4[0xe] = (char)((ulonglong)local_168 >> 0x38);
    auVar6[0xc] = (char)((ulonglong)local_168 >> 0x30);
    auVar6._0_12_ = auVar17._0_12_;
    auVar6._13_2_ = auVar4._13_2_;
    auVar8[0xb] = 0;
    auVar8._0_11_ = auVar17._0_11_;
    auVar8._12_3_ = auVar6._12_3_;
    auVar10[10] = (char)((ulonglong)local_168 >> 0x28);
    auVar10._0_10_ = auVar17._0_10_;
    auVar10._11_4_ = auVar8._11_4_;
    auVar12[9] = 0;
    auVar12._0_9_ = auVar17._0_9_;
    auVar12._10_5_ = auVar10._10_5_;
    auVar14[8] = (char)((ulonglong)local_168 >> 0x20);
    auVar14._0_8_ = local_168;
    auVar14._9_6_ = auVar12._9_6_;
    auVar21._7_8_ = 0;
    auVar21._0_7_ = auVar14._8_7_;
    auVar22._1_8_ = SUB158(auVar21 << 0x40,7);
    auVar22[0] = (char)((ulonglong)local_168 >> 0x18);
    auVar22._9_6_ = 0;
    auVar23._1_10_ = SUB1510(auVar22 << 0x30,5);
    auVar23[0] = (char)((ulonglong)local_168 >> 0x10);
    auVar23._11_4_ = 0;
    auVar16[2] = (char)((ulonglong)local_168 >> 8);
    auVar16._0_2_ = (ushort)local_168;
    auVar16._3_12_ = SUB1512(auVar23 << 0x20,3);
    auVar36._0_2_ = (ushort)local_168 & 0xff;
    auVar36._2_13_ = auVar16._2_13_;
    auVar36[0xf] = 0;
    auVar33 = pshuflw((undefined1  [16])0x0,auVar36,0x1b);
    auVar33 = pshufhw(auVar33,auVar33,0x1b);
    sVar2 = auVar33._0_2_;
    local_88 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[0] - (0xff < sVar2);
    sVar2 = auVar33._2_2_;
    cStack_87 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[2] - (0xff < sVar2);
    sVar2 = auVar33._4_2_;
    cStack_86 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[4] - (0xff < sVar2);
    sVar2 = auVar33._6_2_;
    cStack_85 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[6] - (0xff < sVar2);
    sVar2 = auVar33._8_2_;
    cStack_84 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[8] - (0xff < sVar2);
    sVar2 = auVar33._10_2_;
    cStack_83 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[10] - (0xff < sVar2);
    sVar2 = auVar33._12_2_;
    cStack_82 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[0xc] - (0xff < sVar2);
    sVar2 = auVar33._14_2_;
    cStack_81 = (0 < sVar2) * (sVar2 < 0x100) * auVar33[0xe] - (0xff < sVar2);
    sVar2 = auVar35._0_2_;
    cStack_80 = (0 < sVar2) * (sVar2 < 0x100) * auVar35[0] - (0xff < sVar2);
    sVar2 = auVar35._2_2_;
    cStack_7f = (0 < sVar2) * (sVar2 < 0x100) * auVar35[2] - (0xff < sVar2);
    sVar2 = auVar35._4_2_;
    cStack_7e = (0 < sVar2) * (sVar2 < 0x100) * auVar35[4] - (0xff < sVar2);
    sVar2 = auVar35._6_2_;
    cStack_7d = (0 < sVar2) * (sVar2 < 0x100) * auVar35[6] - (0xff < sVar2);
    sVar2 = auVar35._8_2_;
    cStack_7c = (0 < sVar2) * (sVar2 < 0x100) * auVar35[8] - (0xff < sVar2);
    sVar2 = auVar35._10_2_;
    cStack_7b = (0 < sVar2) * (sVar2 < 0x100) * auVar35[10] - (0xff < sVar2);
    sVar2 = auVar35._12_2_;
    cStack_7a = (0 < sVar2) * (sVar2 < 0x100) * auVar35[0xc] - (0xff < sVar2);
    sVar2 = auVar35._14_2_;
    cStack_79 = (0 < sVar2) * (sVar2 < 0x100) * auVar35[0xe] - (0xff < sVar2);
    lVar31 = *param_2;
    if (*(int *)(lVar31 + 0x5c) == 0) {
      (*(code *)PTR_memcpy_000c3aa8)();
      lVar27 = *(longlong *)(lVar31 + 0x50) + 1;
      *(longlong *)(lVar31 + 0x50) = lVar27;
      *(uint *)(lVar31 + 0x58) = (uint)param_4;
      *(ulonglong *)(lVar31 + 0x70) =
           CONCAT17(cStack_81,
                    CONCAT16(cStack_82,
                             CONCAT15(cStack_83,
                                      CONCAT14(cStack_84,
                                               CONCAT13(cStack_85,
                                                        CONCAT12(cStack_86,
                                                                 CONCAT11(cStack_87,local_88)))))));
      *(ulonglong *)(lVar31 + 0x78) =
           CONCAT17(cStack_79,
                    CONCAT16(cStack_7a,
                             CONCAT15(cStack_7b,
                                      CONCAT14(cStack_7c,
                                               CONCAT13(cStack_7d,
                                                        CONCAT12(cStack_7e,
                                                                 CONCAT11(cStack_7f,cStack_80)))))))
      ;
      *(ulonglong *)(lVar31 + 0x60) =
           CONCAT17(cStack_91,
                    CONCAT16(cStack_92,
                             CONCAT15(cStack_93,
                                      CONCAT14(cStack_94,
                                               CONCAT13(local_98[3],
                                                        CONCAT12(local_98[2],
                                                                 CONCAT11(local_98[1],local_98[0])))
                                              ))));
      *(ulonglong *)(lVar31 + 0x68) =
           CONCAT17(cStack_89,
                    CONCAT16(cStack_8a,
                             CONCAT15(cStack_8b,
                                      CONCAT14(cStack_8c,
                                               CONCAT13(cStack_8d,
                                                        CONCAT12(cStack_8e,
                                                                 CONCAT11(cStack_8f,cStack_90)))))))
      ;
      *(undefined4 *)(lVar31 + 0x5c) = 1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar31 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar31 == 0) {
        uVar32 = (*(code *)PTR_handle_error_000c3a98)();
        if (local_178 != 0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar32,1);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      local_178 = 0x40;
      local_168 = 0;
      pbVar28 = local_98;
      lStack_170 = lVar31;
      do {
        lVar31 = local_168;
        bVar29 = *pbVar28;
        uVar1 = (&DAT_00009100)[bVar29 >> 4];
        if (local_168 == local_178) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_178,local_168,1,1,1);
        }
        *(undefined1 *)(lStack_170 + lVar31) = uVar1;
        local_168 = lVar31 + 1;
        uVar1 = (&DAT_00009100)[bVar29 & 0xf];
        if (local_168 == local_178) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_178,local_168,1,1,1);
        }
        *(undefined1 *)(lStack_170 + 1 + lVar31) = uVar1;
        local_168 = lVar31 + 2;
        pbVar28 = pbVar28 + 1;
      } while (local_168 != 0x40);
      param_1[2] = 0x40;
      *param_1 = local_178;
      param_1[1] = lStack_170;
      param_1[3] = lVar27;
      param_1[4] = lVar26;
      param_1[5] = param_4;
      return param_1;
    }
  }
  lVar26 = (*(code *)PTR_<&str>_000c3b30)();
  param_1[1] = lVar26;
  *param_1 = -1;
  return param_1;
}


