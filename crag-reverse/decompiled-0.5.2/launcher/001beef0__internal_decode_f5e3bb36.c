// 001beef0 internal_decode

/* <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose as
   base64[729f3f786a952ed7]::engine::Engine>::internal_decode */

ulonglong * __rustcall
<base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose_as_base64[729f3f786a952ed7]::engine::Engine>
::internal_decode(ulonglong *param_1,longlong param_2,longlong param_3,undefined **param_4,
                 longlong param_5,undefined **param_6,undefined **param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **ppuVar9;
  ulonglong *puVar10;
  undefined1 uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  uint uVar15;
  undefined **ppuVar16;
  ulonglong unaff_RBP;
  undefined **ppuVar17;
  undefined **ppuVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined **ppuVar21;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined **ppuVar28;
  undefined **unaff_R12;
  undefined **ppuVar29;
  ulonglong unaff_R15;
  ulonglong uVar30;
  bool bVar31;
  ulonglong *local_80;
  undefined **local_78;
  byte local_69;
  undefined **local_58;
  uint local_44;
  
  bVar22 = *(byte *)(param_2 + 1);
  ppuVar9 = (undefined **)(ulonglong)bVar22;
  ppuVar14 = (undefined **)(ulonglong)*(byte *)(param_2 + 2);
  if (param_7 == (undefined **)0x1) {
    ppuVar5 = (undefined **)((longlong)param_4 - 1);
    if (param_4 == (undefined **)0x0) {
      (*(code *)PTR_panic_bounds_check_0021a020)(0,&PTR_s__vendor_base64_0_22_1_src_engine_00216f38)
      ;
      goto LAB_001bfb6b;
    }
    ppuVar18 = (undefined **)(ulonglong)*(byte *)(param_3 + (longlong)ppuVar5);
    if ((ppuVar18 == (undefined **)0x3d) || (*(char *)(param_2 + 0x43 + (longlong)ppuVar18) != -1))
    goto LAB_001bef41;
    uVar11 = 0;
LAB_001bef75:
    *(undefined1 *)(param_1 + 1) = uVar11;
    *(char *)((longlong)param_1 + 9) = (char)ppuVar18;
  }
  else {
LAB_001bef41:
    ppuVar18 = (undefined **)0x0;
    if (param_7 <= param_4) {
      ppuVar18 = (undefined **)((longlong)param_4 - (longlong)param_7);
    }
    if ((param_7 == (undefined **)0x0) &&
       (bVar31 = ppuVar18 < (undefined **)0x4, ppuVar18 = (undefined **)((longlong)ppuVar18 + -4),
       bVar31)) {
      ppuVar18 = (undefined **)0x0;
    }
    ppuVar29 = (undefined **)((ulonglong)ppuVar18 >> 2);
    ppuVar5 = (undefined **)((longlong)ppuVar29 * 3);
    if (param_6 < ppuVar5) {
      uVar11 = 0xff;
      goto LAB_001bef75;
    }
    ppuVar16 = (undefined **)((ulonglong)ppuVar18 & 0x7fffffffffffffe0);
    if (param_4 < ppuVar16) {
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_s__vendor_base64_0_22_1_src_engine_00216f20,param_4);
      ppuVar17 = param_6;
      ppuVar28 = ppuVar14;
LAB_001bf9c4:
      ppuVar18 = ppuVar9;
      bVar22 = (byte)ppuVar16;
      ppuVar14 = ppuVar18;
      (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__vendor_base64_0_22_1_src_engine_00216f08);
      uVar15 = (uint)ppuVar14;
LAB_001bf9da:
      ppuVar14 = (undefined **)0x3;
      lVar8 = 0;
      do {
        if (*(char *)((longlong)ppuVar28 + (longlong)ppuVar14) != '=') goto LAB_001bfb2b;
        if (ppuVar14 == (undefined **)0x0) goto LAB_001bf5ab;
        ppuVar14 = (undefined **)((longlong)ppuVar14 + 1);
        uVar19 = uVar15;
      } while (unaff_R12 != ppuVar14);
      goto LAB_001bfa06;
    }
    local_44 = (uint)*(byte *)(param_2 + 2);
    local_80 = param_1;
    local_78 = ppuVar5;
    local_69 = bVar22;
    local_58 = param_6;
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar9 = (undefined **)(((ulonglong)param_6 / 0x18) * 0x18 + 0x18);
      unaff_R12 = (undefined **)0x0;
      ppuVar28 = (undefined **)0x0;
      do {
        ppuVar14 = ppuVar28 + 3;
        ppuVar17 = param_6;
        if (ppuVar9 == ppuVar14) goto LAB_001bf9c4;
        bVar22 = *(byte *)(param_3 + (longlong)unaff_R12);
        uVar6 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar6 == 0xff) {
LAB_001bf6da:
          *(undefined1 *)(param_1 + 1) = 0;
          *(byte *)((longlong)param_1 + 9) = bVar22;
          param_1[2] = (ulonglong)unaff_R12;
          goto LAB_001bf8b2;
        }
        bVar22 = *(byte *)(param_3 + 1 + (longlong)unaff_R12);
        uVar25 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar25 == 0xff) {
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 1);
          goto LAB_001bf6da;
        }
        bVar22 = *(byte *)(param_3 + 2 + (longlong)unaff_R12);
        uVar26 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar26 == 0xff) {
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 2);
          goto LAB_001bf6da;
        }
        bVar22 = *(byte *)(param_3 + 3 + (longlong)unaff_R12);
        uVar13 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar13 == 0xff) {
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 3);
          goto LAB_001bf6da;
        }
        bVar22 = *(byte *)(param_3 + 4 + (longlong)unaff_R12);
        uVar24 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar24 == 0xff) {
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 4);
          goto LAB_001bf6da;
        }
        bVar22 = *(byte *)(param_3 + 5 + (longlong)unaff_R12);
        uVar20 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar20 == 0xff) {
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 5);
          goto LAB_001bf6da;
        }
        bVar22 = *(byte *)(param_3 + 6 + (longlong)unaff_R12);
        bVar1 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar1 == 0xff) {
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 6);
          goto LAB_001bf6da;
        }
        bVar22 = *(byte *)(param_3 + 7 + (longlong)unaff_R12);
        bVar2 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar2 == 0xff) {
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 7);
          goto LAB_001bf6da;
        }
        uVar30 = uVar25 << 0x34 | uVar6 << 0x3a;
        uVar6 = (ulonglong)bVar1 << 0x16;
        uVar25 = uVar6 | uVar20 << 0x1c | uVar24 << 0x22;
        uVar26 = uVar25 | uVar13 << 0x28 | uVar26 << 0x2e | uVar30;
        *(uint *)(param_5 + (longlong)ppuVar28) =
             (uint)(byte)(uVar30 >> 0x38) | ((uint)(uVar26 >> 0x20) & 0xff0000) >> 8 |
             (uint)(uVar26 >> 0x18) & 0xff0000 | (uint)(uVar25 >> 8) & 0xff000000;
        *(ushort *)(param_5 + 4 + (longlong)ppuVar28) =
             (ushort)(uVar25 >> 0x18) & 0xff |
             (ushort)(((ulonglong)bVar2 << 0x10) >> 8) | (ushort)(uVar6 >> 8);
        bVar22 = *(byte *)(param_3 + 8 + (longlong)unaff_R12);
        uVar6 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar6 == 0xff) {
          lVar8 = 8;
LAB_001bf89e:
          ppuVar5 = (undefined **)(lVar8 + (longlong)unaff_R12);
          *(undefined1 *)(param_1 + 1) = 0;
          *(byte *)((longlong)param_1 + 9) = bVar22;
          goto LAB_001bf8ae;
        }
        bVar22 = *(byte *)(param_3 + 9 + (longlong)unaff_R12);
        uVar25 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar25 == 0xff) {
          lVar8 = 9;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 10 + (longlong)unaff_R12);
        uVar26 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar26 == 0xff) {
          lVar8 = 10;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0xb + (longlong)unaff_R12);
        uVar13 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar13 == 0xff) {
          lVar8 = 0xb;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0xc + (longlong)unaff_R12);
        uVar24 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar24 == 0xff) {
          lVar8 = 0xc;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0xd + (longlong)unaff_R12);
        uVar20 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar20 == 0xff) {
          lVar8 = 0xd;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0xe + (longlong)unaff_R12);
        bVar1 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar1 == 0xff) {
          lVar8 = 0xe;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0xf + (longlong)unaff_R12);
        bVar2 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar2 == 0xff) {
          lVar8 = 0xf;
          goto LAB_001bf89e;
        }
        uVar6 = uVar25 << 0x34 | uVar6 << 0x3a;
        uVar25 = (ulonglong)bVar1 << 0x16;
        uVar24 = uVar25 | uVar20 << 0x1c | uVar24 << 0x22;
        uVar26 = uVar24 | uVar13 << 0x28 | uVar26 << 0x2e | uVar6;
        *(uint *)(param_5 + 6 + (longlong)ppuVar28) =
             (uint)(byte)(uVar6 >> 0x38) | ((uint)(uVar26 >> 0x20) & 0xff0000) >> 8 |
             (uint)(uVar26 >> 0x18) & 0xff0000 | (uint)(uVar24 >> 8) & 0xff000000;
        *(ushort *)(param_5 + 10 + (longlong)ppuVar28) =
             (ushort)(uVar24 >> 0x18) & 0xff |
             (ushort)(((ulonglong)bVar2 << 0x10) >> 8) | (ushort)(uVar25 >> 8);
        bVar22 = *(byte *)(param_3 + 0x10 + (longlong)unaff_R12);
        uVar6 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar6 == 0xff) {
          lVar8 = 0x10;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x11 + (longlong)unaff_R12);
        uVar25 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar25 == 0xff) {
          lVar8 = 0x11;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x12 + (longlong)unaff_R12);
        uVar26 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar26 == 0xff) {
          lVar8 = 0x12;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x13 + (longlong)unaff_R12);
        uVar13 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar13 == 0xff) {
          lVar8 = 0x13;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x14 + (longlong)unaff_R12);
        uVar24 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar24 == 0xff) {
          lVar8 = 0x14;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x15 + (longlong)unaff_R12);
        uVar20 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar20 == 0xff) {
          lVar8 = 0x15;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x16 + (longlong)unaff_R12);
        bVar1 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar1 == 0xff) {
          lVar8 = 0x16;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x17 + (longlong)unaff_R12);
        bVar2 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar2 == 0xff) {
          lVar8 = 0x17;
          goto LAB_001bf89e;
        }
        uVar6 = uVar25 << 0x34 | uVar6 << 0x3a;
        uVar25 = (ulonglong)bVar1 << 0x16;
        uVar24 = uVar25 | uVar20 << 0x1c | uVar24 << 0x22;
        uVar26 = uVar24 | uVar13 << 0x28 | uVar26 << 0x2e | uVar6;
        *(uint *)(param_5 + 0xc + (longlong)ppuVar28) =
             (uint)(byte)(uVar6 >> 0x38) | ((uint)(uVar26 >> 0x20) & 0xff0000) >> 8 |
             (uint)(uVar26 >> 0x18) & 0xff0000 | (uint)(uVar24 >> 8) & 0xff000000;
        *(ushort *)(param_5 + 0x10 + (longlong)ppuVar28) =
             (ushort)(uVar24 >> 0x18) & 0xff |
             (ushort)(((ulonglong)bVar2 << 0x10) >> 8) | (ushort)(uVar25 >> 8);
        bVar22 = *(byte *)(param_3 + 0x18 + (longlong)unaff_R12);
        uVar6 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar6 == 0xff) {
          lVar8 = 0x18;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x19 + (longlong)unaff_R12);
        uVar25 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar25 == 0xff) {
          lVar8 = 0x19;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x1a + (longlong)unaff_R12);
        uVar26 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar26 == 0xff) {
          lVar8 = 0x1a;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x1b + (longlong)unaff_R12);
        uVar13 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar13 == 0xff) {
          lVar8 = 0x1b;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x1c + (longlong)unaff_R12);
        uVar24 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar24 == 0xff) {
          lVar8 = 0x1c;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x1d + (longlong)unaff_R12);
        uVar20 = (ulonglong)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (uVar20 == 0xff) {
          lVar8 = 0x1d;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x1e + (longlong)unaff_R12);
        bVar1 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar1 == 0xff) {
          lVar8 = 0x1e;
          goto LAB_001bf89e;
        }
        bVar22 = *(byte *)(param_3 + 0x1f + (longlong)unaff_R12);
        bVar2 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
        if (bVar2 == 0xff) {
          lVar8 = 0x1f;
          goto LAB_001bf89e;
        }
        unaff_R12 = unaff_R12 + 4;
        unaff_R15 = uVar6 << 0x3a;
        uVar6 = uVar25 << 0x34 | unaff_R15;
        unaff_RBP = uVar26 << 0x2e;
        uVar25 = (ulonglong)bVar1 << 0x16;
        uVar26 = uVar25 | uVar20 << 0x1c | uVar24 << 0x22;
        uVar13 = uVar26 | uVar13 << 0x28 | unaff_RBP | uVar6;
        *(uint *)(param_5 + 0x12 + (longlong)ppuVar28) =
             (uint)(byte)(uVar6 >> 0x38) | ((uint)(uVar13 >> 0x20) & 0xff0000) >> 8 |
             (uint)(uVar13 >> 0x18) & 0xff0000 | (uint)(uVar26 >> 8) & 0xff000000;
        *(ushort *)(param_5 + 0x16 + (longlong)ppuVar28) =
             (ushort)(uVar26 >> 0x18) & 0xff |
             (ushort)(((ulonglong)bVar2 << 0x10) >> 8) | (ushort)(uVar25 >> 8);
        ppuVar28 = ppuVar14;
      } while (ppuVar16 != unaff_R12);
    }
    uVar19 = (uint)ppuVar9;
    uVar15 = (uint)unaff_RBP;
    ppuVar21 = (undefined **)((ulonglong)ppuVar16 >> 2);
    if (ppuVar29 < ppuVar21) {
      ppuVar17 = &PTR_s__vendor_base64_0_22_1_src_engine_00216ef0;
      (*(code *)PTR_slice_index_fail_00219d80)
                (&PTR_s__vendor_base64_0_22_1_src_engine_00216ef0,param_6);
      ppuVar18 = ppuVar5;
      ppuVar28 = ppuVar14;
LAB_001bfa63:
      (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__vendor_base64_0_22_1_src_engine_00216ed8);
LAB_001bfa79:
      bVar22 = (byte)ppuVar16;
      bVar1 = *(byte *)(param_2 + 0x43 + unaff_R15);
      uVar23 = (uint)bVar1;
      if (bVar1 == 0xff) {
        lVar8 = 3;
LAB_001bf74c:
        *(undefined1 *)(param_1 + 1) = 0;
        *(char *)((longlong)param_1 + 9) = (char)unaff_R15;
        param_1[2] = lVar8 + (longlong)ppuVar18;
        goto LAB_001bf8b2;
      }
      ppuVar29 = (undefined **)((longlong)ppuVar18 + 4);
      if (ppuVar29 == param_6) {
        lVar8 = 4;
        ppuVar17 = (undefined **)0x0;
        param_2 = 0;
      }
      else {
        bVar1 = *(byte *)((longlong)ppuVar28 + 4U);
        if ((ulonglong)bVar1 != 0x3d) {
          if (*(char *)(param_2 + 0x43 + (ulonglong)bVar1) != -1) {
LAB_001bfb6b:
            (*(code *)PTR_panic_bounds_check_0021a020)();
            pcVar4 = (code *)swi(3);
            puVar10 = (ulonglong *)(*pcVar4)();
            return puVar10;
          }
          lVar8 = 4;
          unaff_R15 = (ulonglong)bVar1;
          goto LAB_001bf74c;
        }
        ppuVar17 = (undefined **)((longlong)ppuVar17 - (longlong)((longlong)ppuVar28 + 4U));
        param_2 = 4;
        if ((undefined **)((longlong)ppuVar18 + 5U) != param_4) {
          ppuVar14 = (undefined **)0x5;
          lVar8 = 0;
          do {
            if (*(char *)((longlong)ppuVar28 + (longlong)ppuVar14) != '=') goto LAB_001bfb2b;
            if (ppuVar14 == (undefined **)0x0) goto LAB_001bf5ab;
            ppuVar14 = (undefined **)((longlong)ppuVar14 + 1);
          } while (unaff_R12 != ppuVar14);
        }
        lVar8 = 4;
      }
LAB_001bfa09:
      uVar11 = (undefined1)unaff_R15;
LAB_001bf688:
      param_1 = local_80;
      if (local_44 != 0) {
        if (local_44 == 1) {
          if (((int)lVar8 + (int)ppuVar17 & 3U) != 0) goto LAB_001bf6aa;
        }
        else if (ppuVar17 != (undefined **)0x0) {
LAB_001bf6aa:
          *(undefined1 *)(local_80 + 1) = 3;
          goto LAB_001bf8b2;
        }
      }
      uVar27 = (int)lVar8 * 6;
      uVar19 = (uint)bVar22 << 0x14 | uVar19 << 0x1a;
      uVar15 = uVar23 << 8 | (uVar15 & 0xff) << 0xe;
      uVar23 = uVar15 | uVar19;
      if ((local_69 != 0) || (uVar23 << ((byte)uVar27 & 0x18) == 0)) {
        uVar27 = uVar27 >> 3;
        ppuVar14 = local_78;
        if (uVar27 == 0) goto LAB_001bf860;
        if (local_78 < local_58) {
          *(char *)(param_5 + (longlong)local_78) = (char)(uVar19 >> 0x18);
          ppuVar14 = (undefined **)((longlong)local_78 + 1);
          if (uVar27 == 1) goto LAB_001bf860;
          if (ppuVar14 < local_58) {
            *(char *)(param_5 + 1 + (longlong)local_78) = (char)(uVar23 >> 0x10);
            ppuVar14 = (undefined **)((longlong)local_78 + 2);
            if (uVar27 == 2) {
LAB_001bf860:
              *local_80 = (ulonglong)(ppuVar17 != (undefined **)0x0);
              local_80[1] = param_2 + (longlong)ppuVar18;
              local_80[2] = (ulonglong)ppuVar14;
              return local_80;
            }
            if (ppuVar14 < local_58) {
              *(char *)(param_5 + 2 + (longlong)local_78) = (char)(uVar15 >> 8);
              ppuVar14 = (undefined **)((longlong)local_78 + 3);
              goto LAB_001bf860;
            }
          }
        }
        *(undefined1 *)(local_80 + 1) = 0xff;
        goto LAB_001bf8b2;
      }
      ppuVar5 = (undefined **)((longlong)ppuVar18 + lVar8 + -1);
      *(undefined1 *)(local_80 + 1) = 2;
      *(undefined1 *)((longlong)local_80 + 9) = uVar11;
    }
    else {
      ppuVar17 = param_4;
      ppuVar28 = ppuVar14;
      if (param_4 < ppuVar18) goto LAB_001bfa63;
      if ((undefined **)((ulonglong)ppuVar18 & 0x1c) != (undefined **)0x0) {
        ppuVar17 = (undefined **)((longlong)ppuVar5 + (longlong)ppuVar21 * -3);
        lVar7 = (longlong)ppuVar21 * 3 + param_5;
        lVar8 = param_3 + (longlong)ppuVar16;
        unaff_R12 = (undefined **)0x0;
        ppuVar14 = (undefined **)0x0;
        do {
          uVar19 = (uint)ppuVar9;
          ppuVar5 = (undefined **)((longlong)ppuVar14 + 3);
          if (ppuVar17 < ppuVar5) {
            ppuVar18 = (undefined **)((longlong)ppuVar14 + 3);
            ppuVar28 = ppuVar14;
            (*(code *)PTR_slice_index_fail_00219d80)
                      (&PTR_s__vendor_base64_0_22_1_src_engine_00216ec0);
            goto LAB_001bf96f;
          }
          bVar22 = *(byte *)(lVar8 + (longlong)unaff_R12);
          uVar15 = (uint)*(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
          if (uVar15 == 0xff) {
            ppuVar5 = (undefined **)((longlong)ppuVar16 + (longlong)unaff_R12);
LAB_001bf663:
            *(undefined1 *)(param_1 + 1) = 0;
            *(byte *)((longlong)param_1 + 9) = bVar22;
            goto LAB_001bf8ae;
          }
          bVar22 = *(byte *)(lVar8 + 1 + (longlong)unaff_R12);
          bVar1 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
          if (bVar1 == 0xff) {
            ppuVar5 = (undefined **)((longlong)ppuVar16 + (longlong)unaff_R12 + 1);
            goto LAB_001bf663;
          }
          bVar22 = *(byte *)(lVar8 + 2 + (longlong)unaff_R12);
          bVar2 = *(byte *)(param_2 + 0x43 + (ulonglong)bVar22);
          if (bVar2 == 0xff) {
            ppuVar5 = (undefined **)((longlong)ppuVar16 + (longlong)unaff_R12 + 2);
            goto LAB_001bf663;
          }
          bVar22 = *(byte *)(lVar8 + 3 + (longlong)unaff_R12);
          param_6 = (undefined **)(ulonglong)bVar22;
          bVar3 = *(byte *)(param_2 + 0x43 + (longlong)param_6);
          if (bVar3 == 0xff) {
            ppuVar5 = (undefined **)((longlong)ppuVar16 + (longlong)unaff_R12 + 3);
            goto LAB_001bf663;
          }
          iVar12 = (uint)bVar1 << 0x14;
          uVar23 = (uint)bVar2 << 0xe;
          uVar19 = (uint)bVar3 << 8 | uVar23 & 0xff00;
          *(ushort *)(lVar7 + (longlong)ppuVar14) =
               (ushort)(byte)((byte)((uint)iVar12 >> 0x18) | (byte)((uVar15 << 0x1a) >> 0x18)) |
               (ushort)(uVar23 >> 8) & 0xff00 | (ushort)((uint)iVar12 >> 8);
          ppuVar9 = (undefined **)(ulonglong)(uVar19 >> 8);
          *(char *)(lVar7 + 2 + (longlong)ppuVar14) = (char)(uVar19 >> 8);
          unaff_R12 = (undefined **)((longlong)unaff_R12 + 4);
          ppuVar14 = ppuVar5;
        } while ((undefined **)((ulonglong)ppuVar18 & 0x1c) != unaff_R12);
      }
      unaff_R12 = (undefined **)((longlong)param_4 - (longlong)ppuVar18);
      if (unaff_R12 != (undefined **)0x0) {
        unaff_R15 = (ulonglong)*(byte *)(param_3 + (longlong)ppuVar18);
        if (unaff_R15 == 0x3d) {
          lVar8 = 0;
LAB_001bf5ab:
          *(undefined2 *)(local_80 + 1) = 0x3d00;
          local_80[2] = lVar8 + (longlong)ppuVar18;
          param_1 = local_80;
          goto LAB_001bf8b2;
        }
        bVar1 = *(byte *)(param_2 + 0x43 + unaff_R15);
        uVar15 = (uint)bVar1;
        uVar19 = (uint)bVar1;
        if (bVar1 != 0xff) {
          lVar8 = 1;
          if ((undefined **)((longlong)ppuVar18 + 1U) == param_4) goto LAB_001bf58a;
          ppuVar28 = (undefined **)(param_3 + (longlong)ppuVar18);
          unaff_R15 = (ulonglong)*(byte *)((longlong)ppuVar28 + 1);
          lVar8 = 1;
          if (unaff_R15 == 0x3d) goto LAB_001bf5ab;
          bVar22 = *(byte *)(param_2 + 0x43 + unaff_R15);
          ppuVar5 = (undefined **)(ulonglong)bVar22;
          if (bVar22 == 0xff) {
            lVar8 = 1;
            goto LAB_001bf74c;
          }
          ppuVar29 = (undefined **)((longlong)ppuVar18 + 2);
          if (ppuVar29 != param_4) {
            ppuVar17 = (undefined **)(param_3 + (longlong)param_4);
            ppuVar14 = (undefined **)(ulonglong)*(byte *)((longlong)ppuVar28 + 2);
            param_6 = param_4;
            uVar19 = (uint)bVar1;
            if (ppuVar14 == (undefined **)0x3d) {
              ppuVar17 = (undefined **)((longlong)ppuVar17 - ((longlong)ppuVar28 + 2U));
              param_2 = 2;
              uVar19 = (uint)bVar1;
              if ((undefined **)((longlong)ppuVar18 + 3U) != param_4) goto LAB_001bf9da;
              goto LAB_001bfa06;
            }
LAB_001bf96f:
            bVar22 = (byte)ppuVar5;
            bVar1 = *(byte *)(param_2 + 0x43 + (longlong)ppuVar14);
            uVar15 = (uint)bVar1;
            if (bVar1 == 0xff) {
              lVar8 = 2;
              unaff_R15 = (ulonglong)ppuVar14 & 0xffffffff;
              goto LAB_001bf74c;
            }
            ppuVar29 = (undefined **)((longlong)ppuVar18 + 3);
            if (ppuVar29 == param_6) {
              lVar8 = 3;
              ppuVar17 = (undefined **)0x0;
              param_2 = 0;
              uVar11 = SUB81(ppuVar14,0);
              uVar23 = 0;
              goto LAB_001bf688;
            }
            unaff_R15 = (ulonglong)*(byte *)((longlong)ppuVar28 + 3);
            ppuVar16 = ppuVar5;
            uVar15 = (uint)bVar1;
            if (unaff_R15 == 0x3d) {
              ppuVar17 = (undefined **)((longlong)ppuVar17 - ((longlong)ppuVar28 + 3U));
              param_2 = 3;
              if ((undefined **)((longlong)ppuVar18 + 4U) != param_6) {
                ppuVar9 = (undefined **)0x4;
                lVar8 = 0;
                do {
                  if (*(char *)((longlong)ppuVar28 + (longlong)ppuVar9) != '=') goto LAB_001bfb2b;
                  if (ppuVar9 == (undefined **)0x0) goto LAB_001bf5ab;
                  ppuVar9 = (undefined **)((longlong)ppuVar9 + 1);
                } while (unaff_R12 != ppuVar9);
              }
              uVar23 = 0;
              lVar8 = 3;
              unaff_R15 = (ulonglong)ppuVar14 & 0xffffffff;
              uVar15 = (uint)bVar1;
              goto LAB_001bfa09;
            }
            goto LAB_001bfa79;
          }
          ppuVar17 = (undefined **)0x0;
          param_2 = 0;
LAB_001bfa06:
          lVar8 = 2;
          uVar23 = 0;
          uVar15 = 0;
          goto LAB_001bfa09;
        }
        lVar8 = 0;
        goto LAB_001bf74c;
      }
      ppuVar17 = (undefined **)0x0;
      if (param_4 == (undefined **)0x0) {
        param_2 = 0;
        lVar8 = 0;
        uVar11 = 0;
        uVar19 = 0;
        bVar22 = 0;
        uVar15 = 0;
        uVar23 = 0;
        goto LAB_001bf688;
      }
      lVar8 = 0;
LAB_001bf58a:
      ppuVar5 = (undefined **)(lVar8 + (longlong)ppuVar18);
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_001bf8ae:
  param_1[2] = (ulonglong)ppuVar5;
LAB_001bf8b2:
  *param_1 = 2;
  return param_1;
LAB_001bfb2b:
  *(undefined2 *)(local_80 + 1) = 0x3d00;
  local_80[2] = (ulonglong)ppuVar29;
  param_1 = local_80;
  goto LAB_001bf8b2;
}


