// 005daa20 acp_update_to_gemini_sse

/* craggemini_core[66f3c71560d70857]::acp_backend::acp_update_to_gemini_sse */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::acp_update_to_gemini_sse
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 unaff_RBP;
  undefined8 uVar12;
  bool bVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char local_308;
  undefined1 uStack_307;
  undefined2 uStack_306;
  undefined4 uStack_304;
  undefined7 uStack_300;
  undefined1 uStack_2f9;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 uStack_2e9;
  char *local_2e8;
  char *pcStack_2e0;
  undefined8 *local_2d8;
  undefined8 uStack_2d0;
  undefined8 *local_2c0;
  char *local_2b8;
  char *pcStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  undefined4 *puStack_290;
  undefined8 local_288;
  undefined8 *local_280;
  undefined8 local_278;
  undefined8 *puStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 *puStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 *puStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 *puStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 *puStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 *puStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 *puStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 local_188;
  longlong local_180 [3];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  
  pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(param_4,param_2);
  if ((((pcVar5 == (char *)0x0) &&
       (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa,param_2),
       pcVar5 == (char *)0x0)) &&
      (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_00,param_2),
      pcVar5 == (char *)0x0)) || (*pcVar5 != '\x03')) goto LAB_005dbae3;
  plVar1 = *(longlong **)(pcVar5 + 0x10);
  if (*(longlong *)(pcVar5 + 0x18) != 9) {
    if (*(longlong *)(pcVar5 + 0x18) != 0x13) goto LAB_005dbae3;
    auVar17[0] = -(*(char *)((longlong)plVar1 + 3) == DAT_001845c0);
    auVar17[1] = -(*(char *)((longlong)plVar1 + 4) == UNK_001845c1);
    auVar17[2] = -(*(char *)((longlong)plVar1 + 5) == UNK_001845c2);
    auVar17[3] = -(*(char *)((longlong)plVar1 + 6) == UNK_001845c3);
    auVar17[4] = -(*(char *)((longlong)plVar1 + 7) == UNK_001845c4);
    auVar17[5] = -((char)plVar1[1] == UNK_001845c5);
    auVar17[6] = -(*(char *)((longlong)plVar1 + 9) == UNK_001845c6);
    auVar17[7] = -(*(char *)((longlong)plVar1 + 10) == UNK_001845c7);
    auVar17[8] = -(*(char *)((longlong)plVar1 + 0xb) == UNK_001845c8);
    auVar17[9] = -(*(char *)((longlong)plVar1 + 0xc) == UNK_001845c9);
    auVar17[10] = -(*(char *)((longlong)plVar1 + 0xd) == UNK_001845ca);
    auVar17[0xb] = -(*(char *)((longlong)plVar1 + 0xe) == UNK_001845cb);
    auVar17[0xc] = -(*(char *)((longlong)plVar1 + 0xf) == UNK_001845cc);
    auVar17[0xd] = -((char)plVar1[2] == UNK_001845cd);
    auVar17[0xe] = -(*(char *)((longlong)plVar1 + 0x11) == UNK_001845ce);
    auVar17[0xf] = -(*(char *)((longlong)plVar1 + 0x12) == UNK_001845cf);
    auVar15[0] = -((char)*plVar1 == s_agent_message_ch_00184100[0]);
    auVar15[1] = -(*(char *)((longlong)plVar1 + 1) == s_agent_message_ch_00184100[1]);
    auVar15[2] = -(*(char *)((longlong)plVar1 + 2) == s_agent_message_ch_00184100[2]);
    auVar15[3] = -(*(char *)((longlong)plVar1 + 3) == s_agent_message_ch_00184100[3]);
    auVar15[4] = -(*(char *)((longlong)plVar1 + 4) == s_agent_message_ch_00184100[4]);
    auVar15[5] = -(*(char *)((longlong)plVar1 + 5) == s_agent_message_ch_00184100[5]);
    auVar15[6] = -(*(char *)((longlong)plVar1 + 6) == s_agent_message_ch_00184100[6]);
    auVar15[7] = -(*(char *)((longlong)plVar1 + 7) == s_agent_message_ch_00184100[7]);
    auVar15[8] = -((char)plVar1[1] == s_agent_message_ch_00184100[8]);
    auVar15[9] = -(*(char *)((longlong)plVar1 + 9) == s_agent_message_ch_00184100[9]);
    auVar15[10] = -(*(char *)((longlong)plVar1 + 10) == s_agent_message_ch_00184100[10]);
    auVar15[0xb] = -(*(char *)((longlong)plVar1 + 0xb) == s_agent_message_ch_00184100[0xb]);
    auVar15[0xc] = -(*(char *)((longlong)plVar1 + 0xc) == s_agent_message_ch_00184100[0xc]);
    auVar15[0xd] = -(*(char *)((longlong)plVar1 + 0xd) == s_agent_message_ch_00184100[0xd]);
    auVar15[0xe] = -(*(char *)((longlong)plVar1 + 0xe) == s_agent_message_ch_00184100[0xe]);
    auVar15[0xf] = -(*(char *)((longlong)plVar1 + 0xf) == s_agent_message_ch_00184100[0xf]);
    auVar15 = auVar15 & auVar17;
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) != 0xffff) {
      auVar18[0] = -(*(char *)((longlong)plVar1 + 3) == DAT_001841a0);
      auVar18[1] = -(*(char *)((longlong)plVar1 + 4) == UNK_001841a1);
      auVar18[2] = -(*(char *)((longlong)plVar1 + 5) == UNK_001841a2);
      auVar18[3] = -(*(char *)((longlong)plVar1 + 6) == UNK_001841a3);
      auVar18[4] = -(*(char *)((longlong)plVar1 + 7) == UNK_001841a4);
      auVar18[5] = -((char)plVar1[1] == UNK_001841a5);
      auVar18[6] = -(*(char *)((longlong)plVar1 + 9) == UNK_001841a6);
      auVar18[7] = -(*(char *)((longlong)plVar1 + 10) == UNK_001841a7);
      auVar18[8] = -(*(char *)((longlong)plVar1 + 0xb) == UNK_001841a8);
      auVar18[9] = -(*(char *)((longlong)plVar1 + 0xc) == UNK_001841a9);
      auVar18[10] = -(*(char *)((longlong)plVar1 + 0xd) == UNK_001841aa);
      auVar18[0xb] = -(*(char *)((longlong)plVar1 + 0xe) == UNK_001841ab);
      auVar18[0xc] = -(*(char *)((longlong)plVar1 + 0xf) == UNK_001841ac);
      auVar18[0xd] = -((char)plVar1[2] == UNK_001841ad);
      auVar18[0xe] = -(*(char *)((longlong)plVar1 + 0x11) == UNK_001841ae);
      auVar18[0xf] = -(*(char *)((longlong)plVar1 + 0x12) == UNK_001841af);
      auVar16[0] = -((char)*plVar1 == DAT_00182e10);
      auVar16[1] = -(*(char *)((longlong)plVar1 + 1) == UNK_00182e11);
      auVar16[2] = -(*(char *)((longlong)plVar1 + 2) == UNK_00182e12);
      auVar16[3] = -(*(char *)((longlong)plVar1 + 3) == UNK_00182e13);
      auVar16[4] = -(*(char *)((longlong)plVar1 + 4) == UNK_00182e14);
      auVar16[5] = -(*(char *)((longlong)plVar1 + 5) == UNK_00182e15);
      auVar16[6] = -(*(char *)((longlong)plVar1 + 6) == UNK_00182e16);
      auVar16[7] = -(*(char *)((longlong)plVar1 + 7) == UNK_00182e17);
      auVar16[8] = -((char)plVar1[1] == UNK_00182e18);
      auVar16[9] = -(*(char *)((longlong)plVar1 + 9) == UNK_00182e19);
      auVar16[10] = -(*(char *)((longlong)plVar1 + 10) == UNK_00182e1a);
      auVar16[0xb] = -(*(char *)((longlong)plVar1 + 0xb) == UNK_00182e1b);
      auVar16[0xc] = -(*(char *)((longlong)plVar1 + 0xc) == UNK_00182e1c);
      auVar16[0xd] = -(*(char *)((longlong)plVar1 + 0xd) == UNK_00182e1d);
      auVar16[0xe] = -(*(char *)((longlong)plVar1 + 0xe) == UNK_00182e1e);
      auVar16[0xf] = -(*(char *)((longlong)plVar1 + 0xf) == UNK_00182e1f);
      auVar16 = auVar16 & auVar18;
      if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) != 0xffff) goto LAB_005dbae3;
      lVar6 = (*(code *)PTR_index_into_00799300)(plVar1,param_2);
      uVar12 = extraout_XMM0_Qa_01;
      if ((((lVar6 == 0) ||
           (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_01,lVar6),
           uVar12 = extraout_XMM0_Qa_02, pcVar5 == (char *)0x0)) &&
          (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(uVar12,param_2),
          uVar12 = extraout_XMM0_Qa_03, pcVar5 == (char *)0x0)) || (*pcVar5 != '\x03')) {
        local_1e8 = 1;
        puStack_1e0 = (undefined8 *)0x0;
        bVar13 = true;
      }
      else {
        local_1e8 = *(undefined8 *)(pcVar5 + 0x10);
        puStack_1e0 = *(undefined8 **)(pcVar5 + 0x18);
        bVar13 = puStack_1e0 == (undefined8 *)0x0;
      }
      if ((((((lVar6 == 0) ||
             ((pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(uVar12,lVar6),
              pcVar5 == (char *)0x0 &&
              (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_10,lVar6),
              uVar12 = extraout_XMM0_Qa_11, pcVar5 == (char *)0x0)))) &&
            (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(uVar12,param_2),
            pcVar5 == (char *)0x0)) &&
           (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_12,param_2),
           pcVar5 == (char *)0x0)) &&
          ((lVar6 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_13,param_2), lVar6 == 0 ||
           ((pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_16,lVar6),
            pcVar5 == (char *)0x0 &&
            (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_17,lVar6),
            pcVar5 == (char *)0x0)))))) || (*pcVar5 != '\x03')) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(pcVar5 + 0x10);
        param_3 = *(undefined4 **)(pcVar5 + 0x18);
      }
      if (param_3 == (undefined4 *)0x0) {
        lVar6 = 0;
      }
      if ((bool)(bVar13 & lVar6 == 0)) goto LAB_005dbae3;
      local_278 = 0;
      local_268 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar5 != (char *)0x0) {
        builtin_strncpy(pcVar5,"thought",7);
        local_2b8 = &DAT_00000007;
        local_2a8 = 7;
        local_308 = '\x01';
        uStack_307 = 1;
        pcStack_2b0 = pcVar5;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_2e8,&local_278,&local_2b8,&local_308);
        if ((char)local_2e8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_2e8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar5 != (char *)0x0) {
          builtin_strncpy(pcVar5,"text",4);
          local_2b8 = &DAT_00000004;
          local_2a8 = 4;
          pcStack_2b0 = pcVar5;
          serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&local_1e8);
          if (local_308 == -1) {
            local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                       &local_2e8,&PTR_s_src_acp_backend_rs_0078e600);
            goto LAB_005dcbcb;
          }
          local_2e8 = (char *)CONCAT44(uStack_304,
                                       CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_308,&local_278,&local_2b8,&local_2e8);
          if (local_308 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_308);
          }
          if (lVar6 != 0) {
            local_298 = lVar6;
            puStack_290 = param_3;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar12 = s_thoughtSignature_00183e70._8_8_;
            if (pcVar5 == (char *)0x0) goto LAB_005dca76;
            *(undefined8 *)pcVar5 = s_thoughtSignature_00183e70._0_8_;
            *(undefined8 *)(pcVar5 + 8) = uVar12;
            local_2b8 = &DAT_00000010;
            local_2a8 = 0x10;
            pcStack_2b0 = pcVar5;
            serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&local_298);
            if (local_308 == -1) {
              local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                         &local_2e8,&PTR_s_src_acp_backend_rs_0078e618);
              goto LAB_005dcbcb;
            }
            local_2e8 = (char *)CONCAT44(uStack_304,
                                         CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_308,&local_278,&local_2b8,&local_2e8);
            if (local_308 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_308);
            }
          }
          local_248 = 0;
          local_238 = 0;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          local_280 = (undefined8 *)
                      CONCAT44(local_280._4_4_,
                               (int)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),
                                             puVar8 == (undefined8 *)0x0));
          if (puVar8 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
          }
          else {
            *puVar8 = 0x74616469646e6163;
            *(undefined2 *)(puVar8 + 1) = 0x7365;
            local_230 = 10;
            local_220 = 10;
            puStack_228 = puVar8;
            puVar9 = (undefined1 *)alloc[12e961f32105355]::boxed::box_new_uninit(10,1);
            local_200 = 0;
            local_1f0 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            local_2c0 = (undefined8 *)
                        CONCAT44(local_2c0._4_4_,
                                 (int)CONCAT71((int7)((ulonglong)puVar8 >> 8),
                                               puVar8 == (undefined8 *)0x0));
            if (puVar8 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005dcbcb;
            }
            *(undefined4 *)((longlong)puVar8 + 3) = 0x746e6574;
            *(undefined4 *)puVar8 = 0x746e6f63;
            local_218 = 7;
            local_208 = 7;
            local_260 = 0;
            local_250 = 0;
            puStack_210 = puVar8;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar5 != (char *)0x0) {
              builtin_strncpy(pcVar5,"role",4);
              local_2b8 = &DAT_00000004;
              local_2a8 = 4;
              pcStack_2b0 = pcVar5;
              serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&PTR_DAT_0078e5d8);
              if (local_308 == -1) {
                local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
                (*(code *)PTR_unwrap_failed_00799028)
                          (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                           &local_2e8,&PTR_s_src_acp_backend_rs_0078e630);
                goto LAB_005dcbcb;
              }
              local_2e8 = (char *)CONCAT44(uStack_304,
                                           CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
              pcStack_2e0 = (char *)CONCAT17(uStack_2f9,uStack_300);
              local_2d8 = (undefined8 *)CONCAT17(uStack_2f1,uStack_2f8);
              uStack_2d0 = CONCAT17(uStack_2e9,uStack_2f0);
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_308,&local_260,&local_2b8,&local_2e8);
              if (local_308 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_308);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar10 != (undefined4 *)0x0) {
                *(undefined1 *)(puVar10 + 1) = 0x73;
                *puVar10 = 0x74726170;
                local_298 = 5;
                local_288 = 5;
                puStack_290 = puVar10;
                puVar8 = (undefined8 *)alloc[12e961f32105355]::boxed::box_new_uninit(5,1);
                uStack_2f0 = (undefined7)local_268;
                uStack_2e9 = (undefined1)((ulonglong)local_268 >> 0x38);
                uStack_300 = (undefined7)local_278;
                uStack_2f9 = (undefined1)((ulonglong)local_278 >> 0x38);
                uStack_2f8 = SUB87(puStack_270,0);
                uStack_2f1 = (undefined1)((ulonglong)puStack_270 >> 0x38);
                local_308 = '\x05';
                <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                          (&local_2e8,&local_308);
                if ((char)local_2e8 == -1) {
                  local_2b8 = pcStack_2e0;
                  (*(code *)PTR_unwrap_failed_00799028)
                            (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                             &local_2b8,&PTR_s_src_acp_backend_rs_0078e630);
                  goto LAB_005dcbcb;
                }
                local_2a8 = local_2d8;
                uStack_2a0 = uStack_2d0;
                local_2b8 = local_2e8;
                pcStack_2b0 = pcStack_2e0;
                puVar8[2] = local_2d8;
                puVar8[3] = uStack_2d0;
                *puVar8 = local_2e8;
                puVar8[1] = pcStack_2e0;
                pcStack_2e0 = (char *)0x1;
                uStack_2d0 = 1;
                local_2e8 = (char *)CONCAT71(local_2e8._1_7_,4);
                local_2d8 = puVar8;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2b8,&local_260,&local_298,&local_2e8);
                if ((char)local_2b8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2b8);
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_308);
                uStack_300 = (undefined7)local_260;
                uStack_2f9 = (undefined1)((ulonglong)local_260 >> 0x38);
                uStack_2f8 = SUB87(puStack_258,0);
                uStack_2f1 = (undefined1)((ulonglong)puStack_258 >> 0x38);
                uStack_2f0 = (undefined7)local_250;
                uStack_2e9 = (undefined1)((ulonglong)local_250 >> 0x38);
                local_308 = '\x05';
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2e8,&local_200,&local_218,&local_308);
                if ((char)local_2e8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                }
                uStack_304._3_1_ = (undefined1)local_200;
                uStack_300 = (undefined7)((ulonglong)local_200 >> 8);
                uStack_2f9 = SUB81(puStack_1f8,0);
                *puVar9 = 5;
                *(undefined4 **)(puVar9 + 0x10) = puStack_1f8;
                *(undefined8 *)(puVar9 + 0x18) = local_1f0;
                *(ulonglong *)(puVar9 + 1) =
                     CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                *(ulonglong *)(puVar9 + 9) = CONCAT17(uStack_2f9,uStack_300);
                uStack_300 = 1;
                uStack_2f9 = 0;
                uStack_2f8 = SUB87(puVar9,0);
                uStack_2f1 = (undefined1)((ulonglong)puVar9 >> 0x38);
                uStack_2f0 = 1;
                uStack_2e9 = 0;
                local_308 = '\x04';
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2e8,&local_248,&local_230,&local_308);
                if ((char)local_2e8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                }
                uStack_300 = (undefined7)local_248;
                uStack_2f9 = (undefined1)((ulonglong)local_248 >> 0x38);
                uStack_2f8 = SUB87(puStack_240,0);
                uStack_2f1 = (undefined1)((ulonglong)puStack_240 >> 0x38);
                uStack_2f0 = (undefined7)local_238;
                uStack_2e9 = (undefined1)((ulonglong)local_238 >> 0x38);
                local_308 = '\x05';
                pcStack_2e0 = PTR_fmt_00799758;
                local_2e8 = &local_308;
                (*(code *)PTR_format_inner_00799048)(local_248,&local_2e8);
                param_1[2] = local_128;
                goto LAB_005dc100;
              }
            }
            (*(code *)PTR_handle_error_00798ff0)();
          }
          goto LAB_005dcbcb;
        }
      }
