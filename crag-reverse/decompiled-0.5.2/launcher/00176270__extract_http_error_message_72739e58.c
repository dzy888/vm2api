// 00176270 extract_http_error_message

/* WARNING: Type propagation algorithm not settling */
/* craggemini[b21da2d71f2da7a3]::mcp_stdio::extract_http_error_message */

longlong * __rustcall
craggemini[b21da2d71f2da7a3]::mcp_stdio::extract_http_error_message
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong *unaff_RBP;
  longlong lVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong *local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  longlong *local_c0;
  code *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined1 local_a0 [16];
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  undefined1 *local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_40 = param_3;
  pcVar3 = (char *)(*(code *)PTR_index_into_00219dc0)(param_4,param_2);
  auVar22._8_8_ = local_58._8_8_;
  auVar22._0_8_ = local_58._0_8_;
  if (pcVar3 == (char *)0x0) goto LAB_001762e0;
  local_58 = auVar22;
  if (*pcVar3 != '\x03') goto LAB_001762e0;
  auVar22 = <str>::trim_matches::<<char>::is_whitespace>
                      (*(undefined8 *)(pcVar3 + 0x10),*(undefined8 *)(pcVar3 + 0x18));
  if (auVar22._0_8_ == 0) goto LAB_001762e0;
  if (auVar22._8_8_ == 0) goto LAB_001762e0;
  if (-1 < auVar22._8_8_) goto LAB_00176ac6;
LAB_001762d4:
  (*(code *)PTR_handle_error_00219c78)();
