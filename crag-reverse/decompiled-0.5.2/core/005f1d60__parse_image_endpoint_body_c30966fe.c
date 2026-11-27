// 005f1d60 parse_image_endpoint_body

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::parse_image_endpoint_body */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_image_endpoint_body
          (longlong *param_1,char *param_2,longlong param_3,char *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  byte bVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  uint *puVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  char *pcVar28;
  undefined8 uVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  bool bVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  longlong local_210;
  byte *local_200;
  longlong local_1f0;
  longlong local_1e8;
  char *local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong lStack_198;
  longlong local_190;
  longlong local_188;
  char *local_180;
  longlong local_178;
  undefined4 local_16c;
  char *local_168;
  undefined8 *local_160;
  code *local_158;
  char *pcStack_150;
  longlong local_148;
  longlong local_140;
  longlong lStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  longlong local_118;
  char *local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  longlong lStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_16c = param_5;
  if (*param_2 == '\x05') {
    lVar19 = *(longlong *)(param_2 + 8);
    if (lVar19 != 0) {
      local_1f0 = *(longlong *)(param_2 + 0x10);
      local_168 = param_2 + 8;
      lVar25 = lVar19;
      local_210 = local_1f0;
      while( true ) {
        uVar3 = *(ushort *)(lVar25 + 0x272);
        uVar18 = (ulonglong)((uint)uVar3 * 8);
        lVar22 = uVar18 * 3;
        uVar27 = 0xffffffffffffffff;
        lVar34 = lVar25 + 0x168;
        puVar13 = (undefined8 *)(lVar25 + -8);
        do {
          puVar23 = puVar13;
          lVar26 = local_1f0;
          lVar33 = lVar19;
          if (lVar22 == 0) {
            uVar27 = (ulonglong)uVar3;
            goto LAB_005f1e65;
          }
          uVar20 = *(ulonglong *)(lVar34 + 0x10);
          lVar32 = uVar20 - 5;
          if (4 < uVar20) {
            uVar20 = 5;
          }
          iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
          lVar32 = -lVar32;
          if (iVar12 != 0) {
            lVar32 = (longlong)iVar12;
          }
          bVar15 = (0 < lVar32) - (lVar32 < 0);
          uVar18 = (ulonglong)bVar15;
          uVar27 = uVar27 + 1;
          lVar22 = lVar22 + -0x18;
          lVar34 = lVar34 + 0x18;
          puVar13 = puVar23 + 4;
        } while (bVar15 == 1);
        if (bVar15 == 0) break;
LAB_005f1e65:
        bVar35 = local_210 == 0;
        local_210 = local_210 + -1;
        if (bVar35) goto LAB_005f21ec;
        lVar25 = *(longlong *)(lVar25 + 0x278 + uVar27 * 8);
      }
      if (*(char *)(puVar23 + 1) != '\x03') {
LAB_005f21ec:
        do {
          uVar27 = (ulonglong)*(ushort *)(lVar33 + 0x272);
          uVar18 = (ulonglong)((uint)*(ushort *)(lVar33 + 0x272) * 8);
          lVar25 = uVar18 * 3;
          uVar20 = 0xffffffffffffffff;
          lVar22 = lVar33 + 0x168;
          puVar13 = (undefined8 *)(lVar33 + -8);
          do {
            puVar23 = puVar13;
            local_1e8 = param_3;
            local_1e0 = param_4;
            if (lVar25 == 0) goto LAB_005f21d5;
            uVar6 = *(ulonglong *)(lVar22 + 0x10);
            uVar21 = 6;
            if (uVar6 < 6) {
              uVar21 = uVar6;
            }
            iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar21);
            lVar34 = -(uVar6 - 6);
            if (iVar12 != 0) {
              lVar34 = (longlong)iVar12;
            }
            bVar15 = (0 < lVar34) - (lVar34 < 0);
            uVar18 = (ulonglong)bVar15;
            uVar20 = uVar20 + 1;
            lVar25 = lVar25 + -0x18;
            lVar22 = lVar22 + 0x18;
            puVar13 = puVar23 + 4;
          } while (bVar15 == 1);
          uVar27 = uVar20;
          if (bVar15 == 0) {
            if (*(char *)(puVar23 + 1) == '\x03') {
              auVar37 = ::<str>::trim_matches::<<char>::is_whitespace>(puVar23[3],puVar23[4]);
              local_178 = auVar37._8_8_;
              if ((auVar37._0_8_ != 0) && (local_178 != 0)) {
                local_1e0 = (char *)0x0;
                lVar25 = lVar19;
                local_210 = local_1f0;
                goto LAB_005f22d6;
              }
            }
            goto LAB_005f23a0;
          }
LAB_005f21d5:
          if (lVar26 == 0) goto LAB_005f23a0;
          lVar26 = lVar26 + -1;
          lVar33 = *(longlong *)(lVar33 + 0x278 + uVar27 * 8);
        } while( true );
      }
      pbVar5 = (byte *)puVar23[3];
      pcVar28 = (char *)puVar23[4];
      uVar36 = extraout_XMM0_Da;
      local_1b8 = pbVar5;
      uStack_1b0 = pcVar28;
      if (pcVar28 == param_4) {
        iVar12 = (*(code *)PTR_bcmp_00799020)();
        uVar36 = extraout_XMM0_Da_00;
        if (iVar12 == 0) goto LAB_005f21ec;
      }
      if (pcVar28 == &DAT_00000008) {
        if ((((((byte)(((byte)(*pbVar5 + 0xbf) < 0x1a) << 5 | *pbVar5) == 100) &&
              ((byte)(((byte)(pbVar5[1] + 0xbf) < 0x1a) << 5 | pbVar5[1]) == 0x61)) &&
             ((byte)(((byte)(pbVar5[2] + 0xbf) < 0x1a) << 5 | pbVar5[2]) == 0x6c)) &&
            (((byte)(((byte)(pbVar5[3] + 0xbf) < 0x1a) << 5 | pbVar5[3]) == 0x6c &&
             ((byte)(((byte)(pbVar5[4] + 0xbf) < 0x1a) << 5 | pbVar5[4]) == 0x2d)))) &&
           (((byte)(((byte)(pbVar5[5] + 0xbf) < 0x1a) << 5 | pbVar5[5]) == 0x65 &&
            (((byte)(((byte)(pbVar5[6] + 0xbf) < 0x1a) << 5 | pbVar5[6]) == 0x2d &&
             ((byte)(((byte)(pbVar5[7] + 0xbf) < 0x1a) << 5 | pbVar5[7]) == 0x33))))))
        goto LAB_005f21ec;
      }
      else if (pcVar28 == (char *)0xb) {
        if (((((((byte)(((byte)(*pbVar5 + 0xbf) < 0x1a) << 5 | *pbVar5) == 0x67) &&
               ((byte)(((byte)(pbVar5[1] + 0xbf) < 0x1a) << 5 | pbVar5[1]) == 0x70)) &&
              ((byte)(((byte)(pbVar5[2] + 0xbf) < 0x1a) << 5 | pbVar5[2]) == 0x74)) &&
             ((((byte)(((byte)(pbVar5[3] + 0xbf) < 0x1a) << 5 | pbVar5[3]) == 0x2d &&
               ((byte)(((byte)(pbVar5[4] + 0xbf) < 0x1a) << 5 | pbVar5[4]) == 0x69)) &&
              (((byte)(((byte)(pbVar5[5] + 0xbf) < 0x1a) << 5 | pbVar5[5]) == 0x6d &&
               (((byte)(((byte)(pbVar5[6] + 0xbf) < 0x1a) << 5 | pbVar5[6]) == 0x61 &&
                ((byte)(((byte)(pbVar5[7] + 0xbf) < 0x1a) << 5 | pbVar5[7]) == 0x67)))))))) &&
            ((byte)(((byte)(pbVar5[8] + 0xbf) < 0x1a) << 5 | pbVar5[8]) == 0x65)) &&
           (((byte)(((byte)(pbVar5[9] + 0xbf) < 0x1a) << 5 | pbVar5[9]) == 0x2d &&
            ((byte)(((byte)(pbVar5[10] + 0xbf) < 0x1a) << 5 | pbVar5[10]) == 0x31))))
        goto LAB_005f21ec;
      }
      else if (pcVar28 == (char *)0x12) {
        cVar16 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                           (pbVar5,0x12,"gemini-3-pro-image",0x12);
        uVar36 = extraout_XMM0_Da_01;
        if (cVar16 != '\0') goto LAB_005f21ec;
      }
      local_160 = &local_1b8;
      local_158 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      (*(code *)PTR_format_inner_00799048)(uVar36,&local_160);
      goto LAB_005f23fb;
    }
LAB_005f23a0:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar29 = _UNK_0019e1ce;
    if (puVar13 == (undefined8 *)0x0) goto LAB_005f3303;
    *(ulonglong *)((longlong)puVar13 + 0x19) = CONCAT17(UNK_0019e1cd,_DAT_0019e1c6);
    *(undefined8 *)((longlong)puVar13 + 0x21) = uVar29;
    uVar29 = CONCAT71(_DAT_0019e1c6,UNK_0019e1c5);
    puVar13[2] = _DAT_0019e1bd;
    puVar13[3] = uVar29;
    uVar29 = _UNK_0019e1b5;
    *puVar13 = _DAT_0019e1ad;
    puVar13[1] = uVar29;
    param_1[1] = 0x29;
    param_1[2] = (longlong)puVar13;
    param_1[3] = 0x29;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar29 = _UNK_0019e19d;
    if (puVar13 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_005f3303:
      uVar36 = (*(code *)PTR_handle_error_00798ff0)();
      if (local_1a0 != 0) {
        uVar36 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
      }
      if (local_1e8 - 1U < 0xfffffffffffffffe) {
        uVar36 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,1);
      }
      if ((longlong)local_1e0 < 1) {
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,1);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    puVar13[2] = _DAT_0019e195;
    puVar13[3] = uVar29;
    uVar29 = _UNK_0019e18d;
    *puVar13 = _DAT_0019e185;
    puVar13[1] = uVar29;
    puVar13[4] = 0x7463656a626f204e;
    param_1[1] = 0x28;
    param_1[2] = (longlong)puVar13;
    param_1[3] = 0x28;
  }
  goto LAB_005f23fb;
