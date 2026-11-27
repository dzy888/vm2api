// 005d7bf0 parse_acp_usage

/* craggemini_core[66f3c71560d70857]::acp_backend::parse_acp_usage */

ulonglong * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::parse_acp_usage(ulonglong *param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  longlong local_80;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  if ((param_2 == (char *)0x0) || (*param_2 != '\x05')) {
    *param_1 = 0;
    return param_1;
  }
  lVar5 = *(longlong *)(param_2 + 8);
  if (lVar5 != 0) {
    local_60 = *(longlong *)(param_2 + 0x10);
    lVar9 = lVar5;
    local_80 = local_60;
    do {
      uVar7 = (ulonglong)*(ushort *)(lVar9 + 0x272);
      pcVar10 = (char *)(lVar9 + -0x20);
      uVar4 = (ulonglong)((uint)*(ushort *)(lVar9 + 0x272) * 8);
      lVar12 = uVar4 * 3;
      uVar11 = 0xffffffffffffffff;
      lVar13 = lVar9 + 0x168;
      do {
        if (lVar12 == 0) goto LAB_005d7cd4;
        uVar6 = *(ulonglong *)(lVar13 + 0x10);
        lVar8 = uVar6 - 0xb;
        if (10 < uVar6) {
          uVar6 = 0xb;
        }
        iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar6);
        lVar8 = -lVar8;
        if (iVar2 != 0) {
          lVar8 = (longlong)iVar2;
        }
        bVar3 = (0 < lVar8) - (lVar8 < 0);
        uVar4 = (ulonglong)bVar3;
        pcVar10 = pcVar10 + 0x20;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + -0x18;
        lVar13 = lVar13 + 0x18;
      } while (bVar3 == 1);
      uVar7 = uVar11;
      if (bVar3 == 0) goto LAB_005d7de3;
LAB_005d7cd4:
      bVar14 = local_80 == 0;
      local_80 = local_80 + -1;
      if (bVar14) goto LAB_005d7d0f;
      lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
    } while( true );
  }
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
LAB_005d8583:
  uVar7 = 0xffffffffffffffff;
  if (!CARRY8(local_40,local_48)) {
    uVar7 = local_40 + local_48;
  }
LAB_005d8594:
  if (((local_40 != 0 || local_50 != 0) || (local_48 != 0 || local_58 != 0)) || uVar7 != 0) {
    param_1[1] = local_40;
    param_1[2] = local_48;
    param_1[3] = local_50;
    param_1[4] = local_58;
    param_1[5] = uVar7;
  }
  *param_1 = (ulonglong)
             (((local_40 != 0 || local_50 != 0) || (local_48 != 0 || local_58 != 0)) || uVar7 != 0);
  return param_1;
LAB_005d7d0f:
  local_40 = 0;
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar1 = *(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)uVar1 * 8);
    lVar12 = uVar4 * 3;
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) {
        uVar7 = (ulonglong)uVar1;
        goto LAB_005d7dc1;
      }
      uVar11 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar11 - 0xc;
      if (0xb < uVar11) {
        uVar11 = 0xc;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar11);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    if (bVar3 == 0) break;
LAB_005d7dc1:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) goto LAB_005d7dff;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
LAB_005d7de3:
  if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
    local_40 = *(ulonglong *)(pcVar10 + 0x10);
  }
  else {
    local_40 = 0;
  }
LAB_005d7dff:
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar7 = (ulonglong)*(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)*(ushort *)(lVar9 + 0x272) * 8);
    lVar12 = uVar4 * 3;
    uVar11 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) goto LAB_005d7eb4;
      uVar6 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar6 - 0xc;
      if (0xb < uVar6) {
        uVar6 = 0xc;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar6);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    uVar7 = uVar11;
    if (bVar3 == 0) goto LAB_005d7fc3;
LAB_005d7eb4:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) break;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
  local_48 = 0;
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar1 = *(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)uVar1 * 8);
    lVar12 = uVar4 * 3;
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) {
        uVar7 = (ulonglong)uVar1;
        goto LAB_005d7fa1;
      }
      uVar11 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar11 - 0xd;
      if (0xc < uVar11) {
        uVar11 = 0xd;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar11);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    if (bVar3 == 0) break;
LAB_005d7fa1:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) goto LAB_005d7fdf;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
LAB_005d7fc3:
  if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
    local_48 = *(ulonglong *)(pcVar10 + 0x10);
  }
  else {
    local_48 = 0;
  }
LAB_005d7fdf:
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar7 = (ulonglong)*(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)*(ushort *)(lVar9 + 0x272) * 8);
    lVar12 = uVar4 * 3;
    uVar11 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) goto LAB_005d8094;
      uVar6 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar6 - 0x10;
      if (0xf < uVar6) {
        uVar6 = 0x10;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar6);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    uVar7 = uVar11;
    if (bVar3 == 0) goto LAB_005d81a3;