LAB_001762e0:
  local_38 = param_4;
  plVar4 = (longlong *)(*(code *)PTR_index_into_00219dc0)();
  if (((plVar4 != (longlong *)0x0) && ((char)*plVar4 == '\x05')) &&
     (uVar10 = plVar4[1], uVar10 != 0)) {
    local_e8 = plVar4[2];
    local_80 = uVar10;
    while( true ) {
      puVar8 = (undefined1 *)(ulonglong)*(ushort *)(local_80 + 0x272);
      param_4 = (undefined8 *)((ulonglong)((uint)*(ushort *)(local_80 + 0x272) * 8) * 3);
      puVar12 = (undefined1 *)0xffffffffffffffff;
      plVar16 = (longlong *)(local_80 + 0x168);
      puVar5 = (undefined8 *)(local_80 - 8);
      local_78 = puVar8;
      do {
        puVar18 = puVar5;
        if (param_4 == (undefined8 *)0x0) {
          param_4 = (undefined8 *)0x0;
          puVar12 = local_78;
          goto LAB_001763e4;
        }
        unaff_RBP = plVar16 + 3;
        puVar8 = (undefined1 *)plVar16[2];
        puVar15 = puVar8 + -7;
        if ((undefined1 *)0x6 < puVar8) {
          puVar8 = &DAT_00000007;
        }
        iVar2 = (*(code *)PTR_memcmp_00219ed8)();
        lVar19 = -(longlong)puVar15;
        if (iVar2 != 0) {
          lVar19 = (longlong)iVar2;
        }
        puVar12 = puVar12 + 1;
        param_4 = param_4 + -3;
        plVar16 = unaff_RBP;
        puVar5 = puVar18 + 4;
      } while ((char)((0 < lVar19) - (lVar19 < 0)) == '\x01');
      if (0 < lVar19 == lVar19 < 0) break;
LAB_001763e4:
      bVar20 = local_e8 == 0;
      local_e8 = local_e8 + -1;
      if (bVar20) goto LAB_00176443;
      local_80 = *(ulonglong *)(local_80 + 0x278 + (longlong)puVar12 * 8);
    }
    if (*(char *)(puVar18 + 1) == '\x03') {
      auVar23 = <str>::trim_matches::<<char>::is_whitespace>(puVar18[3],puVar18[4]);
      uVar10 = plVar4[1];
      goto LAB_0017644d;
    }
LAB_00176443:
    auVar23._8_8_ = 0;
    auVar23._0_8_ = puVar8;
    auVar23 = auVar23 << 0x40;
LAB_0017644d:
    local_78 = (undefined1 *)CONCAT71(local_78._1_7_,auVar23._8_8_ == 0 || auVar23._0_8_ == 0);
    local_58 = auVar23;
    if (uVar10 != 0) {
      local_e8 = plVar4[2];
      do {
        local_80 = (ulonglong)*(ushort *)(uVar10 + 0x272);
        uVar11 = (ulonglong)((uint)*(ushort *)(uVar10 + 0x272) * 8);
        lVar19 = uVar11 * 3;
        uVar13 = 0xffffffffffffffff;
        lVar6 = uVar10 + 0x168;
        param_4 = (undefined8 *)(uVar10 - 8);
        local_58 = auVar23;
        do {
          puVar5 = param_4;
          if (lVar19 == 0) {
            uVar13 = local_80;
            param_4 = puVar5;
            auVar23 = local_58;
            goto LAB_00176521;
          }
          uVar9 = *(ulonglong *)(lVar6 + 0x10);
          lVar14 = uVar9 - 4;
          if (3 < uVar9) {
            uVar9 = 4;
          }
          iVar2 = (*(code *)PTR_memcmp_00219ed8)(uVar11,uVar9);
          unaff_RBP = (longlong *)-lVar14;
          if (iVar2 != 0) {
            unaff_RBP = (longlong *)(longlong)iVar2;
          }
          bVar7 = (0 < (longlong)unaff_RBP) - ((longlong)unaff_RBP < 0);
          uVar11 = (ulonglong)bVar7;
          param_4 = puVar5 + 4;
          uVar13 = uVar13 + 1;
          lVar19 = lVar19 + -0x18;
          lVar6 = lVar6 + 0x18;
        } while (bVar7 == 1);
        auVar23 = local_58;
        if (bVar7 == 0) {
          if (*(char *)(puVar5 + 1) == '\x03') {
            unaff_RBP = (longlong *)*param_4;
            if ((longlong)unaff_RBP < 0) {
LAB_00176569:
              (*(code *)PTR_handle_error_00219c78)();
              break;
            }
            plVar17 = unaff_RBP;
            if (unaff_RBP == (longlong *)0x0) {
              local_e0 = (undefined8 *)0x1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
              puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
              if (puVar5 == (undefined8 *)0x0) goto LAB_00176569;
              (*(code *)PTR_memcpy_00219c60)();
              local_e0 = puVar5;
            }
          }
          else {
            plVar16 = (longlong *)0xffffffffffffffff;
            if (*(char *)(puVar5 + 1) != '\x02') {
LAB_00176727:
              uVar10 = plVar4[1];
              local_f0 = unaff_RBP;
              goto joined_r0x00176733;
            }
            if (puVar5[2] == 0) {
              param_4 = (undefined8 *)puVar5[3];
              if ((longlong)param_4 < 0) goto LAB_00176727;
LAB_00176681:
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
              puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
              if (puVar5 == (undefined8 *)0x0) {
LAB_00176e18:
                (*(code *)PTR_handle_error_00219c78)();
                if (local_c0 != (longlong *)0x0) {
                  (*(code *)PTR___rust_dealloc_00219c40)();
                }
                    /* WARNING: Subroutine does not return */
                _Unwind_Resume();
              }
              local_c0 = (longlong *)0x13;
              local_b0 = (longlong *)0x0;
              plVar17 = (longlong *)0x13;
              unaff_RBP = (longlong *)0x0;
              local_b8 = (code *)puVar5;
            }
            else {
              if ((int)puVar5[2] != 1) goto LAB_00176727;
              if (-1 < (longlong)puVar5[3]) goto LAB_00176681;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
              unaff_RBP = (longlong *)0x1;
              puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
              if (puVar5 == (undefined8 *)0x0) goto LAB_00176e18;
              local_c0 = (longlong *)0x14;
              *(undefined1 *)puVar5 = 0x2d;
              local_b0 = (longlong *)0x1;
              plVar17 = (longlong *)0x14;
              local_b8 = (code *)puVar5;
            }
            local_e0 = (undefined8 *)local_b8;
            param_4 = (undefined8 *)0x13;
            (*(code *)PTR__fmt_00219ee0)();
            if ((undefined8 *)((longlong)plVar17 - (longlong)unaff_RBP) < param_4) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_c0,unaff_RBP,param_4,1,1);
              local_e0 = (undefined8 *)local_b8;
              unaff_RBP = local_b0;
            }
            else if (param_4 == (undefined8 *)0x0) goto LAB_00176752;
            (*(code *)PTR_memcpy_00219c60)();
            if (local_c0 == (longlong *)0xffffffffffffffff) goto LAB_00176780;
            unaff_RBP = (longlong *)((longlong)unaff_RBP + (longlong)param_4);
            plVar17 = local_c0;
            local_e0 = (undefined8 *)local_b8;
          }
LAB_00176752:
          param_4 = local_e0;
          if (unaff_RBP == (longlong *)0x0) {
            plVar16 = (longlong *)0xffffffffffffffff;
            if (plVar17 != (longlong *)0x0) {
              (*(code *)PTR___rust_dealloc_00219c40)();
            }
          }
          else {
            plVar16 = plVar17;
          }
          goto LAB_00176780;
        }
LAB_00176521:
        bVar20 = local_e8 == 0;
        local_e8 = local_e8 + -1;
        if (bVar20) goto LAB_0017673a;
        uVar10 = *(ulonglong *)(uVar10 + 0x278 + uVar13 * 8);
      } while( true );
    }
    plVar16 = (longlong *)0xffffffffffffffff;
    local_f0 = plVar4;
    goto LAB_00176a5d;
  }
  goto LAB_00176a87;