LAB_005f22d6:
  uVar3 = *(ushort *)(lVar25 + 0x272);
  uVar18 = (ulonglong)((uint)uVar3 * 8);
  lVar22 = uVar18 * 3;
  uVar27 = 0xffffffffffffffff;
  lVar34 = lVar25 + 0x168;
  puVar13 = (undefined8 *)(lVar25 + -8);
  do {
    puVar23 = puVar13;
    if (lVar22 == 0) {
      uVar27 = (ulonglong)uVar3;
      goto LAB_005f2375;
    }
    uVar20 = *(ulonglong *)(lVar34 + 0x10);
    lVar33 = uVar20 - 4;
    if (3 < uVar20) {
      uVar20 = 4;
    }
    iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
    lVar33 = -lVar33;
    if (iVar12 != 0) {
      lVar33 = (longlong)iVar12;
    }
    bVar15 = (0 < lVar33) - (lVar33 < 0);
    uVar18 = (ulonglong)bVar15;
    uVar27 = uVar27 + 1;
    lVar22 = lVar22 + -0x18;
    lVar34 = lVar34 + 0x18;
    puVar13 = puVar23 + 4;
  } while (bVar15 == 1);
  if (bVar15 != 0) {
LAB_005f2375:
    bVar35 = local_210 == 0;
    local_210 = local_210 + -1;
    if (bVar35) goto LAB_005f2444;
    lVar25 = *(longlong *)(lVar25 + 0x278 + uVar27 * 8);
    goto LAB_005f22d6;
  }
  if (*(char *)(puVar23 + 1) == '\x03') {
    local_1e0 = (char *)puVar23[3];
    local_180 = (char *)puVar23[4];
  }
  else {
    local_1e0 = (char *)0x0;
  }
