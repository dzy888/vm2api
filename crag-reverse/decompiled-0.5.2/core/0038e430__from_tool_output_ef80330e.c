// 0038e430 from_tool_output

/* <craggemini_core[66f3c71560d70857]::mcp::McpToolResult>::from_tool_output */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>::from_tool_output
          (longlong *param_1,char *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  char ******ppppppcVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  char *******pppppppcVar6;
  char *******pppppppcVar7;
  char *******pppppppcVar8;
  undefined4 *puVar9;
  char *******pppppppcVar10;
  byte bVar11;
  ulonglong uVar12;
  char ******ppppppcVar13;
  longlong lVar14;
  char *******pppppppcVar15;
  ulonglong uVar16;
  code *pcVar17;
  longlong lVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined8 local_140;
  undefined8 uStack_138;
  char *******pppppppcStack_130;
  undefined8 uStack_128;
  char *******local_120;
  char *******pppppppcStack_118;
  char *******local_110;
  char *******local_108;
  char *******pppppppcStack_100;
  char *******local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e1;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined4 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char *******local_90;
  char *******local_88;
  char *******local_80;
  char *******local_78;
  undefined4 local_6c;
  char *******local_68;
  char ******local_60;
  char *******local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  longlong *local_38;
  
  local_e0 = 0;
  lStack_d8 = 8;
  local_d0 = 0;
  local_6c = param_3;
  if (*param_2 == '\x03') {
    local_120 = (char *******)0x0;
    local_110 = (char *******)0x0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0x65707974;
      local_b0 = 4;
      uStack_a0 = 4;
      uStack_a8 = puVar9;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pppppppcVar10 = (char *******)(*(code *)PTR___rust_alloc_00799000)();
      if (pppppppcVar10 == (char *******)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0038ffe7;
      }
      *(undefined4 *)pppppppcVar10 = 0x74786574;
      local_140 = (char *******)CONCAT71(local_140._1_7_,3);
      uStack_138 = (undefined **)&DAT_00000004;
      uStack_128 = (char *******)&DAT_00000004;
      pppppppcStack_130 = pppppppcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_108,&local_120,&local_b0,&local_140);
      if ((char)local_108 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_108);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0x74786574;
        local_b0 = 4;
        uStack_a0 = 4;
        lVar18 = *(longlong *)(param_2 + 0x18);
        uStack_a8 = puVar9;
        if (lVar18 < 0) {
LAB_0038f701:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0038ffe7;
        }
        if (lVar18 == 0) {
          lVar14 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar14 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar14 == 0) goto LAB_0038f701;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar18);
        }
        local_140 = (char *******)CONCAT71(local_140._1_7_,3);
        uStack_138 = (undefined **)lVar18;
        pppppppcStack_130 = (char *******)lVar14;
        uStack_128 = (char *******)lVar18;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_108,&local_120,&local_b0,&local_140);
        if ((char)local_108 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_108);
        }
        lVar18 = local_d0;
        uStack_138 = (undefined **)local_120;
        pppppppcStack_130 = pppppppcStack_118;
        uStack_128 = local_110;
        local_140 = (char *******)CONCAT71(local_140._1_7_,5);
        if (local_d0 == local_e0) {
          (*(code *)PTR_grow_one_00799310)();
        }
