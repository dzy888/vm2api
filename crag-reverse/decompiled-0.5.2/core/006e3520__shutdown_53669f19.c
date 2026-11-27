// 006e3520 shutdown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>::shutdown
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  char cVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  ulonglong *puVar20;
  undefined1 (*pauVar21) [16];
  longlong *in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar23 [16];
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong local_118;
  longlong lStack_110;
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 (*local_f8) [16];
  undefined1 *puStack_f0;
  undefined2 local_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined1 (*local_d0) [16];
  undefined1 (*local_c8) [16];
  longlong lStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined1 (*pauStack_60) [16];
  longlong lStack_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar17 = param_3 & 0xffffffff;
  lVar14 = *param_1;
  piVar1 = (int *)(lVar14 + 0x18);
  if (*(int *)(lVar14 + 0x10) == 1) {
    <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::begin_shutdown
              (&local_78,piVar1,lVar14 + 0x3f8);
    lVar3 = local_78;
    lVar12 = lStack_70;
    lVar14 = local_68;
    pauVar18 = pauStack_60;
    lVar6 = lStack_58;
    uVar7 = local_50;
    lVar8 = lStack_48;
    uVar9 = local_40;
    uVar22 = uStack_38;
    goto joined_r0x006e37c7;
  }
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  if (iVar4 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar20 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    bVar5 = 0;
    if (*(char *)(lVar14 + 0x98) != '\0') goto LAB_006e3788;
LAB_006e35bb:
    bVar10 = bVar5;
    *(undefined1 *)(lVar14 + 0x98) = 1;
    plVar2 = *(longlong **)(lVar14 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_0079a798)();
      }
    }
    *(undefined8 *)(lVar14 + 0x70) = 0;
    local_128 = *(longlong *)(lVar14 + 0x88);
    local_138 = *(longlong *)(lVar14 + 0x78);
    lStack_130 = *(longlong *)(lVar14 + 0x80);
    *(undefined8 *)(lVar14 + 0x78) = 0;
    lVar3 = *in_FS_OFFSET;
    plVar2 = (longlong *)(lVar3 + -0x38);
    if (*(char *)(lVar3 + -0x28) == '\x01') {
      lVar12 = *plVar2;
      param_3 = *(ulonglong *)(lVar3 + -0x30);
    }
    else {
      lVar12 = (*(code *)PTR_hashmap_random_keys_00799248)();
      *plVar2 = lVar12;
      *(ulonglong *)(lVar3 + -0x30) = param_3;
      *(undefined1 *)(lVar3 + -0x28) = 1;
    }
    *plVar2 = lVar12 + 1;
    uVar7 = _UNK_00793d48;
    pauVar18 = *(undefined1 (**) [16])(lVar14 + 0x40);
    local_a8 = *(undefined8 *)(lVar14 + 0x68);
    uVar22 = *(undefined8 *)(lVar14 + 0x58);
    lStack_b0 = *(undefined8 *)(lVar14 + 0x60);
    local_c8 = *(undefined1 (**) [16])(lVar14 + 0x48);
    lStack_c0 = *(undefined8 *)(lVar14 + 0x50);
    *(undefined8 *)(lVar14 + 0x50) = _DAT_00793d40;
    *(undefined8 *)(lVar14 + 0x58) = uVar7;
    uVar7 = _UNK_00793d38;
    *(undefined **)(lVar14 + 0x40) =
         anon_48246b2c7bc3818a1cbc30620defa29e_20_llvm_17816610714767121267;
    *(undefined8 *)(lVar14 + 0x48) = uVar7;
    *(longlong *)(lVar14 + 0x60) = lVar12;
    *(ulonglong *)(lVar14 + 0x68) = param_3;
    puVar20 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
    local_98 = local_138;
    lStack_90 = lStack_130;
    local_88 = local_128;
    local_b8 = uVar22;
    if (pauVar18 == (undefined1 (*) [16])0x0) goto LAB_006e3788;
    pauStack_108 = (undefined1 (*) [16])local_128;
    local_118 = local_138;
    lStack_110 = lStack_130;
    local_b8._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
    local_e8 = (undefined2)uVar22;
    uStack_e6 = (undefined2)((ulonglong)uVar22 >> 0x10);
    uStack_e4 = local_b8._4_4_;
    pauStack_100 = pauVar18;
    local_f8 = local_c8;
    puStack_f0 = (undefined1 *)lStack_c0;
    lStack_e0 = lStack_b0;
    local_d8 = local_a8;
    (*(code *)PTR_notify_all_00799d78)();
    lStack_48 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,local_e8));
    pauStack_60 = pauStack_100;
    local_78 = local_118;
    lStack_70 = lStack_110;
    local_68 = (longlong)pauStack_108;
    lStack_58 = (longlong)local_f8;
    local_50 = puStack_f0;
    local_40 = lStack_e0;
    uStack_38 = local_d8;
  }
  else {
    bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar10 = bVar10 ^ 1;
    bVar5 = bVar10;
    if (*(char *)(lVar14 + 0x98) == '\0') goto LAB_006e35bb;
LAB_006e3788:
    pauStack_60 = (undefined1 (*) [16])0x0;
  }
  if (((bVar10 == 0) && ((*puVar20 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
    *(undefined1 *)(lVar14 + 0x1c) = 1;
  }
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  lVar3 = local_78;
  lVar12 = lStack_70;
  lVar14 = local_68;
  pauVar18 = pauStack_60;
  lVar6 = lStack_58;
  uVar7 = local_50;
  lVar8 = lStack_48;
  uVar9 = local_40;
  uVar22 = uStack_38;
  if (iVar4 == 2) {
    (*(code *)PTR_wake_00799010)();
    lVar3 = local_78;
    lVar12 = lStack_70;
    lVar14 = local_68;
    pauVar18 = pauStack_60;
    lVar6 = lStack_58;
    uVar7 = local_50;
    lVar8 = lStack_48;
    uVar9 = local_40;
    uVar22 = uStack_38;
  }
joined_r0x006e37c7:
  local_a8 = uVar9;
  lStack_b0 = lVar8;
  local_b8 = uVar7;
  lStack_c0 = lVar6;
  local_c8 = pauVar18;
  lStack_130 = lVar12;
  local_138 = lVar3;
  if (local_c8 != (undefined1 (*) [16])0x0) {
    uStack_38._0_4_ = (undefined4)uVar22;
    uStack_38._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
    uStack_a0 = (undefined4)uStack_38;
    uStack_9c = uStack_38._4_4_;
    pauVar18 = (undefined1 (*) [16])(param_1 + 1);
    local_128 = lVar14;
    local_78 = local_138;
    lStack_70 = lStack_130;
    local_68 = lVar14;
    pauStack_60 = local_c8;
    lStack_58 = lStack_c0;
    local_50 = (undefined1 *)local_b8;
    lStack_48 = lStack_b0;
    local_40 = local_a8;
    uStack_38 = uVar22;
    cVar11 = <tokio[d7d91d38da47d894]::runtime::blocking::shutdown::Receiver>::wait
                       (pauVar18,param_2,uVar17);
    lVar3 = lStack_c0;
    if (cVar11 == '\0') {
      if (lStack_c0 != 0) {
        uVar22 = extraout_XMM0_Qa;
        if (lStack_b0 != 0) {
          auVar23 = *local_c8;
          pauVar18 = local_c8 + 1;
          uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
          lVar14 = lStack_b0;
          pauVar16 = local_c8;
          do {
            if ((short)uVar19 == 0) {
              do {
                auVar23 = *pauVar18;
                pauVar16 = pauVar16 + -0x20;
                pauVar18 = pauVar18 + 1;
                uVar19 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
              } while (uVar19 == 0);
            }
            iVar4 = 0;
            for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              iVar4 = iVar4 + 1;
            }
            uVar22 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
                               ((longlong)pauVar16 + (-0x18 - (ulonglong)(uint)(iVar4 << 5)));
            uVar19 = uVar19 - 1 & uVar19;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (lVar3 * 0x21 != -0x31) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,0x10);
        }
      }
      if (local_138 != 0) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>(&local_138);
      }
    }
    else {
      if (local_138 != 0) {
        local_118 = local_138;
        lStack_110 = lStack_130;
        pauStack_108 = (undefined1 (*) [16])local_128;
        pauVar18 = (undefined1 (*) [16])&local_118;
        auVar23 = <std[6c98fd8553dbae28]::thread::lifecycle::JoinInner<()>>::join();
        puVar15 = auVar23._8_8_;
        pauVar16 = auVar23._0_8_;
        if (pauVar16 != (undefined1 (*) [16])0x0) {
          uVar22 = extraout_XMM0_Qa_00;
          if ((code *)*puVar15 != (code *)0x0) {
            uVar22 = (*(code *)*puVar15)();
            pauVar18 = pauVar16;
          }
          if (puVar15[1] != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,puVar15[2]);
            pauVar18 = pauVar16;
          }
        }
      }
      lVar3 = lStack_c0;
      auVar23 = *local_c8;
      if (lStack_c0 == 0) {
        local_118 = 0;
      }
      else {
        lVar14 = lStack_c0 * 0x21 + 0x31;
        pauVar18 = local_c8 + lStack_c0 * -2 + -2;
        local_118 = 0x10;
      }
      pauVar16 = local_c8 + 1;
      uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
      puStack_f0 = *local_c8 + lStack_c0 + 1;
      pauStack_100 = local_c8;
      local_e8 = (undefined2)uVar19;
      lStack_e0 = lStack_b0;
      lStack_110 = lVar14;
      pauStack_108 = pauVar18;
      local_f8 = pauVar16;
      local_80 = lVar14;
      if (lStack_b0 != 0) {
        lVar14 = lStack_b0;
        pauVar21 = local_c8;
        local_d0 = pauVar18;
LAB_006e3a35:
        if ((short)uVar19 == 0) {
          do {
            auVar23 = *pauVar16;
            pauVar21 = pauVar21 + -0x20;
            pauVar16 = pauVar16 + 1;
            uVar19 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
          } while (uVar19 == 0);
        }
        iVar4 = 0;
        for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        uVar19 = uVar19 - 1 & uVar19;
        uVar13 = iVar4 << 5;
        lVar14 = lVar14 + -1;
        lVar12 = *(longlong *)((longlong)pauVar21 + (-0x18 - (ulonglong)uVar13));
        local_98 = *(longlong *)((longlong)pauVar21 + (-0x10 - (ulonglong)uVar13));
        lStack_90 = *(longlong *)((longlong)pauVar21 + (-8 - (ulonglong)uVar13));
        if (lVar12 != 0) goto code_r0x006e3a8e;
        local_e8 = (undefined2)uVar19;
        lStack_e0 = lVar14;
        local_f8 = pauVar16;
        pauStack_100 = pauVar21;
        for (; lVar14 != 0; lVar14 = lVar14 + -1) {
          if ((short)uVar19 == 0) {
            do {
              auVar23 = *pauVar16;
              pauVar21 = pauVar21 + -0x20;
              pauVar16 = pauVar16 + 1;
              uVar19 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
            } while (uVar19 == 0);
          }
          iVar4 = 0;
          for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
          }
          uVar19 = uVar19 - 1 & uVar19;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
                    ((longlong)pauVar21 + (-0x18 - (ulonglong)(uint)(iVar4 << 5)));
        }
      }
LAB_006e3b14:
      if ((lVar3 != 0) && (local_80 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  return;
code_r0x006e3a8e:
  local_78 = lVar12;
  lStack_70 = local_98;
  local_68 = lStack_90;
  auVar23 = <std[6c98fd8553dbae28]::thread::lifecycle::JoinInner<()>>::join(&local_78);
  puVar15 = auVar23._8_8_;
  if (auVar23._0_8_ != 0) {
    uVar22 = extraout_XMM0_Qa_01;
    if ((code *)*puVar15 != (code *)0x0) {
      uVar22 = (*(code *)*puVar15)();
    }
    if (puVar15[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,puVar15[2]);
    }
  }
  if (lVar14 == 0) goto LAB_006e3b14;
  goto LAB_006e3a35;
}