LAB_005dca76:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005dcbcb;
    }
    lVar6 = (*(code *)PTR_index_into_00799300)(plVar1,param_2);
    uVar12 = extraout_XMM0_Qa_07;
    if (lVar6 == 0) {
LAB_005dad71:
      pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(uVar12,param_2);
      if (pcVar5 == (char *)0x0) goto LAB_005dbae3;
    }
    else {
      pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_07,lVar6);
      if (((pcVar5 != (char *)0x0) && (*pcVar5 == '\x03')) &&
         ((*(longlong *)(pcVar5 + 0x18) == 5 &&
          (uVar11 = **(uint **)(pcVar5 + 0x10) ^ 0x67616d69,
          (char)(*(uint **)(pcVar5 + 0x10))[1] == 'e' && uVar11 == 0)))) {
        pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(uVar11,lVar6);
        if (((pcVar5 == (char *)0x0) &&
            (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_18,lVar6),
            pcVar5 == (char *)0x0)) || (*pcVar5 != '\x03')) goto LAB_005dbae3;
        local_1c8 = *(longlong *)(pcVar5 + 0x10);
        uStack_1c0 = *(undefined8 *)(pcVar5 + 0x18);
        pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(local_1c8,lVar6);
        if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x03')) goto LAB_005dbae3;
        local_198 = *(undefined8 *)(pcVar5 + 0x10);
        lStack_190 = *(longlong *)(pcVar5 + 0x18);
        if (lStack_190 == 0) goto LAB_005dbae3;
        local_1b0 = 0;
        local_1a0 = 0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar8 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
        }
        else {
          *puVar8 = 0x74616469646e6163;
          *(undefined2 *)(puVar8 + 1) = 0x7365;
          local_1e8 = 10;
          local_1d8 = 10;
          puStack_1e0 = puVar8;
          local_1d0 = puVar8;
          local_2c0 = (undefined8 *)alloc[12e961f32105355]::boxed::box_new_uninit(10,1);
          local_278 = 0;
          local_268 = 0;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar8 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005dcbcb;
          }
          *(undefined4 *)((longlong)puVar8 + 3) = 0x746e6574;
          *(undefined4 *)puVar8 = 0x746e6f63;
          local_248 = 7;
          local_238 = 7;
          local_230 = 0;
          local_220 = 0;
          local_280 = puVar8;
          puStack_240 = puVar8;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar5 != (char *)0x0) {
            builtin_strncpy(pcVar5,"role",4);
            local_2b8 = &DAT_00000004;
            local_2a8 = 4;
            pcStack_2b0 = pcVar5;
            serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&PTR_DAT_0078e5d8);
            if (local_308 == -1) {
              local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                         &local_2e8,&PTR_s_src_acp_backend_rs_0078e660);
              goto LAB_005dcbcb;
            }
            local_2e8 = (char *)CONCAT44(uStack_304,
                                         CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_308,&local_230,&local_2b8,&local_2e8);
            if (local_308 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_308);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar10 != (undefined4 *)0x0) {
              *(undefined1 *)(puVar10 + 1) = 0x73;
              *puVar10 = 0x74726170;
              local_200 = 5;
              local_1f0 = 5;
              puStack_1f8 = puVar10;
              puVar9 = (undefined1 *)alloc[12e961f32105355]::boxed::box_new_uninit(5,1);
              local_218 = 0;
              local_208 = 0;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar8 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_005dcbcb;
              }
              *puVar8 = 0x6144656e696c6e69;
              *(undefined2 *)(puVar8 + 1) = 0x6174;
              local_260 = 10;
              local_250 = 10;
              local_298 = 0;
              local_288 = 0;
              puStack_258 = puVar8;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar5 != (char *)0x0) {
                builtin_strncpy(pcVar5,"mimeType",8);
                local_2b8 = &DAT_00000008;
                local_2a8 = 8;
                pcStack_2b0 = pcVar5;
                serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&local_1c8);
                if (local_308 == -1) {
                  local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
                  (*(code *)PTR_unwrap_failed_00799028)
                            (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                             &local_2e8,&PTR_s_src_acp_backend_rs_0078e660);
                  goto LAB_005dcbcb;
                }
                local_2e8 = (char *)CONCAT44(uStack_304,
                                             CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_308,&local_298,&local_2b8,&local_2e8);
                if (local_308 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_308);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar5 != (char *)0x0) {
                  builtin_strncpy(pcVar5,"data",4);
                  local_2b8 = &DAT_00000004;
                  local_2a8 = 4;
                  pcStack_2b0 = pcVar5;
                  serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&local_198);
                  if (local_308 == -1) {
                    local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
                    (*(code *)PTR_unwrap_failed_00799028)
                              (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                               &local_2e8,&PTR_s_src_acp_backend_rs_0078e660);
                    goto LAB_005dcbcb;
                  }
                  local_2e8._0_1_ = local_308;
                  local_2d8 = (undefined8 *)CONCAT17(uStack_2f1,uStack_2f8);
                  uStack_2d0 = CONCAT17(uStack_2e9,uStack_2f0);
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_308,&local_298,&local_2b8,&local_2e8);
                  if (local_308 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_308);
                  }
                  uStack_300 = (undefined7)local_298;
                  uStack_2f9 = (undefined1)((ulonglong)local_298 >> 0x38);
                  uStack_2f8 = SUB87(puStack_290,0);
                  uStack_2f1 = (undefined1)((ulonglong)puStack_290 >> 0x38);
                  uStack_2f0 = (undefined7)local_288;
                  uStack_2e9 = (undefined1)((ulonglong)local_288 >> 0x38);
                  local_308 = '\x05';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_218,&local_260,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_304._3_1_ = (undefined1)local_218;
                  uStack_300 = (undefined7)((ulonglong)local_218 >> 8);
                  uStack_2f9 = SUB81(puStack_210,0);
                  *puVar9 = 5;
                  *(undefined8 **)(puVar9 + 0x10) = puStack_210;
                  *(undefined8 *)(puVar9 + 0x18) = local_208;
                  *(ulonglong *)(puVar9 + 1) =
                       CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                  *(ulonglong *)(puVar9 + 9) = CONCAT17(uStack_2f9,uStack_300);
                  uStack_300 = 1;
                  uStack_2f9 = 0;
                  uStack_2f8 = SUB87(puVar9,0);
                  uStack_2f1 = (undefined1)((ulonglong)puVar9 >> 0x38);
                  uStack_2f0 = 1;
                  uStack_2e9 = 0;
                  local_308 = '\x04';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_230,&local_200,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_300 = (undefined7)local_230;
                  uStack_2f9 = (undefined1)((ulonglong)local_230 >> 0x38);
                  uStack_2f8 = SUB87(puStack_228,0);
                  uStack_2f1 = (undefined1)((ulonglong)puStack_228 >> 0x38);
                  uStack_2f0 = (undefined7)local_220;
                  uStack_2e9 = (undefined1)((ulonglong)local_220 >> 0x38);
                  local_308 = '\x05';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_278,&local_248,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_304._3_1_ = (undefined1)local_278;
                  uStack_300 = (undefined7)((ulonglong)local_278 >> 8);
                  uStack_2f9 = SUB81(puStack_270,0);
                  *(undefined1 *)local_2c0 = 5;
                  local_2c0[2] = puStack_270;
                  local_2c0[3] = local_268;
                  *(ulonglong *)((longlong)local_2c0 + 1) =
                       CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                  *(ulonglong *)((longlong)local_2c0 + 9) = CONCAT17(uStack_2f9,uStack_300);
                  uStack_300 = 1;
                  uStack_2f9 = 0;
                  uStack_2f8 = SUB87(local_2c0,0);
                  uStack_2f1 = (undefined1)((ulonglong)local_2c0 >> 0x38);
                  uStack_2f0 = 1;
                  uStack_2e9 = 0;
                  local_308 = '\x04';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_1b0,&local_1e8,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_300 = (undefined7)local_1b0;
                  uStack_2f9 = (undefined1)((ulonglong)local_1b0 >> 0x38);
                  uStack_2f8 = SUB87(puStack_1a8,0);
                  uStack_2f1 = (undefined1)((ulonglong)puStack_1a8 >> 0x38);
                  uStack_2f0 = (undefined7)local_1a0;
                  uStack_2e9 = (undefined1)((ulonglong)local_1a0 >> 0x38);
                  local_308 = '\x05';
                  pcStack_2e0 = PTR_fmt_00799758;
                  local_2e8 = &local_308;
                  (*(code *)PTR_format_inner_00799048)(local_1b0,&local_2e8);
                  param_1[2] = local_158;
                  local_138 = local_168;
                  uStack_130 = uStack_160;
                  goto LAB_005dc100;
                }
              }
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005dcbcb;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
        }
        goto LAB_005dcbcb;
      }
      pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_08,lVar6);
      uVar12 = extraout_XMM0_Qa_09;
      if (pcVar5 == (char *)0x0) goto LAB_005dad71;
    }
    if (*pcVar5 != '\x03') {
LAB_005dbae3:
      *param_1 = 0xffffffffffffffff;
      return param_1;
    }
    local_1e8 = *(undefined8 *)(pcVar5 + 0x10);
    puStack_1e0 = *(undefined8 **)(pcVar5 + 0x18);
    if (puStack_1e0 == (undefined8 *)0x0) goto LAB_005dbae3;
    local_278 = 0;
    local_268 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
    }
    else {
      *puVar8 = 0x74616469646e6163;
      *(undefined2 *)(puVar8 + 1) = 0x7365;
      local_248 = 10;
      local_238 = 10;
      local_2c0 = puVar8;
      puStack_240 = puVar8;
      puVar9 = (undefined1 *)alloc[12e961f32105355]::boxed::box_new_uninit(10,1);
      local_230 = 0;
      local_220 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar10 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
      }
      else {
        *(undefined4 *)((longlong)puVar10 + 3) = 0x746e6574;
        *puVar10 = 0x746e6f63;
        local_200 = 7;
        local_1f0 = 7;
        local_218 = 0;
        local_208 = 0;
        puStack_1f8 = puVar10;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar5 != (char *)0x0) {
          builtin_strncpy(pcVar5,"role",4);
          local_2b8 = &DAT_00000004;
          local_2a8 = 4;
          pcStack_2b0 = pcVar5;
          serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&PTR_DAT_0078e5d8);
          if (local_308 == -1) {
            local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                       &local_2e8,&PTR_s_src_acp_backend_rs_0078e648);
            goto LAB_005dcbcb;
          }
          local_2e8 = (char *)CONCAT44(uStack_304,
                                       CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_308,&local_218,&local_2b8,&local_2e8);
          if (local_308 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_308);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar8 != (undefined8 *)0x0) {
            *(undefined1 *)((longlong)puVar8 + 4) = 0x73;
            *(undefined4 *)puVar8 = 0x74726170;
            local_260 = 5;
            local_250 = 5;
            puStack_258 = puVar8;
            puVar7 = (undefined1 *)alloc[12e961f32105355]::boxed::box_new_uninit(5,1);
            local_298 = 0;
            local_288 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar5 == (char *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
            }
            else {
              builtin_strncpy(pcVar5,"text",4);
              local_2b8 = &DAT_00000004;
              local_2a8 = 4;
              pcStack_2b0 = pcVar5;
              serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&local_1e8);
              if (local_308 != -1) {
                local_2e8._0_1_ = local_308;
                local_2d8 = (undefined8 *)CONCAT17(uStack_2f1,uStack_2f8);
                uStack_2d0 = CONCAT17(uStack_2e9,uStack_2f0);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_308,&local_298,&local_2b8,&local_2e8);
                if (local_308 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_308);
                }
                uStack_304._3_1_ = (undefined1)local_298;
                uStack_300 = (undefined7)((ulonglong)local_298 >> 8);
                uStack_2f9 = SUB81(puStack_290,0);
                *puVar7 = 5;
                *(undefined4 **)(puVar7 + 0x10) = puStack_290;
                *(undefined8 *)(puVar7 + 0x18) = local_288;
                *(ulonglong *)(puVar7 + 1) =
                     CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                *(ulonglong *)(puVar7 + 9) = CONCAT17(uStack_2f9,uStack_300);
                uStack_300 = 1;
                uStack_2f9 = 0;
                uStack_2f8 = SUB87(puVar7,0);
                uStack_2f1 = (undefined1)((ulonglong)puVar7 >> 0x38);
                uStack_2f0 = 1;
                uStack_2e9 = 0;
                local_308 = '\x04';
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2e8,&local_218,&local_260,&local_308);
                if ((char)local_2e8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                }
                uStack_300 = (undefined7)local_218;
                uStack_2f9 = (undefined1)((ulonglong)local_218 >> 0x38);
                uStack_2f8 = SUB87(puStack_210,0);
                uStack_2f1 = (undefined1)((ulonglong)puStack_210 >> 0x38);
                uStack_2f0 = (undefined7)local_208;
                uStack_2e9 = (undefined1)((ulonglong)local_208 >> 0x38);
                local_308 = '\x05';
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2e8,&local_230,&local_200,&local_308);
                if ((char)local_2e8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                }
                uStack_304._3_1_ = (undefined1)local_230;
                uStack_300 = (undefined7)((ulonglong)local_230 >> 8);
                uStack_2f9 = SUB81(puStack_228,0);
                *puVar9 = 5;
                *(undefined8 **)(puVar9 + 0x10) = puStack_228;
                *(undefined8 *)(puVar9 + 0x18) = local_220;
                *(ulonglong *)(puVar9 + 1) =
                     CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                *(ulonglong *)(puVar9 + 9) = CONCAT17(uStack_2f9,uStack_300);
                uStack_300 = 1;
                uStack_2f9 = 0;
                uStack_2f8 = SUB87(puVar9,0);
                uStack_2f1 = (undefined1)((ulonglong)puVar9 >> 0x38);
                uStack_2f0 = 1;
                uStack_2e9 = 0;
                local_308 = '\x04';
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2e8,&local_278,&local_248,&local_308);
                if ((char)local_2e8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                }
                uStack_300 = (undefined7)local_278;
                uStack_2f9 = (undefined1)((ulonglong)local_278 >> 0x38);
                uStack_2f8 = SUB87(puStack_270,0);
                uStack_2f1 = (undefined1)((ulonglong)puStack_270 >> 0x38);
                uStack_2f0 = (undefined7)local_268;
                uStack_2e9 = (undefined1)((ulonglong)local_268 >> 0x38);
                local_308 = '\x05';
                pcStack_2e0 = PTR_fmt_00799758;
                local_2e8 = &local_308;
                (*(code *)PTR_format_inner_00799048)(local_278,&local_2e8);
                param_1[2] = local_140;
                local_138 = local_150;
                uStack_130 = uStack_148;
