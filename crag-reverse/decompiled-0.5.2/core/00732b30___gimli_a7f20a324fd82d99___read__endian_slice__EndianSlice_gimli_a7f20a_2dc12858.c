// 00732b30 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* gimli[a7f20a324fd82d99]::read::line::parse_attribute::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
gimli[a7f20a324fd82d99]::read::line::parse_attribute::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,short param_4)

{
  byte bVar1;
  uint3 *puVar2;
  undefined1 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  
  cVar8 = (char)((uint)param_3 >> 8);
  switch(param_4) {
  case 3:
    puVar9 = (uint *)*param_2;
    if ((ulonglong)param_2[1] < 2) {
LAB_00732fbf:
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined1 *)((longlong)param_1 + 0xf) = 0;
      *(undefined2 *)((longlong)param_1 + 0xd) = 0;
      *(undefined4 *)((longlong)param_1 + 9) = 0;
      goto LAB_0073322e;
    }
    puVar7 = (uint *)(param_2[1] - 2);
    puVar4 = (uint *)((longlong)puVar9 + 2);
    *param_2 = puVar4;
    param_2[1] = puVar7;
    puVar9 = (uint *)(ulonglong)(ushort)*puVar9;
    lVar14 = (longlong)puVar7 - (longlong)puVar9;
    if (puVar9 <= puVar7) {
LAB_00732f90:
      pbVar13 = (byte *)((longlong)puVar4 + (longlong)puVar9);
LAB_00732f94:
      *param_2 = pbVar13;
      param_2[1] = lVar14;
      uVar6 = (uint)puVar4 >> 8;
      uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
      uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
      uVar15 = 1;
      goto LAB_0073345c;
    }
    goto LAB_0073349b;
  case 4:
    puVar9 = (uint *)*param_2;
    if ((ulonglong)param_2[1] < 4) goto LAB_00732fbf;
    puVar7 = (uint *)(param_2[1] - 4);
    puVar4 = puVar9 + 1;
    *param_2 = puVar4;
    param_2[1] = puVar7;
    puVar9 = (uint *)(ulonglong)*puVar9;
    lVar14 = (longlong)puVar7 - (longlong)puVar9;
    if (puVar9 <= puVar7) goto LAB_00732f90;
    goto LAB_0073349b;
  case 5:
    puVar4 = (uint *)*param_2;
    if (1 < (ulonglong)param_2[1]) {
      puVar9 = (uint *)((longlong)puVar4 + 2);
      *param_2 = puVar9;
      param_2[1] = param_2[1] - 2;
      uVar10 = *puVar4;
      puVar4 = (uint *)(ulonglong)(ushort)uVar10;
      uVar6 = (uint)(ushort)((ushort)uVar10 >> 8);
      uVar15 = 3;
LAB_00733111:
      uVar10 = 0;
      uVar12 = 0;
      goto LAB_0073345c;
    }
    goto LAB_0073349b;
  case 6:
    puVar7 = (uint *)*param_2;
    if (3 < (ulonglong)param_2[1]) {
      puVar9 = puVar7 + 1;
      *param_2 = puVar9;
      param_2[1] = param_2[1] - 4;
      uVar10 = *puVar7;
      puVar4 = (uint *)(ulonglong)uVar10;
      uVar6 = uVar10 >> 8;
      uVar10 = uVar10 >> 0x10;
      uVar15 = 4;
      uVar12 = 0;
      goto LAB_0073345c;
    }
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)((longlong)param_1 + 9) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    goto LAB_007334a3;
  case 7:
    puVar7 = (uint *)*param_2;
    if (7 < (ulonglong)param_2[1]) {
      *param_2 = puVar7 + 2;
      param_2[1] = param_2[1] - 8;
      puVar9 = (uint *)(ulonglong)(ushort)puVar7[1];
      uVar10 = *puVar7;
      puVar4 = (uint *)(ulonglong)uVar10;
      uVar6 = uVar10 >> 8;
      uVar10 = uVar10 >> 0x10;
      uVar12 = (ulonglong)(uint3)puVar7[1] << 0x20 |
               (ulonglong)*(byte *)((longlong)puVar7 + 7) << 0x38;
      uVar15 = 5;
      goto LAB_0073345c;
    }
    break;
  case 8:
    puVar4 = (uint *)*param_2;
    puVar7 = (uint *)param_2[1];
    if (puVar7 != (uint *)0x0) {
      puVar9 = (uint *)0x0;
      puVar11 = puVar4;
      do {
        if ((byte)*puVar11 == 0) {
          *param_2 = (uint *)((longlong)puVar11 + 1);
          param_2[1] = (byte *)(~(ulonglong)puVar9 + (longlong)puVar7);
          uVar6 = (uint)puVar4 >> 8;
          uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
          uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
          uVar15 = 0x1f;
          goto LAB_0073345c;
        }
        puVar9 = (uint *)((longlong)puVar9 + 1);
        puVar11 = (uint *)((longlong)puVar11 + 1);
      } while (puVar7 != puVar9);
    }
    goto LAB_0073349b;
  case 9:
    puVar7 = (uint *)*param_2;
    uVar12 = param_2[1];
    if (uVar12 == 0) {
      uVar3 = 0x13;
    }
    else {
      uVar16 = 0;
      puVar9 = (uint *)0x0;
      iVar5 = 0;
      do {
        bVar1 = *(byte *)((longlong)puVar7 + uVar16);
        if (iVar5 == 0x3f && 1 < bVar1) {
          puVar7 = (uint *)((longlong)puVar7 + uVar16 + 1);
          *param_2 = puVar7;
          param_2[1] = ~uVar16 + uVar12;
          uVar3 = 6;
          goto LAB_0073341d;
        }
        puVar9 = (uint *)((ulonglong)puVar9 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar5 & 0x3f));
        if (-1 < (char)bVar1) {
          puVar4 = (uint *)((longlong)puVar7 + uVar16 + 1);
          *param_2 = puVar4;
          puVar11 = (uint *)(~uVar16 + uVar12);
          param_2[1] = puVar11;
          if (puVar11 < puVar9) goto LAB_0073349b;
          lVar14 = ~uVar16 + (uVar12 - (longlong)puVar9);
          pbVar13 = (byte *)((longlong)puVar7 + (longlong)(uVar16 + (longlong)puVar9)) + 1;
          goto LAB_00732f94;
        }
        iVar5 = iVar5 + 7;
        uVar16 = uVar16 + 1;
      } while (uVar12 != uVar16);
      *param_2 = (uint *)((longlong)puVar7 + uVar12);
      param_2[1] = 0;
      uVar3 = 0x13;
      puVar7 = (uint *)((longlong)puVar7 + uVar12);
    }
