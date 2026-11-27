// 00037da0 read_self_vm_rss_bytes

/* WARNING: Type propagation algorithm not settling */
/* agy_bridge[64a9e9deac6c45ce]::read_self_vm_rss_bytes */

undefined1  [16] __rustcall agy_bridge[64a9e9deac6c45ce]::read_self_vm_rss_bytes(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 in_RCX;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulonglong *puVar19;
  ulonglong *unaff_R15;
  ulonglong *puVar20;
  ulonglong *puVar21;
  undefined1 auVar22 [16];
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined1 local_60;
  byte local_58;
  char cStack_57;
  byte *local_50;
  int local_48 [2];
  longlong local_40;
  longlong local_38;
  
  lVar6 = local_98;
  (*(code *)PTR_inner_000c3c30)(in_RCX,0x11);
  uVar12 = local_88;
  if (local_98 == -1) {
    if ((1 < ((uint)local_90 & 3) - 2) && ((local_90 & 3) != 0)) {
      local_40 = local_90 - 1;
      local_48[0] = CONCAT31(local_48[0]._1_3_,3);
      (*(code *)PTR_drop_000c3ae0)();
    }
  }
  else {
    local_98 = 0;
    unaff_R15 = &local_88;
    local_88 = local_90;
    local_80 = uVar12;
    local_78 = 0;
    local_70 = uVar12;
    local_68 = 0xa0000000a;
    local_60 = 1;
    local_58 = 0;
    cStack_57 = '\0';
    do {
      uVar7 = local_88;
      <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next_match(local_48,unaff_R15);
      if (local_48[0] == 1) {
        uVar14 = local_38 - local_98;
        lVar5 = local_38;
      }
      else {
        if (cStack_57 != '\0') break;
        cStack_57 = '\x01';
        uVar14 = uVar12 - local_98;
        lVar5 = local_98;
        uVar7 = local_88;
        if ((uVar14 != 0 | local_58) != 1) break;
      }
      piVar4 = (int *)(local_98 + uVar7);
      uVar7 = uVar14;
      if ((uVar14 != 0) && (*(char *)((longlong)piVar4 + (uVar14 - 1)) == '\n')) {
        uVar7 = uVar14 - 1;
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else if (*(char *)((longlong)piVar4 + (uVar14 - 2)) == '\r') {
          uVar7 = uVar14 - 2;
        }
      }
      if ((5 < uVar7) && ((short)piVar4[1] == 0x3a53 && *piVar4 == 0x53526d56)) {
        local_50 = (byte *)((longlong)piVar4 + 6);
        uVar8 = 0;
        unaff_R15 = (ulonglong *)0x0;
        bVar16 = false;
        uVar12 = 0;
        pbVar18 = local_50;
        puVar21 = (ulonglong *)0x0;
        goto LAB_00037f9f;
      }
      local_98 = lVar5;
    } while (cStack_57 == '\0');
    if (lVar6 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
  }
  uVar8 = 0;
  goto LAB_00037f4c;
LAB_00037f9f:
  do {
    puVar19 = puVar21;
    if (bVar16) goto LAB_000381d2;
    bVar16 = true;
    pbVar17 = pbVar18;
    do {
      while( true ) {
        while( true ) {
          do {
            puVar20 = unaff_R15;
            if (pbVar17 == (byte *)((longlong)piVar4 + uVar7)) {
              uVar14 = (uVar7 - 6) - (longlong)puVar19;
              pbVar18 = (byte *)((longlong)piVar4 + uVar7);
              puVar21 = puVar19;
              unaff_R15 = puVar20;
              goto joined_r0x0003810c;
            }
            bVar1 = *pbVar17;
            uVar13 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              uVar11 = bVar1 & 0x1f;
              if (bVar1 < 0xe0) {
                pbVar18 = pbVar17 + 2;
                uVar13 = uVar11 << 6 | pbVar17[1] & 0x3f;
              }
              else {
                uVar13 = pbVar17[2] & 0x3f | (pbVar17[1] & 0x3f) << 6;
                if (bVar1 < 0xf0) {
                  pbVar18 = pbVar17 + 3;
                  uVar13 = uVar13 | uVar11 << 0xc;
                  uVar12 = (ulonglong)uVar13;
                }
                else {
                  pbVar18 = pbVar17 + 4;
                  uVar13 = uVar13 << 6;
                  uVar12 = (ulonglong)uVar13;
                  uVar13 = pbVar17[3] & 0x3f | uVar13 | (bVar1 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar18 = pbVar17 + 1;
            }
            puVar21 = (ulonglong *)(((longlong)pbVar18 - (longlong)pbVar17) + (longlong)puVar20);
            unaff_R15 = puVar21;
            if ((uVar13 < 0x21) &&
               (uVar12 = (ulonglong)uVar13, (0x100003e00U >> (uVar12 & 0x3f) & 1) != 0))
            goto LAB_00037f90;
            pbVar17 = pbVar18;
          } while (uVar13 < 0x85);
          uVar11 = uVar13 >> 8;
          uVar12 = (ulonglong)uVar11;
          uVar3 = (undefined2)(uVar13 >> 0x10);
          if (0x1f < uVar11) break;
          if (uVar11 == 0) {
            uVar12 = (ulonglong)(byte)PTR_WHITESPACE_MAP_000c3c38[uVar13 & 0xff];
            if ((PTR_WHITESPACE_MAP_000c3c38[uVar13 & 0xff] & 1) != 0) goto LAB_00037f90;
          }
          else if ((uVar11 == 0x16) &&
                  (uVar12 = (ulonglong)CONCAT21(uVar3,uVar13 == 0x1680), uVar13 == 0x1680))
          goto LAB_00037f90;
        }
        if (uVar11 == 0x20) break;
        if ((uVar11 == 0x30) &&
           (uVar12 = (ulonglong)CONCAT21(uVar3,uVar13 == 0x3000), uVar13 == 0x3000))
        goto LAB_00037f90;
      }
      uVar12 = (ulonglong)((byte)PTR_WHITESPACE_MAP_000c3c38[uVar13 & 0xff] >> 1);
    } while (((byte)PTR_WHITESPACE_MAP_000c3c38[uVar13 & 0xff] >> 1 & 1) == 0);
LAB_00037f90:
    bVar16 = false;
    uVar14 = (longlong)puVar20 - (longlong)puVar19;
joined_r0x0003810c:
  } while (uVar14 == 0);
  bVar1 = local_50[(longlong)puVar19];
  uVar12 = (ulonglong)bVar1;
  if ((uVar14 != 1) || ((uVar8 = 0, bVar1 != 0x2b && (bVar1 != 0x2d)))) {
    uVar7 = (ulonglong)(bVar1 == 0x2b);
    uVar15 = uVar14 - uVar7;
    if (uVar15 < 0x11) {
      if (uVar14 == uVar7) {
        uVar8 = 1;
        unaff_R15 = (ulonglong *)0x0;
      }
      else {
        uVar8 = 0;
        uVar12 = 0;
        unaff_R15 = (ulonglong *)0x0;
        do {
          uVar13 = (local_50 + (longlong)puVar19)[uVar12 + uVar7] - 0x30;
          if (9 < uVar13) goto LAB_000381d2;
          unaff_R15 = (ulonglong *)((ulonglong)uVar13 + (longlong)unaff_R15 * 10);
          uVar12 = uVar12 + 1;
        } while (uVar15 != uVar12);
LAB_0003817f:
        uVar12 = (ulonglong)unaff_R15 >> 0x36;
        unaff_R15 = (ulonglong *)((longlong)unaff_R15 << 10);
        uVar8 = 1;
        if (uVar12 != 0) {
LAB_00038201:
          uVar8 = 0;
        }
      }
    }
    else {
      uVar14 = 0;
      unaff_R15 = (ulonglong *)0x0;
      do {
        if (uVar15 == uVar14) goto LAB_0003817f;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = unaff_R15;
        uVar9 = SUB168(auVar2 * ZEXT816(10),0);
        if (SUB168(auVar2 * ZEXT816(10),8) != 0) goto LAB_00038201;
        uVar13 = (local_50 + (longlong)puVar19)[uVar14 + uVar7] - 0x30;
        uVar10 = (ulonglong)uVar13;
        unaff_R15 = (ulonglong *)(uVar9 + uVar10);
        uVar12 = (ulonglong)CARRY8(uVar9,uVar10);
        uVar8 = 0;
      } while ((uVar13 < 10) && (uVar14 = uVar14 + 1, !CARRY8(uVar9,uVar10)));
    }
  }
LAB_000381d2:
  if (lVar6 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar12,1);
  }
LAB_00037f4c:
  auVar22._8_8_ = unaff_R15;
  auVar22._0_8_ = uVar8;
  return auVar22;
}


