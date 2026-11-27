// 00155270 <<craggemini[b21da2d71f2da7a3]::mcp_stdio::McpBridgeFileConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini[b21da2d71f2da7a3]::mcp_stdio::McpBridgeFileConfig
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini[b21da2d71f2da7a3]::mcp_stdio::McpBridgeFileConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,ulonglong *******param_2,undefined8 param_3,undefined8 param_4,
          ulonglong *******param_5,ulonglong *******param_6)

{
  ulonglong ******ppppppuVar1;
  code *pcVar2;
  ulonglong ******ppppppuVar3;
  byte bVar4;
  ulonglong ******ppppppuVar5;
  undefined8 uVar6;
  ulonglong *******pppppppuVar7;
  ulonglong *******pppppppuVar8;
  ulonglong *******pppppppuVar9;
  ulonglong *******extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  ulonglong *******extraout_RDX_08;
  ulonglong *******extraout_RDX_09;
  ulonglong *******extraout_RDX_10;
  undefined8 uVar10;
  ulonglong *******unaff_RBP;
  ulonglong uVar11;
  ulonglong *******pppppppuVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  ulonglong *******in_R10;
  ulonglong *******in_R11;
  ulonglong *******unaff_R12;
  ulonglong *******unaff_R13;
  ulonglong *******unaff_R14;
  ulonglong *******pppppppuVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong *******local_148;
  ulonglong *******local_140;
  ulonglong *******local_130;
  ulonglong *******local_128;
  ulonglong *******local_120;
  ulonglong *******local_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *******local_108;
  ulonglong *******local_100;
  ulonglong *******local_f8;
  undefined8 local_f0;
  ulonglong *******local_e8;
  ulonglong *******local_e0;
  ulonglong *******local_d8;
  ulonglong *******local_d0;
  ulonglong *******local_c8;
  ulonglong *******local_c0;
  ulonglong *******pppppppuStack_b8;
  ulonglong *******local_b0;
  ulonglong *******local_a8;
  ulonglong *******local_a0;
  ulonglong *******local_98;
  ulonglong *******local_90;
  undefined1 local_81;
  undefined8 *local_80;
  ulonglong *******local_78;
  ulonglong *******local_70;
  ulonglong *******local_68;
  ulonglong *******local_60;
  undefined1 local_58;
  ulonglong *******local_50;
  ulonglong *******local_48;
  ulonglong *******pppppppuStack_40;
  ulonglong *******local_38;
  
  ppppppuVar1 = param_2[4];
  if (param_2[5] < ppppppuVar1) {
    local_120 = (ulonglong *******)-(longlong)ppppppuVar1;
    ppppppuVar3 = param_2[5];
    do {
      ppppppuVar5 = (ulonglong ******)((longlong)ppppppuVar3 + 1);
      bVar4 = *(byte *)((longlong)param_2[3] + (longlong)ppppppuVar3);
      if ((0x20 < (ulonglong)bVar4) || ((0x100002600U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0)) {
        if (bVar4 == 0x5b) {
          pppppppuVar9 = param_2 + 7;
          *(char *)pppppppuVar9 = *(char *)pppppppuVar9 + -1;
          if (*(char *)pppppppuVar9 != '\0') {
            param_2[5] = ppppppuVar5;
            local_58 = 1;
            pppppppuVar9 = (ulonglong *******)&local_60;
            local_60 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_f0);
            auVar18._8_8_ = extraout_RDX_04;
            auVar18._0_8_ = local_e8;
            pppppppuVar8 = local_120;
            local_90 = pppppppuVar9;
            local_140 = unaff_RBP;
            if ((char)local_f0 == '\x01') {
LAB_00155b0b:
              local_130 = pppppppuVar8;
              local_148 = (ulonglong *******)0xffffffffffffffff;
            }
            else {
              if (local_f0._1_1_ != '\x01') {
                ppuVar13 = &PTR_s_struct_McpBridgeFileConfig_with_4_00214f80;
                auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_s_struct_McpBridgeFileConfig_with_4_00214f80,
                                           &DAT_00214f40);
                pppppppuVar8 = local_120;
                local_90 = (ulonglong *******)ppuVar13;
                goto LAB_00155b0b;
              }
              pppppppuVar15 = local_60;
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
                        (&local_f0);
              pppppppuVar9 = local_e8;
              local_148 = local_f0;
              auVar18._8_8_ = extraout_RDX_05;
              auVar18._0_8_ = local_e8;
              pppppppuVar8 = local_120;
              local_90 = pppppppuVar15;
              if (local_f0 == (ulonglong *******)0xffffffffffffffff) goto LAB_00155b0b;
              local_90 = local_e0;
              ppuVar13 = (undefined **)&local_60;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_f0);
              auVar18._8_8_ = extraout_RDX_06;
              auVar18._0_8_ = local_e8;
              pppppppuVar7 = local_120;
              pppppppuVar8 = local_e8;
              pppppppuVar15 = local_90;
              if ((char)local_f0 == '\x01') {
joined_r0x00156124:
                local_90 = (ulonglong *******)ppuVar13;
                local_130 = pppppppuVar7;
                if (local_148 != (ulonglong *******)0x0) {
                  uVar6 = 1;
                  local_90 = pppppppuVar15;
                  (*(code *)PTR___rust_dealloc_00219c40)();
                  auVar18._8_8_ = uVar6;
                  auVar18._0_8_ = pppppppuVar8;
                  local_90 = local_148;
                }
                unaff_R13 = auVar18._0_8_;
                local_148 = (ulonglong *******)0xffffffffffffffff;
              }
              else {
                if (local_f0._1_1_ != '\x01') {
                  ppuVar13 = &PTR_s_struct_McpBridgeFileConfig_with_4_00214f80;
                  auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(1,&PTR_s_struct_McpBridgeFileConfig_with_4_00214f80,
                                             &DAT_00214f40);
LAB_001559df:
                  pppppppuVar8 = auVar18._0_8_;
                  pppppppuVar7 = local_120;
                  local_140 = unaff_RBP;
                  pppppppuVar15 = local_90;
                  goto joined_r0x00156124;
                }
                ppuVar13 = (undefined **)local_60;
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                          (&local_f0);
                unaff_R13 = local_e8;
                local_140 = local_f0;
                auVar18._8_8_ = extraout_RDX_07;
                auVar18._0_8_ = local_e8;
                if (local_f0 == (ulonglong *******)0xffffffffffffffff) goto LAB_001559df;
                local_70 = local_e0;
                ppuVar13 = (undefined **)&local_60;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_f0);
                if ((char)local_f0 == '\x01') {
                  local_130 = local_e8;
                  local_e8 = extraout_RDX_08;
LAB_00156106:
                  pppppppuVar9 = local_e8;
                  if (local_140 != (ulonglong *******)0x0) {
                    pppppppuVar9 = (ulonglong *******)0x1;
                    (*(code *)PTR___rust_dealloc_00219c40)();
                    ppuVar13 = (undefined **)local_140;
                  }
                  auVar18._8_8_ = pppppppuVar9;
                  auVar18._0_8_ = local_130;
                  pppppppuVar7 = local_120;
                  pppppppuVar8 = local_130;
                  pppppppuVar15 = local_90;
                  goto joined_r0x00156124;
                }
                if (local_f0._1_1_ == '\x01') {
                  ppuVar13 = (undefined **)local_60;
                  deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                            (&local_f0);
                  if (local_f0 == (ulonglong *******)0xffffffffffffffff) {
                    local_130 = local_e8;
                    goto LAB_00156106;
                  }
                  local_118 = local_f0;
                  pppppppuStack_110 = local_e8;
                  local_108 = local_e0;
                  local_120 = local_e0;
                }
                else {
                  craggemini[b21da2d71f2da7a3]::mcp_stdio::default_server_name(&local_118);
                }
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_f0,&local_60);
                if ((char)local_f0 == '\x01') {
                  local_130 = local_e8;
                  local_e8 = extraout_RDX_09;
LAB_00155cf3:
                  ppuVar13 = (undefined **)local_118;
                  if (local_118 != (ulonglong *******)0x0) {
                    pppppppuVar9 = (ulonglong *******)0x1;
                    (*(code *)PTR___rust_dealloc_00219c40)();
                    local_e8 = pppppppuVar9;
                  }
                  goto LAB_00156106;
                }
                if (local_f0._1_1_ == '\x01') {
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (&local_f0,local_60);
                  local_130 = local_e8;
                  local_120 = local_e8;
                  local_e8 = extraout_RDX_10;
                  if (local_f0 == (ulonglong *******)0xfffffffffffffffe) goto LAB_00155cf3;
                  param_6 = local_e0;
                }
                else {
                  local_f0 = (ulonglong *******)0xfffffffffffffffe;
                }
                pppppppuVar8 = (ulonglong *******)0xffffffffffffffff;
                if (local_f0 != (ulonglong *******)0xfffffffffffffffe) {
                  pppppppuVar8 = local_f0;
                }
                auVar18._8_8_ = pppppppuVar8;
                auVar18._0_8_ = pppppppuVar9;
                local_38 = local_108;
                local_48 = local_118;
                pppppppuStack_40 = pppppppuStack_110;
                param_5 = local_70;
              }
            }
            unaff_R12 = auVar18._0_8_;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_c0 = local_48;
            pppppppuStack_b8 = pppppppuStack_40;
            local_b0 = local_38;
            local_f8 = unaff_R13;
            local_f0 = local_148;
            local_e8 = unaff_R12;
            local_e0 = local_90;
            local_d8 = local_140;
            local_d0 = unaff_R13;
            local_c8 = param_5;
            local_a8 = auVar18._8_8_;
            local_a0 = local_130;
            local_98 = param_6;
            pppppppuVar8 = (ulonglong *******)
                           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::end_seq();
            pppppppuVar9 = local_c0;
            if (local_148 == (ulonglong *******)0xffffffffffffffff) {
              if (pppppppuVar8 != (ulonglong *******)0x0) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                          (pppppppuVar8);
              }
            }
            else {
              local_120 = pppppppuStack_b8;
              if (pppppppuVar8 == (ulonglong *******)0x0) goto LAB_00155eef;
              uVar16 = extraout_XMM0_Da;
              if (local_148 != (ulonglong *******)0x0) {
                uVar16 = (*(code *)PTR___rust_dealloc_00219c40)(pppppppuStack_b8,1);
              }
              if (local_140 != (ulonglong *******)0x0) {
                uVar16 = (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
              }
              if (pppppppuVar9 != (ulonglong *******)0x0) {
                (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
              }
              puVar14 = (undefined1 *)((longlong)auVar18._8_8_ + -1);
              if (puVar14 < (undefined1 *)0xfffffffffffffffe) {
                (*(code *)PTR___rust_dealloc_00219c40)(puVar14,1);
              }
              unaff_R12 = pppppppuVar8;
            }
            goto LAB_00155fca;
          }
        }
        else {
          if (bVar4 != 0x7b) {
            unaff_R12 = (ulonglong *******)
                        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_invalid_type(param_2,&local_81,&DAT_00215190);
            goto LAB_00155fca;
          }
          pppppppuVar9 = param_2 + 7;
          *(char *)pppppppuVar9 = *(char *)pppppppuVar9 + -1;
          if (*(char *)pppppppuVar9 != '\0') {
            param_2[5] = ppppppuVar5;
            pppppppuStack_40 = (ulonglong *******)CONCAT71(pppppppuStack_40._1_7_,1);
            local_128 = (ulonglong *******)0xfffffffffffffffe;
            local_148 = (ulonglong *******)0xffffffffffffffff;
            local_130 = (ulonglong *******)0x11450c;
            local_68 = (ulonglong *******)0x11450c;
            local_140 = (ulonglong *******)0xffffffffffffffff;
            local_100 = (ulonglong *******)0xffffffffffffffff;
            local_78 = (ulonglong *******)param_2[3];
            local_80 = param_1;
            local_48 = param_2;
            goto LAB_0015535e;
          }
        }
        local_f0 = (ulonglong *******)0x18;
        goto LAB_001552d6;
      }
      param_2[5] = ppppppuVar5;
      ppppppuVar3 = ppppppuVar5;
    } while (ppppppuVar5 != ppppppuVar1);
  }
  local_f0 = (ulonglong *******)0x5;
