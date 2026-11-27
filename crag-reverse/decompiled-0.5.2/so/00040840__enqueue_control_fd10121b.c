// 00040840 enqueue_control

/* <agy_bridge[64a9e9deac6c45ce]::Runtime>::enqueue_control */

undefined8 __rustcall
<agy_bridge[64a9e9deac6c45ce]::Runtime>::enqueue_control
          (longlong param_1,longlong *param_2,longlong *param_3,code *param_4,ulonglong param_5,
          code *param_6,ulonglong param_7)

{
  int *piVar1;
  int iVar2;
  code cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined *puVar8;
  char cVar9;
  undefined8 uVar10;
  char *pcVar11;
  code *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong extraout_RDX;
  bool bVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte local_d4;
  longlong local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  code *local_b0;
  longlong local_98;
  code *local_90;
  longlong local_88;
  char *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  code *local_38;
  
  piVar1 = (int *)(param_1 + 0x58);
  LOCK();
  bVar19 = *(int *)(param_1 + 0x58) == 0;
  if (bVar19) {
    *(int *)(param_1 + 0x58) = 1;
  }
  UNLOCK();
  local_60 = param_3;
  local_50 = param_2;
  if (!bVar19) {
    (*(code *)PTR_lock_contended_000c3c80)();
  }
  puVar8 = PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  uVar17 = SUB84(param_3,0);
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
    local_d4 = 0;
    cVar9 = *(char *)(param_1 + 0x5c);
  }
  else {
    local_d4 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    local_d4 = local_d4 ^ 1;
    cVar9 = *(char *)(param_1 + 0x5c);
  }
  if (cVar9 != '\0') {
    uVar10 = (*(code *)PTR_<&str>_000c3b30)();
    uVar20 = extraout_XMM0_Qa;
    if ((local_d4 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) {
      cVar9 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
      uVar20 = extraout_XMM0_Qa_03;
      if (cVar9 == '\0') {
        *(undefined1 *)(param_1 + 0x5c) = 1;
      }
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      uVar20 = (*(code *)PTR_wake_000c3ad0)();
    }
    if (*local_60 != 0) {
      uVar20 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar20,1);
    }
    if (*local_50 == 0) {
      return uVar10;
    }
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar20,1);
    return uVar10;
  }
  if (*(longlong *)(param_1 + 0x420) != -1) {
    lVar16 = *local_50;
    local_58 = local_50[1];
    lVar4 = local_50[2];
    lVar5 = *local_60;
    lVar6 = local_60[1];
    lVar13 = local_60[2];
    if (*(longlong *)(param_1 + 0x4a8) == -1) {
      local_c8 = (char *)0xffffffffffffffff;
    }
    else {
      (*(code *)PTR_clone_000c3c68)();
      local_c8 = local_80;
      local_b8 = (char *)local_78;
      local_b0 = local_70;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    pcVar11 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
    uVar20 = s_lready_in_flight_0000c1bd._8_8_;
    if (pcVar11 == (char *)0x0) {
      (*(code *)PTR_handle_error_000c3a98)();
      goto LAB_000418e0;
    }
    *(ulonglong *)(pcVar11 + 0x1c) =
         CONCAT44(s_lready_in_flight_0000c1bd._4_4_,s_lready_in_flight_0000c1bd._0_4_);
    *(undefined8 *)(pcVar11 + 0x24) = uVar20;
    uVar20 = CONCAT44(s_lready_in_flight_0000c1bd._0_4_,s_command_is_a_0000c1b1._8_4_);
    *(undefined8 *)(pcVar11 + 0x10) = s_command_is_a_0000c1b1._0_8_;
    *(undefined8 *)(pcVar11 + 0x18) = uVar20;
    uVar20 = s_another_control_0000c1a1._8_8_;
    *(undefined8 *)pcVar11 = s_another_control_0000c1a1._0_8_;
    *(undefined8 *)(pcVar11 + 8) = uVar20;
    uVar20 = (*(code *)PTR_now_000c3c00)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::PendingControl>>
              (param_1 + 0x420,1);
    *(longlong *)(param_1 + 0x420) = lVar16;
    *(longlong *)(param_1 + 0x428) = local_58;
    *(longlong *)(param_1 + 0x430) = lVar4;
    *(longlong *)(param_1 + 0x438) = lVar5;
    *(longlong *)(param_1 + 0x440) = lVar6;
    *(longlong *)(param_1 + 0x448) = lVar13;
    *(char **)(param_1 + 0x450) = local_c8;
    *(char **)(param_1 + 0x458) = local_b8;
    *(code **)(param_1 + 0x460) = local_b0;
    *(undefined8 *)(param_1 + 0x468) = 0x2c;
    *(char **)(param_1 + 0x470) = pcVar11;
    *(undefined8 *)(param_1 + 0x478) = 0x2c;
    *(undefined8 *)(param_1 + 0x480) = uVar20;
    *(undefined4 *)(param_1 + 0x488) = uVar17;
    *(undefined1 (*) [16])(param_1 + 0x490) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 0x4a0) = 0x10101;
    if (((local_d4 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    goto joined_r0x00040c0c;
  }
  plVar7 = (longlong *)local_60[1];
  local_58 = local_60[2];
  switch(local_58) {
  case 9:
    if ((char)plVar7[1] != 'l' || *plVar7 != 0x65646f6d5f746573) break;
    if (param_7 - 1 < 0x100 && param_6 != (code *)0x0) {
      uVar14 = 0;
      do {
        cVar3 = param_6[uVar14];
        if (((9 < (byte)((char)cVar3 - 0x30U)) && (0x19 < (byte)(((byte)cVar3 & 0xdf) + 0xbf))) &&
           ((0x3f < (byte)cVar3 - 0x20 ||
            ((0x800000000400e001U >> ((ulonglong)((byte)cVar3 - 0x20) & 0x3f) & 1) == 0))))
        goto LAB_00041601;
        uVar14 = uVar14 + 1;
      } while (param_7 != uVar14);
      if (param_7 < 0x10) {
        uVar14 = 0;
        do {
          if (param_6[uVar14] == (code)0xa) goto LAB_00041601;
          uVar14 = uVar14 + 1;
        } while (param_7 != uVar14);
        uVar14 = 0;
        do {
          if (param_6[uVar14] == (code)0xd) goto LAB_00041601;
          uVar14 = uVar14 + 1;
        } while (param_7 != uVar14);
      }
      else {
        lVar16 = (*(code *)PTR_memchr_aligned_000c3cb0)(0x800000000400e001,param_7);
        if ((lVar16 == 1) ||
           (lVar16 = (*(code *)PTR_memchr_aligned_000c3cb0)(extraout_XMM0_Qa_00,param_7),
           lVar16 == 1)) goto LAB_00041601;
      }
      local_48 = <str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
      local_80 = local_48;
      local_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      uVar17 = SUB84(&local_80,0);
      (*(code *)PTR_format_inner_000c3b78)();
      goto LAB_00041805;
    }
LAB_00041601:
    local_88 = 0x27;
    goto LAB_00040ee4;
  case 10:
    if ((short)plVar7[1] != 0x7472 || *plVar7 != 0x6f6666655f746573) break;
    if (0xff < param_7 - 1 || param_6 == (code *)0x0) {
LAB_00041661:
      local_88 = 0x26;
      goto LAB_00040ee4;
    }
    uVar14 = 0;
    do {
      cVar3 = param_6[uVar14];
      if (((9 < (byte)((char)cVar3 - 0x30U)) && (0x19 < (byte)(((byte)cVar3 & 0xdf) + 0xbf))) &&
         ((0x3f < (byte)cVar3 - 0x20 ||
          ((0x800000000400e001U >> ((ulonglong)((byte)cVar3 - 0x20) & 0x3f) & 1) == 0))))
      goto LAB_00041661;
      uVar14 = uVar14 + 1;
    } while (param_7 != uVar14);
    if (param_7 < 0x10) {
      uVar14 = 0;
      do {
        if (param_6[uVar14] == (code)0xa) goto LAB_00041661;
        uVar14 = uVar14 + 1;
      } while (param_7 != uVar14);
      uVar14 = 0;
      do {
        if (param_6[uVar14] == (code)0xd) goto LAB_00041661;
        uVar14 = uVar14 + 1;
      } while (param_7 != uVar14);
    }
    else {
      lVar16 = (*(code *)PTR_memchr_aligned_000c3cb0)(0x800000000400e001,param_7);
      if ((lVar16 == 1) ||
         (lVar16 = (*(code *)PTR_memchr_aligned_000c3cb0)(extraout_XMM0_Qa_01,param_7), lVar16 == 1)
         ) goto LAB_00041661;
    }
    local_48 = <str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
    local_80 = local_48;
    local_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    uVar17 = SUB84(&local_80,0);
    (*(code *)PTR_format_inner_000c3b78)();
LAB_00041805:
    if (local_98 == -2) goto LAB_00040ee4;
    if (local_98 == -1) goto LAB_00040c55;
    local_d0 = local_98;
    local_68 = local_90;
LAB_00041225:
    lVar16 = *local_50;
    lVar4 = local_50[1];
    lVar5 = local_50[2];
    lVar6 = *local_60;
    if (*(longlong *)(param_1 + 0x4a8) == -1) {
      local_b8 = (char *)0xffffffffffffffff;
    }
    else {
      (*(code *)PTR_clone_000c3c68)();
      local_b8 = local_80;
      local_38 = local_78;
      param_6 = local_70;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    pcVar11 = (char *)(*(code *)PTR___rust_alloc_000c3a90)();
    uVar20 = s_d_on_prompt_hook_0000c1ea._8_8_;
    if (pcVar11 == (char *)0x0) {
      (*(code *)PTR_handle_error_000c3a98)();
      goto LAB_000418e0;
    }
    *(ulonglong *)(pcVar11 + 0x1d) =
         CONCAT53(s_d_on_prompt_hook_0000c1ea._3_5_,s_d_on_prompt_hook_0000c1ea._0_3_);
    *(undefined8 *)(pcVar11 + 0x25) = uVar20;
    uVar20 = CONCAT35(s_d_on_prompt_hook_0000c1ea._0_3_,s_ol_unsupporte_0000c1dd._8_5_);
    *(undefined8 *)(pcVar11 + 0x10) = s_ol_unsupporte_0000c1dd._0_8_;
    *(undefined8 *)(pcVar11 + 0x18) = uVar20;
    uVar20 = s_live_slash_contr_0000c1cd._8_8_;
    *(undefined8 *)pcVar11 = s_live_slash_contr_0000c1cd._0_8_;
    *(undefined8 *)(pcVar11 + 8) = uVar20;
    uVar20 = (*(code *)PTR_now_000c3c00)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::PendingControl>>
              (param_1 + 0x420,1);
    *(longlong *)(param_1 + 0x420) = lVar16;
    *(longlong *)(param_1 + 0x428) = lVar4;
    *(longlong *)(param_1 + 0x430) = lVar5;
    *(longlong *)(param_1 + 0x438) = lVar6;
    *(longlong **)(param_1 + 0x440) = plVar7;
    *(longlong *)(param_1 + 0x448) = local_58;
    *(char **)(param_1 + 0x450) = local_b8;
    *(code **)(param_1 + 0x458) = local_38;
    *(code **)(param_1 + 0x460) = param_6;
    *(undefined8 *)(param_1 + 0x468) = 0x2d;
    *(char **)(param_1 + 0x470) = pcVar11;
    *(undefined8 *)(param_1 + 0x478) = 0x2d;
    *(undefined8 *)(param_1 + 0x480) = uVar20;
    *(undefined4 *)(param_1 + 0x488) = uVar17;
    *(undefined1 (*) [16])(param_1 + 0x490) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 0x4a0) = 0x10101;
    local_80 = Elf64_Ehdr_00000000.e_ident_magic_str;
    uVar20 = (*(code *)PTR_write_000c3be8)(0,8);
    if (local_d0 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar20,1);
    }
    goto LAB_00041075;
  case 0xb:
    if (*(longlong *)((longlong)plVar7 + 3) == 0x6e7275745f6c6563 && *plVar7 == 0x745f6c65636e6163)
    {
LAB_00040c55:
      lVar16 = *(longlong *)(param_1 + 0x60);
      if (lVar16 != 2) {
        (*(code *)PTR_getpid_000c3ca0)();
        (*(code *)PTR_kill_000c3ca8)();
      }
      lVar4 = *local_50;
      lVar5 = local_50[1];
      lVar6 = local_50[2];
      lVar13 = *local_60;
      if (*(longlong *)(param_1 + 0x4a8) == -1) {
        local_c0 = (char *)0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_000c3c68)();
        local_c0 = local_80;
        local_b0 = local_78;
        param_4 = local_70;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      puVar15 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
      if ((int)lVar16 == 2) {
        if (puVar15 == (undefined8 *)0x0) goto LAB_000418d0;
        *(undefined8 *)((longlong)puVar15 + 6) = 0x6e7275745f657669;
        uVar20 = 0x76697463615f6f6e;
      }
      else {
        if (puVar15 == (undefined8 *)0x0) {
LAB_000418d0:
          (*(code *)PTR_handle_error_000c3a98)();
          goto LAB_000418e0;
        }
        *(undefined8 *)((longlong)puVar15 + 6) = 0x746e65735f747075;
        uVar20 = 0x7075727265746e69;
      }
      *puVar15 = uVar20;
      uVar20 = (*(code *)PTR_now_000c3c00)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::PendingControl>>
                (param_1 + 0x420,1);
      *(longlong *)(param_1 + 0x420) = lVar4;
      *(longlong *)(param_1 + 0x428) = lVar5;
      *(longlong *)(param_1 + 0x430) = lVar6;
      *(longlong *)(param_1 + 0x438) = lVar13;
      *(longlong **)(param_1 + 0x440) = plVar7;
      *(longlong *)(param_1 + 0x448) = local_58;
      *(char **)(param_1 + 0x450) = local_c0;
      *(code **)(param_1 + 0x458) = local_b0;
      *(code **)(param_1 + 0x460) = param_4;
      *(undefined8 *)(param_1 + 0x468) = 0xe;
      *(undefined8 **)(param_1 + 0x470) = puVar15;
      *(undefined8 *)(param_1 + 0x478) = 0xe;
      *(undefined8 *)(param_1 + 0x480) = uVar20;
      *(undefined4 *)(param_1 + 0x488) = uVar17;
      *(undefined1 (*) [16])(param_1 + 0x490) = (undefined1  [16])0x0;
      *(undefined4 *)(param_1 + 0x4a0) = 0x1010101;
      local_80 = Elf64_Ehdr_00000000.e_ident_magic_str;
      (*(code *)PTR_write_000c3be8)(0,8);
      goto LAB_00041075;
    }
    break;
  case 0x10:
    auVar23[0] = -((char)*plVar7 == DAT_00008d90);
    auVar23[1] = -(*(char *)((longlong)plVar7 + 1) == UNK_00008d91);
    auVar23[2] = -(*(char *)((longlong)plVar7 + 2) == UNK_00008d92);
    auVar23[3] = -(*(char *)((longlong)plVar7 + 3) == UNK_00008d93);
    auVar23[4] = -(*(char *)((longlong)plVar7 + 4) == UNK_00008d94);
    auVar23[5] = -(*(char *)((longlong)plVar7 + 5) == UNK_00008d95);
    auVar23[6] = -(*(char *)((longlong)plVar7 + 6) == UNK_00008d96);
    auVar23[7] = -(*(char *)((longlong)plVar7 + 7) == UNK_00008d97);
    auVar23[8] = -((char)plVar7[1] == UNK_00008d98);
    auVar23[9] = -(*(char *)((longlong)plVar7 + 9) == UNK_00008d99);
    auVar23[10] = -(*(char *)((longlong)plVar7 + 10) == UNK_00008d9a);
    auVar23[0xb] = -(*(char *)((longlong)plVar7 + 0xb) == UNK_00008d9b);
    auVar23[0xc] = -(*(char *)((longlong)plVar7 + 0xc) == UNK_00008d9c);
    auVar23[0xd] = -(*(char *)((longlong)plVar7 + 0xd) == UNK_00008d9d);
    auVar23[0xe] = -(*(char *)((longlong)plVar7 + 0xe) == UNK_00008d9e);
    auVar23[0xf] = -(*(char *)((longlong)plVar7 + 0xf) == UNK_00008d9f);
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf
                ) == 0xffff) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      pcVar12 = (code *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (pcVar12 == (code *)0x0) {
LAB_000418c0:
        (*(code *)PTR_handle_error_000c3a98)();
        goto LAB_000418e0;
      }
      *(undefined2 *)(pcVar12 + 4) = 0x7261;
      *(undefined4 *)pcVar12 = 0x656c632f;
      local_d0 = 6;
      local_68 = pcVar12;
LAB_00041220:
      goto LAB_00041225;
    }
    break;
  case 0x11:
    auVar24[0] = -((char)*plVar7 == DAT_00008fd0);
    auVar24[1] = -(*(char *)((longlong)plVar7 + 1) == UNK_00008fd1);
    auVar24[2] = -(*(char *)((longlong)plVar7 + 2) == UNK_00008fd2);
    auVar24[3] = -(*(char *)((longlong)plVar7 + 3) == UNK_00008fd3);
    auVar24[4] = -(*(char *)((longlong)plVar7 + 4) == UNK_00008fd4);
    auVar24[5] = -(*(char *)((longlong)plVar7 + 5) == UNK_00008fd5);
    auVar24[6] = -(*(char *)((longlong)plVar7 + 6) == UNK_00008fd6);
    auVar24[7] = -(*(char *)((longlong)plVar7 + 7) == UNK_00008fd7);
    auVar24[8] = -((char)plVar7[1] == UNK_00008fd8);
    auVar24[9] = -(*(char *)((longlong)plVar7 + 9) == UNK_00008fd9);
    auVar24[10] = -(*(char *)((longlong)plVar7 + 10) == UNK_00008fda);
    auVar24[0xb] = -(*(char *)((longlong)plVar7 + 0xb) == UNK_00008fdb);
    auVar24[0xc] = -(*(char *)((longlong)plVar7 + 0xc) == UNK_00008fdc);
    auVar24[0xd] = -(*(char *)((longlong)plVar7 + 0xd) == UNK_00008fdd);
    auVar24[0xe] = -(*(char *)((longlong)plVar7 + 0xe) == UNK_00008fde);
    auVar24[0xf] = -(*(char *)((longlong)plVar7 + 0xf) == UNK_00008fdf);
    auVar27[0] = -((char)plVar7[2] == s_n_000091b0[0]);
    auVar27[1] = -(s_n_000091b0[1] == '\0');
    auVar27[2] = -(s_n_000091b0[2] == '\0');
    auVar27[3] = -(s_n_000091b0[3] == '\0');
    auVar27[4] = -(UNK_000091b4 == '\0');
    auVar27[5] = -(UNK_000091b5 == '\0');
    auVar27[6] = -(UNK_000091b6 == '\0');
    auVar27[7] = -(UNK_000091b7 == '\0');
    auVar27[8] = -(UNK_000091b8 == '\0');
    auVar27[9] = -(UNK_000091b9 == '\0');
    auVar27[10] = -(UNK_000091ba == '\0');
    auVar27[0xb] = -(UNK_000091bb == '\0');
    auVar27[0xc] = -(UNK_000091bc == '\0');
    auVar27[0xd] = -(UNK_000091bd == '\0');
    auVar27[0xe] = -(UNK_000091be == '\0');
    auVar27[0xf] = -(UNK_000091bf == '\0');
    auVar27 = auVar27 & auVar24;
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
      if (param_6 != (code *)0x0) {
        <str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
        uVar17 = 0;
        if (extraout_RDX != 0) {
          if (param_7 - 1 < 0x100) {
            uVar14 = 0;
            do {
              cVar3 = param_6[uVar14];
              if (((9 < (byte)((char)cVar3 - 0x30U)) && (0x19 < (byte)(((byte)cVar3 & 0xdf) + 0xbf))
                  ) && ((0x3f < (byte)cVar3 - 0x20 ||
                        ((0x800000000400e001U >> ((ulonglong)((byte)cVar3 - 0x20) & 0x3f) & 1) == 0)
                        ))) goto LAB_00041792;
              uVar14 = uVar14 + 1;
            } while (param_7 != uVar14);
            if (param_7 < 0x10) {
              uVar14 = 0;
              do {
                if (param_6[uVar14] == (code)0xa) goto LAB_00041792;
                uVar14 = uVar14 + 1;
              } while (param_7 != uVar14);
              uVar14 = 0;
              do {
                if (param_6[uVar14] == (code)0xd) goto LAB_00041792;
                uVar14 = uVar14 + 1;
              } while (param_7 != uVar14);
            }
            else {
              lVar16 = (*(code *)PTR_memchr_aligned_000c3cb0)();
              if ((lVar16 == 1) ||
                 (lVar16 = (*(code *)PTR_memchr_aligned_000c3cb0)(extraout_XMM0_Qa_02,param_7),
                 lVar16 == 1)) goto LAB_00041792;
            }
            local_48 = <str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
            local_80 = local_48;
            local_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            uVar17 = SUB84(&local_80,0);
            (*(code *)PTR_format_inner_000c3b78)();
            goto LAB_00041805;
          }
LAB_00041792:
          local_88 = 0x15;
          goto LAB_00040ee4;
        }
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      pcVar12 = (code *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (pcVar12 == (code *)0x0) goto LAB_000418c0;
      pcVar12[4] = (code)0x6b;
      *(undefined4 *)pcVar12 = 0x726f662f;
      local_d0 = 5;
      local_68 = pcVar12;
      goto LAB_00041220;
    }
    break;
  case 0x13:
    auVar25[0] = -(*(char *)((longlong)plVar7 + 3) == DAT_000091f0);
    auVar25[1] = -(*(char *)((longlong)plVar7 + 4) == UNK_000091f1);
    auVar25[2] = -(*(char *)((longlong)plVar7 + 5) == UNK_000091f2);
    auVar25[3] = -(*(char *)((longlong)plVar7 + 6) == UNK_000091f3);
    auVar25[4] = -(*(char *)((longlong)plVar7 + 7) == UNK_000091f4);
    auVar25[5] = -((char)plVar7[1] == UNK_000091f5);
    auVar25[6] = -(*(char *)((longlong)plVar7 + 9) == UNK_000091f6);
    auVar25[7] = -(*(char *)((longlong)plVar7 + 10) == UNK_000091f7);
    auVar25[8] = -(*(char *)((longlong)plVar7 + 0xb) == UNK_000091f8);
    auVar25[9] = -(*(char *)((longlong)plVar7 + 0xc) == UNK_000091f9);
    auVar25[10] = -(*(char *)((longlong)plVar7 + 0xd) == UNK_000091fa);
    auVar25[0xb] = -(*(char *)((longlong)plVar7 + 0xe) == UNK_000091fb);
    auVar25[0xc] = -(*(char *)((longlong)plVar7 + 0xf) == UNK_000091fc);
    auVar25[0xd] = -((char)plVar7[2] == UNK_000091fd);
    auVar25[0xe] = -(*(char *)((longlong)plVar7 + 0x11) == UNK_000091fe);
    auVar25[0xf] = -(*(char *)((longlong)plVar7 + 0x12) == UNK_000091ff);
    auVar21[0] = -((char)*plVar7 == DAT_00008e80);
    auVar21[1] = -(*(char *)((longlong)plVar7 + 1) == UNK_00008e81);
    auVar21[2] = -(*(char *)((longlong)plVar7 + 2) == UNK_00008e82);
    auVar21[3] = -(*(char *)((longlong)plVar7 + 3) == UNK_00008e83);
    auVar21[4] = -(*(char *)((longlong)plVar7 + 4) == UNK_00008e84);
    auVar21[5] = -(*(char *)((longlong)plVar7 + 5) == UNK_00008e85);
    auVar21[6] = -(*(char *)((longlong)plVar7 + 6) == UNK_00008e86);
    auVar21[7] = -(*(char *)((longlong)plVar7 + 7) == UNK_00008e87);
    auVar21[8] = -((char)plVar7[1] == UNK_00008e88);
    auVar21[9] = -(*(char *)((longlong)plVar7 + 9) == UNK_00008e89);
    auVar21[10] = -(*(char *)((longlong)plVar7 + 10) == UNK_00008e8a);
    auVar21[0xb] = -(*(char *)((longlong)plVar7 + 0xb) == UNK_00008e8b);
    auVar21[0xc] = -(*(char *)((longlong)plVar7 + 0xc) == UNK_00008e8c);
    auVar21[0xd] = -(*(char *)((longlong)plVar7 + 0xd) == UNK_00008e8d);
    auVar21[0xe] = -(*(char *)((longlong)plVar7 + 0xe) == UNK_00008e8e);
    auVar21[0xf] = -(*(char *)((longlong)plVar7 + 0xf) == UNK_00008e8f);
    auVar21 = auVar21 & auVar25;
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
      if (param_4 == (code *)0x0) {
      }
      else {
        param_6 = param_4;
        param_7 = param_5;
      }
      if ((param_6 != (code *)0x0) &&
         (cVar9 = agy_bridge[64a9e9deac6c45ce]::protocol::valid_id(param_6,param_7), cVar9 != '\0'))
      {
        local_80 = local_48;
        local_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        uVar17 = SUB84(&local_80,0);
        local_48._0_8_ = param_6;
        local_48._8_8_ = param_7;
        (*(code *)PTR_format_inner_000c3b78)();
        goto LAB_00041805;
      }
      local_88 = 0x2c;
      goto LAB_00040ee4;
    }
    auVar26[0] = -(*(char *)((longlong)plVar7 + 3) == DAT_00008f40);
    auVar26[1] = -(*(char *)((longlong)plVar7 + 4) == UNK_00008f41);
    auVar26[2] = -(*(char *)((longlong)plVar7 + 5) == UNK_00008f42);
    auVar26[3] = -(*(char *)((longlong)plVar7 + 6) == UNK_00008f43);
    auVar26[4] = -(*(char *)((longlong)plVar7 + 7) == UNK_00008f44);
    auVar26[5] = -((char)plVar7[1] == UNK_00008f45);
    auVar26[6] = -(*(char *)((longlong)plVar7 + 9) == UNK_00008f46);
    auVar26[7] = -(*(char *)((longlong)plVar7 + 10) == UNK_00008f47);
    auVar26[8] = -(*(char *)((longlong)plVar7 + 0xb) == UNK_00008f48);
    auVar26[9] = -(*(char *)((longlong)plVar7 + 0xc) == UNK_00008f49);
    auVar26[10] = -(*(char *)((longlong)plVar7 + 0xd) == UNK_00008f4a);
    auVar26[0xb] = -(*(char *)((longlong)plVar7 + 0xe) == UNK_00008f4b);
    auVar26[0xc] = -(*(char *)((longlong)plVar7 + 0xf) == UNK_00008f4c);
    auVar26[0xd] = -((char)plVar7[2] == UNK_00008f4d);
    auVar26[0xe] = -(*(char *)((longlong)plVar7 + 0x11) == UNK_00008f4e);
    auVar26[0xf] = -(*(char *)((longlong)plVar7 + 0x12) == UNK_00008f4f);
    auVar22[0] = -((char)*plVar7 == DAT_00008fb0);
    auVar22[1] = -(*(char *)((longlong)plVar7 + 1) == UNK_00008fb1);
    auVar22[2] = -(*(char *)((longlong)plVar7 + 2) == UNK_00008fb2);
    auVar22[3] = -(*(char *)((longlong)plVar7 + 3) == UNK_00008fb3);
    auVar22[4] = -(*(char *)((longlong)plVar7 + 4) == UNK_00008fb4);
    auVar22[5] = -(*(char *)((longlong)plVar7 + 5) == UNK_00008fb5);
    auVar22[6] = -(*(char *)((longlong)plVar7 + 6) == UNK_00008fb6);
    auVar22[7] = -(*(char *)((longlong)plVar7 + 7) == UNK_00008fb7);
    auVar22[8] = -((char)plVar7[1] == UNK_00008fb8);
    auVar22[9] = -(*(char *)((longlong)plVar7 + 9) == UNK_00008fb9);
    auVar22[10] = -(*(char *)((longlong)plVar7 + 10) == UNK_00008fba);
    auVar22[0xb] = -(*(char *)((longlong)plVar7 + 0xb) == UNK_00008fbb);
    auVar22[0xc] = -(*(char *)((longlong)plVar7 + 0xc) == UNK_00008fbc);
    auVar22[0xd] = -(*(char *)((longlong)plVar7 + 0xd) == UNK_00008fbd);
    auVar22[0xe] = -(*(char *)((longlong)plVar7 + 0xe) == UNK_00008fbe);
    auVar22[0xf] = -(*(char *)((longlong)plVar7 + 0xf) == UNK_00008fbf);
    auVar22 = auVar22 & auVar26;
    if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      pcVar12 = (code *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (pcVar12 == (code *)0x0) goto LAB_000418c0;
      *(undefined4 *)(pcVar12 + 3) = 0x646e6977;
      *(undefined4 *)pcVar12 = 0x7765722f;
      local_d0 = 7;
      local_68 = pcVar12;
      goto LAB_00041220;
    }
  }
  local_88 = 0x1f;
