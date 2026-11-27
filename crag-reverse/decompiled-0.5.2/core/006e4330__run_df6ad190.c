// 006e4330 run

/* <tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>::run */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::pool::Inner>::run(int *param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong *puVar7;
  code *pcVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  ushort uVar28;
  ulonglong uVar29;
  longlong lVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong *local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  
  if (*(longlong *)(param_1 + 0xee) != 0) {
    lVar20 = *(longlong *)(param_1 + 0xf0);
    (**(code **)(lVar20 + 0x28))(lVar20,*(longlong *)(lVar20 + 0x10) - 1U & 0xfffffffffffffff0);
  }
  uVar33 = *(undefined8 *)(param_1 + 0xe6);
  iVar6 = param_1[0xe8];
  puVar1 = (ulonglong *)(param_1 + 2);
  if (*param_1 != 1) {
    LOCK();
    bVar31 = (int)*puVar1 == 0;
    if (bVar31) {
      *(int *)puVar1 = 1;
    }
    UNLOCK();
    if (!bVar31) {
      (*(code *)PTR_lock_contended_00798fe0)(1,param_1 + 0xfa);
    }
    bVar16 = 0;
    local_40 = param_2;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) {
      bVar16 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar16 = bVar16 ^ 1;
    }
    puVar13 = PTR_wait_timeout_007995e0;
    local_78 = (ulonglong *)0x0;
    do {
      while (*(longlong *)(param_1 + 10) != 0) {
        lVar20 = *(longlong *)(param_1 + 8);
        uVar22 = *(ulonglong *)(param_1 + 4);
        if (lVar20 + 1U < uVar22) {
          uVar22 = 0;
        }
        *(ulonglong *)(param_1 + 8) = (lVar20 - uVar22) + 1;
        *(longlong *)(param_1 + 10) = *(longlong *)(param_1 + 10) + -1;
        puVar7 = *(ulonglong **)(*(longlong *)(param_1 + 6) + lVar20 * 0x10);
        uStack_90 = CONCAT71(uStack_90._1_7_,
                             *(undefined1 *)(*(longlong *)(param_1 + 6) + 8 + lVar20 * 0x10));
        LOCK();
        *(longlong *)(param_1 + 0xfe) = *(longlong *)(param_1 + 0xfe) + -1;
        UNLOCK();
        local_98 = puVar7;
        if ((((bVar16 & 1) == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar18 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar18 == '\0')) {
          *(undefined1 *)(param_1 + 3) = 1;
        }
        LOCK();
        uVar22 = *puVar1;
        *(int *)puVar1 = 0;
        UNLOCK();
        if ((int)uVar22 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        uVar32 = (**(code **)puVar7[2])();
        LOCK();
        uVar22 = *puVar7;
        *puVar7 = *puVar7 - 0x40;
        UNLOCK();
        if (uVar22 >> 6 == 1) {
          (**(code **)(puVar7[2] + 0x10))();
        }
        else if (uVar22 >> 6 == 0) {
          (*(code *)PTR_panic_00799338)
                    (uVar32,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
          goto LAB_006e4d10;
        }
        LOCK();
        bVar31 = (int)*puVar1 == 0;
        if (bVar31) {
          *(int *)puVar1 = 1;
        }
        UNLOCK();
        if (!bVar31) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar16 = 0;
        }
        else {
          bVar16 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          bVar16 = bVar16 ^ 1;
        }
      }
      LOCK();
      *(longlong *)(param_1 + 0xfc) = *(longlong *)(param_1 + 0xfc) + 1;
      UNLOCK();
      cVar18 = (char)param_1[0x22];
      if (cVar18 != '\0') break;
      bVar15 = (*(code *)puVar13)(iVar6,uVar33);
      if ((char)param_1[3] != '\0') {
LAB_006e4a4f:
        uStack_90 = CONCAT71(uStack_90._1_7_,bVar16);
        local_88 = CONCAT71(local_88._1_7_,bVar15) ^ 1;
        local_98 = puVar1;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&
                   PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<(std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::blocking::pool::LockedInner>,std[6c98fd8553dbae28]::sync::WaitTimeoutResult)>>_00793d10
                   ,&local_98,&PTR_s__vendor_tokio_1_54_1_src_runtime_00793d50);
        goto LAB_006e4d10;
      }
      iVar23 = param_1[0x24];
      if (iVar23 == 0) {
        bVar4 = *(byte *)(param_1 + 0x22);
        if ((bVar15 | bVar4) != 1) {
LAB_006e4606:
          lVar14 = local_40;
          local_38 = local_40;
          uVar19 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                   ::hash_one::<&usize>(param_1 + 0x14,&local_38);
          lVar20 = *(longlong *)(param_1 + 0xc);
          uVar22 = *(ulonglong *)(param_1 + 0xe);
          bVar15 = (byte)(uVar19 >> 0x39);
          auVar37 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar37 = pshuflw(auVar37,auVar37,0);
          lVar25 = 0;
          lVar27 = 0;
          goto LAB_006e4651;
        }
        while( true ) {
          if ((bVar4 & 1) != 0) {
            cVar18 = '\x01';
            goto LAB_006e46bc;
          }
          bVar15 = (*(code *)puVar13)(iVar6,uVar33);
          if ((char)param_1[3] != '\0') goto LAB_006e4a4f;
          iVar23 = param_1[0x24];
          if (iVar23 != 0) break;
          bVar4 = *(byte *)(param_1 + 0x22);
          if (bVar15 == 0 && bVar4 == 0) goto LAB_006e4606;
        }
      }
      param_1[0x24] = iVar23 + -1;
    } while ((char)param_1[0x22] != '\x01');
LAB_006e46bc:
    lVar20 = *(longlong *)(param_1 + 10);
joined_r0x006e46c3:
    if (lVar20 != 0) {
      do {
        lVar25 = *(longlong *)(param_1 + 8);
        uVar22 = *(ulonglong *)(param_1 + 4);
        if (lVar25 + 1U < uVar22) {
          uVar22 = 0;
        }
        *(ulonglong *)(param_1 + 8) = (lVar25 - uVar22) + 1;
        *(longlong *)(param_1 + 10) = lVar20 + -1;
        puVar7 = *(ulonglong **)(*(longlong *)(param_1 + 6) + lVar25 * 0x10);
        cVar5 = *(char *)(*(longlong *)(param_1 + 6) + 8 + lVar25 * 0x10);
        uStack_90 = CONCAT71(uStack_90._1_7_,cVar5);
        LOCK();
        *(longlong *)(param_1 + 0xfe) = *(longlong *)(param_1 + 0xfe) + -1;
        UNLOCK();
        local_98 = puVar7;
        if ((((bVar16 & 1) == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar17 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar17 == '\0')) {
          *(undefined1 *)(param_1 + 3) = 1;
        }
        LOCK();
        uVar22 = *puVar1;
        *(int *)puVar1 = 0;
        UNLOCK();
        if ((int)uVar22 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        if (cVar5 == '\0') {
          uVar33 = (**(code **)puVar7[2])();
          LOCK();
          uVar22 = *puVar7;
          *puVar7 = *puVar7 - 0x40;
          UNLOCK();
          if (uVar22 >> 6 == 1) {
            puVar21 = (undefined8 *)(puVar7[2] + 0x10);
            goto LAB_006e47a9;
          }
          if (uVar22 >> 6 == 0) {
            (*(code *)PTR_panic_00799338)
                      (uVar33,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
            goto LAB_006e4d10;
          }
        }
        else {
          LOCK();
          uVar22 = *puVar7;
          *puVar7 = *puVar7 - 0x40;
          UNLOCK();
          if (uVar22 < 0x40) {
            (*(code *)PTR_panic_00799338)();
            goto LAB_006e4d10;
          }
          puVar21 = (undefined8 *)(puVar7[2] + 0x30);
LAB_006e47a9:
          (*(code *)*puVar21)();
        }
        LOCK();
        bVar31 = (int)*puVar1 == 0;
        if (bVar31) {
          *(int *)puVar1 = 1;
        }
        UNLOCK();
        if (!bVar31) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        goto LAB_006e4805;
        bVar16 = 0;
        lVar20 = *(longlong *)(param_1 + 10);
        if (lVar20 == 0) break;
      } while( true );
    }
    LOCK();
    *(longlong *)(param_1 + 0xfa) = *(longlong *)(param_1 + 0xfa) + -1;
    UNLOCK();
    if (cVar18 == '\0') {
      cVar18 = (char)param_1[0x22];
      goto joined_r0x006e4958;
    }
    goto LAB_006e492a;
  }
  <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::run_worker
            (&local_58,puVar1,param_1 + 0xfa,uVar33,iVar6,param_2);
  lVar20 = *(longlong *)(param_1 + 0xf2);
joined_r0x006e49cb:
  if (lVar20 != 0) {
    lVar20 = *(longlong *)(param_1 + 0xf4);
    (**(code **)(lVar20 + 0x28))(lVar20,*(longlong *)(lVar20 + 0x10) - 1U & 0xfffffffffffffff0);
  }
  if (local_58 != (ulonglong *)0x0) {
    local_88 = local_48;
    local_98 = local_58;
    uStack_90 = uStack_50;
    auVar37 = <std[6c98fd8553dbae28]::thread::lifecycle::JoinInner<()>>::join(&local_98);
    puVar21 = auVar37._8_8_;
    if (auVar37._0_8_ != 0) {
      uVar33 = extraout_XMM0_Qa;
      if ((code *)*puVar21 != (code *)0x0) {
        uVar33 = (*(code *)*puVar21)();
      }
      if (puVar21[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar33,puVar21[2]);
      }
    }
  }
  return;
LAB_006e4651:
  uVar19 = uVar19 & uVar22;
  pcVar3 = (char *)(lVar20 + uVar19);
  auVar36[0] = -(*pcVar3 == auVar37[0]);
  auVar36[1] = -(pcVar3[1] == auVar37[1]);
  auVar36[2] = -(pcVar3[2] == auVar37[2]);
  auVar36[3] = -(pcVar3[3] == auVar37[3]);
  auVar36[4] = -(pcVar3[4] == auVar37[4]);
  auVar36[5] = -(pcVar3[5] == auVar37[5]);
  auVar36[6] = -(pcVar3[6] == auVar37[6]);
  auVar36[7] = -(pcVar3[7] == auVar37[7]);
  auVar36[8] = -(pcVar3[8] == auVar37[0]);
  auVar36[9] = -(pcVar3[9] == auVar37[1]);
  auVar36[10] = -(pcVar3[10] == auVar37[2]);
  auVar36[0xb] = -(pcVar3[0xb] == auVar37[3]);
  auVar36[0xc] = -(pcVar3[0xc] == auVar37[4]);
  auVar36[0xd] = -(pcVar3[0xd] == auVar37[5]);
  auVar36[0xe] = -(pcVar3[0xe] == auVar37[6]);
  auVar36[0xf] = -(pcVar3[0xf] == auVar37[7]);
  uVar28 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
  uVar26 = (uint)uVar28;
  if (uVar28 != 0) {
LAB_006e466b:
    uVar11 = 0;
    for (uVar12 = uVar26; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar29 = uVar11 + uVar19 & uVar22;
    lVar30 = lVar20 + uVar29 * -0x20;
    if (lVar14 != *(longlong *)(lVar30 + -0x20)) goto code_r0x006e468d;
    uVar22 = uVar29 - 0x10 & uVar22;
    pcVar3 = (char *)(lVar20 + uVar22);
    auVar37[0] = -(*pcVar3 == -1);
    auVar37[1] = -(pcVar3[1] == -1);
    auVar37[2] = -(pcVar3[2] == -1);
    auVar37[3] = -(pcVar3[3] == -1);
    auVar37[4] = -(pcVar3[4] == -1);
    auVar37[5] = -(pcVar3[5] == -1);
    auVar37[6] = -(pcVar3[6] == -1);
    auVar37[7] = -(pcVar3[7] == -1);
    auVar37[8] = -(pcVar3[8] == -1);
    auVar37[9] = -(pcVar3[9] == -1);
    auVar37[10] = -(pcVar3[10] == -1);
    auVar37[0xb] = -(pcVar3[0xb] == -1);
    auVar37[0xc] = -(pcVar3[0xc] == -1);
    auVar37[0xd] = -(pcVar3[0xd] == -1);
    auVar37[0xe] = -(pcVar3[0xe] == -1);
    auVar37[0xf] = -(pcVar3[0xf] == -1);
    uVar9 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
    pcVar3 = (char *)(lVar20 + uVar29);
    auVar34[0] = -(*pcVar3 == -1);
    auVar34[1] = -(pcVar3[1] == -1);
    auVar34[2] = -(pcVar3[2] == -1);
    auVar34[3] = -(pcVar3[3] == -1);
    auVar34[4] = -(pcVar3[4] == -1);
    auVar34[5] = -(pcVar3[5] == -1);
    auVar34[6] = -(pcVar3[6] == -1);
    auVar34[7] = -(pcVar3[7] == -1);
    auVar34[8] = -(pcVar3[8] == -1);
    auVar34[9] = -(pcVar3[9] == -1);
    auVar34[10] = -(pcVar3[10] == -1);
    auVar34[0xb] = -(pcVar3[0xb] == -1);
    auVar34[0xc] = -(pcVar3[0xc] == -1);
    auVar34[0xd] = -(pcVar3[0xd] == -1);
    auVar34[0xe] = -(pcVar3[0xe] == -1);
    auVar34[0xf] = -(pcVar3[0xf] == -1);
    uVar28 = 0xf;
    if (uVar9 != 0) {
      for (; uVar9 >> uVar28 == 0; uVar28 = uVar28 - 1) {
      }
    }
    sVar10 = 0;
    for (uVar26 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar34[0xf] >> 7) << 0xf) | 0x10000; (uVar26 & 1) == 0;
        uVar26 = uVar26 >> 1 | 0x80000000) {
      sVar10 = sVar10 + 1;
    }
    uVar24 = 0x80;
    if ((ushort)(sVar10 + (uVar28 ^ 0xf)) < 0x10) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
      uVar24 = 0xff;
    }
    *(undefined1 *)(lVar20 + uVar29) = uVar24;
    *(undefined1 *)(lVar20 + 0x10 + uVar22) = uVar24;
    *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + -1;
    lVar25 = *(longlong *)(lVar30 + -0x18);
    if (lVar25 == 0) {
      lVar25 = 0;
    }
    else {
      local_58 = *(ulonglong **)(lVar30 + -0x10);
      uStack_50 = *(undefined8 *)(lVar30 + -8);
    }
    goto LAB_006e48de;
  }
LAB_006e469a:
  auVar35[0] = -(*pcVar3 == -1);
  auVar35[1] = -(pcVar3[1] == -1);
  auVar35[2] = -(pcVar3[2] == -1);
  auVar35[3] = -(pcVar3[3] == -1);
  auVar35[4] = -(pcVar3[4] == -1);
  auVar35[5] = -(pcVar3[5] == -1);
  auVar35[6] = -(pcVar3[6] == -1);
  auVar35[7] = -(pcVar3[7] == -1);
  auVar35[8] = -(pcVar3[8] == -1);
  auVar35[9] = -(pcVar3[9] == -1);
  auVar35[10] = -(pcVar3[10] == -1);
  auVar35[0xb] = -(pcVar3[0xb] == -1);
  auVar35[0xc] = -(pcVar3[0xc] == -1);
  auVar35[0xd] = -(pcVar3[0xd] == -1);
  auVar35[0xe] = -(pcVar3[0xe] == -1);
  auVar35[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') goto LAB_006e48de;
  uVar19 = uVar19 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_006e4651;
code_r0x006e468d:
  uVar28 = (ushort)(uVar26 - 1) & (ushort)uVar26;
  uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar28);
  if (uVar28 == 0) goto LAB_006e469a;
  goto LAB_006e466b;
LAB_006e48de:
  local_88 = *(ulonglong *)(param_1 + 0x1e);
  local_98 = *(ulonglong **)(param_1 + 0x1a);
  uStack_90 = *(undefined8 *)(param_1 + 0x1c);
  *(longlong *)(param_1 + 0x1a) = lVar25;
  *(ulonglong **)(param_1 + 0x1c) = local_58;
  *(undefined8 *)(param_1 + 0x1e) = uStack_50;
  if (local_78 != (ulonglong *)0x0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>(&local_78);
  }
  local_68 = local_88;
  local_78 = local_98;
  uStack_70 = uStack_90;
  LOCK();
  *(longlong *)(param_1 + 0xfa) = *(longlong *)(param_1 + 0xfa) + -1;
  UNLOCK();
LAB_006e492a:
  LOCK();
  plVar2 = (longlong *)(param_1 + 0xfc);
  local_98 = (ulonglong *)*plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (local_98 == (ulonglong *)0x0) {
    (*(code *)PTR_<usize,usize>_00799710)
              ("`num_idle_threads` underflowed on thread exit","",0x5b,
               &PTR_s__vendor_tokio_1_54_1_src_runtime_00793d68);
LAB_006e4d10:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  cVar18 = (char)param_1[0x22];
joined_r0x006e4958:
  if ((cVar18 != '\0') && (*(longlong *)(param_1 + 0xfa) == 0)) {
    (*(code *)PTR_notify_one_0079a770)();
  }
  if ((((bVar16 & 1) == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar18 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar18 == '\0')) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  LOCK();
  uVar22 = *puVar1;
  *(int *)puVar1 = 0;
  UNLOCK();
  if ((int)uVar22 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  lVar20 = *(longlong *)(param_1 + 0xf2);
  local_48 = local_68;
  local_58 = local_78;
  uStack_50 = uStack_70;
  goto joined_r0x006e49cb;
LAB_006e4805:
  bVar16 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
  bVar16 = bVar16 ^ 1;
  lVar20 = *(longlong *)(param_1 + 10);
  goto joined_r0x006e46c3;
}


