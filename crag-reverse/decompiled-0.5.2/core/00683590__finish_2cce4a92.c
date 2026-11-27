// 00683590 finish

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::finish */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::finish
          (longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  ulonglong local_2c8;
  char *pcStack_2c0;
  undefined8 local_2b8;
  ulonglong uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined2 local_270;
  undefined1 local_26e;
  undefined1 local_26d;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_248;
  char *pcStack_240;
  undefined8 local_238;
  longlong local_230;
  longlong lStack_228;
  longlong local_220;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined1 *local_200;
  longlong local_1f8;
  char *local_1f0;
  ulonglong uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined4 local_19c;
  longlong *local_c8;
  char *local_c0;
  longlong local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  char *local_a0;
  longlong local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [48];
  
  if (*(char *)(param_2 + 0x129) != '\0') {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return param_1;
  }
  if (((*(char *)(param_2 + 0x12a) == '\0') && (*(longlong *)(param_2 + 0x90) == -1)) &&
     (*(char *)(param_2 + 300) == '\0')) {
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
              (&local_1d8,0x1f6,"empty_upstream_stream",0x15,
               "upstream stream completed without content or finish reason",0x3a);
    local_19d = 1;
    local_288 = local_1b8;
    uStack_284 = uStack_1b4;
    uStack_280 = uStack_1b0;
    uStack_27c = uStack_1ac;
    local_278 = local_1a8;
    local_270 = local_1a0;
    local_26e = local_19e;
    local_26d = 1;
    local_26c = local_19c;
    *(undefined1 *)(param_2 + 0x129) = 1;
    craggemini_core[66f3c71560d70857]::multiprotocol::render_sse_error_frame
              (param_1,param_2 + 0xa8,&local_2a8,*(undefined8 *)(param_2 + 0x20),
               *(undefined8 *)(param_2 + 0x28),*(undefined1 *)(param_2 + 0x128));
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Failure>
              (&local_2a8);
    return param_1;
  }
  local_230 = 0;
  lStack_228 = 8;
  local_220 = 0;
  if (*(byte *)(param_2 + 0xa8) < 2) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 8;
    return param_1;
  }
  ensure_started(param_2,&local_230);
  lVar14 = *(longlong *)(param_2 + 0xf0) + *(longlong *)(param_2 + 0xf8);
  plVar17 = (longlong *)(*(char **)(param_2 + 0xe8) + lVar14);
  if (*(longlong **)(param_2 + 0x100) != (longlong *)0x0) {
    plVar17 = *(longlong **)(param_2 + 0x100);
  }
  cVar9 = *(char *)(param_2 + 0xa8);
  if (cVar9 != '\x02') {
    if (cVar9 == '\x03') {
      (*(code *)PTR_clone_00798fd0)();
      uVar1 = *(undefined1 *)(param_2 + 0xa9);
      uVar2 = *(undefined1 *)(param_2 + 0xaa);
      close_responses_block(param_2,&local_230);
      craggemini_core[66f3c71560d70857]::multiprotocol::collect_sse_frames
                (&local_1d8,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),8,0,8,0)
      ;
      uVar21 = craggemini_core[66f3c71560d70857]::multiprotocol::render_openai_responses_json
                         (&local_268,&local_1d8,local_b0,local_a8,uVar1,uVar2,
                          *(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar21,&local_268);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      uVar20 = 0x12;
      local_1f0 = "response.completed";
      if ((*pcVar10 == '\x03') && (*(longlong *)(pcVar10 + 0x18) == 10)) {
        bVar4 = (short)(*(longlong **)(pcVar10 + 0x10))[1] == 0x6574;
        bVar5 = **(longlong **)(pcVar10 + 0x10) == 0x656c706d6f636e69;
        local_1f0 = "response.completed";
        if (bVar4 && bVar5) {
          local_1f0 = "response.incomplete";
        }
        uVar20 = (ulonglong)(bVar4 && bVar5) | 0x12;
      }
      local_218 = (char *)0x0;
      local_208 = 0;
      uStack_1e8 = uVar20;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 != (char *)0x0) {
        builtin_strncpy(pcVar10,"type",4);
        local_248 = 4;
        local_238 = 4;
        pcStack_240 = pcVar10;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar14 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar14 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0068544d;
        }
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,uVar20);
        local_2a8 = (char **)CONCAT71(local_2a8._1_7_,3);
        uStack_2a0 = (code *)uVar20;
        local_298 = (ulonglong *)lVar14;
        uStack_290 = (undefined *)uVar20;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_2c8,&local_218,&local_248,&local_2a8);
        if ((char)local_2c8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_2c8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar10 != (char *)0x0) {
          builtin_strncpy(pcVar10,"response",8);
          local_248 = 8;
          local_238 = 8;
          pcStack_240 = pcVar10;
          <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
          ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_2a8,&local_268)
          ;
          if ((char)local_2a8 != -1) {
            local_2b8 = (longlong)local_298;
            uStack_2b0 = (ulonglong)uStack_290;
            local_2c8 = (ulonglong)local_2a8;
            pcStack_2c0 = (char *)uStack_2a0;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_2a8,&local_218,&local_248,&local_2c8);
            if ((char)local_2a8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_2a8);
            }
            pcStack_2c0 = local_218;
            uStack_2b0 = local_208;
            local_2c8 = CONCAT71(local_2c8._1_7_,5);
            local_2a8 = &local_1f0;
            uStack_2a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            uStack_290 = PTR_fmt_00799758;
            local_298 = &local_2c8;
            (*(code *)PTR_format_inner_00799048)((undefined4)local_218,&local_2a8);
            (*(code *)PTR_from_00799298)();
            lVar14 = local_220;
            if (local_220 == local_230) {
              (*(code *)PTR_grow_one_0079a3a0)();
            }
            lVar15 = lVar14 * 0x20;
            puVar12 = (undefined4 *)(lStack_228 + 0x10 + lVar15);
            *puVar12 = (undefined4)local_298;
            puVar12[1] = local_298._4_4_;
            puVar12[2] = (undefined4)uStack_290;
            puVar12[3] = uStack_290._4_4_;
            puVar12 = (undefined4 *)(lStack_228 + lVar15);
            *puVar12 = (undefined4)local_2a8;
            puVar12[1] = local_2a8._4_4_;
            puVar12[2] = (undefined4)uStack_2a0;
            puVar12[3] = uStack_2a0._4_4_;
            local_220 = lVar14 + 1;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_2c8,local_78);
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_268);
            uVar21 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <craggemini_core[66f3c71560d70857]::multiprotocol::CollectedTurn>(&local_1d8);
            if (local_b8 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
            }
            goto LAB_006847af;
          }
          local_2c8 = (ulonglong)uStack_2a0;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_2c8,
                     &PTR_s_src_multiprotocol_rs_007912a8);
          goto LAB_0068544d;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0068544d;
    }
    if (cVar9 != '\x04') goto LAB_006847af;
    local_1f8 = lVar14;
    close_anthropic_block(param_2,&local_230);
    local_218 = (char *)0x0;
    local_208 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar10 != (char *)0x0) {
      builtin_strncpy(pcVar10,"type",4);
      local_2c8 = 4;
      local_2b8 = 4;
      pcStack_2c0 = pcVar10;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar11 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0068544d;
      }
      *(undefined8 *)((longlong)puVar11 + 5) = 0x61746c65645f6567;
      *puVar11 = 0x5f6567617373656d;
      local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,3);
      uStack_1d0 = 0xd;
      uStack_1cc = 0;
      uStack_1c8._0_4_ = SUB84(puVar11,0);
      uStack_1c8._4_4_ = (uint)((ulonglong)puVar11 >> 0x20);
      uStack_1c0 = 0xd;
      uStack_1bc = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_2a8,&local_218,&local_2c8,&local_1d8);
      if ((char)local_2a8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_2a8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 != (char *)0x0) {
        builtin_strncpy(pcVar10,"delta",5);
        local_248 = 5;
        local_238 = 5;
        local_268 = 0;
        local_258 = 0;
        pcStack_240 = pcVar10;
        local_c0 = pcVar10;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar10 != (char *)0x0) {
          builtin_strncpy(pcVar10,"stop_reason",0xb);
          local_2c8 = 0xb;
          local_2b8 = 0xb;
          uVar19 = 8;
          pcStack_2c0 = pcVar10;
          if (*(char *)(param_2 + 299) == '\0') {
            lVar14 = *(longlong *)(param_2 + 0x90);
            local_c8 = *(longlong **)(param_2 + 0x98);
            lVar15 = *(longlong *)(param_2 + 0xa0);
            plVar17 = (longlong *)0x0;
            if (lVar14 != -1) {
              plVar17 = local_c8;
            }
            cVar9 = craggemini_core[66f3c71560d70857]::multiprotocol::is_safety_finish_reason
                              (plVar17,lVar15);
            if (cVar9 == '\0') {
              if (lVar15 == 10 && lVar14 != -1) {
                uVar19 = (uint)((short)local_c8[1] == 0x534e && *local_c8 == 0x454b4f545f58414d) * 2
                         + 8;
              }
            }
            else {
              uVar19 = 7;
            }
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar14 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar14 == 0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0068544d;
          }
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,uVar19);
          local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,3);
          uStack_1cc = 0;
          uStack_1c8._0_4_ = (undefined4)lVar14;
          uStack_1c8._4_4_ = (uint)((ulonglong)lVar14 >> 0x20);
          uStack_1d0 = uVar19;
          uStack_1c0 = uVar19;
          uStack_1bc = uStack_1cc;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
          if ((char)local_2a8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_2a8);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar10 != (char *)0x0) {
            builtin_strncpy(pcVar10,"stop_sequence",0xd);
            local_2c8 = 0xd;
            local_2b8 = 0xd;
            pcStack_2c0 = pcVar10;
            <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
            ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_1d8,"");
            if ((char)local_1d8 == -1) {
              local_2a8 = (char **)CONCAT44(uStack_1cc,uStack_1d0);
              (*(code *)PTR_unwrap_failed_00799028)
                        (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_2a8,
                         &PTR_s_src_multiprotocol_rs_007912c0);
              goto LAB_0068544d;
            }
            local_298 = (ulonglong *)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8);
            uStack_290 = (undefined *)CONCAT44(uStack_1bc,uStack_1c0);
            local_2a8 = (char **)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
            uStack_2a0 = (code *)CONCAT44(uStack_1cc,uStack_1d0);
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_1d8,&local_268,&local_2c8,&local_2a8);
            if ((char)local_1d8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_1d8);
            }
            uStack_1d0 = (uint)local_268;
            uStack_1cc = local_268._4_4_;
            uStack_1c8._0_4_ = (undefined4)uStack_260;
            uStack_1c8._4_4_ = uStack_260._4_4_;
            uStack_1c0 = (uint)local_258;
            uStack_1bc = (undefined4)((ulonglong)local_258 >> 0x20);
            local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,5);
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_2a8,&local_218,&local_248,&local_1d8);
            if ((char)local_2a8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_2a8);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar10 == (char *)0x0) goto LAB_00685316;
            builtin_strncpy(pcVar10,"usage",5);
            local_248 = 5;
            local_238 = 5;
            lVar14 = *(longlong *)(param_2 + 0x108);
            pcStack_240 = pcVar10;
            if (lVar14 == 0) {
              local_268 = 0;
              local_258 = 0;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar10 == (char *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0068544d;
              }
              builtin_strncpy(pcVar10,"output_tokens",0xd);
              local_2c8 = 0xd;
              local_2b8 = 0xd;
              local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
              uStack_1d0 = 0;
              uStack_1cc = 0;
              uStack_1c8._0_4_ = (undefined4)local_1f8;
              uStack_1c8._4_4_ = (uint)((ulonglong)local_1f8 >> 0x20);
              pcStack_2c0 = pcVar10;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
              if ((char)local_2a8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_2a8);
              }
