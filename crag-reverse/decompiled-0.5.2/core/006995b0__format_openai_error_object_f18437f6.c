// 006995b0 format_openai_error_object

/* craggemini_core[66f3c71560d70857]::multiprotocol::format_openai_error_object */

void __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::format_openai_error_object
          (undefined1 *param_1,longlong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  short sVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  char *pcVar10;
  short *psVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char local_c0;
  undefined7 local_bf;
  char cStack_b8;
  undefined4 uStack_b7;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  char local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  ulonglong local_78;
  longlong lStack_70;
  int *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 *local_38;
  
  local_58 = 0;
  local_48 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
  *(undefined4 *)((longlong)puVar7 + 3) = 0x65676173;
  *(undefined4 *)puVar7 = 0x7373656d;
  local_a0 = 7;
  local_90 = 7;
  lVar16 = *(longlong *)(param_2 + 0x28);
  local_98 = puVar7;
  if (lVar16 < 0) {
LAB_00699633:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0069a531;
  }
  local_40 = param_2;
  if (lVar16 == 0) {
    uVar8 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar8 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar8 == 0) goto LAB_00699633;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,lVar16);
  }
  lVar12 = local_40;
  local_c0 = '\x03';
  cStack_b8 = (char)lVar16;
  uStack_b7 = (undefined4)((ulonglong)lVar16 >> 8);
  uStack_b3 = (undefined2)((ulonglong)lVar16 >> 0x28);
  uStack_b1 = (undefined1)((ulonglong)lVar16 >> 0x38);
  uStack_b0 = uVar8;
  uStack_a8 = lVar16;
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert(&local_88,&local_58,&local_a0,&local_c0);
  if (local_88 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_88);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
  *(undefined4 *)puVar7 = 0x65707974;
  local_a0 = 4;
  local_90 = 4;
  piVar14 = *(int **)(lVar12 + 0x30);
  puVar9 = (undefined2 *)(lVar12 + 0x38);
  if (piVar14 != (int *)0x0) {
    if ((char)piVar14[0x5c] != '\0') {
      puVar9 = (undefined2 *)((longlong)piVar14 + 0x172);
    }
  }
  lVar16 = 0xc;
  switch(*puVar9) {
  case 400:
  case 0x19d:
  case 0x1a6:
    lVar16 = 0x15;
    break;
  case 0x191:
    lVar16 = 0x14;
    break;
  case 0x193:
    lVar16 = 0x10;
    break;
  case 0x194:
    lVar16 = 0xf;
    break;
  case 0x199:
    lVar16 = 0xe;
    break;
  case 0x1ad:
    lVar16 = 0x10;
    if ((piVar14 != (int *)0x0) && (*(longlong *)(piVar14 + 10) != -1)) {
      plVar3 = *(longlong **)(piVar14 + 0xc);
      if (*(longlong *)(piVar14 + 0xe) == 0x1f) {
        auVar24[0] = -(*(char *)((longlong)plVar3 + 0xf) == s__CREDITS_BALANCE_00183110[0]);
        auVar24[1] = -((char)plVar3[2] == s__CREDITS_BALANCE_00183110[1]);
        auVar24[2] = -(*(char *)((longlong)plVar3 + 0x11) == s__CREDITS_BALANCE_00183110[2]);
        auVar24[3] = -(*(char *)((longlong)plVar3 + 0x12) == s__CREDITS_BALANCE_00183110[3]);
        auVar24[4] = -(*(char *)((longlong)plVar3 + 0x13) == s__CREDITS_BALANCE_00183110[4]);
        auVar24[5] = -(*(char *)((longlong)plVar3 + 0x14) == s__CREDITS_BALANCE_00183110[5]);
        auVar24[6] = -(*(char *)((longlong)plVar3 + 0x15) == s__CREDITS_BALANCE_00183110[6]);
        auVar24[7] = -(*(char *)((longlong)plVar3 + 0x16) == s__CREDITS_BALANCE_00183110[7]);
        auVar24[8] = -(*(char *)((longlong)plVar3 + 0x17) == s__CREDITS_BALANCE_00183110[8]);
        auVar24[9] = -((char)plVar3[3] == s__CREDITS_BALANCE_00183110[9]);
        auVar24[10] = -(*(char *)((longlong)plVar3 + 0x19) == s__CREDITS_BALANCE_00183110[10]);
        auVar24[0xb] = -(*(char *)((longlong)plVar3 + 0x1a) == s__CREDITS_BALANCE_00183110[0xb]);
        auVar24[0xc] = -(*(char *)((longlong)plVar3 + 0x1b) == s__CREDITS_BALANCE_00183110[0xc]);
        auVar24[0xd] = -(*(char *)((longlong)plVar3 + 0x1c) == s__CREDITS_BALANCE_00183110[0xd]);
        auVar24[0xe] = -(*(char *)((longlong)plVar3 + 0x1d) == s__CREDITS_BALANCE_00183110[0xe]);
        auVar24[0xf] = -(*(char *)((longlong)plVar3 + 0x1e) == s__CREDITS_BALANCE_00183110[0xf]);
        auVar20[0] = -((char)*plVar3 == DAT_001834a0);
        auVar20[1] = -(*(char *)((longlong)plVar3 + 1) == UNK_001834a1);
        auVar20[2] = -(*(char *)((longlong)plVar3 + 2) == UNK_001834a2);
        auVar20[3] = -(*(char *)((longlong)plVar3 + 3) == UNK_001834a3);
        auVar20[4] = -(*(char *)((longlong)plVar3 + 4) == UNK_001834a4);
        auVar20[5] = -(*(char *)((longlong)plVar3 + 5) == UNK_001834a5);
        auVar20[6] = -(*(char *)((longlong)plVar3 + 6) == UNK_001834a6);
        auVar20[7] = -(*(char *)((longlong)plVar3 + 7) == UNK_001834a7);
        auVar20[8] = -((char)plVar3[1] == UNK_001834a8);
        auVar20[9] = -(*(char *)((longlong)plVar3 + 9) == UNK_001834a9);
        auVar20[10] = -(*(char *)((longlong)plVar3 + 10) == UNK_001834aa);
        auVar20[0xb] = -(*(char *)((longlong)plVar3 + 0xb) == UNK_001834ab);
        auVar20[0xc] = -(*(char *)((longlong)plVar3 + 0xc) == UNK_001834ac);
        auVar20[0xd] = -(*(char *)((longlong)plVar3 + 0xd) == UNK_001834ad);
        auVar20[0xe] = -(*(char *)((longlong)plVar3 + 0xe) == UNK_001834ae);
        auVar20[0xf] = -(*(char *)((longlong)plVar3 + 0xf) == UNK_001834af);
        auVar20 = auVar20 & auVar24;
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0069a4f1;
      }
      else if ((*(longlong *)(piVar14 + 0xe) == 0xf) &&
              (*(longlong *)((longlong)plVar3 + 7) == 0x4445545355414858 &&
               *plVar3 == 0x58455f41544f5551)) {
LAB_0069a4f1:
        lVar16 = 0x12;
      }
    }
  }
  local_98 = puVar7;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  uVar8 = (*(code *)PTR___rust_alloc_00799000)();
  if (uVar8 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0069a531;
  }
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,lVar16);
  local_c0 = '\x03';
  cStack_b8 = (char)lVar16;
  uStack_b7 = 0;
  uStack_b3 = 0;
  uStack_b1 = 0;
  uStack_b0 = uVar8;
  uStack_a8 = lVar16;
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert(&local_88,&local_58,&local_a0,&local_c0);
  lVar16 = local_40;
  if (local_88 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_88);
  }
  local_60 = piVar14;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  uVar15 = 1;
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
  *(undefined1 *)((longlong)puVar7 + 4) = 0x6d;
  *(undefined4 *)puVar7 = 0x61726170;
  local_a0 = 5;
  local_90 = 5;
  local_98 = puVar7;
  if ((local_60 == (int *)0x0) || (*(longlong *)(local_60 + 0x16) == -1)) {
    local_c0 = '\0';
    local_78 = uStack_b0;
    lStack_70 = uStack_a8;
    local_88 = '\0';
    uStack_87 = local_bf;
    uStack_80 = cStack_b8;
    uStack_7f = uStack_b7;
    uStack_7b = uStack_b3;
    uStack_79 = uStack_b1;
  }
  else {
    uVar2 = *(undefined8 *)(local_60 + 0x18);
    lVar12 = *(longlong *)(local_60 + 0x1a);
    local_c0 = '\0';
    if (lVar12 < 0) {
LAB_006998f6:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0069a531;
    }
    local_38 = param_1;
    if (lVar12 == 0) {
      uVar8 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar8 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar8 == 0) goto LAB_006998f6;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,lVar12);
      lVar16 = local_40;
      uVar15 = uVar2;
    }
    local_88 = '\x03';
    uStack_80 = (undefined1)lVar12;
    uStack_7f = (undefined4)((ulonglong)lVar12 >> 8);
    uStack_7b = (undefined2)((ulonglong)lVar12 >> 0x28);
    uStack_79 = (undefined1)((ulonglong)lVar12 >> 0x38);
    local_78 = uVar8;
    lStack_70 = lVar12;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
              (&local_c0,uVar15);
    param_1 = local_38;
  }
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert(&local_c0,&local_58,&local_a0,&local_88);
  if (local_c0 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_c0);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
  *(undefined4 *)puVar7 = 0x65646f63;
  local_a0 = 4;
  local_90 = 4;
  local_98 = puVar7;
  cVar5 = <craggemini_core[66f3c71560d70857]::protocol::Failure>::is_context_length_exceeded
                    (lVar16,1);
  if (cVar5 != '\0') {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar15 = s_context_length_exceeded_001a50e6._8_8_;
    if (pcVar10 == (char *)0x0) goto LAB_0069a1d2;
    *(undefined8 *)pcVar10 = s_context_length_exceeded_001a50e6._0_8_;
    *(undefined8 *)(pcVar10 + 8) = uVar15;
    pcVar10[0xf] = 'e';
    pcVar10[0x10] = 'x';
    pcVar10[0x11] = 'c';
    pcVar10[0x12] = 'e';
    pcVar10[0x13] = 'e';
    pcVar10[0x14] = 'd';
    pcVar10[0x15] = 'e';
    pcVar10[0x16] = 'd';
    lVar16 = 0x17;
    goto LAB_00699a84;
  }
  if (local_60 == (int *)0x0) {
    sVar6 = *(short *)(lVar16 + 0x38);
    if (sVar6 == 0x194) goto LAB_00699d74;
LAB_00699cc1:
    if ((sVar6 != 0x1ad) || ((local_60 != (int *)0x0 && ((char)local_60[0x5d] != '\0'))))
    goto LAB_00699dab;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar10 == (char *)0x0) goto LAB_0069a1d2;
    goto LAB_0069a140;
  }
  if (*(longlong *)(local_60 + 10) == -1) {
    psVar11 = (short *)(lVar16 + 0x38);
    if ((char)local_60[0x5c] != '\0') {
      psVar11 = (short *)((longlong)local_60 + 0x172);
    }
    sVar6 = *psVar11;
    if (sVar6 != 0x194) goto LAB_00699cc1;
LAB_00699d74:
    if (*(longlong *)(lVar16 + 0x10) == 0x18) {
      pcVar10 = *(char **)(lVar16 + 8);
      uVar15 = *(undefined8 *)(pcVar10 + 0x10);
      auVar21[0] = -((char)uVar15 == s_vailable_00183b10[0]);
      auVar21[1] = -((char)((ulonglong)uVar15 >> 8) == s_vailable_00183b10[1]);
      auVar21[2] = -((char)((ulonglong)uVar15 >> 0x10) == s_vailable_00183b10[2]);
      auVar21[3] = -((char)((ulonglong)uVar15 >> 0x18) == s_vailable_00183b10[3]);
      auVar21[4] = -((char)((ulonglong)uVar15 >> 0x20) == s_vailable_00183b10[4]);
      auVar21[5] = -((char)((ulonglong)uVar15 >> 0x28) == s_vailable_00183b10[5]);
      auVar21[6] = -((char)((ulonglong)uVar15 >> 0x30) == s_vailable_00183b10[6]);
      auVar21[7] = -((char)((ulonglong)uVar15 >> 0x38) == s_vailable_00183b10[7]);
      auVar21[8] = -(s_vailable_00183b10[8] == '\0');
      auVar21[9] = -(s_vailable_00183b10[9] == '\0');
      auVar21[10] = -(s_vailable_00183b10[10] == '\0');
      auVar21[0xb] = -(s_vailable_00183b10[0xb] == '\0');
      auVar21[0xc] = -(UNK_00183b1c == '\0');
      auVar21[0xd] = -(UNK_00183b1d == '\0');
      auVar21[0xe] = -(UNK_00183b1e == '\0');
      auVar21[0xf] = -(UNK_00183b1f == '\0');
      auVar17[0] = -(*pcVar10 == s_gemini_model_una_001836a0[0]);
      auVar17[1] = -(pcVar10[1] == s_gemini_model_una_001836a0[1]);
      auVar17[2] = -(pcVar10[2] == s_gemini_model_una_001836a0[2]);
      auVar17[3] = -(pcVar10[3] == s_gemini_model_una_001836a0[3]);
      auVar17[4] = -(pcVar10[4] == s_gemini_model_una_001836a0[4]);
      auVar17[5] = -(pcVar10[5] == s_gemini_model_una_001836a0[5]);
      auVar17[6] = -(pcVar10[6] == s_gemini_model_una_001836a0[6]);
      auVar17[7] = -(pcVar10[7] == s_gemini_model_una_001836a0[7]);
      auVar17[8] = -(pcVar10[8] == s_gemini_model_una_001836a0[8]);
      auVar17[9] = -(pcVar10[9] == s_gemini_model_una_001836a0[9]);
      auVar17[10] = -(pcVar10[10] == s_gemini_model_una_001836a0[10]);
      auVar17[0xb] = -(pcVar10[0xb] == s_gemini_model_una_001836a0[0xb]);
      auVar17[0xc] = -(pcVar10[0xc] == s_gemini_model_una_001836a0[0xc]);
      auVar17[0xd] = -(pcVar10[0xd] == s_gemini_model_una_001836a0[0xd]);
      auVar17[0xe] = -(pcVar10[0xe] == s_gemini_model_una_001836a0[0xe]);
      auVar17[0xf] = -(pcVar10[0xf] == s_gemini_model_una_001836a0[0xf]);
      auVar17 = auVar17 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar7 == (undefined8 *)0x0) goto LAB_0069a1d2;
        *(undefined8 *)((longlong)puVar7 + 7) = 0x646e756f665f746f;
        *puVar7 = 0x6f6e5f6c65646f6d;
        lVar16 = 0xf;
        goto LAB_00699a84;
      }
    }
