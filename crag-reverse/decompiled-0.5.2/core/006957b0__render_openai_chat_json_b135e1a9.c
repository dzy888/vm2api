// 006957b0 render_openai_chat_json

/* WARNING: Removing unreachable block (ram,0x006965f1) */
/* WARNING: Removing unreachable block (ram,0x006979fd) */
/* WARNING: Removing unreachable block (ram,0x0069661c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::multiprotocol::render_openai_chat_json */

void __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::render_openai_chat_json
          (undefined1 *param_1,longlong param_2,undefined4 *param_3,undefined1 *param_4,
          undefined4 param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char cVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar19;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  ulonglong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  longlong *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  longlong local_100;
  undefined1 *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 *local_70;
  undefined1 *local_50;
  
  local_168 = 0;
  local_160 = 1;
  local_158 = 0;
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  local_150 = 0;
  uStack_148 = 8;
  local_140 = 0;
  local_128 = param_2;
  local_100 = param_6;
  local_f8 = param_4;
  local_70 = param_3;
  local_50 = param_1;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    local_230 = *(longlong *)(param_2 + 0x10) * 0x68;
    local_1a8 = 1;
    lVar14 = **(longlong **)(param_2 + 8);
    if (-1 < lVar14) {
      lVar14 = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x006958d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_001a4430 + *(int *)(&DAT_001a4430 + lVar14 * 4)))();
    return;
  }
  local_1b0 = CONCAT44(local_1b0._4_4_,param_5);
  local_1a8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar7 == (char *)0x0) goto LAB_00697956;
  builtin_strncpy(pcVar7,"role",4);
  local_228 = 4;
  local_218 = 4;
  uStack_220 = pcVar7;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00697ace;
  }
  *puVar8 = 0x6e61747369737361;
  *(undefined1 *)(puVar8 + 1) = 0x74;
  local_200._0_4_ = CONCAT31(local_200._1_3_,3);
  uStack_1f8 = 9;
  uStack_1f4 = 0;
  uStack_1f0._0_4_ = SUB84(puVar8,0);
  uStack_1f0._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
  uStack_1e8 = 9;
  uStack_1e1 = 0;
  uVar9 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_250,&local_d8,&local_228,&local_200);
  if ((char)local_250 != -1) {
    local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_250)
    ;
  }
  if (local_1a8 == 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    lVar14 = local_128;
    if (pcVar7 != (char *)0x0) {
      builtin_strncpy(pcVar7,"content",7);
      local_228 = 7;
      local_218 = 7;
      local_200._0_4_ = CONCAT31(local_200._1_3_,3);
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_1f0._0_4_ = 1;
      uStack_1f0._4_4_ = 0;
      uStack_1e8 = 0;
      uStack_1e1 = 0;
      uStack_220 = pcVar7;
      uVar9 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_250,&local_d8,&local_228,&local_200);
      if ((char)local_250 != -1) {
        local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>();
      }
      goto LAB_00696678;
    }
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar7 != (char *)0x0) {
      builtin_strncpy(pcVar7,"content",7);
      local_228 = 7;
      local_218 = 7;
      local_200._0_4_ = (uint)local_200 & 0xffffff00;
      local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)pcVar7 >> 8),1));
      uStack_220 = pcVar7;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_250,&local_d8,&local_228,&local_200);
      lVar14 = local_128;
      if ((char)local_250 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>();
      }
