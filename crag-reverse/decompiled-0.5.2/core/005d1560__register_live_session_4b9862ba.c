// 005d1560 register_live_session

/* WARNING: Removing unreachable block (ram,0x005d2059) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::register_live_session */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::register_live_session
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  ulonglong *puVar20;
  longlong in_FS_OFFSET;
  bool bVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined8 extraout_XMM0_Qb_22;
  undefined8 extraout_XMM0_Qb_23;
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_24;
  undefined8 extraout_XMM0_Qb_25;
  undefined8 extraout_XMM0_Qb_26;
  undefined8 extraout_XMM0_Qb_27;
  undefined1 *local_278;
  byte local_270;
  longlong local_268;
  longlong local_240;
  longlong local_228;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1d0;
  undefined1 (*local_1b8) [16];
  longlong lStack_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_90;
  longlong local_78;
  undefined1 (*local_60) [16];
  longlong local_58;
  longlong local_48;
  
  local_158 = 0;
  lStack_150 = 8;
  local_148 = 0;
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    local_198 = *(longlong *)(in_FS_OFFSET + -0x38);
    lVar11 = *(longlong *)(in_FS_OFFSET + -0x30);
  }
  else {
    lVar11 = param_3;
    local_198 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_198;
    *(longlong *)(in_FS_OFFSET + -0x30) = lVar11;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  *(longlong *)(in_FS_OFFSET + -0x38) = local_198 + 1;
  local_200 = -1;
  local_1e8 = -1;
  local_1d0 = -1;
  local_218 = local_158;
  lStack_210 = lStack_150;
  local_208 = local_148;
  local_1b8 = (undefined1 (*) [16])
              anon_30b5cef53457a6ea696e8d7e9f6273d6_239_llvm_8436237269785592069;
  lStack_1b0 = _UNK_0078e460;
  local_1a8 = _DAT_0078e468;
  lStack_1a0 = _UNK_0078e470;
  local_190 = lVar11;
  lVar11 = (*(code *)PTR_index_into_00799300)(local_148,param_4);
  uVar22 = extraout_XMM0_Qa;
  if (((lVar11 != 0) &&
      (pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa,lVar11),
      uVar22 = extraout_XMM0_Qa_00, pcVar12 != (char *)0x0)) && (*pcVar12 == '\x03')) {
    lVar11 = *(longlong *)(pcVar12 + 0x18);
    if (lVar11 < 0) {
LAB_005d1683:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005d19e2;
    }
    if (lVar11 == 0) {
      lVar13 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar13 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar13 == 0) goto LAB_005d1683;
      uVar22 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,lVar11);
    }
    if ((local_200 != -1) && (local_200 != 0)) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    local_200 = lVar11;
    local_1f8 = lVar13;
    local_1f0 = lVar11;
  }
  local_240 = 0;
  lVar11 = (*(code *)PTR_index_into_00799300)(uVar22,param_4);
  if (((lVar11 != 0) &&
      (pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_02,lVar11),
      puVar8 = PTR_index_into_00799300, pcVar12 != (char *)0x0)) &&
     ((*pcVar12 == '\x04' && (*(longlong *)(pcVar12 + 0x18) != 0)))) {
    lVar11 = *(longlong *)(pcVar12 + 0x10);
    lVar13 = *(longlong *)(pcVar12 + 0x18) << 5;
    uVar22 = extraout_XMM0_Qa_03;
    local_180 = param_1;
    do {
      pcVar12 = (char *)(*(code *)puVar8)(uVar22,lVar11);
      uVar22 = extraout_XMM0_Qa_04;
      if (((pcVar12 != (char *)0x0) ||
          (pcVar12 = (char *)(*(code *)puVar8)(extraout_XMM0_Qa_04,lVar11),
          uVar22 = extraout_XMM0_Qa_05, pcVar12 != (char *)0x0)) && (*pcVar12 == '\x03')) {
        lVar3 = *(longlong *)(pcVar12 + 0x18);
        if (lVar3 < 0) {
LAB_005d19d4:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005d19e2;
        }
        if (lVar3 == 0) {
          local_268 = 1;
        }
        else {
          uVar22 = *(undefined8 *)(pcVar12 + 0x10);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_268 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_268 == 0) goto LAB_005d19d4;
          uVar22 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_06,lVar3,param_5,param_6,uVar22);
        }
        if (local_240 == 0) {
          uVar22 = (*(code *)PTR_grow_one_00799328)();
        }
        *(longlong *)(local_240 * 0x18 + 8) = lVar3;
        *(longlong *)(local_240 * 0x18 + 0x10) = local_268;
        *(longlong *)(local_240 * 0x18 + 0x18) = lVar3;
        local_240 = local_240 + 1;
        param_1 = local_180;
      }
      lVar11 = lVar11 + 0x20;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  craggemini_core[66f3c71560d70857]::acp_backend::apply_config_options_to_state
            (&local_158,&local_218,param_4);
  lVar19 = local_148;
  lVar11 = lStack_150;
  lVar3 = local_158;
  local_228 = local_148;
  auVar7._8_8_ = lStack_150;
  auVar7._0_8_ = local_158;
  lVar13 = param_1 + 0x2d8;
  LOCK();
  bVar21 = *(int *)(param_1 + 0x2d8) == 0;
  if (bVar21) {
    *(int *)(param_1 + 0x2d8) = 1;
  }
  UNLOCK();
  auVar23 = auVar7;
  if (!bVar21) {
    auVar23._0_8_ = (*(code *)PTR_lock_contended_00798fe0)();
    auVar23._8_8_ = extraout_XMM0_Qb_09;
  }
  puVar20 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    auVar23._8_8_ = extraout_XMM0_Qb_10;
    auVar23._0_8_ = extraout_XMM0_Qa_08;
    bVar9 = bVar9 ^ 1;
  }
  uVar22 = auVar23._0_8_;
  cVar2 = *(char *)(param_1 + 0x2dc);
  if (cVar2 == '\0') {
    if (param_3 < 0) {
LAB_005d1979:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_005d19e2:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (param_3 == 0) {
      lVar16 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar16 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar16 == 0) goto LAB_005d1979;
      uVar22 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_07,param_3);
    }
    local_170 = param_3;
    local_168 = lVar16;
    local_160 = param_3;
    (*(code *)PTR_memcpy_00799008)(uVar22,0x90,param_5,param_6,lVar13);
    auVar23._0_8_ =
         <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState,std[6c98fd8553dbae28]::hash::random::RandomState>>
         ::insert(&local_c0,param_1 + 0x2e0,&local_170,&local_158);
    auVar23._8_8_ = extraout_XMM0_Qb_00;
    if (local_c0 != -1) {
      if ((local_a8 != -1) && (local_a8 != 0)) {
        auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,1);
        auVar23._8_8_ = extraout_XMM0_Qb_01;
      }
      if ((local_90 != -1) && (local_90 != 0)) {
        auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,1);
        auVar23._8_8_ = extraout_XMM0_Qb_02;
      }
      if ((local_78 != -1) && (local_78 != 0)) {
        auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,1);
        auVar23._8_8_ = extraout_XMM0_Qb_03;
      }
      puVar8 = PTR___rust_dealloc_00798fc8;
      if (local_b0 != 0) {
        lVar13 = local_b8 + 8;
        lVar16 = local_b0;
        do {
          if (*(longlong *)(lVar13 + -8) != 0) {
            auVar23._0_8_ = (*(code *)puVar8)(auVar23._0_8_,1);
            auVar23._8_8_ = extraout_XMM0_Qb_04;
          }
          lVar13 = lVar13 + 0x18;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (local_c0 != 0) {
        auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,8);
        auVar23._8_8_ = extraout_XMM0_Qb_05;
      }
      puVar20 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if (local_58 != 0) {
        if (local_48 != 0) {
          auVar23 = *local_60;
          pauVar17 = local_60 + 1;
          uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
          lVar13 = local_48;
          pauVar18 = local_60;
          do {
            if ((short)uVar14 == 0) {
              do {
                auVar23 = *pauVar17;
                pauVar18 = pauVar18 + -0x18;
                pauVar17 = pauVar17 + 1;
                uVar14 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar14 == 0);
            }
            uVar5 = 0;
            for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            if (*(longlong *)((longlong)pauVar18 + (ulonglong)uVar5 * -0x18 + -0x18) != 0) {
              auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,1);
              auVar23._8_8_ = extraout_XMM0_Qb_06;
            }
            lVar13 = lVar13 + -1;
            uVar14 = uVar14 - 1 & uVar14;
          } while (lVar13 != 0);
        }
        puVar20 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
        if (local_58 + (local_58 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
          auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,0x10);
          auVar23._8_8_ = extraout_XMM0_Qb_07;
        }
      }
    }
    if ((bVar9 == 0) && ((*puVar20 & 0x7fffffffffffffff) != 0)) {
      cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      auVar23._8_8_ = extraout_XMM0_Qb_27;
      auVar23._0_8_ = extraout_XMM0_Qa_13;
      if (cVar10 == '\0') {
        *(undefined1 *)(param_1 + 0x2dc) = 1;
      }
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x2d8);
    *(int *)(param_1 + 0x2d8) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      auVar23._0_8_ = (*(code *)PTR_wake_00799010)();
      auVar23._8_8_ = extraout_XMM0_Qb_25;
    }
  }
  else {
    if ((bVar9 == 0) && ((*puVar20 & 0x7fffffffffffffff) != 0)) {
      cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      auVar23._8_8_ = extraout_XMM0_Qb_14;
      auVar23._0_8_ = extraout_XMM0_Qa_11;
      if (cVar10 == '\0') {
        *(undefined1 *)(param_1 + 0x2dc) = 1;
      }
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x2d8);
    *(int *)(param_1 + 0x2d8) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      auVar23._0_8_ = (*(code *)PTR_wake_00799010)();
      auVar23._8_8_ = extraout_XMM0_Qb;
    }
  }
  if ((local_240 == 0) && (lVar19 == 0)) {
    bVar21 = true;
  }
  else {
    LOCK();
    bVar21 = *(int *)(param_1 + 0x250) == 0;
    if (bVar21) {
      *(int *)(param_1 + 0x250) = 1;
    }
    UNLOCK();
    if (!bVar21) {
      auVar23._0_8_ = (*(code *)PTR_lock_contended_00798fe0)();
      auVar23._8_8_ = extraout_XMM0_Qb_11;
    }
    if ((*puVar20 & 0x7fffffffffffffff) == 0) {
      if (*(char *)(param_1 + 0x254) == '\0') {
        local_270 = 0;
        if (local_240 == 0) goto LAB_005d1eb1;
LAB_005d1cf2:
        puVar8 = PTR___rust_dealloc_00798fc8;
        local_148 = local_240;
        local_158 = 0;
        lStack_150 = 8;
        lVar13 = *(longlong *)(param_1 + 0x268);
        if (lVar13 != 0) {
          lVar16 = *(longlong *)(param_1 + 0x260) + 8;
          do {
            if (*(longlong *)(lVar16 + -8) != 0) {
              (*(code *)puVar8)();
            }
            lVar16 = lVar16 + 0x18;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        if (*(longlong *)*(undefined1 (*) [16])(param_1 + 600) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(longlong *)(param_1 + 0x268) = local_148;
        auVar23._8_8_ = lStack_150;
        auVar23._0_8_ = local_158;
        *(undefined1 (*) [16])(param_1 + 600) = auVar23;
        bVar21 = false;
        if (lVar19 != 0) goto LAB_005d1ec2;
LAB_005d1dc2:
        piVar15 = (int *)(param_1 + 0x250);
        lVar13 = lVar19;
joined_r0x005d1f77:
        if ((local_270 == 0) &&
           (local_278 = (undefined1 *)(param_1 + 0x254),
           (*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
          cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          auVar23._8_8_ = extraout_XMM0_Qb_26;
          auVar23._0_8_ = extraout_XMM0_Qa_12;
          if (cVar10 == '\0') {
            *local_278 = 1;
          }
        }
        LOCK();
        iVar1 = *piVar15;
        *piVar15 = 0;
        UNLOCK();
        if (iVar1 == 2) {
          auVar23._0_8_ = (*(code *)PTR_wake_00799010)();
          auVar23._8_8_ = extraout_XMM0_Qb_24;
        }
        if (lVar13 != 0) goto LAB_005d2001;
        goto LAB_005d1f9f;
      }
LAB_005d1cb0:
      local_278 = (undefined1 *)(param_1 + 0x254);
      if ((*puVar20 & 0x7fffffffffffffff) != 0) {
        cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        auVar23._8_8_ = extraout_XMM0_Qb_13;
        auVar23._0_8_ = extraout_XMM0_Qa_10;
        if (cVar10 == '\0') {
          *local_278 = 1;
        }
      }
    }
    else {
      local_270 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      auVar23._8_8_ = extraout_XMM0_Qb_12;
      auVar23._0_8_ = extraout_XMM0_Qa_09;
      if (*(char *)(param_1 + 0x254) == '\0') {
        local_270 = local_270 ^ 1;
        if (local_240 != 0) goto LAB_005d1cf2;
LAB_005d1eb1:
        bVar21 = true;
        if (lVar19 == 0) goto LAB_005d1dc2;
LAB_005d1ec2:
        puVar8 = PTR___rust_dealloc_00798fc8;
        uVar22 = auVar23._0_8_;
        piVar15 = (int *)(param_1 + 0x250);
        lVar13 = *(longlong *)(param_1 + 0x280);
        local_178 = local_228;
        if (lVar13 != 0) {
          lVar16 = *(longlong *)(param_1 + 0x278) + 8;
          do {
            if (*(longlong *)(lVar16 + -8) != 0) {
              auVar23._0_8_ = (*(code *)puVar8)(auVar23._0_8_,1);
              auVar23._8_8_ = extraout_XMM0_Qb_15;
            }
            uVar22 = auVar23._0_8_;
            lVar16 = lVar16 + 0x18;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        if (*(longlong *)*(undefined1 (*) [16])(param_1 + 0x270) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,8);
        }
        *(longlong *)(param_1 + 0x280) = lVar19;
        *(undefined1 (*) [16])(param_1 + 0x270) = auVar7;
        lVar13 = local_178;
        auVar23 = auVar7;
        goto joined_r0x005d1f77;
      }
      if (local_270 != 0) goto LAB_005d1cb0;
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x250);
    *(int *)(param_1 + 0x250) = 0;
    UNLOCK();
    bVar21 = true;
    if (iVar1 == 2) {
      auVar23._0_8_ = (*(code *)PTR_wake_00799010)();
      auVar23._8_8_ = extraout_XMM0_Qb_08;
    }
  }
LAB_005d1f9f:
  puVar8 = PTR___rust_dealloc_00798fc8;
  if (lVar19 != 0) {
    lVar11 = lVar11 + 8;
    do {
      if (*(longlong *)(lVar11 + -8) != 0) {
        auVar23._0_8_ = (*(code *)puVar8)(auVar23._0_8_,1);
        auVar23._8_8_ = extraout_XMM0_Qb_16;
      }
      lVar11 = lVar11 + 0x18;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  if (lVar3 != 0) {
    auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,8);
    auVar23._8_8_ = extraout_XMM0_Qb_17;
  }
LAB_005d2001:
  puVar8 = PTR___rust_dealloc_00798fc8;
  if ((bVar21) && (local_240 != 0)) {
    lVar11 = 0x10;
    do {
      if (*(longlong *)(lVar11 + -8) != 0) {
        auVar23._0_8_ = (*(code *)puVar8)(auVar23._0_8_,1);
        auVar23._8_8_ = extraout_XMM0_Qb_18;
      }
      lVar11 = lVar11 + 0x18;
      local_240 = local_240 + -1;
    } while (local_240 != 0);
  }
  if (cVar2 != '\0') {
    if ((local_200 != -1) && (local_200 != 0)) {
      auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,1);
      auVar23._8_8_ = extraout_XMM0_Qb_19;
    }
    if ((local_1e8 != -1) && (local_1e8 != 0)) {
      auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,1);
      auVar23._8_8_ = extraout_XMM0_Qb_20;
    }
    if ((local_1d0 != -1) && (local_1d0 != 0)) {
      auVar23._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar23._0_8_,1);
      auVar23._8_8_ = extraout_XMM0_Qb_21;
    }
    puVar8 = PTR___rust_dealloc_00798fc8;
    uVar22 = auVar23._0_8_;
    if (local_208 != 0) {
      lVar13 = lStack_210 + 8;
      lVar11 = local_208;
      do {
        if (*(longlong *)(lVar13 + -8) != 0) {
          auVar23._0_8_ = (*(code *)puVar8)(auVar23._0_8_,1);
          auVar23._8_8_ = extraout_XMM0_Qb_22;
        }
        uVar22 = auVar23._0_8_;
        lVar13 = lVar13 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (local_218 != 0) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,8);
    }
    lVar11 = lStack_1b0;
    puVar8 = PTR___rust_dealloc_00798fc8;
    if (lStack_1b0 != 0) {
      if (lStack_1a0 != 0) {
        auVar24 = *local_1b8;
        pauVar17 = local_1b8 + 1;
        uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
        lVar13 = lStack_1a0;
        pauVar18 = local_1b8;
        do {
          if ((short)uVar14 == 0) {
            do {
              auVar24 = *pauVar17;
              pauVar18 = pauVar18 + -0x18;
              pauVar17 = pauVar17 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar14 == 0);
          }
          uVar5 = 0;
          for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (*(longlong *)((longlong)pauVar18 + (ulonglong)uVar5 * -0x18 + -0x18) != 0) {
            auVar24._0_8_ = (*(code *)puVar8)(auVar24._0_8_,1);
            auVar24._8_8_ = extraout_XMM0_Qb_23;
          }
          uVar22 = auVar24._0_8_;
          lVar13 = lVar13 + -1;
          uVar14 = uVar14 - 1 & uVar14;
        } while (lVar13 != 0);
      }
      if (lVar11 + (lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,0x10);
      }
    }
  }
  return;
}