LAB_00684532:
              uStack_1d0 = (uint)local_268;
              uStack_1cc = local_268._4_4_;
              uStack_1c8._0_4_ = (undefined4)uStack_260;
              uStack_1c8._4_4_ = uStack_260._4_4_;
              uStack_1c0 = (uint)local_258;
              uStack_1bc = (undefined4)((ulonglong)local_258 >> 0x20);
              local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,5);
              <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
              ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                        (&local_2a8,&local_1d8);
              if ((char)local_2a8 == -1) {
                local_2c8 = (ulonglong)uStack_2a0;
                (*(code *)PTR_unwrap_failed_00799028)
                          (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_2c8,
                           &PTR_s_src_multiprotocol_rs_007912c0);
                goto LAB_0068544d;
              }
              local_2b8 = (longlong)local_298;
              uStack_2b0 = (ulonglong)uStack_290;
              local_2c8 = (ulonglong)local_2a8;
              pcStack_2c0 = (char *)uStack_2a0;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_2a8,&local_218,&local_248,&local_2c8);
              if ((char)local_2a8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_2a8);
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_1d8);
              pcStack_2c0 = local_218;
              local_2b8 = CONCAT44(uStack_20c,uStack_210);
              uStack_2b0 = local_208;
              local_2c8 = CONCAT71(local_2c8._1_7_,5);
              local_248 = 0;
              local_238 = 0;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar12 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar12 == (undefined4 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0068544d;
              }
              *puVar12 = 0x65707974;
              local_268 = 4;
              local_258 = 4;
              uStack_260 = puVar12;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar11 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0068544d;
              }
              *puVar11 = 0x5f6567617373656d;
              *(undefined4 *)(puVar11 + 1) = 0x706f7473;
              local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,3);
              uStack_1d0 = 0xc;
              uStack_1cc = 0;
              uStack_1c8._0_4_ = SUB84(puVar11,0);
              uStack_1c8._4_4_ = (uint)((ulonglong)puVar11 >> 0x20);
              uStack_1c0 = 0xc;
              uStack_1bc = 0;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_2a8,&local_248,&local_268,&local_1d8);
              if ((char)local_2a8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_2a8);
              }
              uStack_2a0 = (code *)local_248;
              local_298 = (ulonglong *)pcStack_240;
              uStack_290 = (undefined *)local_238;
              local_2a8 = (char **)CONCAT71(local_2a8._1_7_,5);
              uStack_1d0 = (uint)PTR_fmt_00799758;
              uStack_1cc = (undefined4)((ulonglong)PTR_fmt_00799758 >> 0x20);
              uStack_1c0 = uStack_1d0;
              uStack_1bc = uStack_1cc;
              local_1d8 = &local_2c8;
              uStack_1c8 = &local_2a8;
              (*(code *)PTR_format_inner_00799048)((undefined4)local_248,&local_1d8);
              (*(code *)PTR_from_00799298)();
              lVar14 = local_220;
              if (local_220 == local_230) {
                (*(code *)PTR_grow_one_0079a3a0)();
              }
              lVar15 = lVar14 * 0x20;
              plVar17 = (longlong *)(lStack_228 + 0x10 + lVar15);
              *plVar17 = (longlong)uStack_1c8;
              *(uint *)(plVar17 + 1) = uStack_1c0;
              *(undefined4 *)((longlong)plVar17 + 0xc) = uStack_1bc;
              plVar17 = (longlong *)(lStack_228 + lVar15);
              *plVar17 = (longlong)local_1d8;
              *(uint *)(plVar17 + 1) = uStack_1d0;
              *(undefined4 *)((longlong)plVar17 + 0xc) = uStack_1cc;
              local_220 = lVar14 + 1;
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_2a8,local_60);
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_2c8);
              goto LAB_006847af;
            }
            local_268 = 0;
            local_258 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar10 != (char *)0x0) {
              builtin_strncpy(pcVar10,"output_tokens",0xd);
              local_2c8 = 0xd;
              local_2b8 = 0xd;
              local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
              uStack_1d0 = 0;
              uStack_1cc = 0;
              uStack_1c8._0_4_ = (undefined4)local_1f8;
              uStack_1c8._4_4_ = (uint)((ulonglong)local_1f8 >> 0x20);
              pcStack_2c0 = pcVar10;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
              if ((char)local_2a8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_2a8);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              uVar7 = s_cache_read_input_tokens_001a4fbd._12_4_;
              uVar6 = s_cache_read_input_tokens_001a4fbd._8_4_;
              uVar21 = s_cache_read_input_tokens_001a4fbd._4_4_;
              if (pcVar10 != (char *)0x0) {
                *(undefined4 *)pcVar10 = s_cache_read_input_tokens_001a4fbd._0_4_;
                *(undefined4 *)(pcVar10 + 4) = uVar21;
                *(undefined4 *)(pcVar10 + 8) = uVar6;
                *(undefined4 *)(pcVar10 + 0xc) = uVar7;
                pcVar10[0xf] = 't';
                pcVar10[0x10] = '_';
                pcVar10[0x11] = 't';
                pcVar10[0x12] = 'o';
                pcVar10[0x13] = 'k';
                pcVar10[0x14] = 'e';
                pcVar10[0x15] = 'n';
                pcVar10[0x16] = 's';
                local_2c8 = 0x17;
                local_2b8 = 0x17;
                local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
                uStack_1d0 = 0;
                uStack_1cc = 0;
                uStack_1c8._0_4_ = (undefined4)lVar14;
                uStack_1c8._4_4_ = (uint)((ulonglong)lVar14 >> 0x20);
                pcStack_2c0 = pcVar10;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
                if ((char)local_2a8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                }
                goto LAB_00684532;
              }
            }
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0068544d;
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0068544d;
      }
    }
