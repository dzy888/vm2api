// 005cd910 status

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::status */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::status
          (undefined1 *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  longlong lVar20;
  char *pcVar21;
  longlong lVar22;
  bool bVar23;
  byte bVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar25;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 local_158;
  undefined1 uStack_157;
  undefined6 uStack_156;
  char *local_150;
  char *local_148;
  char *local_140;
  undefined8 local_138;
  char *local_130;
  undefined8 local_128;
  longlong local_120;
  char local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  int *local_d8;
  int *local_d0;
  byte local_c8;
  longlong local_b8;
  longlong local_a0;
  longlong local_88;
  ulonglong local_80;
  undefined1 *local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  LOCK();
  iVar9 = *param_2;
  if (iVar9 == 0) {
    *param_2 = 1;
  }
  UNLOCK();
  local_120 = param_3;
  if (iVar9 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar7 = (char)param_2[1];
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar7 = (char)param_2[1];
  }
  if (cVar7 != '\0') {
    local_d0 = param_2;
    local_c8 = bVar6;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt>>>>_0078e308
               ,&local_d0,&PTR_s_src_oauth_rs_0078e478);
    goto LAB_005ce811;
  }
  local_78 = param_1;
  if (*(longlong *)(param_2 + 8) == 0) {
    bVar23 = false;
    lVar22 = local_120;
  }
  else {
    uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 10);
    puVar4 = PTR_bcmp_00799020;
    lVar22 = *(longlong *)(param_2 + 2);
    uVar18 = *(ulonglong *)(param_2 + 4);
    bVar24 = (byte)(uVar10 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar24,bVar24));
    auVar27 = pshuflw(auVar26,auVar26,0);
    auVar26._0_8_ = auVar27._0_8_;
    auVar26._8_4_ = auVar27._0_4_;
    auVar26._12_4_ = auVar27._4_4_;
    lVar1 = *(longlong *)(local_120 + 0xe8);
    lVar20 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar18;
      auVar27 = *(undefined1 (*) [16])(lVar22 + uVar10);
      auVar28[0] = -(auVar27[0] == auVar26[0]);
      auVar28[1] = -(auVar27[1] == auVar26[1]);
      auVar28[2] = -(auVar27[2] == auVar26[2]);
      auVar28[3] = -(auVar27[3] == auVar26[3]);
      auVar28[4] = -(auVar27[4] == auVar26[4]);
      auVar28[5] = -(auVar27[5] == auVar26[5]);
      auVar28[6] = -(auVar27[6] == auVar26[6]);
      auVar28[7] = -(auVar27[7] == auVar26[7]);
      auVar28[8] = -(auVar27[8] == auVar26[8]);
      auVar28[9] = -(auVar27[9] == auVar26[9]);
      auVar28[10] = -(auVar27[10] == auVar26[10]);
      auVar28[0xb] = -(auVar27[0xb] == auVar26[0xb]);
      auVar28[0xc] = -(auVar27[0xc] == auVar26[0xc]);
      auVar28[0xd] = -(auVar27[0xd] == auVar26[0xd]);
      auVar28[0xe] = -(auVar27[0xe] == auVar26[0xe]);
      auVar28[0xf] = -(auVar27[0xf] == auVar26[0xf]);
      uVar8 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      piVar16 = (int *)(ulonglong)uVar8;
      if (uVar8 != 0) {
        local_e0 = uVar10;
        local_88 = lVar20;
        local_80 = uVar18;
        local_58 = auVar27;
        local_48 = auVar26;
        do {
          uVar17 = 0;
          for (uVar15 = (uint)piVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          lVar20 = (uVar17 + local_e0 & local_80) * -0x2c0;
          local_d8 = piVar16;
          if (lVar1 == *(longlong *)(lVar22 + -0x2b0 + lVar20)) {
            lVar20 = lVar20 + lVar22;
            lVar11 = lVar1;
            iVar9 = (*(code *)puVar4)();
            uVar17 = (uint)lVar11;
            if (iVar9 == 0) {
              lVar11 = (*(code *)PTR_now_00799250)();
              lVar1 = *(longlong *)(lVar20 + -0x10);
              bVar23 = lVar11 <= lVar1;
              puVar3 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
              lVar22 = local_120;
              if (lVar11 == lVar1) {
                bVar23 = uVar17 <= *(uint *)(lVar20 + -8);
              }
              goto joined_r0x005cdad9;
            }
          }
          iVar9 = (int)local_d8 + -1;
          uVar8 = (ushort)iVar9 & (ushort)local_d8;
          piVar16 = (int *)(ulonglong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar8);
          uVar10 = local_e0;
          uVar18 = local_80;
          lVar20 = local_88;
          auVar26 = local_48;
          auVar27 = local_58;
        } while (uVar8 != 0);
      }
      auVar29[0] = -(auVar27[0] == -1);
      auVar29[1] = -(auVar27[1] == -1);
      auVar29[2] = -(auVar27[2] == -1);
      auVar29[3] = -(auVar27[3] == -1);
      auVar29[4] = -(auVar27[4] == -1);
      auVar29[5] = -(auVar27[5] == -1);
      auVar29[6] = -(auVar27[6] == -1);
      auVar29[7] = -(auVar27[7] == -1);
      auVar29[8] = -(auVar27[8] == -1);
      auVar29[9] = -(auVar27[9] == -1);
      auVar29[10] = -(auVar27[10] == -1);
      auVar29[0xb] = -(auVar27[0xb] == -1);
      auVar29[0xc] = -(auVar27[0xc] == -1);
      auVar29[0xd] = -(auVar27[0xd] == -1);
      auVar29[0xe] = -(auVar27[0xe] == -1);
      auVar29[0xf] = -(auVar27[0xf] == -1);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar10 = uVar10 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
    bVar23 = false;
    puVar3 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
    lVar22 = local_120;
  }
