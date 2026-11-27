// 00049ad0 dispatch

/* <agy_bridge[64a9e9deac6c45ce]::Runtime>::dispatch */

void __rustcall <agy_bridge[64a9e9deac6c45ce]::Runtime>::dispatch(byte *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte *pbVar5;
  code *pcVar6;
  byte bVar7;
  undefined *puVar8;
  byte *pbVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong lVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  char *pcVar19;
  longlong lVar20;
  undefined4 uVar21;
  longlong extraout_RDX;
  ulonglong uVar22;
  byte *pbVar23;
  longlong *unaff_R15;
  byte *pbVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong extraout_XMM0_Qa_10;
  longlong lVar28;
  longlong extraout_XMM0_Qa_11;
  undefined1 auVar29 [16];
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  longlong extraout_XMM0_Qa_03;
  longlong extraout_XMM0_Qa_04;
  longlong extraout_XMM0_Qa_05;
  longlong extraout_XMM0_Qa_06;
  longlong extraout_XMM0_Qa_07;
  longlong extraout_XMM0_Qa_08;
  longlong extraout_XMM0_Qa_09;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte local_334;
  byte *local_330;
  byte *local_328;
  byte *local_320;
  byte *local_318;
  byte *pbStack_310;
  byte *local_308;
  byte *local_300;
  byte *pbStack_2f8;
  byte *local_2f0;
  byte *local_2e8;
  byte *pbStack_2e0;
  byte *local_2d8;
  byte *local_2d0;
  byte *pbStack_2c8;
  byte *local_2c0;
  byte *local_2b8;
  byte *pbStack_2b0;
  byte *local_2a8;
  byte *local_2a0;
  byte *pbStack_298;
  byte *local_290;
  undefined4 local_288;
  byte *local_280;
  byte *local_278;
  byte *pbStack_270;
  byte *local_268;
  byte *local_258;
  byte *pbStack_250;
  byte *local_248;
  undefined8 local_240;
  byte *local_238;
  byte *pbStack_230;
  byte *local_228;
  undefined8 local_220;
  byte *pbStack_218;
  byte *local_210;
  byte *local_208;
  byte *pbStack_200;
  byte *local_1f8;
  undefined8 local_1f0;
  undefined4 *local_1e8;
  undefined8 local_1e0;
  byte *local_1d8;
  byte *local_1d0;
  byte *local_1c8;
  byte *local_1c0;
  byte *local_1b8;
  byte *local_1b0;
  byte *local_1a8;
  byte *local_1a0;
  byte *local_198;
  undefined8 local_190;
  byte *pbStack_188;
  byte *local_180;
  undefined4 local_178;
  undefined4 local_174;
  byte *local_168;
  byte *pbStack_160;
  byte *local_158;
  byte *local_148;
  byte *pbStack_140;
  byte *local_138;
  byte *local_128;
  byte *pbStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte *local_d8;
  byte *pbStack_d0;
  byte *local_c8;
  
  pbVar18 = (byte *)agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_;
  uVar27 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._72_8_;
  lVar20 = *(longlong *)(param_1 + 0x88);
  if (lVar20 == 0x19) {
    *(undefined4 *)(param_1 + 0xdc) = 0x7fffffff;
    return;
  }
  if (lVar20 == 1) {
    lVar20 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(lVar20 + 0x138) == 0) {
      return;
    }
    lVar28 = *(longlong *)(param_1 + 0x70);
    lVar15 = *(longlong *)(lVar28 + 8);
    if (lVar15 == 0) {
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar20 + 0x138) + 0x10) == 0) {
      return;
    }
    if (*(char *)(lVar20 + 0x1c8) != '\0') {
      return;
    }
    if (((*(longlong *)(lVar20 + 0x168) != 0) &&
        (*(longlong *)(*(longlong *)(lVar20 + 0x168) + 8) != 0)) && (param_1[0x58] != '\0')) {
      return;
    }
    if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_ == 0) ||
       (agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_ == lVar15)) {
      agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4cc] = '\x01';
      agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_ = lVar15;
      <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<agy_bridge[64a9e9deac6c45ce]::State>>::
      try_lock(&local_318,0xc5858);
      if ((char)local_318 == '\0') {
        if ((*(longlong *)(pbStack_310 + 0x3c8) == -1) || (pbStack_310[0x448] == '\x01')) {
          if ((*(int *)(pbStack_310 + 8) == 2) || (pbStack_310[0x327] != '\0')) {
LAB_0004b2f9:
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>
                      (pbStack_310,(ulonglong)local_308 & 0xff);
            return;
          }
          if (*(longlong *)(lVar28 + 0x64928) == 0) {
            *(undefined8 *)(lVar28 + 0x64920) = *(undefined8 *)(pbStack_310 + 0x310);
            *(undefined8 *)(lVar28 + 0x64928) = *(undefined8 *)(pbStack_310 + 0x318);
            pbStack_310[0x327] = 1;
            goto LAB_0004b2f9;
          }
        }
        else if (*(longlong *)(lVar28 + 0x64928) == 0) {
          *(undefined8 *)(lVar28 + 0x64920) = *(undefined8 *)(pbStack_310 + 0x438);
          *(undefined8 *)(lVar28 + 0x64928) = *(undefined8 *)(pbStack_310 + 0x440);
          pbStack_310[0x448] = 1;
          goto LAB_0004b2f9;
        }
        fatal();
      }
      else {
        if ((char)local_308 == '\x02') {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4cd] = 1;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>,std[6c98fd8553dbae28]::sync::poison::TryLockError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>>
                    (&local_318);
          return;
        }
        fatal();
      }
      goto LAB_0004c5f0;
    }
LAB_0004c55b:
    fatal();
LAB_0004c56c:
    (*(code *)PTR_handle_error_000c3a98)();
    goto LAB_0004c5f0;
  }
  if (lVar20 == 0x12) {
    if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_ == 0) ||
       (agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_ == *(longlong *)(param_1 + 0x70))) {
      LOCK();
      bVar25 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ == 0;
      if (bVar25) {
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ = 1;
      }
      UNLOCK();
      if (!bVar25) {
        (*(code *)PTR_lock_contended_000c3c80)();
      }
      puVar8 = PTR_GLOBAL_PANIC_COUNT_000c3ac8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
        bVar11 = 0;
      }
      else {
        bVar11 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
        bVar11 = bVar11 ^ 1;
      }
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] == '\0') {
        if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_ != -1) &&
           (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_ != 0)) {
          (*(code *)PTR___rust_dealloc_000c3aa0)();
        }
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_ = 0xffffffffffffffff;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4c0] = '\x01';
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1056_8_ != -1) &&
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1096_8_ == 0x10)) &&
           (auVar30[0] = -(*(char *)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ == DAT_00008d90),
           auVar30[1] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 1) ==
                         UNK_00008d91),
           auVar30[2] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 2) ==
                         UNK_00008d92),
           auVar30[3] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 3) ==
                         UNK_00008d93),
           auVar30[4] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 4) ==
                         UNK_00008d94),
           auVar30[5] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 5) ==
                         UNK_00008d95),
           auVar30[6] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 6) ==
                         UNK_00008d96),
           auVar30[7] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 7) ==
                         UNK_00008d97),
           auVar30[8] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 8) ==
                         UNK_00008d98),
           auVar30[9] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 9) ==
                         UNK_00008d99),
           auVar30[10] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 10) ==
                          UNK_00008d9a),
           auVar30[0xb] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xb) ==
                           UNK_00008d9b),
           auVar30[0xc] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xc) ==
                           UNK_00008d9c),
           auVar30[0xd] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xd) ==
                           UNK_00008d9d),
           auVar30[0xe] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xe) ==
                           UNK_00008d9e),
           auVar30[0xf] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xf) ==
                           UNK_00008d9f),
           (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar30[0xf] >> 7) << 0xf) == 0xffff)) {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1186_2_ = 0x101;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          pcVar19 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
          uVar26 = s_new_conversation_started_0000c4e1._8_8_;
          uVar27 = s_new_conversation_started_0000c4e1._0_8_;
          if (pcVar19 == (char *)0x0) {
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_0004c5f0;
          }
          *(undefined8 *)pcVar19 = s_new_conversation_started_0000c4e1._0_8_;
          *(undefined8 *)(pcVar19 + 8) = uVar26;
          pcVar19[0x10] = '_';
          pcVar19[0x11] = 's';
          pcVar19[0x12] = 't';
          pcVar19[0x13] = 'a';
          pcVar19[0x14] = 'r';
          pcVar19[0x15] = 't';
          pcVar19[0x16] = 'e';
          pcVar19[0x17] = 'd';
          if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_) {
            (*(code *)PTR___rust_dealloc_000c3aa0)(uVar27,1);
          }
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_ = 0x18;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1144_8_ = 0x18;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1136_8_ = pcVar19;
        }
      }
      if (((bVar11 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar10 == '\0')) {
        agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] = '\x01';
      }
      uVar21 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_;
      LOCK();
      agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ = 0;
      UNLOCK();
      if (uVar21 == 2) {
        (*(code *)PTR_wake_000c3ad0)();
      }
      local_318 = (byte *)0x1;
      (*(code *)PTR_write_000c3be8)();
      return;
    }
