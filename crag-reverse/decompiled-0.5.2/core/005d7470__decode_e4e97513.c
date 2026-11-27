// 005d7470 decode

/* craggemini_core[66f3c71560d70857]::credential::decode */

void __rustcall
craggemini_core[66f3c71560d70857]::credential::decode
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong extraout_RDX;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  undefined *puVar18;
  int iVar19;
  longlong lVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined1 auVar26 [16];
  longlong local_b8;
  longlong local_90;
  longlong local_80;
  uint local_70;
  uint local_6c;
  uint local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  uVar13 = 5;
  plVar5 = (longlong *)(*(code *)PTR_index_into_00799300)(param_4,param_2);
  puVar21 = (undefined1 *)(longlong *)0x0;
  if ((plVar5 != (longlong *)0x0) && ((char)*plVar5 == '\x05')) {
    puVar21 = (undefined1 *)plVar5;
  }
  if ((longlong *)puVar21 == (longlong *)0x0) {
    puVar21 = (undefined1 *)param_2;
  }
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,param_2);
  puVar18 = &DAT_0019e6e8;
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x03')) {
    puVar18 = *(undefined **)(pcVar6 + 0x10);
    uVar13 = *(undefined8 *)(pcVar6 + 0x18);
  }
  ::<str>::trim_matches::<<char>::is_whitespace>(puVar18,uVar13);
  uVar24 = extraout_RDX == 0;
  if (-1 < extraout_RDX) goto LAB_005d7504;
  plVar5 = param_1;
  do {
    uVar24 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_1 = plVar5;
LAB_005d7504:
    if ((bool)uVar24) {
      local_90 = 1;
      goto LAB_005d755b;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_90 = (*(code *)PTR___rust_alloc_00799000)();
    plVar5 = param_2;
  } while (local_90 == 0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,extraout_RDX);
LAB_005d755b:
  first_string(&local_60,puVar21,&PTR_DAT_0078e520);
  uVar25 = first_string(&local_48,puVar21,&PTR_DAT_0078e540);
  if (((char)*(longlong *)puVar21 == '\x05') &&
     (lVar9 = *(longlong *)((longlong)puVar21 + 8), lVar9 != 0)) {
    local_80 = *(longlong *)((longlong)puVar21 + 0x10);
    puVar21 = &DAT_0019e733;
    lVar7 = lVar9;
    local_b8 = local_80;
    do {
      uVar22 = (ulonglong)*(ushort *)(lVar7 + 0x272);
      pcVar6 = (char *)(lVar7 + -0x20);
      uVar10 = (ulonglong)((uint)*(ushort *)(lVar7 + 0x272) * 8);
      lVar20 = uVar10 * 3;
      uVar16 = 0xffffffffffffffff;
      lVar15 = lVar7 + 0x168;
      do {
        if (lVar20 == 0) goto LAB_005d7654;
        uVar12 = *(ulonglong *)(lVar15 + 0x10);
        lVar14 = uVar12 - 6;
        if (5 < uVar12) {
          uVar12 = 6;
        }
        iVar4 = (*(code *)PTR_memcmp_00799528)(uVar10,uVar12);
        lVar14 = -lVar14;
        if (iVar4 != 0) {
          lVar14 = (longlong)iVar4;
        }
        bVar8 = (0 < lVar14) - (lVar14 < 0);
        uVar10 = (ulonglong)bVar8;
        pcVar6 = pcVar6 + 0x20;
        uVar16 = uVar16 + 1;
        lVar20 = lVar20 + -0x18;
        lVar15 = lVar15 + 0x18;
        uVar25 = extraout_XMM0_Da_01;
      } while (bVar8 == 1);
      uVar22 = uVar16;
      if (bVar8 == 0) goto LAB_005d77fc;
LAB_005d7654:
      bVar23 = local_b8 == 0;
      local_b8 = local_b8 + -1;
      if (bVar23) goto LAB_005d7674;
      lVar7 = *(longlong *)(lVar7 + 0x278 + uVar22 * 8);
    } while( true );
  }
LAB_005d7a85:
  lVar9 = 0;
LAB_005d7a88:
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar25,param_2);
  plVar5 = (longlong *)0xffffffffffffffff;
  if (pcVar6 != (char *)0x0) {
    if (*pcVar6 == '\x03') {
      auVar26 = ::<str>::trim_matches::<<char>::is_whitespace>
                          (*(undefined8 *)(pcVar6 + 0x10),*(undefined8 *)(pcVar6 + 0x18));
      auVar26._8_8_ = auVar26._8_8_;
      if (auVar26._0_8_ != 0) {
        param_2 = auVar26._8_8_;
        if (auVar26._8_8_ != (longlong *)0x0) {
          if (-1 < (longlong)auVar26._8_8_) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar21 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
            if ((longlong *)puVar21 != (longlong *)0x0) {
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,auVar26._8_8_);
              plVar5 = auVar26._8_8_;
              goto LAB_005d7ada;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
    }
  }
LAB_005d7ada:
  *param_1 = extraout_RDX;
  param_1[1] = local_90;
  param_1[2] = extraout_RDX;
  param_1[3] = local_60;
  param_1[4] = lStack_58;
  param_1[5] = local_50;
  param_1[6] = local_48;
  param_1[7] = lStack_40;
  param_1[8] = local_38;
  param_1[0xc] = lVar9;
  param_1[9] = (longlong)plVar5;
  param_1[10] = (longlong)puVar21;
  param_1[0xb] = (longlong)param_2;
  return;
LAB_005d7674:
  puVar21 = anon_30b5cef53457a6ea696e8d7e9f6273d6_40_llvm_8436237269785592069;
  lVar7 = lVar9;
  local_b8 = local_80;
  do {
    uVar2 = *(ushort *)(lVar7 + 0x272);
    pcVar6 = (char *)(lVar7 + -0x20);
    uVar10 = (ulonglong)((uint)uVar2 * 8);
    lVar20 = uVar10 * 3;
    uVar22 = 0xffffffffffffffff;
    lVar15 = lVar7 + 0x168;
    do {
      if (lVar20 == 0) {
        uVar22 = (ulonglong)uVar2;
        goto LAB_005d7725;
      }
      uVar16 = *(ulonglong *)(lVar15 + 0x10);
      lVar14 = uVar16 - 10;
      if (9 < uVar16) {
        uVar16 = 10;
      }
      iVar4 = (*(code *)PTR_memcmp_00799528)(uVar10,uVar16);
      lVar14 = -lVar14;
      if (iVar4 != 0) {
        lVar14 = (longlong)iVar4;
      }
      bVar8 = (0 < lVar14) - (lVar14 < 0);
      uVar10 = (ulonglong)bVar8;
      pcVar6 = pcVar6 + 0x20;
      uVar22 = uVar22 + 1;
      lVar20 = lVar20 + -0x18;
      lVar15 = lVar15 + 0x18;
      uVar25 = extraout_XMM0_Da_02;
    } while (bVar8 == 1);
    if (bVar8 == 0) goto LAB_005d77fc;
LAB_005d7725:
    bVar23 = local_b8 == 0;
    local_b8 = local_b8 + -1;
    if (bVar23) break;
    lVar7 = *(longlong *)(lVar7 + 0x278 + uVar22 * 8);
  } while( true );
  puVar21 = &DAT_0019e739;
  do {
    uVar2 = *(ushort *)(lVar9 + 0x272);
    pcVar6 = (char *)(lVar9 + -0x20);
    uVar10 = (ulonglong)((uint)uVar2 * 8);
    lVar7 = uVar10 * 3;
    uVar22 = 0xffffffffffffffff;
    lVar20 = lVar9 + 0x168;
    do {
      if (lVar7 == 0) {
        uVar22 = (ulonglong)uVar2;
        goto LAB_005d77de;
      }
      uVar16 = *(ulonglong *)(lVar20 + 0x10);
      lVar15 = uVar16 - 9;
      if (8 < uVar16) {
        uVar16 = 9;
      }
      iVar4 = (*(code *)PTR_memcmp_00799528)(uVar10,uVar16);
      lVar15 = -lVar15;
      if (iVar4 != 0) {
        lVar15 = (longlong)iVar4;
      }
      bVar8 = (0 < lVar15) - (lVar15 < 0);
      uVar10 = (ulonglong)bVar8;
      pcVar6 = pcVar6 + 0x20;
      uVar22 = uVar22 + 1;
      lVar7 = lVar7 + -0x18;
      lVar20 = lVar20 + 0x18;
      uVar25 = extraout_XMM0_Da_03;
    } while (bVar8 == 1);
    if (bVar8 == 0) break;
LAB_005d77de:
    bVar23 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar23) goto LAB_005d7a85;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar22 * 8);
  } while( true );