LAB_00176877:
  do {
    uVar1 = *(ushort *)(local_60 + 0x272);
    unaff_RBP = (longlong *)(local_60 - 0x20);
    uVar13 = (ulonglong)((uint)uVar1 * 8);
    lVar19 = uVar13 * 3;
    uVar10 = 0xffffffffffffffff;
    lVar6 = local_60 + 0x168;
    do {
      if (lVar19 == 0) {
        uVar10 = (ulonglong)uVar1;
        goto LAB_00176922;
      }
      uVar11 = *(ulonglong *)(lVar6 + 0x10);
      lVar14 = uVar11 - 6;
      if (5 < uVar11) {
        uVar11 = 6;
      }
      iVar2 = (*(code *)PTR_memcmp_00219ed8)(uVar13,uVar11);
      param_4 = (undefined8 *)-lVar14;
      if (iVar2 != 0) {
        param_4 = (undefined8 *)(longlong)iVar2;
      }
      bVar7 = (0 < (longlong)param_4) - ((longlong)param_4 < 0);
      uVar13 = (ulonglong)bVar7;
      unaff_RBP = unaff_RBP + 4;
      uVar10 = uVar10 + 1;
      lVar19 = lVar19 + -0x18;
      lVar6 = lVar6 + 0x18;
    } while (bVar7 == 1);
    if (bVar7 == 0) break;
LAB_00176922:
    if (local_48 == 0) goto LAB_00176ddf;
    local_60 = *(ulonglong *)(local_60 + 0x278 + uVar10 * 8);
    local_48 = local_48 + -1;
  } while( true );
LAB_00176956:
  plVar16 = local_88;
  if ((char)*unaff_RBP == '\x03') {
    auVar24 = <str>::trim_matches::<<char>::is_whitespace>(unaff_RBP[2],unaff_RBP[3]);
    bVar20 = auVar24._8_8_ == 0 || auVar24._0_8_ == 0;
    goto joined_r0x0017699f;
  }
  goto LAB_00176a5d;
LAB_00176ddf:
  plVar16 = local_88;
  goto LAB_00176a5d;
LAB_00176b6c:
  (*(code *)PTR_handle_error_00219c78)();