LAB_00049c06:
    if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4cc] == '\0') {
      return;
    }
    LOCK();
    bVar25 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ == 0;
    if (bVar25) {
      agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ = 1;
    }
    UNLOCK();
    if (!bVar25) {
      (*(code *)PTR_lock_contended_000c3c80)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
      local_334 = 0;
    }
    else {
      bVar11 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
      local_334 = bVar11 ^ 1;
    }
    uVar26 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._1208_8_;
    local_318 = (byte *)(ulonglong)(agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] != '\0');
    pbStack_310 = agy_bridge[64a9e9deac6c45ce]::RUNTIME + 0x58;
    local_308 = (byte *)CONCAT71(local_308._1_7_,local_334);
    if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>>
                (&local_318);
      fatal();
      goto LAB_0004c55b;
    }
    switch(lVar20) {
    case 2:
      if (pbVar18 != (byte *)*(longlong *)(param_1 + 0x70)) break;
      bVar25 = false;
      if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_4_ != 2) &&
          (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37f] != '\0')) &&
         (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] == '\0')) {
        if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._880_8_ == *(longlong *)(param_1 + 0x60)) {
          bVar25 = *(longlong *)(param_1 + 0x68) == agy_bridge[64a9e9deac6c45ce]::RUNTIME._872_8_;
        }
        else {
          bVar25 = false;
        }
      }
      if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1056_8_ == -1) ||
          (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4a0] == '\0')) ||
         ((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4a1] != '\0' ||
          (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1176_8_ != *(longlong *)(param_1 + 0x60))))) {
        if ((bool)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) == uVar27 + 0xa91393a & bVar25))
        goto joined_r0x0004b34e;
        goto LAB_0004b911;
      }
      lVar20 = *(longlong *)(param_1 + 0x68);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) != uVar27 + 0xa91393a) ||
         (!bVar25 && lVar20 != agy_bridge[64a9e9deac6c45ce]::RUNTIME._1168_8_)) goto LAB_0004b911;
      if (lVar20 != agy_bridge[64a9e9deac6c45ce]::RUNTIME._1168_8_) goto joined_r0x0004b34e;
      agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4a1] = '\x01';
      agy_bridge[64a9e9deac6c45ce]::RUNTIME._1152_8_ = (*(code *)PTR_now_000c3c00)();
      agy_bridge[64a9e9deac6c45ce]::RUNTIME._1160_4_ = SUB84(lVar20,0);
      goto LAB_0004ac2b;
    case 0x10:
      pbVar24 = (byte *)0xffffffffffffffff;
      if (*(longlong *)(param_1 + 0x50) - 0x81U < 0xffffffffffffff80 ||
          *(longlong *)(param_1 + 0x48) == 0) {
LAB_0004af13:
        lVar20 = *(longlong *)(param_1 + 0x38);
        if (lVar20 != 0) {
          pbVar5 = *(byte **)(lVar20 + 0x18);
          uVar21 = *(undefined4 *)(lVar20 + 0x20);
          agy_bridge[64a9e9deac6c45ce]::read_go_string
                    (&local_238,*(undefined8 *)(lVar20 + 8),*(undefined8 *)(lVar20 + 0x10),0x80);
          if (local_238 != (byte *)0xffffffffffffffff) {
            local_268 = local_228;
            local_278 = local_238;
            pbStack_270 = pbStack_230;
            if (pbVar5 == (byte *)0x0) {
              local_220 = 0xffffffffffffffff;
              local_330 = (byte *)0xffffffffffffffff;
              pbVar17 = pbStack_218;
              pbVar23 = local_210;
            }
            else {
              agy_bridge[64a9e9deac6c45ce]::read_go_string
                        (&local_318,*(undefined8 *)(pbVar5 + 8),*(undefined8 *)(pbVar5 + 0x10),0x80)
              ;
              agy_bridge[64a9e9deac6c45ce]::read_go_string
                        (&local_220,*(undefined8 *)(pbVar5 + 0x18),*(undefined8 *)(pbVar5 + 0x20),
                         0x100);
              local_330 = local_318;
              pbVar17 = pbStack_310;
              pbVar23 = local_308;
            }
            local_240 = local_220;
            if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_4_ == 2) {
              local_1c8 = pbVar5;
              local_1d8 = (byte *)0xffffffffffffffff;
            }
            else {
              (*(code *)PTR_clone_000c3c68)();
              local_280 = pbStack_310;
              local_1c8 = local_308;
              local_1d8 = local_318;
            }
            (*(code *)PTR_clone_000c3c68)();
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
            local_1e8 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
            if (local_1e8 == (undefined4 *)0x0) goto LAB_0004c56c;
            *(undefined4 *)((longlong)local_1e8 + 3) = 0x64656e77;
            *local_1e8 = 0x77617073;
            local_1a8 = local_330;
            local_190 = local_220;
            pbStack_188 = pbStack_218;
            local_180 = local_210;
            local_1d0 = local_280;
            local_208 = local_318;
            pbStack_200 = pbStack_310;
            local_1f8 = local_308;
            local_1b8 = local_320;
            local_1f0 = 7;
            local_1e0 = 7;
            local_178 = 1;
            local_1c0 = pbVar24;
            local_1b0 = pbVar18;
            local_1a0 = pbVar17;
            local_198 = pbVar23;
            local_174 = uVar21;
            if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_4_ == 2) {
              (*(code *)PTR_memcpy_000c3aa8)(local_320,0x98);
              uVar27 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>
                       ::push_back_mut(0xc5b90,&local_318);
              local_318 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
              uVar27 = (*(code *)PTR_write_000c3be8)(uVar27,8);
              if (local_278 != (byte *)0x0) {
                (*(code *)PTR___rust_dealloc_000c3aa0)(uVar27,1);
              }
              goto joined_r0x0004b34e;
            }
            local_308 = local_228;
            local_318 = local_238;
            pbStack_310 = pbStack_230;
            uVar27 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
                     ::push_back_mut(0xc5a08,&local_318);
            (*(code *)PTR_memcpy_000c3aa8)(uVar27,0x98);
            <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>
            ::push_back_mut(0xc5a28,&local_318);
            goto LAB_0004b265;
          }
        }
        goto LAB_0004afdf;
      }
      (*(code *)PTR_from_utf8_000c3bd8)();
      pbVar5 = local_308;
      if ((int)local_318 == 1) {
        goto LAB_0004af13;
      }
      uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                         (&local_318,local_308,0,1,1);
      pbVar24 = pbStack_310;
      if ((int)local_318 != 1) {
        local_320 = local_308;
        if (pbVar5 == (byte *)0x0) {
          pbVar18 = (byte *)0x0;
        }
        else {
          (*(code *)PTR_memcpy_000c3aa8)(uVar27,pbVar5);
          pbVar18 = pbVar5;
        }
        goto LAB_0004af13;
      }
      goto LAB_0004c3ef;
    case 0x11:
      pbVar24 = (byte *)0xffffffffffffffff;
      if (0xffffffffffffff7f < *(longlong *)(param_1 + 0x50) - 0x81U &&
          *(longlong *)(param_1 + 0x48) != 0) {
        (*(code *)PTR_from_utf8_000c3bd8)();
        pbVar5 = local_308;
        if ((int)local_318 == 1) {
        }
        else {
          uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                             (&local_318,local_308,0,1,1);
          pbVar24 = pbStack_310;
          if ((int)local_318 == 1) goto LAB_0004c3ef;
          local_320 = local_308;
          if (pbVar5 == (byte *)0x0) {
            pbVar18 = (byte *)0x0;
          }
          else {
            (*(code *)PTR_memcpy_000c3aa8)(uVar27,pbVar5);
            pbVar18 = pbVar5;
          }
        }
      }
      if (0xffffffffffffff7f < *(longlong *)(param_1 + 0x30) - 0x81U &&
          *(longlong *)(param_1 + 0x38) != 0) {
        (*(code *)PTR_from_utf8_000c3bd8)();
        pbVar17 = local_308;
        pbVar5 = pbStack_310;
        if ((int)local_318 != 1) {
          uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                             (&local_318,local_308,0,1,1);
          pbVar9 = local_308;
          pbVar23 = pbStack_310;
          if ((int)local_318 == 1) {
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_0004c5f0;
          }
          if (pbVar17 != (byte *)0x0) {
            (*(code *)PTR_memcpy_000c3aa8)(uVar27,pbVar17);
          }
          if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_4_ == 2) {
            local_328 = (byte *)0xffffffffffffffff;
            local_2d8 = pbVar5;
          }
          else {
            (*(code *)PTR_clone_000c3c68)();
            local_328 = local_318;
            local_280 = pbStack_310;
            local_2d8 = local_308;
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          pbStack_2f8 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
          if (pbStack_2f8 == (byte *)0x0) {
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_0004c5f0;
          }
          *(undefined2 *)(pbStack_2f8 + 4) = 0x6465;
          *(undefined4 *)pbStack_2f8 = 0x6c6c696b;
          local_308 = pbVar17;
          local_2d0 = pbVar24;
          local_2c0 = pbVar18;
          if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_4_ == 2) {
            local_318 = pbVar23;
            pbStack_310 = pbVar9;
            local_300 = &Elf64_Ehdr_00000000.e_ident_version;
            local_2f0 = &Elf64_Ehdr_00000000.e_ident_version;
            local_2e8 = local_328;
            pbStack_2e0 = local_280;
            pbStack_2c8 = local_320;
            local_2b8 = (byte *)0xffffffffffffffff;
            local_2a0 = (byte *)0xffffffffffffffff;
            local_288 = 0;
            <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>
            ::push_back_mut(0xc5b90,&local_318);
          }
          else {
            local_318 = pbVar23;
            pbStack_310 = pbVar9;
            local_300 = &Elf64_Ehdr_00000000.e_ident_version;
            local_2f0 = &Elf64_Ehdr_00000000.e_ident_version;
            local_2e8 = local_328;
            pbStack_2e0 = local_280;
            pbStack_2c8 = local_320;
            local_2b8 = (byte *)0xffffffffffffffff;
            local_2a0 = (byte *)0xffffffffffffffff;
            local_288 = 0;
            <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>
            ::push_back_mut(0xc5a28,&local_318);
          }
          goto LAB_0004b265;
        }
      }
