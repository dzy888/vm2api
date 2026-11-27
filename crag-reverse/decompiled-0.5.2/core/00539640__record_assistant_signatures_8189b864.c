// 00539640 record_assistant_signatures

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::SignatureCache>::record_assistant_signatures */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::record_assistant_signatures
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,longlong param_5,
          longlong param_6,undefined8 param_7,ulonglong param_8,longlong param_9,ulonglong param_10)

{
  undefined8 uVar1;
  code *pcVar2;
  short sVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  uint3 uVar10;
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
  undefined *puVar26;
  undefined1 uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  ulonglong extraout_RDX;
  longlong extraout_RDX_00;
  ulonglong extraout_RDX_01;
  ulonglong extraout_RDX_02;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  int iVar38;
  byte bVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ulonglong local_1e0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  ulonglong local_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulonglong uStack_158;
  byte local_150;
  undefined4 local_14f;
  undefined2 local_14b;
  undefined1 local_149;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  byte local_118;
  char cStack_117;
  char cStack_116;
  char cStack_115;
  char cStack_114;
  char cStack_113;
  char cStack_112;
  char cStack_111;
  byte bStack_110;
  char cStack_10f;
  char cStack_10e;
  char cStack_10d;
  char cStack_10c;
  char cStack_10b;
  char cStack_10a;
  char cStack_109;
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
  ulonglong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  
  if (*(longlong *)(param_2 + 0x88) == 0) {
    return;
  }
  lVar36 = *(longlong *)(param_2 + 0x80);
  lVar31 = *(longlong *)(param_2 + 0x88) * 0x18;
  lVar35 = 0;
  do {
    cache_thinking_signature
              (param_1,*(undefined8 *)(lVar36 + 8 + lVar35),*(undefined8 *)(lVar36 + 0x10 + lVar35),
               param_3,param_4,param_5,param_6);
    lVar35 = lVar35 + 0x18;
  } while (lVar31 != lVar35);
  local_130 = param_6;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar35 = *(longlong *)(param_2 + 0x38);
    lVar30 = *(longlong *)(param_2 + 0x40) * 0x60;
    local_50 = param_1 + 0x18;
    lVar40 = 0;
    local_128 = lVar35;
    local_120 = lVar30;
    do {
      if (*(longlong *)(lVar35 + 0x30 + lVar40) != -1) {
        uVar42 = *(undefined8 *)(lVar36 + -0x10 + lVar31);
        uVar1 = *(undefined8 *)(lVar36 + -8 + lVar31);
        ::<str>::trim_matches::<<char>::is_whitespace>
                  (*(undefined8 *)(lVar35 + 0x38 + lVar40),*(undefined8 *)(lVar35 + 0x40 + lVar40));
        auVar47 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar42,uVar1);
        uVar37 = auVar47._8_8_;
        if ((extraout_RDX != 0) && (0xf < uVar37)) {
          uVar27 = <craggemini_core[66f3c71560d70857]::resume::ModelFamily>::from_model
                             (param_3,param_4);
          (*(code *)PTR_now_00799478)();
          uVar10 = CONCAT12(cStack_116,CONCAT11(cStack_117,local_118));
          iVar38 = CONCAT13(cStack_115,uVar10) >> 0xd;
          iVar34 = iVar38 + -1;
          iVar32 = 0;
          if (iVar38 < 1) {
            iVar32 = (1U - iVar38) / 400 + 1;
            iVar34 = iVar34 + iVar32 * 400;
            iVar32 = iVar32 * -0x23ab1;
          }
          lVar35 = (ulonglong)
                   CONCAT13(cStack_10d,CONCAT12(cStack_10e,CONCAT11(cStack_10f,bStack_110))) /
                   1000000 + ((longlong)
                              (int)(((((uVar10 & 0x1ff0) >> 4) + iVar32) - iVar34 / 100) +
                                    (iVar34 * 0x5b5 >> 2) + (iVar34 / 100 >> 2) + -0xaf93b) *
                              0x15180 +
                             (ulonglong)
                             CONCAT13(cStack_111,
                                      CONCAT12(cStack_112,CONCAT11(cStack_113,cStack_114)))) * 1000;
          if (lVar35 < 1) {
            lVar35 = 0;
          }
          if ((longlong)extraout_RDX < 0) {
LAB_0053a5c4:
            (*(code *)PTR_handle_error_00798ff0)();
            uVar37 = extraout_RDX;
LAB_0053a5d2:
            local_140 = uVar37;
          }
          else {
            local_a0 = auVar47._0_8_;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            uVar29 = (*(code *)PTR___rust_alloc_00799000)();
            if (uVar29 == 0) {
              local_138 = extraout_RDX;
              goto LAB_0053a5c4;
            }
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,extraout_RDX);
            local_98._8_8_ = uVar29;
            local_98._0_8_ = extraout_RDX;
            local_88._0_8_ = extraout_RDX;
            local_138 = uVar29;
            if (-1 < (longlong)uVar37) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_140 = (*(code *)PTR___rust_alloc_00799000)();
              if (local_140 == 0) goto LAB_0053a5d2;
              lVar30 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,uVar37);
              if (param_5 == 0) {
                lVar33 = -1;
              }
              else {
                if (local_130 < 0) {
LAB_00539c6d:
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_0053a44e;
                }
                if (local_130 == 0) {
                  local_1e0 = 1;
                  lVar30 = 0;
                  lVar33 = 0;
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar30 = local_130;
                  local_1e0 = (*(code *)PTR___rust_alloc_00799000)();
                  if (local_1e0 == 0) goto LAB_00539c6d;
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,lVar30);
                  lVar33 = lVar30;
                }
              }
              local_118 = auVar47[8];
              cStack_117 = auVar47[9];
              cStack_116 = auVar47[10];
              cStack_115 = auVar47[0xb];
              cStack_114 = auVar47[0xc];
              cStack_113 = auVar47[0xd];
              cStack_112 = auVar47[0xe];
              cStack_111 = auVar47[0xf];
              bStack_110 = (byte)local_140;
              cStack_10f = (char)(local_140 >> 8);
              cStack_10e = (char)(local_140 >> 0x10);
              cStack_10d = (char)(local_140 >> 0x18);
              cStack_10c = (char)(local_140 >> 0x20);
              cStack_10b = (char)(local_140 >> 0x28);
              cStack_10a = (char)(local_140 >> 0x30);
              cStack_109 = (char)(local_140 >> 0x38);
              uStack_e0 = CONCAT71(uStack_e0._1_7_,uVar27);
              bStack_100 = (byte)lVar33;
              cStack_ff = (char)((ulonglong)lVar33 >> 8);
              cStack_fe = (char)((ulonglong)lVar33 >> 0x10);
              cStack_fd = (char)((ulonglong)lVar33 >> 0x18);
              cStack_fc = (char)((ulonglong)lVar33 >> 0x20);
              cStack_fb = (char)((ulonglong)lVar33 >> 0x28);
              cStack_fa = (char)((ulonglong)lVar33 >> 0x30);
              cStack_f9 = (char)((ulonglong)lVar33 >> 0x38);
              local_108 = local_118;
              cStack_107 = cStack_117;
              cStack_106 = cStack_116;
              cStack_105 = cStack_115;
              cStack_104 = cStack_114;
              cStack_103 = cStack_113;
              cStack_102 = cStack_112;
              cStack_101 = cStack_111;
              local_f8 = local_1e0;
              lStack_f0 = lVar30;
              local_e8 = lVar35;
              uVar42 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                       ::insert(&local_1b8,local_50,local_98,&local_118);
              if (local_1b8 != -1) {
                if (local_1b8 != 0) {
                  uVar42 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
                }
                if ((lStack_1a0 != -1) && (lStack_1a0 != 0)) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
                }
              }
              cache_thinking_signature(param_1,local_a0,uVar37,param_3,param_4,param_5,local_130);
              *(undefined1 *)(param_1 + 200) = 1;
              prune_to_bounds(param_1);
              goto LAB_00539770;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0053a44e;
        }
