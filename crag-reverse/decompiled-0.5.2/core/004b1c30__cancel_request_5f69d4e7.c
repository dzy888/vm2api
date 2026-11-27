// 004b1c30 cancel_request

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong unaff_RBX;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  byte bVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar29;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  longlong *local_11e8;
  undefined *puStack_11e0;
  undefined *local_11d8;
  undefined *puStack_11d0;
  undefined *local_11c8;
  undefined8 uStack_11c0;
  longlong *local_11b8;
  undefined8 uStack_11b0;
  undefined1 local_11a8 [16];
  longlong *local_1198;
  longlong *plStack_1190;
  undefined1 local_1188 [16];
  longlong *local_1178;
  undefined *puStack_1170;
  undefined *local_1168;
  undefined *puStack_1160;
  undefined *local_1158;
  undefined8 uStack_1150;
  longlong *local_1148;
  undefined8 uStack_1140;
  longlong *local_1138;
  longlong *plStack_1130;
  longlong *local_1120;
  longlong *local_1118;
  longlong *plStack_1110;
  longlong local_1108;
  undefined1 local_10e0;
  longlong *local_10d8;
  longlong *plStack_10d0;
  longlong *local_10c8;
  longlong *plStack_10c0;
  longlong *local_10b8;
  undefined *puStack_10b0;
  undefined *local_10a8;
  undefined *puStack_10a0;
  undefined *local_1098;
  undefined8 uStack_1090;
  longlong *local_1088;
  undefined8 uStack_1080;
  undefined8 local_1030;
  longlong *local_888;
  longlong *aplStack_880 [2];
  longlong local_870;
  undefined8 local_858;
  
  local_1030 = 0;
  plVar13 = (longlong *)(param_1 + 0x298);
  LOCK();
  bVar27 = *(int *)(param_1 + 0x298) == 0;
  if (bVar27) {
    *(int *)(param_1 + 0x298) = 1;
  }
  UNLOCK();
  if (!bVar27) {
    (*(code *)PTR_lock_contended_00798fe0)();
    unaff_RBX = param_1;
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = *(char *)(param_1 + 0x29c);
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar9 = *(char *)(param_1 + 0x29c);
    unaff_RBX = param_1;
  }
  if (cVar9 != '\0') {
    plStack_10d0._1_7_ = (undefined7)((ulonglong)plStack_10d0 >> 8);
    plStack_10d0 = (longlong *)CONCAT71(plStack_10d0._1_7_,bVar8);
    local_10d8 = plVar13;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
               ,&local_10d8,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b880);
    goto LAB_004b2d55;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x2e8);
  if (uVar2 != 0) {
    uVar12 = *(ulonglong *)(param_1 + 0x2d0);
    uVar14 = *(ulonglong *)(param_1 + 0x2e0);
    uVar25 = 0;
    uVar17 = uVar12;
    if (uVar14 < uVar12) {
      uVar17 = 0;
    }
    uVar22 = uVar14 - uVar17;
    uVar16 = uVar12 - uVar22;
    unaff_RBX = (uVar2 - uVar16) * 0x38;
    if (uVar2 <= uVar16) {
      unaff_RBX = 0;
    }
    lVar20 = *(longlong *)(param_1 + 0x2d8);
    uVar23 = uVar22 + uVar2;
    if (uVar16 < uVar2) {
      uVar23 = uVar12;
    }
    if (uVar22 != uVar23) {
      if (uVar2 < uVar16) {
        uVar16 = uVar2;
      }
      uVar25 = 0;
      lVar18 = 0;
      do {
        if ((*(longlong *)(uVar14 * 0x38 + uVar17 * -0x38 + lVar20 + 0x10 + lVar18) == param_3) &&
           (iVar11 = (*(code *)PTR_bcmp_00799020)(), iVar11 == 0)) goto joined_r0x004b1df2;
        uVar25 = uVar25 + 1;
        lVar18 = lVar18 + 0x38;
      } while (uVar16 * 0x38 != lVar18);
    }
    puVar7 = PTR_bcmp_00799020;
    if (unaff_RBX != 0) {
      lVar18 = 0;
      do {
        if ((*(longlong *)(lVar20 + 0x10 + lVar18) == param_3) &&
           (iVar11 = (*(code *)puVar7)(), iVar11 == 0)) goto joined_r0x004b1df2;
        uVar25 = uVar25 + 1;
        lVar18 = lVar18 + 0x38;
      } while (unaff_RBX != lVar18);
    }
  }
