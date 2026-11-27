// 004897f0 parse_subagent_config

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  int iVar11;
  char *pcVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  char *unaff_R12;
  longlong lVar26;
  longlong lVar27;
  char *pcVar28;
  char *pcVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  bool bVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  longlong local_1e8;
  char *local_1e0;
  longlong local_1d8;
  char local_1c1;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1a8;
  longlong local_1a0;
  undefined4 local_18c;
  longlong local_188;
  undefined8 local_178;
  uint local_16c;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong local_150;
  char *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  char *pcStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined6 uStack_d6;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  char *local_68;
  longlong lStack_60;
  longlong local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4e;
  undefined2 local_4a;
  longlong local_40;
  char *local_38;
  
  pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(param_4,param_2);
  if (pcVar12 == (char *)0x0) {
    *param_1 = -1;
    return param_1;
  }
  if (*pcVar12 == '\x01') {
    *param_1 = -((ulonglong)(byte)pcVar12[1] ^ 1);
    param_1[1] = 8;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[5] = 0;
    param_1[6] = -1;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined2 *)(param_1 + 10) = 0x101;
    return param_1;
  }
  if (*pcVar12 != '\x05') {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar8 = _UNK_00195a4a;
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[2] = _DAT_00195a42;
      puVar13[3] = uVar8;
      uVar8 = _UNK_00195a3a;
      *puVar13 = _DAT_00195a32;
      puVar13[1] = uVar8;
      *(undefined8 *)((longlong)puVar13 + 0x1d) = 0x7463656a626f2072;
      param_1[1] = 0x25;
      param_1[2] = (longlong)puVar13;
      param_1[3] = 0x25;
      *param_1 = -2;
      return param_1;
    }
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0048b0ea:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0048b2b2:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar14 = *(longlong *)(pcVar12 + 8);
  if (lVar14 != 0) {
    local_1c0 = *(longlong *)(pcVar12 + 0x10);
    lVar27 = lVar14;
    local_1e8 = local_1c0;
    do {
      uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
      uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
      lVar19 = uVar17 * 3;
      uVar24 = 0xffffffffffffffff;
      lVar30 = lVar27 + 0x168;
      pcVar29 = (char *)(lVar27 + -0x1f);
      do {
        pcVar28 = pcVar29;
        if (lVar19 == 0) goto LAB_00489904;
        uVar18 = *(ulonglong *)(lVar30 + 0x10);
        lVar26 = uVar18 - 7;
        if (6 < uVar18) {
          uVar18 = 7;
        }
        iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
        lVar26 = -lVar26;
        if (iVar11 != 0) {
          lVar26 = (longlong)iVar11;
        }
        bVar16 = (0 < lVar26) - (lVar26 < 0);
        uVar17 = (ulonglong)bVar16;
        pcVar29 = pcVar28 + 0x20;
        uVar24 = uVar24 + 1;
        lVar19 = lVar19 + -0x18;
        lVar30 = lVar30 + 0x18;
      } while (bVar16 == 1);
      uVar31 = uVar24;
      if (bVar16 == 0) {
        cVar2 = '\x01';
        if (pcVar28[0x1f] == '\x01') {
          cVar2 = *pcVar29;
        }
        goto LAB_004899f5;
      }
LAB_00489904:
      bVar33 = local_1e8 == 0;
      local_1e8 = local_1e8 + -1;
      if (bVar33) goto LAB_00489ae4;
      lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
    } while( true );
  }
  local_1b8 = -1;
  cVar2 = '\x01';
  local_18c = 0;
  local_1c1 = '\x01';
LAB_00489fe1:
  lVar14 = *(longlong *)(pcVar12 + 8);
  if (lVar14 != 0) {
    local_1e0 = *(char **)(pcVar12 + 0x10);
    lVar27 = lVar14;
    local_148 = local_1e0;
    do {
      uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
      pcVar29 = (char *)(lVar27 + -0x20);
      uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
      lVar19 = uVar17 * 3;
      uVar24 = 0xffffffffffffffff;
      lVar30 = lVar27 + 0x168;
      do {
        if (lVar19 == 0) goto LAB_0048a0bc;
        uVar18 = *(ulonglong *)(lVar30 + 0x10);
        lVar26 = uVar18 - 0xd;
        if (0xc < uVar18) {
          uVar18 = 0xd;
        }
        iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
        lVar26 = -lVar26;
        if (iVar11 != 0) {
          lVar26 = (longlong)iVar11;
        }
        bVar16 = (0 < lVar26) - (lVar26 < 0);
        uVar17 = (ulonglong)bVar16;
        pcVar29 = pcVar29 + 0x20;
        uVar24 = uVar24 + 1;
        lVar19 = lVar19 + -0x18;
        lVar30 = lVar30 + 0x18;
      } while (bVar16 == 1);
      uVar31 = uVar24;
      if (bVar16 == 0) goto LAB_0048a1b2;
LAB_0048a0bc:
      bVar33 = local_1e0 == (char *)0x0;
      local_1e0 = local_1e0 + -1;
      if (bVar33) goto LAB_0048a0e3;
      lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
    } while( true );
  }
LAB_0048a1ff:
  local_c8 = 0;
  lStack_c0 = 8;
  local_b8 = 0;