LAB_00176b78:
  if ((bool)uVar21) {
    lVar19 = 1;
    goto LAB_00176bb8;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  lVar19 = (*(code *)PTR___rust_alloc_00219c88)();
  uVar21 = lVar19 == 0;
  if (!(bool)uVar21) {
    (*(code *)PTR_memcpy_00219c60)();
LAB_00176bb8:
    *param_1 = (longlong)puVar5;
    param_1[1] = lVar19;
    param_1[2] = (longlong)puVar5;
    return param_1;
  }
  goto LAB_00176b6c;
LAB_0017673a:
  plVar16 = (longlong *)0xffffffffffffffff;
  local_58 = auVar23;
LAB_00176780:
  uVar10 = plVar4[1];
  local_f0 = unaff_RBP;
joined_r0x00176733:
  unaff_RBP = local_f0;
  if (uVar10 != 0) {
    local_e8 = plVar4[2];
    local_88 = plVar16;
    local_60 = uVar10;
    local_48 = local_e8;
    do {
      uVar1 = *(ushort *)(uVar10 + 0x272);
      unaff_RBP = (longlong *)(uVar10 - 0x20);
      uVar11 = (ulonglong)((uint)uVar1 * 8);
      lVar19 = uVar11 * 3;
      uVar13 = 0xffffffffffffffff;
      lVar6 = uVar10 + 0x168;
      local_80 = uVar10;
      do {
        if (lVar19 == 0) {
          uVar13 = (ulonglong)uVar1;
          goto LAB_00176855;
        }
        uVar10 = *(ulonglong *)(lVar6 + 0x10);
        lVar14 = uVar10 - 4;
        if (3 < uVar10) {
          uVar10 = 4;
        }
        iVar2 = (*(code *)PTR_memcmp_00219ed8)(uVar11,uVar10);
        param_4 = (undefined8 *)-lVar14;
        if (iVar2 != 0) {
          param_4 = (undefined8 *)(longlong)iVar2;
        }
        bVar7 = (0 < (longlong)param_4) - ((longlong)param_4 < 0);
        uVar11 = (ulonglong)bVar7;
        unaff_RBP = unaff_RBP + 4;
        uVar13 = uVar13 + 1;
        lVar19 = lVar19 + -0x18;
        lVar6 = lVar6 + 0x18;
      } while (bVar7 == 1);
      if (bVar7 == 0) goto LAB_00176956;
LAB_00176855:
      bVar20 = local_e8 == 0;
      local_e8 = local_e8 + -1;
      if (bVar20) goto LAB_00176877;
      uVar10 = *(ulonglong *)(local_80 + 0x278 + uVar13 * 8);
    } while( true );
  }
LAB_00176a5d:
  bVar20 = true;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = unaff_RBP;
  auVar24 = auVar24 << 0x40;
joined_r0x0017699f:
  plVar4 = local_58._8_8_;
  unaff_RBP = auVar24._8_8_;
  local_a0._0_8_ = plVar16;
  local_a0._8_8_ = local_e0;
  local_90 = local_f0;
  if ((char)local_78 == '\0') {
    if (plVar16 == (longlong *)0xffffffffffffffff) {
      if (!bVar20) {
        local_c0 = (longlong *)local_70;
        local_b8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_b0 = (longlong *)local_a0;
        local_a8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_a0 = auVar24;
        local_70 = local_58;
        (*(code *)PTR_format_inner_00219db0)(local_b0,&local_c0);
        return param_1;
      }
      if (-1 < (longlong)plVar4) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        lVar19 = (*(code *)PTR___rust_alloc_00219c88)();
        if (lVar19 != 0) {
          (*(code *)PTR_memcpy_00219c60)();
          *param_1 = (longlong)plVar4;
          param_1[1] = lVar19;
          param_1[2] = (longlong)plVar4;
          return param_1;
        }
      }
      (*(code *)PTR_handle_error_00219c78)();
      local_a0._0_8_ = plVar4;
    }
    local_c0 = (longlong *)local_70;
    local_b8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_b0 = (longlong *)local_a0;
    local_a8 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    ;
    local_70 = local_58;
    (*(code *)PTR_format_inner_00219db0)();
  }
  else {
    if (plVar16 == (longlong *)0xffffffffffffffff) {
      if (bVar20) {
LAB_00176a87:
        pcVar3 = (char *)(*(code *)PTR_index_into_00219dc0)();
        if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) {
          auVar22 = <str>::trim_matches::<<char>::is_whitespace>
                              (*(undefined8 *)(pcVar3 + 0x10),*(undefined8 *)(pcVar3 + 0x18));
          if ((auVar22._0_8_ != 0) && (auVar22._8_8_ != 0)) {
            if (-1 < auVar22._8_8_) {
LAB_00176ac6:
              param_4 = auVar22._0_8_;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
              lVar19 = (*(code *)PTR___rust_alloc_00219c88)();
              if (lVar19 != 0) {
                (*(code *)PTR_memcpy_00219c60)();
                *param_1 = auVar22._8_8_;
                param_1[1] = lVar19;
                param_1[2] = auVar22._8_8_;
                return param_1;
              }
            }
            goto LAB_001762d4;
          }
        }
        pcVar3 = (char *)(*(code *)PTR_index_into_00219dc0)();
        if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) {
          auVar22 = <str>::trim_matches::<<char>::is_whitespace>
                              (*(undefined8 *)(pcVar3 + 0x10),*(undefined8 *)(pcVar3 + 0x18));
          lVar19 = auVar22._8_8_;
          if ((auVar22._0_8_ != 0) && (lVar19 != 0)) {
            if (-1 < lVar19) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
              lVar6 = (*(code *)PTR___rust_alloc_00219c88)();
              if (lVar6 != 0) {
                (*(code *)PTR_memcpy_00219c60)();
                *param_1 = lVar19;
                param_1[1] = lVar6;
                param_1[2] = lVar19;
                return param_1;
              }
            }
            (*(code *)PTR_handle_error_00219c78)();
          }
        }
        puVar5 = local_38;
        uVar21 = local_38 == (undefined8 *)0x0;
        if (-1 < (longlong)local_38) goto LAB_00176b78;
        uVar21 = true;
        goto LAB_00176b6c;
      }
      if (-1 < (longlong)unaff_RBP) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        lVar19 = (*(code *)PTR___rust_alloc_00219c88)();
        if (lVar19 != 0) {
          (*(code *)PTR_memcpy_00219c60)();
          *param_1 = (longlong)unaff_RBP;
          param_1[1] = lVar19;
          param_1[2] = (longlong)unaff_RBP;
          return param_1;
        }
      }
      (*(code *)PTR_handle_error_00219c78)();
    }
    else if (bVar20) {
      *param_1 = (longlong)plVar16;
      param_1[1] = (longlong)local_e0;
      param_1[2] = (longlong)local_f0;
      return param_1;
    }
    local_c0 = (longlong *)local_70;
    local_b8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_b0 = (longlong *)local_a0;
    local_a8 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    ;
    local_70 = auVar24;
    (*(code *)PTR_format_inner_00219db0)();
  }
  if ((longlong *)local_a0._0_8_ == (longlong *)0x0) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_00219c40)();
  return param_1;
}