LAB_0073341d:
    *(undefined1 *)(param_1 + 1) = uVar3;
    *(undefined1 *)((longlong)param_1 + 9) = 0;
    goto LAB_00733424;
  case 10:
    puVar9 = (uint *)*param_2;
    if (param_2[1] == 0) goto LAB_00732fbf;
    puVar7 = (uint *)(param_2[1] + -1);
    puVar4 = (uint *)((longlong)puVar9 + 1);
    *param_2 = puVar4;
    param_2[1] = puVar7;
    puVar9 = (uint *)(ulonglong)(byte)*puVar9;
    lVar14 = (longlong)puVar7 - (longlong)puVar9;
    if (puVar9 <= puVar7) goto LAB_00732f90;
    goto LAB_0073349b;
  case 0xb:
    puVar7 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar9 = (uint *)((longlong)puVar7 + 1);
      *param_2 = puVar9;
      param_2[1] = param_2[1] + -1;
      puVar4 = (uint *)(ulonglong)(byte)*puVar7;
      uVar15 = 2;
LAB_0073310f:
      uVar6 = 0;
      goto LAB_00733111;
    }
    goto LAB_00733203;
  case 0xc:
    puVar7 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar9 = (uint *)((longlong)puVar7 + 1);
      *param_2 = puVar9;
      param_2[1] = param_2[1] + -1;
      puVar4 = (uint *)(ulonglong)((byte)*puVar7 != 0);
      uVar15 = 9;
      goto LAB_0073310f;
    }
LAB_00733203:
    *(undefined2 *)(param_1 + 1) = 0x13;
