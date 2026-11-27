// 004b6d30 conversations_summary

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::conversations_summary */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::conversations_summary
          (undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  char cVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  longlong local_b0;
  longlong *plStack_a8;
  longlong local_a0;
  int *local_98;
  int *local_90;
  longlong local_88;
  longlong *local_80;
  int *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  
  local_b0 = 0;
  local_a0 = 0;
  piVar1 = (int *)(param_2 + 0x298);
  LOCK();
  bVar23 = *(int *)(param_2 + 0x298) == 0;
  if (bVar23) {
    *(int *)(param_2 + 0x298) = 1;
  }
  UNLOCK();
  local_50 = param_1;
  if (!bVar23) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar11 = 0;
    cVar10 = *(char *)(param_2 + 0x29c);
  }
  else {
    bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar11 = bVar11 ^ 1;
    cVar10 = *(char *)(param_2 + 0x29c);
  }
  if (cVar10 == '\0') {
    if (((*(longlong *)(param_2 + 0x450) != 0) &&
        (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x450) + 0x240) + 0x10) != '\0')) &&
       (lVar13 = *(longlong *)(param_2 + 0x378), lVar13 != 0)) {
      pauVar18 = *(undefined1 (**) [16])(param_2 + 0x360);
      auVar4 = *pauVar18;
      uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
      pauVar16 = pauVar18 + 1;
      do {
        if ((short)uVar21 == 0) {
          do {
            auVar4 = *pauVar16;
            pauVar18 = pauVar18 + -0x48;
            pauVar16 = pauVar16 + 1;
            uVar21 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar21 == 0);
        }
        uVar7 = 0;
        for (uVar8 = uVar21; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        cVar10 = <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::
                 has_live_session(*(longlong *)(param_2 + 0x450) + 0x10,
                                  *(undefined8 *)
                                   ((longlong)pauVar18 + (ulonglong)uVar7 * -0x48 + -0x28),
                                  *(undefined8 *)
                                   ((longlong)pauVar18 + (ulonglong)uVar7 * -0x48 + -0x20));
        if (cVar10 != '\0') {
          (*(code *)PTR_clone_00798fd0)();
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
          ::insert(&local_b0,&local_98);
        }
        uVar21 = uVar21 - 1 & uVar21;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = *(longlong *)(param_2 + 0x3a8);
    if (lVar13 != 0) {
      pauVar18 = *(undefined1 (**) [16])(param_2 + 0x390);
      auVar4 = *pauVar18;
      uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
      pauVar16 = pauVar18 + 1;
      do {
        if ((short)uVar21 == 0) {
          do {
            auVar4 = *pauVar16;
            pauVar18 = pauVar18 + -0xa8;
            pauVar16 = pauVar16 + 1;
            uVar21 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar21 == 0);
        }
        uVar7 = 0;
        for (uVar8 = uVar21; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        if (*(longlong *)((longlong)pauVar18 + (ulonglong)uVar7 * -0xa8 + -0x48) != -1) {
          (*(code *)PTR_clone_00798fd0)();
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
          ::insert(&local_b0,&local_98);
        }
        uVar21 = uVar21 - 1 & uVar21;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    lVar13 = *(longlong *)(param_2 + 0x3d8);
    if (lVar13 != 0) {
      auVar4 = **(undefined1 (**) [16])(param_2 + 0x3c0);
      uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
      pauVar16 = *(undefined1 (**) [16])(param_2 + 0x3c0) + 1;
      do {
        if ((short)uVar21 == 0) {
          do {
            auVar4 = *pauVar16;
            pauVar16 = pauVar16 + 1;
            uVar21 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar21 == 0);
        }
        for (uVar7 = uVar21; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        }
        (*(code *)PTR_clone_00798fd0)();
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
        ::insert(&local_b0,&local_98);
        uVar21 = uVar21 - 1 & uVar21;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar9 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if (((bVar11 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
      *(undefined1 *)(param_2 + 0x29c) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    piVar1 = (int *)(param_2 + 0x490);
    LOCK();
    bVar23 = *(int *)(param_2 + 0x490) == 0;
    if (bVar23) {
      *(int *)(param_2 + 0x490) = 1;
    }
    UNLOCK();
    if (!bVar23) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) == 0) {
      bVar11 = 0;
      cVar10 = *(char *)(param_2 + 0x494);
    }
    else {
      bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar11 = bVar11 ^ 1;
      cVar10 = *(char *)(param_2 + 0x494);
    }
    if (cVar10 == '\0') {
      uVar5 = *(ulonglong *)(param_2 + 0x4b0);
      if (uVar5 == 0) {
        lVar20 = 0;
        uVar19 = 0;
        lVar13 = 0;
      }
      else {
        uVar19 = *(ulonglong *)(param_2 + 0x498);
        uVar12 = 0;
        if (uVar19 <= *(ulonglong *)(param_2 + 0x4a8)) {
          uVar12 = uVar19;
        }
        lVar20 = *(ulonglong *)(param_2 + 0x4a8) - uVar12;
        lVar13 = uVar5 - (uVar19 - lVar20);
        if (uVar5 < uVar19 - lVar20 || lVar13 == 0) {
          uVar19 = uVar5 + lVar20;
          lVar13 = 0;
        }
      }
      lVar14 = *(longlong *)(param_2 + 0x4a0);
      lVar20 = lVar20 * 0x848 + lVar14;
      lVar22 = uVar19 * 0x848 + lVar14;
      lVar13 = lVar13 * 0x848 + lVar14;
LAB_004b70e0:
      if (lVar20 == lVar22) {
        lVar15 = lVar20;
        lVar17 = lVar20;
        lVar22 = lVar13;
        if (lVar14 == lVar13) goto LAB_004b712f;
      }
      else {
        lVar15 = lVar14;
        lVar17 = lVar13;
        lVar14 = lVar20;
      }
      lVar20 = lVar14 + 0x848;
      plVar2 = (longlong *)(lVar14 + 0x6e8);
      lVar14 = lVar15;
      lVar13 = lVar17;
      if (*plVar2 != -1) {
        (*(code *)PTR_clone_00798fd0)();
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
        ::insert(&local_b0,&local_98);
      }
      goto LAB_004b70e0;
    }
    local_90._1_7_ = (undefined7)((ulonglong)local_90 >> 8);
    local_90 = (int *)CONCAT71(local_90._1_7_,bVar11);
    local_98 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
               ,&local_98,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078ba78);
  }
  else {
    local_90._1_7_ = (undefined7)((ulonglong)local_90 >> 8);
    local_90 = (int *)CONCAT71(local_90._1_7_,bVar11);
    local_98 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
               ,&local_98,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078ba60);
  }
LAB_004b74d2:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_004b712f:
  lVar13 = *(longlong *)(param_2 + 0x548);
  if (lVar13 != 0) {
    pauVar18 = *(undefined1 (**) [16])(param_2 + 0x530);
    auVar4 = *pauVar18;
    uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
    pauVar16 = pauVar18 + 1;
    do {
      if ((short)uVar21 == 0) {
        do {
          auVar4 = *pauVar16;
          pauVar18 = pauVar18 + -0xe0;
          pauVar16 = pauVar16 + 1;
          uVar21 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar21 == 0);
      }
      uVar7 = 0;
      for (uVar8 = uVar21; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      if (*(longlong *)pauVar18[(ulonglong)uVar7 * -0xe + -6] != -1) {
        (*(code *)PTR_clone_00798fd0)();
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
        ::insert(&local_b0,&local_98);
      }
      uVar21 = uVar21 - 1 & uVar21;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar9 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  local_38 = local_a0;
  local_48 = local_b0;
  plStack_40 = plStack_a8;
  if (((bVar11 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
    *(undefined1 *)(param_2 + 0x494) = 1;
  }
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  piVar1 = (int *)(param_2 + 0x150);
  LOCK();
  bVar23 = *(int *)(param_2 + 0x150) == 0;
  if (bVar23) {
    *(int *)(param_2 + 0x150) = 1;
  }
  UNLOCK();
  if (!bVar23) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) == 0) {
    bVar11 = 0;
    cVar10 = *(char *)(param_2 + 0x154);
  }
  else {
    bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar11 = bVar11 ^ 1;
    cVar10 = *(char *)(param_2 + 0x154);
  }
  if (cVar10 == '\0') {
    local_98 = *(int **)(param_2 + 400);
    local_90 = local_98 + *(longlong *)(param_2 + 0x198) * 0xa0;
    local_80 = &local_48;
    local_88 = param_2;
    <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::conversations_summary::{closure#0}>>>
    ::from_iter(local_50,&local_98);
    if (((bVar11 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
       (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
      *(undefined1 *)(param_2 + 0x154) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    if (local_48 == 0) {
      local_58 = 0;
    }
    else {
      local_90 = (int *)0x0;
      local_88 = local_48;
      local_80 = plStack_40;
      local_70 = 0;
      local_68 = local_48;
      local_60 = plStack_40;
      local_58 = local_38;
    }
    local_98 = (int *)(ulonglong)(local_48 != 0);
    local_78 = local_98;
    <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
    ::dying_next(&local_b0,&local_98);
    puVar9 = PTR___rust_dealloc_00798fc8;
    if (local_b0 != 0) {
      do {
        if (*(longlong *)(local_b0 + 8 + local_a0 * 0x18) != 0) {
          (*(code *)puVar9)(local_a0 * 3,1);
        }
        <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
        ::dying_next(&local_b0,&local_98);
      } while (local_b0 != 0);
    }
    return local_50;
  }
  local_90._1_7_ = (undefined7)((ulonglong)local_90 >> 8);
  local_90 = (int *)CONCAT71(local_90._1_7_,bVar11);
  local_98 = piVar1;
  (*(code *)PTR_unwrap_failed_00799028)
            (&anon_572fb51faa0db1e51baf8d00d92dd3e9_189_llvm_7677212527096675952,&local_98,
             &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078ba90);
  goto LAB_004b74d2;
}


