// 005f0b80 parse_inline_image_value

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::parse_inline_image_value */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_inline_image_value
          (longlong *param_1,char *param_2,undefined8 param_3,ulonglong param_4)

{
  ushort uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  longlong extraout_RDX_01;
  longlong extraout_RDX_02;
  longlong extraout_RDX_03;
  undefined7 uVar18;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong local_e0;
  longlong local_b8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_58;
  int local_50 [2];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  uVar14 = param_4;
  plVar16 = param_1;
  if (*param_2 == '\x05') {
LAB_005f0cf3:
    lVar10 = *(longlong *)(param_2 + 8);
    if (lVar10 != 0) {
      local_b8 = *(longlong *)(param_2 + 0x10);
      lVar8 = lVar10;
      local_e0 = local_b8;
      do {
        uVar17 = (ulonglong)*(ushort *)(lVar8 + 0x272);
        pcVar7 = (char *)(lVar8 + -0x20);
        uVar13 = (ulonglong)((uint)*(ushort *)(lVar8 + 0x272) * 8);
        lVar20 = uVar13 * 3;
        uVar19 = 0xffffffffffffffff;
        lVar21 = lVar8 + 0x168;
        do {
          if (lVar20 == 0) goto LAB_005f0dc5;
          uVar15 = *(ulonglong *)(lVar21 + 0x10);
          lVar22 = uVar15 - 9;
          if (8 < uVar15) {
            uVar15 = 9;
          }
          iVar6 = (*(code *)PTR_memcmp_00799528)(uVar13,uVar15);
          lVar22 = -lVar22;
          if (iVar6 != 0) {
            lVar22 = (longlong)iVar6;
          }
          bVar11 = (0 < lVar22) - (lVar22 < 0);
          uVar13 = (ulonglong)bVar11;
          pcVar7 = pcVar7 + 0x20;
          uVar19 = uVar19 + 1;
          lVar20 = lVar20 + -0x18;
          lVar21 = lVar21 + 0x18;
        } while (bVar11 == 1);
        uVar17 = uVar19;
        if (bVar11 == 0) goto LAB_005f1248;
LAB_005f0dc5:
        bVar24 = local_e0 == 0;
        local_e0 = local_e0 + -1;
        if (bVar24) goto LAB_005f0f7a;
        lVar8 = *(longlong *)(lVar8 + 0x278 + uVar17 * 8);
      } while( true );
    }
    goto LAB_005f1346;
  }
  if (*param_2 != '\x03') {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar3 = s_ne_image_payload_0019f34e._8_8_;
    if (pcVar7 != (char *)0x0) {
      *(ulonglong *)(pcVar7 + 0xc) =
           CONCAT44(s_ne_image_payload_0019f34e._4_4_,s_ne_image_payload_0019f34e._0_4_);
      *(undefined8 *)(pcVar7 + 0x14) = uVar3;
      uVar3 = CONCAT44(s_ne_image_payload_0019f34e._0_4_,s_invalid_inli_0019f342._8_4_);
      *(undefined8 *)pcVar7 = s_invalid_inli_0019f342._0_8_;
      *(undefined8 *)(pcVar7 + 8) = uVar3;
      param_1[1] = 0x1c;
      param_1[2] = (longlong)pcVar7;
      param_1[3] = 0x1c;
      *param_1 = -1;
      return;
    }
    (*(code *)PTR_handle_error_00798ff0)();
LAB_005f1618:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005f1628;
  }
  puVar2 = *(uint **)(param_2 + 0x10);
  uVar17 = *(ulonglong *)(param_2 + 0x18);
  if ((4 < uVar17) &&
     (uVar12 = (byte)puVar2[1] ^ 0x3a | *puVar2 ^ 0x61746164, uVar14 = (ulonglong)uVar12,
     uVar12 == 0)) {
    lVar10 = uVar17 - 5;
    lVar8 = (longlong)puVar2 + 5;
    local_88 = 0;
    local_70 = CONCAT71(local_70._1_7_,1);
    local_78 = 0x2c0000002c;
    local_98 = lVar8;
    local_90 = lVar10;
    local_80 = lVar10;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_50,&local_98);
    if ((char)local_50[0] != '\0') {
      local_98 = 0;
      local_90 = local_48;
      local_80 = local_48;
      local_78 = 0;
      local_70 = local_48;
      local_68 = 0x3b0000003b;
      local_60 = 1;
      local_58 = 1;
      local_88 = lVar8;
      <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next_match(local_50,&local_88);
      uVar18 = (undefined7)((ulonglong)param_1 >> 8);
      if (local_50[0] == 1) {
        pcVar7 = (char *)(local_48 - local_98);
LAB_005f0ccb:
        plVar16 = (longlong *)CONCAT71(uVar18,pcVar7 == (char *)0x0);
        param_2 = &DAT_00000009;
        if (pcVar7 != (char *)0x0) {
          param_2 = pcVar7;
        }
        if (-1 < (longlong)param_2) goto LAB_005f105b;
      }
      else {
        if (local_58._1_1_ == '\0') {
          pcVar7 = (char *)(local_90 - local_98);
          bVar11 = pcVar7 != (char *)0x0 | (byte)local_58;
          uVar14 = CONCAT71((int7)(uVar14 >> 8),bVar11);
          if (bVar11 == 1) goto LAB_005f0ccb;
        }
        param_2 = &DAT_00000009;
        plVar16 = (longlong *)CONCAT71(uVar18,1);
LAB_005f105b:
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar20 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar20 != 0) {
          (*(code *)PTR_memcpy_00799008)(&DAT_0019ecdb,param_2);
          ::<str>::trim_matches::<<char>::is_whitespace>(lVar8 + local_40,lVar10 - local_40);
          if (extraout_RDX_00 < 0) {
LAB_005f10d6:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005f1676;
          }
          if (extraout_RDX_00 == 0) {
            lVar10 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar10 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar10 == 0) goto LAB_005f10d6;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,extraout_RDX_00);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar8 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar8 != 0) {
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,param_4);
            *param_1 = (longlong)param_2;
            param_1[1] = lVar20;
            param_1[2] = (longlong)param_2;
            param_1[3] = extraout_RDX_00;
            param_1[4] = lVar10;
            lVar10 = extraout_RDX_00;
            goto LAB_005f0f2d;
          }
          goto LAB_005f1658;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005f0cf3;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar9 == (undefined8 *)0x0) goto LAB_005f1618;
  *puVar9 = 0x6e702f6567616d69;
  *(undefined1 *)(puVar9 + 1) = 0x67;
  ::<str>::trim_matches::<<char>::is_whitespace>(puVar2,uVar17);
  if (extraout_RDX < 0) {
LAB_005f0e8b:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005f1676;
  }
  if (extraout_RDX == 0) {
    lVar10 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar10 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar10 == 0) goto LAB_005f0e8b;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,extraout_RDX);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar8 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar8 != 0) {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,param_4);
    *param_1 = 9;
    param_1[1] = (longlong)puVar9;
    param_1[2] = 9;
    param_1[3] = extraout_RDX;
    param_1[4] = lVar10;
    lVar10 = extraout_RDX;
