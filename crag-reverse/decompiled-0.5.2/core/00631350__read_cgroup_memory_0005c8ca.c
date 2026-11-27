// 00631350 read_cgroup_memory

/* craggemini_core[66f3c71560d70857]::admission::read_cgroup_memory */

void __rustcall
craggemini_core[66f3c71560d70857]::admission::read_cgroup_memory
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong extraout_RDX;
  ulonglong uVar9;
  ulonglong extraout_RDX_00;
  ulonglong uVar10;
  ulonglong extraout_RDX_01;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong unaff_RBP;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  code *pcVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8 [3];
  ulonglong local_1a0;
  undefined8 local_198;
  ulonglong uStack_190;
  undefined2 local_188;
  ulonglong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined2 local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined2 local_40;
  ulonglong *local_38;
  
  uVar22 = (*(code *)PTR__join_00799210)(&DAT_00183b60,param_3,0x10);
  uVar22 = (*(code *)PTR_inner_007998c0)(uVar22,local_138);
  if (local_148 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
  }
  uVar14 = local_1b8[0];
  uVar6 = uStack_1c0;
  if (local_1c8 == 0xffffffffffffffff) {
    if ((1 < ((uint)uStack_1c0 & 3) - 2) && ((uStack_1c0 & 3) != 0)) {
      local_140 = uStack_1c0 - 1;
      local_148 = CONCAT71(local_148._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    *param_1 = 0;
    param_1[2] = 0;
    return;
  }
  local_c0 = local_1c8;
  local_38 = param_1;
  (*(code *)PTR__join_00799210)("sys/fs/cgroup",param_3,0xd);
  local_80 = 0;
  local_78 = uVar14;
  local_70 = uVar6;
  local_68 = uVar14;
  local_60 = 0;
  local_58 = uVar14;
  local_50 = 0xa0000000a;
  local_48 = 1;
  local_40 = 0;
  local_f8 = 0;
  local_180 = 0;
LAB_0063149e:
  do {
    uVar6 = local_70;
    uVar22 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(&local_148,&local_70);
    if ((int)local_148 == 1) {
      uVar13 = local_138 - local_80;
      uVar14 = local_138;
    }
    else {
      if (local_40._1_1_ != '\0') break;
      local_40 = CONCAT11(1,(byte)local_40);
      uVar13 = local_78 - local_80;
      uVar14 = local_80;
      uVar6 = local_70;
      if ((local_78 - local_80 != 0 | (byte)local_40) != 1) break;
    }
    local_138 = uVar13;
    lVar3 = local_80 + uVar6;
    if (local_138 != 0) {
      uVar6 = local_138 - 1;
      if (*(char *)(lVar3 + uVar6) == '\n') {
        local_138 = local_138 - 2;
        if ((uVar6 == 0) || (lVar4 = lVar3, *(char *)(lVar3 + local_138) != '\r')) {
          lVar4 = 0;
        }
        if (lVar4 == 0) {
          local_138 = uVar6;
        }
        else {
          lVar3 = lVar4;
        }
      }
    }
    local_140 = 0;
    local_120 = 0;
    local_110 = 0x3a0000003a;
    local_108 = 1;
    local_100 = 1;
    local_148 = 2;
    local_130 = lVar3;
    local_128 = local_138;
    local_118 = local_138;
    local_80 = uVar14;
    uVar22 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(&local_1c8,&local_130);
    lVar4 = local_130;
    uVar6 = local_140;
    if ((char)local_1c8 != '\0') {
      local_140 = local_1b8[0];
      if ((lVar3 == 0) || (lVar18 = uStack_1c0 - uVar6, local_148 < 2)) goto LAB_00631490;
LAB_00631685:
      local_148 = local_148 - 1;
      if (local_100._1_1_ != '\0') goto LAB_00631490;
      uVar22 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
               ::next_match(&local_1c8,&local_130);
      lVar11 = local_130;
      uVar14 = local_140;
      if ((int)local_1c8 != 1) {
        if (local_100._1_1_ == '\0') {
          local_100 = CONCAT11(1,(byte)local_100);
          uVar13 = local_138 - local_140;
          if (((uVar13 != 0 | (byte)local_100) == 1) && (lVar4 = local_130, local_148 != 0))
          goto LAB_006316f0;
        }
        goto LAB_00631490;
      }
      uVar13 = uStack_1c0 - local_140;
      local_140 = local_1b8[0];
      if (local_148 == 0) goto LAB_00631490;
LAB_006316f0:
      if (local_148 != 1) {
        local_148 = local_148 - 1;
        if (local_100._1_1_ == '\0') {
          uVar22 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                   ::next_match(&local_1c8,&local_130);
          if ((int)local_1c8 == 1) {
            lVar16 = uStack_1c0 - local_140;
            lVar11 = lVar11 + local_140;
            local_140 = local_1b8[0];
            goto LAB_0063182e;
          }
          if (local_100._1_1_ == '\0') {
            goto joined_r0x006317fb;
          }
        }
        goto LAB_00631490;
      }
      local_148 = 0;
      if (local_100._1_1_ != '\0') goto LAB_00631490;
joined_r0x006317fb:
      local_100 = CONCAT11(1,(byte)local_100);
      if (((byte)local_100 == '\0') && (local_138 == local_140)) goto LAB_00631490;
      lVar16 = local_138 - local_140;
      lVar11 = local_140 + local_130;
LAB_0063182e:
      if (((lVar18 == 1) && (uVar13 == 0)) && (*(char *)(lVar3 + uVar6) == '0')) {
        auVar23 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar11);
        pcVar20 = (code *)PTR__join_00799210;
        lVar4 = auVar23._8_8_;
        lVar3 = 0;
        do {
          lVar18 = lVar3;
          if (lVar18 == lVar4) {
            lVar18 = lVar4;
            break;
          }
          pbVar7 = (byte *)(lVar18 + auVar23._0_8_);
          bVar2 = *pbVar7;
          uVar17 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            uVar15 = bVar2 & 0x1f;
            if (bVar2 < 0xe0) {
              pbVar8 = pbVar7 + 2;
              uVar17 = uVar15 << 6 | pbVar7[1] & 0x3f;
            }
            else {
              uVar17 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
              if (bVar2 < 0xf0) {
                pbVar8 = pbVar7 + 3;
                uVar17 = uVar17 | uVar15 << 0xc;
              }
              else {
                pbVar8 = pbVar7 + 4;
                uVar17 = pbVar7[3] & 0x3f | uVar17 << 6 | (bVar2 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar8 = pbVar7 + 1;
          }
          lVar3 = (longlong)pbVar8 - auVar23._0_8_;
        } while (uVar17 == 0x2f);
        uVar13 = lVar4 - lVar18;
        uVar22 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                           (&local_1c8,uVar13,0,1,1);
        uVar14 = local_1b8[0];
        uVar6 = uStack_1c0;
        if ((int)local_1c8 == 1) {
          (*(code *)PTR_handle_error_00798ff0)();
LAB_006322c2:
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
        if (lVar4 == lVar18) {
          <alloc[12e961f32105355]::vec::Vec<u8>as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
                    (&local_1c8,&local_e0);
          local_168 = local_1b8[0];
          local_178 = (int)local_1c8;
          uStack_174 = local_1c8._4_4_;
          uStack_170 = (undefined4)uStack_1c0;
          uStack_16c = uStack_1c0._4_4_;
        }
        else {
          (*(code *)PTR_memcpy_00799008)(uVar22,uVar13);
          (*pcVar20)(uVar14,local_d0,uVar13);
        }
        bVar21 = local_180 != 1;
        local_180 = 1;
        auVar23._8_8_ = local_f0;
        auVar23._0_8_ = 1;
        if (bVar21) {
          (*pcVar20)("memory.current",local_168,0xe);
          auVar23 = read_cgroup_u64_file(uStack_1c0,local_1b8[0]);
          local_f0 = auVar23._8_8_;
          local_180 = auVar23._0_8_;
          if (local_1c8 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
            auVar23._8_8_ = local_f0;
            auVar23._0_8_ = local_180;
          }
        }
        local_c8 = local_d8;
        local_e8 = local_d0;
        do {
          lVar3 = local_e8;
          local_f0 = auVar23._8_8_;
          local_180 = auVar23._0_8_;
          if (uVar13 == 0) {
            if (local_e8 < 0) {
LAB_00632289:
              local_f0 = auVar23._8_8_;
              local_180 = auVar23._0_8_;
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_006322c2;
            }
            if (local_e8 == 0) {
              lVar4 = 1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar4 = (*(code *)PTR___rust_alloc_00799000)();
              auVar23._8_8_ = local_f0;
              auVar23._0_8_ = local_180;
              if (lVar4 == 0) goto LAB_00632289;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar3);
              auVar23._8_8_ = local_f0;
              auVar23._0_8_ = local_180;
            }
            local_160 = lVar3;
            local_158 = lVar4;
            local_150 = lVar3;
          }
          else {
            (*pcVar20)(uVar14);
            auVar23._8_8_ = local_f0;
            auVar23._0_8_ = local_180;
          }
          lVar3 = local_150;
          local_f0 = auVar23._8_8_;
          local_180 = auVar23._0_8_;
          (*pcVar20)("memory.max",local_150,10);
          bVar2 = read_cgroup_u64_file(uStack_1c0,local_1b8[0]);
          uVar12 = extraout_RDX - 1;
          uVar19 = extraout_RDX;
          if (unaff_RBP <= extraout_RDX) {
            uVar19 = unaff_RBP;
          }
          uVar9 = extraout_RDX;
          if ((local_f8 & 1) != 0) {
            uVar9 = uVar19;
          }
          uVar19 = local_f8;
          if ((bVar2 & uVar12 < 0xfffffffffffffff) != 0) {
            uVar19 = 1;
            unaff_RBP = uVar9;
          }
          if (local_1c8 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)
                      (CONCAT71((int7)(uVar12 >> 8),uVar12 < 0xfffffffffffffff),1);
          }
          pcVar20 = (code *)PTR__join_00799210;
          (*(code *)PTR__join_00799210)("memory.high",lVar3,0xb);
          bVar2 = read_cgroup_u64_file(uStack_1c0,local_1b8[0]);
          uVar12 = extraout_RDX_00 - 1;
          uVar9 = extraout_RDX_00;
          if (unaff_RBP <= extraout_RDX_00) {
            uVar9 = unaff_RBP;
          }
          uVar10 = extraout_RDX_00;
          if ((uVar19 & 1) != 0) {
            uVar10 = uVar9;
          }
          if ((bVar2 & uVar12 < 0xfffffffffffffff) != 0) {
            uVar19 = 1;
            unaff_RBP = uVar10;
          }
          uVar22 = extraout_XMM0_Da_01;
          local_f8 = uVar19;
          if (local_1c8 != 0) {
            uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)
                               (CONCAT71((int7)(uVar12 >> 8),uVar12 < 0xfffffffffffffff),1);
          }
          if (uVar13 == 0) goto LAB_00632157;
          local_1c8 = uVar14;
          local_1b8[0] = 0;
          local_1a0 = CONCAT71(local_1a0._1_7_,1);
          local_1b8[2] = 0x2f0000002f;
          uStack_1c0 = uVar13;
          local_1b8[1] = uVar13;
          uVar22 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>
                   ::next_match_back(&local_b8,&local_1c8);
          if ((int)local_b8 == 1) {
            if (uVar13 < uStack_b0) {
              uVar12 = uVar13;
            }
            else {
              uVar12 = uStack_b0;
              if (((uStack_b0 != 0) && (uStack_b0 < uVar13)) &&
                 (*(char *)(uVar14 + uStack_b0) < -0x40)) {
                (*(code *)PTR_panic_00799338)(uVar22,&PTR_s_src_admission_rs_0078f768);
                goto LAB_006322c2;
              }
            }
          }
          else {
            uVar12 = 0;
          }
          if (local_160 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
          }
          auVar23._8_8_ = local_f0;
          auVar23._0_8_ = local_180;
          uVar13 = uVar12;
        } while( true );
      }
      local_1c8 = 0;
      local_1b8[2] = 0;
      local_198 = 0x2c0000002c;
      uStack_190 = CONCAT71(uStack_190._1_7_,1);
      local_188 = 1;
      uStack_1c0 = uVar13;
      local_1b8[0] = lVar4 + uVar14;
      local_1b8[1] = uVar13;
      local_1a0 = uVar13;
      do {
        uVar6 = local_1b8[0];
        uVar22 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                 ::next_match(&local_b8);
        if ((int)local_b8 == 1) {
          lVar3 = uStack_b0 - local_1c8;
          uVar14 = local_a8;
        }
        else {
          if (local_188._1_1_ != '\0') break;
          local_188 = CONCAT11(1,(byte)local_188);
          lVar3 = uStack_1c0 - local_1c8;
          uVar14 = local_1c8;
          uVar6 = local_1b8[0];
          if ((uStack_1c0 != local_1c8 | (byte)local_188) != 1) break;
        }
        if ((lVar3 == 6) &&
           ((short)((int *)(uVar6 + local_1c8))[1] == 0x7972 &&
            *(int *)(uVar6 + local_1c8) == 0x6f6d656d)) {
          local_1c8 = uVar14;
          auVar23 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar11,lVar16);
          puVar1 = PTR__join_00799210;
          lVar18 = auVar23._8_8_;
          lVar4 = auVar23._0_8_;
          lVar3 = 0;
          goto LAB_00631a2c;
        }
        local_188._1_1_ = (char)((ushort)local_188 >> 8);
        bVar21 = local_188._1_1_ != '\x01';
        local_1c8 = uVar14;
      } while (bVar21);
      goto LAB_006319ed;
    }
    if (local_100._1_1_ == '\0') {
      local_100 = CONCAT11(1,(byte)local_100);
      lVar18 = local_138 - local_140;
      if (((lVar18 != 0 | (byte)local_100) == 1) && (lVar3 = local_130, 1 < local_148))
      goto LAB_00631685;
    }
LAB_00631490:
  } while (local_40._1_1_ == '\0');
  goto LAB_0063220b;
