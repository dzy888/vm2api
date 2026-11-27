// 00502120 inspect_sse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::protocol::inspect_sse */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::protocol::inspect_sse
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  int **ppiVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  int *piVar17;
  int *piVar18;
  char *pcVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  int *extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int *local_208;
  undefined4 *puStack_200;
  int *local_1f8;
  ulonglong uStack_1f0;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined1 uStack_1a8;
  byte local_1a0;
  char cStack_19f;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 local_118;
  undefined7 uStack_117;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  ulonglong uStack_81;
  undefined1 local_78 [4] [16];
  
  local_208 = (int *)0x0;
  puStack_200 = (undefined4 *)0x1;
  local_1f8 = (int *)0x0;
  (*(code *)PTR_new_00799a18)("\r\n",param_3,2);
  local_c8 = local_180;
  local_d8 = local_190;
  uStack_d0 = uStack_188;
  uStack_e0 = uStack_198;
  local_f8 = local_1b0;
  local_108 = local_1c0._0_8_;
  uStack_100 = local_1c0._8_8_;
  local_118 = local_1d0[0];
  uStack_117 = local_1d0._1_7_;
  uStack_110 = local_1d0._8_8_;
  local_128._0_4_ = local_1e0._0_4_;
  local_128._4_4_ = local_1e0._4_4_;
  uStack_120 = local_1e0[8];
  uStack_11f = local_1e0._9_7_;
  piVar18 = (int *)0x0;
  puVar10 = (undefined4 *)0x1;
  lVar7 = 0;
  while( true ) {
    uVar22 = <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(local_1e0,&local_128);
    uVar16 = local_1e0._8_8_;
    if (local_1e0[0] == '\0') break;
    uVar4 = local_1d0._0_8_;
    uVar14 = local_1e0._8_8_ - lVar7;
    if ((ulonglong)((longlong)local_208 - (longlong)piVar18) < uVar14) {
      uVar22 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(&local_208,piVar18,uVar14,1,1);
      piVar18 = local_1f8;
    }
    if (uVar16 != lVar7) {
      (*(code *)PTR_memcpy_00799008)(uVar22,uVar14);
    }
    local_1f8 = (int *)((longlong)piVar18 + uVar14);
    if (local_208 == local_1f8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_208,local_1f8,1,1,1);
    }
    *(char *)((longlong)puStack_200 + (longlong)local_1f8) = '\n';
    piVar18 = (int *)((longlong)local_1f8 + 1);
    puVar10 = puStack_200;
    lVar7 = uVar4;
    local_1f8 = piVar18;
  }
  uVar14 = param_3 - lVar7;
  if ((ulonglong)((longlong)local_208 - (longlong)piVar18) < uVar14) {
    uVar22 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(&local_208,piVar18,uVar14,1,1);
    puVar10 = puStack_200;
    piVar18 = local_1f8;
  }
  if (param_3 != lVar7) {
    (*(code *)PTR_memcpy_00799008)(uVar22,uVar14);
  }
  piVar3 = local_208;
  pcVar19 = (char *)((longlong)piVar18 + uVar14);
  if ((pcVar19 < (char *)0x2) || (*(short *)(pcVar19 + (longlong)((longlong)puVar10 + -2)) != 0xa0a)
     ) {
    param_1[7] = DAT_0078cc20;
    uVar22 = _DAT_0078cc18;
    param_1[5] = _DAT_0078cc10;
    param_1[6] = uVar22;
    puVar11 = PTR_s_native_bridge_stream_invalid_0078cc08;
    piVar18 = _DAT_0078cc00;
    param_1[3] = _DAT_0078cc00;
    param_1[4] = puVar11;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "bridge_invalid";
    param_1[2] = 0xe;
    goto joined_r0x00503064;
  }
  local_1e0._8_8_ = pcVar19 + -2;
  local_170 = 0;
  local_168 = 8;
  local_160 = 0;
  local_1e0._0_8_ = 0;
  local_1d0._8_8_ = local_1e0._8_8_;
  local_1d0._0_8_ = puVar10;
  local_1c0._0_8_ = 0;
  local_1b0 = 0xa0000000a;
  uStack_1a8 = 1;
  local_1a0 = 1;
  cStack_19f = '\0';
  bVar21 = true;
  bVar12 = false;
  local_1c0._8_8_ = local_1e0._8_8_;
  do {
    lVar7 = local_1d0._0_8_;
    piVar18 = (int *)<core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                     ::next_match(&local_128,local_1d0);
    if ((int)local_128 == 1) {
      lVar15 = CONCAT71(uStack_117,local_118);
      uVar14 = CONCAT71(uStack_11f,uStack_120) - local_1e0._0_8_;
    }
    else {
      if (cStack_19f != '\0') break;
      cStack_19f = '\x01';
      uVar14 = local_1e0._8_8_ - local_1e0._0_8_;
      if ((uVar14 != 0 | local_1a0) != 1) break;
      lVar7 = local_1d0._0_8_;
      lVar15 = local_1e0._0_8_;
    }
    if (uVar14 == 0) goto LAB_005028c4;
    piVar17 = (int *)(local_1e0._0_8_ + lVar7);
    local_1e0._0_8_ = lVar15;
    if (uVar14 < 0x10) {
      uVar6 = 0;
      do {
        if (*(char *)((longlong)piVar17 + uVar6) == '\r') goto LAB_005028c4;
        uVar6 = uVar6 + 1;
      } while (uVar14 != uVar6);
    }
    else {
      lVar7 = (*(code *)PTR_memchr_aligned_00799490)(piVar18,uVar14);
      lVar15 = local_1e0._0_8_;
      if (lVar7 == 1) goto LAB_005028c4;
    }
    iVar2 = *piVar17;
    uStack_120 = (undefined1)uVar14;
    uStack_11f = (undefined7)(uVar14 >> 8);
    local_118 = 0;
    uStack_117 = 0;
    uStack_100 = CONCAT71(uStack_100._1_7_,1);
    local_108 = 0x3a0000003a;
    uStack_110 = uVar14;
    local_128 = piVar17;
    piVar18 = (int *)<core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                     ::next_match(&local_208,&local_128);
    lVar7 = local_160;
    if ((char)local_208 != '\0') {
      if (uVar14 - (longlong)local_1f8 == 0) {
        bVar20 = false;
      }
      else {
        bVar20 = *(char *)((longlong)piVar17 + (longlong)local_1f8) == ' ';
      }
      lVar15 = (uVar14 - (longlong)local_1f8) - (ulonglong)bVar20;
      pcVar19 = (char *)((longlong)piVar17 + (longlong)local_1f8) + bVar20;
      if (puStack_200 == (undefined4 *)&DAT_00000005) {
        if ((char)piVar17[1] == 't' && *piVar17 == 0x6e657665) {
          auVar24 = ::<str>::trim_matches::<<char>::is_whitespace>(pcVar19,lVar15);
          pbVar8 = auVar24._0_8_;
          piVar18 = extraout_XMM0_Qa;
          if ((((auVar24._8_8_ == 5) &&
               ((byte)(((byte)(*pbVar8 + 0xbf) < 0x1a) << 5 | *pbVar8) == 0x65)) &&
              ((byte)(((byte)(pbVar8[1] + 0xbf) < 0x1a) << 5 | pbVar8[1]) == 0x72)) &&
             (((byte)(((byte)(pbVar8[2] + 0xbf) < 0x1a) << 5 | pbVar8[2]) == 0x72 &&
              ((byte)(((byte)(pbVar8[3] + 0xbf) < 0x1a) << 5 | pbVar8[3]) == 0x6f)))) {
            bVar12 = (bool)(bVar12 | (byte)(((byte)(pbVar8[4] + 0xbf) < 0x1a) << 5 | pbVar8[4]) ==
                                     0x72);
          }
        }
      }
      else if ((puStack_200 == (undefined4 *)&DAT_00000004) && (*piVar17 == 0x61746164)) {
        if (local_160 == local_170) {
          piVar18 = (int *)<alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                           ::grow_one(&local_170);
        }
        lVar13 = lVar7 * 0x10;
        *(char **)(local_168 + lVar13) = pcVar19;
        *(longlong *)(local_168 + 8 + lVar13) = lVar15;
        local_160 = lVar7 + 1;
      }
    }
    bVar21 = (bool)(bVar21 & (char)iVar2 == ':');
  } while (cStack_19f == '\0');
  if (bVar12) {
    alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
              (local_1e0,local_168,local_160,"\n",1);
    lVar7 = local_1e0._0_8_;
    local_78[0] = ::<str>::trim_matches::<<char>::is_whitespace>(local_1e0._8_8_,local_1d0._0_8_);
    if (local_78[0]._8_8_ == 0) {
      local_158 = 0;
      local_148 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar10 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0050313b;
      }
      *(undefined1 *)(puVar10 + 1) = 0x72;
      *puVar10 = 0x6f727265;
      local_b0 = 5;
      local_a0 = 5;
      local_140 = (char *)0x0;
      local_130 = 0;
      local_a8 = puVar10;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar10 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0050313b;
      }
      *(undefined4 *)((longlong)puVar10 + 3) = 0x65676173;
      *puVar10 = 0x7373656d;
      local_208 = (int *)&DAT_00000007;
      local_1f8 = (int *)&DAT_00000007;
      puStack_200 = puVar10;
      serde_json[dc3825464c436029]::value::to_value::<&&str>
                (local_1e0,&PTR_s_upstream_emitted_an_empty_SSE_er_0078cc28);
      if (local_1e0[0] == -1) {
        local_128._0_4_ = local_1e0._8_4_;
        local_128._4_4_ = local_1e0._12_4_;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078c878,&local_128,
                   &PTR_s_src_protocol_rs_0078cc38);
        goto LAB_0050313b;
      }
      local_118 = local_1d0[0];
      uStack_117 = local_1d0._1_7_;
      uStack_110 = local_1d0._8_8_;
      local_128._0_4_ = local_1e0._0_4_;
      local_128._4_4_ = local_1e0._4_4_;
      uStack_120 = local_1e0[8];
      uStack_11f = local_1e0._9_7_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_1e0,&local_140,&local_208,&local_128);
      if (local_1e0[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_1e0);
      }
      local_1e0._8_8_ = local_140;
      local_1d0._8_8_ = local_130;
      local_1d0._0_8_ = uStack_138;
      local_1e0[0] = 5;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_158,&local_b0,local_1e0);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