LAB_001552d6:
  uVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_f0);
  goto LAB_00155fd5;
LAB_0015535e:
  pppppppuVar9 = local_120;
  local_70 = unaff_R14;
LAB_00155363:
  local_120 = pppppppuVar9;
LAB_00155380:
  pppppppuVar8 = (ulonglong *******)&local_f0;
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_f0,&local_48);
  puVar14 = (undefined1 *)local_48;
  auVar17._8_8_ = extraout_RDX;
  auVar17._0_8_ = local_e8;
  pppppppuVar15 = local_140;
  if ((char)local_f0 == '\x01') goto LAB_00155880;
  if (local_f0._1_1_ != '\x01') {
    if (local_148 == (ulonglong *******)0xffffffffffffffff) {
      local_118 = (ulonglong *******)0x1144e6;
      pppppppuStack_110 = (ulonglong *******)&DAT_0000000d;
      local_f0 = (ulonglong *******)&local_118;
      local_e8 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      puVar14 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
      auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                          (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                           &local_f0);
      local_148 = (ulonglong *******)0xffffffffffffffff;
      goto LAB_001559ba;
    }
    if (local_140 == (ulonglong *******)0xffffffffffffffff) {
      local_118 = (ulonglong *******)0x1144f3;
      pppppppuStack_110 = (ulonglong *******)&DAT_0000000e;
      local_f0 = (ulonglong *******)&local_118;
      local_e8 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      puVar14 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
      auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                          (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                           &local_f0);
      uVar6 = auVar17._0_8_;
      bVar4 = 1;
      pppppppuVar15 = (ulonglong *******)0xffffffffffffffff;
      if (local_148 == (ulonglong *******)0x0) {
        local_148 = (ulonglong *******)0x0;
      }
      else {
        uVar10 = 1;
        (*(code *)PTR___rust_dealloc_00219c40)();
        auVar17._8_8_ = uVar10;
        auVar17._0_8_ = uVar6;
        puVar14 = (undefined1 *)unaff_R12;
      }
      goto LAB_00155dbb;
    }
    pppppppuVar9 = extraout_RDX;
    if (local_100 == (ulonglong *******)0xffffffffffffffff) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      pppppppuVar15 = (ulonglong *******)0x4;
      local_120 = (ulonglong *******)(*(code *)PTR___rust_alloc_00219c88)();
      if (local_120 == (ulonglong *******)0x0) {
        (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *(uint *)local_120 = 0x67617263;
      local_50 = (ulonglong *******)0x4;
      if (local_128 != (ulonglong *******)0xfffffffffffffffe) goto LAB_00155acb;
LAB_001558e2:
      local_128 = (ulonglong *******)0xffffffffffffffff;
      local_130 = pppppppuVar9;
    }
    else {
      pppppppuVar15 = local_100;
      if (local_128 == (ulonglong *******)0xfffffffffffffffe) goto LAB_001558e2;
LAB_00155acb:
      in_R10 = local_78;
    }
    param_5 = local_70;
    in_R11 = local_50;
    goto LAB_00155e49;
  }
  pppppppuVar8 = local_48 + 3;
  local_48[5] = (ulonglong ******)((longlong)local_48[5] + 1);
  local_48[2] = (ulonglong ******)0x0;
  pppppppuVar7 = local_48;
  (*(code *)PTR_parse_str_00219c90)();
  unaff_R14 = local_70;
  auVar17._8_8_ = pppppppuVar7;
  auVar17._0_8_ = local_e8;
  pppppppuVar7 = (ulonglong *******)&local_f0;
  if ((int)local_f0 != 2) {
    pppppppuVar7 = (ulonglong *******)((longlong)local_e0 + -7);
    pppppppuVar9 = pppppppuVar7;
    pppppppuVar12 = pppppppuVar8;
    if (&DAT_00000008 <= pppppppuVar7) goto switchD_001553ff_caseD_1;
    pppppppuVar9 = (ulonglong *******)
                   ((longlong)&switchD_001553ff::switchdataD_001141a4 +
                   (longlong)(int)(&switchD_001553ff::switchdataD_001141a4)[(longlong)pppppppuVar7])
    ;
    switch(pppppppuVar7) {
    case (ulonglong *******)0x0:
      pppppppuVar9 = (ulonglong *******)(ulonglong)(*(uint *)local_e8 ^ 0x746f6c73);
      pppppppuVar12 = (ulonglong *******)0x64695f74;
      if (!(*(int *)((longlong)local_e8 + 3) != 0x64695f74 || (*(uint *)local_e8 ^ 0x746f6c73) != 0)
         ) {
        if (local_128 != (ulonglong *******)0xfffffffffffffffe) goto LAB_0015619f;
        pppppppuVar7 = *(ulonglong ********)((longlong)puVar14 + 0x20);
        pppppppuVar12 = *(ulonglong ********)((longlong)puVar14 + 0x28);
        pppppppuVar9 = pppppppuVar7;
        if (pppppppuVar12 < pppppppuVar7) {
          ppppppuVar1 = *pppppppuVar8;
          pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar7;
          while( true ) {
            pppppppuVar12 = (ulonglong *******)((longlong)pppppppuVar12 + 1);
            uVar11 = (ulonglong)*(byte *)(((longlong)ppppppuVar1 - 1U) + (longlong)pppppppuVar12);
            if (0x3a < uVar11) goto LAB_0015621d;
            if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
            *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar12;
            if (pppppppuVar12 == pppppppuVar7) goto LAB_0015602a;
          }
          if (uVar11 == 0x3a) {
            *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar12;
            pppppppuVar8 = (ulonglong *******)&local_118;
            <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
            ::deserialize::
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      (pppppppuVar8,puVar14);
            auVar19._8_8_ = extraout_RDX_00;
            auVar19._0_8_ = pppppppuStack_110;
            local_128 = local_118;
            puVar14 = (undefined1 *)pppppppuVar8;
            if (local_118 != (ulonglong *******)0xfffffffffffffffe) {
              local_130 = pppppppuStack_110;
              local_78 = local_108;
              goto LAB_00155380;
            }
          }
          else {
LAB_0015621d:
            local_f0 = (ulonglong *******)0x6;
            auVar19 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(puVar14,&local_f0);
          }
        }
        else {
LAB_0015602a:
          local_f0 = (ulonglong *******)0x3;
          auVar19 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(puVar14,&local_f0);
        }
        uVar6 = auVar19._0_8_;
        bVar4 = 0;
        local_128 = local_148;
        goto joined_r0x0015606e;
      }
      break;
    case (ulonglong *******)0x4:
      pppppppuVar9 = (ulonglong *******)((ulonglong)*local_e8 ^ 0x6e5f726576726573);
      pppppppuVar12 = (ulonglong *******)0x656d616e5f726576;
      if (!(*(longlong *)((longlong)local_e8 + 3) == 0x656d616e5f726576 &&
           pppppppuVar9 == (ulonglong *******)0x0)) break;
      if (local_100 == (ulonglong *******)0xffffffffffffffff) {
        pppppppuVar7 = *(ulonglong ********)((longlong)puVar14 + 0x20);
        pppppppuVar12 = *(ulonglong ********)((longlong)puVar14 + 0x28);
        pppppppuVar9 = pppppppuVar7;
        if (pppppppuVar12 < pppppppuVar7) {
          ppppppuVar1 = *pppppppuVar8;
          pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar7;
          while( true ) {
            pppppppuVar12 = (ulonglong *******)((longlong)pppppppuVar12 + 1);
            uVar11 = (ulonglong)*(byte *)(((longlong)ppppppuVar1 - 1U) + (longlong)pppppppuVar12);
            if (0x3a < uVar11) goto LAB_0015624f;
            if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
            *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar12;
            if (pppppppuVar12 == pppppppuVar7) goto LAB_00156079;
          }
          if (uVar11 != 0x3a) {
LAB_0015624f:
            local_f0 = (ulonglong *******)0x6;
            local_100 = (ulonglong *******)0xffffffffffffffff;
            auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(puVar14,&local_f0);
            pppppppuVar8 = (ulonglong *******)puVar14;
            goto LAB_001560a6;
          }
          *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar12;
          pppppppuVar8 = (ulonglong *******)&local_118;
          deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                    (pppppppuVar8,puVar14);
          auVar17._8_8_ = extraout_RDX_01;
          auVar17._0_8_ = pppppppuStack_110;
          local_100 = local_118;
          if (local_118 != (ulonglong *******)0xffffffffffffffff) goto code_r0x00155610;
          local_100 = (ulonglong *******)0xffffffffffffffff;
        }
        else {
LAB_00156079:
          local_f0 = (ulonglong *******)0x3;
          local_100 = (ulonglong *******)0xffffffffffffffff;
          auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(puVar14,&local_f0);
          pppppppuVar8 = (ulonglong *******)puVar14;
LAB_001560a6:
          local_100 = (ulonglong *******)0xffffffffffffffff;
        }
        goto LAB_00155880;
      }
      local_68 = (ulonglong *******)0x114501;
      goto LAB_0015619f;
    case (ulonglong *******)0x6:
      pppppppuVar9 = (ulonglong *******)((ulonglong)*local_e8 ^ 0x735f6c656e72656b);
      pppppppuVar12 = (ulonglong *******)0x74656b636f735f6c;
      if (*(longlong *)((longlong)local_e8 + 5) == 0x74656b636f735f6c &&
          pppppppuVar9 == (ulonglong *******)0x0) {
        if (local_148 != (ulonglong *******)0xffffffffffffffff) {
          local_68 = (ulonglong *******)0x1144e6;
          goto LAB_0015619f;
        }
        pppppppuVar7 = *(ulonglong ********)((longlong)puVar14 + 0x20);
        pppppppuVar12 = *(ulonglong ********)((longlong)puVar14 + 0x28);
        pppppppuVar9 = pppppppuVar7;
        if (pppppppuVar7 <= pppppppuVar12) goto LAB_00155d52;
        ppppppuVar1 = *pppppppuVar8;
        pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar7;
        goto LAB_00155717;
      }
      break;
    case (ulonglong *******)0x7:
      pppppppuVar9 = (ulonglong *******)((ulonglong)*local_e8 ^ 0x6c616e7265746e69);
      pppppppuVar12 = (ulonglong *******)0x6e656b6f745f6c61;
      if (*(longlong *)((longlong)local_e8 + 6) == 0x6e656b6f745f6c61 &&
          pppppppuVar9 == (ulonglong *******)0x0) goto LAB_00155634;
    }
switchD_001553ff_caseD_1:
    auVar17 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
              ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                        (puVar14,pppppppuVar12);
    pppppppuVar7 = (ulonglong *******)puVar14;
    if (auVar17._0_8_ == 0) goto LAB_00155380;
  }
  bVar4 = 0;
  puVar14 = (undefined1 *)pppppppuVar7;
  goto LAB_00155dbb;
LAB_00155634:
  if (local_140 == (ulonglong *******)0xffffffffffffffff) {
    pppppppuVar15 = *(ulonglong ********)((longlong)puVar14 + 0x20);
    pppppppuVar7 = *(ulonglong ********)((longlong)puVar14 + 0x28);
    pppppppuVar9 = pppppppuVar15;
    if (pppppppuVar7 < pppppppuVar15) {
      ppppppuVar1 = *pppppppuVar8;
      pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar15;
      while( true ) {
        pppppppuVar7 = (ulonglong *******)((longlong)pppppppuVar7 + 1);
        uVar11 = (ulonglong)*(byte *)(((longlong)ppppppuVar1 - 1U) + (longlong)pppppppuVar7);
        if (0x3a < uVar11) goto LAB_00156281;
        if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
        *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar7;
        if (pppppppuVar7 == pppppppuVar15) goto LAB_00155d89;
      }
      if (uVar11 == 0x3a) {
        *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar7;
        pppppppuVar8 = (ulonglong *******)&local_118;
        deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                  (pppppppuVar8,puVar14);
        auVar17._8_8_ = extraout_RDX_02;
        auVar17._0_8_ = pppppppuStack_110;
        puVar14 = (undefined1 *)pppppppuVar8;
        if (local_118 != (ulonglong *******)0xffffffffffffffff) {
          local_140 = local_118;
          local_f8 = pppppppuStack_110;
          pppppppuVar9 = local_120;
          local_70 = local_108;
          goto LAB_00155363;
        }
      }
      else {
LAB_00156281:
        local_f0 = (ulonglong *******)0x6;
        auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(puVar14,&local_f0);
      }
    }
    else {
LAB_00155d89:
      local_f0 = (ulonglong *******)0x3;
      auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(puVar14,&local_f0);
    }
    pppppppuVar15 = (ulonglong *******)0xffffffffffffffff;
    bVar4 = 0;
    goto LAB_00155dbb;
  }
  local_68 = (ulonglong *******)0x1144f3;
LAB_0015619f:
  local_118 = local_68;
  pppppppuStack_110 = local_e0;
  local_f0 = (ulonglong *******)&local_118;
  local_e8 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  puVar14 = anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171;
  pppppppuVar9 = local_68;
  auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                      (anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171,&local_f0);
LAB_001559ba:
  bVar4 = 0;
  goto LAB_00155dbb;
LAB_00155717:
  pppppppuVar12 = (ulonglong *******)((longlong)pppppppuVar12 + 1);
  uVar11 = (ulonglong)*(byte *)(((longlong)ppppppuVar1 - 1U) + (longlong)pppppppuVar12);
  if (0x3a < uVar11) goto LAB_001561f1;
  if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) goto LAB_00155758;
  *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar12;
  if (pppppppuVar12 == pppppppuVar7) goto LAB_00155d52;
  goto LAB_00155717;
