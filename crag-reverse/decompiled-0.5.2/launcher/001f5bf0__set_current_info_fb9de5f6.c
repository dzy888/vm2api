// 001f5bf0 set_current_info

/* std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::set_current_info */

void __rustcall
std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::set_current_info
          (ulonglong param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined7 uVar19;
  longlong lVar20;
  ushort uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  short sVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  uint uVar28;
  undefined8 *unaff_R15;
  longlong lVar29;
  undefined1 *puVar30;
  longlong *in_FS_OFFSET;
  bool bVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  ulonglong local_f0;
  undefined4 *local_e8;
  char local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 *local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  ulonglong local_60;
  undefined8 *local_58;
  ulonglong local_50;
  char local_41;
  undefined8 *local_40;
  undefined4 *local_38;
  
  if (PTR_gettid_0021a828 == (undefined *)0x0) {
    iVar13 = (*(code *)PTR_syscall_0021a0a0)();
    uVar32 = extraout_XMM0_Da_00;
  }
  else {
    iVar13 = (*(code *)PTR_gettid_0021a828)();
    uVar32 = extraout_XMM0_Da;
  }
  plVar3 = *(longlong **)(*in_FS_OFFSET + -0x10);
  local_88 = param_2;
  local_80 = param_1;
  if (plVar3 < (longlong *)0x3) {
    puVar25 = (undefined4 *)0x0;
    unaff_R15 = (undefined8 *)0x4;
    if ((std[6c98fd8553dbae28]::thread::main_thread::MAIN != 0) &&
       (*(longlong *)(*in_FS_OFFSET + -8) == std[6c98fd8553dbae28]::thread::main_thread::MAIN)) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      puVar25 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (puVar25 == (undefined4 *)0x0) goto LAB_001f6ac8;
      *puVar25 = 0x6e69616d;
    }
  }
  else if (plVar3[1] == 0) {
    if ((std[6c98fd8553dbae28]::thread::main_thread::MAIN != 0) &&
       (std[6c98fd8553dbae28]::thread::main_thread::MAIN == *plVar3)) {
      unaff_R15 = (undefined8 *)0x4;
      goto LAB_001f5cea;
    }
    puVar25 = (undefined4 *)0x0;
  }
  else {
    unaff_R15 = (undefined8 *)(plVar3[2] + -1);
    if (unaff_R15 == (undefined8 *)0x0) {
      unaff_R15 = (undefined8 *)0x0;
      puVar25 = (undefined4 *)0x1;
    }
    else {
LAB_001f5cea:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      puVar25 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (puVar25 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_00219eb0)();
LAB_001f6ac8:
        uVar32 = (*(code *)PTR_handle_alloc_error_00219eb0)();
        uVar14 = 4;
        if ((local_50 != 0) && (local_60 != 0)) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar32,1);
          uVar14 = local_60;
        }
        SPIN_LOCK = 0;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>>>>
                  (&local_f0,uVar14);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      uVar32 = extraout_XMM0_Da_01;
    }
    (*(code *)PTR_memcpy_00219c60)(uVar32,unaff_R15);
  }
  local_38 = puVar25;
  uVar14 = (*(code *)PTR___errno_location_00219f18)();
  LOCK();
  bVar31 = LOCK == 0;
  if (bVar31) {
    LOCK = 1;
  }
  UNLOCK();
  uVar32 = extraout_XMM0_Da_02;
  if (!bVar31) {
    uVar32 = (*(code *)PTR_lock_contended_00219d70)();
  }
  puVar27 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
  local_58 = unaff_R15;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    uVar28 = uVar28 ^ 1;
    uVar32 = extraout_XMM0_Da_04;
  }
  puVar7 = PTR_pause_0021aa70;
  local_f0 = (ulonglong)(DAT_0021c93c != '\0');
  local_e8 = &LOCK;
  cVar12 = (char)uVar28;
  uVar26 = 0;
  LOCK();
  bVar31 = SPIN_LOCK == 0;
  if (bVar31) {
    SPIN_LOCK = uVar14;
  }
  else {
    uVar26 = SPIN_LOCK;
  }
  UNLOCK();
  local_41 = DAT_0021c93c;
  local_e0 = cVar12;
  while (!bVar31) {
    if (uVar26 == uVar14) {
      (*(code *)PTR_panic_fmt_0021a010)(uVar32,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217ff0);
      goto LAB_001f6ab8;
    }
    uVar32 = (*(code *)puVar7)();
    uVar26 = 0;
    LOCK();
    bVar31 = SPIN_LOCK == 0;
    if (bVar31) {
      SPIN_LOCK = uVar14;
    }
    else {
      uVar26 = SPIN_LOCK;
    }
    UNLOCK();
  }
  lVar29 = (longlong)iVar13;
  local_64 = uVar28;
  if (THREAD_INFO != (undefined8 *)0x0) {
    lVar15 = THREAD_INFO;
    puVar16 = THREAD_INFO;
    do {
      uVar21 = *(ushort *)((longlong)puVar16 + 0x21a);
      uVar26 = 0xffffffffffffffff;
      lVar4 = 0;
      do {
        lVar20 = lVar4;
        if ((ulonglong)((uint)uVar21 * 8) * 5 == lVar20) {
          uVar26 = (ulonglong)uVar21;
          goto LAB_001f5e33;
        }
        uVar22 = puVar16[uVar26 + 2];
        uVar26 = uVar26 + 1;
        lVar4 = lVar20 + 0x28;
      } while ((char)((uVar22 < uVar14) - (uVar14 < uVar22)) == '\x01');
      if (uVar22 < uVar14 == uVar14 < uVar22) {
        lVar15 = *(longlong *)((longlong)puVar16 + lVar20 + 0x60);
        lVar4 = *(longlong *)((longlong)puVar16 + lVar20 + 0x68);
        *(undefined4 **)((longlong)puVar16 + lVar20 + 0x60) = local_38;
        *(undefined8 **)((longlong)puVar16 + lVar20 + 0x68) = local_58;
        *(ulonglong *)((longlong)puVar16 + lVar20 + 0x70) = local_80;
        *(ulonglong *)((longlong)puVar16 + lVar20 + 0x78) = local_88;
        *(longlong *)((longlong)puVar16 + lVar20 + 0x80) = lVar29;
        puVar27 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
        if ((lVar15 != 0) && (lVar4 != 0)) {
          (*(code *)PTR___rust_dealloc_00219c40)(lVar20 + 0x28,1);
        }
        goto LAB_001f5f1b;
      }
LAB_001f5e33:
      bVar31 = lVar15 == 0;
      lVar15 = lVar15 + -1;
      if (bVar31) goto LAB_001f5f69;
      puVar16 = (undefined8 *)puVar16[uVar26 + 0x44];
    } while( true );
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar16 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar16 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
LAB_001f6ab8:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *puVar16 = 0;
  THREAD_INFO = 0;
  THREAD_INFO = puVar16;
  *(undefined2 *)((longlong)puVar16 + 0x21a) = 1;
  puVar16[1] = uVar14;
  puVar16[0xc] = local_38;
  puVar16[0xd] = local_58;
  puVar16[0xe] = local_80;
  puVar16[0xf] = local_88;
  puVar16[0x10] = lVar29;
LAB_001f5f17:
  THREAD_INFO = THREAD_INFO + 1;
  cVar12 = (char)local_64;
LAB_001f5f1b:
  SPIN_LOCK = 0;
  if (((cVar12 == '\0') && ((*puVar27 & 0x7fffffffffffffff) != 0)) &&
     (cVar12 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar12 == '\0')) {
    DAT_0021c93c = '\x01';
  }
  iVar13 = LOCK;
  LOCK();
  LOCK = 0;
  UNLOCK();
  if (iVar13 == 2) {
    (*(code *)PTR_syscall_0021a0a0)(1,0x81);
    return;
  }
  return;
LAB_001f5f69:
  if (uVar21 < 0xb) {
    if (uVar26 < uVar21) {
      local_50 = (ulonglong)(((uint)uVar21 - (int)uVar26) * 8);
      uVar32 = (*(code *)PTR_memmove_00219fb0)();
      (*(code *)PTR_memmove_00219fb0)(uVar32,local_50 * 5);
    }
    puVar16[uVar26 + 1] = uVar14;
    puVar16[uVar26 * 5 + 0xc] = local_38;
    puVar16[uVar26 * 5 + 0xd] = local_58;
    puVar16[uVar26 * 5 + 0xe] = local_80;
    puVar16[uVar26 * 5 + 0xf] = local_88;
    puVar16[uVar26 * 5 + 0x10] = lVar29;
    *(ushort *)((longlong)puVar16 + 0x21a) = uVar21 + 1;
  }
  else {
    local_78._4_4_ = (uint)(local_78 >> 0x20);
    if (uVar26 < 5) {
      local_40 = (undefined8 *)0x4;
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
    }
    else if (uVar26 == 5) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      local_40 = (undefined8 *)&DAT_00000005;
    }
    else if (uVar26 == 6) {
      local_40 = (undefined8 *)&DAT_00000005;
      local_78 = CONCAT44(local_78._4_4_,1);
      uVar26 = 0;
    }
    else {
      uVar26 = uVar26 - 7;
      local_40 = (undefined8 *)0x6;
      local_78 = CONCAT44(local_78._4_4_,1);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar17 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar17 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
      goto LAB_001f6ab8;
    }
    *puVar17 = 0;
    uVar22 = ~(ulonglong)local_40 + (ulonglong)*(ushort *)((longlong)puVar16 + 0x21a);
    *(short *)((longlong)puVar17 + 0x21a) = (short)uVar22;
    local_50 = puVar16[(longlong)local_40 * 5 + 0xc];
    local_60 = puVar16[(longlong)local_40 * 5 + 0xd];
    if (0xb < uVar22) {
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217be8,0xb
                );
      goto LAB_001f6ab8;
    }
    local_70 = puVar16 + (longlong)local_40 * 5 + 0xc;
    local_d8 = (undefined8 *)puVar16[(longlong)local_40 + 1];
    local_90 = (undefined8 *)(uVar22 * 8);
    (*(code *)PTR_memcpy_00219c60)(puVar16 + 1,local_90);
    (*(code *)PTR_memcpy_00219c60)(puVar16 + 0xc,(longlong)local_90 * 5);
    *(short *)((longlong)puVar16 + 0x21a) = (short)local_40;
    local_b8 = local_70[4];
    local_c8 = local_70[2];
    uStack_c0 = local_70[3];
    puVar23 = puVar17;
    if ((char)local_78 == '\0') {
      puVar23 = puVar16;
    }
    uVar21 = *(ushort *)((longlong)puVar23 + 0x21a);
    if (uVar26 < uVar21) {
      local_70 = (undefined8 *)(ulonglong)(((uint)uVar21 - (int)uVar26) * 8);
      local_78 = (ulonglong)uVar21;
      local_40 = puVar23;
      (*(code *)PTR_memmove_00219fb0)();
      (*(code *)PTR_memmove_00219fb0)(local_40,(longlong)local_70 * 5);
      uVar21 = (ushort)local_78;
      puVar23 = local_40;
    }
    puVar23[uVar26 + 1] = uVar14;
    puVar23[uVar26 * 5 + 0xc] = local_38;
    puVar23[uVar26 * 5 + 0xd] = local_58;
    puVar23[uVar26 * 5 + 0xe] = local_80;
    puVar23[uVar26 * 5 + 0xf] = local_88;
    puVar23[uVar26 * 5 + 0x10] = lVar29;
    *(ushort *)((longlong)puVar23 + 0x21a) = uVar21 + 1;
    local_98 = local_b8;
    local_a8 = (undefined4)local_c8;
    uStack_a4 = local_c8._4_4_;
    uStack_a0 = (undefined4)uStack_c0;
    uStack_9c = uStack_c0._4_4_;
    if ((undefined8 *)*puVar16 == (undefined8 *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = 0;
      puVar23 = (undefined8 *)*puVar16;
      do {
        puVar18 = puVar23;
        uVar14 = local_60;
        uVar21 = *(ushort *)(puVar16 + 0x43);
        puVar25 = (undefined4 *)(ulonglong)uVar21;
        uVar2 = *(ushort *)((longlong)puVar18 + 0x21a);
        local_80 = (ulonglong)uVar2;
        local_88 = local_50;
        local_40 = local_d8;
        local_58 = puVar17;
        if (local_80 < 0xb) {
          local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar2 + 1);
          puVar30 = (undefined1 *)((longlong)puVar25 + 1);
          if (uVar21 < uVar2) {
            lVar29 = local_80 - (longlong)puVar25;
            (*(code *)PTR_memmove_00219fb0)(local_50,lVar29 * 8);
            local_b8 = local_98;
            local_c8 = CONCAT44(uStack_a4,local_a8);
            uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
            (*(code *)PTR_memmove_00219fb0)(local_a8,lVar29 * 0x28);
          }
          else {
            local_b8 = local_98;
            local_c8 = CONCAT44(uStack_a4,local_a8);
            uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
          }
          uVar26 = local_80;
          puVar1 = (undefined1 *)(local_80 + 2);
          puVar18[(longlong)((longlong)puVar25 + 1)] = local_40;
          puVar18[(longlong)puVar25 * 5 + 0xc] = local_88;
          puVar18[(longlong)puVar25 * 5 + 0xd] = uVar14;
          puVar16 = puVar18 + (longlong)puVar25 * 5 + 0xe;
          *(undefined4 *)puVar16 = (undefined4)local_c8;
          *(undefined4 *)((longlong)puVar16 + 4) = local_c8._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_c0._4_4_;
          puVar18[(longlong)puVar25 * 5 + 0x10] = local_b8;
          if (uVar21 < (ushort)local_80) {
            (*(code *)PTR_memmove_00219fb0)(local_b8,(local_80 - (longlong)puVar25) * 8);
          }
          puVar18[(longlong)((longlong)puVar25 + 0x45)] = local_58;
          *(short *)((longlong)puVar18 + 0x21a) = (short)local_38;
          cVar12 = (char)local_64;
          if ((uint)puVar30 < (uint)puVar1) {
            uVar28 = ((int)uVar26 - (uint)uVar21) + 1 & 3;
            if (uVar28 != 0) {
              uVar14 = 0;
              do {
                puVar16 = (undefined8 *)puVar18[(longlong)((longlong)puVar25 + uVar14 + 0x45)];
                *puVar16 = puVar18;
                *(short *)(puVar16 + 0x43) = (short)puVar30 + (short)uVar14;
                uVar14 = uVar14 + 1;
              } while (uVar28 != uVar14);
              puVar30 = puVar30 + uVar14;
            }
            if (2 < (int)uVar26 - (uint)uVar21) {
              do {
                puVar16 = (undefined8 *)puVar18[(longlong)(puVar30 + 0x44)];
                *puVar16 = puVar18;
                sVar24 = (short)puVar30;
                *(short *)(puVar16 + 0x43) = sVar24;
                puVar16 = (undefined8 *)puVar18[(longlong)(puVar30 + 0x45)];
                *puVar16 = puVar18;
                *(short *)(puVar16 + 0x43) = sVar24 + 1;
                puVar16 = (undefined8 *)puVar18[(longlong)(puVar30 + 0x46)];
                *puVar16 = puVar18;
                *(short *)(puVar16 + 0x43) = sVar24 + 2;
                puVar16 = (undefined8 *)puVar18[(longlong)(puVar30 + 0x47)];
                *puVar16 = puVar18;
                *(short *)(puVar16 + 0x43) = sVar24 + 3;
                puVar30 = puVar30 + 4;
              } while (puVar30 != puVar1);
            }
          }
          THREAD_INFO = THREAD_INFO + 1;
          puVar27 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
          goto LAB_001f5f1b;
        }
        local_38 = puVar25;
        if (uVar21 < 5) {
          uVar14 = 4;
          local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
        }
        else if (puVar25 == (undefined4 *)&DAT_00000005) {
          local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
          uVar14 = 5;
        }
        else {
          uVar19 = (undefined7)((ulonglong)puVar18 >> 8);
          if (uVar21 == 6) {
            local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)CONCAT71(uVar19,1));
            uVar14 = 5;
            local_38 = (undefined4 *)0x0;
          }
          else {
            local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)CONCAT71(uVar19,1));
            uVar14 = 6;
            local_38 = (undefined4 *)((longlong)puVar25 + -7);
          }
        }
        local_78 = local_60;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        puVar17 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
        if (puVar17 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_alloc_error_00219eb0)();
          goto LAB_001f6ab8;
        }
        *puVar17 = 0;
        uVar26 = ~uVar14 + (ulonglong)*(ushort *)((longlong)puVar18 + 0x21a);
        *(short *)((longlong)puVar17 + 0x21a) = (short)uVar26;
        local_50 = puVar18[uVar14 * 5 + 0xc];
        local_60 = puVar18[uVar14 * 5 + 0xd];
        if (0xb < uVar26) {
          (*(code *)PTR_slice_index_fail_00219d80)
                    (&PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217be8
                     ,0xb);
          goto LAB_001f6ab8;
        }
        local_90 = puVar18 + uVar14 * 5 + 0xc;
        local_d8 = (undefined8 *)puVar18[uVar14 + 1];
        (*(code *)PTR_memcpy_00219c60)(local_60,uVar26 * 8);
        (*(code *)PTR_memcpy_00219c60)(puVar18 + 0xc,uVar26 * 0x28);
        *(short *)((longlong)puVar18 + 0x21a) = (short)uVar14;
        local_b8 = local_90[4];
        local_c8 = local_90[2];
        uStack_c0 = local_90[3];
        uVar26 = (ulonglong)*(ushort *)((longlong)puVar17 + 0x21a);
        iVar13 = *(ushort *)((longlong)puVar17 + 0x21a) + 1;
        if (0xb < uVar26) {
          (*(code *)PTR_slice_index_fail_00219d80)
                    (&PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217330
                     ,0xc);
          goto LAB_001f6ab8;
        }
        if ((int)local_80 - (int)uVar14 != iVar13) {
          (*(code *)PTR_panic_00219ca8)
                    (local_90,&
                              PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217590
                    );
          goto LAB_001f6ab8;
        }
        local_d0 = local_d0 + 1;
        (*(code *)PTR_memcpy_00219c60)(local_90,iVar13 * 8);
        uVar11 = local_b8;
        uVar14 = 0;
        do {
          uVar22 = uVar14 + (uVar14 < uVar26);
          puVar16 = (undefined8 *)puVar17[uVar14 + 0x44];
          *puVar16 = puVar17;
          *(short *)(puVar16 + 0x43) = (short)uVar14;
          if (uVar26 <= uVar14) break;
          uVar14 = uVar22;
        } while (uVar22 <= uVar26);
        uVar32 = (undefined4)local_c8;
        uVar8 = local_c8._4_4_;
        uVar9 = (undefined4)uStack_c0;
        uVar10 = uStack_c0._4_4_;
        puVar16 = puVar17;
        if ((char)local_70 == '\0') {
          puVar16 = puVar18;
        }
        uVar21 = *(ushort *)((longlong)puVar16 + 0x21a);
        puVar25 = (undefined4 *)(ulonglong)uVar21;
        puVar30 = (undefined1 *)((longlong)local_38 + 1);
        puVar23 = (undefined8 *)((longlong)puVar25 - (longlong)local_38);
        if (puVar25 < local_38 || puVar23 == (undefined8 *)0x0) {
          puVar16[(longlong)local_38 * 5 + 0xc] = local_88;
          puVar16[(longlong)local_38 * 5 + 0xd] = local_78;
          puVar16[(longlong)local_38 * 5 + 0xe] = CONCAT44(uStack_a4,local_a8);
          (puVar16 + (longlong)local_38 * 5 + 0xe)[1] = CONCAT44(uStack_9c,uStack_a0);
          puVar16[(longlong)local_38 * 5 + 0x10] = local_98;
        }
        else {
          local_80 = (ulonglong)(((uint)uVar21 - (int)local_38) * 8);
          local_70 = puVar23;
          uVar33 = (*(code *)PTR_memmove_00219fb0)();
          local_90 = (undefined8 *)((longlong)local_38 * 5);
          (*(code *)PTR_memmove_00219fb0)(uVar33,local_80 * 5);
          puVar16[(longlong)local_90 + 0xc] = local_88;
          puVar16[(longlong)local_90 + 0xd] = local_78;
          puVar23 = puVar16 + (longlong)local_90 + 0xe;
          *(undefined4 *)puVar23 = local_a8;
          *(undefined4 *)((longlong)puVar23 + 4) = uStack_a4;
          *(undefined4 *)(puVar23 + 1) = uStack_a0;
          *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_9c;
          puVar16[(longlong)(local_90 + 2)] = local_98;
          (*(code *)PTR_memmove_00219fb0)(local_90,local_80);
          puVar23 = local_70;
        }
        puVar16[(longlong)((longlong)local_38 + 1)] = local_40;
        puVar16[(longlong)((longlong)local_38 + 0x45)] = local_58;
        *(ushort *)((longlong)puVar16 + 0x21a) = uVar21 + 1;
        if ((uint)puVar30 < (uint)(undefined1 *)((longlong)puVar25 + 2)) {
          uVar28 = ((uint)uVar21 - (int)local_38) + 1 & 3;
          if (uVar28 != 0) {
            uVar14 = 0;
            do {
              puVar5 = (undefined8 *)puVar16[(longlong)((longlong)local_38 + uVar14 + 0x45)];
              *puVar5 = puVar16;
              *(short *)(puVar5 + 0x43) = (short)puVar30 + (short)uVar14;
              uVar14 = uVar14 + 1;
            } while (uVar28 != uVar14);
            puVar30 = puVar30 + uVar14;
          }
          if (2 < (uint)puVar23) {
            do {
              puVar23 = (undefined8 *)puVar16[(longlong)(puVar30 + 0x44)];
              *puVar23 = puVar16;
              sVar24 = (short)puVar30;
              *(short *)(puVar23 + 0x43) = sVar24;
              puVar23 = (undefined8 *)puVar16[(longlong)(puVar30 + 0x45)];
              *puVar23 = puVar16;
              *(short *)(puVar23 + 0x43) = sVar24 + 1;
              puVar23 = (undefined8 *)puVar16[(longlong)(puVar30 + 0x46)];
              *puVar23 = puVar16;
              *(short *)(puVar23 + 0x43) = sVar24 + 2;
              puVar23 = (undefined8 *)puVar16[(longlong)(puVar30 + 0x47)];
              *puVar23 = puVar16;
              *(short *)(puVar23 + 0x43) = sVar24 + 3;
              puVar30 = puVar30 + 4;
            } while (puVar30 != (undefined1 *)((longlong)puVar25 + 2));
          }
        }
        local_98 = uVar11;
        local_a8 = uVar32;
        uStack_a4 = uVar8;
        uStack_a0 = uVar9;
        uStack_9c = uVar10;
        puVar23 = (undefined8 *)*puVar18;
        puVar16 = puVar18;
      } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
    }
    lVar29 = THREAD_INFO;
    puVar16 = THREAD_INFO;
    if (THREAD_INFO == (undefined8 *)0x0) {
      (*(code *)PTR_unwrap_failed_00219e58)();
      goto LAB_001f6ab8;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar23 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar23 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
      goto LAB_001f6ab8;
    }
    *puVar23 = 0;
    *(undefined2 *)((longlong)puVar23 + 0x21a) = 0;
    puVar23[0x44] = puVar16;
    lVar15 = lVar29 + 1;
    if (lVar15 == 0) {
      (*(code *)PTR_unwrap_failed_00219e58)();
      goto LAB_001f6ab8;
    }
    *puVar16 = puVar23;
    *(undefined2 *)(puVar16 + 0x43) = 0;
    THREAD_INFO = puVar23;
    THREAD_INFO = lVar15;
    if (local_d0 != lVar29) {
      (*(code *)PTR_panic_00219ca8)
                (extraout_XMM0_Da_03,
                 &PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00217ca8);
      goto LAB_001f6ab8;
    }
    *(undefined2 *)((longlong)puVar23 + 0x21a) = 1;
    puVar23[1] = local_d8;
    puVar23[0xc] = local_50;
    puVar23[0xd] = local_60;
    *(undefined4 *)(puVar23 + 0xe) = local_a8;
    *(undefined4 *)((longlong)puVar23 + 0x74) = uStack_a4;
    *(undefined4 *)(puVar23 + 0xf) = uStack_a0;
    *(undefined4 *)((longlong)puVar23 + 0x7c) = uStack_9c;
    puVar23[0x10] = local_98;
    puVar23[0x45] = puVar17;
    *puVar17 = puVar23;
    *(undefined2 *)(puVar17 + 0x43) = 1;
  }
  puVar27 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
  goto LAB_001f5f17;
}