LAB_0004afdf:
      if ((Elf64_Ehdr *)0xfffffffffffffffd < (Elf64_Ehdr *)(pbVar24 + -1)) goto joined_r0x0004b34e;
      goto LAB_0004aff7;
    case 0x14:
      if (pbVar18 == (byte *)*(longlong *)(param_1 + 0x70)) {
        agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4c0] = '\x01';
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1056_8_ != -1) &&
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1096_8_ == 0x11)) &&
           (auVar29[0] = -(*(char *)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ == DAT_00008fd0),
           auVar29[1] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 1) ==
                         UNK_00008fd1),
           auVar29[2] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 2) ==
                         UNK_00008fd2),
           auVar29[3] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 3) ==
                         UNK_00008fd3),
           auVar29[4] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 4) ==
                         UNK_00008fd4),
           auVar29[5] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 5) ==
                         UNK_00008fd5),
           auVar29[6] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 6) ==
                         UNK_00008fd6),
           auVar29[7] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 7) ==
                         UNK_00008fd7),
           auVar29[8] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 8) ==
                         UNK_00008fd8),
           auVar29[9] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 9) ==
                         UNK_00008fd9),
           auVar29[10] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 10) ==
                          UNK_00008fda),
           auVar29[0xb] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xb) ==
                           UNK_00008fdb),
           auVar29[0xc] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xc) ==
                           UNK_00008fdc),
           auVar29[0xd] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xd) ==
                           UNK_00008fdd),
           auVar29[0xe] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xe) ==
                           UNK_00008fde),
           auVar29[0xf] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xf) ==
                           UNK_00008fdf),
           auVar32[0] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0x10) ==
                         s_n_000091b0[0]), auVar32[1] = -(s_n_000091b0[1] == '\0'),
           auVar32[2] = -(s_n_000091b0[2] == '\0'), auVar32[3] = -(s_n_000091b0[3] == '\0'),
           auVar32[4] = -(UNK_000091b4 == '\0'), auVar32[5] = -(UNK_000091b5 == '\0'),
           auVar32[6] = -(UNK_000091b6 == '\0'), auVar32[7] = -(UNK_000091b7 == '\0'),
           auVar32[8] = -(UNK_000091b8 == '\0'), auVar32[9] = -(UNK_000091b9 == '\0'),
           auVar32[10] = -(UNK_000091ba == '\0'), auVar32[0xb] = -(UNK_000091bb == '\0'),
           auVar32[0xc] = -(UNK_000091bc == '\0'), auVar32[0xd] = -(UNK_000091bd == '\0'),
           auVar32[0xe] = -(UNK_000091be == '\0'), auVar32[0xf] = -(UNK_000091bf == '\0'),
           auVar32 = auVar32 & auVar29,
           (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff)) {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1186_2_ = 0x101;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          pcVar19 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
          uVar26 = s_conversation_forked_0000c563._8_8_;
          uVar27 = s_conversation_forked_0000c563._0_8_;
          if (pcVar19 == (char *)0x0) goto LAB_0004c3ef;
          *(undefined8 *)pcVar19 = s_conversation_forked_0000c563._0_8_;
          *(undefined8 *)(pcVar19 + 8) = uVar26;
          pcVar19[0xf] = 'r';
          pcVar19[0x10] = 'k';
          pcVar19[0x11] = 'e';
          pcVar19[0x12] = 'd';
          if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_) {
            (*(code *)PTR___rust_dealloc_000c3aa0)(uVar27,1);
          }
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_ = 0x13;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1144_8_ = 0x13;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1136_8_ = pcVar19;
        }
LAB_0004b265:
        local_318 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        (*(code *)PTR_write_000c3be8)();
        goto joined_r0x0004b34e;
      }
      break;
    case 0x15:
      if (pbVar18 == (byte *)*(longlong *)(param_1 + 0x70)) {
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1056_8_ != -1) &&
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1096_8_ == 0xb)) &&
           (*(longlong *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 3) == 0x6e7275745f6c6563
            && *(longlong *)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ == 0x745f6c65636e6163)) {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1186_2_ = 0x101;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          pcVar19 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
          uVar26 = s_conversation_cancelled_0000c576._8_8_;
          uVar27 = s_conversation_cancelled_0000c576._0_8_;
          if (pcVar19 == (char *)0x0) goto LAB_0004c3ef;
          *(undefined8 *)pcVar19 = s_conversation_cancelled_0000c576._0_8_;
          *(undefined8 *)(pcVar19 + 8) = uVar26;
          pcVar19[0xe] = 'a';
          pcVar19[0xf] = 'n';
          pcVar19[0x10] = 'c';
          pcVar19[0x11] = 'e';
          pcVar19[0x12] = 'l';
          pcVar19[0x13] = 'l';
          pcVar19[0x14] = 'e';
          pcVar19[0x15] = 'd';
          if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_) {
            (*(code *)PTR___rust_dealloc_000c3aa0)(uVar27,1);
          }
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_ = 0x16;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1144_8_ = 0x16;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1136_8_ = pcVar19;
        }
        goto LAB_0004b265;
      }
      break;
    case 0x16:
      if (pbVar18 == (byte *)*(longlong *)(param_1 + 0x70)) {
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1056_8_ != -1) &&
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1096_8_ == 9)) &&
           (*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 8) == 'l' &&
            *(longlong *)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ == 0x65646f6d5f746573)) {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1186_2_ = 0x101;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
          if (puVar13 == (undefined8 *)0x0) goto LAB_0004c3ef;
          *(undefined8 *)((longlong)puVar13 + 6) = 0x64657463656c6573;
          *puVar13 = 0x65735f6c65646f6d;
          if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_) {
            (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Qa_00,1);
          }
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_ = 0xe;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1144_8_ = 0xe;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1136_8_ = puVar13;
        }
        goto LAB_0004b265;
      }
    }
    if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_4_ == 2) goto joined_r0x0004b34e;
    switch(lVar20) {
    case 3:
      if ((byte *)*(longlong *)(param_1 + 0x60) == pbVar18) {
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37f] == '\x01') &&
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] == '\0')) &&
           ((*(longlong *)(param_1 + 0x58) != 0 && (*(longlong *)(param_1 + 0x68) - 1U < 0x80)))) {
          (*(code *)PTR_from_utf8_000c3bd8)();
          pbVar18 = local_308;
          if ((((int)local_318 != 1) &&
              (cVar10 = agy_bridge[64a9e9deac6c45ce]::protocol::valid_id(pbStack_310,local_308),
              cVar10 != '\0')) &&
             ((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4c0] != '\0' ||
              ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_ == -1 ||
               (((byte *)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1208_8_ == pbVar18 &&
                (iVar12 = (*(code *)PTR_bcmp_000c3b80)(extraout_XMM0_Qa_02,pbVar18), iVar12 == 0))))
              )))) {
            lVar28 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_318,pbVar18,0,1,1);
            pbVar5 = local_308;
            pbVar24 = pbStack_310;
            if ((char)local_318 != '\0') goto LAB_0004c3ef;
            if (pbVar18 != (byte *)0x0) {
              lVar28 = (*(code *)PTR_memcpy_000c3aa8)(lVar28,pbVar18);
            }
            if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_) {
              lVar28 = (*(code *)PTR___rust_dealloc_000c3aa0)(lVar28,1);
            }
            agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_ = pbVar24;
            agy_bridge[64a9e9deac6c45ce]::RUNTIME._1200_8_ = pbVar5;
            agy_bridge[64a9e9deac6c45ce]::RUNTIME._1208_8_ = pbVar18;
            agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4c0] = '\0';
            agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] = '\x01';
            goto LAB_0004b32a;
          }
        }
