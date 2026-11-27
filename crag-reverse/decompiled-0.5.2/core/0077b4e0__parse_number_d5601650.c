// 0077b4e0 parse_number

/* core[c0acaeba6ab4c2e0]::num::imp::dec2flt::parse::parse_number */

longlong * __rustcall
core[c0acaeba6ab4c2e0]::num::imp::dec2flt::parse::parse_number
          (longlong *param_1,longlong *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  
  plVar3 = param_2;
  uVar15 = param_3;
  if (param_3 < 8) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar8 = *plVar3 + 0xcfcfcfcfcfcfcfd0;
      if (((*plVar3 + 0x4646464646464646U | uVar8) & 0x8080808080808080) != 0) goto LAB_0077b5b6;
      uVar8 = (uVar8 >> 8) + uVar8 * 10;
      uVar2 = ((uVar8 >> 0x10 & 0xff000000ff) * 0x271000000001 +
               (uVar8 & 0xff000000ff) * 0xf424000000064 >> 0x20) + uVar2 * 100000000;
      uVar15 = uVar15 - 8;
      plVar3 = plVar3 + 1;
    } while (7 < uVar15);
  }
  if (uVar15 != 0) {
LAB_0077b5b6:
    uVar8 = 0;
    do {
      bVar5 = *(char *)((longlong)plVar3 + uVar8) - 0x30;
      if (9 < bVar5) {
        uVar16 = uVar15 - uVar8;
        if (*(char *)((longlong)plVar3 + uVar8) == '.') {
          uVar17 = ~uVar8 + uVar15;
          pbVar10 = (byte *)((longlong)plVar3 + uVar8 + 1);
          if (8 < (longlong)uVar16) goto LAB_0077b670;
          goto LAB_0077b6d6;
        }
        pbVar10 = (byte *)((longlong)plVar3 + uVar8);
        lVar18 = 0;
        lVar6 = 0;
        uVar17 = uVar16;
        goto LAB_0077b75f;
      }
      uVar2 = (ulonglong)bVar5 + uVar2 * 10;
      uVar8 = uVar8 + 1;
    } while (uVar15 != uVar8);
  }
  if (param_3 == 0) {
    uVar14 = 2;
    goto LAB_0077b98a;
  }
  uVar16 = 0;
  lVar6 = 0;
  uVar8 = param_3;
joined_r0x0077b7cd:
  bVar19 = true;
  lVar18 = 0;
  if ((longlong)uVar8 < 0x14) goto LAB_0077b7e4;
LAB_0077b865:
  if (param_3 == 0) {
LAB_0077b9a0:
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007985d8,0);
    pcVar1 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar1)();
    return plVar3;
  }
  lVar12 = uVar8 - 0x13;
  uVar15 = 0;
  do {
    bVar5 = *(byte *)((longlong)param_2 + uVar15);
    if ((bVar5 != 0x2e) && (bVar5 != 0x30)) break;
    bVar7 = bVar5 - 0x2f;
    if (bVar5 < 0x2f) {
      bVar7 = 0;
    }
    lVar12 = lVar12 - (ulonglong)bVar7;
    uVar15 = uVar15 + 1;
  } while (param_3 != uVar15);
  if (0 < lVar12) {
    uVar2 = 0;
    lVar6 = -param_3;
    do {
      lVar4 = lVar6;
      bVar5 = (char)*param_2 - 0x30;
      lVar6 = lVar4;
      if (9 < bVar5) goto joined_r0x0077b90c;
      param_2 = (longlong *)((longlong)param_2 + 1);
      uVar2 = (ulonglong)bVar5 + uVar2 * 10;
      lVar6 = lVar4 + 1;
    } while ((uVar2 < 1000000000000000000) && (lVar6 != 0));
    if (uVar2 < 1000000000000000000) {
      if (lVar4 == -1) goto LAB_0077b9a0;
joined_r0x0077b90c:
      lVar6 = -1 - lVar6;
      if (lVar6 == 0) {
        lVar13 = 0;
      }
      else {
        lVar4 = lVar6;
        while( true ) {
          param_2 = (longlong *)((longlong)param_2 + 1);
          if (9 < (byte)(*(char *)param_2 - 0x30U)) break;
          lVar13 = lVar4 + -1;
          uVar2 = (ulonglong)(byte)(*(char *)param_2 - 0x30U) + uVar2 * 10;
          if ((999999999999999999 < uVar2) || (bVar20 = lVar4 == 1, lVar4 = lVar13, bVar20))
          goto LAB_0077b966;
        }
        lVar13 = lVar4;
      }
LAB_0077b966:
      lVar6 = (lVar13 - lVar6) + lVar18;
    }
    else {
      lVar6 = lVar18 - (uVar16 + lVar6);
    }
  }
  bVar20 = 0 < lVar12;
  goto joined_r0x0077b978;
  while( true ) {
    uVar9 = (uVar9 >> 8) + uVar9 * 10;
    uVar2 = ((uVar9 >> 0x10 & 0xff000000ff) * 0x271000000001 +
             (uVar9 & 0xff000000ff) * 0xf424000000064 >> 0x20) + uVar2 * 100000000;
    uVar17 = uVar17 - 8;
    pbVar10 = pbVar10 + 8;
    if (uVar17 < 8) break;
LAB_0077b670:
    uVar9 = *(longlong *)pbVar10 + 0xcfcfcfcfcfcfcfd0;
    if (((*(longlong *)pbVar10 + 0x4646464646464646U | uVar9) & 0x8080808080808080) != 0)
    goto LAB_0077b706;
  }