LAB_005f0f2d:
    param_1[5] = lVar10;
    param_1[6] = param_4;
    param_1[7] = lVar8;
    param_1[8] = param_4;
    return;
  }
  goto LAB_005f1638;
LAB_005f0f7a:
  lVar8 = lVar10;
  local_e0 = local_b8;
  do {
    uVar1 = *(ushort *)(lVar8 + 0x272);
    pcVar7 = (char *)(lVar8 + -0x20);
    uVar13 = (ulonglong)((uint)uVar1 * 8);
    lVar20 = uVar13 * 3;
    uVar17 = 0xffffffffffffffff;
    lVar21 = lVar8 + 0x168;
    do {
      if (lVar20 == 0) {
        uVar17 = (ulonglong)uVar1;
        goto LAB_005f1025;
      }
      uVar19 = *(ulonglong *)(lVar21 + 0x10);
      lVar22 = uVar19 - 8;
      if (7 < uVar19) {
        uVar19 = 8;
      }
      iVar6 = (*(code *)PTR_memcmp_00799528)(uVar13,uVar19);
      lVar22 = -lVar22;
      if (iVar6 != 0) {
        lVar22 = (longlong)iVar6;
      }
      bVar11 = (0 < lVar22) - (lVar22 < 0);
      uVar13 = (ulonglong)bVar11;
      pcVar7 = pcVar7 + 0x20;
      uVar17 = uVar17 + 1;
      lVar20 = lVar20 + -0x18;
      lVar21 = lVar21 + 0x18;
    } while (bVar11 == 1);
    if (bVar11 == 0) goto LAB_005f1248;
LAB_005f1025:
    bVar24 = local_e0 == 0;
    local_e0 = local_e0 + -1;
    if (bVar24) break;
    lVar8 = *(longlong *)(lVar8 + 0x278 + uVar17 * 8);
  } while( true );
  lVar8 = lVar10;
  local_e0 = local_b8;
  do {
    uVar1 = *(ushort *)(lVar8 + 0x272);
    pcVar7 = (char *)(lVar8 + -0x20);
    uVar13 = (ulonglong)((uint)uVar1 * 8);
    lVar20 = uVar13 * 3;
    uVar17 = 0xffffffffffffffff;
    lVar21 = lVar8 + 0x168;
    do {
      if (lVar20 == 0) {
        uVar17 = (ulonglong)uVar1;
        goto LAB_005f1222;
      }
      uVar19 = *(ulonglong *)(lVar21 + 0x10);
      lVar22 = uVar19 - 10;
      if (9 < uVar19) {
        uVar19 = 10;
      }
      iVar6 = (*(code *)PTR_memcmp_00799528)(uVar13,uVar19);
      lVar22 = -lVar22;
      if (iVar6 != 0) {
        lVar22 = (longlong)iVar6;
      }
      bVar11 = (0 < lVar22) - (lVar22 < 0);
      uVar13 = (ulonglong)bVar11;
      pcVar7 = pcVar7 + 0x20;
      uVar17 = uVar17 + 1;
      lVar20 = lVar20 + -0x18;
      lVar21 = lVar21 + 0x18;
    } while (bVar11 == 1);
    if (bVar11 == 0) goto LAB_005f1248;
LAB_005f1222:
    bVar24 = local_e0 == 0;
    local_e0 = local_e0 + -1;
    if (bVar24) goto LAB_005f1346;
    lVar8 = *(longlong *)(lVar8 + 0x278 + uVar17 * 8);
  } while( true );