LAB_005f2444:
  lVar25 = lVar19;
  local_210 = local_1f0;
  do {
    uVar3 = *(ushort *)(lVar25 + 0x272);
    pcVar28 = (char *)(lVar25 + -0x20);
    uVar18 = (ulonglong)((uint)uVar3 * 8);
    lVar22 = uVar18 * 3;
    uVar27 = 0xffffffffffffffff;
    lVar34 = lVar25 + 0x168;
    do {
      if (lVar22 == 0) {
        uVar27 = (ulonglong)uVar3;
        goto LAB_005f24f5;
      }
      uVar20 = *(ulonglong *)(lVar34 + 0x10);
      lVar33 = uVar20 - 0xc;
      if (0xb < uVar20) {
        uVar20 = 0xc;
      }
      iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
      lVar33 = -lVar33;
      if (iVar12 != 0) {
        lVar33 = (longlong)iVar12;
      }
      bVar15 = (0 < lVar33) - (lVar33 < 0);
      uVar18 = (ulonglong)bVar15;
      pcVar28 = pcVar28 + 0x20;
      uVar27 = uVar27 + 1;
      lVar22 = lVar22 + -0x18;
      lVar34 = lVar34 + 0x18;
    } while (bVar15 == 1);
    if (bVar15 == 0) goto LAB_005f25ef;
LAB_005f24f5:
    bVar35 = local_210 == 0;
    local_210 = local_210 + -1;
    if (bVar35) break;
    lVar25 = *(longlong *)(lVar25 + 0x278 + uVar27 * 8);
  } while( true );
  local_1c8 = 0;
  lVar25 = lVar19;
  local_210 = local_1f0;
  do {
    uVar3 = *(ushort *)(lVar25 + 0x272);
    pcVar28 = (char *)(lVar25 + -0x20);
    uVar18 = (ulonglong)((uint)uVar3 * 8);
    lVar22 = uVar18 * 3;
    uVar27 = 0xffffffffffffffff;
    lVar34 = lVar25 + 0x168;
    do {
      if (lVar22 == 0) {
        uVar27 = (ulonglong)uVar3;
        goto LAB_005f25c8;
      }
      uVar20 = *(ulonglong *)(lVar34 + 0x10);
      lVar33 = uVar20 - 0xb;
      if (10 < uVar20) {
        uVar20 = 0xb;
      }
      iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
      lVar33 = -lVar33;
      if (iVar12 != 0) {
        lVar33 = (longlong)iVar12;
      }
      bVar15 = (0 < lVar33) - (lVar33 < 0);
      uVar18 = (ulonglong)bVar15;
      pcVar28 = pcVar28 + 0x20;
      uVar27 = uVar27 + 1;
      lVar22 = lVar22 + -0x18;
      lVar34 = lVar34 + 0x18;
    } while (bVar15 == 1);
    if (bVar15 == 0) break;
LAB_005f25c8:
    bVar35 = local_210 == 0;
    local_210 = local_210 + -1;
    if (bVar35) goto LAB_005f2618;
    lVar25 = *(longlong *)(lVar25 + 0x278 + uVar27 * 8);
  } while( true );
