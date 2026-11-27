// 0054c850 build_tools_list_response

/* WARNING: Instruction at (ram,0x00550218) overlaps instruction at (ram,0x00550215)
    */
/* WARNING: Removing unreachable block (ram,0x0055024f) */
/* WARNING: Switch with 1 destination removed at 0x00550215 */
/* WARNING: Switch with 1 destination removed at 0x0055022a */
/* WARNING: Switch with 1 destination removed at 0x0055023f */
/* WARNING: Switch with 1 destination removed at 0x00550254 */
/* WARNING: Switch with 1 destination removed at 0x00550269 */
/* WARNING: Switch with 1 destination removed at 0x0055027e */
/* craggemini_core[66f3c71560d70857]::mcp_stdio::build_tools_list_response */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::mcp_stdio::build_tools_list_response
          (undefined8 *param_1,undefined8 param_2,ulonglong *param_3)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  ulonglong *puVar12;
  undefined8 unaff_R13;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar14;
  char local_1c8;
  char cStack_1c7;
  undefined2 uStack_1c6;
  undefined2 uStack_1c4;
  undefined1 uStack_1c2;
  undefined1 uStack_1c1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  int iStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  uint local_198;
  int iStack_194;
  uint uStack_190;
  int iStack_18c;
  ushort local_17a;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 *puStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0 [14];
  
  local_110 = param_2;
  if ((char)param_3[1] == -1) {
    local_f0 = *param_3;
    local_108 = 0;
    local_f8 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar10 != (undefined4 *)0x0) {
      *(undefined4 *)((longlong)puVar10 + 3) = 0x6370726e;
      *puVar10 = 0x6e6f736a;
      local_158 = 7;
      local_148 = 7;
      puStack_150 = puVar10;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar11 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar11 == (undefined2 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0054da22;
      }
      *(undefined1 *)(puVar11 + 1) = 0x30;
      *puVar11 = 0x2e32;
      local_1c8 = '\x03';
      uStack_1c0._0_4_ = 3;
      uStack_1c0._4_4_ = 0;
      uStack_1b8._0_4_ = (uint)puVar11;
      uStack_1b8._4_4_ = (int)((ulonglong)puVar11 >> 0x20);
      uStack_1b0 = 3;
      iStack_1ac = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1a8,&local_108,&local_158,&local_1c8);
      if ((char)local_1a8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1a8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar10 != (undefined4 *)0x0) {
        *(undefined2 *)puVar10 = 0x6469;
        local_158 = 2;
        local_148 = 2;
        puStack_150 = puVar10;
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_1c8,local_110);
        if (local_1c8 == -1) {
          local_1a8 = (undefined8 *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,&local_1a8,
                     &PTR_s_src_mcp_stdio_rs_0078d960);
          goto LAB_0054da22;
        }
        local_198 = (uint)uStack_1b8;
        iStack_194 = uStack_1b8._4_4_;
        uStack_190 = uStack_1b0;
        iStack_18c = iStack_1ac;
        local_1a8 = (undefined8 *)
                    CONCAT44(CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4)),
                             CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8)));
        uStack_1a0 = (undefined *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_1c8,&local_108,&local_158,&local_1a8);
        if (local_1c8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_1c8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar10 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar10 + 1) = 0x72;
          *puVar10 = 0x6f727265;
          local_130 = 5;
          local_120 = 5;
          local_178 = 0;
          local_168 = 0;
          uStack_128 = puVar10;
          local_d8 = param_1;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = 0x65646f63;
            local_158 = 4;
            local_148 = 4;
            local_1c8 = '\x02';
            uStack_1c0._0_4_ = 1;
            uStack_1c0._4_4_ = 0;
            uStack_1b8._0_4_ = 0xffff8300;
            uStack_1b8._4_4_ = -1;
            puStack_150 = puVar10;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_1a8,&local_178,&local_158,&local_1c8);
            if ((char)local_1a8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_1a8);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar10 != (undefined4 *)0x0) {
              *(undefined4 *)((longlong)puVar10 + 3) = 0x65676173;
              *puVar10 = 0x7373656d;
              local_158 = 7;
              local_148 = 7;
              local_1a8 = &local_f0;
              uStack_1a0 = PTR_fmt_007991d0;
              puStack_150 = puVar10;
              (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da_00,&local_1a8);
              iVar5 = uStack_1b8._4_4_;
              uVar4 = (uint)uStack_1b8;
              lVar3 = CONCAT17(uStack_1c1,
                               CONCAT16(uStack_1c2,
                                        CONCAT24(uStack_1c4,
                                                 CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8))
                                                )));
              local_118 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
              lVar9 = CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
              if (-1 < uStack_1b8._4_4_) {
                if (lVar9 == 0) {
                  lVar8 = 1;
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar8 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar8 == 0) goto LAB_0054cc13;
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar9);
                }
                local_1c8 = '\x03';
                uStack_1c0._0_4_ = uVar4;
                uStack_1c0._4_4_ = iVar5;
                uStack_1b8._0_4_ = (uint)lVar8;
                uStack_1b8._4_4_ = (int)((ulonglong)lVar8 >> 0x20);
                uStack_1b0 = uVar4;
                iStack_1ac = iVar5;
                uVar14 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                         ::insert(&local_1a8,&local_178,&local_158,&local_1c8);
                param_1 = local_d8;
                if ((char)local_1a8 != -1) {
                  uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <serde_json[dc3825464c436029]::value::Value>(&local_1a8);
                }
                if (lVar3 != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
                }
                uStack_1c0._0_4_ = (undefined4)local_178;
                uStack_1c0._4_4_ = local_178._4_4_;
                uStack_1b8._0_4_ = (undefined4)uStack_170;
                uStack_1b8._4_4_ = uStack_170._4_4_;
                uStack_1b0 = (uint)local_168;
                iStack_1ac = (int)(local_168 >> 0x20);
                local_1c8 = '\x05';
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_1a8,&local_108,&local_130,&local_1c8);
                if ((char)local_1a8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_1a8);
                }
                uStack_1c1 = (undefined1)local_108;
                uStack_1c0._0_4_ = (uint)((ulonglong)local_108 >> 8);
                uStack_1c0._4_3_ = (undefined3)((ulonglong)local_108 >> 0x28);
                uStack_1c0._7_1_ = SUB81(uStack_100,0);
                uStack_1b8._0_4_ = (uint)((ulonglong)uStack_100 >> 8);
                uStack_1b8._4_3_ = (undefined3)((ulonglong)uStack_100 >> 0x28);
                uStack_1b8._7_1_ = (undefined1)local_f8;
                uStack_1b0 = (uint)((ulonglong)local_f8 >> 8);
                iStack_1ac._0_3_ = (undefined3)((ulonglong)local_f8 >> 0x28);
                *param_1 = 0;
                *(undefined1 *)(param_1 + 2) = 5;
                param_1[4] = uStack_100;
                param_1[5] = local_f8;
                *(uint *)((longlong)param_1 + 0x11) =
                     CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8));
                *(uint *)((longlong)param_1 + 0x15) =
                     CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4));
                *(uint *)((longlong)param_1 + 0x19) = (uint)uStack_1c0;
                *(int *)((longlong)param_1 + 0x1d) = uStack_1c0._4_4_;
                uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
                if ((1 < ((uint)local_f0 & 3) - 2) &&
                   (uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0), (local_f0 & 3) != 0))
                {
                  uStack_1c0 = local_f0 - 1;
                  local_1c8 = '\x03';
                  (*(code *)PTR_drop_00799040)();
                }
                goto LAB_0054d83e;
              }