LAB_0048a228:
  local_168 = 0;
  lStack_160 = 8;
  local_158 = 0;
  if (lVar14 != 0) {
    local_1a8 = *(longlong *)(pcVar12 + 0x10);
    lVar27 = lVar14;
    local_1e0 = (char *)local_1a8;
    do {
      uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
      pcVar12 = (char *)(lVar27 + -0x20);
      uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
      lVar19 = uVar17 * 3;
      uVar24 = 0xffffffffffffffff;
      lVar30 = lVar27 + 0x168;
      do {
        if (lVar19 == 0) goto LAB_0048a30c;
        uVar18 = *(ulonglong *)(lVar30 + 0x10);
        lVar26 = uVar18 - 0x10;
        if (0xf < uVar18) {
          uVar18 = 0x10;
        }
        iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
        lVar26 = -lVar26;
        if (iVar11 != 0) {
          lVar26 = (longlong)iVar11;
        }
        bVar16 = (0 < lVar26) - (lVar26 < 0);
        uVar17 = (ulonglong)bVar16;
        pcVar12 = pcVar12 + 0x20;
        uVar24 = uVar24 + 1;
        lVar19 = lVar19 + -0x18;
        lVar30 = lVar30 + 0x18;
      } while (bVar16 == 1);
      uVar31 = uVar24;
      if (bVar16 == 0) goto LAB_0048a404;
LAB_0048a30c:
      bVar33 = local_1e0 == (char *)0x0;
      local_1e0 = (char *)((longlong)local_1e0 + -1);
      if (bVar33) goto LAB_0048a32e;
      lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
    } while( true );
  }
LAB_0048ae46:
  lVar27 = 0;
LAB_0048ae4d:
  if (cVar2 == '\0') {
LAB_0048ae5c:
    if (local_b8 != 0) goto LAB_0048ae65;
    local_138 = local_c8;
    uStack_130 = lStack_c0;
    local_128 = 0;
    lStack_120 = local_168;
    local_118 = lStack_160;
    local_108 = local_1b8;
    local_f8 = local_140;
    uStack_f0 = CONCAT44(local_16c,local_18c);
    local_e8._0_2_ = CONCAT11(local_1c1,cVar2);
    lStack_110 = lVar27;
    if (lVar27 == 0) {
      pcStack_100 = unaff_R12;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentConfig>(&local_138);
      local_138 = -1;
      goto LAB_0048af9c;
    }
  }
  else {
LAB_0048ae65:
    local_138 = local_c8;
    uStack_130 = lStack_c0;
    lStack_120 = local_168;
    local_118 = lStack_160;
    local_f8 = local_140;
    local_e8._0_2_ = CONCAT11(local_1c1,cVar2);
    local_128 = local_b8;
    lStack_110 = lVar27;
  }
  uStack_f0 = CONCAT44(local_16c,local_18c);
  local_98 = uStack_130;
  lStack_90 = local_128;
  local_88 = lStack_120;
  lStack_80 = local_118;
  local_78 = lStack_110;
  lStack_70 = local_1b8;
  lStack_60 = local_f8;
  local_58 = uStack_f0;
  local_50 = (undefined1)local_e8;
  local_4f = local_e8._1_1_;
  local_4e = local_e8._2_4_;
  local_4a = local_e8._6_2_;
  local_68 = unaff_R12;
LAB_0048af9c:
  *param_1 = local_138;
  param_1[1] = local_98;
  param_1[2] = lStack_90;
  param_1[3] = local_88;
  param_1[4] = lStack_80;
  param_1[5] = local_78;
  param_1[6] = lStack_70;
  param_1[7] = (longlong)local_68;
  param_1[8] = lStack_60;
  param_1[9] = local_58;
  *(undefined1 *)(param_1 + 10) = local_50;
  *(undefined1 *)((longlong)param_1 + 0x51) = local_4f;
  *(undefined4 *)((longlong)param_1 + 0x52) = local_4e;
  *(undefined2 *)((longlong)param_1 + 0x56) = local_4a;
  return param_1;
LAB_00489ae4:
  cVar2 = '\x01';