LAB_005f25ef:
  if (*pcVar28 == '\x03') {
    local_1c8 = *(undefined8 *)(pcVar28 + 0x10);
    local_1d0 = *(undefined8 *)(pcVar28 + 0x18);
  }
  else {
    local_1c8 = 0;
  }
LAB_005f2618:
  local_1e8 = 0;
  lVar25 = lVar19;
  local_210 = local_1f0;
  while( true ) {
    uVar3 = *(ushort *)(lVar25 + 0x272);
    uVar18 = (ulonglong)((uint)uVar3 * 8);
    lVar22 = uVar18 * 3;
    uVar27 = 0xffffffffffffffff;
    lVar34 = lVar25 + 0x168;
    puVar13 = (undefined8 *)(lVar25 + -8);
    do {
      puVar23 = puVar13;
      if (lVar22 == 0) {
        uVar27 = (ulonglong)uVar3;
        goto LAB_005f26d1;
      }
      uVar20 = *(ulonglong *)(lVar34 + 0x10);
      lVar33 = uVar20 - 7;
      if (6 < uVar20) {
        uVar20 = 7;
      }
      iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
      lVar33 = -lVar33;
      if (iVar12 != 0) {
        lVar33 = (longlong)iVar12;
      }
      bVar15 = (0 < lVar33) - (lVar33 < 0);
      uVar18 = (ulonglong)bVar15;
      uVar27 = uVar27 + 1;
      lVar22 = lVar22 + -0x18;
      lVar34 = lVar34 + 0x18;
      puVar13 = puVar23 + 4;
    } while (bVar15 == 1);
    if (bVar15 == 0) break;
LAB_005f26d1:
    bVar35 = local_210 == 0;
    local_210 = local_210 + -1;
    if (bVar35) goto LAB_005f2726;
    lVar25 = *(longlong *)(lVar25 + 0x278 + uVar27 * 8);
  }
  if (*(char *)(puVar23 + 1) == '\x03') {
    local_1e8 = puVar23[3];
    local_188 = puVar23[4];
  }
  else {
    local_1e8 = 0;
  }