joined_r0x005cdad9:
  local_120 = lVar22;
  if (((bVar6 == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(param_2 + 1) = 1;
  }
  LOCK();
  iVar9 = *param_2;
  *param_2 = 0;
  UNLOCK();
  if (iVar9 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  (*(code *)PTR__join_00799210)(&DAT_0019e42c,*(undefined8 *)(lVar22 + 0x118),0x2f);
  local_e0 = local_68;
  craggemini_core[66f3c71560d70857]::oauth::inspect_token_file(&local_d0,local_68,local_60);
  local_d8 = local_d0;
  local_f8 = 0;
  local_e8 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar12 != (char *)0x0) {
    pcVar21 = (char *)((ulonglong)bVar23 | 10);
    builtin_strncpy(pcVar12,"account_id",10);
    local_138 = 10;
    local_128 = 10;
    pcVar13 = *(char **)(lVar22 + 0xe8);
    local_130 = pcVar12;
    if ((longlong)pcVar13 < 0) {
LAB_005cdc0e:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005ce811;
    }
    if (pcVar13 == (char *)0x0) {
      pcVar12 = (char *)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar12 == (char *)0x0) goto LAB_005cdc0e;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,pcVar13);
    }
    local_158 = 3;
    local_150 = pcVar13;
    local_148 = pcVar12;
    local_140 = pcVar13;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_118,&local_f8,&local_138,&local_158);
    lVar22 = local_120;
    if (local_118[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (local_118);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar12 != (char *)0x0) {
      builtin_strncpy(pcVar12,"env_id",6);
      local_138 = 6;
      local_128 = 6;
      pcVar13 = *(char **)(lVar22 + 0x100);
      local_130 = pcVar12;
      if ((longlong)pcVar13 < 0) {
LAB_005cdd1c:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005ce811;
      }
      if (pcVar13 == (char *)0x0) {
        pcVar12 = (char *)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar12 == (char *)0x0) goto LAB_005cdd1c;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,pcVar13);
      }
      local_158 = 3;
      local_150 = pcVar13;
      local_148 = pcVar12;
      local_140 = pcVar13;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_118,&local_f8,&local_138,&local_158);
      lVar22 = local_120;
      if (local_118[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_118);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar12 != (char *)0x0) {
        builtin_strncpy(pcVar12,"proxy_id",8);
        local_138 = 8;
        local_128 = 8;
        pcVar13 = *(char **)(lVar22 + 0x148);
        local_130 = pcVar12;
        if ((longlong)pcVar13 < 0) {
LAB_005cde0b:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005ce811;
        }
        if (pcVar13 == (char *)0x0) {
          pcVar12 = (char *)0x1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar12 == (char *)0x0) goto LAB_005cde0b;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,pcVar13);
        }
        local_158 = 3;
        local_150 = pcVar13;
        local_148 = pcVar12;
        local_140 = pcVar13;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_118,&local_f8,&local_138,&local_158);
        lVar22 = local_120;
        if (local_118[0] != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_118);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar12 != (char *)0x0) {
          builtin_strncpy(pcVar12,"proxy_sha256",0xc);
          local_138 = 0xc;
          local_128 = 0xc;
          pcVar13 = *(char **)(lVar22 + 0x2a0);
          local_130 = pcVar12;
          if ((longlong)pcVar13 < 0) {
LAB_005cdf02:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005ce811;
          }
          if (pcVar13 == (char *)0x0) {
            pcVar12 = (char *)0x1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar12 == (char *)0x0) goto LAB_005cdf02;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_02,pcVar13);
          }
          local_158 = 3;
          local_150 = pcVar13;
          local_148 = pcVar12;
          local_140 = pcVar13;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(local_118,&local_f8,&local_138,&local_158);
          lVar22 = local_120;
          if (local_118[0] != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_118);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          uVar25 = _UNK_0019e482;
          if (pcVar12 != (char *)0x0) {
            *(undefined8 *)pcVar12 = _DAT_0019e47a;
            *(undefined8 *)(pcVar12 + 8) = uVar25;
            pcVar12[0x10] = 'i';
            pcVar12[0x11] = 'r';
            pcVar12[0x12] = 'e';
            pcVar12[0x13] = 'd';
            local_138 = 0x14;
            local_128 = 0x14;
            uStack_157 = *(undefined1 *)(lVar22 + 0x271);
            local_158 = 1;
            local_130 = pcVar12;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(local_118,&local_f8,&local_138,&local_158);
            if (local_118[0] != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (local_118);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar25 = s_proxy_calibrated_00183fb0._8_8_;
            if (pcVar12 != (char *)0x0) {
              *(undefined8 *)pcVar12 = s_proxy_calibrated_00183fb0._0_8_;
              *(undefined8 *)(pcVar12 + 8) = uVar25;
              local_138 = 0x10;
              local_128 = 0x10;
              uStack_157 = *(undefined1 *)(lVar22 + 0xd0);
              local_158 = 1;
              local_130 = pcVar12;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(local_118,&local_f8,&local_138,&local_158);
              if (local_118[0] != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (local_118);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar12 != (char *)0x0) {
                builtin_strncpy(pcVar12,"auth_state",10);
                local_138 = 10;
                local_128 = 10;
                local_130 = pcVar12;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar13 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar13 == (char *)0x0) {
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_005ce811;
                }
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,pcVar21);
                local_158 = 3;
                local_150 = pcVar21;
                local_148 = pcVar13;
                local_140 = pcVar21;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(local_118,&local_f8,&local_138,&local_158);
                if (local_118[0] != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(local_118);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar13 = &DAT_00000005;
                pcVar21 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar21 != (char *)0x0) {
                  builtin_strncpy(pcVar21,"email",5);
                  local_138 = 5;
                  local_128 = 5;
                  lVar22 = -1;
                  bVar6 = 1;
                  local_130 = pcVar21;
                  if (local_d8 < (int *)0xfffffffffffffffe) {
                    (*(code *)PTR_clone_00798fd0)();
                    pcVar21 = local_148;
                    lVar1 = CONCAT62(uStack_156,CONCAT11(uStack_157,local_158));
                    if (lVar1 == -1) {
                      local_158 = 0;
                    }
                    else {
                      if ((longlong)local_148 < 0) {
LAB_005ce1fd:
                        (*(code *)PTR_handle_error_00798ff0)();
                        goto LAB_005ce811;
                      }
                      lVar22 = lVar1;
                      if (local_148 == (char *)0x0) {
                        pcVar12 = (char *)0x1;
                        bVar6 = 0;
                        pcVar13 = (char *)0x0;
                        local_158 = 3;
                      }
                      else {
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        if (pcVar12 == (char *)0x0) goto LAB_005ce1fd;
                        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_04,pcVar21);
                        bVar6 = 0;
                        pcVar13 = pcVar21;
                        local_158 = 3;
                      }
                    }
                  }
                  else {
                    local_158 = 0;
                  }
                  local_150 = pcVar13;
                  local_148 = pcVar12;
                  local_140 = pcVar13;
                  uVar25 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                           ::insert(local_118,&local_f8,&local_138,&local_158);
                  if (local_118[0] != -1) {
                    uVar25 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                             <serde_json[dc3825464c436029]::value::Value>(local_118);
                  }
                  if (!(bool)(bVar6 | lVar22 == 0)) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar13 = (char *)0xa;
                  pcVar21 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                  if (pcVar21 != (char *)0x0) {
                    builtin_strncpy(pcVar21,"project_id",10);
                    local_138 = 10;
                    local_128 = 10;
                    lVar22 = -1;
                    bVar6 = 1;
                    local_130 = pcVar21;
                    if ((local_d0 == (int *)0xfffffffffffffffe) || (local_b8 == -1)) {
                      local_158 = 0;
                    }
                    else {
                      (*(code *)PTR_clone_00798fd0)();
                      pcVar21 = local_148;
                      lVar1 = CONCAT62(uStack_156,CONCAT11(uStack_157,local_158));
                      if (lVar1 == -1) {
                        local_158 = 0;
                      }
                      else {
                        if ((longlong)local_148 < 0) {
LAB_005ce36e:
                          (*(code *)PTR_handle_error_00798ff0)();
                          goto LAB_005ce811;
                        }
                        lVar22 = lVar1;
                        if (local_148 == (char *)0x0) {
                          pcVar12 = (char *)0x1;
                          bVar6 = 0;
                          pcVar13 = (char *)0x0;
                          local_158 = 3;
                        }
                        else {
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                          if (pcVar12 == (char *)0x0) goto LAB_005ce36e;
                          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_05,pcVar21);
                          bVar6 = 0;
                          pcVar13 = pcVar21;
                          local_158 = 3;
                        }
                      }
                    }
                    local_150 = pcVar13;
                    local_148 = pcVar12;
                    local_140 = pcVar13;
                    uVar25 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                             ::insert(local_118,&local_f8,&local_138,&local_158);
                    if (local_118[0] != -1) {
                      uVar25 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                               <serde_json[dc3825464c436029]::value::Value>(local_118);
                    }
                    if (!(bool)(bVar6 | lVar22 == 0)) {
                      (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar13 = (char *)0xa;
                    pcVar21 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar21 != (char *)0x0) {
                      builtin_strncpy(pcVar21,"expires_at",10);
                      local_138 = 10;
                      local_128 = 10;
                      lVar22 = -1;
                      bVar6 = 1;
                      local_130 = pcVar21;
                      if ((local_d0 == (int *)0xfffffffffffffffe) || (local_a0 == -1)) {
                        uVar19 = 0;
                      }
                      else {
                        (*(code *)PTR_clone_00798fd0)();
                        pcVar21 = local_148;
                        lVar1 = CONCAT62(uStack_156,CONCAT11(uStack_157,local_158));
                        if (lVar1 == -1) {
                          uVar19 = 0;
                        }
                        else {
                          if ((longlong)local_148 < 0) {
LAB_005ce490:
                            (*(code *)PTR_handle_error_00798ff0)();
                            goto LAB_005ce811;
                          }
                          uVar19 = 3;
                          lVar22 = lVar1;
                          if (local_148 == (char *)0x0) {
                            pcVar12 = (char *)0x1;
                            bVar6 = 0;
                            pcVar13 = (char *)0x0;
                          }
                          else {
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                            if (pcVar12 == (char *)0x0) goto LAB_005ce490;
                            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_06,pcVar21);
                            bVar6 = 0;
                            pcVar13 = pcVar21;
                          }
                        }
                      }
                      local_158 = uVar19;
                      local_150 = pcVar13;
                      local_148 = pcVar12;
                      local_140 = pcVar13;
                      uVar25 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                               ::insert(local_118,&local_f8,&local_138,&local_158);
                      lVar1 = local_120;
                      if (local_118[0] != -1) {
                        uVar25 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                 <serde_json[dc3825464c436029]::value::Value>(local_118);
                      }
                      if (!(bool)(bVar6 | lVar22 == 0)) {
                        (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                      uVar25 = _UNK_0019e4a0;
                      if (puVar14 != (undefined8 *)0x0) {
                        *puVar14 = _DAT_0019e498;
                        puVar14[1] = uVar25;
                        *(undefined4 *)((longlong)puVar14 + 0xf) = 0x736e6f69;
                        local_138 = 0x13;
                        local_128 = 0x13;
                        if (*(longlong *)(lVar1 + 0x310) == 0) {
                          local_148 = (char *)0x0;
                        }
                        else {
                          local_148 = *(char **)(*(longlong *)(*(longlong *)(lVar1 + 0x310) + 0xf0)
                                                + 0x10);
                        }
                        local_158 = 2;
                        local_150 = (char *)0x0;
                        local_130 = (char *)puVar14;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(local_118,&local_f8,&local_138,&local_158);
                        if (local_118[0] != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(local_118);
                        }
                        puVar5 = local_78;
                        *(undefined8 *)(local_78 + 0x18) = local_e8;
                        *(undefined8 *)(local_78 + 8) = local_f8;
                        *(undefined8 *)(local_78 + 0x10) = uStack_f0;
                        *local_78 = 5;
                        if (local_d0 != (int *)0xfffffffffffffffe) {
                          if ((local_d0 != (int *)0xffffffffffffffff) && (local_d0 != (int *)0x0)) {
                            (*(code *)PTR___rust_dealloc_00798fc8)();
                          }
                          if ((local_b8 != -1) && (local_b8 != 0)) {
                            (*(code *)PTR___rust_dealloc_00798fc8)();
                          }
                          if ((local_a0 != -1) && (local_a0 != 0)) {
                            (*(code *)PTR___rust_dealloc_00798fc8)();
                          }
                        }
                        if (local_70 != 0) {
                          (*(code *)PTR___rust_dealloc_00798fc8)();
                        }
                        return puVar5;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005ce811:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