LAB_0054cc13:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0054da22;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0054da22;
        }
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0054da22;
  }
  puVar12 = param_3 + 1;
  if ((ushort)*param_3 != 200) {
    local_158 = *puVar12;
    puStack_150 = (undefined4 *)param_3[2];
    local_148 = param_3[3];
    uStack_140 = param_3[4];
    local_17a = (ushort)*param_3;
    extract_http_error_message(local_a0,&local_158,"MCP bridge failed to list tools",0x1f);
    local_b8 = 0;
    local_a8 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar7 + 3) = 0x6370726e;
      *(undefined4 *)puVar7 = 0x6e6f736a;
      local_178 = 7;
      local_168 = 7;
      uStack_170 = puVar7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar11 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar11 == (undefined2 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0054da22;
      }
      *(undefined1 *)(puVar11 + 1) = 0x30;
      *puVar11 = 0x2e32;
      local_1c8 = '\x03';
      uStack_1c0._0_4_ = 3;
      uStack_1c0._4_4_ = 0;
      uStack_1b8._0_4_ = (uint)puVar11;
      uStack_1b8._4_4_ = (int)((ulonglong)puVar11 >> 0x20);
      uStack_1b0 = 3;
      iStack_1ac = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1a8,&local_b8,&local_178,&local_1c8);
      if ((char)local_1a8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1a8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined2 *)puVar7 = 0x6469;
        local_178 = 2;
        local_168 = 2;
        uStack_170 = puVar7;
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_1c8,local_110);
        if (local_1c8 == -1) {
          local_1a8 = (undefined8 *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,&local_1a8,
                     &PTR_s_src_mcp_stdio_rs_0078d948);
          goto LAB_0054da22;
        }
        local_198 = (uint)uStack_1b8;
        iStack_194 = uStack_1b8._4_4_;
        uStack_190 = uStack_1b0;
        iStack_18c = iStack_1ac;
        local_1a8 = (undefined8 *)
                    CONCAT44(CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4)),
                             CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8)));
        uStack_1a0 = (undefined *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_1c8,&local_b8,&local_178,&local_1a8);
        if (local_1c8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_1c8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar10 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar10 + 1) = 0x72;
          *puVar10 = 0x6f727265;
          local_d0 = 5;
          local_c0 = 5;
          local_f0 = 0;
          local_e0 = 0;
          local_118 = puVar10;
          local_d8 = param_1;
          puStack_c8 = puVar10;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined4 *)puVar7 = 0x65646f63;
            local_178 = 4;
            local_168 = 4;
            local_1c8 = '\x02';
            uStack_1c0._0_4_ = 1;
            uStack_1c0._4_4_ = 0;
            uStack_1b8._0_4_ = 0xffff8300;
            uStack_1b8._4_4_ = -1;
            uStack_170 = puVar7;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_1a8,&local_f0,&local_178,&local_1c8);
            if ((char)local_1a8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_1a8);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined4 *)((longlong)puVar7 + 3) = 0x65676173;
              *(undefined4 *)puVar7 = 0x7373656d;
              local_178 = 7;
              local_168 = 7;
              local_1c8 = (char)&local_17a;
              cStack_1c7 = (char)((ulonglong)&local_17a >> 8);
              uStack_1c6 = (undefined2)((ulonglong)&local_17a >> 0x10);
              uStack_1c4 = (undefined2)((ulonglong)&local_17a >> 0x20);
              uStack_1c2 = (undefined1)((ulonglong)&local_17a >> 0x30);
              uStack_1c1 = (undefined1)((ulonglong)&local_17a >> 0x38);
              uStack_1c0._0_4_ = (uint)PTR_fmt_00799c28;
              uStack_1c0._4_4_ = (int)((ulonglong)PTR_fmt_00799c28 >> 0x20);
              uStack_1b0 = 0x5502a0;
              iStack_1ac = 0;
              uStack_170 = puVar7;
              uStack_1b8 = local_a0;
              (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da_01,&local_1c8);
              iVar5 = iStack_194;
              uVar4 = local_198;
              puVar7 = local_1a8;
              lVar3 = CONCAT44(iStack_194,local_198);
              if (iStack_194 < 0) {
LAB_0054cf5f:
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0054da22;
              }
              if (lVar3 == 0) {
                lVar9 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar9 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar9 == 0) goto LAB_0054cf5f;
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar3);
              }
              local_1c8 = '\x03';
              uStack_1c0._0_4_ = uVar4;
              uStack_1c0._4_4_ = iVar5;
              uStack_1b8._0_4_ = (uint)lVar9;
              uStack_1b8._4_4_ = (int)((ulonglong)lVar9 >> 0x20);
              uStack_1b0 = uVar4;
              iStack_1ac = iVar5;
              uVar14 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                       ::insert(&local_1a8,&local_f0,&local_178,&local_1c8);
              if ((char)local_1a8 != -1) {
                uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <serde_json[dc3825464c436029]::value::Value>(&local_1a8);
              }
              if (puVar7 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = 0x61746164;
                local_108 = 4;
                local_f8 = 4;
                local_130 = 0;
                local_120 = 0;
                uStack_100 = puVar10;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar7 != (undefined8 *)0x0) {
                  *puVar7 = 0x6174735f70747468;
                  *(undefined4 *)((longlong)puVar7 + 7) = 0x73757461;
                  local_178 = 0xb;
                  local_168 = 0xb;
                  local_1c8 = '\x02';
                  uStack_1c0._0_4_ = 0;
                  uStack_1c0._4_4_ = 0;
                  uStack_1b8._0_4_ = (uint)local_17a;
                  uStack_1b8._4_4_ = 0;
                  uStack_170 = puVar7;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_1a8,&local_130,&local_178,&local_1c8);
                  if ((char)local_1a8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_1a8);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar7 != (undefined8 *)0x0) {
                    *(undefined8 *)((longlong)puVar7 + 6) = 0x726f7272655f6d61;
                    *puVar7 = 0x6d61657274737075;
                    local_178 = 0xe;
                    local_168 = 0xe;
                    uStack_170 = puVar7;
                    <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                    ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                              (&local_1c8,&local_158);
                    if (local_1c8 == -1) {
                      local_1a8 = (undefined8 *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
                      (*(code *)PTR_unwrap_failed_00799028)
                                (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,
                                 &local_1a8,&PTR_s_src_mcp_stdio_rs_0078d948);
                      goto LAB_0054da22;
                    }
                    local_198 = (uint)uStack_1b8;
                    iStack_194 = uStack_1b8._4_4_;
                    uStack_190 = uStack_1b0;
                    iStack_18c = iStack_1ac;
                    local_1a8 = (undefined8 *)
                                CONCAT44(CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4)),
                                         CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8)));
                    uStack_1a0 = (undefined *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_1c8,&local_130,&local_178,&local_1a8);
                    if (local_1c8 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_1c8);
                    }
                    uStack_1c0._0_4_ = (undefined4)local_130;
                    uStack_1c0._4_4_ = local_130._4_4_;
                    uStack_1b8._0_4_ = (undefined4)uStack_128;
                    uStack_1b8._4_4_ = uStack_128._4_4_;
                    uStack_1b0 = (uint)local_120;
                    iStack_1ac = (int)((ulonglong)local_120 >> 0x20);
                    local_1c8 = '\x05';
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_1a8,&local_f0,&local_108,&local_1c8);
                    if ((char)local_1a8 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_1a8);
                    }
                    uStack_1c0._0_4_ = (undefined4)local_f0;
                    uStack_1c0._4_4_ = local_f0._4_4_;
                    uStack_1b8._0_4_ = (undefined4)uStack_e8;
                    uStack_1b8._4_4_ = uStack_e8._4_4_;
                    uStack_1b0 = (uint)local_e0;
                    iStack_1ac = (int)((ulonglong)local_e0 >> 0x20);
                    local_1c8 = '\x05';
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_1a8,&local_b8,&local_d0,&local_1c8);
                    param_1 = local_d8;
                    if ((char)local_1a8 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_1a8);
                    }
                    uStack_1c1 = (undefined1)local_b8;
                    uStack_1c0._0_4_ = (uint)((ulonglong)local_b8 >> 8);
                    uStack_1c0._4_3_ = (undefined3)((ulonglong)local_b8 >> 0x28);
                    uStack_1c0._7_1_ = (undefined1)uStack_b0;
                    uStack_1b8._0_4_ = (uint)((ulonglong)uStack_b0 >> 8);
                    uStack_1b8._4_3_ = (undefined3)((ulonglong)uStack_b0 >> 0x28);
                    uStack_1b8._7_1_ = (undefined1)local_a8;
                    uStack_1b0 = (uint)((ulonglong)local_a8 >> 8);
                    iStack_1ac._0_3_ = (undefined3)((ulonglong)local_a8 >> 0x28);
                    *param_1 = 0;
                    *(undefined1 *)(param_1 + 2) = 5;
                    uVar14 = CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8));
                    param_1[4] = uStack_b0;
                    param_1[5] = local_a8;
                    *(undefined4 *)((longlong)param_1 + 0x11) = uVar14;
                    *(uint *)((longlong)param_1 + 0x15) =
                         CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4));
                    *(uint *)((longlong)param_1 + 0x19) = (uint)uStack_1c0;
                    *(int *)((longlong)param_1 + 0x1d) = uStack_1c0._4_4_;
                    if (local_a0[0] != 0) {
                      (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
                    }
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_158);
                    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
                    goto LAB_0054d83e;
                  }
                }
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0054da22;
              }
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0054da22;
        }
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0054da22;
  }
  local_178 = *puVar12;
  uStack_170 = (undefined8 *)param_3[2];
  local_168 = param_3[3];
  uStack_160 = (undefined4)param_3[4];
  uStack_15c = *(undefined4 *)((longlong)param_3 + 0x24);
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)((int)*puVar12,&local_178);
  if (((pcVar6 == (char *)0x0) || (*pcVar6 != '\x02')) || (*(longlong *)(pcVar6 + 8) != 0)) {
    uVar13 = 0;
  }
  else {
    unaff_R13 = *(undefined8 *)(pcVar6 + 0x10);
    uVar13 = 1;
  }
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,&local_178);
  if (pcVar6 == (char *)0x0) {
    puStack_150 = (undefined4 *)0x0;
    local_148 = 8;
    uStack_140 = 0;
    local_158 = CONCAT71(local_158._1_7_,4);
    goto LAB_0054d50e;
  }
  cVar1 = *pcVar6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\x01':
    cStack_1c7 = pcVar6[1];
    break;
  case '\x02':
    uStack_1c0._0_4_ = *(uint *)(pcVar6 + 8);
    uStack_1c0._4_4_ = *(int *)(pcVar6 + 0xc);
    uStack_1b8._0_4_ = *(uint *)(pcVar6 + 0x10);
    uStack_1b8._4_4_ = *(int *)(pcVar6 + 0x14);
    break;
  case '\x03':
    (*(code *)PTR_clone_00798fd0)();
    break;
  case '\x04':
    <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
    <alloc[12e961f32105355]::alloc::Global>
              (&uStack_1c0,*(undefined8 *)(pcVar6 + 0x10),*(undefined8 *)(pcVar6 + 0x18));
    break;
  case '\x05':
    if (*(longlong *)(pcVar6 + 0x18) == 0) {
      uStack_1c0._0_4_ = 0;
      uStack_1c0._4_4_ = 0;
      uStack_1b0 = 0;
      iStack_1ac = 0;
    }
    else {
      if (*(longlong *)(pcVar6 + 8) == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_0054da22;
      }
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone::clone_subtree::
      <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                (&uStack_1c0,*(longlong *)(pcVar6 + 8),*(undefined8 *)(pcVar6 + 0x10));
    }
    break;
  case '\x06':
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar2)();
    return puVar7;
  case '\a':
    uVar13 = 0x37;
    pcVar6 = &UNK_0019af00;
    goto <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str;
  case '\b':
    pcVar6 = &UNK_0019af00;
    uVar13 = 0x46;
    goto <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str;
  case '\t':
    pcVar6 = &UNK_0019af00;
    uVar13 = 0x4c;
    goto <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str;
  case '\n':
    uVar13 = 0x4b;
    goto <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str;
  case '\v':
    pcVar6 = &UNK_0019af00;
    uVar13 = 0x4b;
    goto <core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str;
  case '\f':
    pcVar6 = &UNK_0019af00;
    uVar13 = 0x48;