LAB_00699dab:
    lVar16 = *(longlong *)(lVar16 + 0x10);
    if (-1 < lVar16) {
      if (lVar16 == 0) {
        lVar16 = 0;
        uVar8 = 1;
        goto LAB_00699ab3;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar12 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar12 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_04,lVar16);
        goto LAB_00699a84;
      }
    }
    goto LAB_0069a1d2;
  }
  plVar3 = *(longlong **)(local_60 + 0xc);
  lVar16 = *(longlong *)(local_60 + 0xe);
  switch(lVar16) {
  case 0xf:
    if (*(longlong *)((longlong)plVar3 + 7) == 0x4445545355414858 && *plVar3 == 0x58455f41544f5551)
    {
LAB_0069a2f2:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar15 = s_insufficient_quota_001a50d4._8_8_;
      if (pcVar10 == (char *)0x0) goto LAB_0069a1d2;
      *(undefined8 *)pcVar10 = s_insufficient_quota_001a50d4._0_8_;
      *(undefined8 *)(pcVar10 + 8) = uVar15;
      pcVar10[0x10] = 't';
      pcVar10[0x11] = 'a';
      lVar16 = 0x12;
      goto LAB_00699a84;
    }
    break;
  default:
    if (lVar16 < 0) goto LAB_0069a1d2;
    if (lVar16 != 0) break;
    lVar16 = 0;
    uVar8 = 1;
    goto LAB_00699ab3;
  case 0x13:
    auVar22[0] = -(*(char *)((longlong)plVar3 + 3) == DAT_00184570);
    auVar22[1] = -(*(char *)((longlong)plVar3 + 4) == UNK_00184571);
    auVar22[2] = -(*(char *)((longlong)plVar3 + 5) == UNK_00184572);
    auVar22[3] = -(*(char *)((longlong)plVar3 + 6) == UNK_00184573);
    auVar22[4] = -(*(char *)((longlong)plVar3 + 7) == UNK_00184574);
    auVar22[5] = -((char)plVar3[1] == UNK_00184575);
    auVar22[6] = -(*(char *)((longlong)plVar3 + 9) == UNK_00184576);
    auVar22[7] = -(*(char *)((longlong)plVar3 + 10) == UNK_00184577);
    auVar22[8] = -(*(char *)((longlong)plVar3 + 0xb) == UNK_00184578);
    auVar22[9] = -(*(char *)((longlong)plVar3 + 0xc) == UNK_00184579);
    auVar22[10] = -(*(char *)((longlong)plVar3 + 0xd) == UNK_0018457a);
    auVar22[0xb] = -(*(char *)((longlong)plVar3 + 0xe) == UNK_0018457b);
    auVar22[0xc] = -(*(char *)((longlong)plVar3 + 0xf) == UNK_0018457c);
    auVar22[0xd] = -((char)plVar3[2] == UNK_0018457d);
    auVar22[0xe] = -(*(char *)((longlong)plVar3 + 0x11) == UNK_0018457e);
    auVar22[0xf] = -(*(char *)((longlong)plVar3 + 0x12) == UNK_0018457f);
    auVar18[0] = -((char)*plVar3 == DAT_00182950);
    auVar18[1] = -(*(char *)((longlong)plVar3 + 1) == UNK_00182951);
    auVar18[2] = -(*(char *)((longlong)plVar3 + 2) == UNK_00182952);
    auVar18[3] = -(*(char *)((longlong)plVar3 + 3) == UNK_00182953);
    auVar18[4] = -(*(char *)((longlong)plVar3 + 4) == UNK_00182954);
    auVar18[5] = -(*(char *)((longlong)plVar3 + 5) == UNK_00182955);
    auVar18[6] = -(*(char *)((longlong)plVar3 + 6) == UNK_00182956);
    auVar18[7] = -(*(char *)((longlong)plVar3 + 7) == UNK_00182957);
    auVar18[8] = -((char)plVar3[1] == UNK_00182958);
    auVar18[9] = -(*(char *)((longlong)plVar3 + 9) == UNK_00182959);
    auVar18[10] = -(*(char *)((longlong)plVar3 + 10) == UNK_0018295a);
    auVar18[0xb] = -(*(char *)((longlong)plVar3 + 0xb) == UNK_0018295b);
    auVar18[0xc] = -(*(char *)((longlong)plVar3 + 0xc) == UNK_0018295c);
    auVar18[0xd] = -(*(char *)((longlong)plVar3 + 0xd) == UNK_0018295d);
    auVar18[0xe] = -(*(char *)((longlong)plVar3 + 0xe) == UNK_0018295e);
    auVar18[0xf] = -(*(char *)((longlong)plVar3 + 0xf) == UNK_0018295f);
    goto LAB_0069a100;
  case 0x18:
    lVar12 = plVar3[2];
    auVar22[0] = -((char)lVar12 == s_XHAUSTED_00183790[0]);
    auVar22[1] = -((char)((ulonglong)lVar12 >> 8) == s_XHAUSTED_00183790[1]);
    auVar22[2] = -((char)((ulonglong)lVar12 >> 0x10) == s_XHAUSTED_00183790[2]);
    auVar22[3] = -((char)((ulonglong)lVar12 >> 0x18) == s_XHAUSTED_00183790[3]);
    auVar22[4] = -((char)((ulonglong)lVar12 >> 0x20) == s_XHAUSTED_00183790[4]);
    auVar22[5] = -((char)((ulonglong)lVar12 >> 0x28) == s_XHAUSTED_00183790[5]);
    auVar22[6] = -((char)((ulonglong)lVar12 >> 0x30) == s_XHAUSTED_00183790[6]);
    auVar22[7] = -((char)((ulonglong)lVar12 >> 0x38) == s_XHAUSTED_00183790[7]);
    auVar22[8] = -(s_XHAUSTED_00183790[8] == '\0');
    auVar22[9] = -(UNK_00183799 == '\0');
    auVar22[10] = -(UNK_0018379a == '\0');
    auVar22[0xb] = -(UNK_0018379b == '\0');
    auVar22[0xc] = -(UNK_0018379c == '\0');
    auVar22[0xd] = -(UNK_0018379d == '\0');
    auVar22[0xe] = -(UNK_0018379e == '\0');
    auVar22[0xf] = -(UNK_0018379f == '\0');
    auVar18[0] = -((char)*plVar3 == DAT_00184560);
    auVar18[1] = -(*(char *)((longlong)plVar3 + 1) == UNK_00184561);
    auVar18[2] = -(*(char *)((longlong)plVar3 + 2) == UNK_00184562);
    auVar18[3] = -(*(char *)((longlong)plVar3 + 3) == UNK_00184563);
    auVar18[4] = -(*(char *)((longlong)plVar3 + 4) == UNK_00184564);
    auVar18[5] = -(*(char *)((longlong)plVar3 + 5) == UNK_00184565);
    auVar18[6] = -(*(char *)((longlong)plVar3 + 6) == UNK_00184566);
    auVar18[7] = -(*(char *)((longlong)plVar3 + 7) == UNK_00184567);
    auVar18[8] = -((char)plVar3[1] == UNK_00184568);
    auVar18[9] = -(*(char *)((longlong)plVar3 + 9) == UNK_00184569);
    auVar18[10] = -(*(char *)((longlong)plVar3 + 10) == UNK_0018456a);
    auVar18[0xb] = -(*(char *)((longlong)plVar3 + 0xb) == UNK_0018456b);
    auVar18[0xc] = -(*(char *)((longlong)plVar3 + 0xc) == UNK_0018456c);
    auVar18[0xd] = -(*(char *)((longlong)plVar3 + 0xd) == UNK_0018456d);
    auVar18[0xe] = -(*(char *)((longlong)plVar3 + 0xe) == UNK_0018456e);
    auVar18[0xf] = -(*(char *)((longlong)plVar3 + 0xf) == UNK_0018456f);
LAB_0069a100:
    auVar18 = auVar18 & auVar22;
    if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) != 0xffff) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar10 == (char *)0x0) goto LAB_0069a1d2;