LAB_00632157:
  if (local_160 != 0) {
    uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
  }
  if (CONCAT44(uStack_174,local_178) != 0) {
    uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
  }
  if (uVar6 != 0) {
    uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
  }
  goto LAB_006319ed;
  while( true ) {
    pbVar7 = (byte *)(lVar11 + lVar4);
    bVar2 = *pbVar7;
    uVar17 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xe0) {
        pbVar8 = pbVar7 + 2;
        uVar17 = (uVar17 & 0x1f) << 6 | pbVar7[1] & 0x3f;
      }
      else {
        uVar15 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          pbVar8 = pbVar7 + 3;
          uVar17 = uVar15 | (uVar17 & 0x1f) << 0xc;
        }
        else {
          pbVar8 = pbVar7 + 4;
          uVar17 = pbVar7[3] & 0x3f | uVar15 << 6 | (uVar17 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar8 = pbVar7 + 1;
    }
    lVar3 = (longlong)pbVar8 - lVar4;
    if (uVar17 != 0x2f) break;
LAB_00631a2c:
    lVar11 = lVar3;
    if (lVar11 == lVar18) {
      lVar11 = lVar18;
      break;
    }
  }
  local_e8 = local_d0;
  (*(code *)PTR__join_00799210)("memory",local_d0,6);
  (*(code *)puVar1)(lVar4 + lVar11,local_150,lVar18 - lVar11);
  (*(code *)puVar1)("memory",local_e8,6);
  local_a8 = local_168;
  local_b8 = CONCAT44(uStack_174,local_178);
  uStack_b0 = CONCAT44(uStack_16c,uStack_170);
  local_90 = local_1b8[0];
  local_a0 = (int)local_1c8;
  uStack_9c = local_1c8._4_4_;
  uStack_98 = (undefined4)uStack_1c0;
  uStack_94 = uStack_1c0._4_4_;
  if (local_160 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(&local_a0,1);
  }
  auVar24._8_8_ = local_f0;
  auVar24._0_8_ = local_180;
  local_198 = CONCAT44(uStack_94,uStack_98);
  uStack_190 = local_90;
  local_1b8[2] = local_a8;
  local_1a0 = CONCAT44(uStack_9c,local_a0);
  local_1b8[0] = local_b8;
  local_1b8[1] = uStack_b0;
  uStack_1c0 = 2;
  local_1c8 = 1;
  if (local_b8 == 0xffffffffffffffff) {
    uVar6 = 1;
  }
  else {
    puVar5 = local_1b8;
    uVar14 = local_1b8[0];
    do {
      uVar13 = puVar5[2];
      (*(code *)PTR__join_00799210)("memory.limit_in_bytes",uVar13,0x15);
      bVar2 = read_cgroup_u64_file(CONCAT44(uStack_16c,uStack_170),local_168);
      uVar6 = extraout_RDX_01 - 1;
      if ((bVar2 & uVar6 < 0xfffffffffffffff) != 0) {
        if (extraout_RDX_01 < unaff_RBP) {
          unaff_RBP = extraout_RDX_01;
        }
        if ((local_f8 & 1) == 0) {
          unaff_RBP = extraout_RDX_01;
        }
        bVar21 = local_180 != 1;
        local_180 = 1;
        auVar24._8_8_ = local_f0;
        auVar24._0_8_ = 1;
        uVar22 = extraout_XMM0_Da_02;
        if (bVar21) {
          (*(code *)PTR__join_00799210)("memory.usage_in_bytes",uVar13,0x15);
          auVar24 = read_cgroup_u64_file(local_158,local_150);
          local_f0 = auVar24._8_8_;
          local_180 = auVar24._0_8_;
          uVar22 = extraout_XMM0_Da_03;
          if (local_160 != 0) {
            uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_03,1);
            auVar24._8_8_ = local_f0;
            auVar24._0_8_ = local_180;
          }
        }
        local_f0 = auVar24._8_8_;
        local_180 = auVar24._0_8_;
        if (CONCAT44(uStack_174,local_178) != 0) {
          uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
          auVar24._8_8_ = local_f0;
          auVar24._0_8_ = local_180;
        }
        local_f0 = auVar24._8_8_;
        local_180 = auVar24._0_8_;
        if (uVar14 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
          auVar24._8_8_ = local_f0;
          auVar24._0_8_ = local_180;
        }
        local_f8 = 1;
        uVar6 = local_1c8;
        goto LAB_0063214d;
      }
      uVar22 = extraout_XMM0_Da_02;
      if (CONCAT44(uStack_174,local_178) != 0) {
        uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)
                           (CONCAT71((int7)(uVar6 >> 8),uVar6 < 0xfffffffffffffff),1);
      }
      if (uVar14 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
      }
      auVar24._8_8_ = local_f0;
      auVar24._0_8_ = local_180;
      if (uStack_1c0 == local_1c8) {
        uVar6 = uStack_1c0;
        break;
      }
      uVar6 = local_1c8 + 1;
      puVar5 = local_1b8 + local_1c8 * 3;
      uVar14 = local_1b8[local_1c8 * 3];
      local_1c8 = uVar6;
    } while (uVar14 != 0xffffffffffffffff);
  }
LAB_0063214d:
  local_f0 = auVar24._8_8_;
  local_180 = auVar24._0_8_;
  uVar22 = <[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<std[6c98fd8553dbae28]::path::PathBuf>;2:usize]as_core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>
           ::partial_drop(local_1b8,uVar6,uStack_1c0);
LAB_006319ed:
  if (local_40._1_1_ != '\0') {
LAB_0063220b:
    *local_38 = local_f8;
    local_38[1] = unaff_RBP;
    local_38[2] = local_180;
    local_38[3] = local_f0;
    if (local_e0 != 0) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(local_f0,1);
    }
    if (local_c0 == 0) {
      return;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    return;
  }
  goto LAB_0063149e;
}