LAB_0038fa81:
        puVar1 = (undefined8 *)(lStack_d8 + 0x10 + lVar18 * 0x20);
        *puVar1 = pppppppcStack_130;
        puVar1[1] = uStack_128;
        puVar9 = (undefined4 *)(lStack_d8 + lVar18 * 0x20);
        *puVar9 = (int)local_140;
        puVar9[1] = local_140._4_4_;
        puVar9[2] = (undefined4)uStack_138;
        puVar9[3] = uStack_138._4_4_;
        local_d0 = lVar18 + 1;
        goto joined_r0x0038faab;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    if (*param_2 != '\x04') {
      local_120 = (char *******)0x0;
      local_110 = (char *******)0x0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0x65707974;
        local_b0 = 4;
        uStack_a0 = 4;
        uStack_a8 = puVar9;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppcVar10 = (char *******)(*(code *)PTR___rust_alloc_00799000)();
        if (pppppppcVar10 == (char *******)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0038ffe7;
        }
        *(undefined4 *)pppppppcVar10 = 0x74786574;
        local_140 = (char *******)CONCAT71(local_140._1_7_,3);
        uStack_138 = (undefined **)&DAT_00000004;
        uStack_128 = (char *******)&DAT_00000004;
        pppppppcStack_130 = pppppppcVar10;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_108,&local_120,&local_b0,&local_140);
        if ((char)local_108 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_108);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0x74786574;
          local_b0 = 4;
          uStack_a0 = 4;
          local_108 = (char *******)0x0;
          pppppppcStack_100 = (char *******)0x1;
          local_f8 = (char *******)0x0;
          pppppppcStack_130 = (char *******)0x60000020;
          uStack_138 = &PTR_<alloc[12e961f32105355]::string::String>_00787a78;
          local_140 = (char *******)&local_108;
          uStack_a8 = puVar9;
          cVar4 = (*(code *)PTR_fmt_00799758)();
          pppppppcVar8 = local_f8;
          pppppppcVar10 = local_108;
          if (cVar4 != '\0') {
            (*(code *)PTR_unwrap_failed_00799028)
                      (&DAT_00787800,&local_e1,
                       &
                       PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_00787aa8
                      );
            goto LAB_0038ffe7;
          }
          local_80 = pppppppcStack_100;
          if ((longlong)local_f8 < 0) {
LAB_0038f88e:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0038ffe7;
          }
          if (local_f8 == (char *******)0x0) {
            lVar18 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar18 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar18 == 0) goto LAB_0038f88e;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,pppppppcVar8);
          }
          local_140 = (char *******)CONCAT71(local_140._1_7_,3);
          uStack_138 = (undefined **)pppppppcVar8;
          uStack_128 = pppppppcVar8;
          pppppppcStack_130 = (char *******)lVar18;
          uVar19 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                   ::insert(&local_108,&local_120,&local_b0,&local_140);
          if ((char)local_108 != -1) {
            uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <serde_json[dc3825464c436029]::value::Value>(&local_108);
          }
          if (pppppppcVar10 != (char *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
          }
          lVar18 = local_d0;
          uStack_138 = (undefined **)local_120;
          pppppppcStack_130 = pppppppcStack_118;
          uStack_128 = local_110;
          local_140 = (char *******)CONCAT71(local_140._1_7_,5);
          if (local_d0 == local_e0) {
            (*(code *)PTR_grow_one_00799310)();
          }
          goto LAB_0038fa81;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0038ffe7;
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      pppppppcVar10 = *(char ********)(param_2 + 0x10);
      local_80 = pppppppcVar10 + *(longlong *)(param_2 + 0x18) * 4;
      pcVar17 = (code *)PTR___rust_alloc_00799000;
      local_38 = param_1;
      do {
        puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
        if (*(char *)pppppppcVar10 != '\x03') {
          if (*(char *)pppppppcVar10 == '\x05') {
            pppppppcVar8 = (char *******)pppppppcVar10[1];
            local_90 = pppppppcVar10;
            local_78 = pppppppcVar8;
            if (pppppppcVar8 != (char *******)0x0) {
              local_68 = (char *******)pppppppcVar10[2];
              local_88 = local_68;
              while( true ) {
                local_40 = (ulonglong)*(ushort *)((longlong)pppppppcVar8 + 0x272);
                uVar12 = (ulonglong)((uint)*(ushort *)((longlong)pppppppcVar8 + 0x272) * 8);
                lVar18 = uVar12 * 3;
                uVar16 = 0xffffffffffffffff;
                pppppppcVar10 = pppppppcVar8 + 0x2d;
                pppppppcVar6 = pppppppcVar8 + -1;
                do {
                  pppppppcVar7 = pppppppcVar6;
                  if (lVar18 == 0) {
                    uVar16 = local_40;
                    goto LAB_0038e5b9;
                  }
                  ppppppcVar13 = pppppppcVar10[2];
                  lVar14 = (longlong)ppppppcVar13 - 4;
                  if ((char ******)0x3 < ppppppcVar13) {
                    ppppppcVar13 = (char ******)0x4;
                  }
                  iVar5 = (*(code *)PTR_memcmp_00799528)(uVar12,ppppppcVar13);
                  pcVar17 = (code *)PTR___rust_alloc_00799000;
                  pppppppcVar15 = (char *******)-lVar14;
                  if (iVar5 != 0) {
                    pppppppcVar15 = (char *******)(longlong)iVar5;
                  }
                  bVar11 = (0 < (longlong)pppppppcVar15) - ((longlong)pppppppcVar15 < 0);
                  uVar12 = (ulonglong)bVar11;
                  uVar16 = uVar16 + 1;
                  lVar18 = lVar18 + -0x18;
                  pppppppcVar10 = pppppppcVar10 + 3;
                  pppppppcVar6 = pppppppcVar7 + 4;
                } while (bVar11 == 1);
                if (bVar11 == 0) break;
LAB_0038e5b9:
                pcVar17 = (code *)PTR___rust_alloc_00799000;
                if (local_88 == (char *******)0x0) goto LAB_0038eaf8;
                pppppppcVar8 = (char *******)pppppppcVar8[uVar16 + 0x4f];
                local_88 = (char *******)((longlong)local_88 + -1);
              }
              if (*(char *)(pppppppcVar7 + 1) == '\x03') {
                ppppppcVar13 = pppppppcVar7[3];
                ppppppcVar2 = pppppppcVar7[4];
                if (ppppppcVar2 == (char ******)0x5) {
                  if (*(char *)((longlong)ppppppcVar13 + 4) == 'e' &&
                      *(int *)ppppppcVar13 == 0x67616d69) {
                    <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
                    ::search_tree::<str>(&local_140,local_78,local_68,"source",6);
                    puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
                    if ((int)local_140 == 1) {
                    }
                    else {
                      pppppppcVar15 = (char *******)uStack_138;
                      if (*(char *)(uStack_138 + (longlong)uStack_128 * 4) == '\x05') {
                        pppppppcVar15 = (char *******)(uStack_138 + (longlong)uStack_128 * 4);
                        if (pppppppcVar15[1] != (char ******)0x0) {
                          <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
                          ::search_tree::<str>
                                    (&local_140,pppppppcVar15[1],pppppppcVar15[2],"media_type",10);
                          if (((int)local_140 == 1) ||
                             (*(char *)(uStack_138 + (longlong)uStack_128 * 4) != '\x03')) {
                            ppppppcVar13 = (char ******)0x0;
                          }
                          else {
                            ppppppcVar13 = (char ******)uStack_138[(longlong)uStack_128 * 4 + 2];
                            pppppppcVar8 = (char *******)uStack_138[(longlong)uStack_128 * 4 + 3];
                          }
                          if (pppppppcVar15[1] != (char ******)0x0) {
                            <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
                            ::search_tree::<str>
                                      (&local_140,pppppppcVar15[1],pppppppcVar15[2],&DAT_0018e098,4)
                            ;
                            if ((((int)local_140 != 1) && (ppppppcVar13 != (char ******)0x0)) &&
                               (*(char *)(uStack_138 + (longlong)uStack_128 * 4) == '\x03')) {
                              local_50 = *(undefined4 *)(uStack_138 + (longlong)uStack_128 * 4 + 2);
                              uStack_4c = *(undefined4 *)
                                           ((longlong)uStack_138 +
                                           (longlong)uStack_128 * 0x20 + 0x14);
                              uStack_48 = *(undefined4 *)(uStack_138 + (longlong)uStack_128 * 4 + 3)
                              ;
                              uStack_44 = *(undefined4 *)
                                           ((longlong)uStack_138 +
                                           (longlong)uStack_128 * 0x20 + 0x1c);
                              local_c8 = (undefined4 *)0x0;
                              local_b8 = 0;
                              local_60 = ppppppcVar13;
                              local_58 = pppppppcVar8;
                              (*(code *)puVar3)();
                              pppppppcVar8 = (char *******)(*pcVar17)();
                              pppppppcVar10 = local_90;
                              if (pppppppcVar8 != (char *******)0x0) {
                                *(undefined4 *)pppppppcVar8 = 0x65707974;
                                local_120 = (char *******)&DAT_00000004;
                                local_110 = (char *******)&DAT_00000004;
                                pppppppcStack_118 = pppppppcVar8;
                                serde_json[dc3825464c436029]::value::to_value::<&&str>
                                          (&local_140,&PTR_s_image_00787970);
                                puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
                                if ((char)local_140 == -1) {
                                  local_108 = (char *******)uStack_138;
                                  (*(code *)PTR_unwrap_failed_00799028)
                                            (&
                                             PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0
                                             ,&local_108,
                                             &
                                             PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787980
                                            );
                                  goto LAB_0038ffe7;
                                }
                                local_f8 = pppppppcStack_130;
                                uStack_f0 = (undefined4)uStack_128;
                                uStack_ec = uStack_128._4_4_;
                                local_108 = local_140;
                                pppppppcStack_100 = (char *******)uStack_138;
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_140,&local_c8,&local_120,&local_108);
                                if ((char)local_140 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_140);
                                }
                                (*(code *)puVar3)();
                                pppppppcVar8 = (char *******)(*pcVar17)();
                                if (pppppppcVar8 != (char *******)0x0) {
                                  *pppppppcVar8 = (char ******)0x65707954656d696d;
                                  local_120 = (char *******)&DAT_00000008;
                                  local_110 = (char *******)&DAT_00000008;
                                  pppppppcStack_118 = pppppppcVar8;
                                  serde_json[dc3825464c436029]::value::to_value::<&&str>
                                            (&local_140,&local_60);
                                  puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
                                  if ((char)local_140 == -1) {
                                    local_108 = (char *******)uStack_138;
                                    (*(code *)PTR_unwrap_failed_00799028)
                                              (&
                                               PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0
                                               ,&local_108,
                                               &
                                               PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787980
                                              );
                                    goto LAB_0038ffe7;
                                  }
                                  local_f8 = pppppppcStack_130;
                                  uStack_f0 = (undefined4)uStack_128;
                                  uStack_ec = uStack_128._4_4_;
                                  local_108 = local_140;
                                  pppppppcStack_100 = (char *******)uStack_138;
                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                  ::insert(&local_140,&local_c8,&local_120,&local_108);
                                  if ((char)local_140 != -1) {
                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                    <serde_json[dc3825464c436029]::value::Value>(&local_140);
                                  }
                                  (*(code *)puVar3)();
                                  pppppppcVar8 = (char *******)(*pcVar17)();
                                  if (pppppppcVar8 != (char *******)0x0) {
                                    *(undefined4 *)pppppppcVar8 = 0x61746164;
                                    local_120 = (char *******)&DAT_00000004;
                                    local_110 = (char *******)&DAT_00000004;
                                    pppppppcStack_118 = pppppppcVar8;
                                    serde_json[dc3825464c436029]::value::to_value::<&&str>
                                              (&local_140,&local_50);
                                    if ((char)local_140 == -1) {
                                      local_108 = (char *******)uStack_138;
                                      (*(code *)PTR_unwrap_failed_00799028)
                                                (&
                                                 PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0
                                                 ,&local_108,
                                                 &
                                                 PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787980
                                                );
                                      goto LAB_0038ffe7;
                                    }
                                    local_f8 = pppppppcStack_130;
                                    uStack_f0 = (undefined4)uStack_128;
                                    uStack_ec = uStack_128._4_4_;
                                    local_108 = local_140;
                                    pppppppcStack_100 = (char *******)uStack_138;
                                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                    ::insert(&local_140,&local_c8,&local_120,&local_108);
                                    if ((char)local_140 != -1) {
                                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                      <serde_json[dc3825464c436029]::value::Value>(&local_140);
                                    }
                                    uStack_98 = local_b8;
                                    uStack_a8 = local_c8;
                                    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
                                    local_b0 = CONCAT71(local_b0._1_7_,5);
                                    ::
                                    <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                                    ::push_mut(&local_e0,&local_b0);
                                    goto LAB_0038ed70;
                                  }
                                }
                              }
                              (*(code *)PTR_handle_error_00798ff0)();
                              goto LAB_0038ffe7;
                            }
                          }
                        }
                      }
                    }
                    pppppppcVar10 = local_90;
                    if (local_90[1] == (char ******)0x0) goto LAB_0038ed70;
                    <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
                    ::search_tree::<str>(&local_140,local_90[1],local_90[2],"mimeType",8);
                    if (((int)local_140 == 1) ||
                       (*(char *)(uStack_138 + (longlong)uStack_128 * 4) != '\x03')) {
                      ppppppcVar13 = (char ******)0x0;
                    }
                    else {
                      ppppppcVar13 = (char ******)uStack_138[(longlong)uStack_128 * 4 + 2];
                      pppppppcVar15 = (char *******)uStack_138[(longlong)uStack_128 * 4 + 3];
                    }
                    if (pppppppcVar10[1] == (char ******)0x0) goto LAB_0038ed70;
                    <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
                    ::search_tree::<str>
                              (&local_140,pppppppcVar10[1],pppppppcVar10[2],&DAT_0018e098,4);
                    if ((((int)local_140 == 1) || (ppppppcVar13 == (char ******)0x0)) ||
                       (*(char *)(uStack_138 + (longlong)uStack_128 * 4) != '\x03'))
                    goto LAB_0038ed70;
                    local_50 = *(undefined4 *)(uStack_138 + (longlong)uStack_128 * 4 + 2);
                    uStack_4c = *(undefined4 *)
                                 ((longlong)uStack_138 + (longlong)uStack_128 * 0x20 + 0x14);
                    uStack_48 = *(undefined4 *)(uStack_138 + (longlong)uStack_128 * 4 + 3);
                    uStack_44 = *(undefined4 *)
                                 ((longlong)uStack_138 + (longlong)uStack_128 * 0x20 + 0x1c);
                    local_c8 = (undefined4 *)0x0;
                    local_b8 = 0;
                    local_60 = ppppppcVar13;
                    local_58 = pppppppcVar15;
                    (*(code *)puVar3)();
                    pppppppcVar10 = (char *******)(*pcVar17)();
                    if (pppppppcVar10 != (char *******)0x0) {
                      *(undefined4 *)pppppppcVar10 = 0x65707974;
                      local_120 = (char *******)&DAT_00000004;
                      local_110 = (char *******)&DAT_00000004;
                      pppppppcStack_118 = pppppppcVar10;
                      serde_json[dc3825464c436029]::value::to_value::<&&str>
                                (&local_140,&PTR_s_image_00787970);
                      if ((char)local_140 == -1) {
                        local_108 = (char *******)uStack_138;
                        (*(code *)PTR_unwrap_failed_00799028)
                                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0,
                                   &local_108,
                                   &
                                   PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787998
                                  );
                        goto LAB_0038ffe7;
                      }
                      local_f8 = pppppppcStack_130;
                      uStack_f0 = (undefined4)uStack_128;
                      uStack_ec = uStack_128._4_4_;
                      local_108 = local_140;
                      pppppppcStack_100 = (char *******)uStack_138;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_140,&local_c8,&local_120,&local_108);
                      if ((char)local_140 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_140);
                      }
                      (*(code *)puVar3)();
                      pppppppcVar10 = (char *******)(*pcVar17)();
                      if (pppppppcVar10 != (char *******)0x0) {
                        *pppppppcVar10 = (char ******)0x65707954656d696d;
                        local_120 = (char *******)&DAT_00000008;
                        local_110 = (char *******)&DAT_00000008;
                        pppppppcStack_118 = pppppppcVar10;
                        serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_140,&local_60)
                        ;
                        if ((char)local_140 == -1) {
                          local_108 = (char *******)uStack_138;
                          (*(code *)PTR_unwrap_failed_00799028)
                                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0,
                                     &local_108,
                                     &
                                     PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787998
                                    );
                          goto LAB_0038ffe7;
                        }
                        local_f8 = pppppppcStack_130;
                        uStack_f0 = (undefined4)uStack_128;
                        uStack_ec = uStack_128._4_4_;
                        local_108 = local_140;
                        pppppppcStack_100 = (char *******)uStack_138;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_140,&local_c8,&local_120,&local_108);
                        if ((char)local_140 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_140);
                        }
                        (*(code *)puVar3)();
                        pppppppcVar10 = (char *******)(*pcVar17)();
                        if (pppppppcVar10 != (char *******)0x0) {
                          *(undefined4 *)pppppppcVar10 = 0x61746164;
                          local_120 = (char *******)&DAT_00000004;
                          local_110 = (char *******)&DAT_00000004;
                          pppppppcStack_118 = pppppppcVar10;
                          serde_json[dc3825464c436029]::value::to_value::<&&str>
                                    (&local_140,&local_50);
                          if ((char)local_140 == -1) {
                            local_108 = (char *******)uStack_138;
                            (*(code *)PTR_unwrap_failed_00799028)
                                      (&PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0,
                                       &local_108,
                                       &
                                       PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787998
                                      );
                            goto LAB_0038ffe7;
                          }
                          local_f8 = pppppppcStack_130;
                          uStack_f0 = (undefined4)uStack_128;
                          uStack_ec = uStack_128._4_4_;
                          local_108 = local_140;
                          pppppppcStack_100 = (char *******)uStack_138;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_140,&local_c8,&local_120,&local_108);
                          if ((char)local_140 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_140);
                          }
                          pppppppcVar10 = local_90;
                          lVar18 = local_d0;
                          uStack_98 = local_b8;
                          uStack_a8 = local_c8;
                          uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
                          local_b0 = CONCAT71(local_b0._1_7_,5);
                          if (local_d0 == local_e0) {
                            (*(code *)PTR_grow_one_00799310)();
                          }
                          goto LAB_0038ea02;
                        }
                      }
                    }
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_0038ffe7;
                  }
                }
                else if ((ppppppcVar2 == (char ******)0x4) && (*(int *)ppppppcVar13 == 0x74786574))
                {
                  <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
                  ::search_tree::<str>(&local_140,local_78,local_68,"text",4);
                  pppppppcVar10 = local_90;
                  puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
                  if ((int)local_140 == 1) {
                    goto LAB_0038ed70;
                  }
                  if (*(char *)(uStack_138 + (longlong)uStack_128 * 4) != '\x03') goto LAB_0038ed70;
                  local_50 = *(undefined4 *)(uStack_138 + (longlong)uStack_128 * 4 + 2);
                  uStack_4c = *(undefined4 *)
                               ((longlong)uStack_138 + (longlong)uStack_128 * 0x20 + 0x14);
                  uStack_48 = *(undefined4 *)(uStack_138 + (longlong)uStack_128 * 4 + 3);
                  uStack_44 = *(undefined4 *)
                               ((longlong)uStack_138 + (longlong)uStack_128 * 0x20 + 0x1c);
                  local_c8 = (undefined4 *)0x0;
                  local_b8 = 0;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pppppppcVar8 = (char *******)(*pcVar17)();
                  if (pppppppcVar8 != (char *******)0x0) {
                    *(undefined4 *)pppppppcVar8 = 0x65707974;
                    local_120 = (char *******)&DAT_00000004;
                    local_110 = (char *******)&DAT_00000004;
                    pppppppcStack_118 = pppppppcVar8;
                    serde_json[dc3825464c436029]::value::to_value::<&&str>
                              (&local_140,
                               &
                               PTR_anon_1b4a85c95499e1b671cf4fa96a1b6d0f_188_llvm_10049508496007902178_007876a0
                              );
                    if ((char)local_140 == -1) {
                      local_108 = (char *******)uStack_138;
                      (*(code *)PTR_unwrap_failed_00799028)
                                (&PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0,
                                 &local_108,
                                 &
                                 PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_007879b0
                                );
                      goto LAB_0038ffe7;
                    }
                    local_f8 = pppppppcStack_130;
                    uStack_f0 = (undefined4)uStack_128;
                    uStack_ec = uStack_128._4_4_;
                    local_108 = local_140;
                    pppppppcStack_100 = (char *******)uStack_138;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_140,&local_c8,&local_120,&local_108);
                    if ((char)local_140 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_140);
                    }
                    (*(code *)puVar3)();
                    pppppppcVar8 = (char *******)(*pcVar17)();
                    if (pppppppcVar8 != (char *******)0x0) {
                      *(undefined4 *)pppppppcVar8 = 0x74786574;
                      local_120 = (char *******)&DAT_00000004;
                      local_110 = (char *******)&DAT_00000004;
                      pppppppcStack_118 = pppppppcVar8;
                      serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_140,&local_50);
                      if ((char)local_140 == -1) {
                        local_108 = (char *******)uStack_138;
                        (*(code *)PTR_unwrap_failed_00799028)
                                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0,
                                   &local_108,
                                   &
                                   PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_007879b0
                                  );
                        goto LAB_0038ffe7;
                      }
                      local_f8 = pppppppcStack_130;
                      uStack_f0 = (undefined4)uStack_128;
                      uStack_ec = uStack_128._4_4_;
                      local_108 = local_140;
                      pppppppcStack_100 = (char *******)uStack_138;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_140,&local_c8,&local_120,&local_108);
                      if ((char)local_140 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_140);
                      }
                      lVar18 = local_d0;
                      uStack_98 = local_b8;
                      uStack_a8 = local_c8;
                      uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
                      local_b0 = CONCAT71(local_b0._1_7_,5);
                      if (local_d0 == local_e0) {
                        (*(code *)PTR_grow_one_00799310)();
                      }
                      goto LAB_0038ea02;
                    }
                  }
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_0038ffe7;
                }
              }
            }
