// 00083710 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* gimli[a7f20a324fd82d99]::read::line::parse_attribute::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
gimli[a7f20a324fd82d99]::read::line::parse_attribute::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (undefined8 *param_1,longlong *param_2,undefined4 param_3,short param_4)

{
  byte bVar1;
  qword *pqVar2;
  uint3 *puVar3;
  dword dVar4;
  undefined1 uVar5;
  dword *pdVar6;
  dword *pdVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  qword *pqVar12;
  uint uVar13;
  qword *pqVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  
  cVar11 = (char)((uint)param_3 >> 8);
  switch(param_4) {
  case 3:
    pqVar12 = (qword *)*param_2;
    if ((ulonglong)param_2[1] < 2) {
LAB_00083b9f:
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined1 *)((longlong)param_1 + 0xf) = 0;
      *(undefined2 *)((longlong)param_1 + 0xd) = 0;
      *(undefined4 *)((longlong)param_1 + 9) = 0;
      goto LAB_00083e0e;
    }
    puVar10 = (uint *)(param_2[1] - 2);
    pdVar6 = (dword *)((longlong)pqVar12 + 2);
    *param_2 = (longlong)pdVar6;
    param_2[1] = (longlong)puVar10;
    pqVar12 = (qword *)(ulonglong)(ushort)*pqVar12;
    lVar17 = (longlong)puVar10 - (longlong)pqVar12;
    if (pqVar12 <= puVar10) {
LAB_00083b70:
      pbVar16 = (byte *)((longlong)pdVar6 + (longlong)pqVar12);
LAB_00083b74:
      *param_2 = (longlong)pbVar16;
      param_2[1] = lVar17;
      uVar9 = (uint)pdVar6 >> 8;
      uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
      uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
      uVar18 = 1;
      goto LAB_0008403c;
    }
    goto LAB_0008407b;
  case 4:
    pqVar12 = (qword *)*param_2;
    if ((ulonglong)param_2[1] < 4) goto LAB_00083b9f;
    puVar10 = (uint *)(param_2[1] - 4);
    pdVar6 = (dword *)((longlong)pqVar12 + 4);
    *param_2 = (longlong)pdVar6;
    param_2[1] = (longlong)puVar10;
    pqVar12 = (qword *)(ulonglong)(uint)*pqVar12;
    lVar17 = (longlong)puVar10 - (longlong)pqVar12;
    if (pqVar12 <= puVar10) goto LAB_00083b70;
    goto LAB_0008407b;
  case 5:
    pdVar6 = (dword *)*param_2;
    if (1 < (ulonglong)param_2[1]) {
      pqVar12 = (qword *)((longlong)pdVar6 + 2);
      *param_2 = (longlong)pqVar12;
      param_2[1] = param_2[1] - 2;
      dVar4 = *pdVar6;
      pdVar6 = (dword *)(ulonglong)(ushort)dVar4;
      uVar9 = (uint)(ushort)((ushort)dVar4 >> 8);
      uVar18 = 3;
LAB_00083cf1:
      uVar13 = 0;
      uVar15 = 0;
      goto LAB_0008403c;
    }
    goto LAB_0008407b;
  case 6:
    pdVar7 = (dword *)*param_2;
    if (3 < (ulonglong)param_2[1]) {
      pqVar12 = (qword *)(pdVar7 + 1);
      *param_2 = (longlong)pqVar12;
      param_2[1] = param_2[1] - 4;
      uVar13 = *pdVar7;
      pdVar6 = (dword *)(ulonglong)uVar13;
      uVar9 = uVar13 >> 8;
      uVar13 = uVar13 >> 0x10;
      uVar18 = 4;
      uVar15 = 0;
      goto LAB_0008403c;
    }
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)((longlong)param_1 + 9) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    goto LAB_00084083;
  case 7:
    pdVar7 = (dword *)*param_2;
    if (7 < (ulonglong)param_2[1]) {
      *param_2 = (longlong)(pdVar7 + 2);
      param_2[1] = param_2[1] - 8;
      pqVar12 = (qword *)(ulonglong)(ushort)*(qword *)(pdVar7 + 1);
      uVar13 = *pdVar7;
      pdVar6 = (dword *)(ulonglong)uVar13;
      uVar9 = uVar13 >> 8;
      uVar13 = uVar13 >> 0x10;
      uVar15 = (ulonglong)(uint3)*(qword *)(pdVar7 + 1) << 0x20 |
               (ulonglong)*(byte *)((longlong)pdVar7 + 7) << 0x38;
      uVar18 = 5;
      goto LAB_0008403c;
    }
    break;
  case 8:
    pdVar6 = (dword *)*param_2;
    puVar10 = (uint *)param_2[1];
    if (puVar10 != (uint *)0x0) {
      pqVar12 = (qword *)0x0;
      pdVar7 = pdVar6;
      do {
        if ((byte)*pdVar7 == 0) {
          *param_2 = (longlong)pdVar7 + 1;
          param_2[1] = (longlong)(~(ulonglong)pqVar12 + (longlong)puVar10);
          uVar9 = (uint)pdVar6 >> 8;
          uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
          uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
          uVar18 = 0x1f;
          goto LAB_0008403c;
        }
        pqVar12 = (qword *)((longlong)pqVar12 + 1);
        pdVar7 = (dword *)((longlong)pdVar7 + 1);
      } while ((qword *)puVar10 != pqVar12);
    }
    goto LAB_0008407b;
  case 9:
    pdVar7 = (dword *)*param_2;
    uVar15 = param_2[1];
    if (uVar15 == 0) {
      uVar5 = 0x13;
    }
    else {
      uVar19 = 0;
      pqVar12 = (qword *)0x0;
      iVar8 = 0;
      do {
        bVar1 = *(byte *)((longlong)pdVar7 + uVar19);
        if (iVar8 == 0x3f && 1 < bVar1) {
          pdVar7 = (dword *)((longlong)pdVar7 + uVar19 + 1);
          *param_2 = (longlong)pdVar7;
          param_2[1] = ~uVar19 + uVar15;
          uVar5 = 6;
          goto LAB_00083ffd;
        }
        pqVar12 = (qword *)((ulonglong)pqVar12 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar8 & 0x3f));
        if (-1 < (char)bVar1) {
          pdVar6 = (dword *)((longlong)pdVar7 + uVar19 + 1);
          *param_2 = (longlong)pdVar6;
          puVar10 = (uint *)(~uVar19 + uVar15);
          param_2[1] = (longlong)puVar10;
          if (puVar10 < pqVar12) goto LAB_0008407b;
          lVar17 = ~uVar19 + (uVar15 - (longlong)pqVar12);
          pbVar16 = (byte *)((longlong)pdVar7 + (longlong)(uVar19 + (longlong)pqVar12)) + 1;
          goto LAB_00083b74;
        }
        iVar8 = iVar8 + 7;
        uVar19 = uVar19 + 1;
      } while (uVar15 != uVar19);
      *param_2 = (longlong)((longlong)pdVar7 + uVar15);
      param_2[1] = 0;
      uVar5 = 0x13;
      pdVar7 = (dword *)((longlong)pdVar7 + uVar15);
    }
