// 004b5150 collect_child_pids

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_child_pids */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_child_pids
          (longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  bool bVar22;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  int *local_58;
  longlong local_50;
  int *local_48;
  byte local_40;
  longlong *local_38;
  
  local_70 = 0;
  lStack_68 = 4;
  local_60 = 0;
  piVar1 = (int *)(param_2 + 0x298);
  LOCK();
  bVar22 = *(int *)(param_2 + 0x298) == 0;
  if (bVar22) {
    *(int *)(param_2 + 0x298) = 1;
  }
  UNLOCK();
  local_38 = param_1;
  if (!bVar22) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    cVar11 = *(char *)(param_2 + 0x29c);
    lVar17 = local_60;
  }
  else {
    bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar10 = bVar10 ^ 1;
    cVar11 = *(char *)(param_2 + 0x29c);
    lVar17 = local_60;
  }
  local_60 = lVar17;
  if (cVar11 == '\0') {
    local_58 = piVar1;
    if ((*(longlong *)(param_2 + 0x450) != 0) &&
       (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x450) + 0x240) + 0x10) != '\0')) {
      uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x450) + 0x5c0);
      if (lVar17 == local_70) {
        <alloc[12e961f32105355]::raw_vec::RawVec<u32>>::grow_one(&local_70);
      }
      *(undefined4 *)(lStack_68 + lVar17 * 4) = uVar4;
      local_60 = lVar17 + 1;
    }
    lVar17 = *(longlong *)(param_2 + 0x2c8);
    local_50 = param_2;
    if (lVar17 != 0) {
      lVar13 = *(longlong *)(param_2 + 0x2c0);
      lVar20 = 0;
      do {
        lVar18 = local_60;
        if (*(char *)(*(longlong *)(*(longlong *)(lVar13 + lVar20) + 0x240) + 0x10) != '\0') {
          uVar4 = *(undefined4 *)(*(longlong *)(lVar13 + lVar20) + 0x5c0);
          if (local_60 == local_70) {
            <alloc[12e961f32105355]::raw_vec::RawVec<u32>>::grow_one(&local_70);
          }
          *(undefined4 *)(lStack_68 + lVar18 * 4) = uVar4;
          local_60 = lVar18 + 1;
        }
        lVar20 = lVar20 + 0x20;
      } while (lVar17 * 0x20 != lVar20);
    }
    lVar17 = local_50;
    piVar1 = local_58;
    if (((bVar10 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
      *(undefined1 *)(lVar17 + 0x29c) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    piVar1 = (int *)(lVar17 + 0x490);
    LOCK();
    bVar22 = *(int *)(lVar17 + 0x490) == 0;
    if (bVar22) {
      *(int *)(lVar17 + 0x490) = 1;
    }
    UNLOCK();
    if (!bVar22) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar10 = 0;
      cVar11 = *(char *)(lVar17 + 0x494);
    }
    else {
      bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar10 = bVar10 ^ 1;
      cVar11 = *(char *)(lVar17 + 0x494);
    }
    if (cVar11 == '\0') {
      lVar17 = *(longlong *)(lVar17 + 0x548);
      local_58 = piVar1;
      if (lVar17 != 0) {
        pauVar21 = *(undefined1 (**) [16])(local_50 + 0x530);
        auVar3 = *pauVar21;
        uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
        pauVar19 = pauVar21 + 1;
        do {
          lVar13 = local_60;
          if ((short)uVar14 == 0) {
            do {
              auVar3 = *pauVar19;
              pauVar21 = pauVar21 + -0xe0;
              pauVar19 = pauVar19 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar14 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          if (pauVar21[(ulonglong)uVar7 * -0xe + -5][8] != '\0') {
            uVar4 = *(undefined4 *)(pauVar21[(ulonglong)uVar7 * -0xe + -5] + 0xc);
            if (local_60 == local_70) {
              <alloc[12e961f32105355]::raw_vec::RawVec<u32>>::grow_one(&local_70);
            }
            *(undefined4 *)(lStack_68 + lVar13 * 4) = uVar4;
            local_60 = lVar13 + 1;
          }
          uVar14 = uVar14 - 1 & uVar14;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar5 = *(ulonglong *)(local_50 + 0x4b0);
      if (uVar5 == 0) {
        lVar17 = 0;
        uVar16 = 0;
        lVar13 = 0;
      }
      else {
        uVar16 = *(ulonglong *)(local_50 + 0x498);
        uVar12 = 0;
        if (uVar16 <= *(ulonglong *)(local_50 + 0x4a8)) {
          uVar12 = uVar16;
        }
        lVar17 = *(ulonglong *)(local_50 + 0x4a8) - uVar12;
        lVar13 = uVar5 - (uVar16 - lVar17);
        if (uVar5 < uVar16 - lVar17 || lVar13 == 0) {
          uVar16 = uVar5 + lVar17;
          lVar13 = 0;
        }
      }
      lVar20 = *(longlong *)(local_50 + 0x4a0);
      lVar18 = uVar16 * 0x848 + lVar20;
      lVar13 = lVar13 * 0x848 + lVar20;
      lVar17 = lVar17 * 0x848 + lVar20;
      do {
        lVar9 = local_60;
        if (lVar17 == lVar18) {
          bVar22 = lVar20 == lVar13;
          lVar15 = lVar20;
          lVar18 = lVar13;
          lVar13 = lVar17;
          if (bVar22) {
            local_38[2] = local_60;
            *local_38 = local_70;
            local_38[1] = lStack_68;
            if (((bVar10 == 0) &&
                ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
               (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
              *(undefined1 *)(local_50 + 0x494) = 1;
            }
            LOCK();
            iVar2 = *local_58;
            *local_58 = 0;
            UNLOCK();
            if (iVar2 == 2) {
              (*(code *)PTR_wake_00799010)();
            }
            return;
          }
        }
        else {
          lVar15 = lVar17;
          lVar17 = lVar20;
        }
        uVar4 = *(undefined4 *)(lVar15 + 0x840);
        if (local_60 == local_70) {
          <alloc[12e961f32105355]::raw_vec::RawVec<u32>>::grow_one(&local_70);
        }
        *(undefined4 *)(lStack_68 + lVar9 * 4) = uVar4;
        local_60 = lVar9 + 1;
        lVar20 = lVar17;
        lVar17 = lVar15 + 0x848;
      } while( true );
    }
    local_48 = piVar1;
    local_40 = bVar10;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
               ,&local_48,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b9d0);
  }
  else {
    local_48 = piVar1;
    local_40 = bVar10;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
               ,&local_48,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b9b8);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


