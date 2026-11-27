// 006305e0 extract_body_conversation_hints

/* craggemini_core[66f3c71560d70857]::server::extract_body_conversation_hints */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::server::extract_body_conversation_hints
          (longlong *param_1,char *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong extraout_RDX;
  char *extraout_RDX_00;
  char *extraout_RDX_01;
  char *extraout_RDX_02;
  char *extraout_RDX_03;
  ulonglong uVar11;
  char *extraout_RDX_04;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  char *pcVar16;
  char *unaff_R12;
  char *unaff_R13;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_03;
  longlong local_a8;
  longlong local_a0;
  longlong local_80;
  char *local_70;
  char *local_68;
  char *local_60;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong local_38;
  
  if (*param_2 != '\x05') {
    *param_1 = -1;
    param_1[3] = -1;
    return param_1;
  }
  lVar9 = *(longlong *)(param_2 + 8);
  if (lVar9 != 0) {
    local_a0 = *(longlong *)(param_2 + 0x10);
    lVar20 = lVar9;
    while( true ) {
      uVar19 = (ulonglong)*(ushort *)(lVar20 + 0x272);
      uVar8 = (ulonglong)((uint)*(ushort *)(lVar20 + 0x272) * 8);
      lVar12 = uVar8 * 3;
      uVar18 = 0xffffffffffffffff;
      pcVar16 = (char *)(lVar20 + 0x168);
      unaff_R12 = (char *)(lVar20 + -8);
      do {
        pcVar6 = unaff_R12;
        if (lVar12 == 0) {
          unaff_R12 = pcVar6;
          goto LAB_006306c5;
        }
        unaff_R13 = pcVar16 + 0x18;
        uVar10 = *(ulonglong *)(pcVar16 + 0x10);
        lVar15 = uVar10 - 0x14;
        if (0x13 < uVar10) {
          uVar10 = 0x14;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar10);
        lVar15 = -lVar15;
        if (iVar5 != 0) {
          lVar15 = (longlong)iVar5;
        }
        bVar7 = (0 < lVar15) - (lVar15 < 0);
        uVar8 = (ulonglong)bVar7;
        unaff_R12 = pcVar6 + 0x20;
        uVar18 = uVar18 + 1;
        lVar12 = lVar12 + -0x18;
        pcVar16 = unaff_R13;
      } while (bVar7 == 1);
      uVar19 = uVar18;
      if (bVar7 == 0) break;
LAB_006306c5:
      bVar21 = local_a0 == 0;
      local_a0 = local_a0 + -1;
      if (bVar21) goto LAB_00630725;
      lVar20 = *(longlong *)(lVar20 + 0x278 + uVar19 * 8);
    }
    if ((pcVar6[8] == '\x03') &&
       (::<str>::trim_matches::<<char>::is_whitespace>
                  (*(undefined8 *)(pcVar6 + 0x18),*(undefined8 *)unaff_R12),
       0xffffffffffffff7f < extraout_RDX - 0x81U)) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar20 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar20 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0063118c;
      }
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,extraout_RDX);
      lStack_48 = lVar20;
      local_38 = lVar20;
      lVar20 = extraout_RDX;
      local_40 = extraout_RDX;
      goto joined_r0x0063087d;
    }
  }
LAB_00630725:
  local_50 = -1;
  lVar20 = local_50;
joined_r0x0063087d:
  local_50 = lVar20;
  if (lVar9 != 0) {
    local_a0 = *(longlong *)(param_2 + 0x10);
    unaff_R13 = "convers";
    lVar12 = lVar9;
    local_58 = local_a0;
    do {
      uVar1 = *(ushort *)(lVar12 + 0x272);
      pcVar16 = (char *)(lVar12 + -0x20);
      uVar8 = (ulonglong)((uint)uVar1 * 8);
      lVar15 = uVar8 * 3;
      uVar19 = 0xffffffffffffffff;
      pcVar6 = (char *)(lVar12 + 0x168);
      do {
        if (lVar15 == 0) {
          uVar19 = (ulonglong)uVar1;
          goto LAB_00630809;
        }
        unaff_R12 = pcVar6 + 0x18;
        uVar18 = *(ulonglong *)(pcVar6 + 0x10);
        lVar17 = uVar18 - 0xf;
        if (0xe < uVar18) {
          uVar18 = 0xf;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar18);
        lVar17 = -lVar17;
        if (iVar5 != 0) {
          lVar17 = (longlong)iVar5;
        }
        bVar7 = (0 < lVar17) - (lVar17 < 0);
        uVar8 = (ulonglong)bVar7;
        pcVar16 = pcVar16 + 0x20;
        uVar19 = uVar19 + 1;
        lVar15 = lVar15 + -0x18;
        pcVar6 = unaff_R12;
      } while (bVar7 == 1);
      if (bVar7 == 0) goto LAB_0063094b;
LAB_00630809:
      bVar21 = local_a0 == 0;
      local_a0 = local_a0 + -1;
      if (bVar21) goto LAB_00630888;
      lVar12 = *(longlong *)(lVar12 + 0x278 + uVar19 * 8);
    } while( true );
  }