LAB_00083ffd:
    *(undefined1 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 9) = 0;
    goto LAB_00084004;
  case 10:
    pqVar12 = (qword *)*param_2;
    if (param_2[1] == 0) goto LAB_00083b9f;
    puVar10 = (uint *)(param_2[1] + -1);
    pdVar6 = (dword *)((longlong)pqVar12 + 1);
    *param_2 = (longlong)pdVar6;
    param_2[1] = (longlong)puVar10;
    pqVar12 = (qword *)(ulonglong)(byte)*pqVar12;
    lVar17 = (longlong)puVar10 - (longlong)pqVar12;
    if (pqVar12 <= puVar10) goto LAB_00083b70;
    goto LAB_0008407b;
  case 0xb:
    pdVar7 = (dword *)*param_2;
    if (param_2[1] != 0) {
      pqVar12 = (qword *)((longlong)pdVar7 + 1);
      *param_2 = (longlong)pqVar12;
      param_2[1] = param_2[1] + -1;
      pdVar6 = (dword *)(ulonglong)(byte)*pdVar7;
      uVar18 = 2;
LAB_00083cef:
      uVar9 = 0;
      goto LAB_00083cf1;
    }
    goto LAB_00083de3;
  case 0xc:
    pdVar7 = (dword *)*param_2;
    if (param_2[1] != 0) {
      pqVar12 = (qword *)((longlong)pdVar7 + 1);
      *param_2 = (longlong)pqVar12;
      param_2[1] = param_2[1] + -1;
      pdVar6 = (dword *)(ulonglong)((byte)*pdVar7 != 0);
      uVar18 = 9;
      goto LAB_00083cef;
    }