LAB_005d77fc:
  if (*pcVar6 == '\x03') {
    auVar26 = ::<str>::trim_matches::<<char>::is_whitespace>
                        (*(undefined8 *)(pcVar6 + 0x10),*(undefined8 *)(pcVar6 + 0x18));
    uVar22 = auVar26._8_8_;
    puVar21 = auVar26._0_8_;
    lVar9 = 0;
    uVar25 = extraout_XMM0_Da_04;
    if (((longlong *)puVar21 != (longlong *)0x0) && (uVar22 != 0)) {
      uVar25 = (*(code *)PTR_parse_from_rfc3339_00799ce8)(extraout_XMM0_Da_04,uVar22);
      if (local_70 == 0) {
        cVar1 = (char)*(longlong *)puVar21;
        if (uVar22 == 1) {
          lVar9 = 0;
          if ((cVar1 != '+') && (cVar1 != '-')) goto LAB_005d798b;
        }
        else {
          if (cVar1 == '-') {
            uVar10 = 1;
            lVar9 = 0;
            lVar7 = 0;
            if (uVar22 < 0x11) {
              do {
                uVar11 = *(byte *)((longlong)puVar21 + uVar10) - 0x30;
                if (9 < uVar11) goto LAB_005d7a88;
                lVar7 = lVar7 * 10 - (ulonglong)uVar11;
                uVar10 = uVar10 + 1;
              } while (uVar22 != uVar10);
            }
            else {
              do {
                lVar20 = lVar7 * 10;
                if (SEXT816(lVar20) != SEXT816(lVar7) * SEXT816(10)) goto LAB_005d7a88;
                uVar11 = *(byte *)((longlong)puVar21 + uVar10) - 0x30;
                if (9 < uVar11) goto LAB_005d7a88;
                lVar7 = lVar20 - (ulonglong)uVar11;
                if (SBORROW8(lVar20,(ulonglong)uVar11)) goto LAB_005d7a88;
                uVar10 = uVar10 + 1;
              } while (uVar22 != uVar10);
            }
          }
          else {
            if (cVar1 == '+') {
              auVar26._8_8_ = uVar22 - 1;
              auVar26._0_8_ = (char *)((longlong)puVar21 + 1);
            }
LAB_005d798b:
            uVar22 = auVar26._8_8_;
            puVar21 = auVar26._0_8_;
            if (uVar22 < 0x10) {
              if (uVar22 == 0) {
                lVar7 = 0;
              }
              else {
                uVar10 = 0;
                lVar7 = 0;
                do {
                  uVar11 = *(byte *)((longlong)puVar21 + uVar10) - 0x30;
                  lVar9 = 0;
                  if (9 < uVar11) goto LAB_005d7a88;
                  lVar7 = (ulonglong)uVar11 + lVar7 * 10;
                  uVar10 = uVar10 + 1;
                } while (uVar22 != uVar10);
              }
            }
            else {
              lVar9 = 0;
              uVar10 = 0;
              lVar7 = 0;
              do {
                lVar20 = lVar7 * 10;
                if (SEXT816(lVar20) != SEXT816(lVar7) * SEXT816(10)) goto LAB_005d7a88;
                uVar11 = *(byte *)((longlong)puVar21 + uVar10) - 0x30;
                if (9 < uVar11) goto LAB_005d7a88;
                lVar7 = lVar20 + (ulonglong)uVar11;
                if (SCARRY8(lVar20,(ulonglong)uVar11)) goto LAB_005d7a88;
                uVar10 = uVar10 + 1;
              } while (uVar22 != uVar10);
            }
          }
          lVar9 = lVar7 * 1000;
          if (0x2540be3fe < lVar7 - 1U) {
            lVar9 = lVar7;
          }
        }
      }
      else {
        iVar19 = (int)local_70 >> 0xd;
        iVar4 = iVar19 + -1;
        iVar17 = 0;
        if (iVar19 < 1) {
          iVar17 = (1U - iVar19) / 400 + 1;
          iVar4 = iVar4 + iVar17 * 400;
          iVar17 = iVar17 * -0x23ab1;
        }
        lVar9 = (ulonglong)local_68 / 1000000 +
                ((longlong)
                 (int)((((local_70 >> 4 & 0x1ff) + iVar17) - iVar4 / 100) + (iVar4 * 0x5b5 >> 2) +
                       (iVar4 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_6c) * 1000;
      }
    }
  }
  else {
    if (*pcVar6 != '\x02') goto LAB_005d7a85;
    if (*(longlong *)(pcVar6 + 8) == 0) {
      lVar9 = *(longlong *)(pcVar6 + 0x10);
      if (lVar9 < 0) goto LAB_005d7a88;
    }
    else {
      if ((int)*(longlong *)(pcVar6 + 8) != 1) goto LAB_005d7a85;
      lVar9 = *(longlong *)(pcVar6 + 0x10);
    }
    if (lVar9 - 1U < 9999999999) {
      lVar9 = lVar9 * 1000;
    }
  }
  goto LAB_005d7a88;
}