LAB_004899f5:
  lVar27 = lVar14;
  local_1e8 = local_1c0;
  do {
    uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
    pcVar29 = (char *)(lVar27 + -0x20);
    uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
    lVar19 = uVar17 * 3;
    uVar24 = 0xffffffffffffffff;
    lVar30 = lVar27 + 0x168;
    do {
      if (lVar19 == 0) goto LAB_00489aa4;
      uVar18 = *(ulonglong *)(lVar30 + 0x10);
      lVar26 = uVar18 - 0xb;
      if (10 < uVar18) {
        uVar18 = 0xb;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
      lVar26 = -lVar26;
      if (iVar11 != 0) {
        lVar26 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar26) - (lVar26 < 0);
      uVar17 = (ulonglong)bVar16;
      pcVar29 = pcVar29 + 0x20;
      uVar24 = uVar24 + 1;
      lVar19 = lVar19 + -0x18;
      lVar30 = lVar30 + 0x18;
    } while (bVar16 == 1);
    uVar31 = uVar24;
    if (bVar16 == 0) goto LAB_00489bc5;
LAB_00489aa4:
    bVar33 = local_1e8 == 0;
    local_1e8 = local_1e8 + -1;
    if (bVar33) break;
    lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
  } while( true );
  lVar27 = lVar14;
  local_1e8 = local_1c0;
  do {
    uVar3 = *(ushort *)(lVar27 + 0x272);
    pcVar29 = (char *)(lVar27 + -0x20);
    uVar17 = (ulonglong)((uint)uVar3 * 8);
    lVar19 = uVar17 * 3;
    uVar31 = 0xffffffffffffffff;
    lVar30 = lVar27 + 0x168;
    do {
      if (lVar19 == 0) {
        uVar31 = (ulonglong)uVar3;
        goto LAB_00489ba1;
      }
      uVar24 = *(ulonglong *)(lVar30 + 0x10);
      lVar26 = uVar24 - 0xd;
      if (0xc < uVar24) {
        uVar24 = 0xd;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar24);
      lVar26 = -lVar26;
      if (iVar11 != 0) {
        lVar26 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar26) - (lVar26 < 0);
      uVar17 = (ulonglong)bVar16;
      pcVar29 = pcVar29 + 0x20;
      uVar31 = uVar31 + 1;
      lVar19 = lVar19 + -0x18;
      lVar30 = lVar30 + 0x18;
    } while (bVar16 == 1);
    if (bVar16 == 0) break;
LAB_00489ba1:
    bVar33 = local_1e8 == 0;
    local_1e8 = local_1e8 + -1;
    if (bVar33) goto LAB_00489da2;
    lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
  } while( true );
LAB_00489bc5:
  local_1c1 = '\x01';
  if (*pcVar29 == '\x01') {
    local_1c1 = pcVar29[1];
  }
LAB_00489bd4:
  lVar27 = lVar14;
  local_1e8 = local_1c0;
  do {
    uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
    pcVar29 = (char *)(lVar27 + -0x20);
    uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
    lVar19 = uVar17 * 3;
    uVar24 = 0xffffffffffffffff;
    lVar30 = lVar27 + 0x168;
    do {
      if (lVar19 == 0) goto LAB_00489c84;
      uVar18 = *(ulonglong *)(lVar30 + 0x10);
      lVar26 = uVar18 - 0xc;
      if (0xb < uVar18) {
        uVar18 = 0xc;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
      lVar26 = -lVar26;
      if (iVar11 != 0) {
        lVar26 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar26) - (lVar26 < 0);
      uVar17 = (ulonglong)bVar16;
      pcVar29 = pcVar29 + 0x20;
      uVar24 = uVar24 + 1;
      lVar19 = lVar19 + -0x18;
      lVar30 = lVar30 + 0x18;
    } while (bVar16 == 1);
    uVar31 = uVar24;
    if (bVar16 == 0) goto LAB_00489d71;
LAB_00489c84:
    bVar33 = local_1e8 == 0;
    local_1e8 = local_1e8 + -1;
    if (bVar33) goto LAB_00489ca4;
    lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
  } while( true );
LAB_00489da2:
  local_1c1 = '\x01';
  goto LAB_00489bd4;
LAB_00489ca4:
  lVar27 = lVar14;
  local_1e8 = local_1c0;
  do {
    uVar3 = *(ushort *)(lVar27 + 0x272);
    pcVar29 = (char *)(lVar27 + -0x20);
    uVar17 = (ulonglong)((uint)uVar3 * 8);
    lVar19 = uVar17 * 3;
    uVar31 = 0xffffffffffffffff;
    lVar30 = lVar27 + 0x168;
    do {
      if (lVar19 == 0) {
        uVar31 = (ulonglong)uVar3;
        goto LAB_00489d51;
      }
      uVar24 = *(ulonglong *)(lVar30 + 0x10);
      lVar26 = uVar24 - 0x18;
      if (0x17 < uVar24) {
        uVar24 = 0x18;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar24);
      lVar26 = -lVar26;
      if (iVar11 != 0) {
        lVar26 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar26) - (lVar26 < 0);
      uVar17 = (ulonglong)bVar16;
      pcVar29 = pcVar29 + 0x20;
      uVar31 = uVar31 + 1;
      lVar19 = lVar19 + -0x18;
      lVar30 = lVar30 + 0x18;
    } while (bVar16 == 1);
    if (bVar16 == 0) break;
LAB_00489d51:
    bVar33 = local_1e8 == 0;
    local_1e8 = local_1e8 + -1;
    if (bVar33) goto LAB_00489da9;
    lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
  } while( true );
LAB_00489d71:
  local_18c = 0;
  if ((*pcVar29 == '\x02') && (*(longlong *)(pcVar29 + 8) == 0)) {
    uVar4 = *(uint *)(pcVar29 + 0x10);
    local_16c = 0x10;
    if (uVar4 < 0x10) {
      local_16c = uVar4;
    }
    local_18c = 1;
    if (uVar4 == 0) {
      local_16c = 1;
    }
  }
LAB_00489dab:
  lVar27 = lVar14;
  local_1e8 = local_1c0;
  do {
    uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
    pcVar29 = (char *)(lVar27 + -0x20);
    uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
    lVar19 = uVar17 * 3;
    uVar24 = 0xffffffffffffffff;
    lVar30 = lVar27 + 0x168;
    do {
      if (lVar19 == 0) goto LAB_00489e64;
      uVar18 = *(ulonglong *)(lVar30 + 0x10);
      lVar26 = uVar18 - 10;
      if (9 < uVar18) {
        uVar18 = 10;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
      lVar26 = -lVar26;
      if (iVar11 != 0) {
        lVar26 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar26) - (lVar26 < 0);
      uVar17 = (ulonglong)bVar16;
      pcVar29 = pcVar29 + 0x20;
      uVar24 = uVar24 + 1;
      lVar19 = lVar19 + -0x18;
      lVar30 = lVar30 + 0x18;
    } while (bVar16 == 1);
    uVar31 = uVar24;
    if (bVar16 == 0) goto LAB_00489f3f;
LAB_00489e64:
    bVar33 = local_1e8 == 0;
    local_1e8 = local_1e8 + -1;
    if (bVar33) goto LAB_00489e90;
    lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
  } while( true );
LAB_00489da9:
  local_18c = 0;
  goto LAB_00489dab;
LAB_00489e90:
  uVar3 = *(ushort *)(lVar14 + 0x272);
  pcVar29 = (char *)(lVar14 + -0x20);
  uVar17 = (ulonglong)((uint)uVar3 * 8);
  lVar27 = uVar17 * 3;
  uVar31 = 0xffffffffffffffff;
  lVar19 = lVar14 + 0x168;
  do {
    if (lVar27 == 0) {
      uVar31 = (ulonglong)uVar3;
      goto LAB_00489f20;
    }
    uVar24 = *(ulonglong *)(lVar19 + 0x10);
    lVar30 = uVar24 - 5;
    if (4 < uVar24) {
      uVar24 = 5;
    }
    iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar24);
    lVar30 = -lVar30;
    if (iVar11 != 0) {
      lVar30 = (longlong)iVar11;
    }
    bVar16 = (0 < lVar30) - (lVar30 < 0);
    uVar17 = (ulonglong)bVar16;
    pcVar29 = pcVar29 + 0x20;
    uVar31 = uVar31 + 1;
    lVar27 = lVar27 + -0x18;
    lVar19 = lVar19 + 0x18;
  } while (bVar16 == 1);
  if (bVar16 == 0) goto LAB_00489f3f;
LAB_00489f20:
  bVar33 = local_1c0 == 0;
  local_1c0 = local_1c0 + -1;
  unaff_R12 = pcVar29;
  if (bVar33) goto LAB_00489f95;
  lVar14 = *(longlong *)(lVar14 + 0x278 + uVar31 * 8);
  goto LAB_00489e90;
LAB_00489f3f:
  unaff_R12 = pcVar29;
  if (*pcVar29 == '\x03') {
    auVar35 = ::<str>::trim_matches::<<char>::is_whitespace>
                        (*(undefined8 *)(pcVar29 + 0x10),*(undefined8 *)(pcVar29 + 0x18));
    lVar14 = auVar35._8_8_;
    if ((auVar35._0_8_ == 0) || (lVar14 == 0)) {
LAB_00489f95:
      local_1b8 = -1;
      goto LAB_00489fe1;
    }
    local_140 = lVar14;
    if (-1 < lVar14) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_1b8 = local_140;
      unaff_R12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (unaff_R12 != (char *)0x0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,local_1b8);
        goto LAB_00489fe1;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  local_1b8 = -1;
  unaff_R12 = pcVar29;
  goto LAB_00489fe1;
LAB_0048a0e3:
  lVar27 = lVar14;
  do {
    uVar3 = *(ushort *)(lVar27 + 0x272);
    pcVar29 = (char *)(lVar27 + -0x20);
    uVar17 = (ulonglong)((uint)uVar3 * 8);
    lVar19 = uVar17 * 3;
    uVar31 = 0xffffffffffffffff;
    lVar30 = lVar27 + 0x168;
    do {
      if (lVar19 == 0) {
        uVar31 = (ulonglong)uVar3;
        goto LAB_0048a185;
      }
      uVar24 = *(ulonglong *)(lVar30 + 0x10);
      lVar26 = uVar24 - 0x11;
      if (0x10 < uVar24) {
        uVar24 = 0x11;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar24);
      lVar26 = -lVar26;
      if (iVar11 != 0) {
        lVar26 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar26) - (lVar26 < 0);
      uVar17 = (ulonglong)bVar16;
      pcVar29 = pcVar29 + 0x20;
      uVar31 = uVar31 + 1;
      lVar19 = lVar19 + -0x18;
      lVar30 = lVar30 + 0x18;
    } while (bVar16 == 1);
    if (bVar16 == 0) break;
LAB_0048a185:
    if (local_148 == (char *)0x0) goto LAB_0048a1ff;
    lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
    local_148 = local_148 + -1;
  } while( true );
LAB_0048a1b2:
  if (*pcVar29 != '\x04') goto LAB_0048a1ff;
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#0}>,craggemini_core[66f3c71560d70857]::subagents::parse_subagent_config::{closure#8}::{closure#1}>,<str_as_alloc[12e961f32105355]::borrow::ToOwned>::to_owned>>>
  ::from_iter(&local_138,*(longlong *)(pcVar29 + 0x10),
              *(longlong *)(pcVar29 + 0x18) * 0x20 + *(longlong *)(pcVar29 + 0x10));
  local_b8 = local_128;
  local_c8 = local_138;
  lStack_c0 = uStack_130;
  lVar14 = *(longlong *)(pcVar12 + 8);
  goto LAB_0048a228;
LAB_0048a32e:
  lVar27 = 0;
  do {
    uVar3 = *(ushort *)(lVar14 + 0x272);
    pcVar12 = (char *)(lVar14 + -0x20);
    uVar17 = (ulonglong)((uint)uVar3 * 8);
    lVar19 = uVar17 * 3;
    uVar31 = 0xffffffffffffffff;
    lVar30 = lVar14 + 0x168;
    do {
      if (lVar19 == 0) {
        uVar31 = (ulonglong)uVar3;
        goto LAB_0048a3d9;
      }
      uVar24 = *(ulonglong *)(lVar30 + 0x10);
      lVar26 = uVar24 - 6;
      if (5 < uVar24) {
        uVar24 = 6;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar24);
      lVar26 = -lVar26;
      if (iVar11 != 0) {
        lVar26 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar26) - (lVar26 < 0);
      uVar17 = (ulonglong)bVar16;
      pcVar12 = pcVar12 + 0x20;
      uVar31 = uVar31 + 1;
      lVar19 = lVar19 + -0x18;
      lVar30 = lVar30 + 0x18;
    } while (bVar16 == 1);
    if (bVar16 == 0) break;
LAB_0048a3d9:
    bVar33 = local_1a8 == 0;
    local_1a8 = local_1a8 + -1;
    if (bVar33) goto LAB_0048ae4d;
    lVar14 = *(longlong *)(lVar14 + 0x278 + uVar31 * 8);
  } while( true );
LAB_0048a404:
  if (*pcVar12 != '\x04') goto LAB_0048ae46;
  if (*(longlong *)(pcVar12 + 0x18) != 0) {
    local_38 = *(char **)(pcVar12 + 0x10) + *(longlong *)(pcVar12 + 0x18) * 0x20;
    pcVar12 = *(char **)(pcVar12 + 0x10);
LAB_0048a434:
    if (*pcVar12 != '\x05') {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar15 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar8 = _UNK_00195a22;
      if (puVar15 != (undefined4 *)0x0) {
        *(undefined8 *)(puVar15 + 4) = _DAT_00195a1a;
        *(undefined8 *)(puVar15 + 6) = uVar8;
        uVar7 = _UNK_00195a16;
        uVar6 = _UNK_00195a12;
        uVar34 = _UNK_00195a0e;
        *puVar15 = _DAT_00195a0a;
        puVar15[1] = uVar34;
        puVar15[2] = uVar6;
        puVar15[3] = uVar7;
        *(undefined8 *)(puVar15 + 8) = 0x7463656a626f206e;
        lVar14 = 0x28;
        goto LAB_0048b15c;
      }
      goto LAB_0048b0ea;
    }
    lVar14 = *(longlong *)(pcVar12 + 8);
    if (lVar14 != 0) {
      local_148 = pcVar12 + 0x20;
      local_1e0 = *(char **)(pcVar12 + 0x10);
      while( true ) {
        uVar31 = (ulonglong)*(ushort *)(lVar14 + 0x272);
        uVar17 = (ulonglong)((uint)*(ushort *)(lVar14 + 0x272) * 8);
        lVar27 = uVar17 * 3;
        uVar24 = 0xffffffffffffffff;
        lVar19 = lVar14 + 0x168;
        puVar13 = (undefined8 *)(lVar14 + -8);
        do {
          puVar20 = puVar13;
          if (lVar27 == 0) goto LAB_0048a512;
          uVar18 = *(ulonglong *)(lVar19 + 0x10);
          lVar30 = uVar18 - 4;
          if (3 < uVar18) {
            uVar18 = 4;
          }
          iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
          lVar30 = -lVar30;
          if (iVar11 != 0) {
            lVar30 = (longlong)iVar11;
          }
          bVar16 = (0 < lVar30) - (lVar30 < 0);
          uVar17 = (ulonglong)bVar16;
          uVar24 = uVar24 + 1;
          lVar27 = lVar27 + -0x18;
          lVar19 = lVar19 + 0x18;
          puVar13 = puVar20 + 4;
        } while (bVar16 == 1);
        uVar31 = uVar24;
        if (bVar16 == 0) break;
LAB_0048a512:
        bVar33 = local_1e0 == (char *)0x0;
        local_1e0 = (char *)((longlong)local_1e0 + -1);
        if (bVar33) goto LAB_0048b112;
        lVar14 = *(longlong *)(lVar14 + 0x278 + uVar31 * 8);
      }
      if (*(char *)(puVar20 + 1) != '\x03') goto LAB_0048b112;
      auVar35 = ::<str>::trim_matches::<<char>::is_whitespace>(puVar20[3],puVar20[4]);
      lVar14 = auVar35._8_8_;
      if ((auVar35._0_8_ == 0) || (lVar14 == 0)) goto LAB_0048b112;
      if (lVar14 < 0) goto LAB_0048b0ea;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar19 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar19 == 0) goto LAB_0048b0ea;
      local_a0 = lVar14;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar14);
      lVar14 = *(longlong *)(pcVar12 + 8);
      if (lVar14 == 0) {
        local_1a0 = 1;
      }
      else {
        local_1a0 = 1;
        local_1e0 = *(char **)(pcVar12 + 0x10);
        while( true ) {
          uVar31 = (ulonglong)*(ushort *)(lVar14 + 0x272);
          uVar17 = (ulonglong)((uint)*(ushort *)(lVar14 + 0x272) * 8);
          lVar27 = uVar17 * 3;
          uVar24 = 0xffffffffffffffff;
          lVar30 = lVar14 + 0x168;
          lVar26 = lVar14 + -8;
          do {
            lVar21 = lVar26;
            if (lVar27 == 0) goto LAB_0048a665;
            uVar18 = *(ulonglong *)(lVar30 + 0x10);
            lVar26 = uVar18 - 0xb;
            if (10 < uVar18) {
              uVar18 = 0xb;
            }
            iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
            lVar26 = -lVar26;
            if (iVar11 != 0) {
              lVar26 = (longlong)iVar11;
            }
            bVar16 = (0 < lVar26) - (lVar26 < 0);
            uVar17 = (ulonglong)bVar16;
            uVar24 = uVar24 + 1;
            lVar27 = lVar27 + -0x18;
            lVar30 = lVar30 + 0x18;
            lVar26 = lVar21 + 0x20;
          } while (bVar16 == 1);
          uVar31 = uVar24;
          if (bVar16 == 0) break;
LAB_0048a665:
          bVar33 = local_1e0 == (char *)0x0;
          local_1e0 = (char *)((longlong)local_1e0 + -1);
          if (bVar33) goto LAB_0048a6d6;
          lVar14 = *(longlong *)(lVar14 + 0x278 + uVar31 * 8);
        }
        if (*(char *)(lVar21 + 8) == '\x03') {
          local_1a0 = *(undefined8 *)(lVar21 + 0x18);
        }
      }
LAB_0048a6d6:
      ::<str>::trim_matches::<<char>::is_whitespace>(local_1a0);
      if (-1 < extraout_RDX) {
        local_178 = 1;
        if (extraout_RDX == 0) {
          local_a8 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar14 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar14 == 0) goto LAB_0048b0ff;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,extraout_RDX);
          local_a8 = lVar14;
        }
        lVar14 = *(longlong *)(pcVar12 + 8);
        local_150 = local_a8;
        if (lVar14 != 0) {
          local_188 = *(longlong *)(pcVar12 + 0x10);
          lVar27 = lVar14;
          local_1e0 = (char *)local_188;
          do {
            uVar3 = *(ushort *)(lVar27 + 0x272);
            pcVar29 = (char *)(lVar27 + -0x20);
            uVar17 = (ulonglong)((uint)uVar3 * 8);
            lVar30 = uVar17 * 3;
            uVar31 = 0xffffffffffffffff;
            lVar26 = lVar27 + 0x168;
            do {
              if (lVar30 == 0) {
                uVar31 = (ulonglong)uVar3;
                goto LAB_0048a815;
              }
              uVar24 = *(ulonglong *)(lVar26 + 0x10);
              lVar21 = uVar24 - 0xd;
              if (0xc < uVar24) {
                uVar24 = 0xd;
              }
              iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar24);
              lVar21 = -lVar21;
              if (iVar11 != 0) {
                lVar21 = (longlong)iVar11;
              }
              bVar16 = (0 < lVar21) - (lVar21 < 0);
              uVar17 = (ulonglong)bVar16;
              pcVar29 = pcVar29 + 0x20;
              uVar31 = uVar31 + 1;
              lVar30 = lVar30 + -0x18;
              lVar26 = lVar26 + 0x18;
            } while (bVar16 == 1);
            if (bVar16 == 0) goto LAB_0048a906;
LAB_0048a815:
            bVar33 = local_1e0 == (char *)0x0;
            local_1e0 = (char *)((longlong)local_1e0 + -1);
            if (bVar33) goto LAB_0048a84e;
            lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
          } while( true );
        }
        goto LAB_0048a931;
      }