LAB_005d8094:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) break;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
  local_50 = 0;
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar1 = *(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)uVar1 * 8);
    lVar12 = uVar4 * 3;
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) {
        uVar7 = (ulonglong)uVar1;
        goto LAB_005d8181;
      }
      uVar11 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar11 - 0x12;
      if (0x11 < uVar11) {
        uVar11 = 0x12;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar11);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    if (bVar3 == 0) break;
LAB_005d8181:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) goto LAB_005d81bd;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
LAB_005d81a3:
  if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
    local_50 = *(ulonglong *)(pcVar10 + 0x10);
  }
  else {
    local_50 = 0;
  }
LAB_005d81bd:
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar7 = (ulonglong)*(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)*(ushort *)(lVar9 + 0x272) * 8);
    lVar12 = uVar4 * 3;
    uVar11 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) goto LAB_005d8274;
      uVar6 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar6 - 0xd;
      if (0xc < uVar6) {
        uVar6 = 0xd;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar6);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    uVar7 = uVar11;
    if (bVar3 == 0) goto LAB_005d8383;
LAB_005d8274:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) break;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
  local_58 = 0;
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar1 = *(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)uVar1 * 8);
    lVar12 = uVar4 * 3;
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) {
        uVar7 = (ulonglong)uVar1;
        goto LAB_005d8361;
      }
      uVar11 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar11 - 0xe;
      if (0xd < uVar11) {
        uVar11 = 0xe;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar11);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    if (bVar3 == 0) break;
LAB_005d8361:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) goto LAB_005d839f;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
LAB_005d8383:
  if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
    local_58 = *(ulonglong *)(pcVar10 + 0x10);
  }
  else {
    local_58 = 0;
  }
LAB_005d839f:
  lVar9 = lVar5;
  local_80 = local_60;
  do {
    uVar7 = (ulonglong)*(ushort *)(lVar9 + 0x272);
    pcVar10 = (char *)(lVar9 + -0x20);
    uVar4 = (ulonglong)((uint)*(ushort *)(lVar9 + 0x272) * 8);
    lVar12 = uVar4 * 3;
    uVar11 = 0xffffffffffffffff;
    lVar13 = lVar9 + 0x168;
    do {
      if (lVar12 == 0) goto LAB_005d8454;
      uVar6 = *(ulonglong *)(lVar13 + 0x10);
      lVar8 = uVar6 - 0xb;
      if (10 < uVar6) {
        uVar6 = 0xb;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar6);
      lVar8 = -lVar8;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar3 = (0 < lVar8) - (lVar8 < 0);
      uVar4 = (ulonglong)bVar3;
      pcVar10 = pcVar10 + 0x20;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + 0x18;
    } while (bVar3 == 1);
    uVar7 = uVar11;
    if (bVar3 == 0) goto LAB_005d853b;
LAB_005d8454:
    bVar14 = local_80 == 0;
    local_80 = local_80 + -1;
    if (bVar14) break;
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar7 * 8);
  } while( true );
LAB_005d8491:
  uVar1 = *(ushort *)(lVar5 + 0x272);
  pcVar10 = (char *)(lVar5 + -0x20);
  uVar4 = (ulonglong)((uint)uVar1 * 8);
  lVar9 = uVar4 * 3;
  uVar7 = 0xffffffffffffffff;
  lVar12 = lVar5 + 0x168;
  do {
    if (lVar9 == 0) {
      uVar7 = (ulonglong)uVar1;
      goto LAB_005d8521;
    }
    uVar11 = *(ulonglong *)(lVar12 + 0x10);
    lVar13 = uVar11 - 0xc;
    if (0xb < uVar11) {
      uVar11 = 0xc;
    }
    iVar2 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar11);
    lVar13 = -lVar13;
    if (iVar2 != 0) {
      lVar13 = (longlong)iVar2;
    }
    bVar3 = (0 < lVar13) - (lVar13 < 0);
    uVar4 = (ulonglong)bVar3;
    pcVar10 = pcVar10 + 0x20;
    uVar7 = uVar7 + 1;
    lVar9 = lVar9 + -0x18;
    lVar12 = lVar12 + 0x18;
  } while (bVar3 == 1);
  if (bVar3 == 0) goto LAB_005d853b;
LAB_005d8521:
  bVar14 = local_60 == 0;
  local_60 = local_60 + -1;
  if (bVar14) goto LAB_005d8583;
  lVar5 = *(longlong *)(lVar5 + 0x278 + uVar7 * 8);
  goto LAB_005d8491;
LAB_005d853b:
  if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
    uVar7 = *(ulonglong *)(pcVar10 + 0x10);
    goto LAB_005d8594;
  }
  goto LAB_005d8583;
}