LAB_00083de3:
    *(undefined2 *)(param_1 + 1) = 0x13;
LAB_00084004:
    *(undefined2 *)((longlong)param_1 + 0xe) = 0;
    *(undefined4 *)((longlong)param_1 + 10) = 0;
    goto LAB_00084083;
  case 0xd:
    pqVar12 = (qword *)*param_2;
    lVar17 = param_2[1];
    iVar8 = 0;
    uVar15 = 0;
    pqVar2 = pqVar12;
    do {
      lVar17 = lVar17 + -1;
      if (lVar17 == -1) goto LAB_000839fd;
      *param_2 = (longlong)pqVar2 + 1;
      param_2[1] = lVar17;
      bVar1 = (byte)*pqVar2;
      uVar13 = (uint)bVar1;
      if (((iVar8 == 0x3f) && (uVar13 != 0x7f)) && (uVar13 != 0)) {
        uVar5 = 7;
        goto LAB_00083dfa;
      }
      uVar15 = uVar15 | (ulonglong)(uVar13 & 0x7f) << ((byte)iVar8 & 0x3f);
      iVar8 = iVar8 + 7;
      pqVar12 = (qword *)((longlong)pqVar12 + 1);
      pqVar2 = (qword *)((longlong)pqVar2 + 1);
    } while ((char)bVar1 < '\0');
    pqVar12 = (qword *)(-1L << ((byte)iVar8 & 0x3f));
    if (bVar1 < 0x40) {
      pqVar12 = (qword *)0x0;
    }
    if (0x3f < iVar8) {
      pqVar12 = (qword *)0x0;
    }
    pdVar6 = (dword *)(uVar15 | (ulonglong)pqVar12);
    uVar9 = (uint)pdVar6 >> 8;
    uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
    uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
    uVar18 = 6;
    goto LAB_0008403c;
  case 0xe:
    if (cVar11 == '\b') {
      pdVar7 = (dword *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = (longlong)(pdVar7 + 2);
        param_2[1] = param_2[1] - 8;
        pqVar12 = (qword *)(ulonglong)(ushort)*(qword *)(pdVar7 + 1);
        pdVar6 = (dword *)(((ulonglong)*pdVar7 << 8 |
                           (ulonglong)(uint3)*(qword *)(pdVar7 + 1) << 0x28) >> 8 |
                          (ulonglong)*(byte *)((longlong)pdVar7 + 7) << 0x38);
        goto LAB_00083e63;
      }
    }
    else {
      pdVar7 = (dword *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        pqVar12 = (qword *)(pdVar7 + 1);
        *param_2 = (longlong)pqVar12;
        param_2[1] = param_2[1] - 4;
        pdVar6 = (dword *)(ulonglong)*pdVar7;
LAB_00083e63:
        uVar9 = (uint)pdVar6 >> 8;
        uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
        uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
        uVar18 = 0x1a;
        goto LAB_0008403c;
      }
    }
    break;
  case 0xf:
    pqVar2 = (qword *)*param_2;
    lVar17 = param_2[1];
    pqVar12 = pqVar2;
    if (lVar17 != 0) {
      pqVar12 = (qword *)((longlong)pqVar2 + lVar17);
      lVar17 = 1 - lVar17;
      pdVar6 = (dword *)0x0;
      iVar8 = 0;
      do {
        pqVar14 = (qword *)((longlong)pqVar2 + 1);
        bVar1 = (byte)*pqVar2;
        if ((iVar8 == 0x3f) && (1 < bVar1)) goto LAB_00083dee;
        pdVar6 = (dword *)((ulonglong)pdVar6 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar8 & 0x3f));
        if (-1 < (char)bVar1) {
          *param_2 = (longlong)pqVar14;
          param_2[1] = -lVar17;
          uVar9 = (uint)pdVar6 >> 8;
          uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
          uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
          uVar18 = 7;
          goto LAB_0008403c;
        }
        iVar8 = iVar8 + 7;
        lVar17 = lVar17 + 1;
        pqVar2 = pqVar14;
      } while (lVar17 != 1);
      goto LAB_000839ed;
    }
    goto LAB_000839fd;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
