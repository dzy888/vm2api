// 001dcd60 new_debug

/* WARNING: Switch with 1 destination removed at 0x001dd02a */
/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping>::new_debug */

void __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping>::new_debug
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  bool bVar15;
  undefined8 uVar16;
  char *extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  char *extraout_XMM0_Qa_02;
  char *extraout_XMM0_Qa_03;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int local_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  undefined8 local_620;
  longlong local_430;
  char *local_428;
  char *local_420;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  char *local_398;
  char *local_390;
  char *local_388;
  char *pcStack_380;
  char *local_378;
  longlong lStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  ushort uStack_360;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  char *local_218;
  char *pcStack_210;
  char *local_208;
  longlong lStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  char *local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  longlong local_168;
  longlong lStack_160;
  char *local_158;
  char *pcStack_150;
  char *local_148;
  char *local_140;
  char *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  longlong local_78;
  char *local_70;
  longlong local_68;
  char *local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  longlong *local_40;
  char *local_38;
  
  lVar8 = param_4[1];
  pcVar13 = (char *)param_4[2];
  local_1a8 = param_2;
  uVar16 = std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap(&local_630,lVar8,pcVar13);
  if (local_630 != 1) {
    *param_1 = 0xffffffffffffffff;
    if (*param_4 == 0) {
      return;
    }
    (*(code *)PTR_free_0021a8b8)(uVar16,1);
    return;
  }
  local_188 = 0;
  uStack_180 = 8;
  local_178 = (undefined1  [16])0x0;
  local_168 = 8;
  lStack_160 = 0;
  local_88 = local_628;
  local_1a0 = param_3;
  local_c0 = param_1;
  <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse
            (&local_398,local_628,local_620);
  puVar2 = PTR_read_bytes_at_until_0021a710;
  local_80 = local_398;
  if (local_398 != (char *)0xffffffffffffffff) {
    local_a0 = local_390;
    local_198 = local_388;
    local_a8 = pcStack_380;
    local_b0 = local_378;
    local_b8 = CONCAT44(uStack_364,local_368);
    local_d8 = CONCAT44(uStack_35c,CONCAT13(uStack_35d,CONCAT12(uStack_35e,uStack_360)));
    local_d0 = CONCAT44(uStack_354,local_358);
    local_e0 = CONCAT44(uStack_34c,uStack_350);
    local_c8 = local_348;
    local_3b8 = uStack_340;
    uStack_3b0 = uStack_338;
    local_3a8 = uStack_330;
    uStack_3a0 = uStack_328;
    local_60 = (char *)0xffffffffffffffff;
    uVar16 = local_620;
    lVar10 = lStack_370;
    if ((local_b8 != 0) && (local_d8 != 0)) {
      local_78 = lStack_370;
      local_50 = local_620;
      lVar14 = local_b8 * 0x40;
      lVar12 = 0;
      local_40 = param_4;
      do {
        lVar11 = *(uint *)(local_78 + lVar12) + local_e0;
        if (!CARRY8((ulonglong)*(uint *)(local_78 + lVar12),local_e0)) {
          pcVar7 = (char *)(*(code *)puVar2)(local_c8,lVar11,0);
          param_4 = local_40;
          uVar16 = local_50;
          lVar10 = local_78;
          if ((lVar11 == 0x11 && pcVar7 != (char *)0x0) &&
             (auVar19[0] = -(*pcVar7 == s__gnu_debugaltlin_00113920[0]),
             auVar19[1] = -(pcVar7[1] == s__gnu_debugaltlin_00113920[1]),
             auVar19[2] = -(pcVar7[2] == s__gnu_debugaltlin_00113920[2]),
             auVar19[3] = -(pcVar7[3] == s__gnu_debugaltlin_00113920[3]),
             auVar19[4] = -(pcVar7[4] == s__gnu_debugaltlin_00113920[4]),
             auVar19[5] = -(pcVar7[5] == s__gnu_debugaltlin_00113920[5]),
             auVar19[6] = -(pcVar7[6] == s__gnu_debugaltlin_00113920[6]),
             auVar19[7] = -(pcVar7[7] == s__gnu_debugaltlin_00113920[7]),
             auVar19[8] = -(pcVar7[8] == s__gnu_debugaltlin_00113920[8]),
             auVar19[9] = -(pcVar7[9] == s__gnu_debugaltlin_00113920[9]),
             auVar19[10] = -(pcVar7[10] == s__gnu_debugaltlin_00113920[10]),
             auVar19[0xb] = -(pcVar7[0xb] == s__gnu_debugaltlin_00113920[0xb]),
             auVar19[0xc] = -(pcVar7[0xc] == s__gnu_debugaltlin_00113920[0xc]),
             auVar19[0xd] = -(pcVar7[0xd] == s__gnu_debugaltlin_00113920[0xd]),
             auVar19[0xe] = -(pcVar7[0xe] == s__gnu_debugaltlin_00113920[0xe]),
             auVar19[0xf] = -(pcVar7[0xf] == s__gnu_debugaltlin_00113920[0xf]),
             auVar18[0] = -(pcVar7[0x10] == DAT_00113b10), auVar18[1] = -(UNK_00113b11 == '\0'),
             auVar18[2] = -(UNK_00113b12 == '\0'), auVar18[3] = -(UNK_00113b13 == '\0'),
             auVar18[4] = -(UNK_00113b14 == '\0'), auVar18[5] = -(UNK_00113b15 == '\0'),
             auVar18[6] = -(UNK_00113b16 == '\0'), auVar18[7] = -(UNK_00113b17 == '\0'),
             auVar18[8] = -(UNK_00113b18 == '\0'), auVar18[9] = -(UNK_00113b19 == '\0'),
             auVar18[10] = -(UNK_00113b1a == '\0'), auVar18[0xb] = -(UNK_00113b1b == '\0'),
             auVar18[0xc] = -(UNK_00113b1c == '\0'), auVar18[0xd] = -(UNK_00113b1d == '\0'),
             auVar18[0xe] = -(UNK_00113b1e == '\0'), auVar18[0xf] = -(UNK_00113b1f == '\0'),
             auVar18 = auVar18 & auVar19,
             (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff)) {
            if ((*(int *)(local_78 + 4 + lVar12) == 8) ||
               (local_70 = *(char **)(local_78 + 0x20 + lVar12), local_70 == (char *)0x0))
            goto LAB_001dd610;
            pcVar7 = *(char **)(local_78 + 0x18 + lVar12);
            if ((local_b0 < pcVar7) || (local_38 = pcVar7, local_b0 + -(longlong)pcVar7 < local_70))
            goto LAB_001dd610;
            local_38 = pcVar7 + (longlong)local_a8;
            pcVar7 = (char *)0x0;
            goto LAB_001dcfea;
          }
        }
        lVar12 = lVar12 + 0x40;
      } while (lVar14 != lVar12);
      uVar16 = local_50;
      lVar10 = local_78;
      param_4 = local_40;
    }
    goto LAB_001dd610;
  }
  goto LAB_001dd7ed;
  while (pcVar7 = pcVar7 + 1, local_70 != pcVar7) {
LAB_001dcfea:
    if (local_38[(longlong)pcVar7] == '\0') {
      local_98 = local_70 + ~(ulonglong)pcVar7;
      local_90 = local_38 + (longlong)pcVar7 + 1;
      local_58 = pcVar7;
      if ((pcVar7 == (char *)0x0) || (*local_38 != '/')) {
        if (pcVar13 < (char *)0x180) {
          uVar17 = (*(code *)PTR_memcpy_00219c60)(local_90,pcVar13);
          *(char *)((longlong)&local_398 + (longlong)pcVar13) = '\0';
          pcVar13 = pcVar13 + 1;
          (*(code *)PTR_from_bytes_with_nul_0021a6e8)(uVar17,pcVar13);
          if ((int)local_158 == 1) {
            local_428 = &DAT_002175c0;
            local_430 = -1;
          }
          else {
            std[6c98fd8553dbae28]::sys::fs::unix::canonicalize(&local_430,pcStack_150);
          }
        }
        else {
          std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
          <std[6c98fd8553dbae28]::path::PathBuf>
                    (&local_430,lVar8,pcVar13,
                     <std[6c98fd8553dbae28]::sys::fs::unix::canonicalize_as_core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>
                     ::call);
        }
        local_68 = local_430;
        local_48 = local_428;
        if (local_430 == -1) {
          if ((1 < ((uint)local_428 & 3) - 2) && (((ulonglong)local_428 & 3) != 0)) {
            local_390 = local_428 + -1;
            local_398 = (char *)CONCAT71(local_398._1_7_,3);
            (*(code *)PTR_drop_00219c58)();
          }
          break;
        }
        if (local_420 == (char *)0x0) {
          uStack_35e = false;
        }
        else {
          uStack_35e = *local_428 == '/';
        }
        local_390 = local_420;
        local_388 = (char *)CONCAT71(local_388._1_7_,0xff);
        uStack_360 = 0x201;
        pcVar9 = local_428;
        local_398 = local_428;
        pcVar7 = (char *)(*(code *)PTR_next_back_0021a718)();
        if ((byte)((char)local_158 - 7U) < 0xf8) {
          lVar8 = (*(code *)PTR_as_path_0021a720)();
          pcVar13 = (char *)0x0;
          pcVar7 = extraout_XMM0_Qa;
          if (lVar8 == 0) goto LAB_001dd296;
          if (pcVar9 == (char *)0x0) {
            pcStack_150 = (char *)0x1;
            local_148 = (char *)0x0;
            bVar15 = false;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
            pcVar13 = (char *)(*(code *)PTR___rust_alloc_00219c88)();
            if (pcVar13 == (char *)0x0) {
              (*(code *)PTR_handle_error_00219c78)();
              goto LAB_001dd94e;
            }
            local_190 = pcVar13;
            pcVar7 = (char *)(*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Qa_00,pcVar9);
            pcStack_150 = local_190;
            bVar15 = (local_190 + -1)[(longlong)pcVar9] != '/';
            local_148 = pcVar9;
          }
          local_158 = local_148;
          if ((local_58 == (char *)0x0) || (*local_38 != '/')) {
            if (bVar15) {
              pcVar7 = (char *)<alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                               do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                         (&local_158,pcVar9,1,1,1);
              pcStack_150[(longlong)local_148] = '/';
              local_148 = local_148 + 1;
              pcVar9 = local_158;
              pcVar13 = local_148;
            }
            else {
              pcVar13 = pcVar9;
            }
            if (pcVar9 + -(longlong)pcVar13 < local_58) goto LAB_001dd8fc;
            pcVar9 = local_58;
            if (local_58 != (char *)0x0) goto LAB_001dd3d6;
          }
          else {
            local_148 = (char *)0x0;
            pcVar13 = (char *)0x0;
            if (pcVar9 < local_58) {
LAB_001dd8fc:
              pcVar7 = (char *)<alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                               do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                         (&local_158,pcVar13,local_58,1,1);
              pcVar13 = local_148;
            }
LAB_001dd3d6:
            pcVar9 = local_58;
            pcVar7 = (char *)(*(code *)PTR_memcpy_00219c60)(pcVar7,local_58);
          }
          pcVar13 = pcVar13 + (longlong)pcVar9;
          local_148 = pcVar13;
          uVar17 = (*(code *)PTR_metadata_0021a728)(pcVar7,pcVar13);
          if ((int)local_398 == 2) {
            if ((1 < ((uint)local_390 & 3) - 2) && (((ulonglong)local_390 & 3) != 0)) {
              local_390 = local_390 + -1;
              local_398 = (char *)CONCAT71(local_398._1_7_,3);
              uVar17 = (*(code *)PTR_drop_00219c58)();
            }
LAB_001dd491:
            if (local_158 != (char *)0x0) {
              uVar17 = (*(code *)PTR___rust_dealloc_00219c40)(uVar17,1);
            }
            if (local_68 != 0) {
              (*(code *)PTR___rust_dealloc_00219c40)(uVar17,1);
            }
            goto LAB_001dd4c3;
          }
          if ((uStack_360 & 0xf000) != 0x8000) goto LAB_001dd491;
          pcVar7 = local_158;
          local_218 = local_158;
          pcStack_210 = pcStack_150;
          local_208 = local_148;
        }
        else {
LAB_001dd296:
          local_218 = (char *)0xffffffffffffffff;
        }
        if (local_68 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(pcVar7,1);
        }
LAB_001dd4dd:
        local_38 = local_218;
        if (local_218 == (char *)0xffffffffffffffff) break;
        pcVar7 = local_208;
        pcVar9 = pcStack_210;
      }
      else {
        (*(code *)PTR_metadata_0021a728)(local_90,pcVar7);
        if ((int)local_398 == 2) {
          if ((1 < ((uint)local_390 & 3) - 2) && (((ulonglong)local_390 & 3) != 0)) {
            local_390 = local_390 + -1;
            local_398 = (char *)CONCAT71(local_398._1_7_,3);
            (*(code *)PTR_drop_00219c58)();
          }
LAB_001dd4c3:
          std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::locate_build_id
                    (&local_218,local_90,local_98);
          goto LAB_001dd4dd;
        }
        if ((uStack_360 & 0xf000) != 0x8000) goto LAB_001dd4c3;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        pcVar7 = local_58;
        pcVar9 = (char *)(*(code *)PTR___rust_alloc_00219c88)();
        if (pcVar9 == (char *)0x0) {
          (*(code *)PTR_handle_error_00219c78)();
          goto LAB_001dd94e;
        }
        (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Qa_01,pcVar7);
        local_38 = pcVar7;
        pcVar13 = pcVar9;
      }
      local_48 = pcVar9;
      pcVar7 = (char *)std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap
                                 (&local_158,pcVar9,pcVar7);
      pcVar4 = local_148;
      pcVar9 = pcStack_150;
      lVar8 = lStack_160;
      if ((int)local_158 == 1) {
        if (lStack_160 == local_178._8_8_) {
          (*(code *)PTR_grow_one_0021a740)();
        }
        lVar10 = lVar8 * 0x10;
        *(char **)(local_168 + lVar10) = pcVar9;
        *(char **)(local_168 + 8 + lVar10) = pcVar4;
        lStack_160 = lVar8 + 1;
        if (lStack_160 == 0) {
          (*(code *)PTR_unwrap_failed_00219e58)();
LAB_001dd94e:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        pcVar7 = (char *)<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse
                                   (&local_398,pcVar9,pcVar4);
        lVar10 = local_78;
        pcVar3 = local_390;
        pcVar9 = local_398;
        local_60 = (char *)0xffffffffffffffff;
        pcVar13 = pcVar4;
        if (local_398 != (char *)0xffffffffffffffff) {
          auVar19 = <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::build_id
                              (&local_398);
          pcVar7 = extraout_XMM0_Qa_02;
          pcVar13 = pcVar3;
          if ((auVar19._0_8_ != 0) && (local_70 + ~auVar19._8_8_ == local_58)) {
            iVar6 = (*(code *)PTR_bcmp_00219d38)(extraout_XMM0_Qa_02,local_98);
            pcVar7 = extraout_XMM0_Qa_03;
            if (iVar6 == 0) {
              local_1f8 = CONCAT44(uStack_364,local_368);
              uStack_1f0 = CONCAT44(uStack_35c,CONCAT13(uStack_35d,CONCAT12(uStack_35e,uStack_360)))
              ;
              local_1e8 = CONCAT44(uStack_354,local_358);
              uStack_1e0 = CONCAT44(uStack_34c,uStack_350);
              pcVar7 = local_388;
              local_218 = local_388;
              pcStack_210 = pcStack_380;
              local_208 = local_378;
              lStack_200 = lStack_370;
              local_1d8 = local_348;
              uStack_1d0 = uStack_340;
              local_1c8 = uStack_338;
              uStack_1c0 = uStack_330;
              local_1b8 = uStack_328;
              local_60 = pcVar9;
              goto joined_r0x001dd84c;
            }
          }
          if (pcVar9 != (char *)0x0) {
            pcVar7 = (char *)(*(code *)PTR___rust_dealloc_00219c40)(pcVar7,8);
          }
        }
      }
      else {
        local_60 = (char *)0xffffffffffffffff;
      }
joined_r0x001dd84c:
      if (local_38 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_00219c40)(pcVar7,1);
      }
      break;
    }
  }
LAB_001dd610:
  load_dwarf_package(&local_430,local_1a8,local_1a0,&local_188);
  local_158 = local_80;
  pcStack_150 = local_a0;
  local_148 = local_198;
  local_140 = local_a8;
  local_138 = local_b0;
  local_128 = local_b8;
  local_120 = local_d8;
  local_118 = local_d0;
  local_110 = local_e0;
  local_108 = local_c8;
  local_100 = local_3b8;
  uStack_f8 = uStack_3b0;
  local_f0 = local_3a8;
  uStack_e8 = uStack_3a0;
  local_398 = local_60;
  local_388 = local_218;
  pcStack_380 = pcStack_210;
  local_378 = local_208;
  lStack_370 = lStack_200;
  local_368 = (undefined4)local_1f8;
  uStack_364 = local_1f8._4_4_;
  uStack_360 = (ushort)uStack_1f0;
  uStack_35e = (undefined1)((ulonglong)uStack_1f0 >> 0x10);
  uStack_35d = (undefined1)((ulonglong)uStack_1f0 >> 0x18);
  uStack_35c = uStack_1f0._4_4_;
  local_358 = (undefined4)local_1e8;
  uStack_354 = local_1e8._4_4_;
  uStack_350 = (undefined4)uStack_1e0;
  uStack_34c = uStack_1e0._4_4_;
  local_348 = local_1d8;
  uStack_340 = uStack_1d0;
  uStack_338 = local_1c8;
  uStack_330 = uStack_1c0;
  uStack_328 = local_1b8;
  local_390 = pcVar13;
  local_130 = lVar10;
  uVar17 = <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Context>::new
                     (&local_630,&local_188,&local_158,&local_398,&local_430);
  puVar5 = local_c0;
  if (CONCAT44(uStack_62c,local_630) != -1) {
    (*(code *)PTR_memcpy_00219c60)(uVar17,0x200);
    puVar5[0x46] = local_168;
    puVar5[0x47] = lStack_160;
    puVar5[0x44] = local_178._0_8_;
    puVar5[0x45] = local_178._8_8_;
    puVar5[0x42] = local_188;
    puVar5[0x43] = uStack_180;
    puVar5[0x40] = local_88;
    puVar5[0x41] = uVar16;
    lVar8 = *param_4;
    uVar16 = local_188;
    goto joined_r0x001dd7e9;
  }
LAB_001dd7ed:
  *local_c0 = 0xffffffffffffffff;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>(&local_188);
  uVar16 = (*(code *)PTR_munmap_0021a738)();
  lVar8 = *param_4;
joined_r0x001dd7e9:
  if (lVar8 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
  }
  return;
}