LAB_005f2726:
  lVar25 = lVar19;
  local_210 = local_1f0;
  do {
    uVar3 = *(ushort *)(lVar25 + 0x272);
    pcVar28 = (char *)(lVar25 + -0x20);
    uVar18 = (ulonglong)((uint)uVar3 * 8);
    lVar22 = uVar18 * 3;
    uVar27 = 0xffffffffffffffff;
    lVar34 = lVar25 + 0x168;
    do {
      if (lVar22 == 0) {
        uVar27 = (ulonglong)uVar3;
        goto LAB_005f27df;
      }
      uVar20 = *(ulonglong *)(lVar34 + 0x10);
      lVar33 = uVar20 - 10;
      if (9 < uVar20) {
        uVar20 = 10;
      }
      iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
      lVar33 = -lVar33;
      if (iVar12 != 0) {
        lVar33 = (longlong)iVar12;
      }
      bVar15 = (0 < lVar33) - (lVar33 < 0);
      uVar18 = (ulonglong)bVar15;
      pcVar28 = pcVar28 + 0x20;
      uVar27 = uVar27 + 1;
      lVar22 = lVar22 + -0x18;
      lVar34 = lVar34 + 0x18;
    } while (bVar15 == 1);
    if (bVar15 == 0) goto LAB_005f28e1;
LAB_005f27df:
    bVar35 = local_210 == 0;
    local_210 = local_210 + -1;
    if (bVar35) break;
    lVar25 = *(longlong *)(lVar25 + 0x278 + uVar27 * 8);
  } while( true );
  uVar29 = 0;
  lVar25 = lVar19;
  local_210 = local_1f0;
  do {
    uVar3 = *(ushort *)(lVar25 + 0x272);
    pcVar28 = (char *)(lVar25 + -0x20);
    uVar18 = (ulonglong)((uint)uVar3 * 8);
    lVar22 = uVar18 * 3;
    uVar27 = 0xffffffffffffffff;
    lVar34 = lVar25 + 0x168;
    do {
      if (lVar22 == 0) {
        uVar27 = (ulonglong)uVar3;
        goto LAB_005f28ae;
      }
      uVar20 = *(ulonglong *)(lVar34 + 0x10);
      lVar33 = uVar20 - 9;
      if (8 < uVar20) {
        uVar20 = 9;
      }
      iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
      lVar33 = -lVar33;
      if (iVar12 != 0) {
        lVar33 = (longlong)iVar12;
      }
      bVar15 = (0 < lVar33) - (lVar33 < 0);
      uVar18 = (ulonglong)bVar15;
      pcVar28 = pcVar28 + 0x20;
      uVar27 = uVar27 + 1;
      lVar22 = lVar22 + -0x18;
      lVar34 = lVar34 + 0x18;
    } while (bVar15 == 1);
    if (bVar15 == 0) goto LAB_005f28e1;
LAB_005f28ae:
    bVar35 = local_210 == 0;
    local_210 = local_210 + -1;
    if (bVar35) break;
    lVar25 = *(longlong *)(lVar25 + 0x278 + uVar27 * 8);
  } while( true );
  uVar14 = 0xffffffffffffffff;
  goto LAB_005f2901;
LAB_005f316b:
  local_200 = (byte *)0xffffffffffffffff;
