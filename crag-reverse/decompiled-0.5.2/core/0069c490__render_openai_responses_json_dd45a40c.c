// 0069c490 render_openai_responses_json

/* WARNING: Removing unreachable block (ram,0x0069d280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::multiprotocol::render_openai_responses_json */

void __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::render_openai_responses_json
          (undefined4 param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
          longlong param_5,undefined4 param_6,undefined4 param_7,longlong param_8,longlong param_9)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined3 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  char cVar10;
  undefined1 uVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  undefined4 *puVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  int iVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  char *pcVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined8 *local_318;
  code *local_310;
  undefined8 local_2f8;
  char *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  char *local_288;
  char *local_280;
  undefined1 *local_278;
  undefined8 local_270;
  uint uStack_268;
  int iStack_264;
  undefined8 local_260;
  undefined8 local_258;
  uint uStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  longlong local_1e0;
  longlong local_1d8;
  char *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  longlong local_180;
  char *local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  uint uStack_160;
  int iStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  uint uStack_140;
  undefined3 uStack_13c;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined8 local_131;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 *local_100;
  undefined8 local_f8;
  longlong local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  
  puVar8 = PTR_clone_00798fd0;
  puVar7 = PTR___rust_dealloc_00798fc8;
  local_200 = CONCAT44(local_200._4_4_,param_7);
  local_1f0 = 0;
  uStack_1e8 = 8;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = (char *)0x1;
  local_1c8 = 0;
  local_180 = 0;
  local_178 = (char *)0x1;
  local_170 = 0;
  local_218 = *(longlong **)(param_3 + 8);
  local_208 = *(longlong *)(param_3 + 0x10);
  puVar24 = (undefined1 *)(local_208 * 0x68);
  local_288 = (char *)CONCAT44(local_288._4_4_,param_6);
  local_278 = puVar24;
  local_1a0 = param_3;
  local_e0 = param_2;
  local_d8 = param_4;
  local_d0 = param_5;
  if (local_208 == 0) {
    local_280 = (char *)0x1;
    lVar16 = 0;
    lVar19 = 0;
    local_210 = 1;
    local_1f8 = 0;
  }
  else if ((char)param_6 == '\0') {
    plVar22 = local_218 + 4;
    local_280 = (char *)0x1;
    lVar16 = 0;
    lVar19 = 0;
    local_210 = 1;
    local_1f8 = 0;
    do {
      if (plVar22[-4] == -0x8000000000000000) {
        uVar1 = plVar22[-1];
        if ((ulonglong)(local_180 - lVar16) < uVar1) {
          param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                              (&local_180,lVar16,uVar1,1,1);
          local_280 = local_178;
          lVar16 = local_170;
LAB_0069c6e0:
          param_1 = (*(code *)PTR_memcpy_00799008)(param_1,uVar1);
        }
        else if (uVar1 != 0) goto LAB_0069c6e0;
        lVar16 = lVar16 + uVar1;
        local_170 = lVar16;
        if (plVar22[2] != 0) {
          param_1 = (*(code *)PTR_clone_00798fd0)();
          if (local_1f8 != 0) {
            param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          local_1f8 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
          local_210 = CONCAT44(uStack_2cc,uStack_2d0);
          lVar19 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
        }
      }
      plVar22 = plVar22 + 0xd;
      puVar24 = puVar24 + -0x68;
    } while (puVar24 != (undefined1 *)0x0);
  }
  else {
    plVar22 = local_218 + 4;
    local_210 = 1;
    lVar19 = 0;
    local_1f8 = 0;
    do {
      if ((plVar22[-4] == -0x8000000000000000) && (plVar22[2] != 0)) {
        uVar28 = (*(code *)puVar8)();
        if (local_1f8 != 0) {
          (*(code *)puVar7)(uVar28,1);
        }
        local_1f8 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
        local_210 = CONCAT44(uStack_2cc,uStack_2d0);
        lVar19 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
      }
      plVar22 = plVar22 + 0xd;
      puVar24 = puVar24 + -0x68;
    } while (puVar24 != (undefined1 *)0x0);
    local_280 = (char *)0x1;
    lVar16 = 0;
  }
  if ((((char)local_288 == '\0') && (lVar16 != 0)) || (((char)local_200 != '\0' && (lVar19 != 0))))
  {
    local_270 = 0;
    local_260 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar12 != (char *)0x0) {
      pcVar12[0] = 'i';
      pcVar12[1] = 'd';
      local_2f8 = 2;
      local_2e8 = 2;
      local_2f0 = pcVar12;
      local_e8 = lVar19;
      (*(code *)PTR_new_v4_00799350)();
      local_258 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
      uStack_250 = uStack_2d0;
      iStack_24c = uStack_2cc;
      local_318 = &local_258;
      local_310 = <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
      ;
      (*(code *)PTR_format_inner_00799048)((uint)local_2d8,&local_318);
      iVar21 = uStack_2c8._4_4_;
      uVar9 = (uint)uStack_2c8;
      lVar19 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
      lVar15 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
      if (uStack_2c8._4_4_ < 0) {
LAB_0069c877:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069f956;
      }
      if (lVar15 == 0) {
        lVar13 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar13 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar13 == 0) goto LAB_0069c877;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar15);
      }
      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
      uStack_2d0 = uVar9;
      uStack_2cc = iVar21;
      uStack_2c8._0_4_ = (uint)lVar13;
      uStack_2c8._4_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uStack_2c0._0_4_ = uVar9;
      uStack_2c0._4_4_ = iVar21;
      uVar28 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
               ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
      if ((char)local_318 != -1) {
        uVar28 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(&local_318);
      }
      if (lVar19 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      lVar19 = local_e8;
      if (pcVar12 != (char *)0x0) {
        builtin_strncpy(pcVar12,"type",4);
        local_2f8 = 4;
        local_2e8 = 4;
        local_2f0 = pcVar12;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069f956;
        }
        *puVar14 = 0x6e696e6f73616572;
        *(undefined1 *)(puVar14 + 1) = 0x67;
        local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
        uStack_2d0 = 9;
        uStack_2cc = 0;
        uStack_2c8._0_4_ = (uint)puVar14;
        uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
        uStack_2c0._0_4_ = 9;
        uStack_2c0._4_4_ = 0;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
        if ((char)local_318 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_318);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar12 != (char *)0x0) {
          builtin_strncpy(pcVar12,"status",6);
          local_2f8 = 6;
          local_2e8 = 6;
          local_2f0 = pcVar12;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar14 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0069f956;
          }
          *puVar14 = 0x6574656c706d6f63;
          *(undefined1 *)(puVar14 + 1) = 100;
          local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
          uStack_2d0 = 9;
          uStack_2cc = 0;
          uStack_2c8._0_4_ = (uint)puVar14;
          uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
          uStack_2c0._0_4_ = 9;
          uStack_2c0._4_4_ = 0;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
          if ((char)local_318 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_318);
          }
          if (((char)local_288 == '\0') && (lVar16 != 0)) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar12 != (char *)0x0) {
              builtin_strncpy(pcVar12,"summary",7);
              local_230 = 7;
              local_220 = 7;
              local_228 = pcVar12;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar24 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar24 == (undefined1 *)0x0) {
                (*(code *)PTR_handle_alloc_error_007991d8)();
                goto LAB_0069f956;
              }
              local_258 = 0;
              local_248 = 0;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar12 != (char *)0x0) {
                builtin_strncpy(pcVar12,"type",4);
                local_2f8 = 4;
                local_2e8 = 4;
                local_2f0 = pcVar12;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar14 == (undefined8 *)0x0) {
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_0069f956;
                }
                *puVar14 = 0x5f7972616d6d7573;
                *(undefined4 *)(puVar14 + 1) = 0x74786574;
                local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                uStack_2d0 = 0xc;
                uStack_2cc = 0;
                uStack_2c8._0_4_ = (uint)puVar14;
                uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
                uStack_2c0._0_4_ = 0xc;
                uStack_2c0._4_4_ = 0;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                if ((char)local_318 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_318);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar12 != (char *)0x0) {
                  builtin_strncpy(pcVar12,"text",4);
                  local_2f8 = 4;
                  local_2e8 = 4;
                  local_2f0 = pcVar12;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar15 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar15 == 0) {
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_0069f956;
                  }
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar16);
                  local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                  uStack_2d0 = (uint)lVar16;
                  uStack_2cc = (int)((ulonglong)lVar16 >> 0x20);
                  uStack_2c8._0_4_ = (uint)lVar15;
                  uStack_2c8._4_4_ = (int)((ulonglong)lVar15 >> 0x20);
                  uStack_2c0._0_4_ = uStack_2d0;
                  uStack_2c0._4_4_ = uStack_2cc;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                  if ((char)local_318 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_318);
                  }
                  local_2d8._7_1_ = (undefined1)local_258;
                  uStack_2d0 = (uint)(local_258 >> 8);
                  uStack_2cc._0_3_ = (undefined3)(local_258 >> 0x28);
                  uStack_2cc._3_1_ = (undefined1)uStack_250;
                  uStack_2c8._0_4_ = (uint)(CONCAT44(iStack_24c,uStack_250) >> 8);
                  *puVar24 = 5;
                  *(ulonglong *)(puVar24 + 0x10) =
                       CONCAT35((int3)((uint)iStack_24c >> 8),
                                CONCAT41((uint)uStack_2c8,uStack_2cc._3_1_));
                  *(undefined8 *)(puVar24 + 0x18) = local_248;
                  *(uint *)(puVar24 + 1) = (uint)local_2d8;
                  *(int *)(puVar24 + 5) = local_2d8._4_4_;
                  *(uint *)(puVar24 + 9) = uStack_2d0;
                  *(int *)(puVar24 + 0xd) = uStack_2cc;
                  uStack_2d0 = 1;
                  uStack_2cc = 0;
                  uStack_2c8._0_4_ = (uint)puVar24;
                  uStack_2c8._4_4_ = (int)((ulonglong)puVar24 >> 0x20);
                  uStack_2c0._0_4_ = 1;
                  uStack_2c0._4_4_ = 0;
                  local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,4);
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_318,&local_270,&local_230,&local_2d8);
                  if ((char)local_318 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_318);
                  }
                  goto LAB_0069cdca;
                }
              }
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069f956;
            }
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar12 != (char *)0x0) {
              builtin_strncpy(pcVar12,"summary",7);
              local_2f8 = 7;
              local_2e8 = 7;
              uStack_2d0 = 0;
              uStack_2cc = 0;
              uStack_2c8._0_4_ = 8;
              uStack_2c8._4_4_ = 0;
              uStack_2c0._0_4_ = 0;
              uStack_2c0._4_4_ = 0;
              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,4);
              local_2f0 = pcVar12;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
              if ((char)local_318 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_318);
              }