LAB_0048b0ff:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0048b2b2;
    }
LAB_0048b112:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar15 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar8 = _UNK_00195a6b;
    if (puVar15 != (undefined4 *)0x0) {
      *(ulonglong *)(puVar15 + 3) = CONCAT44(_UNK_00195a67,_DAT_00195a63);
      *(undefined8 *)(puVar15 + 5) = uVar8;
      uVar7 = _DAT_00195a63;
      uVar6 = _UNK_00195a5f;
      uVar34 = _UNK_00195a5b;
      *puVar15 = _DAT_00195a57;
      puVar15[1] = uVar34;
      puVar15[2] = uVar6;
      puVar15[3] = uVar7;
      lVar14 = 0x1c;
LAB_0048b15c:
      param_1[1] = lVar14;
      param_1[2] = (longlong)puVar15;
      param_1[3] = lVar14;
      *param_1 = -2;
      uVar34 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::CustomSubagentDef>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(&local_168,1);
      if (local_168 != 0) {
        uVar34 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar34,8);
      }
      puVar9 = PTR___rust_dealloc_00798fc8;
      if (local_b8 != 0) {
        lVar14 = lStack_c0 + 8;
        lVar27 = local_b8;
        do {
          if (*(longlong *)(lVar14 + -8) != 0) {
            uVar34 = (*(code *)puVar9)(uVar34,1);
          }
          lVar14 = lVar14 + 0x18;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (local_c8 != 0) {
        uVar34 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar34,8);
      }
      if (local_1b8 < 1) {
        return param_1;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar34,1);
      return param_1;
    }
    goto LAB_0048b0ea;
  }
  lVar27 = 0;
  if (cVar2 == '\0') goto LAB_0048ae5c;
  goto LAB_0048ae65;