LAB_0004b911:
        fatal();
LAB_0004c5f0:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      break;
    case 4:
      if (((((byte *)*(longlong *)(param_1 + 0x50) == pbVar18) &&
           (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] != '\0')) &&
          (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x202] == '\0')) &&
         (agy_bridge[64a9e9deac6c45ce]::RUNTIME._256_8_ == -1)) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        pbVar18 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
        uVar27 = s_o_upstream_provider_0000c616._8_8_;
        if (pbVar18 != (byte *)0x0) {
          *(undefined8 *)(pbVar18 + 0x30) = s_o_upstream_provider_0000c616._0_8_;
          *(undefined8 *)(pbVar18 + 0x38) = uVar27;
          uVar27 = s_h_user_message_t_0000c606._8_8_;
          *(undefined8 *)(pbVar18 + 0x20) = s_h_user_message_t_0000c606._0_8_;
          *(undefined8 *)(pbVar18 + 0x28) = uVar27;
          uVar27 = s_ailed_to_dispatc_0000c5f6._8_8_;
          *(undefined8 *)(pbVar18 + 0x10) = s_ailed_to_dispatc_0000c5f6._0_8_;
          *(undefined8 *)(pbVar18 + 0x18) = uVar27;
          uVar27 = s_native_manager_f_0000c5e6._8_8_;
          *(undefined8 *)pbVar18 = s_native_manager_f_0000c5e6._0_8_;
          *(undefined8 *)(pbVar18 + 8) = uVar27;
          *(undefined4 *)(pbVar18 + 0x3f) = 0x72656469;
          local_318 = (byte *)0x43;
          local_308 = (byte *)((longlong)&Elf64_Phdr_ARRAY_00000040[0].p_type + 3);
          pbStack_310 = pbVar18;
          lVar28 = <agy_bridge[64a9e9deac6c45ce]::Turn>::mark_failed::<&str>
                             (0xc5860,"send_failed",0xb,&local_318);
          goto LAB_0004b32a;
        }
LAB_0004c3ef:
        (*(code *)PTR_handle_error_000c3a98)();
        goto LAB_0004c5f0;
      }
      break;
    case 5:
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] == '\x01') {
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x381] != '\0') ||
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x382] != '\0')) ||
           ((cVar10 = <agy_bridge[64a9e9deac6c45ce]::Turn>::provider_rejected(0xc5860),
            cVar10 != '\0' ||
            (lVar20 = *(longlong *)(*(longlong *)**(undefined8 **)(param_1 + 0x40) + 8) - uVar27,
            lVar20 - 0x8bf1a60U < 0x460)))) goto joined_r0x0004b34e;
        if (lVar20 - 0x8e36b20U < 0x200) {
          if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._480_8_ == 0) ||
             (cVar10 = <agy_bridge[64a9e9deac6c45ce]::Turn>::advance_primary_attempt(0xc5860),
             cVar10 != '\0')) {
            agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x200] = 0;
            agy_bridge[64a9e9deac6c45ce]::RUNTIME._480_8_ = *(undefined8 *)(param_1 + 0x70);
            lVar28 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::insert(0xc5b08,agy_bridge[64a9e9deac6c45ce]::RUNTIME._480_8_,0);
            goto LAB_0004b32a;
          }
          if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37d] != '\0') ||
             (agy_bridge[64a9e9deac6c45ce]::RUNTIME._544_8_ != 0)) {
            iVar12 = <agy_bridge[64a9e9deac6c45ce]::Turn>::allocate_substream
                               (0xc5860,*(undefined8 *)(param_1 + 0x70),0);
            lVar28 = extraout_XMM0_Qa_07;
            goto LAB_0004b94e;
          }
        }
        goto LAB_0004b911;
      }
      break;
    case 6:
    case 0xc:
      cVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::contains_key::<usize>(0xc5b08,param_1 + 0x58);
      if (cVar10 == '\0') {
        switch(lVar20) {
        case 7:
          goto switchD_0004a165_caseD_7;
        case 8:
          goto switchD_0004a165_caseD_8;
        case 9:
          goto switchD_0004a165_caseD_9;
        case 10:
          goto switchD_0004a165_caseD_a;
        }
      }
      else {
        piVar14 = (int *)<hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                         ::get::<usize>(0xc5b08,param_1 + 0x58);
        if (piVar14 == (int *)0x0) goto joined_r0x0004b34e;
        iVar12 = *piVar14;
        local_318 = (byte *)CONCAT44(local_318._4_4_,iVar12);
        if (iVar12 == 0) {
          lVar28 = 0xc58d0;
        }
        else {
          lVar28 = <hashbrown[b5c94476ffc33875]::map::HashMap<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::get_mut::<u32>(0xc5ad8,&local_318);
          if (lVar28 == 0) goto joined_r0x0004b34e;
        }
        lVar15 = 6;
        if (*(char *)(lVar28 + 0x130) != '\0') {
          lVar15 = 0xc;
        }
        if (lVar20 != lVar15) goto joined_r0x0004b34e;
        if (*(longlong *)(lVar28 + 0x118) != 0) goto LAB_0004b911;
        uVar27 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(lVar28 + 0x118) = uVar27;
        <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
        ::insert(0xc5b38,uVar27,iVar12);
      }
      break;
    case 7:
    case 0xd:
switchD_0004a165_caseD_7:
      if (*(longlong *)(param_1 + 8) == 0) {
LAB_0004ab38:
        if (lVar20 != 8) {
          if (lVar20 == 9) goto switchD_0004a165_caseD_9;
          goto LAB_0004abda;
        }
        goto switchD_0004a165_caseD_8;
      }
      cVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::contains_key::<usize>(0xc5b38,param_1 + 8);
      if (cVar10 == '\0') goto LAB_0004ab38;
      if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x381] != '\0') ||
          (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x382] != '\0')) ||
         ((cVar10 = <agy_bridge[64a9e9deac6c45ce]::Turn>::provider_rejected(0xc5860), cVar10 != '\0'
          || (piVar14 = (int *)<hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                               ::get::<usize>(0xc5b38,param_1 + 8), piVar14 == (int *)0x0))))
      goto joined_r0x0004b34e;
      local_318 = (byte *)CONCAT44(local_318._4_4_,*piVar14);
      if (*piVar14 == 0) {
        lVar15 = 0xc58d0;
      }
      else {
        lVar15 = <hashbrown[b5c94476ffc33875]::map::HashMap<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::get_mut::<u32>(0xc5ad8,&local_318);
        if (lVar15 == 0) goto joined_r0x0004b34e;
      }
      lVar28 = 7;
      if (*(char *)(lVar15 + 0x130) != '\0') {
        lVar28 = 0xd;
      }
      if (lVar20 != lVar28) goto joined_r0x0004b34e;
      if (*(longlong *)(lVar15 + 0x30) != -1) goto LAB_0004b911;
      uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x68) + 0x10);
      uVar27 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38);
      agy_bridge[64a9e9deac6c45ce]::header_value(&local_318,uVar27,"Content-Type",0xc);
      if (local_318 == (byte *)0xffffffffffffffff) {
        local_258 = (byte *)0x0;
        pbStack_250 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        local_248 = (byte *)0x0;
      }
      else {
        local_248 = local_308;
        local_258 = local_318;
        pbStack_250 = pbStack_310;
      }
      agy_bridge[64a9e9deac6c45ce]::header_value(&local_318,uVar27,"Retry-After",0xb);
      if (local_318 == (byte *)0xffffffffffffffff) {
        agy_bridge[64a9e9deac6c45ce]::header_value(&local_208,uVar27,"X-RateLimit-Reset-After",0x17)
        ;
      }
      else {
        local_1f8 = local_308;
        local_208 = local_318;
        pbStack_200 = pbStack_310;
      }
      if (local_208 == (byte *)0xffffffffffffffff) {
        agy_bridge[64a9e9deac6c45ce]::header_value(&local_318,uVar27,"X-RateLimit-Reset",0x11);
      }
      else {
        local_308 = local_1f8;
        local_318 = local_208;
        pbStack_310 = pbStack_200;
      }
      if (local_318 == (byte *)0xffffffffffffffff) {
        agy_bridge[64a9e9deac6c45ce]::header_value(&local_168,uVar27,"X-Google-Quota-Reset",0x14);
      }
      else {
        local_158 = local_308;
        local_168 = local_318;
        pbStack_160 = pbStack_310;
      }
      agy_bridge[64a9e9deac6c45ce]::header_value(&local_318,uVar27,"X-Request-Id",0xc);
      if (local_318 == (byte *)0xffffffffffffffff) {
        agy_bridge[64a9e9deac6c45ce]::header_value(&local_208,uVar27,"X-Goog-Request-Id",0x11);
      }
      else {
        local_1f8 = local_308;
        local_208 = local_318;
        pbStack_200 = pbStack_310;
      }
      if (local_208 == (byte *)0xffffffffffffffff) {
        agy_bridge[64a9e9deac6c45ce]::header_value(&local_148,uVar27,"Request-Id",10);
      }
      else {
        local_138 = local_1f8;
        local_148 = local_208;
        pbStack_140 = pbStack_200;
      }
      agy_bridge[64a9e9deac6c45ce]::header_value(&local_238,uVar27,"Grpc-Status",0xb);
      agy_bridge[64a9e9deac6c45ce]::header_value(&local_278,uVar27,"Grpc-Message",0xc);
      agy_bridge[64a9e9deac6c45ce]::header_value(&local_208,uVar27,"WWW-Authenticate",0x10);
      pbVar18 = local_248;
      if (local_248 == (byte *)0x0) {
        local_318 = (byte *)0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_000c3c68)();
        local_128 = pbStack_310;
        pbStack_120 = local_308;
      }
      local_2f0 = local_158;
      local_300 = local_168;
      pbStack_2f8 = pbStack_160;
      local_2e8 = local_148;
      pbStack_2e0 = pbStack_140;
      local_2d8 = local_138;
      local_2d0 = local_238;
      pbStack_2c8 = pbStack_230;
      local_2c0 = local_228;
      local_2b8 = local_278;
      pbStack_2b0 = pbStack_270;
      local_2a8 = local_268;
      local_290 = local_1f8;
      local_2a0 = local_208;
      pbStack_298 = pbStack_200;
      pbStack_310 = local_128;
      local_308 = pbStack_120;
      cVar10 = agy_bridge[64a9e9deac6c45ce]::sse_ok(uVar1,pbStack_250,pbVar18);
      puVar8 = PTR_memcpy_000c3aa8;
      local_c8 = local_248;
      local_d8 = local_258;
      pbStack_d0 = pbStack_250;
      (*(code *)PTR_memcpy_000c3aa8)(local_258,0x90);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::ProviderInfo>>
                (lVar15 + 0x30,&local_318);
      uVar21 = 0xa8;
      uVar27 = (*(code *)puVar8)();
      *(undefined2 *)(lVar15 + 0xd8) = uVar1;
      if (cVar10 == '\0') {
        uVar27 = (*(code *)PTR_now_000c3c00)();
        lVar28 = extraout_XMM0_Qa_09;
      }
      else {
        uVar21 = 0xffffffff;
        lVar28 = extraout_XMM0_Qa_08;
      }
      *(undefined8 *)(lVar15 + 0xf8) = uVar27;
      *(undefined4 *)(lVar15 + 0x100) = uVar21;
      if (0 < *(longlong *)(lVar15 + 0xe0)) {
        lVar28 = (*(code *)PTR___rust_dealloc_000c3aa0)(lVar28,1);
      }
      *(undefined8 *)(lVar15 + 0xe0) = 0xffffffffffffffff;
      local_128 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
      goto LAB_0004b33e;
    case 8:
switchD_0004a165_caseD_8:
      if (*(longlong *)(param_1 + 8) != 0) {
        cVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::contains_key::<usize>(0xc5b38,param_1 + 8);
        if (cVar10 != '\0') {
          if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x381] != '\0') ||
              (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x382] != '\0')) ||
             (puVar16 = (uint *)<hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                                ::get::<usize>(0xc5b38,param_1 + 8), puVar16 == (uint *)0x0))
          goto joined_r0x0004b34e;
          uVar2 = *puVar16;
          local_318 = (byte *)CONCAT44(local_318._4_4_,uVar2);
          local_320 = (byte *)(ulonglong)uVar2;
          if (uVar2 == 0) {
            unaff_R15 = (longlong *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME + 0xd0);
          }
          else {
            unaff_R15 = (longlong *)
                        <hashbrown[b5c94476ffc33875]::map::HashMap<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>>
                        ::get_mut::<u32>(0xc5ad8,&local_318);
            if (unaff_R15 == (longlong *)0x0) goto joined_r0x0004b34e;
          }
          lVar20 = uVar27 + 0x82cb235;
          if ((char)unaff_R15[0x26] != '\0') {
            lVar20 = uVar27 + 0x9609ad1;
          }
          if (*(longlong *)(param_1 + 0x158) != lVar20) goto joined_r0x0004b34e;
          local_330 = *(byte **)(param_1 + 0x70);
          local_280 = *(byte **)(param_1 + 0x160);
          uVar4 = *(ulonglong *)(local_280 + 0x40);
          local_328 = *(byte **)(local_280 + 0x58);
          cVar10 = <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::provider_rejected(unaff_R15);
          if (cVar10 == '\0') {
            if ((((unaff_R15[6] == -1) || (*(char *)((longlong)unaff_R15 + 0x131) != '\0')) ||
                (((undefined4 *)unaff_R15[0x24] != (undefined4 *)0x0 &&
                 ((byte *)unaff_R15[0x24] != local_280)))) ||
               (uVar4 < (ulonglong)((longlong)local_330 + (longlong)local_328) ||
                CARRY8((ulonglong)local_330,(ulonglong)local_328))) goto LAB_0004b911;
            lVar20 = unaff_R15[0x25];
            if ((local_330 <= 0x2000000U - lVar20) &&
               (pbVar24 = (byte *)unaff_R15[2], lVar28 = extraout_XMM0_Qa_06,
               local_330 <= 0x400000U - (longlong)pbVar24)) goto LAB_0004c24d;
            *(undefined1 *)((longlong)unaff_R15 + 0x132) = 1;
            if (uVar2 == 0) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
              pbVar18 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
              uVar27 = s_ive_adapter_byte_budget_0000c746._8_8_;
              if (pbVar18 == (byte *)0x0) goto LAB_0004c3ef;
              *(undefined8 *)(pbVar18 + 0x20) = s_ive_adapter_byte_budget_0000c746._0_8_;
              *(undefined8 *)(pbVar18 + 0x28) = uVar27;
              uVar27 = s_eam_exceeded_nat_0000c736._8_8_;
              *(undefined8 *)(pbVar18 + 0x10) = s_eam_exceeded_nat_0000c736._0_8_;
              *(undefined8 *)(pbVar18 + 0x18) = uVar27;
              uVar27 = s_upstream_SSE_str_0000c726._8_8_;
              *(undefined8 *)pbVar18 = s_upstream_SSE_str_0000c726._0_8_;
              *(undefined8 *)(pbVar18 + 8) = uVar27;
              *(undefined8 *)(pbVar18 + 0x2f) = 0x7465676475622065;
              local_318 = (byte *)0x37;
              local_308 = (byte *)((longlong)&Elf64_Ehdr_00000000.e_phentsize + 1);
              pbStack_310 = pbVar18;
              <agy_bridge[64a9e9deac6c45ce]::Turn>::mark_failed::<&str>
                        (0xc5860,"response_body_oversized",0x17,&local_318);
            }
          }
          else {
            if (((local_330 != (byte *)0x0) && (!CARRY8((ulonglong)local_330,(ulonglong)local_328)))
               && ((ulonglong)((longlong)local_330 + (longlong)local_328) <= uVar4)) {
              <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::append_error_body
                        (unaff_R15,(longlong)local_328 + *(longlong *)(local_280 + 0x38),local_330);
            }
            if (*(longlong *)(param_1 + 0x68) != 0) {
              *(undefined1 *)((longlong)unaff_R15 + 0x131) = 1;
            }
          }
          goto LAB_0004ac2b;
        }
      }
      break;
    case 9:
    case 0xe:
switchD_0004a165_caseD_9:
      if (*(longlong *)(param_1 + 8) != 0) {
        cVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::contains_key::<usize>(0xc5b38,param_1 + 8);
        if (cVar10 != '\0') {
          piVar14 = (int *)<hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                           ::get::<usize>(0xc5b38,param_1 + 8);
          if (piVar14 == (int *)0x0) goto joined_r0x0004b34e;
          local_318 = (byte *)CONCAT44(local_318._4_4_,*piVar14);
          if (*piVar14 == 0) {
            if (lVar20 != (ulonglong)agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x200] * 5 + 9)
            goto joined_r0x0004b34e;
            agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x202] = '\x01';
            lVar28 = extraout_XMM0_Qa_03;
            if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._256_8_ == -1) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
              pbVar18 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
              uVar27 = s_an_HTTP_response_0000c7c7._8_8_;
              if (pbVar18 == (byte *)0x0) goto LAB_0004c3ef;
              *(undefined8 *)(pbVar18 + 0x30) = s_an_HTTP_response_0000c7c7._0_8_;
              *(undefined8 *)(pbVar18 + 0x38) = uVar27;
              uVar27 = s_before_receiving_0000c7b7._8_8_;
              *(undefined8 *)(pbVar18 + 0x20) = s_before_receiving_0000c7b7._0_8_;
              *(undefined8 *)(pbVar18 + 0x28) = uVar27;
              uVar27 = s_iterator_exited_0000c7a7._8_8_;
              *(undefined8 *)(pbVar18 + 0x10) = s_iterator_exited_0000c7a7._0_8_;
              *(undefined8 *)(pbVar18 + 0x18) = uVar27;
              uVar27 = s_native_provider_0000c797._8_8_;
              *(undefined8 *)pbVar18 = s_native_provider_0000c797._0_8_;
              *(undefined8 *)(pbVar18 + 8) = uVar27;
              pbVar18[0x40] = 0x65;
              local_318 = (byte *)0x41;
              local_308 = (byte *)((longlong)&Elf64_Phdr_ARRAY_00000040[0].p_type + 1);
              pbStack_310 = pbVar18;
              lVar28 = <agy_bridge[64a9e9deac6c45ce]::Turn>::mark_failed::<&str>
                                 (0xc5860,"provider_iterator_empty",0x17,&local_318);
            }
          }
          else {
            lVar28 = <hashbrown[b5c94476ffc33875]::map::HashMap<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::get_mut::<u32>(0xc5ad8,&local_318);
            if ((lVar28 == 0) || (lVar20 != (ulonglong)*(byte *)(lVar28 + 0x130) * 5 + 9))
            goto joined_r0x0004b34e;
            *(undefined1 *)(lVar28 + 0x132) = 1;
            lVar28 = extraout_XMM0_Qa_04;
          }
          goto LAB_0004b32a;
        }
      }
LAB_0004abda:
      if (lVar20 == 10) goto switchD_0004a165_caseD_a;
      break;
    case 10:
switchD_0004a165_caseD_a:
      if (((byte *)*(longlong *)(param_1 + 0xc0) == pbVar18) &&
         (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] != '\0')) {
        if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x381] == '\0') &&
           ((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x382] == '\0' &&
            (cVar10 = <agy_bridge[64a9e9deac6c45ce]::Turn>::provider_rejected(0xc5860),
            cVar10 == '\0')))) {
          if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x202] != '\0') {
            agy_bridge[64a9e9deac6c45ce]::RUNTIME[899] = 1;
            lVar28 = extraout_XMM0_Qa_05;
            goto LAB_0004b32a;
          }
          goto LAB_0004b911;
        }
        agy_bridge[64a9e9deac6c45ce]::RUNTIME[899] = 1;
LAB_0004ac2b:
        local_318 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        (*(code *)PTR_write_000c3be8)();
        goto joined_r0x0004b34e;
      }
      break;
    case 0xb:
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] == '\x01') {
        if ((((((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x381] != '\0') ||
               (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x382] != '\0')) ||
              (cVar10 = <agy_bridge[64a9e9deac6c45ce]::Turn>::provider_rejected(0xc5860),
              cVar10 != '\0')) ||
             ((plVar3 = *(longlong **)(param_1 + 0x40), plVar3 == (longlong *)0x0 ||
              (plVar3[1] != uVar27 + 0xa03f6aa)))) ||
            (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)) ||
           (((plVar3[1] != uVar27 + 0xa03e7d5 ||
             (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)) ||
            ((plVar3[1] != uVar27 + 0xa0987e7 ||
             ((*plVar3 == 0 || (0x1ff < (*(longlong *)(*plVar3 + 8) - uVar27) - 0x8e36b20U))))))))
        goto joined_r0x0004b34e;
        if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._480_8_ != 0) &&
           (cVar10 = <agy_bridge[64a9e9deac6c45ce]::Turn>::advance_primary_attempt(0xc5860),
           cVar10 == '\0')) {
          if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37d] != '\0') ||
             (agy_bridge[64a9e9deac6c45ce]::RUNTIME._544_8_ != 0)) {
            iVar12 = <agy_bridge[64a9e9deac6c45ce]::Turn>::allocate_substream
                               (0xc5860,*(undefined8 *)(param_1 + 0x70),1);
            lVar28 = extraout_XMM0_Qa_11;
LAB_0004b94e:
            if (iVar12 != 0) goto LAB_0004b32a;
          }
          goto LAB_0004b911;
        }
        agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x200] = 1;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._480_8_ = *(undefined8 *)(param_1 + 0x70);
        lVar28 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::insert(0xc5b08,agy_bridge[64a9e9deac6c45ce]::RUNTIME._480_8_,0);
        goto LAB_0004b32a;
      }
      break;
    case 0xf:
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x380] == '\x01') {
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x381] != '\0') ||
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x382] != '\0')) ||
           ((lVar20 = *(longlong *)(param_1 + 0x70), lVar20 == 0 ||
            (pbVar18 = *(byte **)(param_1 + 0x68), pbVar18 == (byte *)0x0))))
        goto joined_r0x0004b34e;
        cVar10 = <agy_bridge[64a9e9deac6c45ce]::Turn>::provider_rejected(0xc5860);
        if (cVar10 == '\0') {
          if ((byte *)0xe00000 < pbVar18) goto joined_r0x0004b34e;
          lVar20 = (*(longlong **)(param_1 + 0x40))[1] - uVar27;
          if (((lVar20 != 0x95e9bf1) && (lVar20 != 0x95e9bd6)) ||
             (lVar20 = **(longlong **)(param_1 + 0x40), lVar20 == 0)) goto joined_r0x0004b34e;
          lVar20 = *(longlong *)(lVar20 + 8) - uVar27;
          if (lVar20 == 0x95eaadc) {
            pbVar24 = Elf64_Ehdr_00000000.e_ident_pad + 5;
          }
          else {
            if (lVar20 != 0x9616cb0) goto joined_r0x0004b34e;
            pbVar24 = Elf64_Ehdr_00000000.e_ident_pad + 1;
          }
          uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                             (&local_318,pbVar24,0,1,1);
          pbVar17 = local_308;
          pbVar5 = pbStack_310;
          if ((int)local_318 == 1) goto LAB_0004c3ef;
          (*(code *)PTR_memcpy_000c3aa8)(uVar27,pbVar24);
          uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                             (&local_318,pbVar18,0,1,1);
          pbVar9 = local_308;
          pbVar23 = pbStack_310;
          if ((char)local_318 != '\0') {
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_0004c5f0;
          }
          (*(code *)PTR_memcpy_000c3aa8)(uVar27,pbVar18);
          local_318 = pbVar5;
          pbStack_310 = pbVar17;
          local_300 = pbVar23;
          pbStack_2f8 = pbVar9;
          local_308 = pbVar24;
          local_2f0 = pbVar18;
          lVar28 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::vec::Vec<u8>)>>
                   ::push_back_mut(0xc5a48,&local_318);
          goto LAB_0004b32a;
        }
        if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._432_8_ != -1) goto joined_r0x0004b34e;
        pbVar24 = zmij[d3c5782749dc14a3]::STATIC_DATA + 0x2c0;
        if (pbVar18 < zmij[d3c5782749dc14a3]::STATIC_DATA + 0x2c0) {
          pbVar24 = pbVar18;
        }
        <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::append_error_body(0xc58d0,lVar20,pbVar24);
        goto LAB_0004ac2b;
      }
      break;
    case 0x17:
      puVar13 = *(undefined8 **)(param_1 + 0x70);
      if (puVar13 == (undefined8 *)0x0) goto joined_r0x0004b34e;
      if ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_ != -1) &&
         (uVar27 = agy_bridge[64a9e9deac6c45ce]::read_go_string(&local_318,*puVar13,puVar13[1],0x80)
         , pbVar18 = local_318, local_318 != (byte *)0xffffffffffffffff)) {
        if ((local_308 != (byte *)uVar26) ||
           (iVar12 = (*(code *)PTR_bcmp_000c3b80)(uVar27,uVar26), iVar12 != 0)) {
          if (pbVar18 != (byte *)0x0) {
LAB_0004aff7:
            (*(code *)PTR___rust_dealloc_000c3aa0)();
          }
          goto joined_r0x0004b34e;
        }
        if (pbVar18 != (byte *)0x0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Qa_01,1);
        }
      }
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._688_8_ != -2) {
        agy_bridge[64a9e9deac6c45ce]::filter_model_request_tools
                  (puVar13,0xc5ab0,agy_bridge[64a9e9deac6c45ce]::RUNTIME._472_8_,0xc5888,0xc5bb0);
      }
      if (((0 < (int)agy_bridge[64a9e9deac6c45ce]::RUNTIME._724_4_ &
           agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x2d0]) == 1) && (puVar13[0xd] != 0)) {
        *(undefined4 *)(puVar13[0xd] + 0x14) = agy_bridge[64a9e9deac6c45ce]::RUNTIME._724_4_;
      }
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._616_8_ == -1) {
        cVar10 = '\x01';
        bVar25 = agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37e] == '\0';