LAB_00502ca9:
      piVar17 = (int *)CONCAT44(local_128._4_4_,(int)local_128);
      uStack_91 = (undefined1)local_158;
      uStack_90 = (undefined7)((ulonglong)local_158 >> 8);
      local_89 = (undefined1)uStack_150;
      uStack_88 = (undefined7)((ulonglong)uStack_150 >> 8);
      uStack_81 = local_148;
      local_128._0_1_ = '\x05';
    }
    else {
      local_1d0 = (undefined1  [16])0x0;
      local_1e0 = local_78[0];
      local_1c0 = local_78[0];
      serde_json[dc3825464c436029]::de::from_trait::
      <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                (&local_128,local_1e0);
      if ((char)local_128 == -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (&uStack_120);
        local_158 = 0;
        local_148 = 0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar10 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0050313b;
        }
        *(undefined1 *)(puVar10 + 1) = 0x72;
        *puVar10 = 0x6f727265;
        local_b0 = 5;
        local_a0 = 5;
        local_140 = (char *)0x0;
        local_130 = 0;
        local_a8 = puVar10;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar10 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0050313b;
        }
        *(undefined4 *)((longlong)puVar10 + 3) = 0x65676173;
        *puVar10 = 0x7373656d;
        local_208 = (int *)&DAT_00000007;
        local_1f8 = (int *)&DAT_00000007;
        puStack_200 = puVar10;
        serde_json[dc3825464c436029]::value::to_value::<&&str>(local_1e0,local_78);
        if (local_1e0[0] == -1) {
          local_128._0_4_ = local_1e0._8_4_;
          local_128._4_4_ = local_1e0._12_4_;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078c878,&local_128,
                     &PTR_s_src_protocol_rs_0078cc50);
          goto LAB_0050313b;
        }
        local_118 = local_1d0[0];
        uStack_117 = local_1d0._1_7_;
        uStack_110 = local_1d0._8_8_;
        local_128._0_4_ = local_1e0._0_4_;
        local_128._4_4_ = local_1e0._4_4_;
        uStack_120 = local_1e0[8];
        uStack_11f = local_1e0._9_7_;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_1e0,&local_140,&local_208,&local_128);
        uVar22 = local_1e0._0_8_;
        bVar21 = local_1e0[0] != -1;
        local_1e0._0_8_ = uVar22;
        if (bVar21) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_1e0);
        }
        local_1e0._8_8_ = local_140;
        local_1d0._8_8_ = local_130;
        local_1d0._0_8_ = uStack_138;
        local_1e0[0] = 5;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_128,&local_158,&local_b0,local_1e0);
        if ((char)local_128 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_128);
        }
        goto LAB_00502ca9;
      }
      uStack_98 = (undefined7)((ulonglong)local_128 >> 8);
      uStack_88 = uStack_117;
      uStack_81 = uStack_110;
      uStack_91 = uStack_120;
      uStack_90 = uStack_11f;
      local_89 = local_118;
      piVar17 = local_128;
    }
    param_1[1] = 2;
    *(char *)(param_1 + 2) = (char)local_128;
    piVar18 = (int *)CONCAT17(uStack_91,uStack_98);
    *(int **)((longlong)param_1 + 0x11) = piVar18;
    *(ulonglong *)((longlong)param_1 + 0x19) = CONCAT17(local_89,uStack_90);
    param_1[4] = CONCAT71(uStack_88,local_89);
    param_1[5] = uStack_81;
    *param_1 = 0xfffffffffffffffe;
    local_128 = piVar17;