LAB_0038eaf8:
            puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
            local_c8 = (undefined4 *)0x0;
            local_b8 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pppppppcVar8 = (char *******)(*pcVar17)();
            pppppppcVar10 = local_90;
            if (pppppppcVar8 != (char *******)0x0) {
              *(undefined4 *)pppppppcVar8 = 0x65707974;
              local_120 = (char *******)&DAT_00000004;
              local_110 = (char *******)&DAT_00000004;
              pppppppcStack_118 = pppppppcVar8;
              (*(code *)puVar3)();
              pppppppcVar8 = (char *******)(*pcVar17)();
              if (pppppppcVar8 == (char *******)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0038ffe7;
              }
              *(undefined4 *)pppppppcVar8 = 0x74786574;
              local_140 = (char *******)CONCAT71(local_140._1_7_,3);
              uStack_138 = (undefined **)&DAT_00000004;
              uStack_128 = (char *******)&DAT_00000004;
              pppppppcStack_130 = pppppppcVar8;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_108,&local_c8,&local_120,&local_140);
              if ((char)local_108 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_108);
              }
              (*(code *)puVar3)();
              pppppppcVar8 = (char *******)(*pcVar17)();
              if (pppppppcVar8 != (char *******)0x0) {
                *(undefined4 *)pppppppcVar8 = 0x74786574;
                local_120 = (char *******)&DAT_00000004;
                local_110 = (char *******)&DAT_00000004;
                local_108 = (char *******)0x0;
                pppppppcStack_100 = (char *******)0x1;
                local_f8 = (char *******)0x0;
                pppppppcStack_130 = (char *******)0x60000020;
                uStack_138 = &PTR_<alloc[12e961f32105355]::string::String>_00787a78;
                local_140 = (char *******)&local_108;
                pppppppcStack_118 = pppppppcVar8;
                cVar4 = (*(code *)PTR_fmt_00799758)();
                pppppppcVar6 = local_f8;
                pppppppcVar8 = local_108;
                if (cVar4 == '\0') {
                  if (-1 < (longlong)local_f8) {
                    if (local_f8 == (char *******)0x0) {
                      pppppppcVar7 = (char *******)0x1;
                    }
                    else {
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pppppppcVar7 = (char *******)(*(code *)PTR___rust_alloc_00799000)();
                      if (pppppppcVar7 == (char *******)0x0) goto LAB_0038f95b;
                      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,pppppppcVar6);
                      pppppppcVar10 = local_90;
                    }
                    local_140 = (char *******)CONCAT71(local_140._1_7_,3);
                    uStack_138 = (undefined **)pppppppcVar6;
                    uStack_128 = pppppppcVar6;
                    pppppppcStack_130 = pppppppcVar7;
                    uVar19 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                             ::insert(&local_108,&local_c8,&local_120,&local_140);
                    if ((char)local_108 != -1) {
                      uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                               <serde_json[dc3825464c436029]::value::Value>(&local_108);
                    }
                    if (pppppppcVar8 != (char *******)0x0) {
                      (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
                    }
                    lVar18 = local_d0;
                    uStack_98 = local_b8;
                    uStack_a8 = local_c8;
                    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
                    local_b0 = CONCAT71(local_b0._1_7_,5);
                    if (local_d0 == local_e0) {
                      (*(code *)PTR_grow_one_00799310)();
                    }
LAB_0038ed3c:
                    puVar1 = (undefined8 *)(lStack_d8 + 0x10 + lVar18 * 0x20);
                    *puVar1 = uStack_a0;
                    puVar1[1] = uStack_98;
                    puVar9 = (undefined4 *)(lStack_d8 + lVar18 * 0x20);
                    *puVar9 = (undefined4)local_b0;
                    puVar9[1] = local_b0._4_4_;
                    puVar9[2] = (undefined4)uStack_a8;
                    puVar9[3] = uStack_a8._4_4_;
                    local_d0 = lVar18 + 1;
                    pcVar17 = (code *)PTR___rust_alloc_00799000;
                    goto LAB_0038ed70;
                  }
LAB_0038f95b:
                  (*(code *)PTR_handle_error_00798ff0)();
                }
                else {
                  (*(code *)PTR_unwrap_failed_00799028)
                            (&DAT_00787800,&local_e1,
                             &
                             PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_00787aa8
                            );
                }
                goto LAB_0038ffe7;
              }
            }
            (*(code *)PTR_handle_error_00798ff0)();
          }
          else {
            local_c8 = (undefined4 *)0x0;
            local_b8 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pppppppcVar8 = (char *******)(*pcVar17)();
            if (pppppppcVar8 != (char *******)0x0) {
              *(undefined4 *)pppppppcVar8 = 0x65707974;
              local_120 = (char *******)&DAT_00000004;
              local_110 = (char *******)&DAT_00000004;
              pppppppcStack_118 = pppppppcVar8;
              (*(code *)puVar3)();
              pppppppcVar8 = (char *******)(*pcVar17)();
              if (pppppppcVar8 == (char *******)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0038ffe7;
              }
              *(undefined4 *)pppppppcVar8 = 0x74786574;
              local_140 = (char *******)CONCAT71(local_140._1_7_,3);
              uStack_138 = (undefined **)&DAT_00000004;
              uStack_128 = (char *******)&DAT_00000004;
              pppppppcStack_130 = pppppppcVar8;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_108,&local_c8,&local_120,&local_140);
              if ((char)local_108 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_108);
              }
              (*(code *)puVar3)();
              pppppppcVar8 = (char *******)(*pcVar17)();
              if (pppppppcVar8 != (char *******)0x0) {
                *(undefined4 *)pppppppcVar8 = 0x74786574;
                local_120 = (char *******)&DAT_00000004;
                local_110 = (char *******)&DAT_00000004;
                local_108 = (char *******)0x0;
                pppppppcStack_100 = (char *******)0x1;
                local_f8 = (char *******)0x0;
                pppppppcStack_130 = (char *******)0x60000020;
                uStack_138 = &PTR_<alloc[12e961f32105355]::string::String>_00787a78;
                local_140 = (char *******)&local_108;
                pppppppcStack_118 = pppppppcVar8;
                cVar4 = (*(code *)PTR_fmt_00799758)();
                pppppppcVar6 = local_f8;
                pppppppcVar8 = local_108;
                if (cVar4 == '\0') {
                  local_88 = pppppppcStack_100;
                  if (-1 < (longlong)local_f8) {
                    if (local_f8 == (char *******)0x0) {
                      pppppppcVar7 = (char *******)0x1;
                    }
                    else {
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pppppppcVar7 = (char *******)(*(code *)PTR___rust_alloc_00799000)();
                      if (pppppppcVar7 == (char *******)0x0) goto LAB_0038f947;
                      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,pppppppcVar6);
                    }
                    local_140 = (char *******)CONCAT71(local_140._1_7_,3);
                    uStack_138 = (undefined **)pppppppcVar6;
                    uStack_128 = pppppppcVar6;
                    pppppppcStack_130 = pppppppcVar7;
                    uVar19 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                             ::insert(&local_108,&local_c8,&local_120,&local_140);
                    if ((char)local_108 != -1) {
                      uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                               <serde_json[dc3825464c436029]::value::Value>(&local_108);
                    }
                    if (pppppppcVar8 != (char *******)0x0) {
                      (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
                    }
                    lVar18 = local_d0;
                    uStack_98 = local_b8;
                    uStack_a8 = local_c8;
                    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
                    local_b0 = CONCAT71(local_b0._1_7_,5);
                    if (local_d0 == local_e0) {
                      (*(code *)PTR_grow_one_00799310)();
                    }
                    goto LAB_0038ed3c;
                  }
LAB_0038f947:
                  (*(code *)PTR_handle_error_00798ff0)();
                }
                else {
                  (*(code *)PTR_unwrap_failed_00799028)
                            (&DAT_00787800,&local_e1,
                             &
                             PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_00787aa8
                            );
                }
                goto LAB_0038ffe7;
              }
            }
            (*(code *)PTR_handle_error_00798ff0)();
          }
          goto LAB_0038ffe7;
        }
        local_88 = (char *******)pppppppcVar10[2];
        pppppppcVar8 = (char *******)pppppppcVar10[3];
        local_c8 = (undefined4 *)0x0;
        local_b8 = 0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppcVar6 = (char *******)(*pcVar17)();
        if (pppppppcVar6 == (char *******)0x0) {
LAB_0038fdf2:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0038ffe7;
        }
        *(undefined4 *)pppppppcVar6 = 0x65707974;
        local_120 = (char *******)&DAT_00000004;
        local_110 = (char *******)&DAT_00000004;
        pppppppcStack_118 = pppppppcVar6;
        (*(code *)puVar3)();
        pppppppcVar6 = (char *******)(*pcVar17)();
        if (pppppppcVar6 == (char *******)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0038ffe7;
        }
        *(undefined4 *)pppppppcVar6 = 0x74786574;
        local_140 = (char *******)CONCAT71(local_140._1_7_,3);
        uStack_138 = (undefined **)&DAT_00000004;
        uStack_128 = (char *******)&DAT_00000004;
        pppppppcStack_130 = pppppppcVar6;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_108,&local_c8,&local_120,&local_140);
        puVar3 = PTR___rust_alloc_00799000;
        if ((char)local_108 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_108);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppcVar6 = (char *******)(*(code *)puVar3)();
        if (pppppppcVar6 == (char *******)0x0) goto LAB_0038fdf2;
        *(undefined4 *)pppppppcVar6 = 0x74786574;
        local_120 = (char *******)&DAT_00000004;
        local_110 = (char *******)&DAT_00000004;
        pppppppcStack_118 = pppppppcVar6;
        if ((longlong)pppppppcVar8 < 0) {
LAB_0038f933:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0038ffe7;
        }
        if (pppppppcVar8 == (char *******)0x0) {
          pppppppcVar6 = (char *******)0x1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pppppppcVar6 = (char *******)(*(code *)PTR___rust_alloc_00799000)();
          if (pppppppcVar6 == (char *******)0x0) goto LAB_0038f933;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,pppppppcVar8);
        }
        local_140 = (char *******)CONCAT71(local_140._1_7_,3);
        uStack_138 = (undefined **)pppppppcVar8;
        pppppppcStack_130 = pppppppcVar6;
        uStack_128 = pppppppcVar8;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_108,&local_c8,&local_120,&local_140);
        pcVar17 = (code *)PTR___rust_alloc_00799000;
        if ((char)local_108 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_108);
        }
        lVar18 = local_d0;
        uStack_98 = local_b8;
        uStack_a8 = local_c8;
        uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
        local_b0 = CONCAT71(local_b0._1_7_,5);
        if (local_d0 == local_e0) {
          (*(code *)PTR_grow_one_00799310)();
        }