LAB_0004b633:
        if (bVar25) goto joined_r0x0004b34e;
      }
      else {
        <str>::trim_matches::<<char>::is_whitespace>
                  (agy_bridge[64a9e9deac6c45ce]::RUNTIME._624_8_,
                   agy_bridge[64a9e9deac6c45ce]::RUNTIME._632_8_);
        cVar10 = agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37e];
        if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37e] == '\0') {
          bVar25 = extraout_RDX == 0;
          goto LAB_0004b633;
        }
      }
      uVar27 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._128_8_;
      lVar20 = puVar13[2];
      lVar28 = puVar13[3];
      if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x60] != '\0') &&
          (agy_bridge[64a9e9deac6c45ce]::RUNTIME._104_8_ == lVar20)) &&
         (agy_bridge[64a9e9deac6c45ce]::RUNTIME._112_8_ == lVar28)) {
        puVar13[2] = agy_bridge[64a9e9deac6c45ce]::RUNTIME._120_8_;
        puVar13[3] = uVar27;
        goto joined_r0x0004b34e;
      }
      if (lVar20 != 0 && lVar28 - 1U < 0x400000) {
        (*(code *)PTR_from_utf8_000c3bd8)(lVar20 != 0,lVar28);
        pbVar18 = (byte *)0x0;
        if ((char)local_318 == '\0') {
          pbVar18 = local_308;
        }
        pbVar24 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        if ((char)local_318 == '\0') {
          pbVar24 = pbStack_310;
        }
        cVar10 = agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x37e];
      }
      else {
        pbVar24 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        pbVar18 = (byte *)0x0;
      }
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._616_8_ == -1) {
        uVar27 = 0;
      }
      else {
        uVar27 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._624_8_;
      }
      uVar27 = agy_bridge[64a9e9deac6c45ce]::compose_system_prompt
                         (&local_318,cVar10,pbVar24,pbVar18,uVar27,
                          agy_bridge[64a9e9deac6c45ce]::RUNTIME._632_8_);
      if (local_318 == (byte *)0xffffffffffffffff) goto joined_r0x0004b34e;
      if (local_308 == (byte *)0x0) {
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_8_ = 1;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._120_8_ = 1;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._128_8_ = 0;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._104_8_ = lVar20;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._112_8_ = lVar28;
        puVar13[2] = 1;
        puVar13[3] = 0;
        if (local_318 != (byte *)0x0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar27,1);
        }
      }
      else {
        <agy_bridge[64a9e9deac6c45ce]::PromptArena>::alloc(&local_208,0xc5bb0,&local_318);
        if ((int)local_208 == 1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::result::Result<(usize,usize),core[c0acaeba6ab4c2e0]::io::error::Error>>
                    (1,pbStack_200);
          goto joined_r0x0004b34e;
        }
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._96_8_ = 1;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._120_8_ = pbStack_200;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._128_8_ = local_1f8;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._104_8_ = lVar20;
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._112_8_ = lVar28;
        puVar13[2] = pbStack_200;
        puVar13[3] = local_1f8;
      }
      break;
    case 0x18:
      if (*(longlong *)(param_1 + 8) != 0) {
        cVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::contains_key::<usize>(0xc5b38,param_1 + 8);
        if (cVar10 != '\0') {
          if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x381] != '\0') ||
              (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x382] != '\0')) ||
             ((lVar20 = *(longlong *)(param_1 + 0x70), lVar20 == 0 ||
              ((uVar4 = *(ulonglong *)(param_1 + 0x68), uVar4 == 0 ||
               (piVar14 = (int *)<hashbrown[b5c94476ffc33875]::map::HashMap<usize,u32,std[6c98fd8553dbae28]::hash::random::RandomState>>
                                 ::get::<usize>(0xc5b38,param_1 + 8), piVar14 == (int *)0x0))))))
          goto joined_r0x0004b34e;
          local_318 = (byte *)CONCAT44(local_318._4_4_,*piVar14);
          if (*piVar14 == 0) {
            lVar28 = 0xc58d0;
          }
          else {
            lVar28 = <hashbrown[b5c94476ffc33875]::map::HashMap<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::get_mut::<u32>(0xc5ad8,&local_318);
            if (lVar28 == 0) goto joined_r0x0004b34e;
          }
          cVar10 = <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::provider_rejected(lVar28);
          if (cVar10 == '\0') goto joined_r0x0004b34e;
          uVar22 = 0x10000;
          if (uVar4 < 0x10000) {
            uVar22 = uVar4;
          }
          lVar28 = <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::append_error_body
                             (lVar28,lVar20,uVar22);
          goto LAB_0004b32a;
        }
      }
    }
  }
  else {
    if ((lVar20 != 0x13) ||
       ((agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_ != 0 &&
        (agy_bridge[64a9e9deac6c45ce]::RUNTIME._80_8_ != *(longlong *)(param_1 + 0x70)))))
    goto LAB_00049c06;
    if (*(longlong *)(param_1 + 0x60) - 0x81U < 0xffffffffffffff80 ||
        *(longlong *)(param_1 + 0x68) == 0) {
LAB_0004a227:
      local_278 = (byte *)0xffffffffffffffff;
LAB_0004a233:
      LOCK();
      bVar25 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ == 0;
      if (bVar25) {
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ = 1;
      }
      UNLOCK();
      if (!bVar25) {
        (*(code *)PTR_lock_contended_000c3c80)();
      }
      puVar8 = PTR_GLOBAL_PANIC_COUNT_000c3ac8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
        bVar11 = 0;
      }
      else {
        bVar11 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
        bVar11 = bVar11 ^ 1;
      }
      if (agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] == '\0') {
        if (local_278 != (byte *)0xffffffffffffffff) {
          (*(code *)PTR_clone_000c3c68)();
          local_1f8 = local_308;
          local_208 = local_318;
          pbStack_200 = pbStack_310;
          if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_) {
            (*(code *)PTR___rust_dealloc_000c3aa0)();
          }
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1208_8_ = local_1f8;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1192_8_ = local_208;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1200_8_ = pbStack_200;
        }
        agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x4c0] = '\x01';
        bVar7 = 1;
        if (((agy_bridge[64a9e9deac6c45ce]::RUNTIME._1056_8_ != -1) &&
            (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1096_8_ == 0x13)) &&
           (auVar33[0] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 3) ==
                          DAT_000091f0),
           auVar33[1] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 4) ==
                         UNK_000091f1),
           auVar33[2] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 5) ==
                         UNK_000091f2),
           auVar33[3] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 6) ==
                         UNK_000091f3),
           auVar33[4] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 7) ==
                         UNK_000091f4),
           auVar33[5] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 8) ==
                         UNK_000091f5),
           auVar33[6] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 9) ==
                         UNK_000091f6),
           auVar33[7] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 10) ==
                         UNK_000091f7),
           auVar33[8] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xb) ==
                         UNK_000091f8),
           auVar33[9] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xc) ==
                         UNK_000091f9),
           auVar33[10] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xd) ==
                          UNK_000091fa),
           auVar33[0xb] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xe) ==
                           UNK_000091fb),
           auVar33[0xc] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xf) ==
                           UNK_000091fc),
           auVar33[0xd] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0x10) ==
                           UNK_000091fd),
           auVar33[0xe] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0x11) ==
                           UNK_000091fe),
           auVar33[0xf] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0x12) ==
                           UNK_000091ff),
           auVar31[0] = -(*(char *)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ == DAT_00008e80),
           auVar31[1] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 1) ==
                         UNK_00008e81),
           auVar31[2] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 2) ==
                         UNK_00008e82),
           auVar31[3] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 3) ==
                         UNK_00008e83),
           auVar31[4] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 4) ==
                         UNK_00008e84),
           auVar31[5] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 5) ==
                         UNK_00008e85),
           auVar31[6] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 6) ==
                         UNK_00008e86),
           auVar31[7] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 7) ==
                         UNK_00008e87),
           auVar31[8] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 8) ==
                         UNK_00008e88),
           auVar31[9] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 9) ==
                         UNK_00008e89),
           auVar31[10] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 10) ==
                          UNK_00008e8a),
           auVar31[0xb] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xb) ==
                           UNK_00008e8b),
           auVar31[0xc] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xc) ==
                           UNK_00008e8c),
           auVar31[0xd] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xd) ==
                           UNK_00008e8d),
           auVar31[0xe] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xe) ==
                           UNK_00008e8e),
           auVar31[0xf] = -(*(char *)(agy_bridge[64a9e9deac6c45ce]::RUNTIME._1088_8_ + 0xf) ==
                           UNK_00008e8f), auVar31 = auVar31 & auVar33,
           (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff)) {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1186_2_ = 0x101;
          local_308 = local_268;
          local_318 = local_278;
          pbStack_310 = pbStack_270;
          if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1104_8_) {
            (*(code *)PTR___rust_dealloc_000c3aa0)();
          }
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1120_8_ = local_308;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1104_8_ = local_318;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1112_8_ = pbStack_310;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          pcVar19 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
          uVar26 = s_conversation_switched_0000c4cc._8_8_;
          uVar27 = s_conversation_switched_0000c4cc._0_8_;
          if (pcVar19 == (char *)0x0) {
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_0004c5f0;
          }
          *(undefined8 *)pcVar19 = s_conversation_switched_0000c4cc._0_8_;
          *(undefined8 *)(pcVar19 + 8) = uVar26;
          pcVar19[0xd] = 's';
          pcVar19[0xe] = 'w';
          pcVar19[0xf] = 'i';
          pcVar19[0x10] = 't';
          pcVar19[0x11] = 'c';
          pcVar19[0x12] = 'h';
          pcVar19[0x13] = 'e';
          pcVar19[0x14] = 'd';
          if (0 < (longlong)agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_) {
            (*(code *)PTR___rust_dealloc_000c3aa0)(uVar27,1);
          }
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1128_8_ = 0x15;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1144_8_ = 0x15;
          bVar7 = 0;
          agy_bridge[64a9e9deac6c45ce]::RUNTIME._1136_8_ = pcVar19;
        }
        if (((bVar11 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
           (cVar10 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar10 == '\0')) {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] = '\x01';
        }
        uVar21 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_;
        LOCK();
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ = 0;
        UNLOCK();
        if (uVar21 == 2) {
          (*(code *)PTR_wake_000c3ad0)();
        }
        local_318 = (byte *)0x1;
        uVar27 = (*(code *)PTR_write_000c3be8)();
        if (!(bool)(bVar7 & local_278 != (byte *)0xffffffffffffffff)) {
          return;
        }
      }
      else {
        if (((bVar11 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
           (cVar10 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar10 == '\0')) {
          agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] = '\x01';
        }
        uVar21 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_;
        LOCK();
        agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ = 0;
        UNLOCK();
        if (uVar21 == 2) {
          (*(code *)PTR_wake_000c3ad0)();
        }
        local_318 = (byte *)0x1;
        uVar27 = (*(code *)PTR_write_000c3be8)();
        if (local_278 == (byte *)0xffffffffffffffff) {
          return;
        }
      }
      if (local_278 == (byte *)0x0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar27,1);
      return;
    }
    (*(code *)PTR_from_utf8_000c3bd8)();
    pbVar18 = local_308;
    if ((int)local_318 == 1) goto LAB_0004a227;
    uVar26 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                       (&local_318,local_308,0,1,1);
    pbVar24 = local_308;
    param_1 = pbStack_310;
    if ((int)local_318 != 1) {
      if (pbVar18 != (byte *)0x0) {
        (*(code *)PTR_memcpy_000c3aa8)(uVar26,pbVar18);
      }
      cVar10 = agy_bridge[64a9e9deac6c45ce]::protocol::valid_id(pbVar24,pbVar18);
      if (cVar10 == '\0') {
        if (param_1 != (byte *)0x0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Qa,1);
        }
        goto LAB_0004a227;
      }
      local_278 = param_1;
      pbStack_270 = pbVar24;
      local_268 = pbVar18;
      goto LAB_0004a233;
    }
    lVar20 = (*(code *)PTR_handle_error_000c3a98)();
    lVar28 = extraout_XMM0_Qa_10;