LAB_0048a84e:
  uVar31 = (ulonglong)*(ushort *)(lVar14 + 0x272);
  pcVar29 = (char *)(lVar14 + -0x20);
  uVar17 = (ulonglong)((uint)*(ushort *)(lVar14 + 0x272) * 8);
  lVar27 = uVar17 * 3;
  uVar24 = 0xffffffffffffffff;
  lVar30 = lVar14 + 0x168;
  do {
    if (lVar27 == 0) goto LAB_0048a8dc;
    uVar18 = *(ulonglong *)(lVar30 + 0x10);
    lVar26 = uVar18 - 0xc;
    if (0xb < uVar18) {
      uVar18 = 0xc;
    }
    iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
    lVar26 = -lVar26;
    if (iVar11 != 0) {
      lVar26 = (longlong)iVar11;
    }
    bVar16 = (0 < lVar26) - (lVar26 < 0);
    uVar17 = (ulonglong)bVar16;
    pcVar29 = pcVar29 + 0x20;
    uVar24 = uVar24 + 1;
    lVar27 = lVar27 + -0x18;
    lVar30 = lVar30 + 0x18;
  } while (bVar16 == 1);
  uVar31 = uVar24;
  if (bVar16 == 0) goto LAB_0048a906;
LAB_0048a8dc:
  bVar33 = local_188 == 0;
  local_188 = local_188 + -1;
  if (bVar33) goto LAB_0048a931;
  lVar14 = *(longlong *)(lVar14 + 0x278 + uVar31 * 8);
  goto LAB_0048a84e;