LAB_00630972:
  if (lVar20 == -1) {
    local_70 = (char *)0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    if (local_70 != (char *)0xffffffffffffffff) {
      pcVar16 = local_70;
      unaff_R12 = local_68;
      unaff_R13 = local_60;
      goto LAB_0063113b;
    }
  }
  if (lVar9 != 0) {
    local_80 = *(longlong *)(param_2 + 0x10);
    lVar20 = lVar9;
    local_a0 = local_80;
    do {
      uVar19 = (ulonglong)*(ushort *)(lVar20 + 0x272);
      pcVar16 = (char *)(lVar20 + -0x20);
      uVar8 = (ulonglong)((uint)*(ushort *)(lVar20 + 0x272) * 8);
      lVar12 = uVar8 * 3;
      uVar18 = 0xffffffffffffffff;
      lVar15 = lVar20 + 0x168;
      do {
        if (lVar12 == 0) goto LAB_00630a74;
        uVar10 = *(ulonglong *)(lVar15 + 0x10);
        lVar17 = uVar10 - 10;
        if (9 < uVar10) {
          uVar10 = 10;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar10);
        unaff_R13 = (char *)-lVar17;
        if (iVar5 != 0) {
          unaff_R13 = (char *)(longlong)iVar5;
        }
        bVar7 = (0 < (longlong)unaff_R13) - ((longlong)unaff_R13 < 0);
        uVar8 = (ulonglong)bVar7;
        pcVar16 = pcVar16 + 0x20;
        uVar18 = uVar18 + 1;
        lVar12 = lVar12 + -0x18;
        lVar15 = lVar15 + 0x18;
      } while (bVar7 == 1);
      uVar19 = uVar18;
      if (bVar7 == 0) goto LAB_00630ba3;
LAB_00630a74:
      bVar21 = local_a0 == 0;
      local_a0 = local_a0 + -1;
      if (bVar21) goto LAB_00630ad5;
      lVar20 = *(longlong *)(lVar20 + 0x278 + uVar19 * 8);
    } while( true );
  }
  pcVar16 = (char *)0xffffffffffffffff;
  goto LAB_0063113b;
LAB_00630888:
  unaff_R13 = "conversationId";
  lVar12 = lVar9;
  do {
    uVar19 = (ulonglong)*(ushort *)(lVar12 + 0x272);
    pcVar16 = (char *)(lVar12 + -0x20);
    uVar8 = (ulonglong)((uint)*(ushort *)(lVar12 + 0x272) * 8);
    unaff_R12 = (char *)(uVar8 * 3);
    uVar18 = 0xffffffffffffffff;
    lVar15 = lVar12 + 0x168;
    do {
      if (unaff_R12 == (char *)0x0) {
        unaff_R12 = (char *)0x0;
        goto LAB_00630921;
      }
      uVar10 = *(ulonglong *)(lVar15 + 0x10);
      lVar17 = uVar10 - 0xe;
      if (0xd < uVar10) {
        uVar10 = 0xe;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar10);
      lVar17 = -lVar17;
      if (iVar5 != 0) {
        lVar17 = (longlong)iVar5;
      }
      bVar7 = (0 < lVar17) - (lVar17 < 0);
      uVar8 = (ulonglong)bVar7;
      pcVar16 = pcVar16 + 0x20;
      uVar18 = uVar18 + 1;
      unaff_R12 = unaff_R12 + -0x18;
      lVar15 = lVar15 + 0x18;
    } while (bVar7 == 1);
    uVar19 = uVar18;
    if (bVar7 == 0) break;
LAB_00630921:
    if (local_58 == 0) goto LAB_00630972;
    lVar12 = *(longlong *)(lVar12 + 0x278 + uVar19 * 8);
    local_58 = local_58 + -1;
  } while( true );
