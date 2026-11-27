// 000a21d0 set_current_info

/* std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::set_current_info */

void __rustcall
std[6c98fd8553dbae28]::sys::pal::unix::stack_overflow::thread_info::set_current_info
          (ulonglong param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined7 uVar20;
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  byte *pbVar24;
  short sVar25;
  ulonglong uVar26;
  byte *pbVar27;
  uint uVar28;
  undefined4 *puVar29;
  byte *unaff_R15;
  longlong lVar30;
  byte *pbVar31;
  bool bVar32;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  ulonglong local_f0;
  undefined4 *local_e8;
  char local_e0;
  byte *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte *local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  ulonglong local_60;
  byte *local_58;
  ulonglong local_50;
  char local_41;
  byte *local_40;
  char *local_38;
  
  if (PTR_gettid_000c41e8 == (undefined *)0x0) {
    iVar12 = (*(code *)PTR_syscall_000c4110)();
  }
  else {
    iVar12 = (*(code *)PTR_gettid_000c41e8)();
  }
  puVar13 = (ulonglong *)__tls_get_addr();
  lVar30 = std[6c98fd8553dbae28]::thread::main_thread::MAIN;
  plVar14 = (longlong *)*puVar13;
  local_88 = param_2;
  local_80 = param_1;
  if (plVar14 < Elf64_Ehdr_00000000.e_ident_magic_str + 2) {
    plVar14 = (longlong *)__tls_get_addr();
    pcVar15 = (char *)0x0;
    unaff_R15 = &Elf64_Ehdr_00000000.e_ident_class;
    if ((lVar30 != 0) && (*plVar14 == lVar30)) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      pcVar15 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (pcVar15 == (char *)0x0) goto LAB_000a30a8;
      *(undefined4 *)pcVar15 = 0x6e69616d;
    }
  }
  else if (plVar14[1] == 0) {
    if ((std[6c98fd8553dbae28]::thread::main_thread::MAIN != 0) &&
       (std[6c98fd8553dbae28]::thread::main_thread::MAIN == *plVar14)) {
      unaff_R15 = &Elf64_Ehdr_00000000.e_ident_class;
      goto LAB_000a22ca;
    }
    pcVar15 = (char *)0x0;
  }
  else {
    unaff_R15 = (byte *)(plVar14[2] + -1);
    if (unaff_R15 == (byte *)0x0) {
      unaff_R15 = (byte *)0x0;
      pcVar15 = Elf64_Ehdr_00000000.e_ident_magic_str;
      uVar33 = extraout_XMM0_Da;
    }
    else {
LAB_000a22ca:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      pcVar15 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (pcVar15 == (char *)0x0) {
        (*(code *)PTR_handle_alloc_error_000c3d10)();
LAB_000a30a8:
        uVar33 = (*(code *)PTR_handle_alloc_error_000c3d10)();
        uVar16 = 4;
        if ((local_50 != 0) && (local_60 != 0)) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar33,1);
          uVar16 = local_60;
        }
        SPIN_LOCK = 0;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>>>>
                  (&local_f0,uVar16);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      uVar33 = extraout_XMM0_Da_00;
    }
    (*(code *)PTR_memcpy_000c3aa8)(uVar33,unaff_R15);
  }
  local_38 = pcVar15;
  uVar16 = (*(code *)PTR___errno_location_000c3cf0)();
  LOCK();
  bVar32 = LOCK == 0;
  if (bVar32) {
    LOCK = 1;
  }
  UNLOCK();
  uVar33 = extraout_XMM0_Da_01;
  if (!bVar32) {
    uVar33 = (*(code *)PTR_lock_contended_000c3c80)();
  }
  puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  local_58 = unaff_R15;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    uVar28 = uVar28 ^ 1;
    uVar33 = extraout_XMM0_Da_03;
  }
  puVar6 = PTR_pause_000c43e8;
  local_f0 = (ulonglong)(DAT_000c6754 != '\0');
  local_e8 = &LOCK;
  cVar11 = (char)uVar28;
  uVar26 = 0;
  LOCK();
  bVar32 = SPIN_LOCK == 0;
  if (bVar32) {
    SPIN_LOCK = uVar16;
  }
  else {
    uVar26 = SPIN_LOCK;
  }
  UNLOCK();
  local_41 = DAT_000c6754;
  local_e0 = cVar11;
  while (!bVar32) {
    if (uVar26 == uVar16) {
      (*(code *)PTR_panic_fmt_000c3e90)(uVar33,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1f70);
      goto LAB_000a3098;
    }
    uVar33 = (*(code *)puVar6)();
    uVar26 = 0;
    LOCK();
    bVar32 = SPIN_LOCK == 0;
    if (bVar32) {
      SPIN_LOCK = uVar16;
    }
    else {
      uVar26 = SPIN_LOCK;
    }
    UNLOCK();
  }
  lVar30 = (longlong)iVar12;
  local_64 = uVar28;
  if (THREAD_INFO != (byte *)0x0) {
    lVar17 = THREAD_INFO;
    pbVar27 = THREAD_INFO;
    do {
      uVar22 = *(ushort *)(pbVar27 + 0x21a);
      uVar26 = 0xffffffffffffffff;
      lVar3 = 0;
      do {
        lVar21 = lVar3;
        if ((ulonglong)((uint)uVar22 * 8) * 5 == lVar21) {
          uVar26 = (ulonglong)uVar22;
          goto LAB_000a2413;
        }
        uVar23 = *(ulonglong *)(pbVar27 + (uVar26 + 2) * 8);
        uVar26 = uVar26 + 1;
        lVar3 = lVar21 + 0x28;
      } while ((char)((uVar23 < uVar16) - (uVar16 < uVar23)) == '\x01');
      if (uVar23 < uVar16 == uVar16 < uVar23) {
        lVar17 = *(longlong *)(pbVar27 + lVar21 + 0x60);
        lVar3 = *(longlong *)(pbVar27 + lVar21 + 0x68);
        *(char **)(pbVar27 + lVar21 + 0x60) = local_38;
        *(byte **)(pbVar27 + lVar21 + 0x68) = local_58;
        *(ulonglong *)(pbVar27 + lVar21 + 0x70) = local_80;
        *(ulonglong *)(pbVar27 + lVar21 + 0x78) = local_88;
        *(longlong *)(pbVar27 + lVar21 + 0x80) = lVar30;
        puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8;
        if ((lVar17 != 0) && (lVar3 != 0)) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(lVar21 + 0x28,1);
        }
        goto LAB_000a24fb;
      }
LAB_000a2413:
      bVar32 = lVar17 == 0;
      lVar17 = lVar17 + -1;
      if (bVar32) goto LAB_000a2549;
      pbVar27 = *(byte **)(pbVar27 + (uVar26 + 0x44) * 8);
    } while( true );
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  pbVar27 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (pbVar27 == (byte *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
LAB_000a3098:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)pbVar27 = 0;
  THREAD_INFO = 0;
  THREAD_INFO = pbVar27;
  *(undefined2 *)(pbVar27 + 0x21a) = 1;
  *(ulonglong *)(pbVar27 + 8) = uVar16;
  *(char **)(pbVar27 + 0x60) = local_38;
  *(byte **)(pbVar27 + 0x68) = local_58;
  *(ulonglong *)(pbVar27 + 0x70) = local_80;
  *(ulonglong *)(pbVar27 + 0x78) = local_88;
  *(longlong *)(pbVar27 + 0x80) = lVar30;
LAB_000a24f7:
  THREAD_INFO = THREAD_INFO + 1;
  cVar11 = (char)local_64;
LAB_000a24fb:
  SPIN_LOCK = 0;
  if (((cVar11 == '\0') && ((*puVar13 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar11 == '\0')) {
    DAT_000c6754 = '\x01';
  }
  iVar12 = LOCK;
  LOCK();
  LOCK = 0;
  UNLOCK();
  if (iVar12 == 2) {
    (*(code *)PTR_syscall_000c4110)(1,0x81);
    return;
  }
  return;
LAB_000a2549:
  if (uVar22 < 0xb) {
    if (uVar26 < uVar22) {
      local_50 = (ulonglong)(((uint)uVar22 - (int)uVar26) * 8);
      uVar33 = (*(code *)PTR_memmove_000c3c50)();
      (*(code *)PTR_memmove_000c3c50)(uVar33,local_50 * 5);
    }
    *(ulonglong *)(pbVar27 + (uVar26 + 1) * 8) = uVar16;
    *(char **)(pbVar27 + (uVar26 * 5 + 0xc) * 8) = local_38;
    *(byte **)(pbVar27 + (uVar26 * 5 + 0xd) * 8) = local_58;
    *(ulonglong *)(pbVar27 + (uVar26 * 5 + 0xe) * 8) = local_80;
    *(ulonglong *)(pbVar27 + (uVar26 * 5 + 0xf) * 8) = local_88;
    *(longlong *)(pbVar27 + (uVar26 * 5 + 0x10) * 8) = lVar30;
    *(ushort *)(pbVar27 + 0x21a) = uVar22 + 1;
  }
  else {
    local_78._4_4_ = (uint)(local_78 >> 0x20);
    if (uVar26 < 5) {
      local_40 = &Elf64_Ehdr_00000000.e_ident_class;
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
    }
    else if (uVar26 == 5) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      local_40 = &Elf64_Ehdr_00000000.e_ident_data;
    }
    else if (uVar26 == 6) {
      local_40 = &Elf64_Ehdr_00000000.e_ident_data;
      local_78 = CONCAT44(local_78._4_4_,1);
      uVar26 = 0;
    }
    else {
      uVar26 = uVar26 - 7;
      local_40 = &Elf64_Ehdr_00000000.e_ident_version;
      local_78 = CONCAT44(local_78._4_4_,1);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    pbVar18 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
    if (pbVar18 == (byte *)0x0) {
      (*(code *)PTR_handle_alloc_error_000c3d10)();
      goto LAB_000a3098;
    }
    *(undefined8 *)pbVar18 = 0;
    uVar23 = ~(ulonglong)local_40 + (ulonglong)*(ushort *)(pbVar27 + 0x21a);
    *(short *)(pbVar18 + 0x21a) = (short)uVar23;
    local_50 = *(ulonglong *)(pbVar27 + ((longlong)local_40 * 5 + 0xc) * 8);
    local_60 = *(ulonglong *)(pbVar27 + ((longlong)local_40 * 5 + 0xd) * 8);
    if (0xb < uVar23) {
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_000c1b80,0xb
                );
      goto LAB_000a3098;
    }
    local_70 = pbVar27 + ((longlong)local_40 * 5 + 0xc) * 8;
    local_d8 = *(byte **)(pbVar27 + (longlong)(local_40 + 1) * 8);
    local_90 = (byte *)(uVar23 * 8);
    (*(code *)PTR_memcpy_000c3aa8)(pbVar27 + 8,local_90);
    (*(code *)PTR_memcpy_000c3aa8)(pbVar27 + 0x60,(longlong)local_90 * 5);
    *(short *)(pbVar27 + 0x21a) = (short)local_40;
    local_b8 = *(undefined8 *)(local_70 + 0x20);
    local_c8 = *(undefined8 *)(local_70 + 0x10);
    uStack_c0 = *(undefined8 *)(local_70 + 0x18);
    pbVar31 = pbVar18;
    if ((char)local_78 == '\0') {
      pbVar31 = pbVar27;
    }
    uVar22 = *(ushort *)(pbVar31 + 0x21a);
    if (uVar26 < uVar22) {
      local_70 = (byte *)(ulonglong)(((uint)uVar22 - (int)uVar26) * 8);
      local_78 = (ulonglong)uVar22;
      local_40 = pbVar31;
      (*(code *)PTR_memmove_000c3c50)();
      (*(code *)PTR_memmove_000c3c50)(local_40,(longlong)local_70 * 5);
      uVar22 = (ushort)local_78;
      pbVar31 = local_40;
    }
    *(ulonglong *)(pbVar31 + (uVar26 + 1) * 8) = uVar16;
    *(char **)(pbVar31 + (uVar26 * 5 + 0xc) * 8) = local_38;
    *(byte **)(pbVar31 + (uVar26 * 5 + 0xd) * 8) = local_58;
    *(ulonglong *)(pbVar31 + (uVar26 * 5 + 0xe) * 8) = local_80;
    *(ulonglong *)(pbVar31 + (uVar26 * 5 + 0xf) * 8) = local_88;
    *(longlong *)(pbVar31 + (uVar26 * 5 + 0x10) * 8) = lVar30;
    *(ushort *)(pbVar31 + 0x21a) = uVar22 + 1;
    local_98 = local_b8;
    local_a8 = (undefined4)local_c8;
    uStack_a4 = local_c8._4_4_;
    uStack_a0 = (undefined4)uStack_c0;
    uStack_9c = uStack_c0._4_4_;
    if (*(byte **)pbVar27 == (byte *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = 0;
      pbVar31 = *(byte **)pbVar27;
      do {
        pbVar19 = pbVar31;
        uVar16 = local_60;
        uVar22 = *(ushort *)(pbVar27 + 0x218);
        pcVar15 = (char *)(ulonglong)uVar22;
        uVar2 = *(ushort *)(pbVar19 + 0x21a);
        local_80 = (ulonglong)uVar2;
        local_88 = local_50;
        local_40 = local_d8;
        local_58 = pbVar18;
        if (local_80 < 0xb) {
          local_38 = (char *)CONCAT44(local_38._4_4_,uVar2 + 1);
          pbVar27 = (byte *)(pcVar15 + 1);
          if (uVar22 < uVar2) {
            lVar30 = local_80 - (longlong)pcVar15;
            (*(code *)PTR_memmove_000c3c50)(local_50,lVar30 * 8);
            local_b8 = local_98;
            local_c8 = CONCAT44(uStack_a4,local_a8);
            uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
            (*(code *)PTR_memmove_000c3c50)(local_a8,lVar30 * 0x28);
          }
          else {
            local_b8 = local_98;
            local_c8 = CONCAT44(uStack_a4,local_a8);
            uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
          }
          uVar26 = local_80;
          puVar1 = (undefined1 *)(local_80 + 2);
          *(byte **)(pbVar19 + (longlong)(pcVar15 + 1) * 8) = local_40;
          *(ulonglong *)(pbVar19 + ((longlong)pcVar15 * 5 + 0xc) * 8) = local_88;
          *(ulonglong *)(pbVar19 + ((longlong)pcVar15 * 5 + 0xd) * 8) = uVar16;
          pbVar18 = pbVar19 + ((longlong)pcVar15 * 5 + 0xe) * 8;
          *(undefined4 *)pbVar18 = (undefined4)local_c8;
          *(undefined4 *)(pbVar18 + 4) = local_c8._4_4_;
          *(undefined4 *)(pbVar18 + 8) = (undefined4)uStack_c0;
          *(undefined4 *)(pbVar18 + 0xc) = uStack_c0._4_4_;
          *(undefined8 *)(pbVar19 + ((longlong)pcVar15 * 5 + 0x10) * 8) = local_b8;
          if (uVar22 < (ushort)local_80) {
            (*(code *)PTR_memmove_000c3c50)(local_b8,(local_80 - (longlong)pcVar15) * 8);
          }
          *(byte **)(pbVar19 + ((longlong)pcVar15 + 0x45) * 8) = local_58;
          *(short *)(pbVar19 + 0x21a) = (short)local_38;
          cVar11 = (char)local_64;
          if ((uint)pbVar27 < (uint)puVar1) {
            uVar28 = ((int)uVar26 - (uint)uVar22) + 1 & 3;
            if (uVar28 != 0) {
              uVar16 = 0;
              do {
                puVar4 = *(undefined8 **)(pbVar19 + (longlong)(pcVar15 + uVar16 + 0x45) * 8);
                *puVar4 = pbVar19;
                *(short *)(puVar4 + 0x43) = (short)pbVar27 + (short)uVar16;
                uVar16 = uVar16 + 1;
              } while (uVar28 != uVar16);
              pbVar27 = pbVar27 + uVar16;
            }
            if (2 < (int)uVar26 - (uint)uVar22) {
              do {
                puVar4 = *(undefined8 **)(pbVar19 + ((longlong)pbVar27 + 0x44) * 8);
                *puVar4 = pbVar19;
                sVar25 = (short)pbVar27;
                *(short *)(puVar4 + 0x43) = sVar25;
                puVar4 = *(undefined8 **)(pbVar19 + ((longlong)pbVar27 + 0x45) * 8);
                *puVar4 = pbVar19;
                *(short *)(puVar4 + 0x43) = sVar25 + 1;
                puVar4 = *(undefined8 **)(pbVar19 + ((longlong)pbVar27 + 0x46) * 8);
                *puVar4 = pbVar19;
                *(short *)(puVar4 + 0x43) = sVar25 + 2;
                puVar4 = *(undefined8 **)(pbVar19 + ((longlong)pbVar27 + 0x47) * 8);
                *puVar4 = pbVar19;
                *(short *)(puVar4 + 0x43) = sVar25 + 3;
                pbVar27 = pbVar27 + 4;
              } while (pbVar27 != puVar1);
            }
          }
          THREAD_INFO = THREAD_INFO + 1;
          puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8;
          goto LAB_000a24fb;
        }
        local_38 = pcVar15;
        if (uVar22 < 5) {
          uVar16 = 4;
          local_70 = (byte *)((ulonglong)local_70._4_4_ << 0x20);
        }
        else if ((byte *)pcVar15 == &Elf64_Ehdr_00000000.e_ident_data) {
          local_70 = (byte *)((ulonglong)local_70._4_4_ << 0x20);
          uVar16 = 5;
        }
        else {
          uVar20 = (undefined7)((ulonglong)pbVar19 >> 8);
          if (uVar22 == 6) {
            local_70 = (byte *)CONCAT44(local_70._4_4_,(int)CONCAT71(uVar20,1));
            uVar16 = 5;
            local_38 = (char *)0x0;
          }
          else {
            local_70 = (byte *)CONCAT44(local_70._4_4_,(int)CONCAT71(uVar20,1));
            uVar16 = 6;
            local_38 = pcVar15 + -7;
          }
        }
        local_78 = local_60;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        pbVar18 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
        if (pbVar18 == (byte *)0x0) {
          (*(code *)PTR_handle_alloc_error_000c3d10)();
          goto LAB_000a3098;
        }
        *(undefined8 *)pbVar18 = 0;
        uVar26 = ~uVar16 + (ulonglong)*(ushort *)(pbVar19 + 0x21a);
        *(short *)(pbVar18 + 0x21a) = (short)uVar26;
        local_50 = *(ulonglong *)(pbVar19 + (uVar16 * 5 + 0xc) * 8);
        local_60 = *(ulonglong *)(pbVar19 + (uVar16 * 5 + 0xd) * 8);
        if (0xb < uVar26) {
          (*(code *)PTR_slice_index_fail_000c3bb0)
                    (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_000c1b80
                     ,0xb);
          goto LAB_000a3098;
        }
        local_90 = pbVar19 + (uVar16 * 5 + 0xc) * 8;
        local_d8 = *(byte **)(pbVar19 + (uVar16 + 1) * 8);
        (*(code *)PTR_memcpy_000c3aa8)(local_60,uVar26 * 8);
        (*(code *)PTR_memcpy_000c3aa8)(pbVar19 + 0x60,uVar26 * 0x28);
        *(short *)(pbVar19 + 0x21a) = (short)uVar16;
        local_b8 = *(undefined8 *)(local_90 + 0x20);
        local_c8 = *(undefined8 *)(local_90 + 0x10);
        uStack_c0 = *(undefined8 *)(local_90 + 0x18);
        uVar26 = (ulonglong)*(ushort *)(pbVar18 + 0x21a);
        iVar12 = *(ushort *)(pbVar18 + 0x21a) + 1;
        if (0xb < uVar26) {
          (*(code *)PTR_slice_index_fail_000c3bb0)
                    (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_000c13b8
                     ,0xc);
          goto LAB_000a3098;
        }
        if ((int)local_80 - (int)uVar16 != iVar12) {
          (*(code *)PTR_panic_000c3b00)
                    (local_90,&
                              PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_000c15e8
                    );
          goto LAB_000a3098;
        }
        local_d0 = local_d0 + 1;
        (*(code *)PTR_memcpy_000c3aa8)(local_90,iVar12 * 8);
        uVar10 = local_b8;
        uVar16 = 0;
        do {
          uVar23 = uVar16 + (uVar16 < uVar26);
          puVar4 = *(undefined8 **)(pbVar18 + (uVar16 + 0x44) * 8);
          *puVar4 = pbVar18;
          *(short *)(puVar4 + 0x43) = (short)uVar16;
          if (uVar26 <= uVar16) break;
          uVar16 = uVar23;
        } while (uVar23 <= uVar26);
        uVar33 = (undefined4)local_c8;
        uVar7 = local_c8._4_4_;
        uVar8 = (undefined4)uStack_c0;
        uVar9 = uStack_c0._4_4_;
        pbVar27 = pbVar18;
        if ((char)local_70 == '\0') {
          pbVar27 = pbVar19;
        }
        uVar22 = *(ushort *)(pbVar27 + 0x21a);
        puVar29 = (undefined4 *)(ulonglong)uVar22;
        pbVar31 = (byte *)(local_38 + 1);
        pbVar24 = (byte *)((longlong)puVar29 - (longlong)local_38);
        if (puVar29 < local_38 || pbVar24 == (byte *)0x0) {
          *(ulonglong *)(pbVar27 + ((longlong)local_38 * 5 + 0xc) * 8) = local_88;
          *(ulonglong *)(pbVar27 + ((longlong)local_38 * 5 + 0xd) * 8) = local_78;
          *(ulonglong *)(pbVar27 + ((longlong)local_38 * 5 + 0xe) * 8) =
               CONCAT44(uStack_a4,local_a8);
          *(ulonglong *)(pbVar27 + ((longlong)local_38 * 5 + 0xe) * 8 + 8) =
               CONCAT44(uStack_9c,uStack_a0);
          *(undefined8 *)(pbVar27 + ((longlong)local_38 * 5 + 0x10) * 8) = local_98;
        }
        else {
          local_80 = (ulonglong)(((uint)uVar22 - (int)local_38) * 8);
          local_70 = pbVar24;
          uVar34 = (*(code *)PTR_memmove_000c3c50)();
          local_90 = (byte *)((longlong)local_38 * 5);
          (*(code *)PTR_memmove_000c3c50)(uVar34,local_80 * 5);
          *(ulonglong *)(pbVar27 + (longlong)(local_90 + 0xc) * 8) = local_88;
          *(ulonglong *)(pbVar27 + (longlong)(local_90 + 0xd) * 8) = local_78;
          pbVar24 = pbVar27 + (longlong)(local_90 + 0xe) * 8;
          *(undefined4 *)pbVar24 = local_a8;
          *(undefined4 *)(pbVar24 + 4) = uStack_a4;
          *(undefined4 *)(pbVar24 + 8) = uStack_a0;
          *(undefined4 *)(pbVar24 + 0xc) = uStack_9c;
          *(undefined8 *)(pbVar27 + (longlong)(local_90 + 0x10) * 8) = local_98;
          (*(code *)PTR_memmove_000c3c50)(local_90,local_80);
          pbVar24 = local_70;
        }
        *(byte **)(pbVar27 + (longlong)(local_38 + 1) * 8) = local_40;
        *(byte **)(pbVar27 + ((longlong)local_38 + 0x45) * 8) = local_58;
        *(ushort *)(pbVar27 + 0x21a) = uVar22 + 1;
        if ((uint)pbVar31 < (uint)(undefined1 *)((longlong)puVar29 + 2)) {
          uVar28 = ((uint)uVar22 - (int)local_38) + 1 & 3;
          if (uVar28 != 0) {
            uVar16 = 0;
            do {
              puVar4 = *(undefined8 **)(pbVar27 + (longlong)(local_38 + uVar16 + 0x45) * 8);
              *puVar4 = pbVar27;
              *(short *)(puVar4 + 0x43) = (short)pbVar31 + (short)uVar16;
              uVar16 = uVar16 + 1;
            } while (uVar28 != uVar16);
            pbVar31 = pbVar31 + uVar16;
          }
          if (2 < (uint)pbVar24) {
            do {
              puVar4 = *(undefined8 **)(pbVar27 + ((longlong)pbVar31 + 0x44) * 8);
              *puVar4 = pbVar27;
              sVar25 = (short)pbVar31;
              *(short *)(puVar4 + 0x43) = sVar25;
              puVar4 = *(undefined8 **)(pbVar27 + ((longlong)pbVar31 + 0x45) * 8);
              *puVar4 = pbVar27;
              *(short *)(puVar4 + 0x43) = sVar25 + 1;
              puVar4 = *(undefined8 **)(pbVar27 + ((longlong)pbVar31 + 0x46) * 8);
              *puVar4 = pbVar27;
              *(short *)(puVar4 + 0x43) = sVar25 + 2;
              puVar4 = *(undefined8 **)(pbVar27 + ((longlong)pbVar31 + 0x47) * 8);
              *puVar4 = pbVar27;
              *(short *)(puVar4 + 0x43) = sVar25 + 3;
              pbVar31 = pbVar31 + 4;
            } while (pbVar31 != (undefined1 *)((longlong)puVar29 + 2));
          }
        }
        local_98 = uVar10;
        local_a8 = uVar33;
        uStack_a4 = uVar7;
        uStack_a0 = uVar8;
        uStack_9c = uVar9;
        pbVar31 = *(byte **)pbVar19;
        pbVar27 = pbVar19;
      } while (*(byte **)pbVar19 != (byte *)0x0);
    }
    lVar30 = THREAD_INFO;
    pbVar27 = THREAD_INFO;
    if (THREAD_INFO == (byte *)0x0) {
      (*(code *)PTR_unwrap_failed_000c3b08)();
      goto LAB_000a3098;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    pbVar31 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
    if (pbVar31 == (byte *)0x0) {
      (*(code *)PTR_handle_alloc_error_000c3d10)();
      goto LAB_000a3098;
    }
    *(undefined8 *)pbVar31 = 0;
    *(undefined2 *)(pbVar31 + 0x21a) = 0;
    *(byte **)(pbVar31 + 0x220) = pbVar27;
    lVar17 = lVar30 + 1;
    if (lVar17 == 0) {
      (*(code *)PTR_unwrap_failed_000c3b08)();
      goto LAB_000a3098;
    }
    *(byte **)pbVar27 = pbVar31;
    *(undefined2 *)(pbVar27 + 0x218) = 0;
    THREAD_INFO = pbVar31;
    THREAD_INFO = lVar17;
    if (local_d0 != lVar30) {
      (*(code *)PTR_panic_000c3b00)
                (extraout_XMM0_Da_02,
                 &PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_000c1c40);
      goto LAB_000a3098;
    }
    *(undefined2 *)(pbVar31 + 0x21a) = 1;
    *(byte **)(pbVar31 + 8) = local_d8;
    *(ulonglong *)(pbVar31 + 0x60) = local_50;
    *(ulonglong *)(pbVar31 + 0x68) = local_60;
    *(undefined4 *)(pbVar31 + 0x70) = local_a8;
    *(undefined4 *)(pbVar31 + 0x74) = uStack_a4;
    *(undefined4 *)(pbVar31 + 0x78) = uStack_a0;
    *(undefined4 *)(pbVar31 + 0x7c) = uStack_9c;
    *(undefined8 *)(pbVar31 + 0x80) = local_98;
    *(byte **)(pbVar31 + 0x228) = pbVar18;
    *(byte **)pbVar18 = pbVar31;
    *(undefined2 *)(pbVar18 + 0x218) = 1;
  }
  puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  goto LAB_000a24f7;
}