LAB_005f30bd:
  do {
    uVar3 = *(ushort *)(lVar19 + 0x272);
    pcVar28 = (char *)(lVar19 + -0x20);
    uVar18 = (ulonglong)((uint)uVar3 * 8);
    lVar34 = uVar18 * 3;
    uVar27 = 0xffffffffffffffff;
    lVar26 = lVar19 + 0x168;
    do {
      if (lVar34 == 0) {
        uVar27 = (ulonglong)uVar3;
        goto LAB_005f3151;
      }
      uVar20 = *(ulonglong *)(lVar26 + 0x10);
      lVar33 = uVar20 - 0xd;
      if (0xc < uVar20) {
        uVar20 = 0xd;
      }
      iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
      lVar33 = -lVar33;
      if (iVar12 != 0) {
        lVar33 = (longlong)iVar12;
      }
      bVar15 = (0 < lVar33) - (lVar33 < 0);
      uVar18 = (ulonglong)bVar15;
      pcVar28 = pcVar28 + 0x20;
      uVar27 = uVar27 + 1;
      lVar34 = lVar34 + -0x18;
      lVar26 = lVar26 + 0x18;
    } while (bVar15 == 1);
    if (bVar15 == 0) goto LAB_005f319a;
LAB_005f3151:
    bVar35 = local_1f0 == 0;
    local_1f0 = local_1f0 + -1;
    if (bVar35) break;
    lVar19 = *(longlong *)(lVar19 + 0x278 + uVar27 * 8);
  } while( true );
  pcVar28 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::get::<str>(local_168,&DAT_0019e1d6,0xf);
  if (pcVar28 != (char *)0x0) {
LAB_005f319a:
    if (*pcVar28 == '\x03') {
      lVar33 = *(longlong *)(pcVar28 + 0x18);
      uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                         (&local_160,lVar33,0,1,1);
      if ((int)local_160 != 1) {
        if (lVar33 == 0) {
          lVar33 = 0;
        }
        else {
          (*(code *)PTR_memcpy_00799008)(uVar36,lVar33);
        }
        goto LAB_005f3210;
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005f32f1;
    }
  }
  pcStack_150 = pcVar28;
  local_158 = (code *)0xffffffffffffffff;
LAB_005f3210:
  param_1[5] = local_190;
  param_1[3] = local_1a0;
  param_1[4] = lStack_198;
  *param_1 = local_178;
  param_1[1] = local_118;
  param_1[2] = local_178;
  param_1[6] = (longlong)puVar13;
  param_1[7] = (longlong)pcVar7;
  param_1[8] = (longlong)local_180;
  param_1[9] = lVar25;
  param_1[10] = lVar22;
  param_1[0xb] = local_188;
  param_1[0xc] = (longlong)local_200;
  param_1[0xd] = (longlong)local_110;
  param_1[0xe] = local_1d8;
  param_1[0xf] = (longlong)local_158;
  param_1[0x10] = (longlong)pcStack_150;
  param_1[0x11] = lVar33;
  *(uint *)(param_1 + 0x12) = uVar8;
  *(char *)((longlong)param_1 + 0x94) = (char)local_16c;
  return param_1;
LAB_005f2aa7:
  uVar8 = 1;
LAB_005f2aaf:
  local_1a0 = 0;
  lStack_198 = 8;
  local_190 = 0;
  if ((char)local_16c == '\0') {
LAB_005f2ddb:
    if (-1 < local_178) {
      if (local_178 == 0) {
        local_118 = 1;
LAB_005f2e65:
        lVar34 = lVar19;
        local_210 = local_1f0;
        do {
          local_1d8 = (ulonglong)*(ushort *)(lVar34 + 0x272);
          uVar18 = (ulonglong)((uint)*(ushort *)(lVar34 + 0x272) * 8);
          lVar26 = uVar18 * 3;
          uVar27 = 0xffffffffffffffff;
          lVar32 = lVar34 + 0x168;
          puVar31 = (ulonglong *)(lVar34 + -8);
          do {
            puVar30 = puVar31;
            if (lVar26 == 0) {
              uVar27 = local_1d8;
              goto LAB_005f2f11;
            }
            uVar20 = *(ulonglong *)(lVar32 + 0x10);
            lVar33 = uVar20 - 7;
            if (6 < uVar20) {
              uVar20 = 7;
            }
            iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar20);
            lVar33 = -lVar33;
            if (iVar12 != 0) {
              lVar33 = (longlong)iVar12;
            }
            bVar15 = (0 < lVar33) - (lVar33 < 0);
            uVar18 = (ulonglong)bVar15;
            puVar31 = puVar30 + 4;
            uVar27 = uVar27 + 1;
            lVar26 = lVar26 + -0x18;
            lVar32 = lVar32 + 0x18;
          } while (bVar15 == 1);
          if (bVar15 == 0) {
            if ((char)puVar30[1] != '\x03') {
              local_200 = (byte *)0xffffffffffffffff;
              goto LAB_005f30bd;
            }
            local_1d8 = *puVar31;
            uVar36 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_160,local_1d8,0,1,1);
            if ((int)local_160 == 1) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005f32f1;
            }
            local_200 = (byte *)local_158;
            local_110 = pcStack_150;
            if (local_1d8 == 0) {
              local_1d8 = 0;
            }
            else {
              (*(code *)PTR_memcpy_00799008)(uVar36,local_1d8);
            }
            goto LAB_005f30bd;
          }
LAB_005f2f11:
          bVar35 = local_210 == 0;
          local_210 = local_210 + -1;
          if (bVar35) goto LAB_005f316b;
          lVar34 = *(longlong *)(lVar34 + 0x278 + uVar27 * 8);
        } while( true );
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar34 = local_178;
      lVar26 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar26 != 0) {
        local_118 = lVar26;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar34);
        goto LAB_005f2e65;
      }
    }
  }
  else {
    pcVar28 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::get::<str>(local_168,"images",6);
    if ((pcVar28 == (char *)0x0) || (*pcVar28 != '\x04')) {
      lVar34 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
               ::get::<str>(local_168,&DAT_0019e89f,5);
      if (lVar34 == 0) goto LAB_005f2cfe;
      parse_inline_image_value(&local_160,lVar34,"ref",3);
      local_1b8 = (byte *)local_158;
      pbVar5 = local_1b8;
      uStack_1b0 = pcStack_150;
      pcVar28 = uStack_1b0;
      local_1a8 = local_148;
      if (local_160 != (undefined8 *)0xffffffffffffffff) {
        local_80 = local_120;
        local_90 = local_130;
        uStack_8c = uStack_12c;
        uStack_88 = uStack_128;
        uStack_84 = uStack_124;
        local_a0 = local_140;
        lStack_98 = lStack_138;
        local_c0 = local_160;
        local_1b8._0_4_ = SUB84(local_158,0);
        local_1b8._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
        uStack_1b0._0_4_ = SUB84(pcStack_150,0);
        uStack_1b0._4_4_ = (undefined4)((ulonglong)pcStack_150 >> 0x20);
        local_b8 = (undefined4)local_1b8;
        uStack_b4 = local_1b8._4_4_;
        uStack_b0 = (undefined4)uStack_1b0;
        uStack_ac = uStack_1b0._4_4_;
        local_a8 = local_148;
        local_1b8 = pbVar5;
        uStack_1b0 = pcVar28;
        <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::InlineMedia>>::
        push_mut(&local_1a0,&local_c0);
        goto LAB_005f2cfe;
      }
LAB_005f2e3e:
      param_1[3] = local_1a8;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_1b8;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_1b8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1b0;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_1b0._4_4_;
LAB_005f302f:
      *param_1 = -1;
      uVar36 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::InlineMedia>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(&local_1a0);
      if (local_1a0 != 0) {
        uVar36 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,8);
      }
      if (lVar25 - 1U < 0xfffffffffffffffe) {
        uVar36 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,1);
      }
      if ((longlong)puVar13 < 1) {
        return param_1;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar36,1);
      return param_1;
    }
    lVar33 = 0;
    if (*(longlong *)(pcVar28 + 0x18) != 0) {
      lVar34 = *(longlong *)(pcVar28 + 0x10);
      lVar26 = *(longlong *)(pcVar28 + 0x18) << 5;
      do {
        parse_inline_image_value(&local_160,lVar34,"ref",3);
        lVar33 = local_190;
        local_1b8 = (byte *)local_158;
        pbVar5 = local_1b8;
        uStack_1b0 = pcStack_150;
        pcVar28 = uStack_1b0;
        local_1a8 = local_148;
        if (local_160 == (undefined8 *)0xffffffffffffffff) goto LAB_005f2e3e;
        local_c8 = local_120;
        local_d8 = local_130;
        uStack_d4 = uStack_12c;
        uStack_d0 = uStack_128;
        uStack_cc = uStack_124;
        local_e8 = local_140;
        lStack_e0 = lStack_138;
        local_108 = local_160;
        lStack_f0 = local_148;
        local_1b8._0_4_ = SUB84(local_158,0);
        local_1b8._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
        uStack_1b0._0_4_ = SUB84(pcStack_150,0);
        uStack_1b0._4_4_ = (undefined4)((ulonglong)pcStack_150 >> 0x20);
        uStack_100 = (undefined4)local_1b8;
        uStack_fc = local_1b8._4_4_;
        uStack_f8 = (undefined4)uStack_1b0;
        uStack_f4 = uStack_1b0._4_4_;
        local_1b8 = pbVar5;
        uStack_1b0 = pcVar28;
        if (local_190 == local_1a0) {
          <alloc[12e961f32105355]::raw_vec::RawVec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>
          ::grow_one(&local_1a0);
        }
        lVar34 = lVar34 + 0x20;
        *(undefined8 *)(lStack_198 + 0x40 + lVar33 * 0x48) = local_c8;
        puVar23 = (undefined8 *)(lStack_198 + 0x30 + lVar33 * 0x48);
        *puVar23 = CONCAT44(uStack_d4,local_d8);
        puVar23[1] = CONCAT44(uStack_cc,uStack_d0);
        plVar2 = (longlong *)(lStack_198 + 0x20 + lVar33 * 0x48);
        *plVar2 = local_e8;
        plVar2[1] = lStack_e0;
        puVar23 = (undefined8 *)(lStack_198 + 0x10 + lVar33 * 0x48);
        *puVar23 = CONCAT44(uStack_f4,uStack_f8);
        puVar23[1] = lStack_f0;
        puVar1 = (undefined4 *)(lStack_198 + lVar33 * 0x48);
        *puVar1 = (undefined4)local_108;
        puVar1[1] = local_108._4_4_;
        puVar1[2] = uStack_100;
        puVar1[3] = uStack_fc;
        local_190 = lVar33 + 1;
        lVar26 = lVar26 + -0x20;
        lVar33 = 0;
      } while (lVar26 != 0);
    }