LAB_0069a140:
    uVar15 = s_rate_limit_exceeded_001a50c1._8_8_;
    *(undefined8 *)pcVar10 = s_rate_limit_exceeded_001a50c1._0_8_;
    *(undefined8 *)(pcVar10 + 8) = uVar15;
    pcVar10[0xf] = 'e';
    pcVar10[0x10] = 'd';
    pcVar10[0x11] = 'e';
    pcVar10[0x12] = 'd';
    lVar16 = 0x13;
    goto LAB_00699a84;
  case 0x1f:
    auVar23[0] = -(*(char *)((longlong)plVar3 + 0xf) == s__CREDITS_BALANCE_00183110[0]);
    auVar23[1] = -((char)plVar3[2] == s__CREDITS_BALANCE_00183110[1]);
    auVar23[2] = -(*(char *)((longlong)plVar3 + 0x11) == s__CREDITS_BALANCE_00183110[2]);
    auVar23[3] = -(*(char *)((longlong)plVar3 + 0x12) == s__CREDITS_BALANCE_00183110[3]);
    auVar23[4] = -(*(char *)((longlong)plVar3 + 0x13) == s__CREDITS_BALANCE_00183110[4]);
    auVar23[5] = -(*(char *)((longlong)plVar3 + 0x14) == s__CREDITS_BALANCE_00183110[5]);
    auVar23[6] = -(*(char *)((longlong)plVar3 + 0x15) == s__CREDITS_BALANCE_00183110[6]);
    auVar23[7] = -(*(char *)((longlong)plVar3 + 0x16) == s__CREDITS_BALANCE_00183110[7]);
    auVar23[8] = -(*(char *)((longlong)plVar3 + 0x17) == s__CREDITS_BALANCE_00183110[8]);
    auVar23[9] = -((char)plVar3[3] == s__CREDITS_BALANCE_00183110[9]);
    auVar23[10] = -(*(char *)((longlong)plVar3 + 0x19) == s__CREDITS_BALANCE_00183110[10]);
    auVar23[0xb] = -(*(char *)((longlong)plVar3 + 0x1a) == s__CREDITS_BALANCE_00183110[0xb]);
    auVar23[0xc] = -(*(char *)((longlong)plVar3 + 0x1b) == s__CREDITS_BALANCE_00183110[0xc]);
    auVar23[0xd] = -(*(char *)((longlong)plVar3 + 0x1c) == s__CREDITS_BALANCE_00183110[0xd]);
    auVar23[0xe] = -(*(char *)((longlong)plVar3 + 0x1d) == s__CREDITS_BALANCE_00183110[0xe]);
    auVar23[0xf] = -(*(char *)((longlong)plVar3 + 0x1e) == s__CREDITS_BALANCE_00183110[0xf]);
    auVar19[0] = -((char)*plVar3 == DAT_001834a0);
    auVar19[1] = -(*(char *)((longlong)plVar3 + 1) == UNK_001834a1);
    auVar19[2] = -(*(char *)((longlong)plVar3 + 2) == UNK_001834a2);
    auVar19[3] = -(*(char *)((longlong)plVar3 + 3) == UNK_001834a3);
    auVar19[4] = -(*(char *)((longlong)plVar3 + 4) == UNK_001834a4);
    auVar19[5] = -(*(char *)((longlong)plVar3 + 5) == UNK_001834a5);
    auVar19[6] = -(*(char *)((longlong)plVar3 + 6) == UNK_001834a6);
    auVar19[7] = -(*(char *)((longlong)plVar3 + 7) == UNK_001834a7);
    auVar19[8] = -((char)plVar3[1] == UNK_001834a8);
    auVar19[9] = -(*(char *)((longlong)plVar3 + 9) == UNK_001834a9);
    auVar19[10] = -(*(char *)((longlong)plVar3 + 10) == UNK_001834aa);
    auVar19[0xb] = -(*(char *)((longlong)plVar3 + 0xb) == UNK_001834ab);
    auVar19[0xc] = -(*(char *)((longlong)plVar3 + 0xc) == UNK_001834ac);
    auVar19[0xd] = -(*(char *)((longlong)plVar3 + 0xd) == UNK_001834ad);
    auVar19[0xe] = -(*(char *)((longlong)plVar3 + 0xe) == UNK_001834ae);
    auVar19[0xf] = -(*(char *)((longlong)plVar3 + 0xf) == UNK_001834af);
    auVar19 = auVar19 & auVar23;
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0069a2f2;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar12 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar12 == 0) {
LAB_0069a1d2:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0069a531;
  }
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_07,lVar16);
LAB_00699a84:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  uVar8 = (*(code *)PTR___rust_alloc_00799000)();
  if (uVar8 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0069a531;
  }
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_02,lVar16);
LAB_00699ab3:
  local_c0 = '\x03';
  cStack_b8 = (char)lVar16;
  uStack_b7 = (undefined4)((ulonglong)lVar16 >> 8);
  uStack_b3 = (undefined2)((ulonglong)lVar16 >> 0x28);
  uStack_b1 = (undefined1)((ulonglong)lVar16 >> 0x38);
  uStack_b0 = uVar8;
  uStack_a8 = lVar16;
  uVar15 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
           ::insert(&local_88,&local_58,&local_a0,&local_c0);
  if (local_88 != -1) {
    uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                       (&local_88);
  }
  if (lVar16 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
  }
  if (local_60 == (int *)0x0) goto LAB_0069a446;
  piVar14 = local_60;
  if ((short)local_60[0x5c] == 1) {
    uVar1 = *(ushort *)((longlong)local_60 + 0x172);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)puVar7 + 7) = 0x7375746174735f6d;
      *puVar7 = 0x6d61657274737075;
      local_a0 = 0xf;
      local_90 = 0xf;
      local_c0 = '\x02';
      cStack_b8 = 0;
      uStack_b7 = 0;
      uStack_b3 = 0;
      uStack_b1 = 0;
      uStack_b0 = (ulonglong)uVar1;
      local_98 = puVar7;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_58,&local_a0,&local_c0);
      piVar14 = local_60;
      if (local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
      goto LAB_00699bc3;
    }
  }
  else {
LAB_00699bc3:
    if (*(longlong *)(piVar14 + 4) != -1) {
      lVar16 = *(longlong *)(piVar14 + 8);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
      *puVar7 = 0x6174735f63707267;
      *(undefined4 *)((longlong)puVar7 + 7) = 0x73757461;
      local_a0 = 0xb;
      local_90 = 0xb;
      local_98 = puVar7;
      if (lVar16 < 0) {
LAB_00699c35:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069a531;
      }
      if (lVar16 == 0) {
        uVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar8 == 0) goto LAB_00699c35;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,lVar16);
      }
      local_c0 = '\x03';
      cStack_b8 = (char)lVar16;
      uStack_b7 = (undefined4)((ulonglong)lVar16 >> 8);
      uStack_b3 = (undefined2)((ulonglong)lVar16 >> 0x28);
      uStack_b1 = (undefined1)((ulonglong)lVar16 >> 0x38);
      uStack_b0 = uVar8;
      uStack_a8 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_58,&local_a0,&local_c0);
      piVar14 = local_60;
      if (local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
    }
    if (*(longlong *)(piVar14 + 10) != -1) {
      lVar16 = *(longlong *)(piVar14 + 0xe);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
      *(undefined8 *)((longlong)puVar7 + 7) = 0x6e6f736165725f6d;
      *puVar7 = 0x6d61657274737075;
      local_a0 = 0xf;
      local_90 = 0xf;
      local_98 = puVar7;
      if (lVar16 < 0) {
LAB_00699eb9:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069a531;
      }
      if (lVar16 == 0) {
        uVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar8 == 0) goto LAB_00699eb9;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_05,lVar16);
      }
      local_c0 = '\x03';
      cStack_b8 = (char)lVar16;
      uStack_b7 = (undefined4)((ulonglong)lVar16 >> 8);
      uStack_b3 = (undefined2)((ulonglong)lVar16 >> 0x28);
      uStack_b1 = (undefined1)((ulonglong)lVar16 >> 0x38);
      uStack_b0 = uVar8;
      uStack_a8 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_58,&local_a0,&local_c0);
      piVar14 = local_60;
      if (local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
    }
    if (*piVar14 == 1) {
      uVar8 = *(ulonglong *)(piVar14 + 2);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
      *(undefined8 *)((longlong)puVar7 + 6) = 0x736d5f7265746661;
      *puVar7 = 0x66615f7972746572;
      local_a0 = 0xe;
      local_90 = 0xe;
      local_c0 = '\x02';
      cStack_b8 = 0;
      uStack_b7 = 0;
      uStack_b3 = 0;
      uStack_b1 = 0;
      uStack_b0 = uVar8;
      local_98 = puVar7;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_58,&local_a0,&local_c0);
      piVar14 = local_60;
      if (local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
    }
    if (*(longlong *)(piVar14 + 0x34) != -1) {
      lVar16 = *(longlong *)(piVar14 + 0x38);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
      *(undefined8 *)((longlong)puVar7 + 6) = 0x6c72755f6e6f6974;
      *puVar7 = 0x69746164696c6176;
      local_a0 = 0xe;
      local_90 = 0xe;
      local_98 = puVar7;
      if (lVar16 < 0) {
LAB_0069a06a:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069a531;
      }
      if (lVar16 == 0) {
        uVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar8 == 0) goto LAB_0069a06a;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_06,lVar16);
      }
      local_c0 = '\x03';
      cStack_b8 = (char)lVar16;
      uStack_b7 = (undefined4)((ulonglong)lVar16 >> 8);
      uStack_b3 = (undefined2)((ulonglong)lVar16 >> 0x28);
      uStack_b1 = (undefined1)((ulonglong)lVar16 >> 0x38);
      uStack_b0 = uVar8;
      uStack_a8 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_58,&local_a0,&local_c0);
      piVar14 = local_60;
      if (local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
    }
    if (*(longlong *)(piVar14 + 0x22) != -1) {
      lVar16 = *(longlong *)(piVar14 + 0x26);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) goto LAB_0069a503;
      *(undefined8 *)((longlong)puVar7 + 6) = 0x74615f7465736572;
      *puVar7 = 0x65725f61746f7571;
      local_a0 = 0xe;
      local_90 = 0xe;
      local_98 = puVar7;
      if (lVar16 < 0) {
LAB_0069a2a9:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0069a531;
      }
      if (lVar16 == 0) {
        uVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar8 == 0) goto LAB_0069a2a9;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_08,lVar16);
      }
      local_c0 = '\x03';
      cStack_b8 = (char)lVar16;
      uStack_b7 = (undefined4)((ulonglong)lVar16 >> 8);
      uStack_b3 = (undefined2)((ulonglong)lVar16 >> 0x28);
      uStack_b1 = (undefined1)((ulonglong)lVar16 >> 0x38);
      uStack_b0 = uVar8;
      uStack_a8 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_58,&local_a0,&local_c0);
      piVar14 = local_60;
      if (local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
    }
    if (*(longlong *)(piVar14 + 0x46) == -1) {
LAB_0069a446:
      *(undefined8 *)(param_1 + 0x18) = local_48;
      *(undefined8 *)(param_1 + 8) = local_58;
      *(undefined8 *)(param_1 + 0x10) = uStack_50;
      *param_1 = 5;
      return;
    }
    uVar15 = *(undefined8 *)(piVar14 + 0x48);
    uVar2 = *(undefined8 *)(piVar14 + 0x4a);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar13 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar13 != (undefined4 *)0x0) {
      *(undefined4 *)((longlong)puVar13 + 3) = 0x736c6961;
      *puVar13 = 0x61746564;
      local_a0 = 7;
      local_90 = 7;
      local_98 = (undefined8 *)puVar13;
      <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
      <alloc[12e961f32105355]::alloc::Global>(&local_88,uVar15,uVar2);
      uStack_a8 = local_78;
      uStack_b0 = CONCAT17(uStack_79,CONCAT25(uStack_7b,CONCAT41(uStack_7f,uStack_80)));
      cStack_b8 = local_88;
      uStack_b7 = (undefined4)uStack_87;
      uStack_b3 = (undefined2)((uint7)uStack_87 >> 0x20);
      uStack_b1 = (undefined1)((uint7)uStack_87 >> 0x30);
      local_c0 = '\x04';
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_58,&local_a0,&local_c0);
      if (local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
      goto LAB_0069a446;
    }
  }
LAB_0069a503:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0069a531:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