LAB_0048a906:
  if (*pcVar29 == '\x03') {
    local_178 = *(undefined8 *)(pcVar29 + 0x10);
  }
LAB_0048a931:
  ::<str>::trim_matches::<<char>::is_whitespace>(local_178);
  if (extraout_RDX_00 < 0) {
LAB_0048b22d:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_0048b2b2;
  }
  if (extraout_RDX_00 == 0) {
    lVar14 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar14 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar14 == 0) goto LAB_0048b22d;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,extraout_RDX_00);
  }
  lVar27 = *(longlong *)(pcVar12 + 8);
  if (lVar27 != 0) {
    local_1e0 = *(char **)(pcVar12 + 0x10);
    do {
      uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
      uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
      lVar30 = uVar17 * 3;
      uVar24 = 0xffffffffffffffff;
      lVar26 = lVar27 + 0x168;
      lVar21 = lVar27 + -8;
      do {
        lVar25 = lVar21;
        if (lVar30 == 0) goto LAB_0048aa41;
        uVar18 = *(ulonglong *)(lVar26 + 0x10);
        lVar21 = uVar18 - 5;
        if (4 < uVar18) {
          uVar18 = 5;
        }
        iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
        lVar21 = -lVar21;
        if (iVar11 != 0) {
          lVar21 = (longlong)iVar11;
        }
        bVar16 = (0 < lVar21) - (lVar21 < 0);
        uVar17 = (ulonglong)bVar16;
        uVar24 = uVar24 + 1;
        lVar30 = lVar30 + -0x18;
        lVar26 = lVar26 + 0x18;
        lVar21 = lVar25 + 0x20;
      } while (bVar16 == 1);
      uVar31 = uVar24;
      if (bVar16 == 0) {
        if (*(char *)(lVar25 + 8) != '\x03') {
          lVar30 = -1;
          goto LAB_0048ab12;
        }
        auVar35 = ::<str>::trim_matches::<<char>::is_whitespace>(*(undefined8 *)(lVar25 + 0x18));
        lVar30 = auVar35._8_8_;
        if ((auVar35._0_8_ == 0) || (lVar30 == 0)) {
          lVar30 = -1;
          goto LAB_0048ab12;
        }
        if (-1 < lVar30) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_b0 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_b0 != 0) {
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar30);
            local_40 = lVar30;
            goto LAB_0048ab12;
          }
          local_b0 = lVar30;
        }
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0048b2b2;
      }