LAB_005f13b1:
  uVar17 = (ulonglong)*(ushort *)(lVar10 + 0x272);
  pcVar7 = (char *)(lVar10 + -0x20);
  uVar13 = (ulonglong)((uint)*(ushort *)(lVar10 + 0x272) * 8);
  lVar20 = uVar13 * 3;
  uVar19 = 0xffffffffffffffff;
  lVar21 = lVar10 + 0x168;
  do {
    if (lVar20 == 0) goto LAB_005f1448;
    uVar15 = *(ulonglong *)(lVar21 + 0x10);
    lVar22 = uVar15 - 8;
    if (7 < uVar15) {
      uVar15 = 8;
    }
    iVar6 = (*(code *)PTR_memcmp_00799528)(uVar13,uVar15);
    lVar22 = -lVar22;
    if (iVar6 != 0) {
      lVar22 = (longlong)iVar6;
    }
    bVar11 = (0 < lVar22) - (lVar22 < 0);
    uVar13 = (ulonglong)bVar11;
    pcVar7 = pcVar7 + 0x20;
    uVar19 = uVar19 + 1;
    lVar20 = lVar20 + -0x18;
    lVar21 = lVar21 + 0x18;
  } while (bVar11 == 1);
  if (bVar11 == 0) goto LAB_005f145d;
  uVar17 = uVar19;
LAB_005f1448:
  bVar24 = local_b8 == 0;
  local_b8 = local_b8 + -1;
  if (bVar24) goto LAB_005f1497;
  lVar10 = *(longlong *)(lVar10 + 0x278 + uVar17 * 8);
  goto LAB_005f13b1;
