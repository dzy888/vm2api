// 000610e0 read_request

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <agy_bridge[64a9e9deac6c45ce]::shm::ShmClient>::read_request */

ulonglong * __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ShmClient>::read_request
          (ulonglong *param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  char cVar1;
  longlong lVar2;
  short sVar3;
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
  undefined1 auVar17 [15];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  uint uVar23;
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  char cVar30;
  char cVar31;
  char cVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  longlong lVar37;
  byte bVar38;
  byte bVar39;
  ulonglong uVar40;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  char local_1b8;
  char cStack_1b7;
  char cStack_1b6;
  char cStack_1b5;
  char cStack_1b4;
  char cStack_1b3;
  char cStack_1b2;
  char cStack_1b0;
  char cStack_1af;
  char cStack_1ae;
  char cStack_1ad;
  char cStack_1ac;
  char cStack_1ab;
  char cStack_1aa;
  char cStack_1a8;
  char cStack_1a7;
  char cStack_1a6;
  char cStack_1a5;
  char cStack_1a4;
  char cStack_1a3;
  char cStack_1a2;
  char cStack_1a0;
  char cStack_19f;
  char cStack_19e;
  char cStack_19d;
  char cStack_19c;
  char cStack_19b;
  char cStack_19a;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined7 uStack_190;
  char cStack_189;
  undefined7 local_188;
  char cStack_181;
  undefined7 uStack_180;
  char cStack_179;
  ulonglong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  byte local_130;
  undefined4 local_12f;
  undefined2 local_12b;
  undefined1 local_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  byte local_c0;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  
  if ((*(longlong *)(param_3 + 0x20) == param_2[2]) &&
     (uVar33 = *(ulonglong *)(param_3 + 0x28), uVar33 - 1 < (ulonglong)param_2[3])) {
    if (*(longlong *)(param_3 + 0x10) == 0x40) {
      lVar2 = *(longlong *)(param_3 + 8);
      local_188 = 0;
      cStack_181 = '\0';
      uStack_180 = 0;
      cStack_179 = '\0';
      local_198 = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      cStack_189 = '\0';
      param_4 = (byte *)&local_198;
      lVar37 = 0;
      do {
        cVar1 = *(char *)(lVar2 + lVar37);
        bVar38 = cVar1 - 0x30;
        if (9 < bVar38) {
          if ((byte)(cVar1 + 0x9fU) < 6) {
            bVar38 = cVar1 + 0xa9;
          }
          else {
            if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_000611cc;
            bVar38 = cVar1 - 0x37;
          }
        }
        cVar1 = *(char *)(lVar2 + 1 + lVar37);
        bVar39 = cVar1 - 0x30;
        if (9 < bVar39) {
          if ((byte)(cVar1 + 0x9fU) < 6) {
            bVar39 = cVar1 + 0xa9;
          }
          else {
            if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_000611cc;
            bVar39 = cVar1 - 0x37;
          }
        }
        *param_4 = bVar38 << 4 | bVar39;
        cVar32 = cStack_179;
        cVar31 = cStack_181;
        cVar1 = cStack_189;
        param_4 = param_4 + 1;
        lVar37 = lVar37 + 2;
      } while (lVar37 != 0x40);
      uVar23 = uStack_194 & 0xffffff;
      cStack_1b4 = (char)uVar23;
      cStack_1b3 = (char)(uVar23 >> 8);
      cStack_1b2 = (char)(uVar23 >> 0x10);
      local_1b8 = (char)local_198;
      cStack_1b7 = (char)((uint)local_198 >> 8);
      cStack_1b6 = (char)((uint)local_198 >> 0x10);
      cStack_1b5 = (char)((uint)local_198 >> 0x18);
      cVar30 = uStack_194._3_1_;
      lVar2 = *param_2;
      param_4 = *(byte **)(lVar2 + 0x20);
      uVar36 = *(undefined8 *)(lVar2 + 0x30);
      uVar18 = *(undefined8 *)(lVar2 + 0x38);
      uVar19 = *(undefined8 *)(lVar2 + 0x40);
      uVar20 = *(undefined8 *)(lVar2 + 0x48);
      local_b8 = uVar36;
      uStack_b0 = uVar18;
      local_a8 = uVar19;
      uStack_a0 = uVar20;
      if (((*(int *)(lVar2 + 0x2c) == 1) && (param_4 == *(byte **)(param_3 + 0x18))) &&
         (uVar33 == *(uint *)(lVar2 + 0x28))) {
        cStack_1b0 = (char)uStack_190;
        cStack_1af = (char)((uint7)uStack_190 >> 8);
        cStack_1ae = (char)((uint7)uStack_190 >> 0x10);
        cStack_1ad = (char)((uint7)uStack_190 >> 0x18);
        cStack_1ac = (char)((uint7)uStack_190 >> 0x20);
        cStack_1ab = (char)((uint7)uStack_190 >> 0x28);
        cStack_1aa = (char)((uint7)uStack_190 >> 0x30);
        cStack_1a8 = (char)local_188;
        cStack_1a7 = (char)((uint7)local_188 >> 8);
        cStack_1a6 = (char)((uint7)local_188 >> 0x10);
        cStack_1a5 = (char)((uint7)local_188 >> 0x18);
        cStack_1a4 = (char)((uint7)local_188 >> 0x20);
        cStack_1a3 = (char)((uint7)local_188 >> 0x28);
        cStack_1a2 = (char)((uint7)local_188 >> 0x30);
        cStack_1a0 = (char)uStack_180;
        cStack_19f = (char)((uint7)uStack_180 >> 8);
        cStack_19e = (char)((uint7)uStack_180 >> 0x10);
        cStack_19d = (char)((uint7)uStack_180 >> 0x18);
        cStack_19c = (char)((uint7)uStack_180 >> 0x20);
        cStack_19b = (char)((uint7)uStack_180 >> 0x28);
        cStack_19a = (char)((uint7)uStack_180 >> 0x30);
        local_a8._0_1_ = (char)uVar19;
        local_a8._1_1_ = (char)((ulonglong)uVar19 >> 8);
        local_a8._2_1_ = (char)((ulonglong)uVar19 >> 0x10);
        local_a8._3_1_ = (char)((ulonglong)uVar19 >> 0x18);
        local_a8._4_1_ = (char)((ulonglong)uVar19 >> 0x20);
        local_a8._5_1_ = (char)((ulonglong)uVar19 >> 0x28);
        local_a8._6_1_ = (char)((ulonglong)uVar19 >> 0x30);
        local_a8._7_1_ = (char)((ulonglong)uVar19 >> 0x38);
        uStack_a0._0_1_ = (char)uVar20;
        uStack_a0._1_1_ = (char)((ulonglong)uVar20 >> 8);
        uStack_a0._2_1_ = (char)((ulonglong)uVar20 >> 0x10);
        uStack_a0._3_1_ = (char)((ulonglong)uVar20 >> 0x18);
        uStack_a0._4_1_ = (char)((ulonglong)uVar20 >> 0x20);
        uStack_a0._5_1_ = (char)((ulonglong)uVar20 >> 0x28);
        uStack_a0._6_1_ = (char)((ulonglong)uVar20 >> 0x30);
        uStack_a0._7_1_ = (char)((ulonglong)uVar20 >> 0x38);
        auVar46[0] = -(cStack_1a8 == (char)local_a8);
        auVar46[1] = -(cStack_1a7 == local_a8._1_1_);
        auVar46[2] = -(cStack_1a6 == local_a8._2_1_);
        auVar46[3] = -(cStack_1a5 == local_a8._3_1_);
        auVar46[4] = -(cStack_1a4 == local_a8._4_1_);
        auVar46[5] = -(cStack_1a3 == local_a8._5_1_);
        auVar46[6] = -(cStack_1a2 == local_a8._6_1_);
        auVar46[7] = -(cStack_181 == local_a8._7_1_);
        auVar46[8] = -(cStack_1a0 == (char)uStack_a0);
        auVar46[9] = -(cStack_19f == uStack_a0._1_1_);
        auVar46[10] = -(cStack_19e == uStack_a0._2_1_);
        auVar46[0xb] = -(cStack_19d == uStack_a0._3_1_);
        auVar46[0xc] = -(cStack_19c == uStack_a0._4_1_);
        auVar46[0xd] = -(cStack_19b == uStack_a0._5_1_);
        auVar46[0xe] = -(cStack_19a == uStack_a0._6_1_);
        auVar46[0xf] = -(cStack_179 == uStack_a0._7_1_);
        local_b8._0_1_ = (char)uVar36;
        local_b8._1_1_ = (char)((ulonglong)uVar36 >> 8);
        local_b8._2_1_ = (char)((ulonglong)uVar36 >> 0x10);
        local_b8._3_1_ = (char)((ulonglong)uVar36 >> 0x18);
        local_b8._4_1_ = (char)((ulonglong)uVar36 >> 0x20);
        local_b8._5_1_ = (char)((ulonglong)uVar36 >> 0x28);
        local_b8._6_1_ = (char)((ulonglong)uVar36 >> 0x30);
        local_b8._7_1_ = (char)((ulonglong)uVar36 >> 0x38);
        uStack_b0._0_1_ = (char)uVar18;
        uStack_b0._1_1_ = (char)((ulonglong)uVar18 >> 8);
        uStack_b0._2_1_ = (char)((ulonglong)uVar18 >> 0x10);
        uStack_b0._3_1_ = (char)((ulonglong)uVar18 >> 0x18);
        uStack_b0._4_1_ = (char)((ulonglong)uVar18 >> 0x20);
        uStack_b0._5_1_ = (char)((ulonglong)uVar18 >> 0x28);
        uStack_b0._6_1_ = (char)((ulonglong)uVar18 >> 0x30);
        uStack_b0._7_1_ = (char)((ulonglong)uVar18 >> 0x38);
        auVar41[0] = -(local_1b8 == (char)local_b8);
        auVar41[1] = -(cStack_1b7 == local_b8._1_1_);
        auVar41[2] = -(cStack_1b6 == local_b8._2_1_);
        auVar41[3] = -(cStack_1b5 == local_b8._3_1_);
        auVar41[4] = -(cStack_1b4 == local_b8._4_1_);
        auVar41[5] = -(cStack_1b3 == local_b8._5_1_);
        auVar41[6] = -(cStack_1b2 == local_b8._6_1_);
        auVar41[7] = -(uStack_194._3_1_ == local_b8._7_1_);
        auVar41[8] = -(cStack_1b0 == (char)uStack_b0);
        auVar41[9] = -(cStack_1af == uStack_b0._1_1_);
        auVar41[10] = -(cStack_1ae == uStack_b0._2_1_);
        auVar41[0xb] = -(cStack_1ad == uStack_b0._3_1_);
        auVar41[0xc] = -(cStack_1ac == uStack_b0._4_1_);
        auVar41[0xd] = -(cStack_1ab == uStack_b0._5_1_);
        auVar41[0xe] = -(cStack_1aa == uStack_b0._6_1_);
        auVar41[0xf] = -(cStack_189 == uStack_b0._7_1_);
        auVar41 = auVar41 & auVar46;
        uVar36 = auVar41._0_8_;
        if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) == 0xffff) {
          if (uVar33 == 0) {
            uVar34 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
            uVar34 = (*(code *)PTR___rust_alloc_zeroed_000c3b88)();
            if (uVar34 == 0) {
              uVar36 = (*(code *)PTR_handle_error_000c3a98)();
              (*(code *)PTR___rust_dealloc_000c3aa0)(uVar36,1);
                    /* WARNING: Subroutine does not return */
              _Unwind_Resume();
            }
            uVar36 = extraout_XMM0_Qa;
          }
          uVar36 = (*(code *)PTR_memcpy_000c3aa8)(uVar36,uVar33);
          (*(code *)PTR_memset_000c3cd8)(uVar36,uVar33);
          *(undefined4 *)(lVar2 + 0x28) = 0;
          *(undefined1 (*) [16])(lVar2 + 0x40) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(lVar2 + 0x30) = (undefined1  [16])0x0;
          *(undefined4 *)(lVar2 + 0x2c) = 0;
          local_d0 = (undefined1  [16])0x0;
          local_e0 = (undefined1  [16])0x0;
          auStack_f0 = (undefined1  [16])0x0;
          auStack_100 = (undefined1  [16])0x0;
          local_c0 = 0;
          local_128 = _DAT_0000bdc0;
          uStack_120 = _UNK_0000bdc8;
          local_118 = _DAT_0000bdd0;
          uStack_110 = _UNK_0000bdd8;
          local_108 = 0;
          if (uVar33 < 0x40) {
            (*(code *)PTR_memcpy_000c3aa8)(_DAT_0000bdd0,uVar33);
            uVar40 = uVar33;
          }
          else {
            local_108 = uVar33 >> 6;
            uVar36 = (*(code *)PTR_compress256_000c3b98)();
            uVar40 = (ulonglong)((uint)uVar33 & 0x3f);
            (*(code *)PTR_memcpy_000c3aa8)(uVar36,uVar40);
          }
          uVar36 = local_128;
          bVar38 = (byte)uVar40;
          local_138 = local_d0._8_8_;
          local_12f = local_bf;
          local_12b = local_bb;
          local_129 = local_b9;
          local_178 = local_108;
          uStack_170 = auStack_100._0_8_;
          local_148 = local_e0._8_8_;
          uStack_140 = local_d0._0_8_;
          local_158 = auStack_f0._8_8_;
          uStack_150 = local_e0._0_8_;
          local_168 = auStack_100._8_8_;
          uStack_160 = auStack_f0._0_8_;
          local_188 = (undefined7)local_118;
          cStack_181 = (char)((ulonglong)local_118 >> 0x38);
          uStack_180 = (undefined7)uStack_110;
          cStack_179 = (char)((ulonglong)uStack_110 >> 0x38);
          local_198 = (undefined4)local_128;
          uStack_194 = (uint)((ulonglong)local_128 >> 0x20);
          uStack_190 = (undefined7)uStack_120;
          cStack_189 = (char)((ulonglong)uStack_120 >> 0x38);
          uVar35 = local_108 << 9;
          uVar35 = (local_108 & 0x7fffffffffffff) >> 0x2f | (uVar35 & 0xff000000000000) >> 0x28 |
                   (uVar35 & 0xff0000000000) >> 0x18 | (uVar35 & 0xff00000000) >> 8 |
                   (uVar35 & 0xff000000) << 8 | (uVar35 & 0xff0000) << 0x18 |
                   (((uint)bVar38 * 8 | uVar35) & 0xff00) << 0x28 |
                   (ulonglong)((uint)bVar38 * 8) << 0x38;
          local_130 = bVar38;
          local_c0 = bVar38;
          auStack_100[(uVar40 & 0xff) - 0x70] = 0x80;
          if ((bVar38 == 0x3f) ||
             (uVar36 = (*(code *)PTR_memset_000c3cd8)(uVar36,uVar40 & 0xff ^ 0x3f),
             (bVar38 ^ 0x38) < 8)) {
            (*(code *)PTR_compress256_000c3b98)(uVar36,1);
            local_78 = (undefined1  [16])0x0;
            local_88 = (undefined1  [16])0x0;
            local_98 = (undefined1  [16])0x0;
            local_68 = 0;
            local_60 = uVar35;
            (*(code *)PTR_compress256_000c3b98)(0,1);
          }
          else {
            local_138 = uVar35;
            (*(code *)PTR_compress256_000c3b98)(uVar36,1);
          }
          auVar21._8_7_ = uStack_190;
          auVar21._0_8_ = CONCAT44(uStack_194,local_198);
          auVar22._8_7_ = uStack_180;
          auVar22._0_8_ = CONCAT17(cStack_181,local_188);
          auVar45[1] = 0;
          auVar45[0] = (byte)uStack_190;
          auVar45[2] = (char)((uint7)uStack_190 >> 8);
          auVar45[3] = 0;
          auVar45[4] = (char)((uint7)uStack_190 >> 0x10);
          auVar45[5] = 0;
          auVar45[6] = (char)((uint7)uStack_190 >> 0x18);
          auVar45[7] = 0;
          auVar45[8] = (char)((uint7)uStack_190 >> 0x20);
          auVar45[9] = 0;
          auVar45[10] = (char)((uint7)uStack_190 >> 0x28);
          auVar45[0xb] = 0;
          auVar45[0xc] = (char)((uint7)uStack_190 >> 0x30);
          auVar45[0xd] = 0;
          auVar45[0xe] = cStack_189;
          auVar45[0xf] = 0;
          auVar41 = pshuflw(auVar45,auVar45,0x1b);
          auVar46 = pshufhw(auVar41,auVar41,0x1b);
          auVar4[0xd] = 0;
          auVar4._0_13_ = auVar21._0_13_;
          auVar4[0xe] = (char)(uStack_194 >> 0x18);
          auVar6[0xc] = (char)(uStack_194 >> 0x10);
          auVar6._0_12_ = auVar21._0_12_;
          auVar6._13_2_ = auVar4._13_2_;
          auVar8[0xb] = 0;
          auVar8._0_11_ = auVar21._0_11_;
          auVar8._12_3_ = auVar6._12_3_;
          auVar10[10] = (char)(uStack_194 >> 8);
          auVar10._0_10_ = auVar21._0_10_;
          auVar10._11_4_ = auVar8._11_4_;
          auVar12[9] = 0;
          auVar12._0_9_ = auVar21._0_9_;
          auVar12._10_5_ = auVar10._10_5_;
          auVar14[8] = (char)uStack_194;
          auVar14._0_8_ = CONCAT44(uStack_194,local_198);
          auVar14._9_6_ = auVar12._9_6_;
          auVar24._7_8_ = 0;
          auVar24._0_7_ = auVar14._8_7_;
          auVar25._1_8_ = SUB158(auVar24 << 0x40,7);
          auVar25[0] = (char)((uint)local_198 >> 0x18);
          auVar25._9_6_ = 0;
          auVar26._1_10_ = SUB1510(auVar25 << 0x30,5);
          auVar26[0] = (char)((uint)local_198 >> 0x10);
          auVar26._11_4_ = 0;
          auVar16[2] = (char)((uint)local_198 >> 8);
          auVar16._0_2_ = (ushort)local_198;
          auVar16._3_12_ = SUB1512(auVar26 << 0x20,3);
          auVar42._0_2_ = (ushort)local_198 & 0xff;
          auVar42._2_13_ = auVar16._2_13_;
          auVar42[0xf] = 0;
          auVar41 = pshuflw(auVar42,auVar42,0x1b);
          auVar41 = pshufhw(auVar41,auVar41,0x1b);
          sVar3 = auVar41._0_2_;
          local_58 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[0] - (0xff < sVar3);
          sVar3 = auVar41._2_2_;
          cStack_57 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[2] - (0xff < sVar3);
          sVar3 = auVar41._4_2_;
          cStack_56 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[4] - (0xff < sVar3);
          sVar3 = auVar41._6_2_;
          cStack_55 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[6] - (0xff < sVar3);
          sVar3 = auVar41._8_2_;
          cStack_54 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[8] - (0xff < sVar3);
          sVar3 = auVar41._10_2_;
          cStack_53 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[10] - (0xff < sVar3);
          sVar3 = auVar41._12_2_;
          cStack_52 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[0xc] - (0xff < sVar3);
          sVar3 = auVar41._14_2_;
          cStack_51 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[0xe] - (0xff < sVar3);
          sVar3 = auVar46._0_2_;
          cStack_50 = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0] - (0xff < sVar3);
          sVar3 = auVar46._2_2_;
          cStack_4f = (0 < sVar3) * (sVar3 < 0x100) * auVar46[2] - (0xff < sVar3);
          sVar3 = auVar46._4_2_;
          cStack_4e = (0 < sVar3) * (sVar3 < 0x100) * auVar46[4] - (0xff < sVar3);
          sVar3 = auVar46._6_2_;
          cStack_4d = (0 < sVar3) * (sVar3 < 0x100) * auVar46[6] - (0xff < sVar3);
          sVar3 = auVar46._8_2_;
          cStack_4c = (0 < sVar3) * (sVar3 < 0x100) * auVar46[8] - (0xff < sVar3);
          sVar3 = auVar46._10_2_;
          cStack_4b = (0 < sVar3) * (sVar3 < 0x100) * auVar46[10] - (0xff < sVar3);
          sVar3 = auVar46._12_2_;
          cStack_4a = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0xc] - (0xff < sVar3);
          sVar3 = auVar46._14_2_;
          cStack_49 = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0xe] - (0xff < sVar3);
          auVar47[1] = 0;
          auVar47[0] = (byte)uStack_180;
          auVar47[2] = (char)((uint7)uStack_180 >> 8);
          auVar47[3] = 0;
          auVar47[4] = (char)((uint7)uStack_180 >> 0x10);
          auVar47[5] = 0;
          auVar47[6] = (char)((uint7)uStack_180 >> 0x18);
          auVar47[7] = 0;
          auVar47[8] = (char)((uint7)uStack_180 >> 0x20);
          auVar47[9] = 0;
          auVar47[10] = (char)((uint7)uStack_180 >> 0x28);
          auVar47[0xb] = 0;
          auVar47[0xc] = (char)((uint7)uStack_180 >> 0x30);
          auVar47[0xd] = 0;
          auVar47[0xe] = cStack_179;
          auVar47[0xf] = 0;
          auVar41 = pshuflw(auVar47,auVar47,0x1b);
          auVar46 = pshufhw(auVar41,auVar41,0x1b);
          auVar5[0xd] = 0;
          auVar5._0_13_ = auVar22._0_13_;
          auVar5[0xe] = cStack_181;
          auVar7[0xc] = (char)((uint7)local_188 >> 0x30);
          auVar7._0_12_ = auVar22._0_12_;
          auVar7._13_2_ = auVar5._13_2_;
          auVar9[0xb] = 0;
          auVar9._0_11_ = auVar22._0_11_;
          auVar9._12_3_ = auVar7._12_3_;
          auVar11[10] = (char)((uint7)local_188 >> 0x28);
          auVar11._0_10_ = auVar22._0_10_;
          auVar11._11_4_ = auVar9._11_4_;
          auVar13[9] = 0;
          auVar13._0_9_ = auVar22._0_9_;
          auVar13._10_5_ = auVar11._10_5_;
          auVar15[8] = (char)((uint7)local_188 >> 0x20);
          auVar15._0_8_ = CONCAT17(cStack_181,local_188);
          auVar15._9_6_ = auVar13._9_6_;
          auVar27._7_8_ = 0;
          auVar27._0_7_ = auVar15._8_7_;
          auVar28._1_8_ = SUB158(auVar27 << 0x40,7);
          auVar28[0] = (char)((uint7)local_188 >> 0x18);
          auVar28._9_6_ = 0;
          auVar29._1_10_ = SUB1510(auVar28 << 0x30,5);
          auVar29[0] = (char)((uint7)local_188 >> 0x10);
          auVar29._11_4_ = 0;
          auVar17[2] = (char)((uint7)local_188 >> 8);
          auVar17._0_2_ = (ushort)local_188;
          auVar17._3_12_ = SUB1512(auVar29 << 0x20,3);
          auVar43._0_2_ = (ushort)local_188 & 0xff;
          auVar43._2_13_ = auVar17._2_13_;
          auVar43[0xf] = 0;
          auVar41 = pshuflw((undefined1  [16])0x0,auVar43,0x1b);
          auVar41 = pshufhw(auVar41,auVar41,0x1b);
          sVar3 = auVar41._0_2_;
          local_48 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[0] - (0xff < sVar3);
          sVar3 = auVar41._2_2_;
          cStack_47 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[2] - (0xff < sVar3);
          sVar3 = auVar41._4_2_;
          cStack_46 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[4] - (0xff < sVar3);
          sVar3 = auVar41._6_2_;
          cStack_45 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[6] - (0xff < sVar3);
          sVar3 = auVar41._8_2_;
          cStack_44 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[8] - (0xff < sVar3);
          sVar3 = auVar41._10_2_;
          cStack_43 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[10] - (0xff < sVar3);
          sVar3 = auVar41._12_2_;
          cStack_42 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[0xc] - (0xff < sVar3);
          sVar3 = auVar41._14_2_;
          cStack_41 = (0 < sVar3) * (sVar3 < 0x100) * auVar41[0xe] - (0xff < sVar3);
          sVar3 = auVar46._0_2_;
          cStack_40 = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0] - (0xff < sVar3);
          sVar3 = auVar46._2_2_;
          cStack_3f = (0 < sVar3) * (sVar3 < 0x100) * auVar46[2] - (0xff < sVar3);
          sVar3 = auVar46._4_2_;
          cStack_3e = (0 < sVar3) * (sVar3 < 0x100) * auVar46[4] - (0xff < sVar3);
          sVar3 = auVar46._6_2_;
          cStack_3d = (0 < sVar3) * (sVar3 < 0x100) * auVar46[6] - (0xff < sVar3);
          sVar3 = auVar46._8_2_;
          cStack_3c = (0 < sVar3) * (sVar3 < 0x100) * auVar46[8] - (0xff < sVar3);
          sVar3 = auVar46._10_2_;
          cStack_3b = (0 < sVar3) * (sVar3 < 0x100) * auVar46[10] - (0xff < sVar3);
          sVar3 = auVar46._12_2_;
          cStack_3a = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0xc] - (0xff < sVar3);
          sVar3 = auVar46._14_2_;
          cStack_39 = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0xe] - (0xff < sVar3);
          auVar48[0] = -(cStack_1a8 == local_48);
          auVar48[1] = -(cStack_1a7 == cStack_47);
          auVar48[2] = -(cStack_1a6 == cStack_46);
          auVar48[3] = -(cStack_1a5 == cStack_45);
          auVar48[4] = -(cStack_1a4 == cStack_44);
          auVar48[5] = -(cStack_1a3 == cStack_43);
          auVar48[6] = -(cStack_1a2 == cStack_42);
          auVar48[7] = -(cVar31 == cStack_41);
          auVar48[8] = -(cStack_1a0 == cStack_40);
          auVar48[9] = -(cStack_19f == cStack_3f);
          auVar48[10] = -(cStack_19e == cStack_3e);
          auVar48[0xb] = -(cStack_19d == cStack_3d);
          auVar48[0xc] = -(cStack_19c == cStack_3c);
          auVar48[0xd] = -(cStack_19b == cStack_3b);
          auVar48[0xe] = -(cStack_19a == cStack_3a);
          auVar48[0xf] = -(cVar32 == cStack_39);
          auVar44[0] = -(local_1b8 == local_58);
          auVar44[1] = -(cStack_1b7 == cStack_57);
          auVar44[2] = -(cStack_1b6 == cStack_56);
          auVar44[3] = -(cStack_1b5 == cStack_55);
          auVar44[4] = -(cStack_1b4 == cStack_54);
          auVar44[5] = -(cStack_1b3 == cStack_53);
          auVar44[6] = -(cStack_1b2 == cStack_52);
          auVar44[7] = -(cVar30 == cStack_51);
          auVar44[8] = -(cStack_1b0 == cStack_50);
          auVar44[9] = -(cStack_1af == cStack_4f);
          auVar44[10] = -(cStack_1ae == cStack_4e);
          auVar44[0xb] = -(cStack_1ad == cStack_4d);
          auVar44[0xc] = -(cStack_1ac == cStack_4c);
          auVar44[0xd] = -(cStack_1ab == cStack_4b);
          auVar44[0xe] = -(cStack_1aa == cStack_4a);
          auVar44[0xf] = -(cVar1 == cStack_49);
          auVar44 = auVar44 & auVar48;
          if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) {
            *param_1 = uVar33;
            param_1[1] = uVar34;
            param_1[2] = uVar33;
            return param_1;
          }
          uVar34 = (*(code *)PTR_<&str>_000c3b30)();
          param_1[1] = uVar34;
          *param_1 = 0xffffffffffffffff;
          if (uVar33 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Qa_00,1);
          return param_1;
        }
      }
      uVar36 = 0x2a;
    }
    else {
LAB_000611cc:
      uVar36 = 0x23;
    }
  }
  else {
    uVar36 = 0x2d;
  }
  uVar33 = (*(code *)PTR_<&str>_000c3b30)(param_4,uVar36);
  param_1[1] = uVar33;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