LAB_0048aa41:
      bVar33 = local_1e0 == (char *)0x0;
      local_1e0 = (char *)((longlong)local_1e0 + -1);
      if (bVar33) goto LAB_0048ae31;
      lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
    } while( true );
  }
  lVar30 = -1;
LAB_0048abe5:
  local_d8 = 0;
  uStack_d7 = 0;
LAB_0048aced:
  lVar27 = local_158;
  local_138 = local_a0;
  local_128 = local_a0;
  local_118 = local_a8;
  local_e8 = local_b0;
  lStack_e0 = local_40;
  uStack_130 = lVar19;
  lStack_120 = extraout_RDX;
  lStack_110 = extraout_RDX;
  local_108 = extraout_RDX_00;
  pcStack_100 = (char *)lVar14;
  local_f8 = extraout_RDX_00;
  uStack_f0 = lVar30;
  if (local_158 == local_168) {
    <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::subagents::CustomSubagentDef>>
    ::grow_one(&local_168);
  }
  lVar14 = lVar27 * 0x68;
  *(ulonglong *)(lStack_160 + 0x60 + lVar14) = CONCAT62(uStack_d6,CONCAT11(uStack_d7,local_d8));
  plVar1 = (longlong *)(lStack_160 + 0x50 + lVar14);
  *plVar1 = local_e8;
  plVar1[1] = lStack_e0;
  plVar1 = (longlong *)(lStack_160 + 0x40 + lVar14);
  *plVar1 = local_f8;
  plVar1[1] = uStack_f0;
  plVar1 = (longlong *)(lStack_160 + 0x30 + lVar14);
  *plVar1 = local_108;
  plVar1[1] = (longlong)pcStack_100;
  plVar1 = (longlong *)(lStack_160 + 0x20 + lVar14);
  *plVar1 = local_118;
  plVar1[1] = lStack_110;
  plVar1 = (longlong *)(lStack_160 + 0x10 + lVar14);
  *plVar1 = local_128;
  plVar1[1] = lStack_120;
  puVar15 = (undefined4 *)(lStack_160 + lVar14);
  *puVar15 = (undefined4)local_138;
  puVar15[1] = local_138._4_4_;
  puVar15[2] = (undefined4)uStack_130;
  puVar15[3] = uStack_130._4_4_;
  lVar27 = lVar27 + 1;
  pcVar12 = local_148;
  local_158 = lVar27;
  if (local_148 == local_38) goto LAB_0048ae4d;
  goto LAB_0048a434;