switchD_00083731_caseD_10:
    *(undefined1 *)(param_1 + 1) = 0xc;
    *(short *)((longlong)param_1 + 10) = param_4;
    *param_1 = 0xffffffffffffffff;
    return;
  case 0x17:
    if (cVar11 == '\b') {
      pdVar7 = (dword *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = (longlong)(pdVar7 + 2);
        param_2[1] = param_2[1] - 8;
        pqVar12 = (qword *)(ulonglong)(ushort)*(qword *)(pdVar7 + 1);
        pdVar6 = (dword *)(((ulonglong)*pdVar7 << 8 |
                           (ulonglong)(uint3)*(qword *)(pdVar7 + 1) << 0x28) >> 8 |
                          (ulonglong)*(byte *)((longlong)pdVar7 + 7) << 0x38);
        goto LAB_00083f01;
      }
    }
    else {
      pdVar7 = (dword *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        pqVar12 = (qword *)(pdVar7 + 1);
        *param_2 = (longlong)pqVar12;
        param_2[1] = param_2[1] - 4;
        pdVar6 = (dword *)(ulonglong)*pdVar7;
LAB_00083f01:
        uVar9 = (uint)pdVar6 >> 8;
        uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
        uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
        uVar18 = 10;
        goto LAB_0008403c;
      }
    }
    break;
  case 0x1a:
    goto switchD_00083731_caseD_1a;
  case 0x1d:
switchD_00083731_caseD_1d:
    if (cVar11 == '\b') {
      pdVar7 = (dword *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = (longlong)(pdVar7 + 2);
        param_2[1] = param_2[1] - 8;
        pqVar12 = (qword *)(ulonglong)(ushort)*(qword *)(pdVar7 + 1);
        pdVar6 = (dword *)(((ulonglong)*pdVar7 << 8 |
                           (ulonglong)(uint3)*(qword *)(pdVar7 + 1) << 0x28) >> 8 |
                          (ulonglong)*(byte *)((longlong)pdVar7 + 7) << 0x38);
        goto LAB_00083dbf;
      }
    }
    else {
      pdVar7 = (dword *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        pqVar12 = (qword *)(pdVar7 + 1);
        *param_2 = (longlong)pqVar12;
        param_2[1] = param_2[1] - 4;
        pdVar6 = (dword *)(ulonglong)*pdVar7;
LAB_00083dbf:
        uVar9 = (uint)pdVar6 >> 8;
        uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
        uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
        uVar18 = 0x1b;
LAB_0008403c:
        *param_1 = uVar18;
        param_1[1] = ((uint)pdVar6 & 0xff | (uVar9 & 0xff) << 8 | uVar13 << 0x10) | uVar15;
        param_1[2] = pqVar12;
        return;
      }
    }
    break;
  case 0x1e:
    pdVar6 = (dword *)*param_2;
    if (0xf < (ulonglong)param_2[1]) {
      *param_2 = (longlong)(pdVar6 + 4);
      param_2[1] = param_2[1] - 0x10;
      uVar9 = (uint)pdVar6 >> 8;
      uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
      uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
      uVar18 = 1;
      pqVar12 = (qword *)&Elf64_Ehdr_00000000.e_type;
      goto LAB_0008403c;
    }
