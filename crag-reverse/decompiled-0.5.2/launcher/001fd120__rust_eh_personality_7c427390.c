// 001fd120 rust_eh_personality

undefined4 rust_eh_personality(void)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint unaff_ESI;
  uint uVar14;
  int unaff_EDI;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  byte *pbVar20;
  ulonglong uVar21;
  
  if (unaff_EDI != 1) {
    return 3;
  }
  pbVar4 = (byte *)(*(code *)PTR__Unwind_GetLanguageSpecificData_0021abc0)();
  lVar5 = (*(code *)PTR__Unwind_GetIPInfo_0021abc8)();
  lVar6 = (*(code *)PTR__Unwind_GetRegionStart_0021abd0)();
  if (pbVar4 == (byte *)0x0) goto LAB_001fd61e;
  bVar10 = *pbVar4;
  pbVar20 = pbVar4 + 1;
  if (bVar10 == 0xff) goto LAB_001fd301;
  switch(bVar10 >> 4 & 7) {
  case 0:
    break;
  case 1:
    goto switchD_001fd1d2_caseD_1;
  case 2:
    puVar7 = &DAT_00217e58;
    goto LAB_001fd206;
  case 3:
    puVar7 = &DAT_00217e88;
LAB_001fd206:
    lVar8 = (**(code **)(puVar7 + 0x28))();
    if (lVar8 != 0) goto switchD_001fd1d2_caseD_1;
    break;
  case 4:
    if (lVar6 == 0) {
      return 3;
    }
switchD_001fd1d2_caseD_1:
    switch(bVar10 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      pbVar20 = pbVar4 + 9;
      break;
    case 1:
      do {
        bVar10 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while ((char)bVar10 < '\0');
      break;
    case 2:
      pbVar20 = pbVar4 + 3;
      break;
    case 3:
      goto LAB_001fd2ec;
    default:
      goto switchD_001fd1d2_default;
    case 9:
      do {
        bVar10 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while ((char)bVar10 < '\0');
      break;
    case 10:
      pbVar20 = pbVar4 + 3;
      break;
    case 0xb:
LAB_001fd2ec:
      pbVar20 = pbVar4 + 5;
    }
    goto LAB_001fd301;
  case 5:
    pbVar20 = (byte *)((ulonglong)(pbVar4 + 8) & 0xfffffffffffffff8);
    break;
  default:
    goto switchD_001fd1d2_default;
  }
  if ((bVar10 & 0xf) != 0) {
switchD_001fd1d2_default:
    return 3;
  }
  pbVar20 = pbVar20 + 8;
LAB_001fd301:
  pbVar4 = pbVar20 + 1;
  if (*pbVar20 != 0xff) {
    do {
      bVar10 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while ((char)bVar10 < '\0');
  }
  puVar19 = (ulonglong *)(pbVar4 + 1);
  uVar16 = 0;
  bVar10 = 0;
  do {
    uVar17 = *puVar19;
    puVar19 = (ulonglong *)((longlong)puVar19 + 1);
    uVar16 = uVar16 | (ulonglong)((byte)uVar17 & 0x7f) << (bVar10 & 0x3f);
    bVar10 = bVar10 + 7;
  } while ((char)(byte)uVar17 < '\0');
  if (*pbVar4 < 0x10) {
    puVar15 = puVar19;
    do {
      uVar17 = 4;
      if ((ulonglong *)((longlong)puVar19 + uVar16) <= puVar15) goto joined_r0x001fd627;
      switch(*pbVar4) {
      case 0:
      case 4:
      case 0xc:
        uVar13 = *puVar15;
        uVar21 = puVar15[1];
        uVar18 = puVar15[2];
        puVar15 = puVar15 + 3;
        break;
      case 1:
        bVar10 = 0;
        uVar13 = 0;
        do {
          uVar17 = *puVar15;
          puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          uVar13 = uVar13 | (ulonglong)((byte)uVar17 & 0x7f) << (bVar10 & 0x3f);
          bVar10 = bVar10 + 7;
        } while ((char)(byte)uVar17 < '\0');
        bVar10 = 0;
        uVar21 = 0;
        do {
          uVar17 = *puVar15;
          puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          uVar21 = uVar21 | (ulonglong)((byte)uVar17 & 0x7f) << (bVar10 & 0x3f);
          bVar10 = bVar10 + 7;
        } while ((char)(byte)uVar17 < '\0');
        bVar10 = 0;
        uVar18 = 0;
        do {
          uVar17 = *puVar15;
          puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          uVar18 = uVar18 | (ulonglong)((byte)uVar17 & 0x7f) << (bVar10 & 0x3f);
          bVar10 = bVar10 + 7;
        } while ((char)(byte)uVar17 < '\0');
        break;
      case 2:
        uVar13 = (ulonglong)(ushort)*puVar15;
        uVar21 = (ulonglong)*(ushort *)((longlong)puVar15 + 2);
        uVar18 = (ulonglong)*(ushort *)((longlong)puVar15 + 4);
        goto LAB_001fd550;
      case 3:
        uVar13 = (ulonglong)(uint)*puVar15;
        uVar21 = (ulonglong)*(uint *)((longlong)puVar15 + 4);
        uVar18 = (ulonglong)(uint)puVar15[1];
        puVar15 = (ulonglong *)((longlong)puVar15 + 0xc);
        break;
      default:
        goto switchD_001fd1d2_default;
      case 9:
        uVar13 = 0;
        uVar11 = 0;
        do {
          bVar10 = (byte)*puVar15;
          puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          uVar13 = uVar13 | (ulonglong)(bVar10 & 0x7f) << ((byte)uVar11 & 0x3f);
          uVar11 = uVar11 + 7;
        } while ((char)bVar10 < '\0');
        uVar21 = 0;
        uVar12 = 0;
        do {
          bVar1 = (byte)*puVar15;
          puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          uVar21 = uVar21 | (ulonglong)(bVar1 & 0x7f) << ((byte)uVar12 & 0x3f);
          uVar12 = uVar12 + 7;
        } while ((char)bVar1 < '\0');
        uVar18 = 0;
        uVar14 = 0;
        do {
          bVar2 = (byte)*puVar15;
          puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          uVar18 = uVar18 | (ulonglong)(bVar2 & 0x7f) << ((byte)uVar14 & 0x3f);
          uVar14 = uVar14 + 7;
        } while ((char)bVar2 < '\0');
        uVar17 = -1L << ((byte)uVar11 & 0x3f);
        if (bVar10 < 0x40) {
          uVar17 = 0;
        }
        if (0x3f < uVar11) {
          uVar17 = 0;
        }
        uVar9 = -1L << ((byte)uVar12 & 0x3f);
        uVar13 = uVar13 | uVar17;
        if (bVar1 < 0x40) {
          uVar9 = 0;
        }
        if (0x3f < uVar12) {
          uVar9 = 0;
        }
        uVar17 = -1L << ((byte)uVar14 & 0x3f);
        uVar21 = uVar21 | uVar9;
        if (bVar2 < 0x40) {
          uVar17 = 0;
        }
        if (0x3f < uVar14) {
          uVar17 = 0;
        }
        uVar18 = uVar18 | uVar17;
        break;
      case 10:
        uVar13 = (ulonglong)(short)(ushort)*puVar15;
        uVar21 = (ulonglong)(short)*(ushort *)((longlong)puVar15 + 2);
        uVar18 = (ulonglong)(short)*(ushort *)((longlong)puVar15 + 4);
LAB_001fd550:
        puVar15 = (ulonglong *)((longlong)puVar15 + 6);
        break;
      case 0xb:
        uVar13 = (ulonglong)(int)(uint)*puVar15;
        uVar21 = (ulonglong)(int)*(uint *)((longlong)puVar15 + 4);
        uVar18 = (ulonglong)(int)(uint)puVar15[1];
        puVar15 = (ulonglong *)((longlong)puVar15 + 0xc);
      }
      uVar17 = 4;
      uVar9 = 0;
      bVar10 = 0;
      do {
        uVar3 = *puVar15;
        puVar15 = (ulonglong *)((longlong)puVar15 + 1);
        uVar9 = uVar9 | (ulonglong)((byte)uVar3 & 0x7f) << (bVar10 & 0x3f);
        bVar10 = bVar10 + 7;
      } while ((char)(byte)uVar3 < '\0');
      if (lVar5 - 1U < uVar13 + lVar6) goto joined_r0x001fd627;
    } while (uVar13 + lVar6 + uVar21 <= lVar5 - 1U);
    if (uVar18 == 0) {
LAB_001fd61e:
      uVar17 = 0;
    }
    else if (uVar9 == 0) {
      uVar17 = 1;
    }
    else {
      pbVar4 = (byte *)((longlong)puVar19 + uVar16 + uVar9 + -1);
      uVar16 = 0;
      uVar11 = 0;
      do {
        bVar10 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar16 = uVar16 | (ulonglong)(bVar10 & 0x7f) << ((byte)uVar11 & 0x3f);
        uVar11 = uVar11 + 7;
      } while ((char)bVar10 < '\0');
      uVar13 = -1L << ((byte)uVar11 & 0x3f);
      if (bVar10 < 0x40) {
        uVar13 = 0;
      }
      if (0x3f < uVar11) {
        uVar13 = 0;
      }
      uVar17 = 1;
      if (uVar13 != 0 || uVar16 != 0) {
        uVar17 = (ulonglong)(0 < (longlong)(uVar16 | uVar13)) ^ 3;
      }
    }
  }
  else {
    if (uVar16 != 0) {
      return 3;
    }
    uVar17 = 4;
  }
joined_r0x001fd627:
  if ((unaff_ESI & 1) != 0) {
    return (&DAT_0012efac)[uVar17];
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar17) {
  case 0:
    return 8;
  case 4:
    return 2;
  }
}


