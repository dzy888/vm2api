// 0008f8e0 new_debug

/* WARNING: Switch with 1 destination removed at 0x0008fbaa */
/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping>::new_debug */

void __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping>::new_debug
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  Elf64_Ehdr *pEVar3;
  Elf64_Ehdr *pEVar4;
  undefined8 *puVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  Elf64_Ehdr *pEVar9;
  Elf64_Ehdr *pEVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined8 uVar16;
  Elf64_Ehdr *extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  Elf64_Ehdr *pEVar17;
  Elf64_Ehdr *extraout_XMM0_Qa_02;
  Elf64_Ehdr *extraout_XMM0_Qa_03;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int local_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  undefined8 local_620;
  longlong local_430;
  Elf64_Ehdr *local_428;
  Elf64_Ehdr *local_420;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  Elf64_Ehdr *local_398;
  Elf64_Ehdr *local_390;
  Elf64_Ehdr *local_388;
  Elf64_Ehdr *pEStack_380;
  Elf64_Ehdr *local_378;
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
  Elf64_Ehdr *local_218;
  Elf64_Ehdr *pEStack_210;
  Elf64_Ehdr *local_208;
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
  Elf64_Ehdr *local_198;
  Elf64_Ehdr *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  longlong local_168;
  longlong lStack_160;
  Elf64_Ehdr *local_158;
  Elf64_Ehdr *pEStack_150;
  Elf64_Ehdr *local_148;
  Elf64_Ehdr *local_140;
  Elf64_Ehdr *local_138;
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
  Elf64_Ehdr *local_b0;
  Elf64_Ehdr *local_a8;
  Elf64_Ehdr *local_a0;
  undefined1 *local_98;
  char *local_90;
  undefined8 local_88;
  Elf64_Ehdr *local_80;
  longlong local_78;
  undefined1 *local_70;
  longlong local_68;
  Elf64_Ehdr *local_60;
  Elf64_Ehdr *local_58;
  undefined8 local_50;
  Elf64_Ehdr *local_48;
  longlong *local_40;
  Elf64_Ehdr *local_38;
  
  lVar8 = param_4[1];
  pEVar9 = (Elf64_Ehdr *)param_4[2];
  local_1a8 = param_2;
  uVar16 = std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap(&local_630,lVar8,pEVar9);
  if (local_630 != 1) {
    *param_1 = 0xffffffffffffffff;
    if (*param_4 == 0) {
      return;
    }
    (*(code *)PTR_free_000c4290)(uVar16,1);
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
  puVar2 = PTR_read_bytes_at_until_000c40c8;
  local_80 = local_398;
  if (local_398 != (Elf64_Ehdr *)0xffffffffffffffff) {
    local_a0 = local_390;
    local_198 = local_388;
    local_a8 = pEStack_380;
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
    local_60 = (Elf64_Ehdr *)0xffffffffffffffff;
    uVar16 = local_620;
    lVar11 = lStack_370;
    if ((local_b8 != 0) && (local_d8 != 0)) {
      local_78 = lStack_370;
      local_50 = local_620;
      lVar14 = local_b8 * 0x40;
      lVar13 = 0;
      local_40 = param_4;
      do {
        lVar12 = *(uint *)(local_78 + lVar13) + local_e0;
        if (!CARRY8((ulonglong)*(uint *)(local_78 + lVar13),local_e0)) {
          pcVar7 = (char *)(*(code *)puVar2)(local_c8,lVar12,0);
          param_4 = local_40;
          uVar16 = local_50;
          lVar11 = local_78;
          if ((lVar12 == 0x11 && pcVar7 != (char *)0x0) &&
             (auVar20[0] = -(*pcVar7 == s__gnu_debugaltlin_00008be0[0]),
             auVar20[1] = -(pcVar7[1] == s__gnu_debugaltlin_00008be0[1]),
             auVar20[2] = -(pcVar7[2] == s__gnu_debugaltlin_00008be0[2]),
             auVar20[3] = -(pcVar7[3] == s__gnu_debugaltlin_00008be0[3]),
             auVar20[4] = -(pcVar7[4] == s__gnu_debugaltlin_00008be0[4]),
             auVar20[5] = -(pcVar7[5] == s__gnu_debugaltlin_00008be0[5]),
             auVar20[6] = -(pcVar7[6] == s__gnu_debugaltlin_00008be0[6]),
             auVar20[7] = -(pcVar7[7] == s__gnu_debugaltlin_00008be0[7]),
             auVar20[8] = -(pcVar7[8] == s__gnu_debugaltlin_00008be0[8]),
             auVar20[9] = -(pcVar7[9] == s__gnu_debugaltlin_00008be0[9]),
             auVar20[10] = -(pcVar7[10] == s__gnu_debugaltlin_00008be0[10]),
             auVar20[0xb] = -(pcVar7[0xb] == s__gnu_debugaltlin_00008be0[0xb]),
             auVar20[0xc] = -(pcVar7[0xc] == s__gnu_debugaltlin_00008be0[0xc]),
             auVar20[0xd] = -(pcVar7[0xd] == s__gnu_debugaltlin_00008be0[0xd]),
             auVar20[0xe] = -(pcVar7[0xe] == s__gnu_debugaltlin_00008be0[0xe]),
             auVar20[0xf] = -(pcVar7[0xf] == s__gnu_debugaltlin_00008be0[0xf]),
             auVar19[0] = -(pcVar7[0x10] == DAT_00008d60), auVar19[1] = -(UNK_00008d61 == '\0'),
             auVar19[2] = -(UNK_00008d62 == '\0'), auVar19[3] = -(UNK_00008d63 == '\0'),
             auVar19[4] = -(UNK_00008d64 == '\0'), auVar19[5] = -(UNK_00008d65 == '\0'),
             auVar19[6] = -(UNK_00008d66 == '\0'), auVar19[7] = -(UNK_00008d67 == '\0'),
             auVar19[8] = -(UNK_00008d68 == '\0'), auVar19[9] = -(UNK_00008d69 == '\0'),
             auVar19[10] = -(UNK_00008d6a == '\0'), auVar19[0xb] = -(UNK_00008d6b == '\0'),
             auVar19[0xc] = -(UNK_00008d6c == '\0'), auVar19[0xd] = -(UNK_00008d6d == '\0'),
             auVar19[0xe] = -(UNK_00008d6e == '\0'), auVar19[0xf] = -(UNK_00008d6f == '\0'),
             auVar19 = auVar19 & auVar20,
             (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff)) {
            if ((*(int *)(local_78 + 4 + lVar13) == 8) ||
               (local_70 = *(undefined1 **)(local_78 + 0x20 + lVar13), local_70 == (undefined1 *)0x0
               )) goto LAB_00090190;
            pEVar17 = *(Elf64_Ehdr **)(local_78 + 0x18 + lVar13);
            if ((local_b0 < pEVar17) ||
               (local_38 = pEVar17,
               (undefined1 *)((longlong)local_b0 - (longlong)pEVar17) < local_70))
            goto LAB_00090190;
            local_38 = (Elf64_Ehdr *)
                       (local_a8->e_ident_magic_str + (longlong)(pEVar17->e_ident_magic_str + -2));
            pEVar17 = (Elf64_Ehdr *)0x0;
            goto LAB_0008fb6a;
          }
        }
        lVar13 = lVar13 + 0x40;
      } while (lVar14 != lVar13);
      uVar16 = local_50;
      lVar11 = local_78;
      param_4 = local_40;
    }
    goto LAB_00090190;
  }
  goto LAB_0009036d;
  while (pEVar17 = (Elf64_Ehdr *)pEVar17->e_ident_magic_str, (Elf64_Ehdr *)local_70 != pEVar17) {
LAB_0008fb6a:
    if (pEVar17->e_ident_magic_str[(longlong)(local_38->e_ident_magic_str + -2)] == '\0') {
      local_98 = local_70 + ~(ulonglong)pEVar17;
      local_90 = pEVar17->e_ident_magic_str + (longlong)(local_38->e_ident_magic_str + -2) + 1;
      local_58 = pEVar17;
      if ((pEVar17 == (Elf64_Ehdr *)0x0) || (local_38->e_ident_magic_num != 0x2f)) {
        if ((Elf64_Ehdr *)((longlong)&Elf64_Phdr_ARRAY_00000040[5].p_filesz + 7) < pEVar9) {
          std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
          <std[6c98fd8553dbae28]::path::PathBuf>
                    (&local_430,lVar8,pEVar9,
                     <std[6c98fd8553dbae28]::sys::fs::unix::canonicalize_as_core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>
                     ::call);
        }
        else {
          uVar18 = (*(code *)PTR_memcpy_000c3aa8)(local_90,pEVar9);
          *(char *)((longlong)&local_398 + (longlong)pEVar9) = '\0';
          pEVar9 = (Elf64_Ehdr *)pEVar9->e_ident_magic_str;
          (*(code *)PTR_from_bytes_with_nul_000c40a8)(uVar18,pEVar9);
          if ((int)local_158 == 1) {
            local_428 = (Elf64_Ehdr *)&DAT_000c1618;
            local_430 = -1;
          }
          else {
            std[6c98fd8553dbae28]::sys::fs::unix::canonicalize(&local_430,pEStack_150);
          }
        }
        local_68 = local_430;
        local_48 = local_428;
        if (local_430 == -1) {
          if ((1 < ((uint)local_428 & 3) - 2) && (((ulonglong)local_428 & 3) != 0)) {
            local_390 = (Elf64_Ehdr *)((longlong)&local_428[-1].e_shstrndx + 1);
            local_398 = (Elf64_Ehdr *)CONCAT71(local_398._1_7_,3);
            (*(code *)PTR_drop_000c3ae0)();
          }
          break;
        }
        if (local_420 == (Elf64_Ehdr *)0x0) {
          uStack_35e = false;
        }
        else {
          uStack_35e = local_428->e_ident_magic_num == 0x2f;
        }
        local_390 = local_420;
        local_388 = (Elf64_Ehdr *)CONCAT71(local_388._1_7_,0xff);
        uStack_360 = 0x201;
        pEVar10 = local_428;
        local_398 = local_428;
        pEVar17 = (Elf64_Ehdr *)(*(code *)PTR_next_back_000c40d0)();
        if ((byte)((char)local_158 - 7U) < 0xf8) {
          lVar8 = (*(code *)PTR_as_path_000c40d8)();
          pEVar9 = (Elf64_Ehdr *)0x0;
          pEVar17 = extraout_XMM0_Qa;
          if (lVar8 == 0) goto LAB_0008fe16;
          if (pEVar10 == (Elf64_Ehdr *)0x0) {
            pEStack_150 = (Elf64_Ehdr *)Elf64_Ehdr_00000000.e_ident_magic_str;
            local_148 = (Elf64_Ehdr *)0x0;
            bVar15 = false;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
            pEVar9 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_000c3a90)();
            if (pEVar9 == (Elf64_Ehdr *)0x0) {
              (*(code *)PTR_handle_error_000c3a98)();
              goto LAB_000904ce;
            }
            local_190 = pEVar9;
            pEVar17 = (Elf64_Ehdr *)(*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Qa_00,pEVar10);
            pEStack_150 = local_190;
            bVar15 = ((undefined1 *)((longlong)&local_190[-1].e_shstrndx + 1))[(longlong)pEVar10] !=
                     '/';
            local_148 = pEVar10;
          }
          local_158 = local_148;
          if ((local_58 == (Elf64_Ehdr *)0x0) || (local_38->e_ident_magic_num != 0x2f)) {
            if (bVar15) {
              pEVar17 = (Elf64_Ehdr *)
                        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                        do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                  (&local_158,pEVar10,1,1,1);
              local_148->e_ident_magic_str[(longlong)(pEStack_150->e_ident_magic_str + -2)] = '/';
              local_148 = (Elf64_Ehdr *)local_148->e_ident_magic_str;
              pEVar10 = local_158;
              pEVar9 = local_148;
            }
            else {
              pEVar9 = pEVar10;
            }
            if ((Elf64_Ehdr *)((longlong)pEVar10 - (longlong)pEVar9) < local_58) goto LAB_0009047c;
            pEVar10 = local_58;
            if (local_58 != (Elf64_Ehdr *)0x0) goto LAB_0008ff56;
          }
          else {
            local_148 = (Elf64_Ehdr *)0x0;
            pEVar9 = (Elf64_Ehdr *)0x0;
            if (pEVar10 < local_58) {
LAB_0009047c:
              pEVar17 = (Elf64_Ehdr *)
                        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                        do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                  (&local_158,pEVar9,local_58,1,1);
              pEVar9 = local_148;
            }
LAB_0008ff56:
            pEVar10 = local_58;
            pEVar17 = (Elf64_Ehdr *)(*(code *)PTR_memcpy_000c3aa8)(pEVar17,local_58);
          }
          pEVar9 = (Elf64_Ehdr *)
                   (pEVar10->e_ident_magic_str + (longlong)(pEVar9->e_ident_magic_str + -2));
          local_148 = pEVar9;
          uVar18 = (*(code *)PTR_metadata_000c40e0)(pEVar17,pEVar9);
          if ((int)local_398 == 2) {
            if ((1 < ((uint)local_390 & 3) - 2) && (((ulonglong)local_390 & 3) != 0)) {
              local_390 = (Elf64_Ehdr *)((longlong)&local_390[-1].e_shstrndx + 1);
              local_398 = (Elf64_Ehdr *)CONCAT71(local_398._1_7_,3);
              uVar18 = (*(code *)PTR_drop_000c3ae0)();
            }
LAB_00090011:
            if (local_158 != (Elf64_Ehdr *)0x0) {
              uVar18 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar18,1);
            }
            if (local_68 != 0) {
              (*(code *)PTR___rust_dealloc_000c3aa0)(uVar18,1);
            }
            goto LAB_00090043;
          }
          if ((uStack_360 & 0xf000) != 0x8000) goto LAB_00090011;
          pEVar17 = local_158;
          local_218 = local_158;
          pEStack_210 = pEStack_150;
          local_208 = local_148;
        }
        else {
LAB_0008fe16:
          local_218 = (Elf64_Ehdr *)0xffffffffffffffff;
        }
        if (local_68 != 0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(pEVar17,1);
        }
LAB_0009005d:
        local_38 = local_218;
        if (local_218 == (Elf64_Ehdr *)0xffffffffffffffff) break;
        pEVar17 = local_208;
        pEVar10 = pEStack_210;
      }
      else {
        (*(code *)PTR_metadata_000c40e0)(local_90,pEVar17);
        if ((int)local_398 == 2) {
          if ((1 < ((uint)local_390 & 3) - 2) && (((ulonglong)local_390 & 3) != 0)) {
            local_390 = (Elf64_Ehdr *)((longlong)&local_390[-1].e_shstrndx + 1);
            local_398 = (Elf64_Ehdr *)CONCAT71(local_398._1_7_,3);
            (*(code *)PTR_drop_000c3ae0)();
          }
LAB_00090043:
          std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::locate_build_id
                    (&local_218,local_90,local_98);
          goto LAB_0009005d;
        }
        if ((uStack_360 & 0xf000) != 0x8000) goto LAB_00090043;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        pEVar17 = local_58;
        pEVar10 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_000c3a90)();
        if (pEVar10 == (Elf64_Ehdr *)0x0) {
          (*(code *)PTR_handle_error_000c3a98)();
          goto LAB_000904ce;
        }
        (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Qa_01,pEVar17);
        local_38 = pEVar17;
        pEVar9 = pEVar10;
      }
      local_48 = pEVar10;
      pEVar17 = (Elf64_Ehdr *)
                std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap
                          (&local_158,pEVar10,pEVar17);
      pEVar4 = local_148;
      pEVar10 = pEStack_150;
      lVar8 = lStack_160;
      if ((int)local_158 == 1) {
        if (lStack_160 == local_178._8_8_) {
          (*(code *)PTR_grow_one_000c40f0)();
        }
        lVar11 = lVar8 * 0x10;
        *(Elf64_Ehdr **)(local_168 + lVar11) = pEVar10;
        *(Elf64_Ehdr **)(local_168 + 8 + lVar11) = pEVar4;
        lStack_160 = lVar8 + 1;
        if (lStack_160 == 0) {
          (*(code *)PTR_unwrap_failed_000c3b08)();
LAB_000904ce:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        pEVar17 = (Elf64_Ehdr *)
                  <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse
                            (&local_398,pEVar10,pEVar4);
        lVar11 = local_78;
        pEVar3 = local_390;
        pEVar10 = local_398;
        local_60 = (Elf64_Ehdr *)0xffffffffffffffff;
        pEVar9 = pEVar4;
        if (local_398 != (Elf64_Ehdr *)0xffffffffffffffff) {
          auVar20 = <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::build_id
                              (&local_398);
          pEVar17 = extraout_XMM0_Qa_02;
          pEVar9 = pEVar3;
          if ((auVar20._0_8_ != 0) && ((Elf64_Ehdr *)(local_70 + ~auVar20._8_8_) == local_58)) {
            iVar6 = (*(code *)PTR_bcmp_000c3b80)(extraout_XMM0_Qa_02,local_98);
            pEVar17 = extraout_XMM0_Qa_03;
            if (iVar6 == 0) {
              local_1f8 = CONCAT44(uStack_364,local_368);
              uStack_1f0 = CONCAT44(uStack_35c,CONCAT13(uStack_35d,CONCAT12(uStack_35e,uStack_360)))
              ;
              local_1e8 = CONCAT44(uStack_354,local_358);
              uStack_1e0 = CONCAT44(uStack_34c,uStack_350);
              pEVar17 = local_388;
              local_218 = local_388;
              pEStack_210 = pEStack_380;
              local_208 = local_378;
              lStack_200 = lStack_370;
              local_1d8 = local_348;
              uStack_1d0 = uStack_340;
              local_1c8 = uStack_338;
              uStack_1c0 = uStack_330;
              local_1b8 = uStack_328;
              local_60 = pEVar10;
              goto joined_r0x000903cc;
            }
          }
          if (pEVar10 != (Elf64_Ehdr *)0x0) {
            pEVar17 = (Elf64_Ehdr *)(*(code *)PTR___rust_dealloc_000c3aa0)(pEVar17,8);
          }
        }
      }
      else {
        local_60 = (Elf64_Ehdr *)0xffffffffffffffff;
      }
joined_r0x000903cc:
      if (local_38 != (Elf64_Ehdr *)0x0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)(pEVar17,1);
      }
      break;
    }
  }
LAB_00090190:
  load_dwarf_package(&local_430,local_1a8,local_1a0,&local_188);
  local_158 = local_80;
  pEStack_150 = local_a0;
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
  pEStack_380 = pEStack_210;
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
  local_390 = pEVar9;
  local_130 = lVar11;
  uVar18 = <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Context>::new
                     (&local_630,&local_188,&local_158,&local_398,&local_430);
  puVar5 = local_c0;
  if (CONCAT44(uStack_62c,local_630) != -1) {
    (*(code *)PTR_memcpy_000c3aa8)(uVar18,0x200);
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
    goto joined_r0x00090369;
  }
LAB_0009036d:
  *local_c0 = 0xffffffffffffffff;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>(&local_188);
  uVar16 = (*(code *)PTR_munmap_000c3ac0)();
  lVar8 = *param_4;
joined_r0x00090369:
  if (lVar8 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar16,1);
  }
  return;
}