LAB_0004c24d:
    unaff_R15[0x24] = (longlong)local_280;
    unaff_R15[0x25] = lVar20 + (longlong)local_330;
    if (local_330 != (byte *)0x0) {
      lVar20 = (longlong)local_328 + *(longlong *)(local_280 + 0x38);
      if ((ulonglong)(*unaff_R15 - (longlong)pbVar24) < local_330) {
        lVar28 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(unaff_R15,pbVar24,local_330,1,1);
        pbVar24 = (byte *)unaff_R15[2];
      }
      if (lVar20 != (longlong)local_330 + lVar20) {
        lVar28 = (*(code *)PTR_memcpy_000c3aa8)(lVar20,local_330);
        pbVar24 = (byte *)unaff_R15[2];
      }
      unaff_R15[2] = (longlong)(pbVar24 + (longlong)local_330);
    }
    lVar20 = *(longlong *)(param_1 + 0x68);
    if (lVar20 != 0) {
      if (lVar20 == *(longlong *)(uVar27 + 0xd0ac2c0)) {
        puVar13 = *(undefined8 **)(param_1 + 0x60);
        if (puVar13 == *(undefined8 **)(uVar27 + 0xd0ac2c8)) {
          *(undefined1 *)((longlong)unaff_R15 + 0x131) = 1;
          goto LAB_0004b32a;
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_0004c448;
        agy_bridge[64a9e9deac6c45ce]::read_go_string(&local_318,*puVar13,puVar13[1],0x400);
        lVar28 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::
                 or_else::<<agy_bridge[64a9e9deac6c45ce]::Runtime>::dispatch::_closure_17_>
                           (&local_118,&local_318);
      }
      else {
LAB_0004c448:
        local_208 = (byte *)(lVar20 - uVar27);
        local_318 = (byte *)&local_208;
        pbStack_310 = PTR_fmt_000c3d18;
        (*(code *)PTR_format_inner_000c3b78)(lVar28,&local_318);
        local_118 = local_f0;
        uStack_110 = uStack_e8;
        local_108 = local_e0;
        lVar28 = local_f0;
      }
      *(undefined1 *)((longlong)unaff_R15 + 0x132) = 1;
      if ((int)local_320 == 0) {
        lVar28 = <agy_bridge[64a9e9deac6c45ce]::Turn>::mark_failed::<&str>
                           (0xc5860,"stream_read_error",0x11,&local_118);
      }
      else if (0 < local_118) {
        lVar28 = (*(code *)PTR___rust_dealloc_000c3aa0)(lVar28,1);
      }
    }
LAB_0004b32a:
    local_318 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
LAB_0004b33e:
    (*(code *)PTR_write_000c3be8)(lVar28,8);
  }
joined_r0x0004b34e:
  if (((local_334 == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
     (cVar10 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar10 == '\0')) {
    agy_bridge[64a9e9deac6c45ce]::RUNTIME[0x5c] = '\x01';
  }
  uVar21 = agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_;
  LOCK();
  agy_bridge[64a9e9deac6c45ce]::RUNTIME._88_4_ = 0;
  UNLOCK();
  if (uVar21 == 2) {
    (*(code *)PTR_wake_000c3ad0)();
  }
  return;
}