LAB_0038ea02:
        puVar1 = (undefined8 *)(lStack_d8 + 0x10 + lVar18 * 0x20);
        *puVar1 = uStack_a0;
        puVar1[1] = uStack_98;
        puVar9 = (undefined4 *)(lStack_d8 + lVar18 * 0x20);
        *puVar9 = (undefined4)local_b0;
        puVar9[1] = local_b0._4_4_;
        puVar9[2] = (undefined4)uStack_a8;
        puVar9[3] = uStack_a8._4_4_;
        local_d0 = lVar18 + 1;
LAB_0038ed70:
        pppppppcVar10 = pppppppcVar10 + 4;
        param_1 = local_38;
      } while (pppppppcVar10 != local_80);
joined_r0x0038faab:
      if (local_d0 != 0) goto LAB_0038fc62;
    }
    local_120 = (char *******)0x0;
    local_110 = (char *******)0x0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0x65707974;
      local_b0 = 4;
      uStack_a0 = 4;
      uStack_a8 = puVar9;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pppppppcVar10 = (char *******)(*(code *)PTR___rust_alloc_00799000)();
      if (pppppppcVar10 == (char *******)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0038ffe7;
      }
      *(undefined4 *)pppppppcVar10 = 0x74786574;
      local_140 = (char *******)CONCAT71(local_140._1_7_,3);
      uStack_138 = (undefined **)&DAT_00000004;
      uStack_128 = (char *******)&DAT_00000004;
      pppppppcStack_130 = pppppppcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_108,&local_120,&local_b0,&local_140);
      if ((char)local_108 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_108);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0x74786574;
        local_b0 = 4;
        uStack_a0 = 4;
        local_140 = (char *******)CONCAT71(local_140._1_7_,3);
        uStack_138 = (undefined **)0x0;
        pppppppcStack_130 = (char *******)0x1;
        uStack_128 = (char *******)0x0;
        uStack_a8 = puVar9;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_108,&local_120,&local_b0,&local_140);
        if ((char)local_108 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_108);
        }
        lVar18 = local_d0;
        uStack_138 = (undefined **)local_120;
        pppppppcStack_130 = pppppppcStack_118;
        uStack_128 = local_110;
        local_140 = (char *******)CONCAT71(local_140._1_7_,5);
        if (local_d0 == local_e0) {
          (*(code *)PTR_grow_one_00799310)();
        }
        lVar14 = lVar18 * 0x20;
        puVar1 = (undefined8 *)(lStack_d8 + 0x10 + lVar14);
        *puVar1 = pppppppcStack_130;
        puVar1[1] = uStack_128;
        puVar1 = (undefined8 *)(lStack_d8 + lVar14);
        *puVar1 = local_140;
        puVar1[1] = uStack_138;
        local_d0 = lVar18 + 1;
LAB_0038fc62:
        param_1[2] = local_d0;
        *param_1 = local_e0;
        param_1[1] = lStack_d8;
        *(char *)(param_1 + 3) = (char)local_6c;
        return param_1;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_0038ffe7:
                    /* WARNING: Does not return */
  pcVar17 = (code *)invalidInstructionException();
  (*pcVar17)();
}