LAB_00539770:
        lVar35 = local_128;
        lVar30 = local_120;
      }
      lVar40 = lVar40 + 0x60;
    } while (lVar30 != lVar40);
  }
  uVar42 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  ::<str>::trim_matches::<<char>::is_whitespace>(uVar42,uVar1);
  if (extraout_RDX_00 == 0) {
    return;
  }
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  local_150 = 0;
  local_1b8 = _DAT_0018cfe0;
  uStack_1b0 = _UNK_0018cfe8;
  local_1a8 = _DAT_0018cff0;
  lStack_1a0 = _UNK_0018cff8;
  local_198 = 0;
  uVar43 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
  uVar29 = (ulonglong)local_150;
  uVar37 = extraout_RDX_01 - (0x40 - uVar29);
  if (extraout_RDX_01 < 0x40 - uVar29) {
    uVar43 = (*(code *)PTR_memcpy_00799008)(uVar43,extraout_RDX_01);
    uVar29 = extraout_RDX_01 + uVar29;
    local_150 = (byte)uVar29;
    if (uVar29 == 0x3f) goto LAB_00539ce9;
LAB_00539b8e:
    *(undefined1 *)((longlong)&lStack_190 + uVar29) = 0;
    uVar28 = (int)uVar29 + 1;
    local_150 = (byte)uVar28;
    uVar37 = (ulonglong)(uVar28 & 0xff);
    if (param_8 < 0x40 - uVar37) goto LAB_00539d31;
    uVar43 = (*(code *)PTR_memcpy_00799008)();
    local_198 = local_198 + 1;
    uVar43 = (*(code *)PTR_compress256_00799158)(uVar43,1);
    param_8 = param_8 - (0x40 - uVar37);
LAB_00539dd4:
    uVar28 = (uint)param_8 & 0x3f;
    uVar37 = (ulonglong)uVar28;
    if (param_8 >> 6 != 0) {
      local_198 = local_198 + (param_8 >> 6);
      uVar43 = (*(code *)PTR_compress256_00799158)();
    }
    uVar43 = (*(code *)PTR_memcpy_00799008)(uVar43,uVar37);
    local_150 = (byte)uVar28;
    if (uVar37 != 0x3f) goto LAB_00539d61;
LAB_00539e32:
    uStack_158 = uStack_158 & 0xffffffffffffff;
    local_198 = local_198 + 1;
    uVar43 = (*(code *)PTR_compress256_00799158)(uVar43,1);
    local_150 = 0;
    if (0x3f < param_10) {
      uVar37 = param_10;
      goto LAB_00539eb8;
    }
    uVar41 = 0;
LAB_00539e6e:
    uVar43 = (*(code *)PTR_memcpy_00799008)(uVar43,param_10);
    uVar41 = uVar41 + param_10;
    local_150 = (byte)uVar41;
    if (uVar41 == 0x3f) goto LAB_00539f26;
LAB_00539e9d:
    *(undefined1 *)((longlong)&lStack_190 + uVar41) = 0;
    local_150 = (char)uVar41 + 1;
  }
  else {
    if (uVar29 == 0) {
      uVar37 = extraout_RDX_01;
    }
    else {
      uVar43 = (*(code *)PTR_memcpy_00799008)();
      local_198 = local_198 + 1;
      uVar43 = (*(code *)PTR_compress256_00799158)(uVar43,1);
    }
    uVar28 = (uint)uVar37 & 0x3f;
    uVar29 = (ulonglong)uVar28;
    if (uVar37 >> 6 != 0) {
      local_198 = local_198 + (uVar37 >> 6);
      uVar43 = (*(code *)PTR_compress256_00799158)();
    }
    uVar43 = (*(code *)PTR_memcpy_00799008)(uVar43,uVar29);
    local_150 = (byte)uVar28;
    if (uVar29 != 0x3f) goto LAB_00539b8e;
LAB_00539ce9:
    uStack_158 = uStack_158 & 0xffffffffffffff;
    local_198 = local_198 + 1;
    uVar43 = (*(code *)PTR_compress256_00799158)(uVar43,1);
    local_150 = 0;
    if (0x3f < param_8) goto LAB_00539dd4;
    uVar37 = 0;
LAB_00539d31:
    uVar43 = (*(code *)PTR_memcpy_00799008)(uVar43,param_8);
    uVar37 = uVar37 + param_8;
    local_150 = (byte)uVar37;
    if (uVar37 == 0x3f) goto LAB_00539e32;
LAB_00539d61:
    *(undefined1 *)((longlong)&lStack_190 + uVar37) = 0;
    uVar28 = (int)uVar37 + 1;
    local_150 = (byte)uVar28;
    uVar41 = (ulonglong)(uVar28 & 0xff);
    uVar29 = 0x40 - uVar41;
    uVar37 = param_10 - uVar29;
    if (param_10 < uVar29) goto LAB_00539e6e;
    param_9 = param_9 + uVar29;
    uVar43 = (*(code *)PTR_memcpy_00799008)();
    local_198 = local_198 + 1;
    (*(code *)PTR_compress256_00799158)(uVar43,1);
LAB_00539eb8:
    uVar28 = (uint)uVar37 & 0x3f;
    uVar41 = (ulonglong)uVar28;
    param_9 = (uVar37 & 0x7fffffffffffffc0) + param_9;
    if (uVar37 >> 6 != 0) {
      local_198 = local_198 + (uVar37 >> 6);
      (*(code *)PTR_compress256_00799158)(param_9);
    }
    uVar43 = (*(code *)PTR_memcpy_00799008)(param_9,uVar41);
    local_150 = (byte)uVar28;
    if (uVar41 != 0x3f) goto LAB_00539e9d;
LAB_00539f26:
    uStack_158 = uStack_158 & 0xffffffffffffff;
    local_198 = local_198 + 1;
    (*(code *)PTR_compress256_00799158)(uVar43,1);
    local_150 = 0;
  }
  uVar42 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar42,uVar1);
  bVar39 = local_150;
  uVar29 = 0x40 - (ulonglong)local_150;
  uVar37 = extraout_RDX_02 - uVar29;
  if (extraout_RDX_02 < uVar29) {
    (*(code *)PTR_memcpy_00799008)(uVar42,extraout_RDX_02);
    bVar39 = (char)extraout_RDX_02 + bVar39;
  }
  else {
    if ((ulonglong)local_150 == 0) {
      uVar37 = extraout_RDX_02;
    }
    else {
      uVar42 = (*(code *)PTR_memcpy_00799008)();
      local_198 = local_198 + 1;
      uVar42 = (*(code *)PTR_compress256_00799158)(uVar42,1);
    }
    uVar28 = (uint)uVar37 & 0x3f;
    bVar39 = (byte)uVar28;
    if (uVar37 >> 6 != 0) {
      local_198 = local_198 + (uVar37 >> 6);
      uVar42 = (*(code *)PTR_compress256_00799158)();
    }
    (*(code *)PTR_memcpy_00799008)(uVar42,uVar28);
  }
  local_b8 = uStack_158;
  local_af = local_14f;
  local_ab = local_14b;
  local_a9 = local_149;
  local_f8 = local_198;
  lStack_f0 = lStack_190;
  local_c8 = uStack_168;
  uStack_c0 = local_160;
  local_d8 = uStack_178;
  uStack_d0 = local_170;
  local_e8 = lStack_188;
  uStack_e0 = uStack_180;
  local_108 = (byte)local_1a8;
  cStack_107 = (char)((ulonglong)local_1a8 >> 8);
  cStack_106 = (char)((ulonglong)local_1a8 >> 0x10);
  cStack_105 = (char)((ulonglong)local_1a8 >> 0x18);
  cStack_104 = (char)((ulonglong)local_1a8 >> 0x20);
  cStack_103 = (char)((ulonglong)local_1a8 >> 0x28);
  cStack_102 = (char)((ulonglong)local_1a8 >> 0x30);
  cStack_101 = (char)((ulonglong)local_1a8 >> 0x38);
  bStack_100 = (byte)lStack_1a0;
  cStack_ff = (char)((ulonglong)lStack_1a0 >> 8);
  cStack_fe = (char)((ulonglong)lStack_1a0 >> 0x10);
  cStack_fd = (char)((ulonglong)lStack_1a0 >> 0x18);
  cStack_fc = (char)((ulonglong)lStack_1a0 >> 0x20);
  cStack_fb = (char)((ulonglong)lStack_1a0 >> 0x28);
  cStack_fa = (char)((ulonglong)lStack_1a0 >> 0x30);
  cStack_f9 = (char)((ulonglong)lStack_1a0 >> 0x38);
  local_118 = (byte)local_1b8;
  cStack_117 = (char)((ulonglong)local_1b8 >> 8);
  cStack_116 = (char)((ulonglong)local_1b8 >> 0x10);
  cStack_115 = (char)((ulonglong)local_1b8 >> 0x18);
  cStack_114 = (char)((ulonglong)local_1b8 >> 0x20);
  cStack_113 = (char)((ulonglong)local_1b8 >> 0x28);
  cStack_112 = (char)((ulonglong)local_1b8 >> 0x30);
  cStack_111 = (char)((ulonglong)local_1b8 >> 0x38);
  bStack_110 = (byte)uStack_1b0;
  cStack_10f = (char)((ulonglong)uStack_1b0 >> 8);
  cStack_10e = (char)((ulonglong)uStack_1b0 >> 0x10);
  cStack_10d = (char)((ulonglong)uStack_1b0 >> 0x18);
  cStack_10c = (char)((ulonglong)uStack_1b0 >> 0x20);
  cStack_10b = (char)((ulonglong)uStack_1b0 >> 0x28);
  cStack_10a = (char)((ulonglong)uStack_1b0 >> 0x30);
  cStack_109 = (char)((ulonglong)uStack_1b0 >> 0x38);
  uVar37 = local_198 << 9;
  uVar37 = (local_198 & 0x7fffffffffffff) >> 0x2f | (uVar37 & 0xff000000000000) >> 0x28 |
           (uVar37 & 0xff0000000000) >> 0x18 | (uVar37 & 0xff00000000) >> 8 |
           (uVar37 & 0xff000000) << 8 | (uVar37 & 0xff0000) << 0x18 |
           (((uint)bVar39 * 8 | uVar37) & 0xff00) << 0x28 | (ulonglong)((uint)bVar39 * 8) << 0x38;
  local_b0 = bVar39;
  local_98[(ulonglong)bVar39 - 0x58] = 0x80;
  lVar35 = local_1b8;
  local_150 = bVar39;
  if ((bVar39 == 0x3f) ||
     (lVar35 = (*(code *)PTR_memset_00799090)(local_1b8,(ulonglong)bVar39 ^ 0x3f),
     (bVar39 ^ 0x38) < 8)) {
    puVar26 = PTR_compress256_00799158;
    (*(code *)PTR_compress256_00799158)(lVar35,1);
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_68 = 0;
    local_60 = uVar37;
    (*(code *)puVar26)(0,1);
  }
  else {
    local_b8 = uVar37;
    (*(code *)PTR_compress256_00799158)(lVar35,1);
  }
  uVar17 = CONCAT12(cStack_10f,CONCAT11(bStack_110,cStack_111));
  uVar28 = CONCAT13(cStack_10e,uVar17);
  uVar20 = CONCAT14(cStack_10d,uVar28);
  auVar24[5] = cStack_10c;
  auVar24._0_5_ = uVar20;
  uVar18 = CONCAT12(cStack_ff,CONCAT11(bStack_100,cStack_101));
  uVar19 = CONCAT13(cStack_fe,uVar18);
  uVar21 = CONCAT14(cStack_fd,uVar19);
  auVar25[5] = cStack_fc;
  auVar25._0_5_ = uVar21;
  auVar46[1] = 0;
  auVar46[0] = bStack_110;
  auVar46[2] = cStack_10f;
  auVar46[3] = 0;
  auVar46[4] = cStack_10e;
  auVar46[5] = 0;
  auVar46[6] = cStack_10d;
  auVar46[7] = 0;
  auVar46[8] = cStack_10c;
  auVar46[9] = 0;
  auVar46[10] = cStack_10b;
  auVar46[0xb] = 0;
  auVar46[0xc] = cStack_10a;
  auVar46[0xd] = 0;
  auVar46[0xe] = cStack_109;
  auVar46[0xf] = 0;
  auVar47 = pshuflw(auVar46,auVar46,0x1b);
  auVar44 = pshufhw(auVar47,auVar47,0x1b);
  auVar24._6_8_ = 0;
  auVar4[0xe] = cStack_111;
  auVar4._0_14_ = auVar24 << 0x38;
  auVar22._4_8_ = 0;
  auVar22._0_4_ = uVar28;
  auVar6._12_3_ = (int3)(CONCAT26(auVar4._13_2_,CONCAT15(cStack_112,uVar20)) >> 0x28);
  auVar6._0_12_ = auVar22 << 0x38;
  auVar8._10_5_ = (int5)(CONCAT44(auVar6._11_4_,CONCAT13(cStack_113,uVar17)) >> 0x18);
  auVar8._0_10_ = (unkuint10)CONCAT11(bStack_110,cStack_111) << 0x38;
  auVar11._7_8_ = 0;
  auVar11._0_7_ = (uint7)(CONCAT62(auVar8._9_6_,CONCAT11(cStack_114,cStack_111)) >> 8);
  auVar12._1_8_ = SUB158(auVar11 << 0x40,7);
  auVar12[0] = cStack_115;
  auVar12._9_6_ = 0;
  auVar13._1_10_ = SUB1510(auVar12 << 0x30,5);
  auVar13[0] = cStack_116;
  auVar13._11_4_ = 0;
  auVar47._3_12_ = SUB1512(auVar13 << 0x20,3);
  auVar47[2] = cStack_117;
  auVar47[1] = 0;
  auVar47[0] = local_118;
  auVar47[0xf] = 0;
  auVar47 = pshuflw(auVar47,auVar47,0x1b);
  auVar47 = pshufhw(auVar47,auVar47,0x1b);
  sVar3 = auVar47._0_2_;
  local_118 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[0] - (0xff < sVar3);
  sVar3 = auVar47._2_2_;
  cStack_117 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[2] - (0xff < sVar3);
  sVar3 = auVar47._4_2_;
  cStack_116 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[4] - (0xff < sVar3);
  sVar3 = auVar47._6_2_;
  cStack_115 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[6] - (0xff < sVar3);
  sVar3 = auVar47._8_2_;
  cStack_114 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[8] - (0xff < sVar3);
  sVar3 = auVar47._10_2_;
  cStack_113 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[10] - (0xff < sVar3);
  sVar3 = auVar47._12_2_;
  cStack_112 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[0xc] - (0xff < sVar3);
  sVar3 = auVar47._14_2_;
  cStack_111 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[0xe] - (0xff < sVar3);
  sVar3 = auVar44._0_2_;
  bStack_110 = (0 < sVar3) * (sVar3 < 0x100) * auVar44[0] - (0xff < sVar3);
  sVar3 = auVar44._2_2_;
  cStack_10f = (0 < sVar3) * (sVar3 < 0x100) * auVar44[2] - (0xff < sVar3);
  sVar3 = auVar44._4_2_;
  cStack_10e = (0 < sVar3) * (sVar3 < 0x100) * auVar44[4] - (0xff < sVar3);
  sVar3 = auVar44._6_2_;
  cStack_10d = (0 < sVar3) * (sVar3 < 0x100) * auVar44[6] - (0xff < sVar3);
  sVar3 = auVar44._8_2_;
  cStack_10c = (0 < sVar3) * (sVar3 < 0x100) * auVar44[8] - (0xff < sVar3);
  sVar3 = auVar44._10_2_;
  cStack_10b = (0 < sVar3) * (sVar3 < 0x100) * auVar44[10] - (0xff < sVar3);
  sVar3 = auVar44._12_2_;
  cStack_10a = (0 < sVar3) * (sVar3 < 0x100) * auVar44[0xc] - (0xff < sVar3);
  sVar3 = auVar44._14_2_;
  cStack_109 = (0 < sVar3) * (sVar3 < 0x100) * auVar44[0xe] - (0xff < sVar3);
  auVar45[1] = 0;
  auVar45[0] = bStack_100;
  auVar45[2] = cStack_ff;
  auVar45[3] = 0;
  auVar45[4] = cStack_fe;
  auVar45[5] = 0;
  auVar45[6] = cStack_fd;
  auVar45[7] = 0;
  auVar45[8] = cStack_fc;
  auVar45[9] = 0;
  auVar45[10] = cStack_fb;
  auVar45[0xb] = 0;
  auVar45[0xc] = cStack_fa;
  auVar45[0xd] = 0;
  auVar45[0xe] = cStack_f9;
  auVar45[0xf] = 0;
  auVar47 = pshuflw(auVar45,auVar45,0x1b);
  auVar46 = pshufhw(auVar47,auVar47,0x1b);
  auVar25._6_8_ = 0;
  auVar5[0xe] = cStack_101;
  auVar5._0_14_ = auVar25 << 0x38;
  auVar23._4_8_ = 0;
  auVar23._0_4_ = uVar19;
  auVar7._12_3_ = (int3)(CONCAT26(auVar5._13_2_,CONCAT15(cStack_102,uVar21)) >> 0x28);
  auVar7._0_12_ = auVar23 << 0x38;
  auVar9._10_5_ = (int5)(CONCAT44(auVar7._11_4_,CONCAT13(cStack_103,uVar18)) >> 0x18);
  auVar9._0_10_ = (unkuint10)CONCAT11(bStack_100,cStack_101) << 0x38;
  auVar14._7_8_ = 0;
  auVar14._0_7_ = (uint7)(CONCAT62(auVar9._9_6_,CONCAT11(cStack_104,cStack_101)) >> 8);
  auVar15._1_8_ = SUB158(auVar14 << 0x40,7);
  auVar15[0] = cStack_105;
  auVar15._9_6_ = 0;
  auVar16._1_10_ = SUB1510(auVar15 << 0x30,5);
  auVar16[0] = cStack_106;
  auVar16._11_4_ = 0;
  auVar44._3_12_ = SUB1512(auVar16 << 0x20,3);
  auVar44[2] = cStack_107;
  auVar44[1] = 0;
  auVar44[0] = local_108;
  auVar44[0xf] = 0;
  auVar47 = pshuflw((undefined1  [16])0x0,auVar44,0x1b);
  auVar47 = pshufhw(auVar47,auVar47,0x1b);
  sVar3 = auVar47._0_2_;
  local_108 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[0] - (0xff < sVar3);
  sVar3 = auVar47._2_2_;
  cStack_107 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[2] - (0xff < sVar3);
  sVar3 = auVar47._4_2_;
  cStack_106 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[4] - (0xff < sVar3);
  sVar3 = auVar47._6_2_;
  cStack_105 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[6] - (0xff < sVar3);
  sVar3 = auVar47._8_2_;
  cStack_104 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[8] - (0xff < sVar3);
  sVar3 = auVar47._10_2_;
  cStack_103 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[10] - (0xff < sVar3);
  sVar3 = auVar47._12_2_;
  cStack_102 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[0xc] - (0xff < sVar3);
  sVar3 = auVar47._14_2_;
  cStack_101 = (0 < sVar3) * (sVar3 < 0x100) * auVar47[0xe] - (0xff < sVar3);
  sVar3 = auVar46._0_2_;
  bStack_100 = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0] - (0xff < sVar3);
  sVar3 = auVar46._2_2_;
  cStack_ff = (0 < sVar3) * (sVar3 < 0x100) * auVar46[2] - (0xff < sVar3);
  sVar3 = auVar46._4_2_;
  cStack_fe = (0 < sVar3) * (sVar3 < 0x100) * auVar46[4] - (0xff < sVar3);
  sVar3 = auVar46._6_2_;
  cStack_fd = (0 < sVar3) * (sVar3 < 0x100) * auVar46[6] - (0xff < sVar3);
  sVar3 = auVar46._8_2_;
  cStack_fc = (0 < sVar3) * (sVar3 < 0x100) * auVar46[8] - (0xff < sVar3);
  sVar3 = auVar46._10_2_;
  cStack_fb = (0 < sVar3) * (sVar3 < 0x100) * auVar46[10] - (0xff < sVar3);
  sVar3 = auVar46._12_2_;
  cStack_fa = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0xc] - (0xff < sVar3);
  sVar3 = auVar46._14_2_;
  cStack_f9 = (0 < sVar3) * (sVar3 < 0x100) * auVar46[0xe] - (0xff < sVar3);
  local_98._8_8_ =
       <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
       ::fmt;
  local_98._0_8_ = &local_118;
  (*(code *)PTR_format_inner_00799048)();
  auVar47 = ::<str>::trim_matches::<<char>::is_whitespace>
                      (*(undefined8 *)(lVar36 + -0x10 + lVar31),
                       *(undefined8 *)(lVar36 + -8 + lVar31));
  uVar37 = auVar47._8_8_;
  uVar42 = extraout_XMM0_Qa_02;
  if ((local_38 == 0) || (uVar37 < 0x10)) goto LAB_0053a588;
  uVar27 = <craggemini_core[66f3c71560d70857]::resume::ModelFamily>::from_model(param_3,param_4);
  (*(code *)PTR_now_00799478)();
  uVar10 = CONCAT12(cStack_116,CONCAT11(cStack_117,local_118));
  iVar38 = CONCAT13(cStack_115,uVar10) >> 0xd;
  iVar34 = iVar38 + -1;
  iVar32 = 0;
  if (iVar38 < 1) {
    iVar32 = (1U - iVar38) / 400 + 1;
    iVar34 = iVar34 + iVar32 * 400;
    iVar32 = iVar32 * -0x23ab1;
  }
  lVar36 = (ulonglong)CONCAT13(cStack_10d,CONCAT12(cStack_10e,CONCAT11(cStack_10f,bStack_110))) /
           1000000 + ((longlong)
                      (int)(((((uVar10 & 0x1ff0) >> 4) + iVar32) - iVar34 / 100) +
                            (iVar34 * 0x5b5 >> 2) + (iVar34 / 100 >> 2) + -0xaf93b) * 0x15180 +
                     (ulonglong)
                     CONCAT13(cStack_111,CONCAT12(cStack_112,CONCAT11(cStack_113,cStack_114)))) *
                     1000;
  if (lVar36 < 1) {
    lVar36 = 0;
  }
  if (-1 < local_38) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar31 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar31 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,local_38);
      local_98._8_8_ = lVar31;
      local_98._0_8_ = local_38;
      local_88._0_8_ = local_38;
      if (-1 < (longlong)uVar37) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar31 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar31 != 0) {
          uVar29 = uVar37;
          (*(code *)PTR_memcpy_00799008)();
          lVar35 = local_130;
          if (param_5 == 0) {
            lStack_f0 = -1;
          }
          else {
            if (local_130 < 0) {
LAB_0053a442:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0053a44e;
            }
            if (local_130 == 0) {
              uVar29 = 1;
              lStack_f0 = 0;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              uVar29 = (*(code *)PTR___rust_alloc_00799000)();
              if (uVar29 == 0) goto LAB_0053a442;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_04,lVar35);
              lStack_f0 = lVar35;
            }
          }
          local_118 = auVar47[8];
          cStack_117 = auVar47[9];
          cStack_116 = auVar47[10];
          cStack_115 = auVar47[0xb];
          cStack_114 = auVar47[0xc];
          cStack_113 = auVar47[0xd];
          cStack_112 = auVar47[0xe];
          cStack_111 = auVar47[0xf];
          bStack_110 = (byte)lVar31;
          cStack_10f = (char)((ulonglong)lVar31 >> 8);
          cStack_10e = (char)((ulonglong)lVar31 >> 0x10);
          cStack_10d = (char)((ulonglong)lVar31 >> 0x18);
          cStack_10c = (char)((ulonglong)lVar31 >> 0x20);
          cStack_10b = (char)((ulonglong)lVar31 >> 0x28);
          cStack_10a = (char)((ulonglong)lVar31 >> 0x30);
          cStack_109 = (char)((ulonglong)lVar31 >> 0x38);
          uStack_e0 = CONCAT71(uStack_e0._1_7_,uVar27);
          bStack_100 = (byte)lStack_f0;
          cStack_ff = (char)((ulonglong)lStack_f0 >> 8);
          cStack_fe = (char)((ulonglong)lStack_f0 >> 0x10);
          cStack_fd = (char)((ulonglong)lStack_f0 >> 0x18);
          cStack_fc = (char)((ulonglong)lStack_f0 >> 0x20);
          cStack_fb = (char)((ulonglong)lStack_f0 >> 0x28);
          cStack_fa = (char)((ulonglong)lStack_f0 >> 0x30);
          cStack_f9 = (char)((ulonglong)lStack_f0 >> 0x38);
          local_108 = local_118;
          cStack_107 = cStack_117;
          cStack_106 = cStack_116;
          cStack_105 = cStack_115;
          cStack_104 = cStack_114;
          cStack_103 = cStack_113;
          cStack_102 = cStack_112;
          cStack_101 = cStack_111;
          local_f8 = uVar29;
          local_e8 = lVar36;
          uVar42 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::insert(&local_1b8,param_1 + 0x78,local_98,&local_118);
          if (local_1b8 != -1) {
            if (local_1b8 != 0) {
              uVar42 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
            }
            if ((lStack_1a0 != -1) && (lStack_1a0 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
            }
          }
          cache_thinking_signature(param_1,auVar47._0_8_,uVar37,param_3,param_4,param_5,lVar35);
          *(undefined1 *)(param_1 + 200) = 1;
          uVar42 = prune_to_bounds(param_1);
LAB_0053a588:
          if (local_48 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
          }
          return;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0053a44e;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0053a44e:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