LAB_00696678:
      lVar12 = *(longlong *)(lVar14 + 0x18);
      local_130 = *(longlong **)(lVar14 + 0x20);
      lVar1 = *(longlong *)(lVar14 + 0x28);
      local_1b8 = (longlong *)0x0;
      if (lVar12 != -1) {
        local_1b8 = local_130;
      }
      uVar9 = is_safety_finish_reason(local_1b8,lVar1);
      if ((char)uVar9 != '\0') {
        lVar10 = *(longlong *)(lVar14 + 0x40);
        lVar15 = lVar10;
        if (*(longlong *)(lVar14 + 0x30) == -1) {
          lVar10 = lVar1;
          lVar15 = 0xe;
        }
        if (lVar12 == -1) {
          lVar10 = lVar15;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar7 == (char *)0x0) goto LAB_00697956;
        builtin_strncpy(pcVar7,"refusal",7);
        local_228 = 7;
        local_218 = 7;
        uStack_220 = pcVar7;
        if (lVar10 < 0) {
LAB_00696741:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00697ace;
        }
        if (lVar10 == 0) {
          lVar14 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar14 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar14 == 0) goto LAB_00696741;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar10);
        }
        local_200._0_4_ = CONCAT31(local_200._1_3_,3);
        uStack_1f8 = (uint)lVar10;
        uStack_1f4 = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_1f0._0_4_ = (undefined4)lVar14;
        uStack_1f0._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_1e8 = (undefined7)lVar10;
        uStack_1e1 = (undefined1)((ulonglong)lVar10 >> 0x38);
        uVar9 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_250,&local_d8,&local_228,&local_200);
        lVar14 = local_128;
        if ((char)local_250 != -1) {
          local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
          uVar9 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_250);
        }
      }
      lVar10 = local_e0;
      if (((char)local_1b0 == '\0') && (local_e0 != 0)) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        uVar4 = s_reasoning_content_001a4e27._12_4_;
        uVar3 = s_reasoning_content_001a4e27._8_4_;
        uVar19 = s_reasoning_content_001a4e27._4_4_;
        if (pcVar7 == (char *)0x0) goto LAB_00697956;
        *(undefined4 *)pcVar7 = s_reasoning_content_001a4e27._0_4_;
        *(undefined4 *)(pcVar7 + 4) = uVar19;
        *(undefined4 *)(pcVar7 + 8) = uVar3;
        *(undefined4 *)(pcVar7 + 0xc) = uVar4;
        pcVar7[0x10] = 't';
        local_228 = 0x11;
        local_218 = 0x11;
        uStack_220 = pcVar7;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar14 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar14 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00697ace;
        }
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar10);
        local_200._0_4_ = CONCAT31(local_200._1_3_,3);
        uStack_1f8 = (uint)lVar10;
        uStack_1f4 = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_1f0._0_4_ = (undefined4)lVar14;
        uStack_1f0._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_1e8 = (undefined7)lVar10;
        uStack_1e1 = (undefined1)((ulonglong)lVar10 >> 0x38);
        uVar9 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_250,&local_d8,&local_228,&local_200);
        lVar14 = local_128;
        if ((char)local_250 != -1) {
          local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
          uVar9 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_250);
        }
      }
      local_78 = lVar1;
      if (local_1a8 == 0) {
        local_230 = CONCAT44(local_230._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar7 == (char *)0x0) goto LAB_00697956;
        builtin_strncpy(pcVar7,"tool_calls",10);
        local_228 = 10;
        local_218 = 10;
        uStack_1e8 = (undefined7)local_140;
        uStack_1e1 = (undefined1)((ulonglong)local_140 >> 0x38);
        uStack_1f8 = (uint)local_150;
        uStack_1f4 = local_150._4_4_;
        uStack_1f0._0_4_ = (undefined4)uStack_148;
        uStack_1f0._4_4_ = uStack_148._4_4_;
        local_200._0_4_ = CONCAT31(local_200._1_3_,4);
        local_230 = local_230 & 0xffffffff00000000;
        uStack_220 = pcVar7;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_250,&local_d8,&local_228,&local_200);
        lVar14 = local_128;
        if ((char)local_250 != -1) {
          local_230 = local_230 & 0xffffffff00000000;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_250);
        }
        local_230 = local_230 & 0xffffffff00000000;
      }
      lVar1 = *(longlong *)(lVar14 + 0xc0);
      lVar10 = *(longlong *)(lVar14 + 0xd0);
      lVar17 = *(longlong *)(lVar14 + 200) + lVar10;
      lVar15 = lVar1 + lVar17;
      if (*(longlong *)(lVar14 + 0xd8) != 0) {
        lVar15 = *(longlong *)(lVar14 + 0xd8);
      }
      if (local_100 == 0) {
        local_1b0 = lVar15;
        local_138 = lVar10;
        uVar19 = (*(code *)PTR_new_v4_00799350)();
        uStack_1f8 = 0x6a3670;
        uStack_1f4 = 0;
        local_200 = &local_250;
        (*(code *)PTR_format_inner_00799048)(uVar19,&local_200);
      }
      else {
        if (param_7 < 0) {
LAB_00696a2c:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00697ace;
        }
        if (param_7 == 0) {
          lVar14 = 1;
          local_1b0 = lVar15;
          local_138 = lVar10;
        }
        else {
          local_1b0 = lVar15;
          local_138 = lVar10;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar14 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar14 == 0) goto LAB_00696a2c;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,param_7);
        }
        local_c0 = param_7;
        local_b0 = param_7;
        local_b8 = lVar14;
      }
      local_a8 = 0;
      local_98 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      lVar14 = local_b0;
      if (pcVar7 != (char *)0x0) {
        pcVar7[0] = 'i';
        pcVar7[1] = 'd';
        local_228 = 2;
        local_218 = 2;
        uStack_220 = pcVar7;
        if (local_b0 < 0) {
LAB_00696b60:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00697ace;
        }
        local_100 = local_b8;
        if (local_b0 == 0) {
          lVar10 = 1;
          puVar11 = local_200;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar10 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar10 == 0) goto LAB_00696b60;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar14);
          puVar11 = local_200;
        }
        local_200._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
        local_200._1_3_ = (undefined3)((ulonglong)puVar11 >> 8);
        local_200._0_4_ = CONCAT31(local_200._1_3_,3);
        uStack_1f8 = (uint)lVar14;
        uStack_1f4 = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_1f0._0_4_ = (undefined4)lVar10;
        uStack_1f0._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_1e8 = (undefined7)lVar14;
        uStack_1e1 = (undefined1)((ulonglong)lVar14 >> 0x38);
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_250,&local_a8,&local_228,&local_200);
        if ((char)local_250 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_250);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar7 != (char *)0x0) {
          builtin_strncpy(pcVar7,"object",6);
          local_228 = 6;
          local_218 = 6;
          uStack_220 = pcVar7;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar8 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00697ace;
          }
          *(undefined8 *)((longlong)puVar8 + 7) = 0x6e6f6974656c706d;
          *puVar8 = 0x6d6f632e74616863;
          local_200._0_4_ = CONCAT31(local_200._1_3_,3);
          uStack_1f8 = 0xf;
          uStack_1f4 = 0;
          uStack_1f0._0_4_ = SUB84(puVar8,0);
          uStack_1f0._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
          uStack_1e8 = 0xf;
          uStack_1e1 = 0;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_250,&local_a8,&local_228);
          if ((char)local_250 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_250);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar7 != (char *)0x0) {
            builtin_strncpy(pcVar7,"created",7);
            local_228 = 7;
            local_218 = 7;
            uStack_220 = pcVar7;
            (*(code *)PTR_now_00799478)();
            iVar18 = (int)(uint)local_1a0 >> 0xd;
            iVar16 = iVar18 + -1;
            iVar13 = 0;
            if (iVar18 < 1) {
              iVar13 = (1U - iVar18) / 400 + 1;
              iVar16 = iVar16 + iVar13 * 400;
              iVar13 = iVar13 * -0x23ab1;
            }
            uStack_1f0 = (longlong)
                         (int)(((((uint)local_1a0 >> 4 & 0x1ff) + iVar13) - iVar16 / 100) +
                               (iVar16 * 0x5b5 >> 2) + (iVar16 / 100 >> 2) + -0xaf93b) * 0x15180 +
                         (local_1a0 >> 0x20);
            local_200._0_4_ = CONCAT31(local_200._1_3_,2);
            uStack_1f8 = (uint)((ulonglong)uStack_1f0 >> 0x3f);
            uStack_1f4 = 0;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_250,&local_a8,&local_228,&local_200);
            if ((char)local_250 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_250);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            puVar5 = local_f8;
            if (pcVar7 != (char *)0x0) {
              builtin_strncpy(pcVar7,"model",5);
              local_228 = 5;
              local_218 = 5;
              uStack_220 = pcVar7;
              if ((longlong)local_f8 < 0) {
LAB_00696e51:
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_00697ace;
              }
              if (local_f8 == (undefined1 *)0x0) {
                lVar14 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar14 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar14 == 0) goto LAB_00696e51;
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,puVar5);
              }
              local_200._0_4_ = CONCAT31(local_200._1_3_,3);
              uStack_1f8 = (uint)puVar5;
              uStack_1f4 = (undefined4)((ulonglong)puVar5 >> 0x20);
              uStack_1f0._0_4_ = (undefined4)lVar14;
              uStack_1f0._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
              uStack_1e8 = SUB87(puVar5,0);
              uStack_1e1 = (undefined1)((ulonglong)puVar5 >> 0x38);
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_250,&local_a8,&local_228,&local_200);
              if ((char)local_250 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_250);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar11 != (undefined4 *)0x0) {
                *(undefined4 *)((longlong)puVar11 + 3) = 0x73656369;
                *puVar11 = 0x696f6863;
                local_180 = 7;
                local_170 = 7;
                uStack_178 = puVar11;
                local_70 = puVar11;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                local_f8 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
                if (local_f8 == (undefined1 *)0x0) {
                  (*(code *)PTR_handle_alloc_error_007991d8)();
                  goto LAB_00697ace;
                }
                local_120 = 0;
                local_110 = 0;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar7 != (char *)0x0) {
                  builtin_strncpy(pcVar7,"index",5);
                  local_228 = 5;
                  local_218 = 5;
                  local_200._0_4_ = CONCAT31(local_200._1_3_,2);
                  uStack_1f8 = 0;
                  uStack_1f4 = 0;
                  uStack_1f0._0_4_ = 0;
                  uStack_1f0._4_4_ = 0;
                  uStack_220 = pcVar7;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_250,&local_120,&local_228,&local_200);
                  if ((char)local_250 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_250);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar11 != (undefined4 *)0x0) {
                    *(undefined4 *)((longlong)puVar11 + 3) = 0x65676173;
                    *puVar11 = 0x7373656d;
                    local_1a0 = 7;
                    local_190 = 7;
                    uStack_1e8 = (undefined7)local_c8;
                    uStack_1e1 = (undefined1)((ulonglong)local_c8 >> 0x38);
                    uStack_1f8 = (uint)local_d8;
                    uStack_1f4 = local_d8._4_4_;
                    uStack_1f0._0_4_ = uStack_d0;
                    uStack_1f0._4_4_ = uStack_cc;
                    local_200._0_4_ = CONCAT31(local_200._1_3_,5);
                    uStack_198 = puVar11;
                    <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                    ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                              (&local_250,&local_200);
                    if ((char)local_250 == -1) {
                      local_228 = CONCAT44(uStack_244,uStack_248);
                      (*(code *)PTR_unwrap_failed_00799028)
                                (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,
                                 &local_228,&PTR_s_src_multiprotocol_rs_007915e0);
                    }
                    else {
                      local_218 = CONCAT44(uStack_23c,local_240);
                      uStack_210 = uStack_238;
                      uStack_20c = uStack_234;
                      local_228 = CONCAT44(uStack_24c,local_250);
                      uStack_220 = (char *)CONCAT44(uStack_244,uStack_248);
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_250,&local_120,&local_1a0,&local_228);
                      if ((char)local_250 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_250);
                      }
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_200);
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      lVar14 = local_78;
                      if (pcVar7 == (char *)0x0) {
                        (*(code *)PTR_handle_error_00798ff0)();
                      }
                      else {
                        builtin_strncpy(pcVar7,"finish_reason",0xd);
                        local_228 = 0xd;
                        local_218 = 0xd;
                        uStack_220 = pcVar7;
                        if (local_1a8 == 0) {
                          cVar6 = is_safety_finish_reason(local_1b8,local_78);
                          if (cVar6 == '\0') {
                            if (lVar14 == 10 && lVar12 != -1) {
                              lVar14 = (ulonglong)
                                       ((short)local_130[1] == 0x534e &&
                                       *local_130 == 0x454b4f545f58414d) * 2 + 4;
                            }
                            else {
                              lVar14 = 4;
                            }
                          }
                          else {
                            lVar14 = 0xe;
                          }
                        }
                        else {
                          lVar14 = 10;
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        lVar12 = (*(code *)PTR___rust_alloc_00799000)();
                        if (lVar12 == 0) {
                          (*(code *)PTR_handle_error_00798ff0)();
                        }
                        else {
                          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar14);
                          local_200._0_4_ = CONCAT31(local_200._1_3_,3);
                          uStack_1f8 = (uint)lVar14;
                          uStack_1f4 = 0;
                          uStack_1f0._0_4_ = (undefined4)lVar12;
                          uStack_1f0._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
                          uStack_1e8 = (undefined7)lVar14;
                          uStack_1e1 = 0;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_250,&local_120,&local_228,&local_200);
                          lVar14 = local_128;
                          if ((char)local_250 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_250);
                          }
                          local_200._7_1_ = (undefined1)local_120;
                          uStack_1f8 = (uint)((ulonglong)local_120 >> 8);
                          uStack_1f4._0_3_ = (undefined3)((ulonglong)local_120 >> 0x28);
                          uStack_1f4._3_1_ = SUB81(pcStack_118,0);
                          *local_f8 = 5;
                          *(char **)(local_f8 + 0x10) = pcStack_118;
                          *(undefined8 *)(local_f8 + 0x18) = local_110;
                          *(uint *)(local_f8 + 1) = (uint)local_200;
                          *(undefined4 *)(local_f8 + 5) = local_200._4_4_;
                          *(uint *)(local_f8 + 9) = uStack_1f8;
                          *(undefined4 *)(local_f8 + 0xd) = uStack_1f4;
                          uStack_1f8 = 1;
                          uStack_1f4 = 0;
                          uStack_1f0._0_4_ = SUB84(local_f8,0);
                          uStack_1f0._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
                          uStack_1e8 = 1;
                          uStack_1e1 = 0;
                          local_200._0_4_ = CONCAT31(local_200._1_3_,4);
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_250,&local_a8,&local_180,&local_200);
                          if ((char)local_250 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_250);
                          }
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                          if (puVar11 == (undefined4 *)0x0) {
                            (*(code *)PTR_handle_error_00798ff0)();
                          }
                          else {
                            *(undefined1 *)(puVar11 + 1) = 0x65;
                            *puVar11 = 0x67617375;
                            local_90 = 5;
                            local_80 = 5;
                            local_180 = 0;
                            local_170 = 0;
                            local_88 = puVar11;
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                            lVar12 = local_1b0;
                            if (pcVar7 != (char *)0x0) {
                              builtin_strncpy(pcVar7,"prompt_tokens",0xd);
                              local_228 = 0xd;
                              local_218 = 0xd;
                              local_200._0_4_ = CONCAT31(local_200._1_3_,2);
                              uStack_1f8 = 0;
                              uStack_1f4 = 0;
                              uStack_1f0._0_4_ = (undefined4)lVar1;
                              uStack_1f0._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
                              uStack_220 = pcVar7;
                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                              ::insert(&local_250,&local_180,&local_228,&local_200);
                              if ((char)local_250 != -1) {
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_250);
                              }
                              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                              pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                              uVar4 = s_completion_tokens_001a4f4f._12_4_;
                              uVar3 = s_completion_tokens_001a4f4f._8_4_;
                              uVar19 = s_completion_tokens_001a4f4f._4_4_;
                              if (pcVar7 != (char *)0x0) {
                                *(undefined4 *)pcVar7 = s_completion_tokens_001a4f4f._0_4_;
                                *(undefined4 *)(pcVar7 + 4) = uVar19;
                                *(undefined4 *)(pcVar7 + 8) = uVar3;
                                *(undefined4 *)(pcVar7 + 0xc) = uVar4;
                                pcVar7[0x10] = 's';
                                local_228 = 0x11;
                                local_218 = 0x11;
                                local_200._0_4_ = CONCAT31(local_200._1_3_,2);
                                uStack_1f8 = 0;
                                uStack_1f4 = 0;
                                uStack_220 = pcVar7;
                                uStack_1f0 = lVar17;
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_250,&local_180,&local_228,&local_200);
                                if ((char)local_250 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_250);
                                }
                                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                if (pcVar7 != (char *)0x0) {
                                  builtin_strncpy(pcVar7,"total_tokens",0xc);
                                  local_228 = 0xc;
                                  local_218 = 0xc;
                                  local_200._0_4_ = CONCAT31(local_200._1_3_,2);
                                  uStack_1f8 = 0;
                                  uStack_1f4 = 0;
                                  uStack_1f0._0_4_ = (undefined4)lVar12;
                                  uStack_1f0._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
                                  uStack_220 = pcVar7;
                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                  ::insert(&local_250,&local_180,&local_228,&local_200);
                                  if ((char)local_250 != -1) {
                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                    <serde_json[dc3825464c436029]::value::Value>(&local_250);
                                  }
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                  pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                  uVar4 = s_prompt_tokens_details_001a4f60._12_4_;
                                  uVar3 = s_prompt_tokens_details_001a4f60._8_4_;
                                  uVar19 = s_prompt_tokens_details_001a4f60._4_4_;
                                  if (pcVar7 != (char *)0x0) {
                                    *(undefined4 *)pcVar7 = s_prompt_tokens_details_001a4f60._0_4_;
                                    *(undefined4 *)(pcVar7 + 4) = uVar19;
                                    *(undefined4 *)(pcVar7 + 8) = uVar3;
                                    *(undefined4 *)(pcVar7 + 0xc) = uVar4;
                                    pcVar7[0xd] = '_';
                                    pcVar7[0xe] = 'd';
                                    pcVar7[0xf] = 'e';
                                    pcVar7[0x10] = 't';
                                    pcVar7[0x11] = 'a';
                                    pcVar7[0x12] = 'i';
                                    pcVar7[0x13] = 'l';
                                    pcVar7[0x14] = 's';
                                    local_120 = 0x15;
                                    local_110 = 0x15;
                                    local_1a0 = 0;
                                    local_190 = 0;
                                    pcStack_118 = pcVar7;
                                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                    if (pcVar7 == (char *)0x0) {
                                      (*(code *)PTR_handle_error_00798ff0)();
                                      goto LAB_00697ace;
                                    }
                                    builtin_strncpy(pcVar7,"cached_tokens",0xd);
                                    local_228 = 0xd;
                                    local_218 = 0xd;
                                    local_200._0_4_ = CONCAT31(local_200._1_3_,2);
                                    uStack_1f8 = 0;
                                    uStack_1f4 = 0;
                                    uStack_1f0._0_4_ = (undefined4)*(undefined8 *)(lVar14 + 0xe0);
                                    uStack_1f0._4_4_ =
                                         (undefined4)
                                         ((ulonglong)*(undefined8 *)(lVar14 + 0xe0) >> 0x20);
                                    uStack_220 = pcVar7;
                                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                    ::insert(&local_250,&local_1a0,&local_228,&local_200);
                                    if ((char)local_250 != -1) {
                                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                      <serde_json[dc3825464c436029]::value::Value>(&local_250);
                                    }
                                    uStack_1f8 = (uint)local_1a0;
                                    uStack_1f4 = local_1a0._4_4_;
                                    uStack_1f0._0_4_ = (undefined4)uStack_198;
                                    uStack_1f0._4_4_ = uStack_198._4_4_;
                                    uStack_1e8 = (undefined7)local_190;
                                    uStack_1e1 = (undefined1)((ulonglong)local_190 >> 0x38);
                                    local_200._0_4_ = CONCAT31(local_200._1_3_,5);
                                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                    ::insert(&local_250,&local_180,&local_120,&local_200);
                                    if ((char)local_250 != -1) {
                                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                      <serde_json[dc3825464c436029]::value::Value>(&local_250);
                                    }
                                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                    uVar9 = s_n_tokens_details_001a4f7e._8_8_;
                                    if (pcVar7 != (char *)0x0) {
                                      *(ulonglong *)(pcVar7 + 9) =
                                           CONCAT17(s_n_tokens_details_001a4f7e[7],
                                                    CONCAT43(s_n_tokens_details_001a4f7e._3_4_,
                                                             s_n_tokens_details_001a4f7e._0_3_));
                                      *(undefined8 *)(pcVar7 + 0x11) = uVar9;
                                      uVar4 = s_n_tokens_details_001a4f7e._3_4_;
                                      uVar3 = ram0x001a4f7d;
                                      uVar19 = s_completio_001a4f75._4_4_;
                                      *(undefined4 *)pcVar7 = s_completio_001a4f75._0_4_;
                                      *(undefined4 *)(pcVar7 + 4) = uVar19;
                                      *(undefined4 *)(pcVar7 + 8) = uVar3;
                                      *(undefined4 *)(pcVar7 + 0xc) = uVar4;
                                      local_120 = 0x19;
                                      local_110 = 0x19;
                                      local_1a0 = 0;
                                      local_190 = 0;
                                      pcStack_118 = pcVar7;
                                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                      puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)()
                                      ;
                                      uVar4 = _UNK_001829ac;
                                      uVar3 = _UNK_001829a8;
                                      uVar19 = _UNK_001829a4;
                                      if (puVar11 != (undefined4 *)0x0) {
                                        *puVar11 = _DAT_001829a0;
                                        puVar11[1] = uVar19;
                                        puVar11[2] = uVar3;
                                        puVar11[3] = uVar4;
                                        local_228 = 0x10;
                                        local_218 = 0x10;
                                        local_200._0_4_ = CONCAT31(local_200._1_3_,2);
                                        uStack_1f8 = 0;
                                        uStack_1f4 = 0;
                                        uStack_1f0._0_4_ = (undefined4)local_138;
                                        uStack_1f0._4_4_ =
                                             (undefined4)((ulonglong)local_138 >> 0x20);
                                        uStack_220 = (char *)puVar11;
                                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                        ::insert(&local_250,&local_1a0,&local_228,&local_200);
                                        if ((char)local_250 != -1) {
                                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                          <serde_json[dc3825464c436029]::value::Value>(&local_250);
                                        }
                                        uStack_1f8 = (uint)local_1a0;
                                        uStack_1f4 = local_1a0._4_4_;
                                        uStack_1f0._0_4_ = (undefined4)uStack_198;
                                        uStack_1f0._4_4_ = uStack_198._4_4_;
                                        uStack_1e8 = (undefined7)local_190;
                                        uStack_1e1 = (undefined1)((ulonglong)local_190 >> 0x38);
                                        local_200._0_4_ = CONCAT31(local_200._1_3_,5);
                                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                        ::insert(&local_250,&local_180,&local_120,&local_200);
                                        if ((char)local_250 != -1) {
                                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                          <serde_json[dc3825464c436029]::value::Value>(&local_250);
                                        }
                                        uStack_1f8 = (undefined4)local_180;
                                        uStack_1f4 = local_180._4_4_;
                                        uStack_1f0._0_4_ = (undefined4)uStack_178;
                                        uStack_1f0._4_4_ = uStack_178._4_4_;
                                        uStack_1e8 = (undefined7)local_170;
                                        uStack_1e1 = (undefined1)((ulonglong)local_170 >> 0x38);
                                        local_200._0_4_ = CONCAT31(local_200._1_3_,5);
                                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                        ::insert(&local_250,&local_a8,&local_90,&local_200);
                                        if ((char)local_250 != -1) {
                                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                          <serde_json[dc3825464c436029]::value::Value>(&local_250);
                                        }
                                        *(undefined8 *)(local_50 + 0x18) = local_98;
                                        *(undefined4 *)(local_50 + 8) = (undefined4)local_a8;
                                        *(undefined4 *)(local_50 + 0xc) = local_a8._4_4_;
                                        *(undefined4 *)(local_50 + 0x10) = uStack_a0;
                                        *(undefined4 *)(local_50 + 0x14) = uStack_9c;
                                        *local_50 = 5;
                                        uVar19 = (undefined4)local_a8;
                                        if (local_c0 != 0) {
                                          uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)
                                                             (local_50,1);
                                        }
                                        if ((char)local_230 != '\0') {
                                          lVar14 = uStack_148;
                                          for (lVar12 = local_140 + 1; lVar12 != 1;
                                              lVar12 = lVar12 + -1) {
                                            uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                     <serde_json[dc3825464c436029]::value::Value>
                                                               (lVar14);
                                            lVar14 = lVar14 + 0x20;
                                          }
                                          if (local_150 != 0) {
                                            uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)
                                                               (uVar19,8);
                                          }
                                        }
                                        if (local_f0 != 0) {
                                          uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
                                        }
                                        if (local_168 != 0) {
                                          (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
                                        }
                                        return;
                                      }
                                      (*(code *)PTR_handle_error_00798ff0)();
                                      goto LAB_00697ace;
                                    }
                                  }
                                }
                              }
                            }
                            (*(code *)PTR_handle_error_00798ff0)();
                          }
                        }
                      }
                    }
                    goto LAB_00697ace;
                  }
                }
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_00697ace;
              }
            }
          }
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00697ace;
    }
  }
LAB_00697956:
  local_230 = CONCAT44(local_230._4_4_,1);
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00697ace:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