LAB_0069cdca:
              if (((char)local_200 != '\0') && (lVar19 != 0)) {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                uVar6 = s_encrypted_content_001a5368._12_4_;
                uVar5 = s_encrypted_content_001a5368._8_4_;
                uVar28 = s_encrypted_content_001a5368._4_4_;
                if (pcVar12 == (char *)0x0) goto LAB_0069efed;
                *(undefined4 *)pcVar12 = s_encrypted_content_001a5368._0_4_;
                *(undefined4 *)(pcVar12 + 4) = uVar28;
                *(undefined4 *)(pcVar12 + 8) = uVar5;
                *(undefined4 *)(pcVar12 + 0xc) = uVar6;
                pcVar12[0x10] = 't';
                local_2f8 = 0x11;
                local_2e8 = 0x11;
                local_2f0 = pcVar12;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar16 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar16 == 0) {
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_0069f956;
                }
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar19);
                local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                uStack_2d0 = (uint)lVar19;
                uStack_2cc = (int)((ulonglong)lVar19 >> 0x20);
                uStack_2c8._0_4_ = (uint)lVar16;
                uStack_2c8._4_4_ = (int)((ulonglong)lVar16 >> 0x20);
                uStack_2c0._0_4_ = uStack_2d0;
                uStack_2c0._4_4_ = uStack_2cc;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
                if ((char)local_318 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_318);
                }
              }
              lVar19 = local_1e0;
              uStack_2c0._0_4_ = (uint)local_260;
              uStack_2c0._4_4_ = (int)((ulonglong)local_260 >> 0x20);
              uStack_2d0 = (uint)local_270;
              uStack_2cc = local_270._4_4_;
              uStack_2c8._0_4_ = uStack_268;
              uStack_2c8._4_4_ = iStack_264;
              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,5);
              if (local_1e0 == local_1f0) {
                (*(code *)PTR_grow_one_00799310)();
              }
              lVar16 = lVar19 * 0x20;
              puVar14 = (undefined8 *)(uStack_1e8 + 0x10 + lVar16);
              *puVar14 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
              puVar14[1] = CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
              puVar18 = (undefined4 *)(uStack_1e8 + lVar16);
              *puVar18 = (uint)local_2d8;
              puVar18[1] = local_2d8._4_4_;
              puVar18[2] = uStack_2d0;
              puVar18[3] = uStack_2cc;
              local_1e0 = lVar19 + 1;
              goto LAB_0069cf0a;
            }
          }
        }
      }
    }
LAB_0069efed:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0069f956;
  }
