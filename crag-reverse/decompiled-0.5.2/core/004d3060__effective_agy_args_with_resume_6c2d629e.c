// 004d3060 effective_agy_args_with_resume

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::pool::effective_agy_args_with_resume */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::pool::effective_agy_args_with_resume
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          longlong param_5,longlong param_6,undefined8 param_7)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 *local_188;
  code *local_180;
  undefined8 *puStack_178;
  longlong local_170;
  undefined8 *local_168;
  code *pcStack_160;
  undefined1 local_158 [16];
  undefined8 *local_148;
  code *local_140;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  code *local_108;
  undefined8 *puStack_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  char local_d8 [8];
  code *local_d0;
  undefined8 *puStack_c8;
  longlong local_c0;
  code *local_b8;
  undefined8 *puStack_b0;
  longlong local_a8;
  code *local_98;
  undefined8 *puStack_90;
  longlong local_88;
  code *local_78;
  undefined8 *puStack_70;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  code **local_40;
  code *local_38;
  
  local_110 = param_3;
  local_e8 = param_4;
  local_e0 = param_5;
  if (param_6 == 0) {
LAB_004d30e5:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar23 = auVar3 << 0x40;
  }
  else {
    auVar23 = ::<str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
    param_3 = auVar23._8_8_;
    auVar23._0_8_ = auVar23._0_8_;
    if ((param_3 - 0x81 < 0xffffffffffffff80 || auVar23._0_8_ == (byte *)0x0) ||
       ((9 < (byte)(*auVar23._0_8_ - 0x30) && (0x19 < (byte)((*auVar23._0_8_ & 0xdf) + 0xbf)))))
    goto LAB_004d30e5;
    uVar17 = 0;
    do {
      bVar1 = auVar23._0_8_[uVar17];
      if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
         ((0x32 < bVar1 - 0x2d ||
          ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0)))) goto LAB_004d30e5;
      uVar17 = uVar17 + 1;
    } while (param_3 != uVar17);
  }
  lVar7 = auVar23._8_8_;
  local_130 = auVar23._0_8_;
  if (local_110 != 0) {
    lVar16 = 0;
    do {
      if (*(longlong *)(param_2 + 0x10 + lVar16) == 0x1e) {
        pcVar12 = *(char **)(param_2 + 8 + lVar16);
        auVar21[0] = -(*pcVar12 == DAT_00182f90);
        auVar21[1] = -(pcVar12[1] == DAT_00182f90._1_1_);
        auVar21[2] = -(pcVar12[2] == DAT_00182f90._2_1_);
        auVar21[3] = -(pcVar12[3] == DAT_00182f90._3_1_);
        auVar21[4] = -(pcVar12[4] == DAT_00182f90._4_1_);
        auVar21[5] = -(pcVar12[5] == DAT_00182f90._5_1_);
        auVar21[6] = -(pcVar12[6] == DAT_00182f90._6_1_);
        auVar21[7] = -(pcVar12[7] == DAT_00182f90._7_1_);
        auVar21[8] = -(pcVar12[8] == DAT_00182f90._8_1_);
        auVar21[9] = -(pcVar12[9] == DAT_00182f90._9_1_);
        auVar21[10] = -(pcVar12[10] == DAT_00182f90._10_1_);
        auVar21[0xb] = -(pcVar12[0xb] == DAT_00182f90._11_1_);
        auVar21[0xc] = -(pcVar12[0xc] == DAT_00182f90._12_1_);
        auVar21[0xd] = -(pcVar12[0xd] == DAT_00182f90._13_1_);
        auVar21[0xe] = -(pcVar12[0xe] == DAT_00182f90._14_1_);
        auVar21[0xf] = -(pcVar12[0xf] == DAT_00182f90._15_1_);
        auVar22[0] = -(pcVar12[0xe] == DAT_00183c10);
        auVar22[1] = -(pcVar12[0xf] == DAT_00183c10._1_1_);
        auVar22[2] = -(pcVar12[0x10] == DAT_00183c10._2_1_);
        auVar22[3] = -(pcVar12[0x11] == DAT_00183c10._3_1_);
        auVar22[4] = -(pcVar12[0x12] == DAT_00183c10._4_1_);
        auVar22[5] = -(pcVar12[0x13] == DAT_00183c10._5_1_);
        auVar22[6] = -(pcVar12[0x14] == DAT_00183c10._6_1_);
        auVar22[7] = -(pcVar12[0x15] == DAT_00183c10._7_1_);
        auVar22[8] = -(pcVar12[0x16] == DAT_00183c10._8_1_);
        auVar22[9] = -(pcVar12[0x17] == DAT_00183c10._9_1_);
        auVar22[10] = -(pcVar12[0x18] == DAT_00183c10._10_1_);
        auVar22[0xb] = -(pcVar12[0x19] == DAT_00183c10._11_1_);
        auVar22[0xc] = -(pcVar12[0x1a] == DAT_00183c10._12_1_);
        auVar22[0xd] = -(pcVar12[0x1b] == DAT_00183c10._13_1_);
        auVar22[0xe] = -(pcVar12[0x1c] == DAT_00183c10._14_1_);
        auVar22[0xf] = -(pcVar12[0x1d] == DAT_00183c10._15_1_);
        auVar22 = auVar22 & auVar21;
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
          local_128 = CONCAT44(local_128._4_4_,(int)CONCAT71((int7)(local_110 * 0x18 >> 8),1));
          goto joined_r0x004d35b5;
        }
      }
      lVar16 = lVar16 + 0x18;
    } while (local_110 * 0x18 != lVar16);
    local_128 = (ulonglong)local_128._4_4_ << 0x20;