LAB_0048ae31:
  lVar30 = -1;
LAB_0048ab12:
  lVar27 = *(longlong *)(pcVar12 + 8);
  if (lVar27 != 0) {
    local_1d8 = *(longlong *)(pcVar12 + 0x10);
    lVar26 = lVar27;
    local_1a0 = local_1d8;
    while( true ) {
      uVar31 = (ulonglong)*(ushort *)(lVar26 + 0x272);
      uVar17 = (ulonglong)((uint)*(ushort *)(lVar26 + 0x272) * 8);
      lVar21 = uVar17 * 3;
      uVar24 = 0xffffffffffffffff;
      lVar25 = lVar26 + 0x168;
      puVar32 = (undefined1 *)(lVar26 + -0x1f);
      do {
        puVar23 = puVar32;
        if (lVar21 == 0) goto LAB_0048abc8;
        uVar18 = *(ulonglong *)(lVar25 + 0x10);
        lVar22 = uVar18 - 0x12;
        if (0x11 < uVar18) {
          uVar18 = 0x12;
        }
        iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
        lVar22 = -lVar22;
        if (iVar11 != 0) {
          lVar22 = (longlong)iVar11;
        }
        bVar16 = (0 < lVar22) - (lVar22 < 0);
        uVar17 = (ulonglong)bVar16;
        puVar32 = puVar23 + 0x20;
        uVar24 = uVar24 + 1;
        lVar21 = lVar21 + -0x18;
        lVar25 = lVar25 + 0x18;
      } while (bVar16 == 1);
      uVar31 = uVar24;
      if (bVar16 == 0) break;
LAB_0048abc8:
      bVar33 = local_1a0 == 0;
      local_1a0 = local_1a0 + -1;
      if (bVar33) goto LAB_0048abfb;
      lVar26 = *(longlong *)(lVar26 + 0x278 + uVar31 * 8);
    }
    if (puVar23[0x1f] == '\x01') {
      uVar10 = *puVar32;
      goto LAB_0048ac06;
    }
LAB_0048abfb:
    uVar10 = 0;
LAB_0048ac06:
    uVar31 = (ulonglong)*(ushort *)(lVar27 + 0x272);
    uVar17 = (ulonglong)((uint)*(ushort *)(lVar27 + 0x272) * 8);
    lVar26 = uVar17 * 3;
    uVar24 = 0xffffffffffffffff;
    lVar21 = lVar27 + 0x168;
    puVar32 = (undefined1 *)(lVar27 + -0x1f);
    do {
      puVar23 = puVar32;
      if (lVar26 == 0) goto LAB_0048ac94;
      uVar18 = *(ulonglong *)(lVar21 + 0x10);
      lVar25 = uVar18 - 0x10;
      if (0xf < uVar18) {
        uVar18 = 0x10;
      }
      iVar11 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar18);
      lVar25 = -lVar25;
      if (iVar11 != 0) {
        lVar25 = (longlong)iVar11;
      }
      bVar16 = (0 < lVar25) - (lVar25 < 0);
      uVar17 = (ulonglong)bVar16;
      puVar32 = puVar23 + 0x20;
      uVar24 = uVar24 + 1;
      lVar26 = lVar26 + -0x18;
      lVar21 = lVar21 + 0x18;
    } while (bVar16 == 1);
    uVar31 = uVar24;
    if (bVar16 != 0) {
LAB_0048ac94:
      bVar33 = local_1d8 == 0;
      local_1d8 = local_1d8 + -1;
      if (bVar33) goto LAB_0048acdd;
      lVar27 = *(longlong *)(lVar27 + 0x278 + uVar31 * 8);
      goto LAB_0048ac06;
    }
    if (puVar23[0x1f] == '\x01') {
      uStack_d7 = *puVar32;
      goto LAB_0048acdf;
    }
LAB_0048acdd:
    uStack_d7 = 0;
LAB_0048acdf:
    local_d8 = uVar10;
    goto LAB_0048aced;
  }
  goto LAB_0048abe5;
}