LAB_0077b6d6:
  if (uVar17 == 0) {
    uVar17 = 0;
  }
  else {
LAB_0077b706:
    pbVar11 = pbVar10 + uVar17;
    do {
      bVar5 = *pbVar10;
      if (9 < (byte)(bVar5 - 0x30)) goto LAB_0077b749;
      pbVar10 = pbVar10 + 1;
      uVar2 = (ulonglong)(byte)(bVar5 - 0x30) + uVar2 * 10;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    uVar17 = 0;
    pbVar10 = pbVar11;
  }
LAB_0077b749:
  lVar18 = ~uVar8 + (uVar15 - uVar17);
  lVar6 = (uVar17 - uVar15) + uVar8 + 1;
LAB_0077b75f:
  uVar14 = 2;
  uVar8 = (param_3 - uVar15) + lVar18 + uVar8;
  if (uVar8 == 0) goto LAB_0077b98a;
  if (uVar17 == 0) goto joined_r0x0077b7cd;
  if ((*pbVar10 | 0x20) == 0x65) {
    lVar12 = uVar17 - 1;
    if (lVar12 == 0) goto LAB_0077b98a;
    bVar5 = pbVar10[1];
    if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
      lVar12 = uVar17 - 2;
      if (lVar12 == 0) goto LAB_0077b98a;
      pbVar11 = pbVar10 + 2;
      bVar7 = pbVar10[2];
    }
    else {
      pbVar11 = pbVar10 + 1;
      bVar7 = bVar5;
    }
    if (9 < (byte)(bVar7 - 0x30)) goto LAB_0077b98a;
    lVar4 = 0;
    lVar18 = 0;
    do {
      bVar7 = *pbVar11;
      if (9 < (byte)(bVar7 - 0x30)) goto LAB_0077b844;
      pbVar11 = pbVar11 + 1;
      lVar13 = (ulonglong)(byte)(bVar7 - 0x30) + lVar18 * 10;
      if (lVar18 < 0x10000) {
        lVar18 = lVar13;
        lVar4 = lVar13;
      }
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar12 = 0;
LAB_0077b844:
    lVar18 = -lVar4;
    if (bVar5 != 0x2d) {
      lVar18 = lVar4;
    }
    lVar6 = lVar6 + lVar18;
    bVar19 = lVar12 == 0;
  }
  else {
    bVar19 = false;
    lVar18 = 0;
  }
  if (0x13 < (longlong)uVar8) goto LAB_0077b865;
LAB_0077b7e4:
  bVar20 = false;
joined_r0x0077b978:
  uVar14 = 2;
  if (bVar19) {
    *param_1 = lVar6;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar14 = bVar20;
  }
LAB_0077b98a:
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar14;
  return param_1;
}