LAB_005dc100:
                *param_1 = local_138;
                param_1[1] = uStack_130;
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_308,&DAT_00186728);
                return param_1;
              }
              local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                         &local_2e8,&PTR_s_src_acp_backend_rs_0078e648);
            }
            goto LAB_005dcbcb;
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
      }
    }
    goto LAB_005dcbcb;
  }
  if ((((char)plVar1[1] != 'l' || *plVar1 != 0x6c61635f6c6f6f74) ||
      (((pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(0,param_2), pcVar5 == (char *)0x0 &&
        (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_04,param_2),
        pcVar5 == (char *)0x0)) &&
       (pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_05,param_2),
       pcVar5 == (char *)0x0)))) ||
     ((*pcVar5 != '\x03' || (lVar6 = *(longlong *)(pcVar5 + 0x18), lVar6 == 0)))) goto LAB_005dbae3;
  local_2c0 = *(undefined8 **)(pcVar5 + 0x10);
  cVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>>
          ::contains_key::<str>(param_5,local_2c0,lVar6);
  if (cVar4 != '\0') goto LAB_005dbae3;
  uVar14 = tools::restore_original_tool_name(local_180,param_3,param_4,local_2c0,lVar6,param_5);
  uVar12 = 10;
  pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(uVar14,param_2);
  if (pcVar5 == (char *)0x0) {
    uVar12 = 2;
    pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_06,param_2);
    if (pcVar5 != (char *)0x0) goto LAB_005dac89;