LAB_0063094b:
  if ((*pcVar16 != '\x03') ||
     (::<str>::trim_matches::<<char>::is_whitespace>
                (*(undefined8 *)(pcVar16 + 0x10),*(undefined8 *)(pcVar16 + 0x18)),
     extraout_RDX_00 + -0x81 < (char *)0xffffffffffffff80)) goto LAB_00630972;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar16 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  unaff_R13 = extraout_RDX_00;
  uVar22 = extraout_XMM0_Da_00;
  if (pcVar16 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0063119a;
  }
  goto LAB_00630d17;
LAB_00630ad5:
  lVar20 = lVar9;
  local_a0 = local_80;
  do {
    uVar1 = *(ushort *)(lVar20 + 0x272);
    pcVar16 = (char *)(lVar20 + -0x20);
    uVar8 = (ulonglong)((uint)uVar1 * 8);
    lVar12 = uVar8 * 3;
    uVar19 = 0xffffffffffffffff;
    lVar15 = lVar20 + 0x168;
    do {
      if (lVar12 == 0) {
        uVar19 = (ulonglong)uVar1;
        goto LAB_00630b81;
      }
      uVar18 = *(ulonglong *)(lVar15 + 0x10);
      lVar17 = uVar18 - 9;
      if (8 < uVar18) {
        uVar18 = 9;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar18);
      unaff_R13 = (char *)-lVar17;
      if (iVar5 != 0) {
        unaff_R13 = (char *)(longlong)iVar5;
      }
      bVar7 = (0 < (longlong)unaff_R13) - ((longlong)unaff_R13 < 0);
      uVar8 = (ulonglong)bVar7;
      pcVar16 = pcVar16 + 0x20;
      uVar19 = uVar19 + 1;
      lVar12 = lVar12 + -0x18;
      lVar15 = lVar15 + 0x18;
    } while (bVar7 == 1);
    if (bVar7 == 0) goto LAB_00630ba3;
LAB_00630b81:
    bVar21 = local_a0 == 0;
    local_a0 = local_a0 + -1;
    if (bVar21) goto LAB_00630bca;
    lVar20 = *(longlong *)(lVar20 + 0x278 + uVar19 * 8);
  } while( true );
LAB_00630d4e:
  uVar19 = (ulonglong)*(ushort *)(lVar20 + 0x272);
  uVar8 = (ulonglong)((uint)*(ushort *)(lVar20 + 0x272) * 8);
  lVar12 = uVar8 * 3;
  uVar18 = 0xffffffffffffffff;
  lVar15 = lVar20 + 0x168;
  puVar3 = (undefined8 *)(lVar20 + -8);
  do {
    puVar13 = puVar3;
    if (lVar12 == 0) goto LAB_00630de1;
    uVar10 = *(ulonglong *)(lVar15 + 0x10);
    lVar17 = uVar10 - 2;
    if (1 < uVar10) {
      uVar10 = 2;
    }
    iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar10);
    unaff_R13 = (char *)-lVar17;
    if (iVar5 != 0) {
      unaff_R13 = (char *)(longlong)iVar5;
    }
    bVar7 = (0 < (longlong)unaff_R13) - ((longlong)unaff_R13 < 0);
    uVar8 = (ulonglong)bVar7;
    uVar18 = uVar18 + 1;
    lVar12 = lVar12 + -0x18;
    lVar15 = lVar15 + 0x18;
    puVar3 = puVar13 + 4;
  } while (bVar7 == 1);
  uVar19 = uVar18;
  if (bVar7 == 0) {
    if ((*(char *)(puVar13 + 1) == '\x03') &&
       (::<str>::trim_matches::<<char>::is_whitespace>(puVar13[3],puVar13[4]),
       (char *)0xffffffffffffff7f < extraout_RDX_03 + -0x81)) {
      uVar22 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                         (&local_70,extraout_RDX_03,0,1,1);
      if ((int)local_70 == 1) goto LAB_00631170;
      (*(code *)PTR_memcpy_00799008)(uVar22,extraout_RDX_03);
      unaff_R13 = extraout_RDX_03;
      goto LAB_00631136;
    }
    goto LAB_00630e96;
  }
LAB_00630de1:
  bVar21 = local_a0 == 0;
  local_a0 = local_a0 + -1;
  if (bVar21) goto LAB_00630e96;
  lVar20 = *(longlong *)(lVar20 + 0x278 + uVar19 * 8);
  goto LAB_00630d4e;