joined_r0x004d35b5:
    if (local_110 < 0x555555555555550) {
      puVar9 = (undefined8 *)(local_110 + 6);
      local_120 = lVar7;
      local_f0 = param_1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar4 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      auVar23._8_8_ = lVar7;
      auVar23._0_8_ = local_130;
      param_1 = puVar9;
      if (plVar4 != (longlong *)0x0) {
        local_188 = (undefined8 *)0x0;
        puVar18 = (undefined8 *)0x0;
        bVar14 = false;
        uVar19 = 0;
        lVar7 = local_130;
        uVar17 = local_110;
        do {
          lVar16 = uVar19 * 0x18 + param_2;
          if ((char)local_128 == '\0') {
LAB_004d32e0:
            if (lVar7 == 0) {
              plVar5 = *(longlong **)(lVar16 + 8);
              uVar13 = *(ulonglong *)(lVar16 + 0x10);
LAB_004d3346:
              if (uVar13 == 7) {
                if (*(int *)((longlong)plVar5 + 3) == 0x6c65646f && (int)*plVar5 == 0x6f6d2d2d) {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar8 != (undefined4 *)0x0) {
                    *(undefined4 *)((longlong)puVar8 + 3) = 0x6c65646f;
                    *puVar8 = 0x6f6d2d2d;
                    if (local_188 == puVar9) {
                      (*(code *)PTR_grow_one_00799328)();
                    }
                    lVar7 = local_e0;
                    plVar4[(longlong)local_188 * 3] = 7;
                    plVar4[(longlong)local_188 * 3 + 1] = (longlong)puVar8;
                    plVar4[(longlong)local_188 * 3 + 2] = 7;
                    puVar18 = (undefined8 *)((longlong)local_188 + 1);
                    if (-1 < local_e0) {
                      if (local_e0 == 0) {
                        local_118 = 1;
                        uVar17 = local_110;
                      }
                      else {
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        lVar16 = (*(code *)PTR___rust_alloc_00799000)();
                        if (lVar16 == 0) goto LAB_004d367c;
                        local_118 = lVar16;
                        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,lVar7);
                        uVar17 = local_110;
                      }
                      local_110 = uVar17;
                      if (puVar18 == puVar9) {
                        (*(code *)PTR_grow_one_00799328)();
                      }
                      plVar4[(longlong)puVar18 * 3] = lVar7;
                      plVar4[(longlong)puVar18 * 3 + 1] = local_118;
                      plVar4[(longlong)puVar18 * 3 + 2] = lVar7;
                      puVar18 = (undefined8 *)((longlong)local_188 + 2);
                      uVar19 = uVar19 + 1 + (ulonglong)(uVar19 + 1 < uVar17);
                      bVar14 = true;
                      lVar7 = local_130;
                      local_188 = puVar18;
                      goto LAB_004d3220;
                    }
                  }
                  goto LAB_004d367c;
                }
              }
              else if (7 < uVar13) goto LAB_004d348a;
            }
            else {
              plVar5 = *(longlong **)(lVar16 + 8);
              uVar13 = *(ulonglong *)(lVar16 + 0x10);
              if (uVar13 == 0xe) {
                if (*(longlong *)((longlong)plVar5 + 6) == 0x6e6f697461737265 &&
                    *plVar5 == 0x7265766e6f632d2d) {
                  uVar19 = uVar19 + 1 + (ulonglong)(uVar19 + 1 < uVar17);
                  goto LAB_004d3220;
                }
              }
              else {
                if (uVar13 < 0xf) goto LAB_004d3346;
                if (*(longlong *)((longlong)plVar5 + 7) == 0x3d6e6f6974617372 &&
                    *plVar5 == 0x7265766e6f632d2d) goto LAB_004d34de;
              }
LAB_004d348a:
              if (*plVar5 == 0x3d6c65646f6d2d2d) {
                local_168 = &local_e8;
                pcStack_160 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
                (*(code *)PTR_format_inner_00799048)(0x3d6c65646f6d2d2d,&local_168);
                if (local_188 == puVar9) {
                  (*(code *)PTR_grow_one_00799328)();
                }
                plVar4[(longlong)local_188 * 3 + 2] = local_48;
                plVar4[(longlong)local_188 * 3] = local_58;
                (plVar4 + (longlong)local_188 * 3)[1] = lStack_50;
                puVar18 = (undefined8 *)((longlong)local_188 + 1);
                uVar19 = uVar19 + 1;
                bVar14 = true;
                local_188 = puVar18;
                goto LAB_004d3220;
              }
            }
            (*(code *)PTR_clone_00798fd0)();
            if (local_188 == puVar9) {
              (*(code *)PTR_grow_one_00799328)();
            }
            plVar4[(longlong)local_188 * 3 + 2] = local_158._0_8_;
            plVar4[(longlong)local_188 * 3] = (longlong)local_168;
            (plVar4 + (longlong)local_188 * 3)[1] = (longlong)pcStack_160;
            puVar18 = (undefined8 *)((longlong)local_188 + 1);
            local_188 = puVar18;
LAB_004d34de:
            uVar19 = uVar19 + 1;
          }
          else {
            if (*(longlong *)(lVar16 + 0x10) == 0xb) {
              if (*(longlong *)((longlong)*(longlong **)(lVar16 + 8) + 3) != 0x6e616c703d65646f ||
                  **(longlong **)(lVar16 + 8) != 0x703d65646f6d2d2d) goto LAB_004d32e0;
              goto LAB_004d34de;
            }
            if ((((*(longlong *)(lVar16 + 0x10) != 6) ||
                 ((short)(*(int **)(lVar16 + 8))[1] != 0x6564 ||
                  **(int **)(lVar16 + 8) != 0x6f6d2d2d)) || (uVar13 = uVar19 + 1, uVar17 <= uVar13))
               || ((*(longlong *)(param_2 + 0x10 + uVar13 * 0x18) != 4 ||
                   (**(int **)(uVar13 * 0x18 + param_2 + 8) != 0x6e616c70)))) goto LAB_004d32e0;
            uVar19 = uVar19 + 2;
          }
LAB_004d3220:
        } while (uVar19 < uVar17);
        if (bVar14) {
LAB_004d3a4a:
          if (lVar7 != 0) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar18 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar18 == (undefined8 *)0x0) goto LAB_004d367c;
            *(undefined8 *)((longlong)puVar18 + 6) = 0x6e6f697461737265;
            *puVar18 = 0x7265766e6f632d2d;
            uVar20 = extraout_XMM0_Qa_03;
            if (local_188 == puVar9) {
              uVar20 = (*(code *)PTR_grow_one_00799328)();
            }
            lVar7 = local_120;
            plVar4[(longlong)local_188 * 3] = 0xe;
            plVar4[(longlong)local_188 * 3 + 1] = (longlong)puVar18;
            plVar4[(longlong)local_188 * 3 + 2] = 0xe;
            puVar18 = (undefined8 *)((longlong)local_188 + 1);
            if (local_120 == 0) {
              lVar16 = 1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar16 = (*(code *)PTR___rust_alloc_00799000)();
              if (lVar16 == 0) goto LAB_004d367c;
              uVar20 = extraout_XMM0_Qa_04;
            }
            (*(code *)PTR_memcpy_00799008)(uVar20,lVar7);
            if (puVar18 == puVar9) {
              (*(code *)PTR_grow_one_00799328)();
            }
            plVar4[(longlong)puVar18 * 3] = lVar7;
            plVar4[(longlong)puVar18 * 3 + 1] = lVar16;
            plVar4[(longlong)puVar18 * 3 + 2] = lVar7;
            puVar18 = (undefined8 *)((longlong)local_188 + 2);
            local_188 = puVar18;
          }
          if (puVar18 != (undefined8 *)0x0) {
            puVar15 = (undefined8 *)0x0;
            plVar5 = plVar4;
            do {
              plVar2 = (longlong *)plVar5[1];
              uVar17 = plVar5[2];
              if (uVar17 == 10) {
                if ((short)plVar2[1] != 0x7367 || *plVar2 != 0x6e69747465732d2d) goto LAB_004d3b9a;
                if (puVar18 <= (undefined8 *)((longlong)puVar15 + 1)) goto LAB_004d3eae;
                local_168 = (undefined8 *)plVar5[4];
                pcStack_160 = (code *)plVar5[5];
                local_158 = (undefined1  [16])0x0;
                local_148 = local_168;
                local_140 = pcStack_160;
                serde_json[dc3825464c436029]::de::from_trait::
                <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                          (local_d8,&local_168);
                if (local_d8[0] == -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::error::Error>(&local_d0);
                  goto LAB_004d3eae;
                }
                if (local_d8[0] != '\x05') {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(local_d8);
                  goto LAB_004d3eae;
                }
                local_f8 = local_c0;
                local_108 = local_d0;
                puStack_100 = puStack_c8;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar18 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar18 == (undefined8 *)0x0) {
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_004d41c0;
                }
                *puVar18 = 0x7469736f62726576;
                *(undefined1 *)(puVar18 + 1) = 0x79;
                local_180 = (code *)0x9;
                local_170 = 9;
                puStack_178 = puVar18;
                <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::entry::<alloc[12e961f32105355]::string::String>(&local_168,&local_108,&local_180);
                <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::
                <craggemini_core[66f3c71560d70857]::pool::ensure_high_verbosity_settings::_closure_0_>
                          (&local_168);
                pcStack_160 = local_108;
                local_158._8_8_ = local_f8;
                local_158._0_8_ = puStack_100;
                local_168 = (undefined8 *)CONCAT71(local_168._1_7_,5);
                serde_json[dc3825464c436029]::ser::to_vec::
                <serde_json[dc3825464c436029]::value::Value>(&local_180,&local_168);
                if (local_180 == (code *)0xffffffffffffffff) {
                  local_b8 = (code *)0xffffffffffffffff;
LAB_004d40fa:
                  puStack_b0 = puStack_178;
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::error::Error>>
                            (&local_b8);
                }
                else {
                  local_a8 = local_170;
                  local_b8 = local_180;
                  puStack_b0 = puStack_178;
                  if (local_180 == (code *)0xffffffffffffffff) goto LAB_004d40fa;
                  if (plVar5[3] != 0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(local_180,1);
                  }
                  plVar5[5] = local_a8;
                  plVar5[3] = (longlong)local_b8;
                  plVar5[4] = (longlong)puStack_b0;
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_168);
                goto LAB_004d3eae;
              }
              if ((10 < uVar17) &&
                 (*(longlong *)((longlong)plVar2 + 3) == 0x3d73676e69747465 &&
                  *plVar2 == 0x6e69747465732d2d)) {
                pcStack_160 = (code *)(uVar17 - 0xb);
                local_168 = (undefined8 *)((longlong)plVar2 + 0xb);
                local_158 = (undefined1  [16])0x0;
                local_148 = local_168;
                local_140 = pcStack_160;
                serde_json[dc3825464c436029]::de::from_trait::
                <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                          (local_d8,&local_168);
                if (local_d8[0] == -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::error::Error>(&local_d0);
                  goto LAB_004d3eae;
                }
                if (local_d8[0] != '\x05') {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(local_d8);
                  goto LAB_004d3eae;
                }
                local_68 = local_c0;
                local_78 = local_d0;
                puStack_70 = puStack_c8;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar11 == (undefined8 *)0x0) {
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_004d41c0;
                }
                *puVar11 = 0x7469736f62726576;
                *(undefined1 *)(puVar11 + 1) = 0x79;
                local_180 = (code *)&DAT_00000009;
                local_170 = 9;
                puStack_178 = puVar11;
                <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::entry::<alloc[12e961f32105355]::string::String>(&local_168,&local_78,&local_180);
                <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::
                <craggemini_core[66f3c71560d70857]::pool::ensure_high_verbosity_settings::_closure_0_>
                          (&local_168);
                pcStack_160 = local_78;
                local_158._8_8_ = local_68;
                local_158._0_8_ = puStack_70;
                local_168 = (undefined8 *)CONCAT71(local_168._1_7_,5);
                serde_json[dc3825464c436029]::ser::to_vec::
                <serde_json[dc3825464c436029]::value::Value>(&local_180,&local_168);
                if (local_180 == (code *)0xffffffffffffffff) {
                  local_98 = (code *)0xffffffffffffffff;
LAB_004d40c5:
                  puStack_90 = puStack_178;
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::error::Error>(&puStack_90);
                }
                else {
                  local_88 = local_170;
                  local_98 = local_180;
                  puStack_90 = puStack_178;
                  if (local_180 == (code *)0xffffffffffffffff) goto LAB_004d40c5;
                  local_f8 = local_170;
                  local_108 = local_180;
                  puStack_100 = puStack_178;
                  local_40 = &local_108;
                  local_38 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                             ::fmt;
                  uVar20 = (*(code *)PTR_format_inner_00799048)();
                  lVar7 = local_170;
                  puVar11 = puStack_178;
                  pcVar6 = local_180;
                  if (puVar18 <= puVar15) {
                    (*(code *)PTR_panic_bounds_check_00799520)
                              (uVar20,&
                                      PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078be08
                              );
                    goto LAB_004d41c0;
                  }
                  if (*plVar5 != 0) {
                    uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
                  }
                  *plVar5 = (longlong)pcVar6;
                  plVar5[1] = (longlong)puVar11;
                  plVar5[2] = lVar7;
                  if (local_108 != (code *)0x0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
                  }
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_168);
                goto LAB_004d3eae;
              }
