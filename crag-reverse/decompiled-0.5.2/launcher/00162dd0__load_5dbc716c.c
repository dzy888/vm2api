// 00162dd0 load

/* <craggemini[b21da2d71f2da7a3]::license::Device>::load */

void __rustcall
<craggemini[b21da2d71f2da7a3]::license::Device>::load
          (longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong extraout_RDX;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte local_1b8;
  undefined8 local_1b7;
  undefined4 local_1af;
  undefined2 local_1ab;
  undefined7 uStack_1a7;
  byte local_198;
  byte bStack_197;
  undefined6 uStack_196;
  byte bStack_190;
  undefined4 uStack_18f;
  undefined2 uStack_18b;
  byte bStack_189;
  byte bStack_188;
  char cStack_187;
  undefined6 uStack_186;
  char cStack_180;
  undefined7 local_17f;
  char cStack_178;
  undefined8 uStack_177;
  undefined8 local_16f;
  undefined8 uStack_167;
  undefined8 local_15f;
  undefined8 uStack_157;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined8 uStack_137;
  undefined8 local_12f;
  undefined7 uStack_127;
  char cStack_120;
  undefined7 uStack_11f;
  undefined1 local_118 [8];
  byte local_110;
  undefined7 uStack_107;
  byte local_100;
  char cStack_ff;
  char cStack_fe;
  char cStack_fd;
  char cStack_fc;
  char cStack_fb;
  char cStack_fa;
  byte bStack_f9;
  byte bStack_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  byte bStack_f2;
  char cStack_f1;
  char cStack_f0;
  char cStack_ef;
  char cStack_ee;
  char cStack_ed;
  char cStack_ec;
  char cStack_eb;
  char cStack_ea;
  char cStack_e9;
  char cStack_e8;
  char cStack_e7;
  char cStack_e6;
  char cStack_e5;
  char cStack_e4;
  char cStack_e3;
  char cStack_e2;
  char cStack_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  byte bStack_c0;
  undefined7 uStack_bf;
  char cStack_b8;
  undefined7 uStack_b7;
  char cStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 local_a7;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  byte local_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  byte bStack_49;
  byte bStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  byte bStack_42;
  char cStack_41;
  undefined1 local_40 [16];
  
  <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::read
            (&local_198,param_2,"device.json",0xb);
  bVar5 = bStack_188;
  lVar3 = CONCAT62(uStack_196,CONCAT11(bStack_197,local_198));
  if (lVar3 == -1) {
    *(byte *)(param_1 + 1) = bStack_190;
    *param_1 = -1;
    return;
  }
  uStack_107 = (undefined7)(CONCAT62(uStack_186,CONCAT11(cStack_187,bStack_188)) >> 8);
  local_110 = bStack_190;
  puVar10 = (undefined1 *)CONCAT71(CONCAT16(bStack_189,CONCAT24(uStack_18b,uStack_18f)),bStack_190);
  uVar4 = CONCAT71(uStack_107,bStack_188);
  local_100 = bStack_190;
  cStack_ff = (char)uStack_18f;
  cStack_fe = (char)((uint)uStack_18f >> 8);
  cStack_fd = (char)((uint)uStack_18f >> 0x10);
  cStack_fc = (char)((uint)uStack_18f >> 0x18);
  cStack_fb = (char)uStack_18b;
  cStack_fa = (char)((ushort)uStack_18b >> 8);
  bStack_f9 = bStack_189;
  bStack_f8 = bStack_188;
  cStack_f7 = cStack_187;
  cStack_f6 = (char)uStack_186;
  cStack_f5 = (char)((uint6)uStack_186 >> 8);
  cStack_f4 = (char)((uint6)uStack_186 >> 0x10);
  cStack_f3 = (char)((uint6)uStack_186 >> 0x18);
  bStack_f2 = (byte)((uint6)uStack_186 >> 0x20);
  cStack_f1 = (char)((uint6)uStack_186 >> 0x28);
  cStack_f0 = '\0';
  cStack_ef = '\0';
  cStack_ee = '\0';
  cStack_ed = '\0';
  cStack_ec = '\0';
  cStack_eb = '\0';
  cStack_ea = '\0';
  cStack_e9 = '\0';
  cStack_e8 = '\0';
  cStack_e7 = '\0';
  cStack_e6 = '\0';
  cStack_e5 = '\0';
  cStack_e4 = '\0';
  cStack_e3 = '\0';
  cStack_e2 = '\0';
  cStack_e1 = '\0';
  local_e0 = param_5;
  local_d8 = param_6;
  serde_json[dc3825464c436029]::de::from_trait::
  <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::Device>
            (&local_198,&local_100);
  local_d0 = CONCAT62(uStack_196,CONCAT11(bStack_197,local_198));
  if (local_d0 == -1) {
    uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                       (CONCAT17(bStack_189,CONCAT25(uStack_18b,CONCAT41(uStack_18f,bStack_190))));
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = -1;
    goto LAB_0016301d;
  }
  uStack_c7 = CONCAT16(bStack_189,CONCAT24(uStack_18b,uStack_18f));
  uStack_bf = CONCAT61(uStack_186,cStack_187);
  bStack_c0 = bStack_188;
  cStack_b8 = cStack_180;
  uStack_b7 = local_17f;
  cStack_b0 = cStack_178;
  uStack_af = (undefined7)uStack_177;
  uStack_a8 = (undefined1)((ulonglong)uStack_177 >> 0x38);
  local_a7 = (undefined7)local_16f;
  uStack_a0._0_1_ = (undefined1)((ulonglong)local_16f >> 0x38);
  uStack_a0._1_3_ = (undefined3)uStack_167;
  uStack_9c = (undefined4)((ulonglong)uStack_167 >> 0x18);
  uStack_98._0_1_ = (undefined1)((ulonglong)uStack_167 >> 0x38);
  uStack_98._1_3_ = (undefined3)local_15f;
  uStack_94 = (undefined4)((ulonglong)local_15f >> 0x18);
  uStack_90 = (undefined1)((ulonglong)local_15f >> 0x38);
  uStack_8f = (undefined7)uStack_157;
  uStack_88 = (undefined1)((ulonglong)uStack_157 >> 0x38);
  local_87 = (undefined7)local_14f;
  uStack_80 = (undefined1)((ulonglong)local_14f >> 0x38);
  uStack_7f = (undefined7)uStack_147;
  uStack_78 = (undefined1)((ulonglong)uStack_147 >> 0x38);
  uStack_77 = (undefined7)local_13f;
  uStack_70 = (undefined1)((ulonglong)local_13f >> 0x38);
  uStack_6f = (undefined7)uStack_137;
  uStack_68 = (undefined1)((ulonglong)uStack_137 >> 0x38);
  local_67 = (undefined7)local_12f;
  uStack_60 = (undefined1)((ulonglong)local_12f >> 0x38);
  uStack_5f = uStack_127;
  cStack_58 = cStack_120;
  uStack_57 = uStack_11f;
  bStack_c8 = bStack_190;
  if ((cStack_120 == '\x01') && (CONCAT71(uStack_bf,bStack_188) == 10)) {
    uVar11 = *(ulonglong *)CONCAT71(uStack_c7,bStack_190) ^ 0x696d656767617263;
    bVar2 = (short)((ulonglong *)CONCAT71(uStack_c7,bStack_190))[1] != 0x696e || uVar11 != 0;
    if ((0xff < param_4 - 1) || (bVar2)) goto LAB_00163004;
    if (param_4 < 0x10) {
      uVar11 = 0;
      do {
        if (*(char *)(param_3 + uVar11) == '\0') goto LAB_00163004;
        uVar11 = uVar11 + 1;
      } while (param_4 != uVar11);
    }
    else {
      lVar9 = (*(code *)PTR_memchr_aligned_00219d40)(CONCAT71((int7)(uVar11 >> 8),bVar2),param_4);
      if (lVar9 == 1) goto LAB_00163004;
    }
    uVar12 = <str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
    if ((extraout_RDX != param_4) ||
       (iVar8 = (*(code *)PTR_bcmp_00219d38)(uVar12,param_4), iVar8 != 0)) goto LAB_00163004;
    if ((CONCAT71(local_a7,uStack_a8) != param_4) ||
       (iVar8 = (*(code *)PTR_bcmp_00219d38)(extraout_XMM0_Qa,param_4), iVar8 != 0)) {
LAB_001630e2:
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_00163009;
    }
    uVar12 = craggemini[b21da2d71f2da7a3]::license::machine_hash(&local_198,local_e0,local_d8);
    lVar9 = CONCAT62(uStack_196,CONCAT11(bStack_197,local_198));
    bVar7 = bStack_190;
    if (lVar9 == -1) {
LAB_001631bd:
      *(byte *)(param_1 + 1) = bVar7;
      goto LAB_00163009;
    }
    if (CONCAT71(uStack_8f,uStack_90) != CONCAT62(uStack_186,CONCAT11(cStack_187,bStack_188))) {
LAB_00163162:
      if (lVar9 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
      }
      goto LAB_001630e2;
    }
    iVar8 = (*(code *)PTR_bcmp_00219d38)();
    uVar12 = extraout_XMM0_Qa_00;
    if (iVar8 != 0) goto LAB_00163162;
    if (lVar9 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Qa_00,1);
    }
    craggemini[b21da2d71f2da7a3]::license::decode::<32:usize>
              (&local_198,CONCAT71(uStack_7f,uStack_80),CONCAT71(uStack_77,uStack_78));
    bVar6 = bStack_188;
    bVar7 = bStack_197;
    if (local_198 == 1) goto LAB_001631bd;
    local_1b7 = CONCAT17((byte)uStack_18f,CONCAT16(bStack_190,uStack_196));
    uVar12 = CONCAT17(cStack_180,CONCAT61(uStack_186,cStack_187));
    uStack_1a7 = (undefined7)((ulonglong)uVar12 >> 8);
    local_1af = (undefined4)CONCAT23(uStack_18b,uStack_18f._1_3_);
    local_1ab = (undefined2)(CONCAT15(bStack_189,CONCAT23(uStack_18b,uStack_18f._1_3_)) >> 0x20);
    local_1b8 = bStack_197;
    bStack_188 = cStack_187;
    cStack_187 = (char)uStack_186;
    uStack_186 = (undefined6)((ulonglong)uVar12 >> 0x10);
    cStack_180 = (char)local_17f;
    local_17f = (undefined7)(CONCAT17(cStack_178,local_17f) >> 8);
    local_198 = bStack_197;
    bStack_197 = (byte)uStack_196;
    uStack_196 = (undefined6)(CONCAT16(bStack_190,uStack_196) >> 8);
    bStack_190 = (byte)uStack_18f;
    uStack_18f = local_1af;
    uStack_18b = local_1ab;
    bStack_189 = bVar6;
    (*(code *)PTR_from_00219d48)();
    (*(code *)PTR_zeroize_00219d50)();
    craggemini[b21da2d71f2da7a3]::license::decode::<32:usize>
              (&local_198,CONCAT71(local_67,uStack_68),CONCAT71(uStack_5f,uStack_60));
    if (local_198 == 1) {
      *(byte *)(param_1 + 1) = bStack_197;
    }
    else {
      cStack_ef = (char)uStack_186;
      cStack_ee = (char)((uint6)uStack_186 >> 8);
      cStack_ed = (char)((uint6)uStack_186 >> 0x10);
      cStack_ec = (char)((uint6)uStack_186 >> 0x18);
      cStack_eb = (char)((uint6)uStack_186 >> 0x20);
      cStack_ea = (char)((uint6)uStack_186 >> 0x28);
      cStack_e9 = cStack_180;
      cStack_e8 = (char)local_17f;
      cStack_e7 = (char)((uint7)local_17f >> 8);
      cStack_e6 = (char)((uint7)local_17f >> 0x10);
      cStack_e5 = (char)((uint7)local_17f >> 0x18);
      cStack_e4 = (char)((uint7)local_17f >> 0x20);
      cStack_e3 = (char)((uint7)local_17f >> 0x28);
      cStack_e2 = (char)((uint7)local_17f >> 0x30);
      cStack_e1 = cStack_178;
      cStack_ff = (char)uStack_196;
      cStack_fe = (char)((uint6)uStack_196 >> 8);
      cStack_fd = (char)((uint6)uStack_196 >> 0x10);
      cStack_fc = (char)((uint6)uStack_196 >> 0x18);
      cStack_fb = (char)((uint6)uStack_196 >> 0x20);
      cStack_fa = (char)((uint6)uStack_196 >> 0x28);
      bStack_f9 = bStack_190;
      bStack_f8 = (byte)uStack_18f;
      cStack_f7 = (char)((uint)uStack_18f >> 8);
      cStack_f6 = (char)((uint)uStack_18f >> 0x10);
      cStack_f5 = (char)((uint)uStack_18f >> 0x18);
      cStack_f4 = (char)uStack_18b;
      cStack_f3 = (char)((ushort)uStack_18b >> 8);
      bStack_f2 = bStack_189;
      cStack_f1 = bStack_188;
      cStack_f0 = cStack_187;
      local_100 = bStack_197;
      auVar13[0] = -(local_50 == bStack_197);
      auVar13[1] = -(cStack_4f == cStack_ff);
      auVar13[2] = -(cStack_4e == cStack_fe);
      auVar13[3] = -(cStack_4d == cStack_fd);
      auVar13[4] = -(cStack_4c == cStack_fc);
      auVar13[5] = -(cStack_4b == cStack_fb);
      auVar13[6] = -(cStack_4a == cStack_fa);
      auVar13[7] = -(bStack_49 == bStack_190);
      auVar13[8] = -(bStack_48 == (byte)uStack_18f);
      auVar13[9] = -(cStack_47 == cStack_f7);
      auVar13[10] = -(cStack_46 == cStack_f6);
      auVar13[0xb] = -(cStack_45 == cStack_f5);
      auVar13[0xc] = -(cStack_44 == cStack_f4);
      auVar13[0xd] = -(cStack_43 == cStack_f3);
      auVar13[0xe] = -(bStack_42 == bStack_189);
      auVar13[0xf] = -(cStack_41 == bStack_188);
      auVar14[0] = -(cStack_187 == local_40[0]);
      auVar14[1] = -(cStack_ef == local_40[1]);
      auVar14[2] = -(cStack_ee == local_40[2]);
      auVar14[3] = -(cStack_ed == local_40[3]);
      auVar14[4] = -(cStack_ec == local_40[4]);
      auVar14[5] = -(cStack_eb == local_40[5]);
      auVar14[6] = -(cStack_ea == local_40[6]);
      auVar14[7] = -(cStack_180 == local_40[7]);
      auVar14[8] = -(cStack_e8 == local_40[8]);
      auVar14[9] = -(cStack_e7 == local_40[9]);
      auVar14[10] = -(cStack_e6 == local_40[10]);
      auVar14[0xb] = -(cStack_e5 == local_40[0xb]);
      auVar14[0xc] = -(cStack_e4 == local_40[0xc]);
      auVar14[0xd] = -(cStack_e3 == local_40[0xd]);
      auVar14[0xe] = -(cStack_e2 == local_40[0xe]);
      auVar14[0xf] = -(cStack_178 == local_40[0xf]);
      auVar14 = auVar14 & auVar13;
      if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[0xe] = CONCAT71(uStack_5f,uStack_60);
        param_1[0xf] = CONCAT71(uStack_57,cStack_58);
        param_1[0xc] = CONCAT71(uStack_6f,uStack_70);
        param_1[0xd] = CONCAT71(local_67,uStack_68);
        param_1[10] = CONCAT71(uStack_7f,uStack_80);
        param_1[0xb] = CONCAT71(uStack_77,uStack_78);
        param_1[8] = CONCAT71(uStack_8f,uStack_90);
        param_1[9] = CONCAT71(local_87,uStack_88);
        *(undefined4 *)(param_1 + 6) = uStack_a0;
        *(undefined4 *)((longlong)param_1 + 0x34) = uStack_9c;
        *(undefined4 *)(param_1 + 7) = uStack_98;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_94;
        param_1[4] = CONCAT71(uStack_af,cStack_b0);
        param_1[5] = CONCAT71(local_a7,uStack_a8);
        param_1[2] = CONCAT71(uStack_bf,bStack_c0);
        param_1[3] = CONCAT71(uStack_b7,cStack_b8);
        *param_1 = local_d0;
        param_1[1] = CONCAT71(uStack_c7,bStack_c8);
        <zeroize[9db449f162459538]::Zeroizing<[u8;32:usize]>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_1b8);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>(local_118);
        return;
      }
      *(undefined1 *)(param_1 + 1) = 3;
    }
    *param_1 = -1;
    <zeroize[9db449f162459538]::Zeroizing<[u8;32:usize]>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_1b8);
  }
  else {
LAB_00163004:
    *(undefined1 *)(param_1 + 1) = 3;
LAB_00163009:
    *param_1 = -1;
  }
  uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Device>
                     (&local_d0);
LAB_0016301d:
  puVar1 = puVar10 + uVar4;
  uVar12 = (*(code *)PTR_memset_00219d00)(uVar12,lVar3 - uVar4);
  if (uVar4 != 0) {
    uVar11 = (ulonglong)bVar5 & 7;
    if ((bVar5 & 7) != 0) {
      do {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (7 < uVar4) {
      do {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10 = puVar10 + 8;
      } while (puVar10 != puVar1);
    }
  }
  if (lVar3 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
  }
  return;
}