LAB_0008407b:
    param_1[1] = 0x13;
    pdVar7 = pdVar6;
    goto LAB_00084083;
  case 0x1f:
    if (cVar11 == '\b') {
      pdVar7 = (dword *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = (longlong)(pdVar7 + 2);
        param_2[1] = param_2[1] - 8;
        pqVar12 = (qword *)(ulonglong)(ushort)*(qword *)(pdVar7 + 1);
        pdVar6 = (dword *)(((ulonglong)*pdVar7 << 8 |
                           (ulonglong)(uint3)*(qword *)(pdVar7 + 1) << 0x28) >> 8 |
                          (ulonglong)*(byte *)((longlong)pdVar7 + 7) << 0x38);
        goto LAB_00083ebf;
      }
    }
    else {
      pdVar7 = (dword *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        pqVar12 = (qword *)(pdVar7 + 1);
        *param_2 = (longlong)pqVar12;
        param_2[1] = param_2[1] - 4;
        pdVar6 = (dword *)(ulonglong)*pdVar7;
LAB_00083ebf:
        uVar9 = (uint)pdVar6 >> 8;
        uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
        uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
        uVar18 = 0x1e;
        goto LAB_0008403c;
      }
    }
    break;
  case 0x25:
    pdVar7 = (dword *)*param_2;
    if (param_2[1] != 0) {
      pqVar12 = (qword *)((longlong)pdVar7 + 1);
      *param_2 = (longlong)pqVar12;
      param_2[1] = param_2[1] + -1;
      pdVar6 = (dword *)(ulonglong)(byte)*pdVar7;
      uVar18 = 0x1d;
      goto LAB_00083cef;
    }
    break;
  case 0x26:
    pdVar7 = (dword *)*param_2;
    if (1 < (ulonglong)param_2[1]) {
      pqVar12 = (qword *)((longlong)pdVar7 + 2);
      *param_2 = (longlong)pqVar12;
      param_2[1] = param_2[1] - 2;
      pdVar6 = (dword *)(ulonglong)(ushort)*pdVar7;
      uVar9 = (uint)(ushort)((ushort)*pdVar7 >> 8);
      uVar18 = 0x1d;
      goto LAB_00083cf1;
    }
    break;
  case 0x27:
    puVar3 = (uint3 *)*param_2;
    if ((ulonglong)param_2[1] < 3) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined1 *)((longlong)param_1 + 0xf) = 0;
      *(undefined2 *)((longlong)param_1 + 0xd) = 0;
      *(undefined4 *)((longlong)param_1 + 9) = 0;
      param_1[2] = puVar3;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    pqVar12 = (qword *)((longlong)puVar3 + 3);
    *param_2 = (longlong)pqVar12;
    param_2[1] = param_2[1] - 3;
    pdVar6 = (dword *)(ulonglong)(ushort)*puVar3;
    uVar13 = (uint)*(byte *)((longlong)puVar3 + 2);
    uVar9 = (uint)(*puVar3 >> 8);
LAB_000838a4:
    uVar18 = 0x1d;
    uVar15 = 0;
    goto LAB_0008403c;
  case 0x28:
    pdVar7 = (dword *)*param_2;
    if (3 < (ulonglong)param_2[1]) {
      pqVar12 = (qword *)(pdVar7 + 1);
      *param_2 = (longlong)pqVar12;
      param_2[1] = param_2[1] - 4;
      uVar13 = *pdVar7;
      pdVar6 = (dword *)(ulonglong)uVar13;
      uVar9 = uVar13 >> 8;
      uVar13 = uVar13 >> 0x10;
      goto LAB_000838a4;
    }
    break;
  default:
    if (param_4 != 0x1f02) {
      if (param_4 != 0x1f21) goto switchD_00083731_caseD_10;
      goto switchD_00083731_caseD_1d;
    }
    goto switchD_00083731_caseD_1a;
  }
  *(undefined1 *)(param_1 + 1) = 0x13;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 9) = 0;
LAB_00084083:
  param_1[2] = pdVar7;
  *param_1 = 0xffffffffffffffff;
  return;
LAB_00083dee:
  *param_2 = (longlong)pqVar14;
  param_2[1] = -lVar17;
  uVar5 = 6;
  goto LAB_00083dfa;
switchD_00083731_caseD_1a:
  pqVar2 = (qword *)*param_2;
  lVar17 = param_2[1];
  pqVar12 = pqVar2;
  if (lVar17 != 0) {
    pqVar12 = (qword *)((longlong)pqVar2 + lVar17);
    lVar17 = 1 - lVar17;
    pdVar6 = (dword *)0x0;
    iVar8 = 0;
    do {
      pqVar14 = (qword *)((longlong)pqVar2 + 1);
      bVar1 = (byte)*pqVar2;
      if ((iVar8 == 0x3f) && (1 < bVar1)) goto LAB_00083dee;
      pdVar6 = (dword *)((ulonglong)pdVar6 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar8 & 0x3f));
      if (-1 < (char)bVar1) {
        *param_2 = (longlong)pqVar14;
        param_2[1] = -lVar17;
        uVar9 = (uint)pdVar6 >> 8;
        uVar13 = (uint)((ulonglong)pdVar6 >> 0x10);
        uVar15 = (ulonglong)pdVar6 & 0xffffffff00000000;
        uVar18 = 0x1d;
        goto LAB_0008403c;
      }
      iVar8 = iVar8 + 7;
      lVar17 = lVar17 + 1;
      pqVar2 = pqVar14;
    } while (lVar17 != 1);
LAB_000839ed:
    *param_2 = (longlong)pqVar12;
    param_2[1] = 0;
  }
LAB_000839fd:
  uVar5 = 0x13;
LAB_00083dfa:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0;
LAB_00083e0e:
  param_1[2] = pqVar12;
  *param_1 = 0xffffffffffffffff;
  return;
}