LAB_005f145d:
  if (*pcVar7 == '\x03') {
    uVar3 = *(undefined8 *)(pcVar7 + 0x10);
    uVar4 = *(undefined8 *)(pcVar7 + 0x18);
    ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
    if (extraout_RDX_02 != 0) {
      if (-1 < lVar8) {
        if (lVar8 == 0) {
          local_e0 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_e0 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_e0 == 0) goto LAB_005f148b;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar8);
        }
        ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
        if (extraout_RDX_03 < 0) {
LAB_005f154a:
          (*(code *)PTR_handle_error_00798ff0)();
        }
        else {
          if (extraout_RDX_03 == 0) {
            lVar10 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar10 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar10 == 0) goto LAB_005f154a;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,extraout_RDX_03);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar20 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar20 != 0) {
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,uVar14);
            *plVar16 = lVar8;
            plVar16[1] = local_e0;
            plVar16[2] = lVar8;
            plVar16[3] = extraout_RDX_03;
            plVar16[4] = lVar10;
            plVar16[5] = extraout_RDX_03;
            plVar16[6] = uVar14;
            plVar16[7] = lVar20;
            plVar16[8] = uVar14;
            return;
          }
          (*(code *)PTR_handle_error_00798ff0)();
        }
        goto LAB_005f1676;
      }
LAB_005f148b:
      (*(code *)PTR_handle_error_00798ff0)();
    }
  }
LAB_005f1497:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar3 = _UNK_0018d298;
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[2] = _DAT_0018d290;
    puVar9[3] = uVar3;
    uVar3 = _UNK_0018d288;
    *puVar9 = _DAT_0018d280;
    puVar9[1] = uVar3;
    plVar16[1] = 0x20;
    plVar16[2] = (longlong)puVar9;
    plVar16[3] = 0x20;
    goto LAB_005f1393;
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f1658:
  (*(code *)PTR_handle_error_00798ff0)();
  goto LAB_005f1676;
LAB_005f1248:
  if (*pcVar7 == '\x03') {
    uVar3 = *(undefined8 *)(pcVar7 + 0x10);
    lVar8 = *(longlong *)(pcVar7 + 0x18);
    ::<str>::trim_matches::<<char>::is_whitespace>(uVar3);
    if (extraout_RDX_01 != 0) {
      lVar20 = lVar10;
      local_e0 = local_b8;
      local_38 = uVar3;
      do {
        uVar17 = (ulonglong)*(ushort *)(lVar20 + 0x272);
        pcVar7 = (char *)(lVar20 + -0x20);
        uVar13 = (ulonglong)((uint)*(ushort *)(lVar20 + 0x272) * 8);
        lVar21 = uVar13 * 3;
        uVar19 = 0xffffffffffffffff;
        lVar22 = lVar20 + 0x168;
        do {
          if (lVar21 == 0) goto LAB_005f1324;
          uVar15 = *(ulonglong *)(lVar22 + 0x10);
          lVar23 = uVar15 - 4;
          if (3 < uVar15) {
            uVar15 = 4;
          }
          iVar6 = (*(code *)PTR_memcmp_00799528)(uVar13,uVar15);
          lVar23 = -lVar23;
          if (iVar6 != 0) {
            lVar23 = (longlong)iVar6;
          }
          bVar11 = (0 < lVar23) - (lVar23 < 0);
          uVar13 = (ulonglong)bVar11;
          pcVar7 = pcVar7 + 0x20;
          uVar19 = uVar19 + 1;
          lVar21 = lVar21 + -0x18;
          lVar22 = lVar22 + 0x18;
        } while (bVar11 == 1);
        uVar17 = uVar19;
        if (bVar11 == 0) goto LAB_005f145d;
LAB_005f1324:
        bVar24 = local_e0 == 0;
        local_e0 = local_e0 + -1;
        if (bVar24) goto LAB_005f13b1;
        lVar20 = *(longlong *)(lVar20 + 0x278 + uVar17 * 8);
      } while( true );
    }
  }
LAB_005f1346:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar3 = _UNK_0019e17d;
  if (puVar9 != (undefined8 *)0x0) {
    *(ulonglong *)((longlong)puVar9 + 0xe) = CONCAT62(_UNK_0019e177,_DAT_0019e175);
    *(undefined8 *)((longlong)puVar9 + 0x16) = uVar3;
    uVar3 = CONCAT26(_DAT_0019e175,_UNK_0019e16f);
    *puVar9 = _DAT_0019e167;
    puVar9[1] = uVar3;
    plVar16[1] = 0x1e;
    plVar16[2] = (longlong)puVar9;
    plVar16[3] = 0x1e;
LAB_005f1393:
    *plVar16 = -1;
    return;
  }
LAB_005f1628:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f1638:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f1676:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