LAB_00733424:
    *(undefined2 *)((longlong)param_1 + 0xe) = 0;
    *(undefined4 *)((longlong)param_1 + 10) = 0;
    goto LAB_007334a3;
  case 0xd:
    puVar9 = (uint *)*param_2;
    lVar14 = param_2[1];
    iVar5 = 0;
    uVar12 = 0;
    puVar7 = puVar9;
    do {
      lVar14 = lVar14 + -1;
      if (lVar14 == -1) goto LAB_00732e1d;
      *param_2 = (uint *)((longlong)puVar7 + 1);
      param_2[1] = lVar14;
      bVar1 = (byte)*puVar7;
      uVar10 = (uint)bVar1;
      if (((iVar5 == 0x3f) && (uVar10 != 0x7f)) && (uVar10 != 0)) {
        uVar3 = 7;
        goto LAB_0073321a;
      }
      uVar12 = uVar12 | (ulonglong)(uVar10 & 0x7f) << ((byte)iVar5 & 0x3f);
      iVar5 = iVar5 + 7;
      puVar9 = (uint *)((longlong)puVar9 + 1);
      puVar7 = (uint *)((longlong)puVar7 + 1);
    } while ((char)bVar1 < '\0');
    puVar9 = (uint *)(-1L << ((byte)iVar5 & 0x3f));
    if (bVar1 < 0x40) {
      puVar9 = (uint *)0x0;
    }
    if (0x3f < iVar5) {
      puVar9 = (uint *)0x0;
    }
    puVar4 = (uint *)(uVar12 | (ulonglong)puVar9);
    uVar6 = (uint)puVar4 >> 8;
    uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
    uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
    uVar15 = 6;
    goto LAB_0073345c;
  case 0xe:
    if (cVar8 == '\b') {
      puVar7 = (uint *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = puVar7 + 2;
        param_2[1] = param_2[1] - 8;
        puVar9 = (uint *)(ulonglong)(ushort)puVar7[1];
        puVar4 = (uint *)(((ulonglong)*puVar7 << 8 | (ulonglong)(uint3)puVar7[1] << 0x28) >> 8 |
                         (ulonglong)*(byte *)((longlong)puVar7 + 7) << 0x38);
        goto LAB_00733283;
      }
    }
    else {
      puVar7 = (uint *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        puVar9 = puVar7 + 1;
        *param_2 = puVar9;
        param_2[1] = param_2[1] - 4;
        puVar4 = (uint *)(ulonglong)*puVar7;
LAB_00733283:
        uVar6 = (uint)puVar4 >> 8;
        uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
        uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
        uVar15 = 0x1a;
        goto LAB_0073345c;
      }
    }
    break;
  case 0xf:
    puVar7 = (uint *)*param_2;
    lVar14 = param_2[1];
    puVar9 = puVar7;
    if (lVar14 != 0) {
      puVar9 = (uint *)((longlong)puVar7 + lVar14);
      lVar14 = 1 - lVar14;
      puVar4 = (uint *)0x0;
      iVar5 = 0;
      do {
        puVar11 = (uint *)((longlong)puVar7 + 1);
        bVar1 = (byte)*puVar7;
        if ((iVar5 == 0x3f) && (1 < bVar1)) goto LAB_0073320e;
        puVar4 = (uint *)((ulonglong)puVar4 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar5 & 0x3f));
        if (-1 < (char)bVar1) {
          *param_2 = puVar11;
          param_2[1] = -lVar14;
          uVar6 = (uint)puVar4 >> 8;
          uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
          uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
          uVar15 = 7;
          goto LAB_0073345c;
        }
        iVar5 = iVar5 + 7;
        lVar14 = lVar14 + 1;
        puVar7 = puVar11;
      } while (lVar14 != 1);
      goto LAB_00732e0d;
    }
    goto LAB_00732e1d;
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
switchD_00732b51_caseD_10:
    *(undefined1 *)(param_1 + 1) = 0xc;
    *(short *)((longlong)param_1 + 10) = param_4;
    *param_1 = 0xffffffffffffffff;
    return;
  case 0x17:
    if (cVar8 == '\b') {
      puVar7 = (uint *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = puVar7 + 2;
        param_2[1] = param_2[1] - 8;
        puVar9 = (uint *)(ulonglong)(ushort)puVar7[1];
        puVar4 = (uint *)(((ulonglong)*puVar7 << 8 | (ulonglong)(uint3)puVar7[1] << 0x28) >> 8 |
                         (ulonglong)*(byte *)((longlong)puVar7 + 7) << 0x38);
        goto LAB_00733321;
      }
    }
    else {
      puVar7 = (uint *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        puVar9 = puVar7 + 1;
        *param_2 = puVar9;
        param_2[1] = param_2[1] - 4;
        puVar4 = (uint *)(ulonglong)*puVar7;
LAB_00733321:
        uVar6 = (uint)puVar4 >> 8;
        uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
        uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
        uVar15 = 10;
        goto LAB_0073345c;
      }
    }
    break;
  case 0x1a:
    goto switchD_00732b51_caseD_1a;
  case 0x1d:
switchD_00732b51_caseD_1d:
    if (cVar8 == '\b') {
      puVar7 = (uint *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = puVar7 + 2;
        param_2[1] = param_2[1] - 8;
        puVar9 = (uint *)(ulonglong)(ushort)puVar7[1];
        puVar4 = (uint *)(((ulonglong)*puVar7 << 8 | (ulonglong)(uint3)puVar7[1] << 0x28) >> 8 |
                         (ulonglong)*(byte *)((longlong)puVar7 + 7) << 0x38);
        goto LAB_007331df;
      }
    }
    else {
      puVar7 = (uint *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        puVar9 = puVar7 + 1;
        *param_2 = puVar9;
        param_2[1] = param_2[1] - 4;
        puVar4 = (uint *)(ulonglong)*puVar7;
LAB_007331df:
        uVar6 = (uint)puVar4 >> 8;
        uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
        uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
        uVar15 = 0x1b;
LAB_0073345c:
        *param_1 = uVar15;
        param_1[1] = ((uint)puVar4 & 0xff | (uVar6 & 0xff) << 8 | uVar10 << 0x10) | uVar12;
        param_1[2] = puVar9;
        return;
      }
    }
    break;
  case 0x1e:
    puVar4 = (uint *)*param_2;
    if (0xf < (ulonglong)param_2[1]) {
      *param_2 = puVar4 + 4;
      param_2[1] = param_2[1] - 0x10;
      uVar6 = (uint)puVar4 >> 8;
      uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
      uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
      uVar15 = 1;
      puVar9 = (uint *)&DAT_00000010;
      goto LAB_0073345c;
    }