LAB_0069cf0a:
  local_1c0 = 0;
  local_1b8 = 8;
  local_1b0 = 0;
  if (local_208 != 0) {
    lVar19 = 3;
    if (*local_218 < 0) {
      lVar19 = *local_218;
    }
    local_280 = (char *)0x1;
                    /* WARNING: Could not recover jumptable at 0x0069cf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_001a4790 + *(int *)(&DAT_001a4790 + lVar19 * 4)))();
    return;
  }
  lVar19 = *(longlong *)(local_1a0 + 0x18);
  plVar22 = *(longlong **)(local_1a0 + 0x20);
  lVar16 = *(longlong *)(local_1a0 + 0x28);
  plVar25 = (longlong *)0x0;
  if (lVar19 != -1) {
    plVar25 = plVar22;
  }
  cVar10 = is_safety_finish_reason(plVar25,lVar16);
  if ((lVar19 == -1) || (lVar16 != 10)) {
    if (cVar10 != '\0') goto LAB_0069d120;
LAB_0069d297:
    pcVar12 = &DAT_00000009;
    pcVar26 = "completed";
    uVar11 = 0xff;
LAB_0069d2a6:
    local_218 = (longlong *)CONCAT71(local_218._1_7_,uVar11);
    local_168._1_3_ = (undefined3)local_148;
    local_168 = CONCAT31(local_168._1_3_,uVar11);
    uStack_164 = (undefined4)((ulonglong)local_148 >> 0x18);
    uStack_160._0_1_ = (undefined1)((ulonglong)local_148 >> 0x38);
    uStack_160._1_3_ = (undefined3)uStack_140;
    iStack_15c._1_3_ = (undefined3)_uStack_13c;
    iStack_15c = CONCAT31(iStack_15c._1_3_,(char)(uStack_140 >> 0x18));
    uStack_158 = (uint)CONCAT71(uStack_138,uStack_139);
    uStack_154 = (undefined4)((uint7)uStack_138 >> 0x18);
    uStack_150 = local_131;
    if (local_1b0 == 0) {
      local_270 = 0;
      local_260 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar17 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar17 != (char *)0x0) {
        pcVar17[0] = 'i';
        pcVar17[1] = 'd';
        local_2f8 = 2;
        local_2e8 = 2;
        local_2f0 = pcVar17;
        local_280 = pcVar12;
        (*(code *)PTR_new_v4_00799350)();
        local_258 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
        uStack_250 = uStack_2d0;
        iStack_24c = uStack_2cc;
        local_318 = &local_258;
        local_310 = <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                    fmt;
        (*(code *)PTR_format_inner_00799048)((uint)local_2d8,&local_318);
        iVar21 = uStack_2c8._4_4_;
        uVar9 = (uint)uStack_2c8;
        lVar19 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
        local_278 = (undefined1 *)CONCAT44(uStack_2cc,uStack_2d0);
        lVar16 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
        if (uStack_2c8._4_4_ < 0) {
LAB_0069d3b5:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069f956;
        }
        if (lVar16 == 0) {
          lVar15 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar15 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar15 == 0) goto LAB_0069d3b5;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar16);
        }
        local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
        uStack_2d0 = uVar9;
        uStack_2cc = iVar21;
        uStack_2c8._0_4_ = (uint)lVar15;
        uStack_2c8._4_4_ = (int)((ulonglong)lVar15 >> 0x20);
        uStack_2c0._0_4_ = uVar9;
        uStack_2c0._4_4_ = iVar21;
        uVar28 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                 ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
        pcVar12 = local_280;
        if ((char)local_318 != -1) {
          uVar28 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::value::Value>(&local_318);
        }
        if (lVar19 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar17 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar17 != (char *)0x0) {
          builtin_strncpy(pcVar17,"type",4);
          local_2f8 = 4;
          local_2e8 = 4;
          local_2f0 = pcVar17;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar18 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar18 == (undefined4 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0069f956;
          }
          *(undefined4 *)((longlong)puVar18 + 3) = 0x65676173;
          *puVar18 = 0x7373656d;
          local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
          uStack_2d0 = 7;
          uStack_2cc = 0;
          uStack_2c8._0_4_ = (uint)puVar18;
          uStack_2c8._4_4_ = (int)((ulonglong)puVar18 >> 0x20);
          uStack_2c0._0_4_ = 7;
          uStack_2c0._4_4_ = 0;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
          if ((char)local_318 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_318);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar17 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar17 != (char *)0x0) {
            builtin_strncpy(pcVar17,"role",4);
            local_2f8 = 4;
            local_2e8 = 4;
            local_2f0 = pcVar17;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar14 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069f956;
            }
            *puVar14 = 0x6e61747369737361;
            *(undefined1 *)(puVar14 + 1) = 0x74;
            local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
            uStack_2d0 = 9;
            uStack_2cc = 0;
            uStack_2c8._0_4_ = (uint)puVar14;
            uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
            uStack_2c0._0_4_ = 9;
            uStack_2c0._4_4_ = 0;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
            if ((char)local_318 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_318);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar17 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar17 != (char *)0x0) {
              builtin_strncpy(pcVar17,"status",6);
              local_2f8 = 6;
              local_2e8 = 6;
              local_2f0 = pcVar17;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar19 = (*(code *)PTR___rust_alloc_00799000)();
              if (lVar19 == 0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0069f956;
              }
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,pcVar12);
              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
              uStack_2d0 = (uint)pcVar12;
              uStack_2cc = (int)((ulonglong)pcVar12 >> 0x20);
              uStack_2c8._0_4_ = (uint)lVar19;
              uStack_2c8._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
              uStack_2c0._0_4_ = uStack_2d0;
              uStack_2c0._4_4_ = uStack_2cc;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
              if ((char)local_318 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_318);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar12 != (char *)0x0) {
                builtin_strncpy(pcVar12,"content",7);
                local_230 = 7;
                local_220 = 7;
                local_228 = pcVar12;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                local_278 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
                if (local_278 == (undefined1 *)0x0) {
                  (*(code *)PTR_handle_alloc_error_007991d8)();
                  goto LAB_0069f956;
                }
                local_258 = 0;
                local_248 = 0;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar12 != (char *)0x0) {
                  builtin_strncpy(pcVar12,"type",4);
                  local_2f8 = 4;
                  local_2e8 = 4;
                  local_2f0 = pcVar12;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar14 == (undefined8 *)0x0) {
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_0069f956;
                  }
                  *puVar14 = 0x745f74757074756f;
                  *(undefined4 *)((longlong)puVar14 + 7) = 0x74786574;
                  local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                  uStack_2d0 = 0xb;
                  uStack_2cc = 0;
                  uStack_2c8._0_4_ = (uint)puVar14;
                  uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
                  uStack_2c0._0_4_ = 0xb;
                  uStack_2c0._4_4_ = 0;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                  if ((char)local_318 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_318);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                  lVar19 = local_1c8;
                  if (pcVar12 != (char *)0x0) {
                    builtin_strncpy(pcVar12,"text",4);
                    local_2f8 = 4;
                    local_2e8 = 4;
                    local_2f0 = pcVar12;
                    if (local_1c8 < 0) {
LAB_0069d870:
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_0069f956;
                    }
                    if (local_1c8 == 0) {
                      lVar16 = 1;
                    }
                    else {
                      local_288 = pcVar26;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      lVar16 = (*(code *)PTR___rust_alloc_00799000)();
                      if (lVar16 == 0) goto LAB_0069d870;
                      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar19);
                    }
                    local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                    uStack_2d0 = (uint)lVar19;
                    uStack_2cc = (int)((ulonglong)lVar19 >> 0x20);
                    uStack_2c8._0_4_ = (uint)lVar16;
                    uStack_2c8._4_4_ = (int)((ulonglong)lVar16 >> 0x20);
                    uStack_2c0._0_4_ = uStack_2d0;
                    uStack_2c0._4_4_ = uStack_2cc;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                    if ((char)local_318 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_318);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar12 != (char *)0x0) {
                      builtin_strncpy(pcVar12,"annotations",0xb);
                      local_2f8 = 0xb;
                      local_2e8 = 0xb;
                      uStack_2d0 = 0;
                      uStack_2cc = 0;
                      uStack_2c8._0_4_ = 8;
                      uStack_2c8._4_4_ = 0;
                      uStack_2c0._0_4_ = 0;
                      uStack_2c0._4_4_ = 0;
                      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,4);
                      local_2f0 = pcVar12;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                      if ((char)local_318 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_318);
                      }
                      local_2d8._7_1_ = (undefined1)local_258;
                      uStack_2d0 = (uint)(local_258 >> 8);
                      uStack_2cc._0_3_ = (undefined3)(local_258 >> 0x28);
                      uStack_2cc._3_1_ = (undefined1)uStack_250;
                      uStack_2c8._0_4_ = (uint)(CONCAT44(iStack_24c,uStack_250) >> 8);
                      *local_278 = 5;
                      *(ulonglong *)(local_278 + 0x10) =
                           CONCAT35((int3)((uint)iStack_24c >> 8),
                                    CONCAT41((uint)uStack_2c8,uStack_2cc._3_1_));
                      *(undefined8 *)(local_278 + 0x18) = local_248;
                      *(uint *)(local_278 + 1) = (uint)local_2d8;
                      *(int *)(local_278 + 5) = local_2d8._4_4_;
                      *(uint *)(local_278 + 9) = uStack_2d0;
                      *(int *)(local_278 + 0xd) = uStack_2cc;
                      uStack_2d0 = 1;
                      uStack_2cc = 0;
                      uStack_2c8._0_4_ = (uint)local_278;
                      uStack_2c8._4_4_ = (int)((ulonglong)local_278 >> 0x20);
                      uStack_2c0._0_4_ = 1;
                      uStack_2c0._4_4_ = 0;
                      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,4);
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_318,&local_270,&local_230,&local_2d8);
                      pcVar12 = local_280;
                      if ((char)local_318 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_318);
                      }
                      lVar19 = local_1e0;
                      uStack_2d0 = (uint)local_270;
                      uStack_2cc = local_270._4_4_;
                      uStack_2c8._0_4_ = uStack_268;
                      uStack_2c8._4_4_ = iStack_264;
                      uStack_2c0._0_4_ = (uint)local_260;
                      uStack_2c0._4_4_ = (int)((ulonglong)local_260 >> 0x20);
                      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,5);
                      if (local_1e0 == local_1f0) {
                        (*(code *)PTR_grow_one_00799310)();
                      }
                      lVar16 = lVar19 * 0x20;
                      puVar14 = (undefined8 *)(uStack_1e8 + 0x10 + lVar16);
                      *puVar14 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
                      puVar14[1] = CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
                      puVar18 = (undefined4 *)(uStack_1e8 + lVar16);
                      *puVar18 = (uint)local_2d8;
                      puVar18[1] = local_2d8._4_4_;
                      puVar18[2] = uStack_2d0;
                      puVar18[3] = uStack_2cc;
                      local_1e0 = lVar19 + 1;
                      goto LAB_0069dbba;
                    }
                  }
                }
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0069f956;
              }
            }
          }
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0069f956;
    }
  }
  else {
    if (cVar10 == '\0') {
      if ((short)plVar22[1] != 0x534e || *plVar22 != 0x454b4f545f58414d) goto LAB_0069d297;
      local_258 = 0;
      local_248 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar12 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069f956;
      }
      builtin_strncpy(pcVar12,"reason",6);
      local_2f8 = 6;
      local_2e8 = 6;
      local_2f0 = pcVar12;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar6 = s_max_output_tokens_001a5379._12_4_;
      uVar5 = s_max_output_tokens_001a5379._8_4_;
      uVar28 = s_max_output_tokens_001a5379._4_4_;
      if (pcVar12 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069f956;
      }
      *(undefined4 *)pcVar12 = s_max_output_tokens_001a5379._0_4_;
      *(undefined4 *)(pcVar12 + 4) = uVar28;
      *(undefined4 *)(pcVar12 + 8) = uVar5;
      *(undefined4 *)(pcVar12 + 0xc) = uVar6;
      pcVar12[0x10] = 's';
      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
      uStack_2d0 = 0x11;
      uStack_2cc = 0;
      uStack_2c8._0_4_ = (uint)pcVar12;
      uStack_2c8._4_4_ = (int)((ulonglong)pcVar12 >> 0x20);
      uStack_2c0._0_4_ = 0x11;
      uStack_2c0._4_4_ = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
      if ((char)local_318 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_318);
      }
      local_2d8._7_1_ = (undefined1)local_258;
      uStack_2d0 = (uint)(local_258 >> 8);
      uStack_2cc._0_3_ = (undefined3)(local_258 >> 0x28);
      uStack_2cc._3_1_ = (undefined1)uStack_250;
      uStack_2c8._0_4_ = (uint)(CONCAT44(iStack_24c,uStack_250) >> 8);
      uVar4 = (undefined3)((uint)iStack_24c >> 8);
      uStack_2c8._7_1_ = (undefined1)local_248;
      uStack_2c8._4_4_ = CONCAT13(uStack_2c8._7_1_,uVar4);
      uStack_2c0._0_4_ = (uint)((ulonglong)local_248 >> 8);
      uStack_2c0._4_3_ = (undefined3)((ulonglong)local_248 >> 0x28);
      local_148 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
      uStack_140 = uStack_2d0;
      _uStack_13c = CONCAT13(uStack_2cc._3_1_,(undefined3)uStack_2cc);
      uStack_138 = (undefined7)(CONCAT35(uVar4,CONCAT41((uint)uStack_2c8,uStack_2cc._3_1_)) >> 8);
      local_131 = local_248;
      pcVar12 = (char *)0xa;
      pcVar26 = "incomplete";
      uVar11 = 5;
      goto LAB_0069d2a6;
    }
LAB_0069d120:
    local_258 = 0;
    local_248 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar12 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0069f956;
    }
    builtin_strncpy(pcVar12,"reason",6);
    local_2f8 = 6;
    local_2e8 = 6;
    local_2f0 = pcVar12;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar14 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0069f956;
    }
    *(undefined8 *)((longlong)puVar14 + 6) = 0x7265746c69665f74;
    *puVar14 = 0x5f746e65746e6f63;
    local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
    uStack_2d0 = 0xe;
    uStack_2cc = 0;
    uStack_2c8._0_4_ = (uint)puVar14;
    uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
    uStack_2c0._0_4_ = 0xe;
    uStack_2c0._4_4_ = 0;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
    if ((char)local_318 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_318);
    }
    uStack_2c8._7_1_ = (undefined1)local_248;
    uStack_2c0._0_4_ = (uint)((ulonglong)local_248 >> 8);
    uStack_2c0._4_3_ = (undefined3)((ulonglong)local_248 >> 0x28);
    local_2d8._7_1_ = (undefined1)local_258;
    uStack_2d0 = (uint)(local_258 >> 8);
    uStack_2cc._0_3_ = (undefined3)(local_258 >> 0x28);
    uStack_2cc._3_1_ = (undefined1)uStack_250;
    uStack_2c8._0_4_ = (uint)(CONCAT44(iStack_24c,uStack_250) >> 8);
    uStack_2c8._4_3_ = (undefined3)((uint)iStack_24c >> 8);
    local_148 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
    uStack_140 = uStack_2d0;
    uVar3 = CONCAT35(uStack_2c8._4_3_,CONCAT41((uint)uStack_2c8,uStack_2cc._3_1_));
    _uStack_13c = CONCAT13(uStack_2cc._3_1_,(undefined3)uStack_2cc);
    uStack_138 = (undefined7)((ulonglong)uVar3 >> 8);
    uStack_150 = local_248;
    uStack_154 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_168._1_3_ = (undefined3)(uint)local_2d8;
    local_168 = CONCAT31(local_168._1_3_,5);
    uStack_164 = CONCAT31(local_2d8._4_3_,(char)((uint)local_2d8 >> 0x18));
    uStack_160 = (uint)local_258;
    iStack_15c = (int)(local_258 >> 0x20);
    uStack_158 = uStack_250;
    local_218 = (longlong *)CONCAT71(local_218._1_7_,5);
    local_131 = uStack_150;
    if (local_1b0 == 0) {
      bVar27 = *(longlong *)(local_1a0 + 0x30) != -1;
      pcVar12 = "content_filter";
      if (bVar27) {
        pcVar12 = *(char **)(local_1a0 + 0x38);
      }
      lVar15 = 0xe;
      if (bVar27) {
        lVar16 = *(longlong *)(local_1a0 + 0x40);
        lVar15 = *(longlong *)(local_1a0 + 0x40);
      }
      if (lVar19 == -1) {
        lVar16 = lVar15;
      }
      local_270 = 0;
      local_260 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)(pcVar12);
      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar12 != (char *)0x0) {
        pcVar12[0] = 'i';
        pcVar12[1] = 'd';
        local_2f8 = 2;
        local_2e8 = 2;
        local_2f0 = pcVar12;
        (*(code *)PTR_new_v4_00799350)();
        local_258 = CONCAT44(local_2d8._4_4_,(uint)local_2d8);
        uStack_250 = uStack_2d0;
        iStack_24c = uStack_2cc;
        local_310 = <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                    fmt;
        local_318 = &local_258;
        (*(code *)PTR_format_inner_00799048)((uint)local_2d8,&local_318);
        iVar21 = uStack_2c8._4_4_;
        uVar9 = (uint)uStack_2c8;
        local_280 = (char *)CONCAT44(local_2d8._4_4_,(uint)local_2d8);
        local_278 = (undefined1 *)CONCAT44(uStack_2cc,uStack_2d0);
        lVar19 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
        if (uStack_2c8._4_4_ < 0) {
LAB_0069d9d5:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069f956;
        }
        if (lVar19 == 0) {
          lVar15 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar15 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar15 == 0) goto LAB_0069d9d5;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_09,lVar19);
        }
        local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
        uStack_2d0 = uVar9;
        uStack_2cc = iVar21;
        uStack_2c8._0_4_ = (uint)lVar15;
        uStack_2c8._4_4_ = (int)((ulonglong)lVar15 >> 0x20);
        uStack_2c0._0_4_ = uVar9;
        uStack_2c0._4_4_ = iVar21;
        uVar28 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                 ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
        pcVar12 = local_280;
        if ((char)local_318 != -1) {
          uVar28 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::value::Value>(&local_318);
        }
        if (pcVar12 != (char *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar12 != (char *)0x0) {
          builtin_strncpy(pcVar12,"type",4);
          local_2f8 = 4;
          local_2e8 = 4;
          local_2f0 = pcVar12;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar18 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar18 == (undefined4 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0069f956;
          }
          *(undefined4 *)((longlong)puVar18 + 3) = 0x65676173;
          *puVar18 = 0x7373656d;
          local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
          uStack_2d0 = 7;
          uStack_2cc = 0;
          uStack_2c8._0_4_ = (uint)puVar18;
          uStack_2c8._4_4_ = (int)((ulonglong)puVar18 >> 0x20);
          uStack_2c0._0_4_ = 7;
          uStack_2c0._4_4_ = 0;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
          if ((char)local_318 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_318);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar12 != (char *)0x0) {
            builtin_strncpy(pcVar12,"role",4);
            local_2f8 = 4;
            local_2e8 = 4;
            local_2f0 = pcVar12;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar14 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069f956;
            }
            *puVar14 = 0x6e61747369737361;
            *(undefined1 *)(puVar14 + 1) = 0x74;
            local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
            uStack_2d0 = 9;
            uStack_2cc = 0;
            uStack_2c8._0_4_ = (uint)puVar14;
            uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
            uStack_2c0._0_4_ = 9;
            uStack_2c0._4_4_ = 0;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
            if ((char)local_318 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_318);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar12 != (char *)0x0) {
              builtin_strncpy(pcVar12,"status",6);
              local_2f8 = 6;
              local_2e8 = 6;
              local_2f0 = pcVar12;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar14 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0069f956;
              }
              *puVar14 = 0x656c706d6f636e69;
              *(undefined2 *)(puVar14 + 1) = 0x6574;
              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
              uStack_2d0 = 10;
              uStack_2cc = 0;
              uStack_2c8._0_4_ = (uint)puVar14;
              uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
              uStack_2c0._0_4_ = 10;
              uStack_2c0._4_4_ = 0;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
              if ((char)local_318 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_318);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar12 != (char *)0x0) {
                builtin_strncpy(pcVar12,"content",7);
                local_230 = 7;
                local_220 = 7;
                local_280 = pcVar12;
                local_228 = pcVar12;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar24 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar24 == (undefined1 *)0x0) {
                  (*(code *)PTR_handle_alloc_error_007991d8)();
                  goto LAB_0069f956;
                }
                local_258 = 0;
                local_248 = 0;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar12 != (char *)0x0) {
                  builtin_strncpy(pcVar12,"type",4);
                  local_2f8 = 4;
                  local_2e8 = 4;
                  local_2f0 = pcVar12;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar18 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar18 == (undefined4 *)0x0) {
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_0069f956;
                  }
                  *(undefined4 *)((longlong)puVar18 + 3) = 0x6c617375;
                  *puVar18 = 0x75666572;
                  local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                  uStack_2d0 = 7;
                  uStack_2cc = 0;
                  uStack_2c8._0_4_ = (uint)puVar18;
                  uStack_2c8._4_4_ = (int)((ulonglong)puVar18 >> 0x20);
                  uStack_2c0._0_4_ = 7;
                  uStack_2c0._4_4_ = 0;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                  if ((char)local_318 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_318);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                  if (pcVar12 != (char *)0x0) {
                    builtin_strncpy(pcVar12,"refusal",7);
                    local_2f8 = 7;
                    local_2e8 = 7;
                    local_2f0 = pcVar12;
                    if (lVar16 < 0) {
LAB_0069ee2f:
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_0069f956;
                    }
                    if (lVar16 == 0) {
                      lVar19 = 1;
                    }
                    else {
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      lVar19 = (*(code *)PTR___rust_alloc_00799000)();
                      if (lVar19 == 0) goto LAB_0069ee2f;
                      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_11,lVar16);
                    }
                    local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                    uStack_2d0 = (uint)lVar16;
                    uStack_2cc = (int)((ulonglong)lVar16 >> 0x20);
                    uStack_2c8._0_4_ = (uint)lVar19;
                    uStack_2c8._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
                    uStack_2c0._0_4_ = uStack_2d0;
                    uStack_2c0._4_4_ = uStack_2cc;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                    if ((char)local_318 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_318);
                    }
                    local_2d8._7_1_ = (undefined1)local_258;
                    uStack_2d0 = (uint)(local_258 >> 8);
                    uStack_2cc._0_3_ = (undefined3)(local_258 >> 0x28);
                    uStack_2cc._3_1_ = (undefined1)uStack_250;
                    uStack_2c8._0_4_ = (uint)(CONCAT44(iStack_24c,uStack_250) >> 8);
                    *puVar24 = 5;
                    *(ulonglong *)(puVar24 + 0x10) =
                         CONCAT35((int3)((uint)iStack_24c >> 8),
                                  CONCAT41((uint)uStack_2c8,uStack_2cc._3_1_));
                    *(undefined8 *)(puVar24 + 0x18) = local_248;
                    *(uint *)(puVar24 + 1) = (uint)local_2d8;
                    *(int *)(puVar24 + 5) = local_2d8._4_4_;
                    *(uint *)(puVar24 + 9) = uStack_2d0;
                    *(int *)(puVar24 + 0xd) = uStack_2cc;
                    uStack_2d0 = 1;
                    uStack_2cc = 0;
                    uStack_2c8._0_4_ = (uint)puVar24;
                    uStack_2c8._4_4_ = (int)((ulonglong)puVar24 >> 0x20);
                    uStack_2c0._0_4_ = 1;
                    uStack_2c0._4_4_ = 0;
                    local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,4);
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_318,&local_270,&local_230,&local_2d8);
                    if ((char)local_318 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_318);
                    }
                    lVar19 = local_1e0;
                    uStack_2d0 = (uint)local_270;
                    uStack_2cc = local_270._4_4_;
                    uStack_2c8._0_4_ = uStack_268;
                    uStack_2c8._4_4_ = iStack_264;
                    uStack_2c0._0_4_ = (uint)local_260;
                    uStack_2c0._4_4_ = (int)((ulonglong)local_260 >> 0x20);
                    local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,5);
                    if (local_1e0 == local_1f0) {
                      (*(code *)PTR_grow_one_00799310)();
                    }
                    lVar16 = lVar19 * 0x20;
                    puVar14 = (undefined8 *)(uStack_1e8 + 0x10 + lVar16);
                    *puVar14 = CONCAT44(uStack_2c8._4_4_,(uint)uStack_2c8);
                    puVar14[1] = CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0);
                    puVar18 = (undefined4 *)(uStack_1e8 + lVar16);
                    *puVar18 = (uint)local_2d8;
                    puVar18[1] = local_2d8._4_4_;
                    puVar18[2] = uStack_2d0;
                    puVar18[3] = uStack_2cc;
                    local_1e0 = lVar19 + 1;
                    goto LAB_0069d438;
                  }
                }
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0069f956;
              }
            }
          }
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0069f956;
    }
LAB_0069d438:
    pcVar12 = (char *)0xa;
  }
LAB_0069dbba:
  uStack_2c0 = local_1b0 * 0x20 + local_1b8;
  local_2d8._0_4_ = (uint)local_1b8;
  local_2d8._4_4_ = (int)((ulonglong)local_1b8 >> 0x20);
  uStack_2c8._0_4_ = (uint)local_1c0;
  uStack_2c8._4_4_ = (int)((ulonglong)local_1c0 >> 0x20);
  uStack_2d0 = (uint)local_2d8;
  uStack_2cc = local_2d8._4_4_;
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::vec::into_iter::IntoIter<serde_json[dc3825464c436029]::value::Value>>>
  ::spec_extend(&local_1f0,&local_2d8);
  lVar19 = *(longlong *)(local_1a0 + 0xc0);
  local_200 = *(longlong *)(local_1a0 + 0xd0);
  local_278 = (undefined1 *)(*(longlong *)(local_1a0 + 200) + local_200);
  local_288 = local_278 + lVar19;
  if (*(char **)(local_1a0 + 0xd8) != (char *)0x0) {
    local_288 = *(char **)(local_1a0 + 0xd8);
  }
  if (param_8 == 0) {
    local_208 = lVar19;
    uVar28 = (*(code *)PTR_new_v4_00799350)();
    uStack_2d0 = 0x6a3670;
    uStack_2cc = 0;
    local_2d8 = &local_318;
    (*(code *)PTR_format_inner_00799048)(uVar28,&local_2d8);
  }
  else {
    if (param_9 < 0) {
LAB_0069dc66:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0069f956;
    }
    if (param_9 == 0) {
      lVar16 = 1;
      local_208 = lVar19;
    }
    else {
      local_208 = lVar19;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar16 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar16 == 0) goto LAB_0069dc66;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,param_9);
    }
    local_120 = param_9;
    local_110 = param_9;
    local_118 = lVar16;
  }
  local_198 = 0;
  local_188 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar26 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  lVar19 = local_110;
  if (pcVar26 != (char *)0x0) {
    pcVar26[0] = 'i';
    pcVar26[1] = 'd';
    local_2f8 = 2;
    local_2e8 = 2;
    local_2f0 = pcVar26;
    if (local_110 < 0) {
LAB_0069dd8f:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0069f956;
    }
    local_280 = pcVar12;
    if (local_110 == 0) {
      lVar16 = 1;
      puVar24 = (undefined1 *)local_2d8;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar16 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar16 == 0) goto LAB_0069dd8f;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_06,lVar19);
      puVar24 = (undefined1 *)local_2d8;
    }
    local_2d8._4_4_ = (int)((ulonglong)puVar24 >> 0x20);
    local_2d8._1_3_ = (undefined3)((ulonglong)puVar24 >> 8);
    local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
    uStack_2d0 = (uint)lVar19;
    uStack_2cc = (int)((ulonglong)lVar19 >> 0x20);
    uStack_2c8._0_4_ = (uint)lVar16;
    uStack_2c8._4_4_ = (int)((ulonglong)lVar16 >> 0x20);
    uStack_2c0._0_4_ = uStack_2d0;
    uStack_2c0._4_4_ = uStack_2cc;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_318,&local_198,&local_2f8,&local_2d8);
    if ((char)local_318 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_318);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar12 != (char *)0x0) {
      builtin_strncpy(pcVar12,"object",6);
      local_2f8 = 6;
      local_2e8 = 6;
      local_2f0 = pcVar12;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar14 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069f956;
      }
      *puVar14 = 0x65736e6f70736572;
      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
      uStack_2d0 = 8;
      uStack_2cc = 0;
      uStack_2c8._0_4_ = (uint)puVar14;
      uStack_2c8._4_4_ = (int)((ulonglong)puVar14 >> 0x20);
      uStack_2c0._0_4_ = 8;
      uStack_2c0._4_4_ = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_318,&local_198,&local_2f8);
      if ((char)local_318 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_318);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar12 != (char *)0x0) {
        builtin_strncpy(pcVar12,"created_at",10);
        local_2f8 = 10;
        local_2e8 = 10;
        local_2f0 = pcVar12;
        (*(code *)PTR_now_00799478)();
        iVar23 = (int)(uint)local_258 >> 0xd;
        iVar21 = iVar23 + -1;
        iVar20 = 0;
        if (iVar23 < 1) {
          iVar20 = (1U - iVar23) / 400 + 1;
          iVar21 = iVar21 + iVar20 * 400;
          iVar20 = iVar20 * -0x23ab1;
        }
        uStack_2c8 = (longlong)
                     (int)(((((uint)local_258 >> 4 & 0x1ff) + iVar20) - iVar21 / 100) +
                           (iVar21 * 0x5b5 >> 2) + (iVar21 / 100 >> 2) + -0xaf93b) * 0x15180 +
                     (local_258 >> 0x20);
        local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,2);
        uStack_2d0 = (uint)((ulonglong)uStack_2c8 >> 0x3f);
        uStack_2cc = 0;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_318,&local_198,&local_2f8,&local_2d8);
        if ((char)local_318 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_318);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar26 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        pcVar12 = local_280;
        if (pcVar26 != (char *)0x0) {
          builtin_strncpy(pcVar26,"status",6);
          local_2f8 = 6;
          local_2e8 = 6;
          local_2f0 = pcVar26;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar19 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar19 == 0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0069f956;
          }
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_07,pcVar12);
          local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
          uStack_2d0 = (uint)pcVar12;
          uStack_2cc = (int)((ulonglong)pcVar12 >> 0x20);
          uStack_2c8._0_4_ = (uint)lVar19;
          uStack_2c8._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
          uStack_2c0._0_4_ = uStack_2d0;
          uStack_2c0._4_4_ = uStack_2cc;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_318,&local_198,&local_2f8,&local_2d8);
          if ((char)local_318 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_318);
          }
          lVar19 = local_d0;
          if ((char)local_218 != -1) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar3 = s_incomplete_details_001a538a._8_8_;
            if (pcVar12 == (char *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069f956;
            }
            *(undefined8 *)pcVar12 = s_incomplete_details_001a538a._0_8_;
            *(undefined8 *)(pcVar12 + 8) = uVar3;
            pcVar12[0x10] = 'l';
            pcVar12[0x11] = 's';
            local_2f8 = 0x12;
            local_2e8 = 0x12;
            uStack_2c8._0_4_ = uStack_158;
            uStack_2c8._4_4_ = uStack_154;
            uStack_2c0._0_4_ = (uint)uStack_150;
            uStack_2c0._4_4_ = uStack_150._4_4_;
            local_2d8._0_4_ = local_168;
            local_2d8._4_4_ = uStack_164;
            uStack_2d0 = uStack_160;
            uStack_2cc = iStack_15c;
            local_2f0 = pcVar12;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_318,&local_198,&local_2f8,&local_2d8);
            if ((char)local_318 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_318);
            }
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar12 != (char *)0x0) {
            builtin_strncpy(pcVar12,"model",5);
            local_2f8 = 5;
            local_2e8 = 5;
            local_2f0 = pcVar12;
            if (lVar19 < 0) {
LAB_0069e1d1:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069f956;
            }
            if (lVar19 == 0) {
              lVar16 = 1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar16 = (*(code *)PTR___rust_alloc_00799000)();
              if (lVar16 == 0) goto LAB_0069e1d1;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_08,lVar19);
            }
            local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
            uStack_2d0 = (uint)lVar19;
            uStack_2cc = (int)((ulonglong)lVar19 >> 0x20);
            uStack_2c8._0_4_ = (uint)lVar16;
            uStack_2c8._4_4_ = (int)((ulonglong)lVar16 >> 0x20);
            uStack_2c0._0_4_ = uStack_2d0;
            uStack_2c0._4_4_ = uStack_2cc;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_318,&local_198,&local_2f8,&local_2d8);
            if ((char)local_318 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_318);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar12 != (char *)0x0) {
              builtin_strncpy(pcVar12,"output",6);
              local_2f8 = 6;
              local_2e8 = 6;
              uStack_2c0._0_4_ = (uint)local_1e0;
              uStack_2c0._4_4_ = (int)((ulonglong)local_1e0 >> 0x20);
              uStack_2d0 = (uint)local_1f0;
              uStack_2cc = local_1f0._4_4_;
              uStack_2c8._0_4_ = (uint)uStack_1e8;
              uStack_2c8._4_4_ = uStack_1e8._4_4_;
              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,4);
              local_2f0 = pcVar12;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_318,&local_198,&local_2f8,&local_2d8);
              if ((char)local_318 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_318);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              lVar19 = local_1c8;
              if (pcVar12 != (char *)0x0) {
                builtin_strncpy(pcVar12,"output_text",0xb);
                local_2f8 = 0xb;
                local_2e8 = 0xb;
                local_2f0 = pcVar12;
                if (local_1c8 < 0) {
LAB_0069e39d:
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_0069f956;
                }
                if (local_1c8 == 0) {
                  lVar16 = 1;
                }
                else {
                  local_280 = local_1d0;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar16 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar16 == 0) goto LAB_0069e39d;
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_10,lVar19);
                }
                local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,3);
                uStack_2d0 = (uint)lVar19;
                uStack_2cc = (int)((ulonglong)lVar19 >> 0x20);
                uStack_2c8._0_4_ = (uint)lVar16;
                uStack_2c8._4_4_ = (int)((ulonglong)lVar16 >> 0x20);
                uStack_2c0._0_4_ = uStack_2d0;
                uStack_2c0._4_4_ = uStack_2cc;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_318,&local_198,&local_2f8,&local_2d8);
                if ((char)local_318 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_318);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar18 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar18 != (undefined4 *)0x0) {
                  *(undefined1 *)(puVar18 + 1) = 0x65;
                  *puVar18 = 0x67617375;
                  local_108 = 5;
                  local_f8 = 5;
                  local_270 = 0;
                  local_260 = 0;
                  local_100 = puVar18;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                  if (pcVar12 != (char *)0x0) {
                    builtin_strncpy(pcVar12,"input_tokens",0xc);
                    local_2f8 = 0xc;
                    local_2e8 = 0xc;
                    local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,2);
                    uStack_2d0 = 0;
                    uStack_2cc = 0;
                    uStack_2c8._0_4_ = (uint)local_208;
                    uStack_2c8._4_4_ = (int)((ulonglong)local_208 >> 0x20);
                    local_2f0 = pcVar12;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
                    if ((char)local_318 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_318);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    uVar6 = s_input_tokens_details_001a539c._12_4_;
                    uVar5 = s_input_tokens_details_001a539c._8_4_;
                    uVar28 = s_input_tokens_details_001a539c._4_4_;
                    if (pcVar12 != (char *)0x0) {
                      *(undefined4 *)pcVar12 = s_input_tokens_details_001a539c._0_4_;
                      *(undefined4 *)(pcVar12 + 4) = uVar28;
                      *(undefined4 *)(pcVar12 + 8) = uVar5;
                      *(undefined4 *)(pcVar12 + 0xc) = uVar6;
                      pcVar12[0x10] = 'a';
                      pcVar12[0x11] = 'i';
                      pcVar12[0x12] = 'l';
                      pcVar12[0x13] = 's';
                      local_230 = 0x14;
                      local_220 = 0x14;
                      local_258 = 0;
                      local_248 = 0;
                      local_228 = pcVar12;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      if (pcVar12 == (char *)0x0) {
                        (*(code *)PTR_handle_error_00798ff0)();
                        goto LAB_0069f956;
                      }
                      builtin_strncpy(pcVar12,"cached_tokens",0xd);
                      local_2f8 = 0xd;
                      local_2e8 = 0xd;
                      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,2);
                      uStack_2d0 = 0;
                      uStack_2cc = 0;
                      uStack_2c8._0_4_ = (uint)*(undefined8 *)(local_1a0 + 0xe0);
                      uStack_2c8._4_4_ = (int)((ulonglong)*(undefined8 *)(local_1a0 + 0xe0) >> 0x20)
                      ;
                      local_2f0 = pcVar12;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                      if ((char)local_318 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_318);
                      }
                      uStack_2d0 = (uint)local_258;
                      uStack_2cc = local_258._4_4_;
                      uStack_2c8._0_4_ = uStack_250;
                      uStack_2c8._4_4_ = iStack_24c;
                      uStack_2c0._0_4_ = (uint)local_248;
                      uStack_2c0._4_4_ = (int)((ulonglong)local_248 >> 0x20);
                      local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,5);
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_318,&local_270,&local_230,&local_2d8);
                      if ((char)local_318 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_318);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      if (pcVar12 != (char *)0x0) {
                        builtin_strncpy(pcVar12,"output_tokens",0xd);
                        local_2f8 = 0xd;
                        local_2e8 = 0xd;
                        local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,2);
                        uStack_2d0 = 0;
                        uStack_2cc = 0;
                        uStack_2c8._0_4_ = (uint)local_278;
                        uStack_2c8._4_4_ = (int)((ulonglong)local_278 >> 0x20);
                        local_2f0 = pcVar12;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
                        if ((char)local_318 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_318);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        if (pcVar12 != (char *)0x0) {
                          builtin_strncpy(pcVar12,"total_tokens",0xc);
                          local_2f8 = 0xc;
                          local_2e8 = 0xc;
                          local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,2);
                          uStack_2d0 = 0;
                          uStack_2cc = 0;
                          uStack_2c8._0_4_ = (uint)local_288;
                          uStack_2c8._4_4_ = (int)((ulonglong)local_288 >> 0x20);
                          local_2f0 = pcVar12;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_318,&local_270,&local_2f8,&local_2d8);
                          if ((char)local_318 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_318);
                          }
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                          uVar6 = s_output_tokens_detailsprompt_is_t_001a53b0._12_4_;
                          uVar5 = s_output_tokens_detailsprompt_is_t_001a53b0._8_4_;
                          uVar28 = s_output_tokens_detailsprompt_is_t_001a53b0._4_4_;
                          if (pcVar12 != (char *)0x0) {
                            *(undefined4 *)pcVar12 =
                                 s_output_tokens_detailsprompt_is_t_001a53b0._0_4_;
                            *(undefined4 *)(pcVar12 + 4) = uVar28;
                            *(undefined4 *)(pcVar12 + 8) = uVar5;
                            *(undefined4 *)(pcVar12 + 0xc) = uVar6;
                            pcVar12[0xd] = '_';
                            pcVar12[0xe] = 'd';
                            pcVar12[0xf] = 'e';
                            pcVar12[0x10] = 't';
                            pcVar12[0x11] = 'a';
                            pcVar12[0x12] = 'i';
                            pcVar12[0x13] = 'l';
                            pcVar12[0x14] = 's';
                            local_230 = 0x15;
                            local_220 = 0x15;
                            local_258 = 0;
                            local_248 = 0;
                            local_228 = pcVar12;
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            puVar18 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                            uVar6 = _UNK_001829ac;
                            uVar5 = _UNK_001829a8;
                            uVar28 = _UNK_001829a4;
                            if (puVar18 != (undefined4 *)0x0) {
                              *puVar18 = _DAT_001829a0;
                              puVar18[1] = uVar28;
                              puVar18[2] = uVar5;
                              puVar18[3] = uVar6;
                              local_2f8 = 0x10;
                              local_2e8 = 0x10;
                              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,2);
                              uStack_2d0 = 0;
                              uStack_2cc = 0;
                              uStack_2c8._0_4_ = (uint)local_200;
                              uStack_2c8._4_4_ = (int)((ulonglong)local_200 >> 0x20);
                              local_2f0 = (char *)puVar18;
                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                              ::insert(&local_318,&local_258,&local_2f8,&local_2d8);
                              if ((char)local_318 != -1) {
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_318);
                              }
                              uStack_2d0 = (uint)local_258;
                              uStack_2cc = local_258._4_4_;
                              uStack_2c8._0_4_ = uStack_250;
                              uStack_2c8._4_4_ = iStack_24c;
                              uStack_2c0._0_4_ = (uint)local_248;
                              uStack_2c0._4_4_ = (int)((ulonglong)local_248 >> 0x20);
                              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,5);
                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                              ::insert(&local_318,&local_270,&local_230,&local_2d8);
                              if ((char)local_318 != -1) {
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_318);
                              }
                              uStack_2d0 = (uint)local_270;
                              uStack_2cc = local_270._4_4_;
                              uStack_2c8._0_4_ = uStack_268;
                              uStack_2c8._4_4_ = iStack_264;
                              uStack_2c0._0_4_ = (uint)local_260;
                              uStack_2c0._4_4_ = (int)((ulonglong)local_260 >> 0x20);
                              local_2d8._0_4_ = CONCAT31(local_2d8._1_3_,5);
                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                              ::insert(&local_318,&local_198,&local_108,&local_2d8);
                              if ((char)local_318 != -1) {
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_318);
                              }
                              *(undefined8 *)(local_e0 + 0x18) = local_188;
                              *(undefined4 *)(local_e0 + 8) = (undefined4)local_198;
                              *(undefined4 *)(local_e0 + 0xc) = local_198._4_4_;
                              *(undefined4 *)(local_e0 + 0x10) = uStack_190;
                              *(undefined4 *)(local_e0 + 0x14) = uStack_18c;
                              *local_e0 = 5;
                              uVar28 = (undefined4)local_198;
                              if (local_120 != 0) {
                                uVar28 = (*(code *)PTR___rust_dealloc_00798fc8)(local_e0,1);
                              }
                              if (local_1f8 != 0) {
                                uVar28 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
                              }
                              if (local_180 != 0) {
                                uVar28 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
                              }
                              if (local_1d8 != 0) {
                                (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
                              }
                              return;
                            }
                            (*(code *)PTR_handle_error_00798ff0)();
                            goto LAB_0069f956;
                          }
                        }
                      }
                    }
                  }
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_0069f956;
                }
              }
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069f956;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069f956;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0069f956:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