LAB_00155758:
  if (uVar11 == 0x3a) {
    *(ulonglong ********)((longlong)puVar14 + 0x28) = pppppppuVar12;
    pppppppuVar8 = (ulonglong *******)&local_118;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
              (pppppppuVar8,puVar14);
    auVar17._8_8_ = extraout_RDX_03;
    auVar17._0_8_ = pppppppuStack_110;
    local_148 = local_118;
    if (local_118 == (ulonglong *******)0xffffffffffffffff) goto LAB_0015612f;
    local_90 = local_108;
    unaff_R12 = pppppppuStack_110;
    goto LAB_0015535e;
  }
LAB_001561f1:
  local_f0 = (ulonglong *******)0x6;
  auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar14,&local_f0);
  pppppppuVar8 = (ulonglong *******)puVar14;
LAB_00155d79:
  local_148 = (ulonglong *******)0xffffffffffffffff;
  goto LAB_00155880;
LAB_00155d52:
  local_f0 = (ulonglong *******)0x3;
  auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar14,&local_f0);
  pppppppuVar8 = (ulonglong *******)puVar14;
  goto LAB_00155d79;
code_r0x00155610:
  local_50 = local_108;
  local_120 = pppppppuStack_110;
  goto LAB_00155380;
LAB_0015612f:
  local_148 = (ulonglong *******)0xffffffffffffffff;
  pppppppuVar9 = (ulonglong *******)0xffffffffffffffff;
