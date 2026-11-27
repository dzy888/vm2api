// 004b75e0 has_warm_conversation

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::has_warm_conversation */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::has_warm_conversation
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  byte bVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int *local_80;
  byte local_78;
  int *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  piVar1 = (int *)(param_1 + 0x298);
  LOCK();
  bVar25 = *(int *)(param_1 + 0x298) == 0;
  if (bVar25) {
    *(int *)(param_1 + 0x298) = 1;
  }
  UNLOCK();
  if (!bVar25) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_1 + 0x29c);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_1 + 0x29c);
  }
  if (cVar8 != '\0') {
    local_80 = piVar1;
    local_78 = bVar7;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
               ,&local_80,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078baa8);
LAB_004b7d34:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_70 = piVar1;
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&str>(param_1 + 0x3e0,param_2,param_3);
    puVar6 = PTR_bcmp_00799020;
    lVar23 = *(longlong *)(param_1 + 0x3c0);
    uVar2 = *(ulonglong *)(param_1 + 0x3c8);
    bVar26 = (byte)(uVar12 >> 0x39);
    auVar29 = ZEXT216(CONCAT11(bVar26,bVar26));
    auVar27 = pshuflw(auVar29,auVar29,0);
    auVar29._0_8_ = auVar27._0_8_;
    auVar29._8_4_ = auVar27._0_4_;
    auVar29._12_4_ = auVar27._4_4_;
    lVar15 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar2;
      auVar27 = *(undefined1 (*) [16])(lVar23 + uVar12);
      auVar28[0] = -(auVar27[0] == auVar29[0]);
      auVar28[1] = -(auVar27[1] == auVar29[1]);
      auVar28[2] = -(auVar27[2] == auVar29[2]);
      auVar28[3] = -(auVar27[3] == auVar29[3]);
      auVar28[4] = -(auVar27[4] == auVar29[4]);
      auVar28[5] = -(auVar27[5] == auVar29[5]);
      auVar28[6] = -(auVar27[6] == auVar29[6]);
      auVar28[7] = -(auVar27[7] == auVar29[7]);
      auVar28[8] = -(auVar27[8] == auVar29[8]);
      auVar28[9] = -(auVar27[9] == auVar29[9]);
      auVar28[10] = -(auVar27[10] == auVar29[10]);
      auVar28[0xb] = -(auVar27[0xb] == auVar29[0xb]);
      auVar28[0xc] = -(auVar27[0xc] == auVar29[0xc]);
      auVar28[0xd] = -(auVar27[0xd] == auVar29[0xd]);
      auVar28[0xe] = -(auVar27[0xe] == auVar29[0xe]);
      auVar28[0xf] = -(auVar27[0xf] == auVar29[0xf]);
      uVar9 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar9;
      if (uVar9 != 0) {
        local_68 = auVar27;
        local_58 = auVar29;
        do {
          uVar4 = 0;
          for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar14 = uVar4 + uVar12 & uVar2;
          if ((param_3 == *(longlong *)(lVar23 + uVar14 * -0x80 + -0x70)) &&
             (iVar10 = (*(code *)puVar6)(uVar14 * 0x80,param_3), iVar10 == 0)) goto LAB_004b7961;
          uVar9 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar9);
          auVar29 = local_58;
          auVar27 = local_68;
        } while (uVar9 != 0);
      }
      auVar33[0] = -(auVar27[0] == -1);
      auVar33[1] = -(auVar27[1] == -1);
      auVar33[2] = -(auVar27[2] == -1);
      auVar33[3] = -(auVar27[3] == -1);
      auVar33[4] = -(auVar27[4] == -1);
      auVar33[5] = -(auVar27[5] == -1);
      auVar33[6] = -(auVar27[6] == -1);
      auVar33[7] = -(auVar27[7] == -1);
      auVar33[8] = -(auVar27[8] == -1);
      auVar33[9] = -(auVar27[9] == -1);
      auVar33[10] = -(auVar27[10] == -1);
      auVar33[0xb] = -(auVar27[0xb] == -1);
      auVar33[0xc] = -(auVar27[0xc] == -1);
      auVar33[0xd] = -(auVar27[0xd] == -1);
      auVar33[0xe] = -(auVar27[0xe] == -1);
      auVar33[0xf] = -(auVar27[0xf] == -1);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar12 = uVar12 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
  puVar6 = PTR_bcmp_00799020;
  lVar23 = *(longlong *)(param_1 + 0x3a8);
  if (lVar23 != 0) {
    pauVar17 = *(undefined1 (**) [16])(param_1 + 0x390);
    auVar27 = *pauVar17;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
    pauVar18 = pauVar17 + 1;
    do {
      if ((short)uVar11 == 0) {
        do {
          auVar27 = *pauVar18;
          pauVar17 = pauVar17 + -0xa8;
          pauVar18 = pauVar18 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar11 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if ((*(longlong *)((longlong)pauVar17 + (ulonglong)uVar4 * -0xa8 + -0x48) != -1) &&
         (*(longlong *)((longlong)pauVar17 + (ulonglong)uVar4 * -0xa8 + -0x38) == param_3)) {
        iVar10 = (*(code *)puVar6)(auVar27._0_8_,param_3);
        auVar27._8_8_ = extraout_XMM0_Qb;
        auVar27._0_8_ = extraout_XMM0_Qa;
        if (iVar10 == 0) goto LAB_004b7961;
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  if ((*(longlong *)(param_1 + 0x450) != 0) &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x450) + 0x240) + 0x10) != '\0')) {
    if (*(longlong *)(param_1 + 0x378) != 0) {
      uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
               ::hash_one::<&str>(param_1 + 0x380,param_2,param_3);
      puVar6 = PTR_bcmp_00799020;
      lVar23 = *(longlong *)(param_1 + 0x360);
      uVar2 = *(ulonglong *)(param_1 + 0x368);
      bVar26 = (byte)(uVar12 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar29 = pshuflw(auVar29,auVar29,0);
      auVar32._0_8_ = auVar29._0_8_;
      auVar32._8_4_ = auVar29._0_4_;
      auVar32._12_4_ = auVar29._4_4_;
      lVar15 = 0;
      while( true ) {
        uVar12 = uVar12 & uVar2;
        auVar29 = *(undefined1 (*) [16])(lVar23 + uVar12);
        auVar30[0] = -(auVar29[0] == auVar32[0]);
        auVar30[1] = -(auVar29[1] == auVar32[1]);
        auVar30[2] = -(auVar29[2] == auVar32[2]);
        auVar30[3] = -(auVar29[3] == auVar32[3]);
        auVar30[4] = -(auVar29[4] == auVar32[4]);
        auVar30[5] = -(auVar29[5] == auVar32[5]);
        auVar30[6] = -(auVar29[6] == auVar32[6]);
        auVar30[7] = -(auVar29[7] == auVar32[7]);
        auVar30[8] = -(auVar29[8] == auVar32[8]);
        auVar30[9] = -(auVar29[9] == auVar32[9]);
        auVar30[10] = -(auVar29[10] == auVar32[10]);
        auVar30[0xb] = -(auVar29[0xb] == auVar32[0xb]);
        auVar30[0xc] = -(auVar29[0xc] == auVar32[0xc]);
        auVar30[0xd] = -(auVar29[0xd] == auVar32[0xd]);
        auVar30[0xe] = -(auVar29[0xe] == auVar32[0xe]);
        auVar30[0xf] = -(auVar29[0xf] == auVar32[0xf]);
        uVar9 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
        uVar11 = (uint)uVar9;
        if (uVar9 != 0) {
          local_68._0_8_ = uVar12;
          local_58 = auVar32;
          local_48 = auVar29;
          do {
            uVar4 = 0;
            for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar12 = uVar4 + uVar12 & uVar2;
            if (param_3 == *(longlong *)(lVar23 + -0x38 + uVar12 * -0x48)) {
              lVar24 = lVar23 + uVar12 * -0x48;
              iVar10 = (*(code *)puVar6)(-uVar12,param_3);
              if (iVar10 == 0) {
                cVar8 = <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::
                        has_live_session(*(longlong *)(param_1 + 0x450) + 0x10,
                                         *(undefined8 *)(lVar24 + -0x28),
                                         *(undefined8 *)(lVar24 + -0x20));
                if (cVar8 != '\0') goto LAB_004b7961;
                goto LAB_004b7940;
              }
            }
            uVar9 = (ushort)(uVar11 - 1) & (ushort)uVar11;
            uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar9);
            uVar12 = local_68._0_8_;
            auVar32 = local_58;
            auVar29 = local_48;
          } while (uVar9 != 0);
        }
        auVar34[0] = -(auVar29[0] == -1);
        auVar34[1] = -(auVar29[1] == -1);
        auVar34[2] = -(auVar29[2] == -1);
        auVar34[3] = -(auVar29[3] == -1);
        auVar34[4] = -(auVar29[4] == -1);
        auVar34[5] = -(auVar29[5] == -1);
        auVar34[6] = -(auVar29[6] == -1);
        auVar34[7] = -(auVar29[7] == -1);
        auVar34[8] = -(auVar29[8] == -1);
        auVar34[9] = -(auVar29[9] == -1);
        auVar34[10] = -(auVar29[10] == -1);
        auVar34[0xb] = -(auVar29[0xb] == -1);
        auVar34[0xc] = -(auVar29[0xc] == -1);
        auVar34[0xd] = -(auVar29[0xd] == -1);
        auVar34[0xe] = -(auVar29[0xe] == -1);
        auVar34[0xf] = -(auVar29[0xf] == -1);
        if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x1f,0) & 1) != 0) || (SUB161(auVar34 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
        uVar12 = uVar12 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
LAB_004b7940:
    cVar8 = <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::has_live_session
                      (*(longlong *)(param_1 + 0x450) + 0x10,param_2,param_3);
    if (cVar8 != '\0') {
LAB_004b7961:
      if (((bVar7 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
        *(undefined1 *)(param_1 + 0x29c) = 1;
      }
      LOCK();
      iVar10 = *local_70;
      *local_70 = 0;
      UNLOCK();
      uVar13 = 1;
      goto joined_r0x004b7c60;
    }
  }
  if (((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 0x29c) = 1;
  }
  LOCK();
  iVar10 = *(int *)(param_1 + 0x298);
  *(int *)(param_1 + 0x298) = 0;
  UNLOCK();
  if (iVar10 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  LOCK();
  bVar25 = *(int *)(param_1 + 0x490) == 0;
  if (bVar25) {
    *(int *)(param_1 + 0x490) = 1;
  }
  UNLOCK();
  if (!bVar25) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_1 + 0x494);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_1 + 0x494);
  }
  if (cVar8 != '\0') {
    local_80 = (int *)(param_1 + 0x490);
    local_78 = bVar7;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
               ,&local_80,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bac0);
    goto LAB_004b7d34;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x4b0);
  if (uVar2 != 0) {
    uVar12 = *(ulonglong *)(param_1 + 0x4a8);
    uVar14 = *(ulonglong *)(param_1 + 0x498);
    uVar19 = uVar14;
    if (uVar12 < uVar14) {
      uVar19 = 0;
    }
    uVar21 = uVar12 - uVar19;
    uVar16 = uVar14 - uVar21;
    lVar23 = (uVar2 - uVar16) * 0x848;
    if (uVar2 <= uVar16) {
      lVar23 = 0;
    }
    lVar15 = *(longlong *)(param_1 + 0x4a0);
    uVar20 = uVar21 + uVar2;
    if (uVar16 < uVar2) {
      uVar20 = uVar14;
    }
    if (uVar21 != uVar20) {
      if (uVar2 < uVar16) {
        uVar16 = uVar2;
      }
      lVar24 = uVar12 * 0x848 + uVar19 * -0x848 + lVar15;
      lVar22 = 0;
      do {
        if (((*(longlong *)(lVar24 + 0x6e8 + lVar22) != -1) &&
            (*(longlong *)(lVar24 + 0x6f8 + lVar22) == param_3)) &&
           (iVar10 = (*(code *)PTR_bcmp_00799020)(), iVar10 == 0)) goto LAB_004b7c15;
        lVar22 = lVar22 + 0x848;
      } while (uVar16 * 0x848 != lVar22);
    }
    puVar6 = PTR_bcmp_00799020;
    if (lVar23 != 0) {
      lVar24 = 0;
      do {
        if (((*(longlong *)(lVar15 + 0x6e8 + lVar24) != -1) &&
            (*(longlong *)(lVar15 + 0x6f8 + lVar24) == param_3)) &&
           (iVar10 = (*(code *)puVar6)(), iVar10 == 0)) {
          uVar13 = 1;
          goto joined_r0x004b7af6;
        }
        lVar24 = lVar24 + 0x848;
      } while (lVar23 != lVar24);
    }
  }
  puVar6 = PTR_bcmp_00799020;
  lVar23 = *(longlong *)(param_1 + 0x548);
  if (lVar23 == 0) {
    uVar13 = 0;
  }
  else {
    pauVar17 = *(undefined1 (**) [16])(param_1 + 0x530);
    auVar31 = *pauVar17;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar31[0xf] >> 7) << 0xf);
    pauVar18 = pauVar17 + 1;
    do {
      if ((short)uVar11 == 0) {
        do {
          auVar31 = *pauVar18;
          pauVar17 = pauVar17 + -0xe0;
          pauVar18 = pauVar18 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar11 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if ((*(longlong *)pauVar17[(ulonglong)uVar4 * -0xe + -6] != -1) &&
         (*(longlong *)pauVar17[(ulonglong)uVar4 * -0xe + -5] == param_3)) {
        iVar10 = (*(code *)puVar6)(auVar31._0_8_,param_3);
        auVar31._8_8_ = extraout_XMM0_Qb_00;
        auVar31._0_8_ = extraout_XMM0_Qa_00;
        if (iVar10 == 0) goto LAB_004b7c15;
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    uVar13 = 0;
  }
joined_r0x004b7af6:
  if (((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 0x494) = 1;
  }
  LOCK();
  iVar10 = *(int *)(param_1 + 0x490);
  *(int *)(param_1 + 0x490) = 0;
  UNLOCK();
joined_r0x004b7c60:
  if (iVar10 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar13;
LAB_004b7c15:
  uVar13 = 1;
  goto joined_r0x004b7af6;
}