LAB_005f2cfe:
    lVar34 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
             ::get::<str>(local_168,&DAT_0018e044,4);
    if (lVar34 != 0) {
      parse_inline_image_value(&local_160,lVar34,&DAT_0018e044,4);
      local_1b8 = (byte *)local_158;
      pbVar5 = local_1b8;
      uStack_1b0 = pcStack_150;
      pcVar28 = uStack_1b0;
      local_1a8 = local_148;
      if (local_160 == (undefined8 *)0xffffffffffffffff) goto LAB_005f2e3e;
      local_38 = local_120;
      local_48 = local_130;
      uStack_44 = uStack_12c;
      uStack_40 = uStack_128;
      uStack_3c = uStack_124;
      local_58 = local_140;
      lStack_50 = lStack_138;
      local_78 = local_160;
      local_1b8._0_4_ = SUB84(local_158,0);
      local_1b8._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
      uStack_1b0._0_4_ = SUB84(pcStack_150,0);
      uStack_1b0._4_4_ = (undefined4)((ulonglong)pcStack_150 >> 0x20);
      local_70 = (undefined4)local_1b8;
      uStack_6c = local_1b8._4_4_;
      uStack_68 = (undefined4)uStack_1b0;
      uStack_64 = uStack_1b0._4_4_;
      local_60 = local_148;
      local_1b8 = pbVar5;
      uStack_1b0 = pcVar28;
      <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::InlineMedia>>::
      push_mut(&local_1a0,&local_78);
    }
    if (local_190 != 0) goto LAB_005f2ddb;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar28 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar29 = s_east_one_reference_image_0019f3a0._8_8_;
    if (pcVar28 != (char *)0x0) {
      *(undefined8 *)(pcVar28 + 0x20) = s_east_one_reference_image_0019f3a0._0_8_;
      *(undefined8 *)(pcVar28 + 0x28) = uVar29;
      uVar29 = s_st_requires_at_l_0019f390._8_8_;
      *(undefined8 *)(pcVar28 + 0x10) = s_st_requires_at_l_0019f390._0_8_;
      *(undefined8 *)(pcVar28 + 0x18) = uVar29;
      uVar10 = s_image_edit_reque_0019f380._12_4_;
      uVar9 = s_image_edit_reque_0019f380._8_4_;
      uVar36 = s_image_edit_reque_0019f380._4_4_;
      *(undefined4 *)pcVar28 = s_image_edit_reque_0019f380._0_4_;
      *(undefined4 *)(pcVar28 + 4) = uVar36;
      *(undefined4 *)(pcVar28 + 8) = uVar9;
      *(undefined4 *)(pcVar28 + 0xc) = uVar10;
      pcVar28[0x30] = 'c';
      pcVar28[0x31] = 'e';
      pcVar28[0x32] = ' ';
      pcVar28[0x33] = 'i';
      pcVar28[0x34] = 'm';
      pcVar28[0x35] = 'a';
      pcVar28[0x36] = 'g';
      pcVar28[0x37] = 'e';
      param_1[1] = 0x38;
      param_1[2] = (longlong)pcVar28;
      param_1[3] = 0x38;
      goto LAB_005f302f;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f32f1:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
LAB_005f28e1:
  uVar14 = 0;
  if (*pcVar28 == '\x03') {
    uVar29 = *(undefined8 *)(pcVar28 + 0x10);
    uVar14 = *(undefined8 *)(pcVar28 + 0x18);
  }
  else {
    uVar29 = 0;
  }
LAB_005f2901:
  map_image_size(&local_160,local_1e0,local_180,local_1c8,local_1d0,local_1e8,local_188,uVar29,
                 uVar14);
  lVar22 = local_140;
  lVar25 = local_148;
  pcVar7 = local_158;
  puVar13 = local_160;
  if (local_160 != (undefined8 *)0xfffffffffffffffe) {
    local_180 = pcStack_150;
    local_188 = lStack_138;
    lVar34 = lVar19;
    local_210 = local_1f0;
    do {
      uVar3 = *(ushort *)(lVar34 + 0x272);
      uVar18 = (ulonglong)((uint)uVar3 * 8);
      lVar26 = uVar18 * 3;
      uVar27 = 0xffffffffffffffff;
      lVar32 = lVar34 + 0x168;
      puVar11 = (uint *)(lVar34 + -0x10);
      do {
        puVar24 = puVar11;
        if (lVar26 == 0) {
          uVar27 = (ulonglong)uVar3;
          goto LAB_005f2a53;
        }
        lVar33 = lVar32 + 0x18;
        lVar32 = *(longlong *)(lVar32 + 0x10);
        iVar12 = (*(code *)PTR_memcmp_00799528)(uVar18,lVar32 != 0);
        lVar32 = 1 - lVar32;
        if (iVar12 != 0) {
          lVar32 = (longlong)iVar12;
        }
        cVar16 = (0 < lVar32) - (lVar32 < 0);
        uVar18 = CONCAT71((int7)((ulonglong)lVar32 >> 8),cVar16);
        uVar27 = uVar27 + 1;
        lVar26 = lVar26 + -0x18;
        lVar32 = lVar33;
        puVar11 = puVar24 + 8;
      } while (cVar16 == '\x01');
      if (cVar16 == '\0') {
        uVar8 = 1;
        if (((char)puVar24[4] == '\x02') && (*(longlong *)(puVar24 + 6) == 0)) {
          uVar4 = puVar24[8];
          uVar17 = 4;
          if (uVar4 < 4) {
            uVar17 = uVar4;
          }
          uVar8 = 1;
          if (uVar4 != 0) {
            uVar8 = uVar17;
          }
        }
        goto LAB_005f2aaf;
      }
LAB_005f2a53:
      bVar35 = local_210 == 0;
      local_210 = local_210 + -1;
      if (bVar35) goto LAB_005f2aa7;
      lVar34 = *(longlong *)(lVar34 + 0x278 + uVar27 * 8);
    } while( true );
  }
  param_1[1] = (longlong)local_158;
  param_1[2] = (longlong)pcStack_150;
  param_1[3] = local_148;
LAB_005f23fb:
  *param_1 = -1;
  return param_1;
}