LAB_004b206c:
  plVar24 = (longlong *)0xffffffffffffffff;
  if (*(longlong *)(param_1 + 0x408) != 0) {
    uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&str>(param_1 + 0x410,param_2,param_3);
    lVar20 = *(longlong *)(param_1 + 0x3f0);
    uVar2 = *(ulonglong *)(param_1 + 0x3f8);
    bVar28 = (byte)(uVar12 >> 0x39);
    auVar30 = ZEXT216(CONCAT11(bVar28,bVar28));
    auVar30 = pshuflw(auVar30,auVar30,0);
    lVar18 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar2;
      auVar37 = *(undefined1 (*) [16])(lVar20 + uVar12);
      auVar31[0] = -(auVar37[0] == auVar30[0]);
      auVar31[1] = -(auVar37[1] == auVar30[1]);
      auVar31[2] = -(auVar37[2] == auVar30[2]);
      auVar31[3] = -(auVar37[3] == auVar30[3]);
      auVar31[4] = -(auVar37[4] == auVar30[4]);
      auVar31[5] = -(auVar37[5] == auVar30[5]);
      auVar31[6] = -(auVar37[6] == auVar30[6]);
      auVar31[7] = -(auVar37[7] == auVar30[7]);
      auVar31[8] = -(auVar37[8] == auVar30[0]);
      auVar31[9] = -(auVar37[9] == auVar30[1]);
      auVar31[10] = -(auVar37[10] == auVar30[2]);
      auVar31[0xb] = -(auVar37[0xb] == auVar30[3]);
      auVar31[0xc] = -(auVar37[0xc] == auVar30[4]);
      auVar31[0xd] = -(auVar37[0xd] == auVar30[5]);
      auVar31[0xe] = -(auVar37[0xe] == auVar30[6]);
      auVar31[0xf] = -(auVar37[0xf] == auVar30[7]);
      uVar10 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar21 = (uint)uVar10;
      if (uVar10 != 0) {
        local_11a8 = auVar37;
        do {
          uVar5 = 0;
          for (uVar6 = uVar21; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          unaff_RBX = lVar20 + (uVar5 + uVar12 & uVar2) * -0x20;
          if ((param_3 == *(longlong *)(unaff_RBX + -0x10)) &&
             (iVar11 = (*(code *)PTR_bcmp_00799020)(), iVar11 == 0)) {
            (*(code *)PTR_cancel_00799220)();
            if (*(longlong *)(param_1 + 0x3a8) == 0) goto LAB_004b256d;
            uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&str>(param_1 + 0x3b0,param_2,param_3);
            lVar20 = *(longlong *)(param_1 + 0x390);
            uVar2 = *(ulonglong *)(param_1 + 0x398);
            bVar28 = (byte)(uVar12 >> 0x39);
            auVar30 = ZEXT216(CONCAT11(bVar28,bVar28));
            auVar30 = pshuflw(auVar30,auVar30,0);
            lVar18 = 0;
            goto LAB_004b21df;
          }
          uVar10 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar10);
          auVar37 = local_11a8;
        } while (uVar10 != 0);
      }
      auVar34[0] = -(auVar37[0] == -1);
      auVar34[1] = -(auVar37[1] == -1);
      auVar34[2] = -(auVar37[2] == -1);
      auVar34[3] = -(auVar37[3] == -1);
      auVar34[4] = -(auVar37[4] == -1);
      auVar34[5] = -(auVar37[5] == -1);
      auVar34[6] = -(auVar37[6] == -1);
      auVar34[7] = -(auVar37[7] == -1);
      auVar34[8] = -(auVar37[8] == -1);
      auVar34[9] = -(auVar37[9] == -1);
      auVar34[10] = -(auVar37[10] == -1);
      auVar34[0xb] = -(auVar37[0xb] == -1);
      auVar34[0xc] = -(auVar37[0xc] == -1);
      auVar34[0xd] = -(auVar37[0xd] == -1);
      auVar34[0xe] = -(auVar37[0xe] == -1);
      auVar34[0xf] = -(auVar37[0xf] == -1);
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') break;
      uVar12 = uVar12 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
joined_r0x004b2562:
  if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)(param_1 + 0x29c) = 1;
  }
  LOCK();
  iVar11 = *(int *)plVar13;
  *(int *)plVar13 = 0;
  UNLOCK();
  if (iVar11 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if (plVar24 == (longlong *)0xffffffffffffffff) {
    plVar13 = (longlong *)(param_1 + 0x490);
    LOCK();
    bVar27 = *(int *)(param_1 + 0x490) == 0;
    if (bVar27) {
      *(int *)(param_1 + 0x490) = 1;
    }
    UNLOCK();
    if (!bVar27) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
      cVar9 = *(char *)(param_1 + 0x494);
    }
    else {
      bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar8 = bVar8 ^ 1;
      cVar9 = *(char *)(param_1 + 0x494);
    }
    if (cVar9 != '\0') {
      plStack_10d0._1_7_ = (undefined7)((ulonglong)plStack_10d0 >> 8);
      plStack_10d0 = (longlong *)CONCAT71(plStack_10d0._1_7_,bVar8);
      local_10d8 = plVar13;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
                 ,&local_10d8,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b8d8);
LAB_004b2d55:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar2 = *(ulonglong *)(param_1 + 0x4d0);
    if (uVar2 != 0) {
      uVar12 = *(ulonglong *)(param_1 + 0x4b8);
      uVar14 = *(ulonglong *)(param_1 + 0x4c8);
      uVar25 = 0;
      uVar17 = uVar12;
      if (uVar14 < uVar12) {
        uVar17 = 0;
      }
      uVar22 = uVar14 - uVar17;
      uVar16 = uVar12 - uVar22;
      lVar20 = (uVar2 - uVar16) * 0x68;
      if (uVar2 <= uVar16) {
        lVar20 = 0;
      }
      lVar18 = *(longlong *)(param_1 + 0x4c0);
      uVar23 = uVar22 + uVar2;
      if (uVar16 < uVar2) {
        uVar23 = uVar12;
      }
      if (uVar22 != uVar23) {
        if (uVar2 < uVar16) {
          uVar16 = uVar2;
        }
        uVar25 = 0;
        lVar26 = 0;
        do {
          if ((*(longlong *)(uVar14 * 0x68 + uVar17 * -0x68 + lVar18 + 0x10 + lVar26) == param_3) &&
             (iVar11 = (*(code *)PTR_bcmp_00799020)(), iVar11 == 0)) goto joined_r0x004b27e6;
          uVar25 = uVar25 + 1;
          lVar26 = lVar26 + 0x68;
        } while (uVar16 * 0x68 != lVar26);
      }
      puVar7 = PTR_bcmp_00799020;
      if (lVar20 != 0) {
        lVar26 = 0;
        do {
          if ((*(longlong *)(lVar18 + 0x10 + lVar26) == param_3) &&
             (iVar11 = (*(code *)puVar7)(), iVar11 == 0)) goto joined_r0x004b27e6;
          uVar25 = uVar25 + 1;
          lVar26 = lVar26 + 0x68;
        } while (lVar20 != lVar26);
      }
    }
LAB_004b2a53:
    if (*(longlong *)(param_1 + 0x578) != 0) {
      uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
               ::hash_one::<&str>(param_1 + 0x580,param_2,param_3);
      puVar7 = PTR_bcmp_00799020;
      lVar20 = *(longlong *)(param_1 + 0x560);
      uVar2 = *(ulonglong *)(param_1 + 0x568);
      bVar28 = (byte)(uVar12 >> 0x39);
      auVar30 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar30 = pshuflw(auVar30,auVar30,0);
      lVar18 = 0;
      while( true ) {
        uVar12 = uVar12 & uVar2;
        auVar37 = *(undefined1 (*) [16])(lVar20 + uVar12);
        auVar33[0] = -(auVar37[0] == auVar30[0]);
        auVar33[1] = -(auVar37[1] == auVar30[1]);
        auVar33[2] = -(auVar37[2] == auVar30[2]);
        auVar33[3] = -(auVar37[3] == auVar30[3]);
        auVar33[4] = -(auVar37[4] == auVar30[4]);
        auVar33[5] = -(auVar37[5] == auVar30[5]);
        auVar33[6] = -(auVar37[6] == auVar30[6]);
        auVar33[7] = -(auVar37[7] == auVar30[7]);
        auVar33[8] = -(auVar37[8] == auVar30[0]);
        auVar33[9] = -(auVar37[9] == auVar30[1]);
        auVar33[10] = -(auVar37[10] == auVar30[2]);
        auVar33[0xb] = -(auVar37[0xb] == auVar30[3]);
        auVar33[0xc] = -(auVar37[0xc] == auVar30[4]);
        auVar33[0xd] = -(auVar37[0xd] == auVar30[5]);
        auVar33[0xe] = -(auVar37[0xe] == auVar30[6]);
        auVar33[0xf] = -(auVar37[0xf] == auVar30[7]);
        uVar10 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf
        ;
        uVar21 = (uint)uVar10;
        if (uVar10 != 0) {
          local_11a8 = auVar37;
          do {
            uVar5 = 0;
            for (uVar6 = uVar21; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            if ((param_3 == *(longlong *)(lVar20 + (uVar5 + uVar12 & uVar2) * -0x20 + -0x10)) &&
               (iVar11 = (*(code *)puVar7)(), iVar11 == 0)) {
              (*(code *)PTR_cancel_00799220)();
              goto LAB_004b2ba5;
            }
            uVar10 = (ushort)(uVar21 - 1) & (ushort)uVar21;
            uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar10);
            auVar37 = local_11a8;
          } while (uVar10 != 0);
        }
        auVar36[0] = -(auVar37[0] == -1);
        auVar36[1] = -(auVar37[1] == -1);
        auVar36[2] = -(auVar37[2] == -1);
        auVar36[3] = -(auVar37[3] == -1);
        auVar36[4] = -(auVar37[4] == -1);
        auVar36[5] = -(auVar37[5] == -1);
        auVar36[6] = -(auVar37[6] == -1);
        auVar36[7] = -(auVar37[7] == -1);
        auVar36[8] = -(auVar37[8] == -1);
        auVar36[9] = -(auVar37[9] == -1);
        auVar36[10] = -(auVar37[10] == -1);
        auVar36[0xb] = -(auVar37[0xb] == -1);
        auVar36[0xc] = -(auVar37[0xc] == -1);
        auVar36[0xd] = -(auVar37[0xd] == -1);
        auVar36[0xe] = -(auVar37[0xe] == -1);
        auVar36[0xf] = -(auVar37[0xf] == -1);
        if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x1f,0) & 1) != 0) || (SUB161(auVar36 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x37,0) & 1) != 0) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
        uVar12 = uVar12 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
    }
    if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_1 + 0x494) = 1;
    }
    uVar29 = 0;
    LOCK();
    iVar11 = *(int *)plVar13;
    *(int *)plVar13 = 0;
    UNLOCK();
    if (iVar11 == 2) {
      (*(code *)PTR_wake_00799010)();
      uVar29 = 0;
    }
  }
  else {
    local_10e0 = 0;
    LOCK();
    bVar27 = *(int *)(param_1 + 0x280) == 0;
    if (bVar27) {
      *(int *)(param_1 + 0x280) = 1;
    }
    UNLOCK();
    local_1120 = plVar24;
    local_1118 = local_1138;
    plStack_1110 = plStack_1130;
    local_1108 = unaff_RBX;
    if (!bVar27) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar8 = 0;
    }
    else {
      bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar8 = bVar8 ^ 1;
    }
    while( true ) {
      uVar29 = <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next
                         (&local_10d8,param_1 + 0x288);
      plVar13 = plStack_10c0;
      if (local_10d8 == (longlong *)0x0) break;
      if ((plStack_10d0 != (longlong *)0x0) && (local_10c8 != (longlong *)0x0)) {
        if ((code *)*plStack_10c0 != (code *)0x0) {
          uVar29 = (*(code *)*plStack_10c0)();
        }
        if (plVar13[1] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,plVar13[2]);
        }
      }
    }
    plVar13 = (longlong *)
              tokio[d7d91d38da47d894]::task::spawn::spawn::
              <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>
                        (&local_1120,
                         &anon_572fb51faa0db1e51baf8d00d92dd3e9_3_llvm_7677212527096675952);
    <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::insert(param_1 + 0x288,plVar13);
    local_10d8 = plVar13;
    (*(code *)PTR_drop_00799460)();
    if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_1 + 0x284) = 1;
    }
    LOCK();
    iVar11 = *(int *)(param_1 + 0x280);
    *(int *)(param_1 + 0x280) = 0;
    UNLOCK();