LAB_00502d08:
    if (lVar7 != 0) {
      piVar18 = (int *)(*(code *)PTR___rust_dealloc_00798fc8)(piVar18,1);
    }
  }
  else {
    if (local_160 != 0) {
      alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
                (local_1e0,local_168,local_160,"\n",1);
      local_1c0._0_8_ = local_1e0._8_8_;
      lVar7 = local_1e0._0_8_;
      local_1c0._8_8_ = local_1d0._0_8_;
      local_1e0._0_8_ = local_1e0._8_8_;
      local_1e0._8_8_ = local_1d0._0_8_;
      local_1d0 = (undefined1  [16])0x0;
      serde_json[dc3825464c436029]::de::from_trait::
      <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                (&local_128,local_1e0);
      if ((char)local_128 == -1) {
        local_1e0._0_8_ = CONCAT71(uStack_11f,uStack_120);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (local_1e0);
        puVar11 = PTR_s_native_bridge_stream_invalid_0078cc08;
        param_1[3] = _DAT_0078cc00;
        param_1[4] = puVar11;
        uVar22 = _DAT_0078cbf8;
        param_1[1] = PTR_s_bridge_invalid_0078cbf0;
        param_1[2] = uVar22;
        uVar22 = _DAT_0078cc18;
        piVar18 = _DAT_0078cc10;
        param_1[5] = _DAT_0078cc10;
        param_1[6] = uVar22;
        param_1[7] = 0x60201f6;
        uVar22 = 0xffffffffffffffff;
LAB_00502b0d:
        *param_1 = uVar22;
      }
      else {
        local_208 = local_128;
        puStack_200 = (undefined4 *)CONCAT71(uStack_11f,uStack_120);
        local_1f8 = (int *)CONCAT71(uStack_117,local_118);
        uStack_1f0 = uStack_110;
        ppiVar9 = (int **)(*(code *)PTR_index_into_00799300)(local_128,&local_208);
        if (ppiVar9 == (int **)0x0) {
          ppiVar9 = &local_208;
        }
        pcVar19 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_00,&local_208);
        if ((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) {
LAB_00502879:
          param_1[4] = local_1f8;
          param_1[5] = uStack_1f0;
          param_1[2] = local_208;
          param_1[3] = puStack_200;
          param_1[1] = 2;
          uVar22 = 0xfffffffffffffffe;
          piVar18 = local_208;
          goto LAB_00502b0d;
        }
        pcVar19 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_01,ppiVar9);
        uVar22 = DAT_0078cc20;
        if ((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) goto LAB_00502879;
        if (*(char *)ppiVar9 == '\x05') {
          lVar15 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_02,ppiVar9);
          uVar22 = extraout_XMM0_Qa_03;
          if (lVar15 == 0) {
            uVar16 = 0xf;
            lVar15 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_03,ppiVar9);
            uVar22 = extraout_XMM0_Qa_04;
            if (lVar15 != 0) goto LAB_00502d6f;
LAB_00502df3:
            uVar22 = 0;
          }
          else {
LAB_00502d6f:
            uVar16 = 0xb;
            pcVar19 = (char *)(*(code *)PTR_index_into_00799300)(uVar22,lVar15);
            if (pcVar19 == (char *)0x0) {
              uVar16 = 0xc;
              pcVar19 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_05,lVar15);
              if (pcVar19 == (char *)0x0) goto LAB_00502df3;
            }
            if (*pcVar19 != '\x03') goto LAB_00502df3;
            uVar22 = *(undefined8 *)(pcVar19 + 0x10);
            uVar16 = *(undefined8 *)(pcVar19 + 0x18);
          }
          auVar24 = <core[c0acaeba6ab4c2e0]::option::Option<&str>>::filter::
                    <craggemini_core[66f3c71560d70857]::protocol::inspect_sse::_closure_5_>
                              (uVar22,uVar16);
          lVar13 = auVar24._8_8_;
          lVar15 = auVar24._0_8_;
          if (lVar15 == 0) {
            local_178 = (char *)0xffffffffffffffff;
            uVar22 = extraout_XMM0_Qa_06;
          }
          else {
            uVar22 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (local_1e0,lVar13,0,1,1);
            local_178 = (char *)local_1e0._8_8_;
            if (local_1e0[0] != '\0') {
              (*(code *)PTR_handle_error_00798ff0)();
LAB_0050313b:
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            local_b8 = local_1d0._0_8_;
            if (lVar13 == 0) {
              local_c0 = 0;
            }
            else {
              local_c0 = lVar13;
              uVar22 = (*(code *)PTR_memcpy_00799008)(uVar22,lVar13);
            }
          }
          pcVar19 = (char *)(*(code *)PTR_index_into_00799300)(uVar22,ppiVar9);
          if (pcVar19 == (char *)0x0) {
            pcVar19 = PTR_NULL_00799530;
          }
          puVar11 = PTR_NULL_00799530;
          if (*(longlong *)(pcVar19 + 0x18) != 0) {
            puVar11 = *(undefined **)(pcVar19 + 0x10);
          }
          if (*pcVar19 != '\x04') {
            puVar11 = PTR_NULL_00799530;
          }
          pcVar19 = (char *)(*(code *)PTR_index_into_00799300)(PTR_NULL_00799530,puVar11);
          if (pcVar19 == (char *)0x0) {
            pcVar19 = PTR_NULL_00799530;
          }
          uVar22 = extraout_XMM0_Qa_07;
          if ((*pcVar19 == '\x03') && (*(longlong *)(pcVar19 + 0x18) != 0)) {
            bVar21 = true;
            if (*(longlong *)(pcVar19 + 0x18) == 0x19) {
              pcVar19 = *(char **)(pcVar19 + 0x10);
              auVar23[0] = -(pcVar19[9] == DAT_00183370);
              auVar23[1] = -(pcVar19[10] == UNK_00183371);
              auVar23[2] = -(pcVar19[0xb] == UNK_00183372);
              auVar23[3] = -(pcVar19[0xc] == UNK_00183373);
              auVar23[4] = -(pcVar19[0xd] == UNK_00183374);
              auVar23[5] = -(pcVar19[0xe] == UNK_00183375);
              auVar23[6] = -(pcVar19[0xf] == UNK_00183376);
              auVar23[7] = -(pcVar19[0x10] == UNK_00183377);
              auVar23[8] = -(pcVar19[0x11] == UNK_00183378);
              auVar23[9] = -(pcVar19[0x12] == UNK_00183379);
              auVar23[10] = -(pcVar19[0x13] == UNK_0018337a);
              auVar23[0xb] = -(pcVar19[0x14] == UNK_0018337b);
              auVar23[0xc] = -(pcVar19[0x15] == UNK_0018337c);
              auVar23[0xd] = -(pcVar19[0x16] == UNK_0018337d);
              auVar23[0xe] = -(pcVar19[0x17] == UNK_0018337e);
              auVar23[0xf] = -(pcVar19[0x18] == UNK_0018337f);
              auVar24[0] = -(*pcVar19 == s_FINISH_REASON_UN_00182880[0]);
              auVar24[1] = -(pcVar19[1] == s_FINISH_REASON_UN_00182880[1]);
              auVar24[2] = -(pcVar19[2] == s_FINISH_REASON_UN_00182880[2]);
              auVar24[3] = -(pcVar19[3] == s_FINISH_REASON_UN_00182880[3]);
              auVar24[4] = -(pcVar19[4] == s_FINISH_REASON_UN_00182880[4]);
              auVar24[5] = -(pcVar19[5] == s_FINISH_REASON_UN_00182880[5]);
              auVar24[6] = -(pcVar19[6] == s_FINISH_REASON_UN_00182880[6]);
              auVar24[7] = -(pcVar19[7] == s_FINISH_REASON_UN_00182880[7]);
              auVar24[8] = -(pcVar19[8] == s_FINISH_REASON_UN_00182880[8]);
              auVar24[9] = -(pcVar19[9] == s_FINISH_REASON_UN_00182880[9]);
              auVar24[10] = -(pcVar19[10] == s_FINISH_REASON_UN_00182880[10]);
              auVar24[0xb] = -(pcVar19[0xb] == s_FINISH_REASON_UN_00182880[0xb]);
              auVar24[0xc] = -(pcVar19[0xc] == s_FINISH_REASON_UN_00182880[0xc]);
              auVar24[0xd] = -(pcVar19[0xd] == s_FINISH_REASON_UN_00182880[0xd]);
              auVar24[0xe] = -(pcVar19[0xe] == s_FINISH_REASON_UN_00182880[0xe]);
              auVar24[0xf] = -(pcVar19[0xf] == s_FINISH_REASON_UN_00182880[0xf]);
              auVar24 = auVar24 & auVar23;
              uVar22 = auVar24._0_8_;
              if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) goto LAB_00502f55;
            }
          }
          else {
LAB_00502f55:
            bVar21 = lVar15 != 0;
          }
          puVar11 = (undefined *)(*(code *)PTR_index_into_00799300)(uVar22,puVar11);
          if (puVar11 == (undefined *)0x0) {
            puVar11 = PTR_NULL_00799530;
          }
          pcVar19 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_08,puVar11);
          if (pcVar19 == (char *)0x0) {
            pcVar19 = PTR_NULL_00799530;
          }
          if (*pcVar19 == '\x04') {
            local_1e0._0_8_ = *(undefined8 *)(pcVar19 + 0x10);
            local_1e0._8_8_ = local_1e0._0_8_ + *(longlong *)(pcVar19 + 0x18) * 0x20;
            uVar5 = <core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                    ::any::
                    <craggemini_core[66f3c71560d70857]::protocol::inspect_sse::_closure_7_::_closure_0_>
                              (local_1e0,5);
          }
          else {
            uVar5 = 0;
          }
          param_1[2] = local_178;
          param_1[3] = local_b8;
          param_1[4] = local_c0;
          param_1[1] = 1;
          *(undefined1 *)(param_1 + 5) = 1;
          *(bool *)((longlong)param_1 + 0x29) = bVar21;
          *(undefined1 *)((longlong)param_1 + 0x2a) = uVar5;
          *(bool *)((longlong)param_1 + 0x2b) = lVar15 != 0;
          *param_1 = 0xfffffffffffffffe;
          piVar18 = (int *)core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <serde_json[dc3825464c436029]::value::Value>(&local_208);
          if (lVar7 != 0) {
            piVar18 = (int *)(*(code *)PTR___rust_dealloc_00798fc8)(piVar18,1);
          }
          if (local_170 != 0) {
            piVar18 = (int *)(*(code *)PTR___rust_dealloc_00798fc8)(piVar18,8);
          }
          goto joined_r0x00503064;
        }
        param_1[6] = _DAT_0078cc18;
        param_1[7] = uVar22;
        piVar18 = _DAT_0078cc10;
        param_1[4] = PTR_s_native_bridge_stream_invalid_0078cc08;
        param_1[5] = piVar18;
        piVar18 = _DAT_0078cc00;
        param_1[2] = _DAT_0078cbf8;
        param_1[3] = piVar18;
        puVar11 = PTR_s_bridge_invalid_0078cbf0;
        *param_1 = _DAT_0078cbe8;
        param_1[1] = puVar11;
        piVar18 = (int *)core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <serde_json[dc3825464c436029]::value::Value>(&local_208,5);
      }
      goto LAB_00502d08;
    }
    lVar15 = local_1e0._0_8_;
    if (bVar21) {
      param_1[1] = 0;
      *param_1 = 0xfffffffffffffffe;
    }
    else {
LAB_005028c4:
      local_1e0._0_8_ = lVar15;
      uVar22 = DAT_0078cc20;
      param_1[6] = _DAT_0078cc18;
      param_1[7] = uVar22;
      piVar18 = _DAT_0078cc10;
      param_1[4] = PTR_s_native_bridge_stream_invalid_0078cc08;
      param_1[5] = piVar18;
      piVar18 = _DAT_0078cc00;
      param_1[2] = _DAT_0078cbf8;
      param_1[3] = piVar18;
      puVar11 = PTR_s_bridge_invalid_0078cbf0;
      piVar18 = _DAT_0078cbe8;
      *param_1 = _DAT_0078cbe8;
      param_1[1] = puVar11;
    }
  }
  if (local_170 != 0) {
    piVar18 = (int *)(*(code *)PTR___rust_dealloc_00798fc8)(piVar18,8);
  }
joined_r0x00503064:
  if (piVar3 != (int *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(piVar18,1);
  }
  return param_1;
}


