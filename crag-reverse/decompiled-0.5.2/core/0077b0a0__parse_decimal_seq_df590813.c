// 0077b0a0 parse_decimal_seq

/* core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::parse_decimal_seq */

undefined8 __rustcall
core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::parse_decimal_seq
          (undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong auStack_338 [96];
  int local_38;
  undefined1 local_34;
  
  (*(code *)PTR_memset_00799090)(param_4,0x30d);
  if (param_3 != 0) {
    uVar10 = 0;
    uVar6 = param_3;
    do {
      cVar1 = *(char *)(param_2 + uVar10);
      if (cVar1 != '0') {
        bVar9 = cVar1 - 0x30;
        if (bVar9 < 10) {
          uVar17 = 0;
          goto LAB_0077b130;
        }
        pbVar11 = (byte *)(param_2 + uVar10);
        uVar4 = param_3 - uVar10;
        if (cVar1 != '.') {
          uVar17 = 0;
          goto joined_r0x0077b26f;
        }
        pbVar7 = (byte *)(param_2 + uVar10 + 1);
        uVar6 = ~uVar10 + param_3;
        goto LAB_0077b1d4;
      }
      uVar6 = uVar6 - 1;
      uVar10 = uVar10 + 1;
    } while (param_3 != uVar10);
  }
  goto LAB_0077b46d;
  while( true ) {
    cVar1 = *(char *)(param_2 + uVar15 + 1 + uVar10);
    bVar9 = cVar1 - 0x30;
    uVar17 = uVar15 + 1;
    if (9 < bVar9) break;
LAB_0077b130:
    uVar15 = uVar17;
    if (uVar15 < 0x300) {
      *(byte *)((longlong)auStack_338 + uVar15) = bVar9;
    }
    if (~uVar10 + param_3 == uVar15) {
      pbVar11 = (byte *)(uVar10 + param_2 + uVar15 + 1);
      uVar4 = 0;
      goto LAB_0077b21f;
    }
  }
  uVar4 = uVar6 - uVar17;
  pbVar11 = (byte *)(uVar10 + param_2 + uVar17);
  if (cVar1 == '.') {
    uVar6 = ~uVar17 + uVar6;
    pbVar7 = (byte *)(uVar10 + param_2 + uVar17 + 1);
    uVar10 = uVar6;
    if (uVar17 == 0) {
LAB_0077b1d4:
      if (uVar6 == 0) {
        uVar17 = 0;
        uVar4 = 0;
      }
      else {
        pbVar11 = pbVar11 + uVar4;
        uVar17 = 0;
        uVar10 = 0;
        do {
          if (pbVar7[uVar10] != 0x30) {
            pbVar7 = pbVar7 + uVar10;
            uVar17 = 0;
            uVar10 = uVar6 - uVar10;
            goto joined_r0x0077b19a;
          }
          uVar10 = uVar10 + 1;
        } while (uVar6 != uVar10);
        uVar4 = 0;
        pbVar7 = pbVar11;
      }
    }
    else {
joined_r0x0077b19a:
      uVar4 = uVar10;
      uVar10 = uVar17;
      if (7 < uVar4) {
        do {
          uVar17 = uVar10 + 8;
          if (0x2ff < uVar17) goto LAB_0077b349;
          uVar15 = *(longlong *)pbVar7 + 0xcfcfcfcfcfcfcfd0;
          if (((*(longlong *)pbVar7 + 0x4646464646464646U | uVar15) & 0x8080808080808080) != 0)
          goto LAB_0077b349;
          if (0x300 < uVar10) goto LAB_0077b4c4;
          *(ulonglong *)((longlong)auStack_338 + uVar10) = uVar15;
          uVar4 = uVar4 - 8;
          pbVar7 = pbVar7 + 8;
          uVar10 = uVar17;
        } while (7 < uVar4);
      }
      uVar10 = uVar17;
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
LAB_0077b349:
        uVar17 = uVar10;
        bVar9 = *pbVar7 - 0x30;
        if (bVar9 < 10) {
          lVar8 = uVar4 - 1;
          lVar12 = 0;
          do {
            lVar16 = lVar12;
            if (lVar16 + uVar17 < 0x300) {
              *(byte *)((longlong)auStack_338 + lVar16 + uVar17) = bVar9;
            }
            if (lVar8 == lVar16) {
              uVar4 = 0;
              break;
            }
            bVar9 = pbVar7[lVar16 + 1] - 0x30;
            uVar4 = uVar4 - 1;
            lVar12 = lVar16 + 1;
          } while (bVar9 < 10);
          pbVar7 = pbVar7 + lVar16 + 1;
          uVar17 = uVar17 + lVar16 + 1;
        }
      }
    }
    local_38 = (int)uVar4 - (int)uVar6;
    pbVar11 = pbVar7;
    if (uVar17 == 0) goto LAB_0077b3cd;
LAB_0077b228:
    lVar8 = param_3 - uVar4;
    if (param_3 < uVar4) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_007985a8,param_3);
LAB_0077b4c4:
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_00798590,0x300);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    if (lVar8 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      do {
        cVar1 = *(char *)(param_2 + -1 + lVar8);
        if (cVar1 != '.') {
          if (cVar1 != '0') break;
          lVar12 = lVar12 + 1;
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar17 = uVar17 - lVar12;
    local_38 = local_38 + (int)lVar12 + (int)uVar17;
    if (0x300 < uVar17) {
      local_34 = 1;
      uVar17 = 0x300;
    }
  }
  else {
LAB_0077b21f:
    uVar17 = uVar15 + 1;
    if (uVar17 != 0) goto LAB_0077b228;
LAB_0077b3cd:
    uVar17 = 0;
  }
joined_r0x0077b26f:
  if ((uVar4 != 0) && ((*pbVar11 | 0x20) == 0x65)) {
    lVar8 = uVar4 - 1;
    if (lVar8 == 0) {
      iVar13 = 0;
    }
    else {
      pbVar7 = pbVar11 + 1;
      bVar9 = *pbVar7;
      if ((bVar9 == 0x2d) || (bVar9 == 0x2b)) {
        lVar8 = uVar4 - 2;
        if (lVar8 != 0) {
          pbVar7 = pbVar11 + 2;
          goto LAB_0077b411;
        }
        iVar3 = 0;
      }
      else {
LAB_0077b411:
        iVar3 = 0;
        lVar12 = 0;
        iVar13 = 0;
        do {
          if (9 < (byte)(pbVar7[lVar12] - 0x30)) break;
          iVar14 = (uint)(byte)(pbVar7[lVar12] - 0x30) + iVar13 * 10;
          if (iVar13 < 0x10000) {
            iVar13 = iVar14;
            iVar3 = iVar14;
          }
          lVar12 = lVar12 + 1;
        } while (lVar8 != lVar12);
      }
      iVar13 = -iVar3;
      if (bVar9 != 0x2d) {
        iVar13 = iVar3;
      }
    }
    local_38 = local_38 + iVar13;
  }
  if (0x12 < uVar17) goto LAB_0077b488;
LAB_0077b46d:
  (*(code *)PTR_memset_00799090)();
LAB_0077b488:
  (*(code *)PTR_memcpy_00799008)();
  return param_1;
}