LAB_00155880:
  bVar4 = 0;
  puVar14 = (undefined1 *)pppppppuVar8;
LAB_00155dbb:
  uVar10 = auVar17._8_8_;
  uVar6 = auVar17._0_8_;
  if ((undefined1 *)((longlong)local_128 + -1) < (undefined1 *)0xfffffffffffffffd) {
    uVar10 = 1;
    (*(code *)PTR___rust_dealloc_00219c40)();
    puVar14 = (undefined1 *)local_130;
  }
  auVar19._8_8_ = uVar10;
  auVar19._0_8_ = uVar6;
  local_128 = local_148;
joined_r0x0015606e:
  if ((ulonglong)((longlong)local_100 + -1) < (undefined1 *)0xfffffffffffffffe) {
    uVar10 = 1;
    (*(code *)PTR___rust_dealloc_00219c40)();
    auVar19._8_8_ = uVar10;
    auVar19._0_8_ = uVar6;
    puVar14 = (undefined1 *)local_120;
  }
  pppppppuVar8 = local_f8;
  local_130 = auVar19._8_8_;
  if ((undefined1 *)((longlong)pppppppuVar15 + -1) < (undefined1 *)0xfffffffffffffffe) {
    local_130 = (ulonglong *******)0x1;
    (*(code *)PTR___rust_dealloc_00219c40)();
    puVar14 = (undefined1 *)pppppppuVar8;
  }
  bVar4 = (undefined1 *)((longlong)local_128 + 1) < (undefined1 *)0x2 | bVar4;
  pppppppuVar8 = (ulonglong *******)
                 CONCAT71((int7)((ulonglong)((longlong)local_128 + 1) >> 8),bVar4);
  local_120 = (ulonglong *******)puVar14;
  if (bVar4 == 0) {
    local_130 = (ulonglong *******)0x1;
    pppppppuVar8 = (ulonglong *******)(*(code *)PTR___rust_dealloc_00219c40)();
    local_120 = unaff_R12;
  }
  local_90 = pppppppuVar9;
  local_f8 = pppppppuVar8;
  local_148 = (ulonglong *******)0xffffffffffffffff;
  param_5 = param_6;
  unaff_R12 = auVar19._0_8_;