LAB_00630f60:
  uVar19 = (ulonglong)*(ushort *)(lVar20 + 0x272);
  unaff_R13 = (char *)(lVar20 + -0x20);
  uVar8 = (ulonglong)((uint)*(ushort *)(lVar20 + 0x272) * 8);
  lVar12 = uVar8 * 3;
  uVar18 = 0xffffffffffffffff;
  lVar15 = lVar20 + 0x168;
  do {
    if (lVar12 == 0) goto LAB_00630ff4;
    uVar10 = *(ulonglong *)(lVar15 + 0x10);
    lVar17 = uVar10 - 10;
    if (9 < uVar10) {
      uVar10 = 10;
    }
    iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar10);
    lVar17 = -lVar17;
    if (iVar5 != 0) {
      lVar17 = (longlong)iVar5;
    }
    bVar7 = (0 < lVar17) - (lVar17 < 0);
    uVar8 = (ulonglong)bVar7;
    unaff_R13 = unaff_R13 + 0x20;
    uVar18 = uVar18 + 1;
    lVar12 = lVar12 + -0x18;
    lVar15 = lVar15 + 0x18;
  } while (bVar7 == 1);
  uVar19 = uVar18;
  if (bVar7 == 0) goto LAB_006310d4;
LAB_00630ff4:
  bVar21 = local_a8 == 0;
  local_a8 = local_a8 + -1;
  if (bVar21) goto LAB_00631019;
  lVar20 = *(longlong *)(lVar20 + 0x278 + uVar19 * 8);
  goto LAB_00630f60;
LAB_00631019:
  pcVar16 = "convers";
  do {
    uVar1 = *(ushort *)(lVar9 + 0x272);
    unaff_R13 = (char *)(lVar9 + -0x20);
    uVar8 = (ulonglong)((uint)uVar1 * 8);
    lVar20 = uVar8 * 3;
    uVar19 = 0xffffffffffffffff;
    lVar12 = lVar9 + 0x168;
    do {
      if (lVar20 == 0) {
        uVar19 = (ulonglong)uVar1;
        goto LAB_006310b2;
      }
      uVar18 = *(ulonglong *)(lVar12 + 0x10);
      lVar15 = uVar18 - 0xf;
      if (0xe < uVar18) {
        uVar18 = 0xf;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar18);
      lVar15 = -lVar15;
      if (iVar5 != 0) {
        lVar15 = (longlong)iVar5;
      }
      bVar7 = (0 < lVar15) - (lVar15 < 0);
      uVar8 = (ulonglong)bVar7;
      unaff_R13 = unaff_R13 + 0x20;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + -0x18;
      lVar12 = lVar12 + 0x18;
    } while (bVar7 == 1);
    if (bVar7 == 0) break;
LAB_006310b2:
    bVar21 = local_80 == 0;
    local_80 = local_80 + -1;
    local_60 = pcVar16;
    if (bVar21) goto LAB_0063112f;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar19 * 8);
  } while( true );
LAB_006310d4:
  local_68 = (char *)0xffffffffffffffff;
  local_60 = pcVar16;
  if ((*unaff_R13 == '\x03') &&
     (::<str>::trim_matches::<<char>::is_whitespace>
                (*(undefined8 *)(unaff_R13 + 0x10),*(undefined8 *)(unaff_R13 + 0x18)),
     (char *)0xffffffffffffff7f < extraout_RDX_04 + -0x81)) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar16 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    unaff_R13 = extraout_RDX_04;
    uVar22 = extraout_XMM0_Da_03;
    if (pcVar16 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0063119a;
    }
    goto LAB_00630d17;
  }
  goto LAB_00631136;
LAB_0063112f:
  local_68 = (char *)0xffffffffffffffff;
  goto LAB_00631136;