LAB_004d3b9a:
              puVar15 = (undefined8 *)((longlong)puVar15 + 1);
              plVar5 = plVar5 + 3;
            } while (puVar18 != puVar15);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar15 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = 0x6e69747465732d2d;
            *(undefined2 *)(puVar15 + 1) = 0x7367;
            if (puVar18 == puVar9) {
              (*(code *)PTR_grow_one_00799328)();
            }
            plVar4[(longlong)puVar18 * 3] = 10;
            plVar4[(longlong)puVar18 * 3 + 1] = (longlong)puVar15;
            plVar4[(longlong)puVar18 * 3 + 2] = 10;
            puVar15 = (undefined8 *)((longlong)puVar18 + 1);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar20 = s___verbosity___high___00197336._8_8_;
            if (pcVar12 != (char *)0x0) {
              *(undefined8 *)pcVar12 = s___verbosity___high___00197336._0_8_;
              *(undefined8 *)(pcVar12 + 8) = uVar20;
              pcVar12[0x10] = 'g';
              pcVar12[0x11] = 'h';
              pcVar12[0x12] = '\"';
              pcVar12[0x13] = '}';
              if (puVar15 == puVar9) {
                (*(code *)PTR_grow_one_00799328)();
              }
              plVar4[(longlong)puVar15 * 3] = 0x14;
              plVar4[(longlong)puVar15 * 3 + 1] = (longlong)pcVar12;
              plVar4[(longlong)puVar15 * 3 + 2] = 0x14;
              local_188 = (undefined8 *)((longlong)puVar18 + 2);
LAB_004d3eae:
              local_f0[2] = local_188;
              *local_f0 = puVar9;
              local_f0[1] = plVar4;
              return local_f0;
            }
          }
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar8 != (undefined4 *)0x0) {
            *(undefined4 *)((longlong)puVar8 + 3) = 0x6c65646f;
            *puVar8 = 0x6f6d2d2d;
            if (local_188 == puVar9) {
              (*(code *)PTR_grow_one_00799328)();
            }
            lVar7 = local_e0;
            plVar4[(longlong)local_188 * 3] = 7;
            plVar4[(longlong)local_188 * 3 + 1] = (longlong)puVar8;
            plVar4[(longlong)local_188 * 3 + 2] = 7;
            puVar18 = (undefined8 *)((longlong)local_188 + 1);
            if (-1 < local_e0) {
              if (local_e0 == 0) {
                lVar16 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar16 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar16 == 0) goto LAB_004d367c;
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_02,lVar7);
              }
              if (puVar18 == puVar9) {
                (*(code *)PTR_grow_one_00799328)();
              }
              plVar4[(longlong)puVar18 * 3] = lVar7;
              plVar4[(longlong)puVar18 * 3 + 1] = lVar16;
              plVar4[(longlong)puVar18 * 3 + 2] = lVar7;
              puVar18 = (undefined8 *)((longlong)local_188 + 2);
              lVar7 = local_130;
              local_188 = puVar18;
              goto LAB_004d3a4a;
            }
          }
        }
