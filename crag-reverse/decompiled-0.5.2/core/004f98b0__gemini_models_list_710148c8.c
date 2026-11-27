// 004f98b0 gemini_models_list

/* craggemini_core[66f3c71560d70857]::models::gemini_models_list */

undefined1 * __rustcall
craggemini_core[66f3c71560d70857]::models::gemini_models_list
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char *pcVar7;
  Elf64_Ehdr *pEVar8;
  Elf64_Ehdr *pEVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  char local_d0;
  undefined1 uStack_cf;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Elf64_Ehdr *pEStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  Elf64_Ehdr *local_68;
  longlong local_60;
  undefined4 *local_58;
  longlong local_50;
  Elf64_Ehdr *local_48;
  undefined1 local_40 [16];
  
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(&str,&str)>,craggemini_core[66f3c71560d70857]::models::gemini_models_list::{closure#0}>>>
  ::from_iter(&local_60,&PTR_s_g_0078c908,&PTR_s_src_models_rs_0078cb88);
  local_40 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  puVar12 = local_40._8_8_;
  lVar16 = local_40._0_8_;
  if (puVar12 == (undefined1 *)0x0) goto LAB_004f9a30;
  if (puVar12 < &DAT_00000010) {
    lVar10 = 0;
    do {
      if (*(undefined1 **)((longlong)&DAT_0078c910 + lVar10) == puVar12) {
        puVar14 = (undefined1 *)0x0;
        do {
          if (puVar12 == puVar14) goto LAB_004f9a30;
          pbVar1 = puVar14 + *(longlong *)((longlong)&PTR_s_g_0078c908 + lVar10);
          pbVar2 = puVar14 + lVar16;
          puVar14 = puVar14 + 1;
        } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                 (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != 0x280);
switchD_004f992b_default:
    local_78 = (Elf64_Ehdr *)0x0;
    local_68 = (Elf64_Ehdr *)0x0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar7 != (char *)0x0) {
      builtin_strncpy(pcVar7,"name",4);
      local_b0 = 4;
      local_a0 = 4;
      local_98 = (Elf64_Ehdr *)local_40;
      pEStack_90 = (Elf64_Ehdr *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_a8 = pcVar7;
      (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da,&local_98);
      pEVar9 = local_c0;
      lVar16 = CONCAT44(uStack_cc,CONCAT22(uStack_ce,CONCAT11(uStack_cf,local_d0)));
      local_48 = uStack_c8;
      if ((longlong)local_c0 < 0) {
LAB_004f9c03:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004fa459;
      }
      if (local_c0 == (Elf64_Ehdr *)0x0) {
        pEVar8 = (Elf64_Ehdr *)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pEVar8 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_00799000)();
        if (pEVar8 == (Elf64_Ehdr *)0x0) goto LAB_004f9c03;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,pEVar9);
      }
      local_d0 = '\x03';
      uStack_c8 = pEVar9;
      uStack_b8 = pEVar9;
      local_c0 = pEVar8;
      uVar17 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
               ::insert(&local_98,&local_78,&local_b0,&local_d0);
      if ((char)local_98 != -1) {
        uVar17 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(&local_98);
      }
      if (lVar16 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar11 = local_40._8_8_;
      if (pcVar7 != (char *)0x0) {
        builtin_strncpy(pcVar7,"baseModelId",0xb);
        local_b0 = 0xb;
        local_a0 = 0xb;
        local_a8 = pcVar7;
        if ((longlong)local_40._8_8_ < 0) {
LAB_004f9e0a:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_004fa459;
        }
        if ((Elf64_Ehdr *)local_40._8_8_ == (Elf64_Ehdr *)0x0) {
          pEVar9 = (Elf64_Ehdr *)0x1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pEVar9 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_00799000)();
          if (pEVar9 == (Elf64_Ehdr *)0x0) goto LAB_004f9e0a;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,uVar11);
        }
        local_d0 = '\x03';
        uStack_c8 = (Elf64_Ehdr *)uVar11;
        uStack_b8 = (Elf64_Ehdr *)uVar11;
        local_c0 = pEVar9;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_98,&local_78,&local_b0,&local_d0);
        if ((char)local_98 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_98);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar7 != (char *)0x0) {
          builtin_strncpy(pcVar7,"version",7);
          local_b0 = 7;
          local_a0 = 7;
          local_a8 = pcVar7;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pEVar9 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_00799000)();
          if (pEVar9 == (Elf64_Ehdr *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_004fa459;
          }
          pEVar9->e_ident_magic_num = 0x76;
          pEVar9->e_ident_magic_str[0] = '1';
          local_d0 = '\x03';
          uStack_c8 = (Elf64_Ehdr *)0x2;
          uStack_b8 = (Elf64_Ehdr *)0x2;
          local_c0 = pEVar9;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_98,&local_78,&local_b0,&local_d0);
          if ((char)local_98 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_98);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          uVar11 = local_40._8_8_;
          if (pcVar7 != (char *)0x0) {
            builtin_strncpy(pcVar7,"displayName",0xb);
            local_b0 = 0xb;
            local_a0 = 0xb;
            local_a8 = pcVar7;
            if ((longlong)local_40._8_8_ < 0) {
LAB_004f9fb4:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_004fa459;
            }
            if ((Elf64_Ehdr *)local_40._8_8_ == (Elf64_Ehdr *)0x0) {
              pEVar9 = (Elf64_Ehdr *)0x1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pEVar9 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_00799000)();
              if (pEVar9 == (Elf64_Ehdr *)0x0) goto LAB_004f9fb4;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,uVar11);
            }
            local_d0 = '\x03';
            uStack_c8 = (Elf64_Ehdr *)uVar11;
            uStack_b8 = (Elf64_Ehdr *)uVar11;
            local_c0 = pEVar9;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_98,&local_78,&local_b0,&local_d0);
            if ((char)local_98 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_98);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar11 = s_enerationMethods_0019a39c._8_8_;
            if (pcVar7 != (char *)0x0) {
              *(ulonglong *)(pcVar7 + 10) =
                   CONCAT26(s_enerationMethods_0019a39c._6_2_,
                            CONCAT42(s_enerationMethods_0019a39c._2_4_,
                                     s_enerationMethods_0019a39c._0_2_));
              *(undefined8 *)(pcVar7 + 0x12) = uVar11;
              uVar5 = s_enerationMethods_0019a39c._2_4_;
              uVar4 = s_supportedG_0019a392._4_4_;
              uVar17 = CONCAT22(s_enerationMethods_0019a39c._0_2_,s_supportedG_0019a392._8_2_);
              *(undefined4 *)pcVar7 = s_supportedG_0019a392._0_4_;
              *(undefined4 *)(pcVar7 + 4) = uVar4;
              *(undefined4 *)(pcVar7 + 8) = uVar17;
              *(undefined4 *)(pcVar7 + 0xc) = uVar5;
              local_b0 = 0x1a;
              local_a0 = 0x1a;
              local_a8 = pcVar7;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pEVar9 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_00799000)();
              if (pEVar9 == (Elf64_Ehdr *)0x0) {
                (*(code *)PTR_handle_alloc_error_007991d8)();
                goto LAB_004fa459;
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pEVar8 = (Elf64_Ehdr *)(*(code *)PTR___rust_alloc_00799000)();
              if (pEVar8 == (Elf64_Ehdr *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_004fa459;
              }
              pEVar8->e_ident_osabi = 0x65;
              pEVar8->e_ident_abiversion = 0x43;
              pEVar8->e_ident_pad[0] = 0x6f;
              pEVar8->e_ident_pad[1] = 0x6e;
              pEVar8->e_ident_pad[2] = 0x74;
              pEVar8->e_ident_pad[3] = 0x65;
              pEVar8->e_ident_pad[4] = 0x6e;
              pEVar8->e_ident_pad[5] = 0x74;
              pEVar8->e_ident_magic_num = 0x67;
              pEVar8->e_ident_magic_str[0] = 'e';
              pEVar8->e_ident_magic_str[1] = 'n';
              pEVar8->e_ident_magic_str[2] = 'e';
              pEVar8->e_ident_class = 0x72;
              pEVar8->e_ident_data = 0x61;
              pEVar8->e_ident_version = 0x74;
              pEVar8->e_ident_osabi = 0x65;
              local_d0 = '\x03';
              uStack_c8 = (Elf64_Ehdr *)&DAT_0000000f;
              uStack_b8 = (Elf64_Ehdr *)&DAT_0000000f;
              local_c0 = pEVar8;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              uVar11 = s_streamGenerateContent_0019a3ac._8_8_;
              if (pcVar7 == (char *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_004fa459;
              }
              *(undefined8 *)pcVar7 = s_streamGenerateContent_0019a3ac._0_8_;
              *(undefined8 *)(pcVar7 + 8) = uVar11;
              pcVar7[0xd] = 'e';
              pcVar7[0xe] = 'C';
              pcVar7[0xf] = 'o';
              pcVar7[0x10] = 'n';
              pcVar7[0x11] = 't';
              pcVar7[0x12] = 'e';
              pcVar7[0x13] = 'n';
              pcVar7[0x14] = 't';
              *(undefined1 *)&pEVar9->e_phoff = 3;
              pEVar9->e_shoff = 0x15;
              *(char **)&pEVar9->e_flags = pcVar7;
              pEVar9->e_phnum = 0x15;
              pEVar9->e_shentsize = 0;
              pEVar9->e_shnum = 0;
              pEVar9->e_shstrndx = 0;
              pEVar9->e_type = (undefined2)local_c0;
              pEVar9->e_machine = local_c0._2_2_;
              pEVar9->e_version = local_c0._4_4_;
              *(undefined4 *)&pEVar9->e_entry = (undefined4)uStack_b8;
              *(undefined4 *)((longlong)&pEVar9->e_entry + 4) = uStack_b8._4_4_;
              pEVar9->e_ident_magic_num = local_d0;
              pEVar9->e_ident_magic_str[0] = uStack_cf;
              pEVar9->e_ident_magic_str[1] = (char)uStack_ce;
              pEVar9->e_ident_magic_str[2] = (char)((ushort)uStack_ce >> 8);
              pEVar9->e_ident_class = (undefined1)uStack_cc;
              pEVar9->e_ident_data = uStack_cc._1_1_;
              pEVar9->e_ident_version = uStack_cc._2_1_;
              pEVar9->e_ident_osabi = uStack_cc._3_1_;
              pEVar9->e_ident_abiversion = (undefined1)uStack_c8;
              pEVar9->e_ident_pad[0] = uStack_c8._1_1_;
              pEVar9->e_ident_pad[1] = uStack_c8._2_1_;
              pEVar9->e_ident_pad[2] = uStack_c8._3_1_;
              *(undefined4 *)(pEVar9->e_ident_pad + 3) = uStack_c8._4_4_;
              uStack_c8 = (Elf64_Ehdr *)0x2;
              uStack_b8 = (Elf64_Ehdr *)0x2;
              local_d0 = '\x04';
              local_c0 = pEVar9;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_98,&local_78,&local_b0,&local_d0);
              if ((char)local_98 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_98);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar7 != (char *)0x0) {
                builtin_strncpy(pcVar7,"inputTokenLimit",0xf);
                local_b0 = 0xf;
                local_a0 = 0xf;
                local_d0 = '\x02';
                uStack_c8 = (Elf64_Ehdr *)0x0;
                local_c0 = &Elf64_Ehdr_00100000;
                local_a8 = pcVar7;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_98,&local_78,&local_b0,&local_d0);
                if ((char)local_98 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_98);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                uVar5 = s_outputTokenLimit_00182830._12_4_;
                uVar4 = s_outputTokenLimit_00182830._8_4_;
                uVar17 = s_outputTokenLimit_00182830._4_4_;
                if (pcVar7 != (char *)0x0) {
                  *(undefined4 *)pcVar7 = s_outputTokenLimit_00182830._0_4_;
                  *(undefined4 *)(pcVar7 + 4) = uVar17;
                  *(undefined4 *)(pcVar7 + 8) = uVar4;
                  *(undefined4 *)(pcVar7 + 0xc) = uVar5;
                  local_b0 = 0x10;
                  local_a0 = 0x10;
                  local_d0 = '\x02';
                  uStack_c8 = (Elf64_Ehdr *)0x0;
                  local_c0 = (Elf64_Ehdr *)0x10000;
                  local_a8 = pcVar7;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_98,&local_78,&local_b0,&local_d0);
                  if ((char)local_98 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_98);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                  if (pcVar7 != (char *)0x0) {
                    builtin_strncpy(pcVar7,"thinking",8);
                    local_b0 = 8;
                    local_a0 = 8;
                    local_d0 = '\x01';
                    uStack_cf = 1;
                    local_a8 = pcVar7;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_98,&local_78,&local_b0,&local_d0);
                    if ((char)local_98 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_98);
                    }
                    uStack_c8 = local_78;
                    local_c0 = (Elf64_Ehdr *)CONCAT44(uStack_6c,uStack_70);
                    uStack_b8 = local_68;
                    local_d0 = '\x05';
                    uVar17 = (undefined4)local_78;
                    if (local_50 == local_60) {
                      uVar17 = (*(code *)PTR_grow_one_00799310)();
                    }
                    puVar15 = local_58;
                    if (local_50 != 0) {
                      (*(code *)PTR_memmove_00799258)(uVar17,local_50 << 5);
                    }
                    *(Elf64_Ehdr **)(puVar15 + 4) = local_c0;
                    *(Elf64_Ehdr **)(puVar15 + 6) = uStack_b8;
                    *puVar15 = CONCAT22(uStack_ce,CONCAT11(uStack_cf,local_d0));
                    puVar15[1] = uStack_cc;
                    puVar15[2] = (undefined4)uStack_c8;
                    puVar15[3] = uStack_c8._4_4_;
                    local_50 = local_50 + 1;
                    goto LAB_004f9a30;
                  }
                }
              }
            }
          }
        }
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    switch(puVar12) {
    case (undefined1 *)0x10:
      pcVar7 = &DAT_00183280;
      uVar13 = 0x10;
      uVar11 = 0x10;
      break;
    case (undefined1 *)0x11:
      cVar6 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                        ("gemini-4-hydrogenGemini 4 Hydrogen",0x11,lVar16,0x11);
      if (cVar6 == '\0') {
        pcVar7 = "claude-sonnet-4-6";
        uVar13 = 0x11;
        uVar11 = 0x11;
        break;
      }
      goto LAB_004f9a30;
    case (undefined1 *)0x12:
      pcVar7 = "gemini-3.1-pro-lowGemini 3.1 Pro (Low)";
      uVar13 = 0x12;
      uVar11 = 0x12;
      break;
    case (undefined1 *)0x13:
      cVar6 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>("g",0x13,lVar16,0x13);
      if (cVar6 != '\0') goto LAB_004f9a30;
      pcVar7 = 
      "gemini-3.1-pro-highGemini 3.1 Pro (High)gemini-3-proGemini 3 Progemini-3-flashGemini 3 Flashgemini-2.5-proGemini 2.5 Pro"
      ;
      uVar13 = 0x13;
      uVar11 = 0x13;
      break;
    case (undefined1 *)0x14:
      pcVar7 = "gemini-4-carbon-highGemini 4 Carbon (High)";
      uVar13 = 0x14;
      uVar11 = 0x14;
      break;
    case (undefined1 *)0x15:
      cVar6 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                        ("gemini-4-hydrogen-lowGemini 4 Hydrogen (Low)",0x15,lVar16,0x15);
      if (cVar6 != '\0') goto LAB_004f9a30;
      pcVar7 = "gemini-3.1-pro-mediumGemini 3.1 Pro (Medium)";
      uVar13 = 0x15;
      uVar11 = 0x15;
      break;
    case (undefined1 *)0x16:
      cVar6 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                        ("gemini-4-carbon-mediumGemini 4 Carbon (Medium)",0x16,lVar16,0x16);
      if (cVar6 != '\0') goto LAB_004f9a30;
      pcVar7 = "gemini-4-hydrogen-highGemini 4 Hydrogen (High)";
      uVar13 = 0x16;
      uVar11 = 0x16;
      break;
    case (undefined1 *)0x17:
      pcVar7 = 
      "gemini-4-hydrogen-xhighGemini 4 Hydrogen (XHigh)gemini-4-neonGemini 4 Neongemini-3.1-proGemini 3.1 Pro"
      ;
      uVar13 = 0x17;
      uVar11 = 0x17;
      break;
    case (undefined1 *)0x18:
      cVar6 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                        ("gemini-4-hydrogen-mediumGemini 4 Hydrogen (Medium)",0x18,lVar16,0x18);
      if (cVar6 != '\0') goto LAB_004f9a30;
      pcVar7 = "claude-opus-4-6-thinkingClaude Opus 4.6 (Thinking)";
      uVar13 = 0x18;
      uVar11 = 0x18;
      break;
    default:
      goto switchD_004f992b_default;
    }
    cVar6 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(pcVar7,uVar13,lVar16,uVar11);
    if (cVar6 == '\0') goto switchD_004f992b_default;