LAB_00685316:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0068544d;
  }
  local_1f0 = (char *)0x0;
  local_1e0 = 0;
  local_1f8 = lVar14;
  local_c8 = plVar17;
  local_c0 = *(char **)(param_2 + 0xe8);
  local_98 = *(longlong *)(param_2 + 0xf8);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar10 != (char *)0x0) {
    pcVar10[0] = 'i';
    pcVar10[1] = 'd';
    local_2c8 = 2;
    local_2b8 = 2;
    lVar14 = *(longlong *)(param_2 + 0x28);
    pcStack_2c0 = pcVar10;
    if (lVar14 < 0) {
LAB_00683d94:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0068544d;
    }
    if (lVar14 == 0) {
      lVar15 = 1;
    }
    else {
      local_200 = *(undefined1 **)(param_2 + 0x20);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar15 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar15 == 0) goto LAB_00683d94;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar14);
    }
    local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,3);
    uStack_1d0 = (uint)lVar14;
    uStack_1cc = (undefined4)((ulonglong)lVar14 >> 0x20);
    uStack_1c8._0_4_ = (undefined4)lVar15;
    uStack_1c8._4_4_ = (uint)((ulonglong)lVar15 >> 0x20);
    uStack_1c0 = uStack_1d0;
    uStack_1bc = uStack_1cc;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_2a8,&local_1f0,&local_2c8,&local_1d8);
    if ((char)local_2a8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_2a8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar10 != (char *)0x0) {
      builtin_strncpy(pcVar10,"object",6);
      local_2c8 = 6;
      local_2b8 = 6;
      pcStack_2c0 = pcVar10;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar7 = s_chat_completion_chunk_001a4c76._12_4_;
      uVar6 = s_chat_completion_chunk_001a4c76._8_4_;
      uVar21 = s_chat_completion_chunk_001a4c76._4_4_;
      if (pcVar10 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0068544d;
      }
      *(undefined4 *)pcVar10 = s_chat_completion_chunk_001a4c76._0_4_;
      *(undefined4 *)(pcVar10 + 4) = uVar21;
      *(undefined4 *)(pcVar10 + 8) = uVar6;
      *(undefined4 *)(pcVar10 + 0xc) = uVar7;
      pcVar10[0xd] = 'o';
      pcVar10[0xe] = 'n';
      pcVar10[0xf] = '.';
      pcVar10[0x10] = 'c';
      pcVar10[0x11] = 'h';
      pcVar10[0x12] = 'u';
      pcVar10[0x13] = 'n';
      pcVar10[0x14] = 'k';
      local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,3);
      uStack_1d0 = 0x15;
      uStack_1cc = 0;
      uStack_1c8._0_4_ = SUB84(pcVar10,0);
      uStack_1c8._4_4_ = (uint)((ulonglong)pcVar10 >> 0x20);
      uStack_1c0 = 0x15;
      uStack_1bc = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_2a8,&local_1f0,&local_2c8,&local_1d8);
      if ((char)local_2a8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_2a8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 != (char *)0x0) {
        builtin_strncpy(pcVar10,"created",7);
        local_2c8 = 7;
        local_2b8 = 7;
        local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
        uStack_1c8._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x110) >> 0x20);
        uStack_1d0 = uStack_1c8._4_4_ >> 0x1f;
        uStack_1cc = 0;
        uStack_1c8._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0x110);
        pcStack_2c0 = pcVar10;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_2a8,&local_1f0,&local_2c8,&local_1d8);
        if ((char)local_2a8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_2a8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar10 != (char *)0x0) {
          builtin_strncpy(pcVar10,"model",5);
          local_2c8 = 5;
          local_2b8 = 5;
          lVar14 = *(longlong *)(param_2 + 0xc0);
          pcStack_2c0 = pcVar10;
          if (lVar14 < 0) {
LAB_006840ba:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0068544d;
          }
          if (lVar14 == 0) {
            lVar15 = 1;
          }
          else {
            local_200 = *(undefined1 **)(param_2 + 0xb8);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar15 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar15 == 0) goto LAB_006840ba;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar14);
          }
          local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,3);
          uStack_1d0 = (uint)lVar14;
          uStack_1cc = (undefined4)((ulonglong)lVar14 >> 0x20);
          uStack_1c8._0_4_ = (undefined4)lVar15;
          uStack_1c8._4_4_ = (uint)((ulonglong)lVar15 >> 0x20);
          uStack_1c0 = uStack_1d0;
          uStack_1bc = uStack_1cc;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_2a8,&local_1f0,&local_2c8,&local_1d8);
          if ((char)local_2a8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_2a8);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar10 != (char *)0x0) {
            builtin_strncpy(pcVar10,"choices",7);
            local_248 = 7;
            local_238 = 7;
            pcStack_240 = pcVar10;
            local_a0 = pcVar10;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar13 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar13 == (undefined1 *)0x0) {
              (*(code *)PTR_handle_alloc_error_007991d8)();
              goto LAB_0068544d;
            }
            local_268 = 0;
            local_258 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            local_200 = puVar13;
            if (pcVar10 != (char *)0x0) {
              builtin_strncpy(pcVar10,"index",5);
              local_2c8 = 5;
              local_2b8 = 5;
              local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
              uStack_1d0 = 0;
              uStack_1cc = 0;
              uStack_1c8._0_4_ = 0;
              uStack_1c8._4_4_ = 0;
              pcStack_2c0 = pcVar10;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
              if ((char)local_2a8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_2a8);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar10 != (char *)0x0) {
                builtin_strncpy(pcVar10,"delta",5);
                local_2c8 = 5;
                local_2b8 = 5;
                uStack_1d0 = 0;
                uStack_1cc = 0;
                uStack_1c0 = 0;
                uStack_1bc = 0;
                local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,5);
                pcStack_2c0 = pcVar10;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
                if ((char)local_2a8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar10 != (char *)0x0) {
                  builtin_strncpy(pcVar10,"finish_reason",0xd);
                  local_2c8 = 0xd;
                  local_2b8 = 0xd;
                  pcStack_2c0 = pcVar10;
                  if (*(char *)(param_2 + 299) == '\0') {
                    lVar14 = *(longlong *)(param_2 + 0x90);
                    plVar17 = *(longlong **)(param_2 + 0x98);
                    lVar15 = *(longlong *)(param_2 + 0xa0);
                    plVar18 = (longlong *)0x0;
                    if (lVar14 != -1) {
                      plVar18 = plVar17;
                    }
                    cVar9 = craggemini_core[66f3c71560d70857]::multiprotocol::
                            is_safety_finish_reason(plVar18,lVar15);
                    if (cVar9 == '\0') {
                      if (lVar15 == 10 && lVar14 != -1) {
                        iVar16 = (uint)((short)plVar17[1] == 0x534e &&
                                       *plVar17 == 0x454b4f545f58414d) * 2 + 4;
                      }
                      else {
                        iVar16 = 4;
                      }
                    }
                    else {
                      iVar16 = 0xe;
                    }
                  }
                  else {
                    iVar16 = 10;
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar14 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar14 == 0) {
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_0068544d;
                  }
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,iVar16);
                  local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,3);
                  uStack_1cc = 0;
                  uStack_1c8._0_4_ = (undefined4)lVar14;
                  uStack_1c8._4_4_ = (uint)((ulonglong)lVar14 >> 0x20);
                  uStack_1d0 = iVar16;
                  uStack_1c0 = iVar16;
                  uStack_1bc = uStack_1cc;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
                  puVar13 = local_200;
                  if ((char)local_2a8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                  }
                  local_1d8._7_1_ = (undefined1)local_268;
                  uStack_1d0 = (uint)((ulonglong)local_268 >> 8);
                  uStack_1cc._0_3_ = (undefined3)((ulonglong)local_268 >> 0x28);
                  uStack_1cc._3_1_ = SUB81(uStack_260,0);
                  *puVar13 = 5;
                  *(undefined4 **)(puVar13 + 0x10) = uStack_260;
                  *(undefined8 *)(puVar13 + 0x18) = local_258;
                  *(undefined4 *)(puVar13 + 1) = (undefined4)local_1d8;
                  *(undefined4 *)(puVar13 + 5) = local_1d8._4_4_;
                  *(uint *)(puVar13 + 9) = uStack_1d0;
                  *(undefined4 *)(puVar13 + 0xd) = uStack_1cc;
                  uStack_1d0 = 1;
                  uStack_1cc = 0;
                  uStack_1c8._0_4_ = SUB84(puVar13,0);
                  uStack_1c8._4_4_ = (uint)((ulonglong)puVar13 >> 0x20);
                  uStack_1c0 = 1;
                  uStack_1bc = 0;
                  local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,4);
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2a8,&local_1f0,&local_248,&local_1d8);
                  if ((char)local_2a8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar12 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar12 != (undefined4 *)0x0) {
                    *(undefined1 *)(puVar12 + 1) = 0x65;
                    *puVar12 = 0x67617375;
                    local_b8 = 5;
                    local_a8 = 5;
                    local_218 = (char *)0x0;
                    local_208 = 0;
                    local_b0 = puVar12;
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar10 != (char *)0x0) {
                      builtin_strncpy(pcVar10,"prompt_tokens",0xd);
                      local_2c8 = 0xd;
                      local_2b8 = 0xd;
                      local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
                      uStack_1d0 = 0;
                      uStack_1cc = 0;
                      uStack_1c8._0_4_ = SUB84(local_c0,0);
                      uStack_1c8._4_4_ = (uint)((ulonglong)local_c0 >> 0x20);
                      pcStack_2c0 = pcVar10;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_2a8,&local_218,&local_2c8,&local_1d8);
                      if ((char)local_2a8 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      uVar7 = s_completion_tokens_001a4f4f._12_4_;
                      uVar6 = s_completion_tokens_001a4f4f._8_4_;
                      uVar21 = s_completion_tokens_001a4f4f._4_4_;
                      if (pcVar10 != (char *)0x0) {
                        *(undefined4 *)pcVar10 = s_completion_tokens_001a4f4f._0_4_;
                        *(undefined4 *)(pcVar10 + 4) = uVar21;
                        *(undefined4 *)(pcVar10 + 8) = uVar6;
                        *(undefined4 *)(pcVar10 + 0xc) = uVar7;
                        pcVar10[0x10] = 's';
                        local_2c8 = 0x11;
                        local_2b8 = 0x11;
                        local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
                        uStack_1d0 = 0;
                        uStack_1cc = 0;
                        uStack_1c8._0_4_ = (undefined4)local_1f8;
                        uStack_1c8._4_4_ = (uint)((ulonglong)local_1f8 >> 0x20);
                        pcStack_2c0 = pcVar10;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_2a8,&local_218,&local_2c8,&local_1d8);
                        if ((char)local_2a8 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        if (pcVar10 != (char *)0x0) {
                          builtin_strncpy(pcVar10,"total_tokens",0xc);
                          local_2c8 = 0xc;
                          local_2b8 = 0xc;
                          local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
                          uStack_1d0 = 0;
                          uStack_1cc = 0;
                          uStack_1c8._0_4_ = SUB84(local_c8,0);
                          uStack_1c8._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
                          pcStack_2c0 = pcVar10;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_2a8,&local_218,&local_2c8,&local_1d8);
                          if ((char)local_2a8 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                          }
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                          uVar7 = s_prompt_tokens_details_001a4f60._12_4_;
                          uVar6 = s_prompt_tokens_details_001a4f60._8_4_;
                          uVar21 = s_prompt_tokens_details_001a4f60._4_4_;
                          if (pcVar10 != (char *)0x0) {
                            *(undefined4 *)pcVar10 = s_prompt_tokens_details_001a4f60._0_4_;
                            *(undefined4 *)(pcVar10 + 4) = uVar21;
                            *(undefined4 *)(pcVar10 + 8) = uVar6;
                            *(undefined4 *)(pcVar10 + 0xc) = uVar7;
                            pcVar10[0xd] = '_';
                            pcVar10[0xe] = 'd';
                            pcVar10[0xf] = 'e';
                            pcVar10[0x10] = 't';
                            pcVar10[0x11] = 'a';
                            pcVar10[0x12] = 'i';
                            pcVar10[0x13] = 'l';
                            pcVar10[0x14] = 's';
                            local_248 = 0x15;
                            local_238 = 0x15;
                            local_268 = 0;
                            local_258 = 0;
                            pcStack_240 = pcVar10;
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                            if (pcVar10 == (char *)0x0) {
                              (*(code *)PTR_handle_error_00798ff0)();
                              goto LAB_0068544d;
                            }
                            builtin_strncpy(pcVar10,"cached_tokens",0xd);
                            local_2c8 = 0xd;
                            local_2b8 = 0xd;
                            local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
                            uStack_1d0 = 0;
                            uStack_1cc = 0;
                            uStack_1c8._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0x108);
                            uStack_1c8._4_4_ =
                                 (uint)((ulonglong)*(undefined8 *)(param_2 + 0x108) >> 0x20);
                            pcStack_2c0 = pcVar10;
                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                            ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
                            if ((char)local_2a8 != -1) {
                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                              <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                            }
                            uStack_1d0 = (uint)local_268;
                            uStack_1cc = local_268._4_4_;
                            uStack_1c8._0_4_ = (undefined4)uStack_260;
                            uStack_1c8._4_4_ = uStack_260._4_4_;
                            uStack_1c0 = (uint)local_258;
                            uStack_1bc = (undefined4)((ulonglong)local_258 >> 0x20);
                            local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,5);
                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                            ::insert(&local_2a8,&local_218,&local_248,&local_1d8);
                            if ((char)local_2a8 != -1) {
                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                              <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                            }
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                            uVar8 = s_n_tokens_details_001a4f7e._8_8_;
                            if (pcVar10 != (char *)0x0) {
                              *(ulonglong *)(pcVar10 + 9) =
                                   CONCAT17(s_n_tokens_details_001a4f7e[7],
                                            CONCAT43(s_n_tokens_details_001a4f7e._3_4_,
                                                     s_n_tokens_details_001a4f7e._0_3_));
                              *(undefined8 *)(pcVar10 + 0x11) = uVar8;
                              uVar7 = s_n_tokens_details_001a4f7e._3_4_;
                              uVar6 = ram0x001a4f7d;
                              uVar21 = s_completio_001a4f75._4_4_;
                              *(undefined4 *)pcVar10 = s_completio_001a4f75._0_4_;
                              *(undefined4 *)(pcVar10 + 4) = uVar21;
                              *(undefined4 *)(pcVar10 + 8) = uVar6;
                              *(undefined4 *)(pcVar10 + 0xc) = uVar7;
                              local_248 = 0x19;
                              local_238 = 0x19;
                              local_268 = 0;
                              local_258 = 0;
                              pcStack_240 = pcVar10;
                              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                              puVar12 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                              uVar7 = _UNK_001829ac;
                              uVar6 = _UNK_001829a8;
                              uVar21 = _UNK_001829a4;
                              if (puVar12 != (undefined4 *)0x0) {
                                *puVar12 = _DAT_001829a0;
                                puVar12[1] = uVar21;
                                puVar12[2] = uVar6;
                                puVar12[3] = uVar7;
                                local_2c8 = 0x10;
                                local_2b8 = 0x10;
                                local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,2);
                                uStack_1d0 = 0;
                                uStack_1cc = 0;
                                uStack_1c8._0_4_ = (undefined4)local_98;
                                uStack_1c8._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
                                pcStack_2c0 = (char *)puVar12;
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_2a8,&local_268,&local_2c8,&local_1d8);
                                if ((char)local_2a8 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                                }
                                uStack_1d0 = (uint)local_268;
                                uStack_1cc = local_268._4_4_;
                                uStack_1c8._0_4_ = (undefined4)uStack_260;
                                uStack_1c8._4_4_ = uStack_260._4_4_;
                                uStack_1c0 = (uint)local_258;
                                uStack_1bc = (undefined4)((ulonglong)local_258 >> 0x20);
                                local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,5);
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_2a8,&local_218,&local_248,&local_1d8);
                                if ((char)local_2a8 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                                }
                                uStack_1d0 = (undefined4)local_218;
                                uStack_1cc = local_218._4_4_;
                                uStack_1c8._0_4_ = uStack_210;
                                uStack_1c8._4_4_ = uStack_20c;
                                uStack_1c0 = (uint)local_208;
                                uStack_1bc = (undefined4)((ulonglong)local_208 >> 0x20);
                                local_1d8._0_4_ = CONCAT31(local_1d8._1_3_,5);
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_2a8,&local_1f0,&local_b8,&local_1d8);
                                if ((char)local_2a8 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_2a8);
                                }
                                uStack_2a0 = (code *)local_1f0;
                                uStack_290 = (undefined *)local_1e0;
                                local_2a8 = (char **)CONCAT71(local_2a8._1_7_,5);
                                uStack_1d0 = (uint)PTR_fmt_00799758;
                                uStack_1cc = (undefined4)((ulonglong)PTR_fmt_00799758 >> 0x20);
                                local_1d8 = &local_2a8;
                                (*(code *)PTR_format_inner_00799048)(local_1f0._0_4_,&local_1d8);
                                (*(code *)PTR_from_00799298)();
                                lVar14 = local_220;
                                if (local_220 == local_230) {
                                  (*(code *)PTR_grow_one_0079a3a0)();
                                }
                                lVar15 = lVar14 * 0x20;
                                puVar12 = (undefined4 *)(lStack_228 + 0x10 + lVar15);
                                *puVar12 = (undefined4)uStack_1c8;
                                puVar12[1] = uStack_1c8._4_4_;
                                puVar12[2] = uStack_1c0;
                                puVar12[3] = uStack_1bc;
                                plVar17 = (longlong *)(lStack_228 + lVar15);
                                *plVar17 = (longlong)local_1d8;
                                *(uint *)(plVar17 + 1) = uStack_1d0;
                                *(undefined4 *)((longlong)plVar17 + 0xc) = uStack_1cc;
                                local_220 = lVar14 + 1;
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_2a8,local_90);
LAB_006847af:
                                param_1[2] = local_220;
                                *param_1 = local_230;
                                param_1[1] = lStack_228;
                                return param_1;
                              }
                              (*(code *)PTR_handle_error_00798ff0)();
                              goto LAB_0068544d;
                            }
                          }
                        }
                      }
                    }
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_0068544d;
                  }
                  goto LAB_00685329;
                }
              }
            }
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0068544d;
          }
        }
      }
    }
  }
LAB_00685329:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0068544d:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


