// 00520ea0 load

/* <craggemini_core[66f3c71560d70857]::license::Device>::load */

void __rustcall
<craggemini_core[66f3c71560d70857]::license::Device>::load
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
  char cStack_197;
  char cStack_196;
  char cStack_195;
  char cStack_194;
  char cStack_193;
  char cStack_192;
  byte bStack_191;
  byte bStack_190;
  char cStack_18f;
  char cStack_18e;
  char cStack_18d;
  char cStack_18c;
  char cStack_18b;
  byte bStack_18a;
  char cStack_189;
  char cStack_188;
  char cStack_187;
  char cStack_186;
  char cStack_185;
  char cStack_184;
  char cStack_183;
  char cStack_182;
  char cStack_181;
  char cStack_180;
  char cStack_17f;
  char cStack_17e;
  char cStack_17d;
  char cStack_17c;
  char cStack_17b;
  char cStack_17a;
  char cStack_179;
  byte local_178;
  byte bStack_177;
  undefined6 uStack_176;
  byte bStack_170;
  undefined4 uStack_16f;
  undefined2 uStack_16b;
  byte bStack_169;
  byte bStack_168;
  char cStack_167;
  undefined6 uStack_166;
  char cStack_160;
  undefined7 local_15f;
  char cStack_158;
  undefined8 uStack_157;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined8 uStack_137;
  undefined8 local_12f;
  undefined8 uStack_127;
  undefined8 local_11f;
  undefined8 uStack_117;
  undefined8 local_10f;
  undefined7 uStack_107;
  char cStack_100;
  undefined7 uStack_ff;
  undefined1 local_f8 [8];
  byte local_f0;
  undefined7 uStack_e7;
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
  
  <craggemini_core[66f3c71560d70857]::license::files::PrivateDir>::read
            (&local_178,param_2,"device.json",0xb);
  bVar5 = bStack_168;
  lVar3 = CONCAT62(uStack_176,CONCAT11(bStack_177,local_178));
  if (lVar3 == -1) {
    *(byte *)(param_1 + 1) = bStack_170;
    *param_1 = -1;
    return;
  }
  uStack_e7 = (undefined7)(CONCAT62(uStack_166,CONCAT11(cStack_167,bStack_168)) >> 8);
  local_f0 = bStack_170;
  puVar10 = (undefined1 *)CONCAT71(CONCAT16(bStack_169,CONCAT24(uStack_16b,uStack_16f)),bStack_170);
  uVar4 = CONCAT71(uStack_e7,bStack_168);
  local_198 = bStack_170;
  cStack_197 = (char)uStack_16f;
  cStack_196 = (char)((uint)uStack_16f >> 8);
  cStack_195 = (char)((uint)uStack_16f >> 0x10);
  cStack_194 = (char)((uint)uStack_16f >> 0x18);
  cStack_193 = (char)uStack_16b;
  cStack_192 = (char)((ushort)uStack_16b >> 8);
  bStack_191 = bStack_169;
  bStack_190 = bStack_168;
  cStack_18f = cStack_167;
  cStack_18e = (char)uStack_166;
  cStack_18d = (char)((uint6)uStack_166 >> 8);
  cStack_18c = (char)((uint6)uStack_166 >> 0x10);
  cStack_18b = (char)((uint6)uStack_166 >> 0x18);
  bStack_18a = (byte)((uint6)uStack_166 >> 0x20);
  cStack_189 = (char)((uint6)uStack_166 >> 0x28);
  cStack_188 = '\0';
  cStack_187 = '\0';
  cStack_186 = '\0';
  cStack_185 = '\0';
  cStack_184 = '\0';
  cStack_183 = '\0';
  cStack_182 = '\0';
  cStack_181 = '\0';
  cStack_180 = '\0';
  cStack_17f = '\0';
  cStack_17e = '\0';
  cStack_17d = '\0';
  cStack_17c = '\0';
  cStack_17b = '\0';
  cStack_17a = '\0';
  cStack_179 = '\0';
  local_e0 = param_5;
  local_d8 = param_6;
  serde_json[dc3825464c436029]::de::from_trait::
  <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::Device>
            (&local_178,&local_198);
  local_d0 = CONCAT62(uStack_176,CONCAT11(bStack_177,local_178));
  if (local_d0 == -1) {
    local_198 = bStack_170;
    cStack_197 = (char)uStack_16f;
    cStack_196 = (char)((uint)uStack_16f >> 8);
    cStack_195 = (char)((uint)uStack_16f >> 0x10);
    cStack_194 = (char)((uint)uStack_16f >> 0x18);
    cStack_193 = (char)uStack_16b;
    cStack_192 = (char)((ushort)uStack_16b >> 8);
    bStack_191 = bStack_169;
    uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                       (&local_198);
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = -1;
    goto LAB_005210f7;
  }
  uStack_c7 = CONCAT16(bStack_169,CONCAT24(uStack_16b,uStack_16f));
  uStack_bf = CONCAT61(uStack_166,cStack_167);
  bStack_c0 = bStack_168;
  cStack_b8 = cStack_160;
  uStack_b7 = local_15f;
  cStack_b0 = cStack_158;
  uStack_af = (undefined7)uStack_157;
  uStack_a8 = (undefined1)((ulonglong)uStack_157 >> 0x38);
  local_a7 = (undefined7)local_14f;
  uStack_a0._0_1_ = (undefined1)((ulonglong)local_14f >> 0x38);
  uStack_a0._1_3_ = (undefined3)uStack_147;
  uStack_9c = (undefined4)((ulonglong)uStack_147 >> 0x18);
  uStack_98._0_1_ = (undefined1)((ulonglong)uStack_147 >> 0x38);
  uStack_98._1_3_ = (undefined3)local_13f;
  uStack_94 = (undefined4)((ulonglong)local_13f >> 0x18);
  uStack_90 = (undefined1)((ulonglong)local_13f >> 0x38);
  uStack_8f = (undefined7)uStack_137;
  uStack_88 = (undefined1)((ulonglong)uStack_137 >> 0x38);
  local_87 = (undefined7)local_12f;
  uStack_80 = (undefined1)((ulonglong)local_12f >> 0x38);
  uStack_7f = (undefined7)uStack_127;
  uStack_78 = (undefined1)((ulonglong)uStack_127 >> 0x38);
  uStack_77 = (undefined7)local_11f;
  uStack_70 = (undefined1)((ulonglong)local_11f >> 0x38);
  uStack_6f = (undefined7)uStack_117;
  uStack_68 = (undefined1)((ulonglong)uStack_117 >> 0x38);
  local_67 = (undefined7)local_10f;
  uStack_60 = (undefined1)((ulonglong)local_10f >> 0x38);
  uStack_5f = uStack_107;
  cStack_58 = cStack_100;
  uStack_57 = uStack_ff;
  bStack_c8 = bStack_170;
  if ((cStack_100 == '\x01') && (CONCAT71(uStack_bf,bStack_168) == 10)) {
    uVar11 = *(ulonglong *)CONCAT71(uStack_c7,bStack_170) ^ 0x696d656767617263;
    bVar2 = (short)((ulonglong *)CONCAT71(uStack_c7,bStack_170))[1] != 0x696e || uVar11 != 0;
    if ((0xff < param_4 - 1) || (bVar2)) goto LAB_005210de;
    if (param_4 < 0x10) {
      uVar11 = 0;
      do {
        if (*(char *)(param_3 + uVar11) == '\0') goto LAB_005210de;
        uVar11 = uVar11 + 1;
      } while (param_4 != uVar11);
    }
    else {
      lVar9 = (*(code *)PTR_memchr_aligned_00799490)(CONCAT71((int7)(uVar11 >> 8),bVar2),param_4);
      if (lVar9 == 1) goto LAB_005210de;
    }
    uVar12 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
    if ((extraout_RDX != param_4) ||
       (iVar8 = (*(code *)PTR_bcmp_00799020)(uVar12,param_4), iVar8 != 0)) goto LAB_005210de;
    if ((CONCAT71(local_a7,uStack_a8) != param_4) ||
       (iVar8 = (*(code *)PTR_bcmp_00799020)(extraout_XMM0_Qa,param_4), iVar8 != 0)) {
LAB_005211b2:
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_005210e3;
    }
    uVar12 = craggemini_core[66f3c71560d70857]::license::machine_hash(&local_178,local_e0,local_d8);
    lVar9 = CONCAT62(uStack_176,CONCAT11(bStack_177,local_178));
    bVar7 = bStack_170;
    if (lVar9 == -1) {
LAB_0052128d:
      *(byte *)(param_1 + 1) = bVar7;
      goto LAB_005210e3;
    }
    if (CONCAT71(uStack_8f,uStack_90) != CONCAT62(uStack_166,CONCAT11(cStack_167,bStack_168))) {
LAB_00521232:
      if (lVar9 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      goto LAB_005211b2;
    }
    iVar8 = (*(code *)PTR_bcmp_00799020)();
    uVar12 = extraout_XMM0_Qa_00;
    if (iVar8 != 0) goto LAB_00521232;
    if (lVar9 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa_00,1);
    }
    craggemini_core[66f3c71560d70857]::license::decode::<32:usize>
              (&local_178,CONCAT71(uStack_7f,uStack_80),CONCAT71(uStack_77,uStack_78));
    bVar6 = bStack_168;
    bVar7 = bStack_177;
    if (local_178 == 1) goto LAB_0052128d;
    local_1b7 = CONCAT17((byte)uStack_16f,CONCAT16(bStack_170,uStack_176));
    uVar12 = CONCAT17(cStack_160,CONCAT61(uStack_166,cStack_167));
    uStack_1a7 = (undefined7)((ulonglong)uVar12 >> 8);
    local_1af = (undefined4)CONCAT23(uStack_16b,uStack_16f._1_3_);
    local_1ab = (undefined2)(CONCAT15(bStack_169,CONCAT23(uStack_16b,uStack_16f._1_3_)) >> 0x20);
    local_1b8 = bStack_177;
    bStack_168 = cStack_167;
    cStack_167 = (char)uStack_166;
    uStack_166 = (undefined6)((ulonglong)uVar12 >> 0x10);
    cStack_160 = (char)local_15f;
    local_15f = (undefined7)(CONCAT17(cStack_158,local_15f) >> 8);
    local_178 = bStack_177;
    bStack_177 = (byte)uStack_176;
    uStack_176 = (undefined6)(CONCAT16(bStack_170,uStack_176) >> 8);
    bStack_170 = (byte)uStack_16f;
    uStack_16f = local_1af;
    uStack_16b = local_1ab;
    bStack_169 = bVar6;
    (*(code *)PTR_from_00799cd8)();
    (*(code *)PTR_zeroize_00799ce0)();
    craggemini_core[66f3c71560d70857]::license::decode::<32:usize>
              (&local_178,CONCAT71(local_67,uStack_68),CONCAT71(uStack_5f,uStack_60));
    if (local_178 == 1) {
      *(byte *)(param_1 + 1) = bStack_177;
    }
    else {
      cStack_187 = (char)uStack_166;
      cStack_186 = (char)((uint6)uStack_166 >> 8);
      cStack_185 = (char)((uint6)uStack_166 >> 0x10);
      cStack_184 = (char)((uint6)uStack_166 >> 0x18);
      cStack_183 = (char)((uint6)uStack_166 >> 0x20);
      cStack_182 = (char)((uint6)uStack_166 >> 0x28);
      cStack_181 = cStack_160;
      cStack_180 = (char)local_15f;
      cStack_17f = (char)((uint7)local_15f >> 8);
      cStack_17e = (char)((uint7)local_15f >> 0x10);
      cStack_17d = (char)((uint7)local_15f >> 0x18);
      cStack_17c = (char)((uint7)local_15f >> 0x20);
      cStack_17b = (char)((uint7)local_15f >> 0x28);
      cStack_17a = (char)((uint7)local_15f >> 0x30);
      cStack_179 = cStack_158;
      cStack_197 = (char)uStack_176;
      cStack_196 = (char)((uint6)uStack_176 >> 8);
      cStack_195 = (char)((uint6)uStack_176 >> 0x10);
      cStack_194 = (char)((uint6)uStack_176 >> 0x18);
      cStack_193 = (char)((uint6)uStack_176 >> 0x20);
      cStack_192 = (char)((uint6)uStack_176 >> 0x28);
      bStack_191 = bStack_170;
      bStack_190 = (byte)uStack_16f;
      cStack_18f = (char)((uint)uStack_16f >> 8);
      cStack_18e = (char)((uint)uStack_16f >> 0x10);
      cStack_18d = (char)((uint)uStack_16f >> 0x18);
      cStack_18c = (char)uStack_16b;
      cStack_18b = (char)((ushort)uStack_16b >> 8);
      bStack_18a = bStack_169;
      cStack_189 = bStack_168;
      cStack_188 = cStack_167;
      local_198 = bStack_177;
      auVar13[0] = -(local_50 == bStack_177);
      auVar13[1] = -(cStack_4f == cStack_197);
      auVar13[2] = -(cStack_4e == cStack_196);
      auVar13[3] = -(cStack_4d == cStack_195);
      auVar13[4] = -(cStack_4c == cStack_194);
      auVar13[5] = -(cStack_4b == cStack_193);
      auVar13[6] = -(cStack_4a == cStack_192);
      auVar13[7] = -(bStack_49 == bStack_170);
      auVar13[8] = -(bStack_48 == (byte)uStack_16f);
      auVar13[9] = -(cStack_47 == cStack_18f);
      auVar13[10] = -(cStack_46 == cStack_18e);
      auVar13[0xb] = -(cStack_45 == cStack_18d);
      auVar13[0xc] = -(cStack_44 == cStack_18c);
      auVar13[0xd] = -(cStack_43 == cStack_18b);
      auVar13[0xe] = -(bStack_42 == bStack_169);
      auVar13[0xf] = -(cStack_41 == bStack_168);
      auVar14[0] = -(cStack_167 == local_40[0]);
      auVar14[1] = -(cStack_187 == local_40[1]);
      auVar14[2] = -(cStack_186 == local_40[2]);
      auVar14[3] = -(cStack_185 == local_40[3]);
      auVar14[4] = -(cStack_184 == local_40[4]);
      auVar14[5] = -(cStack_183 == local_40[5]);
      auVar14[6] = -(cStack_182 == local_40[6]);
      auVar14[7] = -(cStack_160 == local_40[7]);
      auVar14[8] = -(cStack_180 == local_40[8]);
      auVar14[9] = -(cStack_17f == local_40[9]);
      auVar14[10] = -(cStack_17e == local_40[10]);
      auVar14[0xb] = -(cStack_17d == local_40[0xb]);
      auVar14[0xc] = -(cStack_17c == local_40[0xc]);
      auVar14[0xd] = -(cStack_17b == local_40[0xd]);
      auVar14[0xe] = -(cStack_17a == local_40[0xe]);
      auVar14[0xf] = -(cStack_158 == local_40[0xf]);
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
        <zeroize[9db449f162459538]::Zeroizing<alloc[12e961f32105355]::vec::Vec<u8>>>(local_f8);
        return;
      }
      *(undefined1 *)(param_1 + 1) = 3;
    }
    *param_1 = -1;
    <zeroize[9db449f162459538]::Zeroizing<[u8;32:usize]>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_1b8);
  }
  else {
LAB_005210de:
    *(undefined1 *)(param_1 + 1) = 3;
LAB_005210e3:
    *param_1 = -1;
  }
  uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
           <craggemini_core[66f3c71560d70857]::license::Device>(&local_d0);
LAB_005210f7:
  puVar1 = puVar10 + uVar4;
  uVar12 = (*(code *)PTR_memset_00799090)(uVar12,lVar3 - uVar4);
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
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
  }
  return;
}