LAB_004d367c:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004d41c0;
      }
    }
    uVar20 = auVar23._8_8_;
    local_130 = auVar23._0_8_;
    (*(code *)PTR_handle_error_00798ff0)();
    auVar23._8_8_ = uVar20;
    auVar23._0_8_ = local_130;
  }
  local_120 = auVar23._8_8_;
  local_130 = auVar23._0_8_;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar6 = (code *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar6 == (code *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar20 = s_skip_permissions_00196419._8_8_;
    if (pcVar12 != (char *)0x0) {
      *(ulonglong *)(pcVar12 + 0xe) =
           CONCAT62(s_skip_permissions_00196419._2_6_,s_skip_permissions_00196419._0_2_);
      *(undefined8 *)(pcVar12 + 0x16) = uVar20;
      uVar20 = CONCAT26(s_skip_permissions_00196419._0_2_,s___dangerously__0019640b._8_6_);
      *(undefined8 *)pcVar12 = s___dangerously__0019640b._0_8_;
      *(undefined8 *)(pcVar12 + 8) = uVar20;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar8 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004d41c0;
      }
      *(undefined4 *)((longlong)puVar8 + 3) = 0x6c65646f;
      *puVar8 = 0x6f6d2d2d;
      if (param_5 < 0) {
LAB_004d3661:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004d41c0;
      }
      if (param_5 == 0) {
        local_128 = 1;
      }
      else {
        local_f0 = param_1;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar7 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar7 == 0) goto LAB_004d3661;
        local_128 = lVar7;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,param_5);
        param_1 = local_f0;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004d41c0;
      }
      *puVar9 = 0x6e69747465732d2d;
      *(undefined2 *)(puVar9 + 1) = 0x7367;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar20 = s___verbosity___high___00197336._8_8_;
      if (pcVar10 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004d41c0;
      }
      *(undefined8 *)pcVar10 = s___verbosity___high___00197336._0_8_;
      *(undefined8 *)(pcVar10 + 8) = uVar20;
      pcVar10[0x10] = 'g';
      pcVar10[0x11] = 'h';
      pcVar10[0x12] = '\"';
      pcVar10[0x13] = '}';
      *(undefined8 *)pcVar6 = 0x1e;
      *(char **)(pcVar6 + 8) = pcVar12;
      *(undefined8 *)(pcVar6 + 0x10) = 0x1e;
      *(undefined8 *)(pcVar6 + 0x18) = 7;
      *(undefined4 **)(pcVar6 + 0x20) = puVar8;
      *(undefined8 *)(pcVar6 + 0x28) = 7;
      *(longlong *)(pcVar6 + 0x30) = param_5;
      *(longlong *)(pcVar6 + 0x38) = local_128;
      *(longlong *)(pcVar6 + 0x40) = param_5;
      *(undefined8 *)(pcVar6 + 0x48) = 10;
      *(undefined8 **)(pcVar6 + 0x50) = puVar9;
      *(undefined8 *)(pcVar6 + 0x58) = 10;
      *(undefined8 *)(pcVar6 + 0x60) = 0x14;
      *(char **)(pcVar6 + 0x68) = pcVar10;
      *(undefined8 *)(pcVar6 + 0x70) = 0x14;
      local_168 = (undefined8 *)&DAT_00000005;
      local_158._0_8_ = 5;
      auVar23 = local_158;
      local_158._0_8_ = (undefined1 *)0x5;
      pcStack_160 = pcVar6;
      if (local_130 == 0) goto LAB_004d39ad;
      local_158 = auVar23;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar9 + 6) = 0x6e6f697461737265;
        *puVar9 = 0x7265766e6f632d2d;
        uVar20 = (*(code *)PTR_grow_one_00799328)();
        lVar7 = local_120;
        *(undefined8 *)(pcStack_160 + 0x78) = 0xe;
        *(undefined8 **)(pcStack_160 + 0x80) = puVar9;
        *(undefined8 *)(pcStack_160 + 0x88) = 0xe;
        local_158._0_8_ = 6;
        if (local_120 == 0) {
          lVar16 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar16 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar16 == 0) goto LAB_004d414d;
          uVar20 = extraout_XMM0_Qa_01;
        }
        (*(code *)PTR_memcpy_00799008)(uVar20,lVar7);
        uVar20 = local_158._0_8_;
        if ((undefined8 *)local_158._0_8_ == local_168) {
          (*(code *)PTR_grow_one_00799328)();
        }
        *(longlong *)(pcStack_160 + uVar20 * 0x18) = lVar7;
        *(longlong *)(pcStack_160 + (uVar20 * 3 + 1) * 8) = lVar16;
        *(longlong *)(pcStack_160 + (uVar20 * 3 + 2) * 8) = lVar7;
        local_158._0_8_ = uVar20 + 1;
LAB_004d39ad:
        param_1[2] = local_158._0_8_;
        *param_1 = local_168;
        param_1[1] = pcStack_160;
        return param_1;
      }
LAB_004d414d:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004d41c0;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004d41c0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