LAB_00155e49:
  param_1 = local_80;
  auVar18._8_8_ = local_128;
  auVar18._0_8_ = unaff_R12;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_d8 = local_140;
  local_f0 = local_148;
  local_e8 = unaff_R12;
  local_e0 = local_90;
  local_d0 = local_f8;
  local_c8 = param_5;
  local_c0 = pppppppuVar15;
  pppppppuStack_b8 = local_120;
  local_b0 = in_R11;
  local_a8 = local_128;
  local_a0 = local_130;
  local_98 = in_R10;
  pppppppuVar9 = (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_map();
  if (local_148 == (ulonglong *******)0xffffffffffffffff) {
    if (pppppppuVar9 != (ulonglong *******)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (pppppppuVar9);
    }
  }
  else {
    if (pppppppuVar9 == (ulonglong *******)0x0) {
      local_b0 = in_R11;
      local_c0 = pppppppuVar15;
      param_6 = in_R10;
LAB_00155eef:
      local_128 = auVar18._8_8_;
      param_1[2] = local_90;
      param_1[3] = local_140;
      param_1[4] = local_f8;
      param_1[5] = param_5;
      param_1[6] = local_c0;
      param_1[7] = local_120;
      param_1[8] = local_b0;
      param_1[9] = local_128;
      param_1[10] = local_130;
      param_1[0xb] = param_6;
      *param_1 = local_148;
      param_1[1] = auVar18._0_8_;
      return param_1;
    }
    uVar16 = extraout_XMM0_Da_00;
    if (local_148 != (ulonglong *******)0x0) {
      uVar16 = (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da_00,1);
    }
    if (local_140 != (ulonglong *******)0x0) {
      uVar16 = (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
    }
    if (pppppppuVar15 != (ulonglong *******)0x0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar16,1);
    }
    if ((undefined1 *)((longlong)local_128 + -1) < (undefined1 *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00219c40)((undefined1 *)((longlong)local_128 + -1),1);
    }
    unaff_R12 = pppppppuVar9;
    param_1 = local_80;
  }
LAB_00155fca:
  uVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (unaff_R12,param_2);
LAB_00155fd5:
  param_1[1] = uVar6;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


