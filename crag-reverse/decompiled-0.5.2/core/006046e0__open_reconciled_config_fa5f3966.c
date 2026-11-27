// 006046e0 open_reconciled_config

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::journal::Journal>::open_reconciled_config */

undefined1 (*) [16] __rustcall
<craggemini_core[66f3c71560d70857]::journal::Journal>::open_reconciled_config
          (undefined1 (*param_1) [16],longlong param_2)

{
  ulonglong *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined7 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  char *******pppppppcVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char cVar14;
  ulonglong uVar15;
  undefined8 extraout_RDX;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  char *******pppppppcVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  uint uVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 uVar28;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 local_2cc;
  int local_2c8;
  undefined4 uStack_2c4;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  char *******local_2a8;
  char *******local_2a0;
  undefined8 uStack_298;
  ulonglong local_290;
  ulonglong local_288;
  undefined1 (*local_280) [16];
  ulonglong local_278;
  char *******local_270;
  ulonglong uStack_268;
  undefined4 *local_260;
  ulonglong local_258;
  longlong local_250;
  undefined4 *local_248;
  longlong local_240;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  int local_220;
  undefined4 uStack_21c;
  undefined1 uStack_218;
  undefined7 uStack_217;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  char *******local_200;
  ulonglong uStack_1f8;
  ulonglong local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 (*local_1d8) [16];
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  undefined4 local_1c0;
  char cStack_1bc;
  char cStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  ulonglong local_1b8;
  char *******pppppppcStack_1b0;
  undefined1 local_1a8 [12];
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 (*pauStack_170) [16];
  ulonglong local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  ulonglong local_150;
  char *******pppppppcStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  ulonglong local_d8;
  char *******pppppppcStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  char *******local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar23 = *(undefined8 *)(param_2 + 0x138);
  uVar28 = *(undefined8 *)(param_2 + 0x140);
  pppppppcVar10 = *(char ********)(param_2 + 0x168);
  lVar19 = *(longlong *)(param_2 + 0x170);
  (*(code *)PTR__join_00799210)("stream.jsonl\n",uVar28,0xc);
  uVar27 = craggemini_core[66f3c71560d70857]::private_file
                     (&local_220,pppppppcStack_1b0,local_1a8._0_8_,1);
  if (local_220 == 1) {
    *(ulonglong *)(*param_1 + 8) = CONCAT71(uStack_217,uStack_218);
    *(undefined8 *)*param_1 = 0xffffffffffffffff;
    if (local_1b8 == 0) {
      return param_1;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
    return param_1;
  }
  local_2cc = uStack_21c;
  uVar27 = extraout_RDX;
  if (local_1b8 != 0) {
    uVar27 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  iVar9 = (*(code *)PTR_flock_0079a0e0)();
  if (iVar9 == 0) {
    local_70 = uVar28;
    (*(code *)PTR_metadata_00799b30)();
    if ((int)local_1b8 != 2) {
      local_258 = local_168;
      local_1b8 = 0;
      _local_1a8 = ZEXT816(0);
      pppppppcStack_1b0 = (char *******)&DAT_00000008;
      local_78 = uVar23;
      if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
        local_98 = *(longlong *)(in_FS_OFFSET + -0x38);
        uVar27 = *(undefined8 *)(in_FS_OFFSET + -0x30);
      }
      else {
        local_98 = (*(code *)PTR_hashmap_random_keys_00799248)();
        *(longlong *)(in_FS_OFFSET + -0x38) = local_98;
        *(undefined8 *)(in_FS_OFFSET + -0x30) = uVar27;
        *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
      }
      *(longlong *)(in_FS_OFFSET + -0x38) = local_98 + 1;
      local_88 = 0x4000;
      local_d8 = local_1b8;
      pppppppcStack_d0 = pppppppcStack_1b0;
      local_c8 = local_1a8._0_8_;
      uStack_c0 = local_1a8._8_4_;
      uStack_bc = uStack_19c;
      local_b8 = (undefined1 (*) [16])
                 anon_1b4a85c95499e1b671cf4fa96a1b6d0f_365_llvm_10049508496007902178;
      uStack_b0 = _UNK_0078f4c0;
      local_a8 = _DAT_0078f4c8;
      uStack_a0 = _UNK_0078f4d0;
      local_2a0 = (char *******)0xffffffffffffffff;
      local_270 = (char *******)0xffffffffffffffff;
      uStack_90 = uVar27;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar11 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar11 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00605fc9;
      }
      pppppppcStack_1b0 = (char *******)0x2000;
      _local_1a8 = (undefined1  [16])0x0;
      local_198 = (char *******)((ulonglong)local_198 & 0xffffffffffffff00);
      local_250 = 0;
      local_248 = (undefined4 *)0x1;
      local_280 = (undefined1 (*) [16])0x0;
      cVar7 = '\0';
      cVar14 = '\0';
      local_278 = 0;
      local_1b8 = uVar11;
      uStack_190 = &local_2cc;
      while( true ) {
        local_240 = 0;
        auVar30 = std[6c98fd8553dbae28]::io::read_until::
                  <std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<&mut_std[6c98fd8553dbae28]::fs::File>>
                            (&local_1b8,10,&local_250);
        lVar24 = auVar30._8_8_;
        if (auVar30._0_8_ == 1) break;
        if (lVar24 == 0) {
          local_258 = 0;
          uVar11 = local_278;
          goto LAB_00605480;
        }
        if ((local_240 == 0) || (*(char *)((longlong)local_248 + local_240 + -1) != '\n')) {
LAB_006053b4:
          bVar25 = local_258 < local_278;
          local_258 = local_258 - local_278;
          if (bVar25) {
            local_258 = 0;
          }
          uVar11 = local_278;
          goto LAB_00605480;
        }
        local_220 = (int)local_248;
        uStack_21c = (undefined4)((ulonglong)local_248 >> 0x20);
        uStack_218 = (undefined1)local_240;
        uStack_217 = (undefined7)((ulonglong)local_240 >> 8);
        iStack_210 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        uStack_204 = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
                  (&local_2c8,&local_220);
        if ((char)local_2c8 == -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                    (&uStack_2c0);
          goto LAB_006053b4;
        }
        uStack_20c = uStack_2b4;
        uStack_208 = uStack_2b0;
        uStack_204 = uStack_2ac;
        uStack_21c = uStack_2c4;
        uStack_218 = uStack_2c0;
        uStack_217 = uStack_2bf;
        iStack_210 = iStack_2b8;
        local_220 = local_2c8;
        pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(&iStack_210,&local_220);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = PTR_NULL_00799530;
        }
        if (((*pcVar12 != '\x03') || (*(longlong *)(pcVar12 + 0x18) != lVar19)) ||
           (iVar9 = (*(code *)PTR_bcmp_00799020)(extraout_XMM0_Qa_00,lVar19), iVar9 != 0)) {
          uVar23 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
                   ::truncate(&local_d8,0);
          local_c8 = 0;
          if (uStack_a0 != 0) {
            auVar30 = *local_b8;
            pauVar20 = local_b8 + 1;
            uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
            local_280 = local_b8;
            pauVar16 = local_b8;
            lVar24 = uStack_a0;
            do {
              if ((short)uVar22 == 0) {
                do {
                  auVar30 = *pauVar20;
                  pauVar16 = pauVar16 + -0x18;
                  pauVar20 = pauVar20 + 1;
                  uVar22 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar22 == 0);
              }
              uVar3 = 0;
              for (uVar4 = uVar22; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar3 = uVar3 + 1;
              }
              if (*(longlong *)((longlong)pauVar16 + (ulonglong)uVar3 * -0x18 + -0x18) != 0) {
                auVar30._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar30._0_8_,1);
                auVar30._8_8_ = extraout_XMM0_Qb;
              }
              uVar11 = uStack_b0;
              uVar23 = auVar30._0_8_;
              uVar22 = uVar22 - 1 & uVar22;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            if (uStack_b0 == 0) {
              local_a8 = 0;
            }
            else {
              uVar23 = (*(code *)PTR_memset_00799090)(uVar23,uStack_b0 + 0x11);
              local_a8 = (uVar11 + 1 & 0xfffffffffffffff8) - (uVar11 + 1 >> 3);
              if (uVar11 < 8) {
                local_a8 = uVar11;
              }
            }
            uStack_a0 = 0;
          }
          if ((local_2a0 != (char *******)0xffffffffffffffff) && (local_2a0 != (char *******)0x0)) {
            uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
          }
          local_2a0 = (char *******)0xffffffffffffffff;
          if ((local_270 != (char *******)0xffffffffffffffff) && (local_270 != (char *******)0x0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
          }
          local_270 = (char *******)0xffffffffffffffff;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_220);
          local_280 = (undefined1 (*) [16])0x0;
          cVar7 = '\0';
          cVar14 = '\0';
          uVar11 = 0;
LAB_00605480:
          if (local_250 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          pppppppcVar18 = pppppppcStack_1b0;
          if (pppppppcStack_1b0 != (char *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          if (local_258 != 0) {
            lVar24 = (*(code *)PTR_set_len_0079a0d8)();
            uVar23 = extraout_XMM0_Qa_10;
            if (lVar24 == 0) {
              pppppppcVar18 = (char *******)0x1;
              uVar23 = 0;
              lVar24 = (*(code *)PTR_seek_0079a058)();
              if (lVar24 != 1) {
                lVar24 = (*(code *)PTR_sync_data_00799770)();
                uVar23 = extraout_XMM0_Qa_12;
                if (lVar24 == 0) goto LAB_00605656;
                goto LAB_006054e2;
              }
              *(undefined8 *)(*param_1 + 8) = uVar23;
              uVar23 = extraout_XMM0_Qa_11;
            }
            else {
LAB_006054e2:
              *(longlong *)(*param_1 + 8) = lVar24;
            }
            *(undefined8 *)*param_1 = 0xffffffffffffffff;
            goto LAB_0060550f;
          }
LAB_00605656:
          uVar5 = local_2cc;
          if (lVar19 < 0) {
LAB_00605663:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00605fc9;
          }
          if (lVar19 == 0) {
            local_278 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            uVar15 = (*(code *)PTR___rust_alloc_00799000)();
            if (uVar15 == 0) goto LAB_00605663;
            local_278 = uVar15;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_13,lVar19);
            pppppppcVar18 = pppppppcVar10;
          }
          if (local_270 == (char *******)0xffffffffffffffff) {
            uVar15 = 0xffffffffffffffff;
          }
          else {
            pppppppcVar18 = (char *******)&local_270;
            (*(code *)PTR_clone_00798fd0)();
            local_2a8 = pppppppcStack_1b0;
            local_288 = local_1a8._0_8_;
            uVar15 = local_1b8;
          }
          pppppppcVar10 = local_2a0;
          local_1f0 = 0xffffffffffffffff;
          if (local_2a0 != (char *******)0xffffffffffffffff) {
            pppppppcVar18 = (char *******)&local_2a0;
            (*(code *)PTR_clone_00798fd0)();
            local_2c8 = (int)pppppppcStack_1b0;
            uStack_2c4 = (undefined4)((ulonglong)pppppppcStack_1b0 >> 0x20);
            uStack_2c0 = local_1a8[0];
            uStack_2bf = local_1a8._1_7_;
            local_1f0 = local_1b8;
          }
          local_1c0 = uVar5;
          local_220 = (int)lVar19;
          uStack_21c = (undefined4)((ulonglong)lVar19 >> 0x20);
          uStack_218 = (undefined1)local_278;
          uStack_217 = (undefined7)(local_278 >> 8);
          local_1d8 = local_280;
          uStack_1c8 = 0x1000000;
          uStack_208 = (undefined4)uVar15;
          uStack_204 = (undefined4)(uVar15 >> 0x20);
          local_200 = local_2a8;
          uStack_1f8 = local_288;
          uStack_1e8 = CONCAT44(uStack_2c4,local_2c8);
          uStack_1e0 = CONCAT71(uStack_2bf,uStack_2c0);
          uStack_1ba = 0;
          local_238 = 0;
          lStack_230 = 8;
          local_228 = 0;
          iStack_210 = local_220;
          uStack_20c = uStack_21c;
          local_1d0 = uVar11;
          cStack_1bc = cVar7;
          cStack_1bb = cVar14;
          if (pppppppcVar10 == (char *******)0xffffffffffffffff) {
            bVar25 = true;
            uVar23 = local_78;
            uVar28 = local_70;
          }
          else {
            local_58 = local_290;
            local_68 = local_2a0;
            uStack_60 = uStack_298;
            (*(code *)PTR_clone_00798fd0)();
            lVar19 = local_228;
            uStack_190 = local_260;
            local_198 = (char *******)uStack_268;
            local_1b8 = CONCAT44(uStack_2c4,local_2c8);
            pppppppcStack_1b0 = (char *******)CONCAT71(uStack_2bf,uStack_2c0);
            local_1a8._4_4_ = uStack_2b4;
            local_1a8._0_4_ = iStack_2b8;
            stack0xfffffffffffffe60 = local_270;
            local_188._0_2_ = CONCAT11(cVar14,cVar7);
            if (local_228 == local_238) {
              <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::journal::InterruptedJournalTurn>>
              ::grow_one(&local_238,&local_68);
            }
            uVar11 = local_58;
            uVar28 = uStack_60;
            lVar24 = lVar19 * 0x38;
            *(ulonglong *)(lStack_230 + 0x30 + lVar24) = local_188;
            puVar13 = (undefined4 *)(lStack_230 + 0x20 + lVar24);
            *puVar13 = (undefined4)local_198;
            puVar13[1] = local_198._4_4_;
            puVar13[2] = (undefined4)uStack_190;
            puVar13[3] = uStack_190._4_4_;
            puVar13 = (undefined4 *)(lStack_230 + 0x10 + lVar24);
            *puVar13 = local_1a8._0_4_;
            puVar13[1] = local_1a8._4_4_;
            puVar13[2] = local_1a8._8_4_;
            puVar13[3] = uStack_19c;
            *(ulonglong *)(lStack_230 + lVar24) = local_1b8;
            ((ulonglong *)(lStack_230 + lVar24))[1] = (ulonglong)pppppppcStack_1b0;
            local_228 = lVar19 + 1;
            local_48 = (char *******)0x0;
            local_38 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar13 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar13 == (undefined4 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00605fc9;
            }
            *(undefined2 *)(puVar13 + 1) = 0x6e6f;
            *puVar13 = 0x73616572;
            local_250 = 6;
            local_240 = 6;
            local_248 = puVar13;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar23 = s_startup_reconciled_001a03ef._8_8_;
            if (pcVar12 == (char *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00605fc9;
            }
            *(undefined8 *)pcVar12 = s_startup_reconciled_001a03ef._0_8_;
            *(undefined8 *)(pcVar12 + 8) = uVar23;
            pcVar12[0x10] = 'e';
            pcVar12[0x11] = 'd';
            local_1b8 = CONCAT71(local_1b8._1_7_,3);
            pppppppcStack_1b0 = (char *******)0x12;
            stack0xfffffffffffffe60 = 0x12;
            local_1a8._0_8_ = pcVar12;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_2c8,&local_48,&local_250,&local_1b8);
            uVar23 = local_78;
            if ((char)local_2c8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_2c8);
            }
            pppppppcStack_1b0 = local_48;
            stack0xfffffffffffffe60 = local_38;
            local_1a8._0_8_ = uStack_40;
            local_1b8 = CONCAT71(local_1b8._1_7_,5);
            uVar11 = append(&local_220,uVar28,uVar11,"reconciled",10,&local_1b8,1);
            uVar28 = local_70;
            uVar27 = extraout_XMM0_Qa_14;
            if (((uVar11 != 0) && (1 < ((uint)uVar11 & 3) - 2)) && ((uVar11 & 3) != 0)) {
              pppppppcStack_1b0 = (char *******)(uVar11 - 1);
              local_1b8 = CONCAT71(local_1b8._1_7_,3);
              uVar27 = (*(code *)PTR_drop_00799040)();
            }
            pppppppcVar18 = local_68;
            if (local_68 != (char *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            bVar25 = false;
          }
          if ((local_1d0 < uStack_1c8) ||
             (lVar19 = rotate_in_place(&local_220,pppppppcVar18), uVar27 = extraout_XMM0_Qa_15,
             lVar19 == 0)) {
            local_1b8 = 0x1b600000000;
            uVar11 = (ulonglong)pppppppcStack_1b0 >> 8;
            pppppppcStack_1b0 = (char *******)CONCAT71((uint7)uVar11 & 0xffff0000000000,1);
            uVar27 = (*(code *)PTR__open_00799768)(uVar28,uVar23);
            if (local_2c8 == 1) {
              lVar19 = CONCAT71(uStack_2bf,uStack_2c0);
              goto LAB_00605b70;
            }
            local_250 = CONCAT44(local_250._4_4_,uStack_2c4);
            lVar19 = (*(code *)PTR_sync_all_0079a0e8)();
            if (lVar19 == 0) {
              (*(code *)PTR_close_00799030)();
              local_158 = CONCAT17(uStack_1b9,
                                   CONCAT16(uStack_1ba,
                                            CONCAT15(cStack_1bb,CONCAT14(cStack_1bc,local_1c0))));
              local_168 = local_1d0;
              uStack_160 = uStack_1c8;
              local_178 = uStack_1e0;
              pauStack_170 = local_1d8;
              local_1b8 = CONCAT44(uStack_21c,local_220);
              pppppppcStack_1b0 = (char *******)CONCAT71(uStack_217,uStack_218);
              local_1a8._4_4_ = uStack_20c;
              local_1a8._0_4_ = iStack_210;
              uStack_19c = uStack_204;
              local_1a8._8_4_ = uStack_208;
              local_188 = local_1f0;
              uStack_180 = uStack_1e8;
              local_198 = local_200;
              uStack_190 = (undefined4 *)uStack_1f8;
              local_150 = local_d8;
              pppppppcStack_148 = pppppppcStack_d0;
              local_140 = (undefined4)local_c8;
              uStack_13c = local_c8._4_4_;
              uStack_138 = uStack_c0;
              uStack_134 = uStack_bc;
              local_130 = (undefined4)local_b8;
              uStack_12c = local_b8._4_4_;
              uStack_128 = (undefined4)uStack_b0;
              uStack_124 = uStack_b0._4_4_;
              local_120 = (undefined4)local_a8;
              uStack_11c = local_a8._4_4_;
              uStack_118 = (undefined4)uStack_a0;
              uStack_114 = uStack_a0._4_4_;
              local_110 = local_98;
              uStack_108 = uStack_90;
              local_100 = local_88;
              local_e8 = local_228;
              local_f8 = local_238;
              lStack_f0 = lStack_230;
              uVar23 = (*(code *)PTR_memcpy_00799008)(local_238,0xd8);
              *(ulonglong *)(param_1[0xd] + 8) = local_258;
              if (!bVar25) {
                return param_1;
              }
              if (local_270 == (char *******)0xffffffffffffffff) {
                return param_1;
              }
              if (local_270 == (char *******)0x0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
              return param_1;
            }
            *(longlong *)(*param_1 + 8) = lVar19;
            *(undefined8 *)*param_1 = 0xffffffffffffffff;
            uVar27 = (*(code *)PTR_close_00799030)();
          }
          else {
LAB_00605b70:
            *(longlong *)(*param_1 + 8) = lVar19;
            *(undefined8 *)*param_1 = 0xffffffffffffffff;
          }
          if (local_228 != 0) {
            lVar24 = lStack_230 + 0x20;
            lVar19 = local_228;
            do {
              if (*(longlong *)(lVar24 + -0x20) != 0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
              if ((*(longlong *)(lVar24 + -8) != -1) && (*(longlong *)(lVar24 + -8) != 0)) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
              lVar24 = lVar24 + 0x38;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          if (local_238 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,8);
          }
          uVar23 = (*(code *)PTR_close_00799030)();
          if (CONCAT44(uStack_21c,local_220) != 0) {
            uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
          }
          if ((CONCAT44(uStack_204,uStack_208) != -1) && (CONCAT44(uStack_204,uStack_208) != 0)) {
            uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
          }
          if ((local_1f0 != 0xffffffffffffffff) && (local_1f0 != 0)) {
            uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
          }
          if (bVar25) {
            bVar25 = false;
            goto joined_r0x00605521;
          }
          bVar25 = false;
          uVar11 = CONCAT44(uStack_bc,uStack_c0);
          pppppppcVar10 = pppppppcStack_d0;
          goto joined_r0x00605ce4;
        }
        pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_01,&local_220);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = PTR_NULL_00799530;
        }
        if ((*pcVar12 == '\x02') && (*(longlong *)(pcVar12 + 8) == 0)) {
          local_280 = *(undefined1 (**) [16])(pcVar12 + 0x10);
        }
        else {
          local_280 = (undefined1 (*) [16])(*local_280 + 1);
        }
        pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_02,&local_220);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = PTR_NULL_00799530;
        }
        if (*pcVar12 == '\x03') {
          uVar23 = *(undefined8 *)(pcVar12 + 0x10);
          uVar11 = *(ulonglong *)(pcVar12 + 0x18);
        }
        else {
          uVar23 = 1;
          uVar11 = 0;
        }
        pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_03,&local_220);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = PTR_NULL_00799530;
        }
        if ((*pcVar12 != '\x03') || (8 < *(longlong *)(pcVar12 + 0x18) - 6U))
        goto switchD_00604be3_caseD_7;
        puVar1 = *(ulonglong **)(pcVar12 + 0x10);
        uVar28 = extraout_XMM0_Qa_04;
        switch(*(longlong *)(pcVar12 + 0x18)) {
        case 6:
          if ((*(short *)((longlong)puVar1 + 4) == 0x7469 && (int)*puVar1 == 0x6d627573) &&
             (cVar8 = craggemini_core[66f3c71560d70857]::protocol::valid_id(uVar23,uVar11),
             cVar8 != '\0')) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in(&local_2c8,uVar11,0,1,1)
            ;
            iVar9 = iStack_2b8;
            if (local_2c8 != 1) {
              uVar23 = CONCAT44(uStack_2b4,iStack_2b8);
              pppppppcVar18 = (char *******)CONCAT71(uStack_2bf,uStack_2c0);
              if (uVar11 != 0) {
                local_2a8 = (char *******)CONCAT71(uStack_2bf,uStack_2c0);
                (*(code *)PTR_memcpy_00799008)(uVar23,uVar11);
                pppppppcVar18 = local_2a8;
              }
              local_2c8 = (int)pppppppcVar18;
              uStack_2c4 = (undefined4)((ulonglong)pppppppcVar18 >> 0x20);
              uStack_2c0 = (undefined1)iVar9;
              uStack_2bf = (undefined7)((ulonglong)uVar23 >> 8);
              iStack_2b8 = (int)uVar11;
              uStack_2b4 = (undefined4)(uVar11 >> 0x20);
              <craggemini_core[66f3c71560d70857]::admission::BoundedSeen>::insert
                        (&local_d8,&local_2c8);
              <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                        (&local_2c8,uVar11,0,1,1);
              if (local_2c8 != 1) {
                uVar23 = CONCAT44(uStack_2b4,iStack_2b8);
                local_2a8 = (char *******)CONCAT71(uStack_2bf,uStack_2c0);
                if (uVar11 != 0) {
                  (*(code *)PTR_memcpy_00799008)(uVar23,uVar11);
                }
                if ((local_2a0 != (char *******)0xffffffffffffffff) &&
                   (local_2a0 != (char *******)0x0)) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
                }
                local_2a0 = local_2a8;
                uStack_298 = uVar23;
                local_290 = uVar11;
                goto LAB_00605066;
              }
            }
LAB_00605f76:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00605fc9;
          }
          break;
        case 8:
          if (*puVar1 == 0x6465747065636361) {
            pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(0x6465747065636361,&local_220);
            if (pcVar12 == (char *)0x0) {
              pcVar12 = PTR_NULL_00799530;
            }
            if (*pcVar12 == '\x03') {
              puVar13 = *(undefined4 **)(pcVar12 + 0x18);
              cVar8 = craggemini_core[66f3c71560d70857]::protocol::valid_id
                                (*(undefined8 *)(pcVar12 + 0x10),puVar13);
              if (cVar8 != '\0') {
                <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                          (&local_2c8,puVar13,0,1,1);
                if (local_2c8 == 1) goto LAB_00605f76;
                uVar11 = CONCAT44(uStack_2b4,iStack_2b8);
                local_2a8 = (char *******)CONCAT71(uStack_2bf,uStack_2c0);
                if (puVar13 != (undefined4 *)0x0) {
                  local_288 = uVar11;
                  (*(code *)PTR_memcpy_00799008)(uVar11,puVar13);
                  uVar11 = local_288;
                }
                if ((local_270 != (char *******)0xffffffffffffffff) &&
                   (local_270 != (char *******)0x0)) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
                }
                local_270 = local_2a8;
                uStack_268 = uVar11;
                local_260 = puVar13;
              }
            }
          }
          else if (*puVar1 == 0x646e655f6e727574) goto LAB_0060503d;
          break;
        case 10:
          if ((short)puVar1[1] == 0x746e && (*puVar1 ^ 0x696f706b63656863) == 0) {
            pcVar12 = (char *)(*(code *)PTR_index_into_00799300)
                                        (*puVar1 ^ 0x696f706b63656863,&local_220);
            if (pcVar12 == (char *)0x0) {
              pcVar12 = PTR_NULL_00799530;
            }
            uVar23 = extraout_XMM0_Qa_05;
            if (*pcVar12 == '\x03') {
              puVar13 = *(undefined4 **)(pcVar12 + 0x18);
              cVar7 = craggemini_core[66f3c71560d70857]::protocol::valid_id
                                (*(undefined8 *)(pcVar12 + 0x10),puVar13);
              uVar23 = extraout_XMM0_Qa_06;
              if (cVar7 != '\0') {
                uVar23 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                                   (&local_2c8,puVar13,0,1,1);
                if (local_2c8 == 1) goto LAB_00605f76;
                uVar11 = CONCAT44(uStack_2b4,iStack_2b8);
                local_2a8 = (char *******)CONCAT71(uStack_2bf,uStack_2c0);
                if (puVar13 != (undefined4 *)0x0) {
                  uVar23 = (*(code *)PTR_memcpy_00799008)(uVar11,puVar13);
                }
                if ((local_270 != (char *******)0xffffffffffffffff) &&
                   (local_270 != (char *******)0x0)) {
                  uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
                }
                local_270 = local_2a8;
                uStack_268 = uVar11;
                local_260 = puVar13;
              }
            }
            pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,&local_220);
            if (pcVar12 == (char *)0x0) {
              pcVar12 = PTR_NULL_00799530;
            }
            uVar28 = extraout_XMM0_Qa_07;
            if (*pcVar12 == '\x03') {
              uVar23 = *(undefined8 *)(pcVar12 + 0x10);
              uVar11 = *(ulonglong *)(pcVar12 + 0x18);
              cVar7 = craggemini_core[66f3c71560d70857]::protocol::valid_id(uVar23,uVar11);
              uVar28 = extraout_XMM0_Qa_08;
              if (cVar7 != '\0') {
                local_80 = uVar23;
                uVar23 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                                   (&local_2c8,uVar11,0,1,1);
                if ((char)local_2c8 == '\0') {
                  uVar28 = CONCAT44(uStack_2b4,iStack_2b8);
                  local_2a8 = (char *******)CONCAT71(uStack_2bf,uStack_2c0);
                  if (uVar11 != 0) {
                    uVar23 = (*(code *)PTR_memcpy_00799008)(uVar23,uVar11);
                  }
                  local_288 = uVar11;
                  if ((local_2a0 != (char *******)0xffffffffffffffff) &&
                     (local_2a0 != (char *******)0x0)) {
                    uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
                  }
                  uVar11 = local_288;
                  local_2a0 = local_2a8;
                  local_290 = local_288;
                  uStack_298 = uVar28;
                  pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,&local_220);
                  if (pcVar12 == (char *)0x0) {
                    pcVar12 = PTR_NULL_00799530;
                  }
                  if (*pcVar12 == '\x01') {
                    cVar7 = pcVar12[1];
                  }
                  else {
                    cVar7 = '\0';
                  }
                  pcVar12 = (char *)(*(code *)PTR_index_into_00799300)
                                              (extraout_XMM0_Qa_09,&local_220);
                  if (pcVar12 == (char *)0x0) {
                    pcVar12 = PTR_NULL_00799530;
                  }
                  if (*pcVar12 == '\x01') {
                    cVar14 = pcVar12[1];
                  }
                  else {
                    cVar14 = '\0';
                  }
                  uVar28 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                                     (&local_2c8,uVar11,0,1,1);
                  iVar9 = iStack_2b8;
                  uVar6 = uStack_2bf;
                  uVar23 = CONCAT71(uStack_2bf,uStack_2c0);
                  if (local_2c8 != 1) {
                    uVar27 = CONCAT44(uStack_2b4,iStack_2b8);
                    if (uVar11 != 0) {
                      (*(code *)PTR_memcpy_00799008)(uVar28,local_288);
                      uVar11 = local_288;
                    }
                    local_2c8 = (int)uVar23;
                    uStack_2c4 = (undefined4)((uint7)uVar6 >> 0x18);
                    uStack_2c0 = (undefined1)iVar9;
                    uStack_2bf = (undefined7)((ulonglong)uVar27 >> 8);
                    iStack_2b8 = (int)uVar11;
                    uStack_2b4 = (undefined4)(uVar11 >> 0x20);
                    <craggemini_core[66f3c71560d70857]::admission::BoundedSeen>::insert
                              (&local_d8,&local_2c8);
                    break;
                  }
                }
                goto LAB_00605f76;
              }
            }
          }
          else if ((short)puVar1[1] != 0x6465 || *puVar1 != 0x6c69636e6f636572) break;