LAB_005db2d3:
    uVar12 = acp_update_to_gemini_sse::_closure_16_(&local_1c8,uVar12);
  }
  else {
LAB_005dac89:
    if (*pcVar5 != '\x03') goto LAB_005db2d3;
    lVar6 = *(longlong *)(pcVar5 + 0x18);
    uVar12 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in(&local_308,lVar6,0,1,1)
    ;
    lVar3 = CONCAT17(uStack_2f9,uStack_300);
    if (CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)) == 1) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005dcbcb;
    }
    uVar14 = CONCAT17(uStack_2f1,uStack_2f8);
    if (lVar6 != 0) {
      uVar12 = (*(code *)PTR_memcpy_00799008)(uVar12,lVar6);
    }
    local_1c8 = lVar3;
    uStack_1c0 = uVar14;
    local_1b8 = lVar6;
  }
  lVar6 = (*(code *)PTR_index_into_00799300)(uVar12,param_2);
  if (((lVar6 == 0) &&
      (lVar6 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_14,param_2), lVar6 == 0)) &&
     (lVar6 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_15,param_2), lVar6 == 0)) {
    pcStack_2b0 = (char *)0x0;
    uStack_2a0 = 0;
    local_2b8 = (char *)CONCAT71(local_2b8._1_7_,5);
  }
  else {
    <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
              (&local_308,lVar6);
    local_2b8 = (char *)CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
    pcStack_2b0 = (char *)CONCAT17(uStack_2f9,uStack_300);
    local_2a8 = CONCAT17(uStack_2f1,uStack_2f8);
    uStack_2a0 = CONCAT17(uStack_2e9,uStack_2f0);
  }
  local_198 = 0;
  local_188 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *puVar8 = 0x74616469646e6163;
    *(undefined2 *)(puVar8 + 1) = 0x7365;
    local_1b0 = 10;
    local_1a0 = 10;
    local_1d0 = puVar8;
    puStack_1a8 = puVar8;
    local_2c0 = (undefined8 *)alloc[12e961f32105355]::boxed::box_new_uninit(10,1);
    local_1e8 = 0;
    local_1d8 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
    }
    else {
      *(undefined4 *)((longlong)puVar8 + 3) = 0x746e6574;
      *(undefined4 *)puVar8 = 0x746e6f63;
      local_278 = 7;
      local_268 = 7;
      local_248 = 0;
      local_238 = 0;
      local_280 = puVar8;
      puStack_270 = puVar8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0x656c6f72;
        local_298 = 4;
        local_288 = 4;
        puStack_290 = puVar10;
        serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_308,&PTR_DAT_0078e5d8);
        if (local_308 == -1) {
          local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
          (*(code *)PTR_unwrap_failed_00799028)
                    (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,&local_2e8,
                     &PTR_s_src_acp_backend_rs_0078e5e8);
          goto LAB_005dcbcb;
        }
        local_2e8 = (char *)CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)))
        ;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_308,&local_248,&local_298,&local_2e8);
        if (local_308 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_308);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined1 *)((longlong)puVar8 + 4) = 0x73;
          *(undefined4 *)puVar8 = 0x74726170;
          local_230 = 5;
          local_220 = 5;
          puStack_228 = puVar8;
          puVar9 = (undefined1 *)alloc[12e961f32105355]::boxed::box_new_uninit(5,1);
          local_200 = 0;
          local_1f0 = 0;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar8 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005dcbcb;
          }
          *puVar8 = 0x6e6f6974636e7566;
          *(undefined4 *)(puVar8 + 1) = 0x6c6c6143;
          local_218 = 0xc;
          local_208 = 0xc;
          local_260 = 0;
          local_250 = 0;
          puStack_210 = puVar8;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar10 != (undefined4 *)0x0) {
            *(undefined2 *)puVar10 = 0x6469;
            local_298 = 2;
            local_288 = 2;
            puStack_290 = puVar10;
            serde_json[dc3825464c436029]::value::to_value::<&alloc[12e961f32105355]::string::String>
                      (&local_308,&local_1c8);
            if (local_308 == -1) {
              local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                         &local_2e8,&PTR_s_src_acp_backend_rs_0078e5e8);
              goto LAB_005dcbcb;
            }
            local_2e8 = (char *)CONCAT44(uStack_304,
                                         CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_308,&local_260,&local_298,&local_2e8);
            if (local_308 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_308);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = 0x656d616e;
              local_298 = 4;
              local_288 = 4;
              puStack_290 = puVar10;
              serde_json[dc3825464c436029]::value::to_value::
              <&alloc[12e961f32105355]::string::String>(&local_308,local_180);
              if (local_308 == -1) {
                local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
                (*(code *)PTR_unwrap_failed_00799028)
                          (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                           &local_2e8,&PTR_s_src_acp_backend_rs_0078e5e8);
                goto LAB_005dcbcb;
              }
              local_2e8 = (char *)CONCAT44(uStack_304,
                                           CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_308,&local_260,&local_298,&local_2e8);
              if (local_308 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_308);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = 0x73677261;
                local_298 = 4;
                local_288 = 4;
                puStack_290 = puVar10;
                <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                          (&local_308,&local_2b8);
                if (local_308 != -1) {
                  local_2e8._0_1_ = local_308;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_308,&local_260,&local_298,&local_2e8);
                  if (local_308 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_308);
                  }
                  uStack_300 = (undefined7)local_260;
                  uStack_2f9 = (undefined1)((ulonglong)local_260 >> 0x38);
                  uStack_2f8 = SUB87(puStack_258,0);
                  uStack_2f1 = (undefined1)((ulonglong)puStack_258 >> 0x38);
                  uStack_2f0 = (undefined7)local_250;
                  uStack_2e9 = (undefined1)((ulonglong)local_250 >> 0x38);
                  local_308 = '\x05';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_200,&local_218,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_304._3_1_ = (undefined1)local_200;
                  uStack_300 = (undefined7)((ulonglong)local_200 >> 8);
                  uStack_2f9 = SUB81(puStack_1f8,0);
                  *puVar9 = 5;
                  *(undefined4 **)(puVar9 + 0x10) = puStack_1f8;
                  *(undefined8 *)(puVar9 + 0x18) = local_1f0;
                  *(ulonglong *)(puVar9 + 1) =
                       CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                  *(ulonglong *)(puVar9 + 9) = CONCAT17(uStack_2f9,uStack_300);
                  uStack_300 = 1;
                  uStack_2f9 = 0;
                  uStack_2f8 = SUB87(puVar9,0);
                  uStack_2f1 = (undefined1)((ulonglong)puVar9 >> 0x38);
                  uStack_2f0 = 1;
                  uStack_2e9 = 0;
                  local_308 = '\x04';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_248,&local_230,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_300 = (undefined7)local_248;
                  uStack_2f9 = (undefined1)((ulonglong)local_248 >> 0x38);
                  uStack_2f8 = SUB87(puStack_240,0);
                  uStack_2f1 = (undefined1)((ulonglong)puStack_240 >> 0x38);
                  uStack_2f0 = (undefined7)local_238;
                  uStack_2e9 = (undefined1)((ulonglong)local_238 >> 0x38);
                  local_308 = '\x05';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_1e8,&local_278,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_304._3_1_ = (undefined1)local_1e8;
                  uStack_300 = (undefined7)((ulonglong)local_1e8 >> 8);
                  uStack_2f9 = SUB81(puStack_1e0,0);
                  *(undefined1 *)local_2c0 = 5;
                  local_2c0[2] = puStack_1e0;
                  local_2c0[3] = local_1d8;
                  *(ulonglong *)((longlong)local_2c0 + 1) =
                       CONCAT44(uStack_304,CONCAT22(uStack_306,CONCAT11(uStack_307,local_308)));
                  *(ulonglong *)((longlong)local_2c0 + 9) = CONCAT17(uStack_2f9,uStack_300);
                  uStack_300 = 1;
                  uStack_2f9 = 0;
                  uStack_2f8 = SUB87(local_2c0,0);
                  uStack_2f1 = (undefined1)((ulonglong)local_2c0 >> 0x38);
                  uStack_2f0 = 1;
                  uStack_2e9 = 0;
                  local_308 = '\x04';
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2e8,&local_198,&local_1b0,&local_308);
                  if ((char)local_2e8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2e8);
                  }
                  uStack_300 = (undefined7)local_198;
                  uStack_2f9 = (undefined1)((ulonglong)local_198 >> 0x38);
                  uStack_2f8 = (undefined7)lStack_190;
                  uStack_2f1 = (undefined1)((ulonglong)lStack_190 >> 0x38);
                  uStack_2f0 = (undefined7)local_188;
                  uStack_2e9 = (undefined1)((ulonglong)local_188 >> 0x38);
                  local_308 = '\x05';
                  pcStack_2e0 = PTR_fmt_00799758;
                  local_2e8 = &local_308;
                  (*(code *)PTR_format_inner_00799048)(local_198,&local_2e8);
                  param_1[2] = local_110;
                  *param_1 = local_120;
                  param_1[1] = uStack_118;
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_308,&DAT_00186728);
                  uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <serde_json[dc3825464c436029]::value::Value>(&local_2b8);
                  if (local_1c8 != 0) {
                    uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                  }
                  if (local_180[0] == 0) {
                    return param_1;
                  }
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                  return param_1;
                }
                local_2e8 = (char *)CONCAT17(uStack_2f9,uStack_300);
                (*(code *)PTR_unwrap_failed_00799028)
                          (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                           &local_2e8,&PTR_s_src_acp_backend_rs_0078e5e8);
                goto LAB_005dcbcb;
              }
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005dcbcb;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
    }
  }
LAB_005dcbcb:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