LAB_0073349b:
    param_1[1] = 0x13;
    puVar7 = puVar4;
    goto LAB_007334a3;
  case 0x1f:
    if (cVar8 == '\b') {
      puVar7 = (uint *)*param_2;
      if (7 < (ulonglong)param_2[1]) {
        *param_2 = puVar7 + 2;
        param_2[1] = param_2[1] - 8;
        puVar9 = (uint *)(ulonglong)(ushort)puVar7[1];
        puVar4 = (uint *)(((ulonglong)*puVar7 << 8 | (ulonglong)(uint3)puVar7[1] << 0x28) >> 8 |
                         (ulonglong)*(byte *)((longlong)puVar7 + 7) << 0x38);
        goto LAB_007332df;
      }
    }
    else {
      puVar7 = (uint *)*param_2;
      if (3 < (ulonglong)param_2[1]) {
        puVar9 = puVar7 + 1;
        *param_2 = puVar9;
        param_2[1] = param_2[1] - 4;
        puVar4 = (uint *)(ulonglong)*puVar7;
LAB_007332df:
        uVar6 = (uint)puVar4 >> 8;
        uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
        uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
        uVar15 = 0x1e;
        goto LAB_0073345c;
      }
    }
    break;
  case 0x25:
    puVar7 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar9 = (uint *)((longlong)puVar7 + 1);
      *param_2 = puVar9;
      param_2[1] = param_2[1] + -1;
      puVar4 = (uint *)(ulonglong)(byte)*puVar7;
      uVar15 = 0x1d;
      goto LAB_0073310f;
    }
    break;
  case 0x26:
    puVar7 = (uint *)*param_2;
    if (1 < (ulonglong)param_2[1]) {
      puVar9 = (uint *)((longlong)puVar7 + 2);
      *param_2 = puVar9;
      param_2[1] = param_2[1] - 2;
      puVar4 = (uint *)(ulonglong)(ushort)*puVar7;
      uVar6 = (uint)(ushort)((ushort)*puVar7 >> 8);
      uVar15 = 0x1d;
      goto LAB_00733111;
    }
    break;
  case 0x27:
    puVar2 = (uint3 *)*param_2;
    if ((ulonglong)param_2[1] < 3) {
      *(undefined1 *)(param_1 + 1) = 0x13;
      *(undefined1 *)((longlong)param_1 + 0xf) = 0;
      *(undefined2 *)((longlong)param_1 + 0xd) = 0;
      *(undefined4 *)((longlong)param_1 + 9) = 0;
      param_1[2] = puVar2;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    puVar9 = (uint *)((longlong)puVar2 + 3);
    *param_2 = puVar9;
    param_2[1] = param_2[1] - 3;
    puVar4 = (uint *)(ulonglong)(ushort)*puVar2;
    uVar10 = (uint)*(byte *)((longlong)puVar2 + 2);
    uVar6 = (uint)(*puVar2 >> 8);
LAB_00732cc4:
    uVar15 = 0x1d;
    uVar12 = 0;
    goto LAB_0073345c;
  case 0x28:
    puVar7 = (uint *)*param_2;
    if (3 < (ulonglong)param_2[1]) {
      puVar9 = puVar7 + 1;
      *param_2 = puVar9;
      param_2[1] = param_2[1] - 4;
      uVar10 = *puVar7;
      puVar4 = (uint *)(ulonglong)uVar10;
      uVar6 = uVar10 >> 8;
      uVar10 = uVar10 >> 0x10;
      goto LAB_00732cc4;
    }
    break;
  default:
    if (param_4 != 0x1f02) {
      if (param_4 != 0x1f21) goto switchD_00732b51_caseD_10;
      goto switchD_00732b51_caseD_1d;
    }
    goto switchD_00732b51_caseD_1a;
  }
  *(undefined1 *)(param_1 + 1) = 0x13;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 9) = 0;
LAB_007334a3:
  param_1[2] = puVar7;
  *param_1 = 0xffffffffffffffff;
  return;
LAB_0073320e:
  *param_2 = puVar11;
  param_2[1] = -lVar14;
  uVar3 = 6;
  goto LAB_0073321a;
switchD_00732b51_caseD_1a:
  puVar7 = (uint *)*param_2;
  lVar14 = param_2[1];
  puVar9 = puVar7;
  if (lVar14 != 0) {
    puVar9 = (uint *)((longlong)puVar7 + lVar14);
    lVar14 = 1 - lVar14;
    puVar4 = (uint *)0x0;
    iVar5 = 0;
    do {
      puVar11 = (uint *)((longlong)puVar7 + 1);
      bVar1 = (byte)*puVar7;
      if ((iVar5 == 0x3f) && (1 < bVar1)) goto LAB_0073320e;
      puVar4 = (uint *)((ulonglong)puVar4 | (ulonglong)(bVar1 & 0x7f) << ((byte)iVar5 & 0x3f));
      if (-1 < (char)bVar1) {
        *param_2 = puVar11;
        param_2[1] = -lVar14;
        uVar6 = (uint)puVar4 >> 8;
        uVar10 = (uint)((ulonglong)puVar4 >> 0x10);
        uVar12 = (ulonglong)puVar4 & 0xffffffff00000000;
        uVar15 = 0x1d;
        goto LAB_0073345c;
      }
      iVar5 = iVar5 + 7;
      lVar14 = lVar14 + 1;
      puVar7 = puVar11;
    } while (lVar14 != 1);
LAB_00732e0d:
    *param_2 = puVar9;
    param_2[1] = 0;
  }
LAB_00732e1d:
  uVar3 = 0x13;
LAB_0073321a:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0;
LAB_0073322e:
  param_1[2] = puVar9;
  *param_1 = 0xffffffffffffffff;
  return;
}