LAB_004f9a30:
    local_78 = (Elf64_Ehdr *)0x0;
    local_68 = (Elf64_Ehdr *)0x0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar7 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
    }
    else {
      builtin_strncpy(pcVar7,"models",6);
      local_b0 = 6;
      local_a0 = 6;
      local_a8 = pcVar7;
      <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
      ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                (&local_d0,&local_60);
      if (local_d0 != -1) {
        local_88 = (undefined4)local_c0;
        uStack_84 = local_c0._4_4_;
        uStack_80 = (undefined4)uStack_b8;
        uStack_7c = uStack_b8._4_4_;
        local_98 = (Elf64_Ehdr *)
                   CONCAT44(uStack_cc,CONCAT22(uStack_ce,CONCAT11(uStack_cf,local_d0)));
        pEStack_90 = uStack_c8;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_d0,&local_78,&local_b0,&local_98);
        if (local_d0 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_d0);
        }
        *(Elf64_Ehdr **)(param_1 + 0x18) = local_68;
        *(undefined4 *)(param_1 + 8) = (undefined4)local_78;
        *(undefined4 *)(param_1 + 0xc) = local_78._4_4_;
        *(undefined4 *)(param_1 + 0x10) = uStack_70;
        *(undefined4 *)(param_1 + 0x14) = uStack_6c;
        *param_1 = 5;
        puVar15 = local_58;
        uVar17 = (undefined4)local_78;
        for (lVar16 = local_50 + 1; lVar16 != 1; lVar16 = lVar16 + -1) {
          uVar17 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::value::Value>(puVar15);
          puVar15 = puVar15 + 8;
        }
        if (local_60 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
        }
        return param_1;
      }
      local_98 = uStack_c8;
      (*(code *)PTR_unwrap_failed_00799028)
                (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078c878,&local_98,
                 &PTR_s_src_models_rs_0078cb88);
    }
  }
LAB_004fa459:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