LAB_00631170:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0063119a:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
LAB_00630ba3:
  if ((*pcVar16 != '\x03') ||
     (::<str>::trim_matches::<<char>::is_whitespace>
                (*(undefined8 *)(pcVar16 + 0x10),*(undefined8 *)(pcVar16 + 0x18)),
     extraout_RDX_01 + -0x81 < (char *)0xffffffffffffff80)) {
LAB_00630bca:
    lVar20 = lVar9;
    local_a0 = local_80;
    while( true ) {
      uVar19 = (ulonglong)*(ushort *)(lVar20 + 0x272);
      uVar8 = (ulonglong)((uint)*(ushort *)(lVar20 + 0x272) * 8);
      lVar12 = uVar8 * 3;
      uVar18 = 0xffffffffffffffff;
      pcVar16 = (char *)(lVar20 + 0x168);
      puVar3 = (undefined8 *)(lVar20 + -8);
      do {
        puVar13 = puVar3;
        if (lVar12 == 0) goto LAB_00630c71;
        unaff_R13 = pcVar16 + 0x18;
        uVar10 = *(ulonglong *)(pcVar16 + 0x10);
        lVar15 = uVar10 - 0xc;
        if (0xb < uVar10) {
          uVar10 = 0xc;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar10);
        lVar15 = -lVar15;
        if (iVar5 != 0) {
          lVar15 = (longlong)iVar5;
        }
        bVar7 = (0 < lVar15) - (lVar15 < 0);
        uVar8 = (ulonglong)bVar7;
        uVar18 = uVar18 + 1;
        lVar12 = lVar12 + -0x18;
        pcVar16 = unaff_R13;
        puVar3 = puVar13 + 4;
      } while (bVar7 == 1);
      uVar19 = uVar18;
      if (bVar7 == 0) break;
LAB_00630c71:
      bVar21 = local_a0 == 0;
      local_a0 = local_a0 + -1;
      if (bVar21) goto LAB_00630e96;
      lVar20 = *(longlong *)(lVar20 + 0x278 + uVar19 * 8);
    }
    if (*(char *)(puVar13 + 1) == '\x05') {
      lVar20 = puVar13[2];
      if (lVar20 != 0) {
        local_a0 = puVar13[3];
        goto LAB_00630d4e;
      }
    }
    else if ((*(char *)(puVar13 + 1) == '\x03') &&
            (::<str>::trim_matches::<<char>::is_whitespace>(puVar13[3],puVar13[4]),
            extraout_RDX_02 + -1 < (char *)0x80)) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar16 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      unaff_R13 = extraout_RDX_02;
      uVar22 = extraout_XMM0_Da_01;
      if (pcVar16 != (char *)0x0) goto LAB_00630d17;
      goto LAB_00631170;
    }
LAB_00630e96:
    do {
      uVar19 = (ulonglong)*(ushort *)(lVar9 + 0x272);
      uVar8 = (ulonglong)((uint)*(ushort *)(lVar9 + 0x272) * 8);
      unaff_R12 = (char *)(uVar8 * 3);
      uVar18 = 0xffffffffffffffff;
      pcVar16 = (char *)(lVar9 + 0x168);
      plVar4 = (longlong *)(lVar9 + -0x10);
      do {
        plVar14 = plVar4;
        if (unaff_R12 == (char *)0x0) {
          local_60 = (char *)0x0;
          goto LAB_00630e7e;
        }
        unaff_R13 = pcVar16 + 0x18;
        uVar10 = *(ulonglong *)(pcVar16 + 0x10);
        uVar11 = 8;
        if (uVar10 < 8) {
          uVar11 = uVar10;
        }
        iVar5 = (*(code *)PTR_memcmp_00799528)(uVar8,uVar11);
        lVar20 = -(uVar10 - 8);
        if (iVar5 != 0) {
          lVar20 = (longlong)iVar5;
        }
        bVar7 = (0 < lVar20) - (lVar20 < 0);
        uVar8 = (ulonglong)bVar7;
        uVar18 = uVar18 + 1;
        unaff_R12 = unaff_R12 + -0x18;
        pcVar16 = unaff_R13;
        plVar4 = plVar14 + 4;
      } while (bVar7 == 1);
      local_60 = unaff_R12;
      uVar19 = uVar18;
      if (bVar7 == 0) {
        pcVar16 = (char *)0xffffffffffffffff;
        local_68 = pcVar16;
        if ((char)plVar14[2] != '\x05') goto LAB_00631136;
        lVar9 = plVar14[3];
        if (lVar9 == 0) goto LAB_0063113b;
        local_80 = plVar14[4];
        pcVar16 = "session_id";
        lVar20 = lVar9;
        local_a8 = local_80;
        goto LAB_00630f60;
      }
LAB_00630e7e:
      bVar21 = local_80 == 0;
      local_80 = local_80 + -1;
      if (bVar21) goto LAB_0063112f;
      lVar9 = *(longlong *)(lVar9 + 0x278 + uVar19 * 8);
    } while( true );
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar16 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  unaff_R13 = extraout_RDX_01;
  uVar22 = extraout_XMM0_Da_02;
  if (pcVar16 == (char *)0x0) {
LAB_0063118c:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0063119a;
  }
LAB_00630d17:
  (*(code *)PTR_memcpy_00799008)(uVar22,unaff_R13);
  local_68 = unaff_R13;
  local_60 = pcVar16;
LAB_00631136:
  pcVar16 = local_68;
  unaff_R12 = local_60;
LAB_0063113b:
  param_1[5] = local_40;
  param_1[3] = local_50;
  param_1[4] = lStack_48;
  *param_1 = (longlong)pcVar16;
  param_1[1] = (longlong)unaff_R12;
  param_1[2] = (longlong)unaff_R13;
  return param_1;
}