joined_r0x004b2bd7:
    uVar29 = 1;
    if (iVar11 == 2) {
LAB_004b25a8:
      (*(code *)PTR_wake_00799010)();
      uVar29 = 1;
    }
  }
  return uVar29;
joined_r0x004b1df2:
  if (uVar25 < uVar2) {
    lVar18 = *(longlong *)(param_1 + 0x2e0);
    uVar14 = 0;
    if (uVar12 <= lVar18 + uVar25) {
      uVar14 = uVar12;
    }
    lVar15 = (lVar18 + uVar25) - uVar14;
    lVar26 = lVar15 * 0x38;
    unaff_RBX = *(longlong *)(lVar20 + lVar26);
    puVar1 = (undefined8 *)(lVar20 + 0x28 + lVar26);
    local_10b8 = (longlong *)*puVar1;
    puStack_10b0 = (undefined *)puVar1[1];
    puVar1 = (undefined8 *)(lVar20 + 0x18 + lVar26);
    local_10c8 = (longlong *)*puVar1;
    plStack_10c0 = (longlong *)puVar1[1];
    puVar1 = (undefined8 *)(lVar20 + 8 + lVar26);
    local_10d8 = (longlong *)*puVar1;
    plStack_10d0 = (longlong *)puVar1[1];
    if (~uVar25 + uVar2 < uVar25) {
      uVar14 = 0;
      if (uVar12 <= lVar15 + 1U) {
        uVar14 = uVar12;
      }
      lVar18 = (lVar15 - uVar14) + 1;
    }
    else {
      uVar14 = 0;
      if (uVar12 <= lVar18 + 1U) {
        uVar14 = uVar12;
      }
      *(ulonglong *)(param_1 + 0x2e0) = (lVar18 - uVar14) + 1;
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>>
    ::wrap_copy(param_1 + 0x2d0,lVar18);
    *(ulonglong *)(param_1 + 0x2e8) = uVar2 - 1;
    local_1188._8_8_ = plStack_10c0;
    local_1188._0_8_ = local_10c8;
    local_1178 = local_10b8;
    puStack_1170 = puStack_10b0;
    local_1198 = local_10d8;
    plStack_1190 = plStack_10d0;
    if (unaff_RBX != -1) {
      local_11e8 = local_10b8;
      puStack_11e0 = puStack_10b0;
      (*(code *)PTR_cancel_00799220)();
      local_10a8 = _DAT_0078b8c8;
      puStack_10a0 = _UNK_0078b8d0;
      local_10b8 = (longlong *)PTR_s_native_turn_cancelledqueue_timeo_0078b8b8;
      puStack_10b0 = _UNK_0078b8c0;
      local_10c8 = _DAT_0078b8a8;
      plStack_10c0 = _UNK_0078b8b0;
      local_10d8 = _DAT_0078b898;
      plStack_10d0 = _UNK_0078b8a0;
      uVar29 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
               ::send(&local_888,puStack_11e0,&local_10d8);
      if (-2 < (longlong)local_888) {
        if ((local_888 != (longlong *)0xffffffffffffffff) && (local_888 != (longlong *)0x0)) {
          uVar29 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
        }
        if ((local_870 != -1) && (local_870 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (local_858);
      }
      local_10d8 = (longlong *)
                   <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::remove::<str>(param_1 + 0x3f0,param_2,param_3);
      uVar29 = extraout_XMM0_Qa;
      if (local_10d8 != (longlong *)0x0) {
        LOCK();
        *local_10d8 = *local_10d8 + -1;
        UNLOCK();
        if (*local_10d8 == 0) {
          uVar29 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                   ::drop_slow(&local_10d8);
        }
      }
      if (unaff_RBX != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
      }
      LOCK();
      *local_11e8 = *local_11e8 + -1;
      UNLOCK();
      if (*local_11e8 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(&local_11e8);
      }
      goto LAB_004b256d;
    }
  }
  goto LAB_004b206c;
LAB_004b21df:
  uVar12 = uVar12 & uVar2;
  auVar37 = *(undefined1 (*) [16])(lVar20 + uVar12);
  auVar32[0] = -(auVar37[0] == auVar30[0]);
  auVar32[1] = -(auVar37[1] == auVar30[1]);
  auVar32[2] = -(auVar37[2] == auVar30[2]);
  auVar32[3] = -(auVar37[3] == auVar30[3]);
  auVar32[4] = -(auVar37[4] == auVar30[4]);
  auVar32[5] = -(auVar37[5] == auVar30[5]);
  auVar32[6] = -(auVar37[6] == auVar30[6]);
  auVar32[7] = -(auVar37[7] == auVar30[7]);
  auVar32[8] = -(auVar37[8] == auVar30[0]);
  auVar32[9] = -(auVar37[9] == auVar30[1]);
  auVar32[10] = -(auVar37[10] == auVar30[2]);
  auVar32[0xb] = -(auVar37[0xb] == auVar30[3]);
  auVar32[0xc] = -(auVar37[0xc] == auVar30[4]);
  auVar32[0xd] = -(auVar37[0xd] == auVar30[5]);
  auVar32[0xe] = -(auVar37[0xe] == auVar30[6]);
  auVar32[0xf] = -(auVar37[0xf] == auVar30[7]);
  uVar10 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
  uVar21 = (uint)uVar10;
  if (uVar10 != 0) {
    do {
      uVar5 = 0;
      for (uVar6 = uVar21; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      lVar26 = (uVar5 + uVar12 & uVar2) * -0xa8;
      if (param_3 == *(longlong *)(lVar20 + -0x98 + lVar26)) {
        lVar26 = lVar26 + lVar20;
        iVar11 = (*(code *)PTR_bcmp_00799020)();
        if (iVar11 == 0) {
          if (*(longlong *)(lVar26 + -0x30) == -1) goto LAB_004b256d;
          uVar29 = (*(code *)PTR_clone_00798fd0)();
          plVar24 = *(longlong **)(param_1 + 0x450);
          lVar20 = *(longlong *)(lVar26 + -0x50);
          if ((plVar24 != (longlong *)0x0) && (plVar24[0x34] == lVar20)) {
            iVar11 = (*(code *)PTR_bcmp_00799020)(uVar29,lVar20);
            uVar29 = extraout_XMM0_Qa_00;
            if (iVar11 == 0) {
              LOCK();
              lVar20 = *plVar24;
              *plVar24 = *plVar24 + 1;
              UNLOCK();
              if (*plVar24 == 0 || SCARRY8(lVar20,1) != *plVar24 < 0) goto LAB_004b2d55;
              plVar24 = (longlong *)(param_1 + 0x450);
              goto LAB_004b251b;
            }
          }
          if (*(longlong *)(param_1 + 0x2c8) == 0) goto LAB_004b24e8;
          plVar24 = *(longlong **)(param_1 + 0x2c0);
          lVar18 = *(longlong *)(param_1 + 0x2c8) << 5;
          goto LAB_004b24ba;
        }
      }
      uVar10 = (ushort)(uVar21 - 1) & (ushort)uVar21;
      uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar10);
    } while (uVar10 != 0);
  }
  auVar35[0] = -(auVar37[0] == -1);
  auVar35[1] = -(auVar37[1] == -1);
  auVar35[2] = -(auVar37[2] == -1);
  auVar35[3] = -(auVar37[3] == -1);
  auVar35[4] = -(auVar37[4] == -1);
  auVar35[5] = -(auVar37[5] == -1);
  auVar35[6] = -(auVar37[6] == -1);
  auVar35[7] = -(auVar37[7] == -1);
  auVar35[8] = -(auVar37[8] == -1);
  auVar35[9] = -(auVar37[9] == -1);
  auVar35[10] = -(auVar37[10] == -1);
  auVar35[0xb] = -(auVar37[0xb] == -1);
  auVar35[0xc] = -(auVar37[0xc] == -1);
  auVar35[0xd] = -(auVar37[0xd] == -1);
  auVar35[0xe] = -(auVar37[0xe] == -1);
  auVar35[0xf] = -(auVar37[0xf] == -1);
  if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') goto LAB_004b256d;
  uVar12 = uVar12 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_004b21df;
LAB_004b24ba:
  plVar3 = (longlong *)*plVar24;
  if (plVar3[0x34] != lVar20) {
LAB_004b24b0:
    plVar24 = plVar24 + 4;
    lVar18 = lVar18 + -0x20;
    if (lVar18 == 0) goto LAB_004b24e8;
    goto LAB_004b24ba;
  }
  iVar11 = (*(code *)PTR_bcmp_00799020)(uVar29,lVar20);
  uVar29 = extraout_XMM0_Qa_01;
  if (iVar11 != 0) goto LAB_004b24b0;
  LOCK();
  lVar20 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (!(*plVar3 != 0 && SCARRY8(lVar20,1) == *plVar3 < 0)) goto LAB_004b2d55;
LAB_004b251b:
  unaff_RBX = *plVar24;
  local_888 = plStack_10d0;
  aplStack_880[0] = local_10c8;
  if (local_10d8 == (longlong *)0xffffffffffffffff) goto LAB_004b256d;
  local_1138 = plStack_10d0;
  plStack_1130 = local_10c8;
  plVar24 = local_10d8;
  goto joined_r0x004b2562;
LAB_004b24e8:
  if (local_10d8 != (longlong *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
  }
LAB_004b256d:
  if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)(param_1 + 0x29c) = 1;
  }
  LOCK();
  iVar11 = *(int *)plVar13;
  *(int *)plVar13 = 0;
  UNLOCK();
  if (iVar11 != 2) {
    return 1;
  }
  goto LAB_004b25a8;
joined_r0x004b27e6:
  if (uVar2 <= uVar25) goto LAB_004b2a53;
  lVar20 = *(longlong *)(param_1 + 0x4c8);
  uVar14 = 0;
  if (uVar12 <= lVar20 + uVar25) {
    uVar14 = uVar12;
  }
  lVar19 = (lVar20 + uVar25) - uVar14;
  lVar15 = lVar19 * 0x68;
  lVar26 = *(longlong *)(lVar18 + lVar15);
  puVar1 = (undefined8 *)(lVar18 + 0x58 + lVar15);
  local_1088 = (longlong *)*puVar1;
  uStack_1080 = puVar1[1];
  puVar1 = (undefined8 *)(lVar18 + 0x48 + lVar15);
  local_1098 = (undefined *)*puVar1;
  uStack_1090 = puVar1[1];
  puVar1 = (undefined8 *)(lVar18 + 0x38 + lVar15);
  local_10a8 = (undefined *)*puVar1;
  puStack_10a0 = (undefined *)puVar1[1];
  puVar1 = (undefined8 *)(lVar18 + 0x28 + lVar15);
  local_10b8 = (longlong *)*puVar1;
  puStack_10b0 = (undefined *)puVar1[1];
  puVar1 = (undefined8 *)(lVar18 + 0x18 + lVar15);
  local_10c8 = (longlong *)*puVar1;
  plStack_10c0 = (longlong *)puVar1[1];
  puVar1 = (undefined8 *)(lVar18 + 8 + lVar15);
  local_10d8 = (longlong *)*puVar1;
  plStack_10d0 = (longlong *)puVar1[1];
  if (~uVar25 + uVar2 < uVar25) {
    uVar14 = 0;
    if (uVar12 <= lVar19 + 1U) {
      uVar14 = uVar12;
    }
    lVar20 = (lVar19 - uVar14) + 1;
  }
  else {
    uVar14 = 0;
    if (uVar12 <= lVar20 + 1U) {
      uVar14 = uVar12;
    }
    *(ulonglong *)(param_1 + 0x4c8) = (lVar20 - uVar14) + 1;
  }
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>>
  ::wrap_copy(param_1 + 0x4b8,lVar20);
  plVar24 = local_10c8;
  *(ulonglong *)(param_1 + 0x4d0) = uVar2 - 1;
  local_1148 = local_1088;
  uStack_1140 = uStack_1080;
  local_1158 = local_1098;
  uStack_1150 = uStack_1090;
  local_1168 = local_10a8;
  puStack_1160 = puStack_10a0;
  local_1178 = local_10b8;
  puStack_1170 = puStack_10b0;
  local_1188._8_8_ = plStack_10c0;
  local_1188._0_8_ = local_10c8;
  local_1198 = local_10d8;
  plStack_1190 = plStack_10d0;
  if (lVar26 == -1) goto LAB_004b2a53;
  local_11b8 = local_1088;
  uStack_11b0 = uStack_1080;
  local_11e8 = local_10b8;
  puStack_11e0 = puStack_10b0;
  local_11d8 = local_10a8;
  puStack_11d0 = puStack_10a0;
  local_11c8 = local_1098;
  uStack_11c0 = uStack_1090;
  (*(code *)PTR_cancel_00799220)();
  puStack_10a0 = _DAT_0078b8c8;
  local_1098 = _UNK_0078b8d0;
  puStack_10b0 = PTR_s_native_turn_cancelledqueue_timeo_0078b8b8;
  local_10a8 = _UNK_0078b8c0;
  plStack_10c0 = _DAT_0078b8a8;
  local_10b8 = _UNK_0078b8b0;
  plStack_10d0 = _DAT_0078b898;
  local_10c8 = _UNK_0078b8a0;
  local_10d8 = (longlong *)0xffffffffffffffff;
  <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
  ::send(&local_888,uStack_11b0,&local_10d8);
  if (local_888 != (longlong *)0xfffffffffffffffe) {
    if ((int)local_888 == -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Failure>
                (aplStack_880);
    }
    else if ((int)local_888 != 2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AgySlot>
                (&local_888);
    }
  }
  local_10d8 = (longlong *)
               <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::remove::<str>(param_1 + 0x560,param_2,param_3);
  uVar29 = extraout_XMM0_Qa_02;
  if (local_10d8 != (longlong *)0x0) {
    LOCK();
    *local_10d8 = *local_10d8 + -1;
    UNLOCK();
    if (*local_10d8 == 0) {
      uVar29 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
               ::drop_slow(&local_10d8);
    }
  }
  if (lVar26 != 0) {
    uVar29 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
  }
  if (plVar24 != (longlong *)0x0) {
    uVar29 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
  }
  if ((puStack_11e0 != (undefined *)0xffffffffffffffff) && (puStack_11e0 != (undefined *)0x0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
  }
  LOCK();
  *local_11b8 = *local_11b8 + -1;
  UNLOCK();
  if (*local_11b8 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(&local_11b8);
  }
LAB_004b2ba5:
  if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)(param_1 + 0x494) = 1;
  }
  LOCK();
  iVar11 = *(int *)plVar13;
  *(int *)plVar13 = 0;
  UNLOCK();
  goto joined_r0x004b2bd7;
}