<core[c0acaeba6ab4c2e0]::fmt::Formatter_as_core[c0acaeba6ab4c2e0]::fmt::Write>_write_str:
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)(pcVar6 + 8) + 0x18))
                       (*(code **)(*(longlong *)(pcVar6 + 8) + 0x18),uVar13);
    return puVar7;
  }
  local_148 = CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8);
  uStack_140 = CONCAT44(iStack_1ac,uStack_1b0);
  local_158 = CONCAT26(CONCAT11(uStack_1c1,uStack_1c2),
                       CONCAT42(CONCAT22(uStack_1c4,uStack_1c6),CONCAT11(cStack_1c7,cVar1)));
  puStack_150 = (undefined4 *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
  local_1c8 = cVar1;
LAB_0054d50e:
  local_d0 = 0;
  local_c0 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar10 != (undefined4 *)0x0) {
    *(undefined4 *)((longlong)puVar10 + 3) = 0x6370726e;
    *puVar10 = 0x6e6f736a;
    local_130 = 7;
    local_120 = 7;
    uStack_128 = puVar10;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar11 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar11 == (undefined2 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0054da22;
    }
    *(undefined1 *)(puVar11 + 1) = 0x30;
    *puVar11 = 0x2e32;
    local_1c8 = '\x03';
    uStack_1c0._0_4_ = 3;
    uStack_1c0._4_4_ = 0;
    uStack_1b8._0_4_ = (uint)puVar11;
    uStack_1b8._4_4_ = (int)((ulonglong)puVar11 >> 0x20);
    uStack_1b0 = 3;
    iStack_1ac = 0;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_1a8,&local_d0,&local_130,&local_1c8);
    if ((char)local_1a8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_1a8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar10 != (undefined4 *)0x0) {
      *(undefined2 *)puVar10 = 0x6469;
      local_130 = 2;
      local_120 = 2;
      uStack_128 = puVar10;
      <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_1c8,local_110);
      if (local_1c8 == -1) {
        local_1a8 = (undefined8 *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,&local_1a8,
                   &PTR_s_src_mcp_stdio_rs_0078d930);
        goto LAB_0054da22;
      }
      local_198 = (uint)uStack_1b8;
      iStack_194 = uStack_1b8._4_4_;
      uStack_190 = uStack_1b0;
      iStack_18c = iStack_1ac;
      local_1a8 = (undefined8 *)
                  CONCAT44(CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4)),
                           CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8)));
      uStack_1a0 = (undefined *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1c8,&local_d0,&local_130,&local_1a8);
      if (local_1c8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1c8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar10 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar10 + 1) = 0x746c;
        *puVar10 = 0x75736572;
        local_f0 = 6;
        local_e0 = 6;
        local_108 = 0;
        local_f8 = 0;
        uStack_e8 = puVar10;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar10 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
        }
        else {
          *(undefined1 *)(puVar10 + 1) = 0x73;
          *puVar10 = 0x6c6f6f74;
          local_130 = 5;
          local_120 = 5;
          uStack_128 = puVar10;
          <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
          ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_1c8,&local_158)
          ;
          if (local_1c8 != -1) {
            local_198 = (uint)uStack_1b8;
            iStack_194 = uStack_1b8._4_4_;
            uStack_190 = uStack_1b0;
            iStack_18c = iStack_1ac;
            local_1a8 = (undefined8 *)
                        CONCAT44(CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4)),
                                 CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8)));
            uStack_1a0 = (undefined *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_1c8,&local_108,&local_130,&local_1a8);
            if (local_1c8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_1c8);
            }
            uStack_1c0._0_4_ = (undefined4)local_108;
            uStack_1c0._4_4_ = local_108._4_4_;
            uStack_1b8._0_4_ = (undefined4)uStack_100;
            uStack_1b8._4_4_ = uStack_100._4_4_;
            uStack_1b0 = (uint)local_f8;
            iStack_1ac = (int)((ulonglong)local_f8 >> 0x20);
            local_1c8 = '\x05';
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_1a8,&local_d0,&local_f0,&local_1c8);
            if ((char)local_1a8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_1a8);
            }
            uStack_1c1 = (undefined1)local_d0;
            uStack_1c0._0_4_ = (uint)((ulonglong)local_d0 >> 8);
            uStack_1c0._4_3_ = (undefined3)((ulonglong)local_d0 >> 0x28);
            uStack_1c0._7_1_ = SUB81(puStack_c8,0);
            uStack_1b8._0_4_ = (uint)((ulonglong)puStack_c8 >> 8);
            uStack_1b8._4_3_ = (undefined3)((ulonglong)puStack_c8 >> 0x28);
            uStack_1b8._7_1_ = (undefined1)local_c0;
            uStack_1b0 = (uint)((ulonglong)local_c0 >> 8);
            iStack_1ac._0_3_ = (undefined3)((ulonglong)local_c0 >> 0x28);
            *param_1 = uVar13;
            param_1[1] = unaff_R13;
            *(undefined1 *)(param_1 + 2) = 5;
            *(uint *)((longlong)param_1 + 0x11) =
                 CONCAT22(uStack_1c6,CONCAT11(cStack_1c7,local_1c8));
            *(uint *)((longlong)param_1 + 0x15) =
                 CONCAT13(uStack_1c1,CONCAT12(uStack_1c2,uStack_1c4));
            *(uint *)((longlong)param_1 + 0x19) = (uint)uStack_1c0;
            *(int *)((longlong)param_1 + 0x1d) = uStack_1c0._4_4_;
            param_1[4] = puStack_c8;
            param_1[5] = local_c0;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_158);
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_178);
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
LAB_0054d83e:
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_110);
            return param_1;
          }
          local_1a8 = (undefined8 *)CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0);
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,&local_1a8,
                     &PTR_s_src_mcp_stdio_rs_0078d930);
        }
        goto LAB_0054da22;
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0054da22:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