LAB_0060503d:
          if ((local_2a0 != (char *******)0xffffffffffffffff) && (local_2a0 != (char *******)0x0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
          }
          local_2a0 = (char *******)0xffffffffffffffff;
LAB_00605066:
          cVar7 = '\0';
          cVar14 = '\0';
          break;
        case 0xc:
          if ((int)puVar1[1] == 0x646e655f && *puVar1 == 0x72656469766f7270) {
            cVar7 = '\x01';
          }
          goto LAB_00604e04;
        case 0xd:
          if (*(longlong *)((longlong)puVar1 + 5) == 0x6c6c61635f6c6f6f &&
              *puVar1 == 0x6c6f6f745f70636d) {
            cVar14 = '\x01';
          }
          break;
        case 0xe:
          if (*(longlong *)((longlong)puVar1 + 6) == 0x74726174735f7265 &&
              *puVar1 == 0x72656469766f7270) {
            cVar7 = '\0';
          }
LAB_00604e04:
        }
switchD_00604be3_caseD_7:
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_220);
        local_278 = local_278 + lVar24;
      }
      *(longlong *)(*param_1 + 8) = lVar24;
      *(undefined8 *)*param_1 = 0xffffffffffffffff;
      uVar23 = extraout_XMM0_Qa;
      if (local_250 != 0) {
        uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
      }
      if (pppppppcStack_1b0 != (char *******)0x0) {
        uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
      }