LAB_00040ee4:
  lVar16 = *local_50;
  lVar4 = local_50[1];
  lVar5 = local_50[2];
  lVar6 = *local_60;
  lVar13 = lVar4;
  if (*(longlong *)(param_1 + 0x4a8) == -1) {
    pcVar11 = (char *)0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_000c3c68)();
    local_b0 = local_78;
    local_68 = local_70;
    pcVar11 = local_80;
  }
  if (local_88 < 0) {
LAB_00040f51:
    (*(code *)PTR_handle_error_000c3a98)();
LAB_000418e0:
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  uVar17 = (undefined4)lVar13;
  if (local_88 == 0) {
    lVar13 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar13 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (lVar13 == 0) goto LAB_00040f51;
    lVar18 = local_88;
    (*(code *)PTR_memcpy_000c3aa8)();
    uVar17 = (undefined4)lVar18;
  }
  uVar20 = (*(code *)PTR_now_000c3c00)();
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::PendingControl>>
            (param_1 + 0x420);
  *(longlong *)(param_1 + 0x420) = lVar16;
  *(longlong *)(param_1 + 0x428) = lVar4;
  *(longlong *)(param_1 + 0x430) = lVar5;
  *(longlong *)(param_1 + 0x438) = lVar6;
  *(longlong **)(param_1 + 0x440) = plVar7;
  *(longlong *)(param_1 + 0x448) = local_58;
  *(char **)(param_1 + 0x450) = pcVar11;
  *(code **)(param_1 + 0x458) = local_b0;
  *(code **)(param_1 + 0x460) = local_68;
  *(longlong *)(param_1 + 0x468) = local_88;
  *(longlong *)(param_1 + 0x470) = lVar13;
  *(longlong *)(param_1 + 0x478) = local_88;
  *(undefined8 *)(param_1 + 0x480) = uVar20;
  *(undefined4 *)(param_1 + 0x488) = uVar17;
  *(undefined1 (*) [16])(param_1 + 0x490) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x4a0) = 0x10101;
LAB_00041075:
  if ((local_d4 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)
     ) {
    cVar9 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    if (cVar9 == '\0') {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
  }
  LOCK();
  iVar2 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = 0;
  UNLOCK();
joined_r0x00040c0c:
  if (iVar2 == 2) {
    (*(code *)PTR_wake_000c3ad0)();
  }
  return 0;
}