LAB_0060550f:
      bVar25 = true;
joined_r0x00605521:
      if ((local_270 != (char *******)0xffffffffffffffff) && (local_270 != (char *******)0x0)) {
        uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
      }
      if ((local_2a0 != (char *******)0xffffffffffffffff) && (local_2a0 != (char *******)0x0)) {
        uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
      }
      uVar11 = CONCAT44(uStack_bc,uStack_c0);
      pppppppcVar10 = pppppppcStack_d0;
joined_r0x00605ce4:
      pppppppcStack_d0 = pppppppcVar10;
      if (uVar11 != 0) {
        uVar15 = local_d8;
        if (local_c8 < local_d8) {
          uVar15 = 0;
        }
        lVar19 = local_c8 - uVar15;
        uVar21 = local_d8 - lVar19;
        lVar24 = uVar11 - uVar21;
        bVar26 = lVar24 != 0;
        if (uVar11 < uVar21) {
          lVar24 = 0;
        }
        uVar17 = lVar19 + uVar11;
        if (uVar11 >= uVar21 && bVar26) {
          uVar17 = local_d8;
        }
        lVar19 = uVar17 - lVar19;
        local_280 = param_1;
        if (lVar19 != 0) {
          pppppppcVar18 = pppppppcVar10 + uVar15 * -3 + local_c8 * 3 + 1;
          do {
            if (pppppppcVar18[-1] != (char ******)0x0) {
              uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
            }
            pppppppcVar18 = pppppppcVar18 + 3;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        param_1 = local_280;
        if (uVar21 < uVar11) {
          pppppppcVar10 = pppppppcVar10 + 1;
          do {
            if (pppppppcVar10[-1] != (char ******)0x0) {
              uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
            }
            pppppppcVar10 = pppppppcVar10 + 3;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      if (local_d8 != 0) {
        uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,8);
      }
      uVar11 = uStack_b0;
      if (uStack_b0 != 0) {
        if (uStack_a0 != 0) {
          auVar29 = *local_b8;
          pauVar20 = local_b8 + 1;
          uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          pauVar16 = local_b8;
          lVar19 = uStack_a0;
          do {
            if ((short)uVar22 == 0) {
              do {
                auVar29 = *pauVar20;
                pauVar16 = pauVar16 + -0x18;
                pauVar20 = pauVar20 + 1;
                uVar22 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar22 == 0);
            }
            uVar3 = 0;
            for (uVar4 = uVar22; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar3 = uVar3 + 1;
            }
            if (*(longlong *)((longlong)pauVar16 + (ulonglong)uVar3 * -0x18 + -0x18) != 0) {
              auVar29._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar29._0_8_,1);
              auVar29._8_8_ = extraout_XMM0_Qb_00;
            }
            uVar23 = auVar29._0_8_;
            lVar19 = lVar19 + -1;
            uVar22 = uVar22 - 1 & uVar22;
          } while (lVar19 != 0);
        }
        if (uVar11 + (uVar11 * 0x18 + 0x27 & 0xfffffffffffffff0) != -0x11) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,0x10);
        }
      }
      if (!bVar25) {
        return param_1;
      }
      goto LAB_00604896;
    }
    pppppppcVar10 = pppppppcStack_1b0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pppppppcVar10 = (char *******)(*(code *)PTR___rust_alloc_00799000)();
    uVar23 = s_ck_for_a_running_worker_001a0421._8_8_;
    if (pppppppcVar10 == (char *******)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_00605fc9:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pppppppcVar10[4] = (char ******)s_ck_for_a_running_worker_001a0421._0_8_;
    pppppppcVar10[5] = (char ******)uVar23;
    uVar23 = s_ion_journal__che_001a0411._8_8_;
    pppppppcVar10[2] = (char ******)s_ion_journal__che_001a0411._0_8_;
    pppppppcVar10[3] = (char ******)uVar23;
    uVar23 = s_cannot_lock_sess_001a0401._8_8_;
    *pppppppcVar10 = (char ******)s_cannot_lock_sess_001a0401._0_8_;
    pppppppcVar10[1] = (char ******)uVar23;
    builtin_strncpy((char *)((longlong)pppppppcVar10 + 0x2f),"g worker",8);
    local_1b8 = 0x37;
    local_1a8._0_8_ = 0x37;
    pppppppcStack_1b0 = pppppppcVar10;
    pppppppcVar10 = (char *******)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)()
    ;
  }
  *(char ********)(*param_1 + 8) = pppppppcVar10;
  *(undefined8 *)*param_1 = 0xffffffffffffffff;
LAB_00604896:
  (*(code *)PTR_close_00799030)();
  return param_1;
}


