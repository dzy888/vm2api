// 0074a690 next

/* <gimli[a7f20a324fd82d99]::read::unit::DebugInfoUnitHeadersIter<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::next
    */

void __rustcall
<gimli[a7f20a324fd82d99]::read::unit::DebugInfoUnitHeadersIter<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::next(undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  uint *puVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar6 = param_2[1];
  if (uVar6 == 0) {
    *param_1 = 2;
    return;
  }
  puVar18 = (uint *)*param_2;
  if (uVar6 < 4) {
    uVar14 = 0x13;
    uVar16 = 0;
    goto LAB_0074a7d4;
  }
  lVar7 = param_2[2];
  uVar14 = uVar6 - 4;
  puVar17 = puVar18 + 1;
  uVar5 = *puVar18;
  uVar12 = (ulonglong)uVar5;
  if (0xffffffe < uVar5 >> 4) {
    if (uVar5 != 0xffffffff) {
      uVar14 = 0x10;
      uVar16 = 0;
      puVar18 = puVar17;
      goto LAB_0074a7d4;
    }
    if (7 < uVar14) {
      puVar17 = puVar18 + 3;
      uVar12 = ((ulonglong)puVar18[1] << 8 | (ulonglong)(uint3)puVar18[2] << 0x28) >> 8 |
               (ulonglong)*(byte *)((longlong)puVar18 + 0xb) << 0x38;
      uVar13 = 8;
      lVar10 = (uVar6 - 0xc) - uVar12;
      if (uVar12 <= uVar6 - 0xc) goto LAB_0074a70a;
    }
    goto LAB_0074a7cb;
  }
  uVar13 = 4;
  lVar10 = uVar14 - uVar12;
  if (uVar14 < uVar12) goto LAB_0074a7cb;
LAB_0074a70a:
  *param_2 = (longlong)((longlong)puVar17 + uVar12);
  param_2[1] = lVar10;
  if (uVar12 < 2) goto LAB_0074a7cb;
  uVar4 = (ushort)*puVar17;
  if ((ushort)(uVar4 - 2) < 3) {
    if (uVar5 < 0xfffffff0) {
      if (3 < uVar12 - 2) {
        lVar19 = uVar12 - 6;
        uVar20 = (ulonglong)*(uint *)((longlong)puVar17 + 2);
        puVar9 = (uint *)((longlong)puVar17 + 6);
        goto LAB_0074a842;
      }
    }
    else if (7 < uVar12 - 2) {
      lVar19 = uVar12 - 10;
      puVar9 = (uint *)((longlong)puVar17 + 10);
      uVar20 = ((ulonglong)*(uint *)((longlong)puVar17 + 2) << 8 |
               (ulonglong)*(uint3 *)((longlong)puVar17 + 6) << 0x28) >> 8 |
               (ulonglong)*(byte *)((longlong)puVar17 + 9) << 0x38;
LAB_0074a842:
      if (lVar19 == 0) {
        uVar14 = 0x13;
        uVar16 = 0;
        puVar18 = puVar9;
      }
      else {
        bVar11 = (byte)*puVar9;
        uVar16 = (uint)bVar11;
        bVar8 = (byte)(bVar11 - 1);
        puVar18 = (uint *)(ulonglong)CONCAT31((int3)(bVar11 - 1 >> 8),bVar8 < (bVar11 ^ bVar8));
        uVar14 = 0x19;
        if (!((bVar11 ^ bVar8) <= bVar8 || (bVar11 & 0xf) == 0)) {
          local_40 = lVar19 - 1;
          puVar17 = (uint *)((longlong)puVar9 + 1);
          uVar15 = 0;
          puVar18 = puVar17;
          goto LAB_0074a899;
        }
      }
      goto LAB_0074a7d4;
    }
LAB_0074a8e0:
    uVar14 = 0x13;
    uVar16 = 0;
    puVar18 = (uint *)((longlong)puVar17 + 2);
    goto LAB_0074a7d4;
  }
  if (uVar4 != 5) {
    puVar17 = (uint *)(ulonglong)uVar4;
    uVar14 = 0x11;
    goto LAB_0074a7d1;
  }
  if (uVar12 == 2) goto LAB_0074a8e0;
  if (uVar12 == 3) {
    puVar17 = (uint *)((longlong)puVar17 + 3);
    goto LAB_0074a7cb;
  }
  bVar11 = *(byte *)((longlong)puVar17 + 3);
  uVar16 = (uint)bVar11;
  if ((bVar11 & 0xf) == 0 || (byte)(bVar11 ^ bVar11 - 1) <= (byte)(bVar11 - 1)) {
    uVar14 = 0x19;
    puVar18 = puVar17;
    goto LAB_0074a7d4;
  }
  puVar1 = (ushort *)((longlong)puVar17 + 2);
  if (uVar5 < 0xfffffff0) {
    if (uVar12 - 4 < 4) goto LAB_0074a9eb;
    local_40 = uVar12 - 8;
    uVar20 = (ulonglong)puVar17[1];
    puVar17 = puVar17 + 2;
  }
  else {
    if (uVar12 - 4 < 8) {
LAB_0074a9eb:
      puVar17 = puVar17 + 1;
      goto LAB_0074a7cb;
    }
    local_40 = uVar12 - 0xc;
    local_38 = (ulonglong)*(byte *)((longlong)puVar17 + 0xb);
    puVar18 = puVar17 + 2;
    puVar9 = puVar17 + 1;
    puVar17 = puVar17 + 3;
    uVar20 = ((ulonglong)*puVar9 << 8 | (ulonglong)(uint3)*puVar18 << 0x28) >> 8 | local_38 << 0x38;
  }
  uVar16 = *(byte *)puVar1 - 1;
  if (5 < uVar16) {
    uVar14 = 0x42;
    uVar16 = 0;
    puVar18 = puVar17;
    goto LAB_0074a7d4;
  }
  puVar18 = (uint *)((longlong)&switchD_0074a9db::switchdataD_001beeb8 +
                    (longlong)(int)(&switchD_0074a9db::switchdataD_001beeb8)[uVar16]);
  switch((uint)*(byte *)puVar1) {
  case 1:
    uVar15 = 0;
    goto LAB_0074a899;
  case 2:
    if (7 < local_40) {
      puVar18 = (uint *)(((ulonglong)*puVar17 << 8 | (ulonglong)(uint3)puVar17[1] << 0x28) >> 8 |
                        (ulonglong)*(byte *)((longlong)puVar17 + 7) << 0x38);
      if (uVar5 < 0xfffffff0) {
        if (3 < local_40 - 8) {
          local_40 = local_40 - 0xc;
          local_38 = (ulonglong)puVar17[2];
          puVar17 = puVar17 + 3;
          uVar15 = 1;
          goto LAB_0074a899;
        }
      }
      else if (7 < local_40 - 8) {
        local_40 = local_40 - 0x10;
        pbVar3 = (byte *)((longlong)puVar17 + 0xf);
        puVar9 = puVar17 + 3;
        puVar2 = puVar17 + 2;
        puVar17 = puVar17 + 4;
        local_38 = ((ulonglong)*puVar2 << 8 | (ulonglong)(uint3)*puVar9 << 0x28) >> 8 |
                   (ulonglong)*pbVar3 << 0x38;
        uVar15 = 1;
        goto LAB_0074a899;
      }
      goto LAB_0074ac87;
    }
    break;
  case 3:
    uVar15 = 2;
LAB_0074a899:
    param_2[2] = (uVar6 + lVar7) - lVar10;
    *param_1 = 0;
    param_1[1] = lVar7;
    param_1[2] = uVar15;
    param_1[3] = puVar18;
    param_1[4] = local_38;
    param_1[5] = puVar17;
    param_1[6] = local_40;
    param_1[7] = uVar12;
    param_1[8] = uVar20;
    *(byte *)(param_1 + 9) = bVar11;
    *(undefined1 *)((longlong)param_1 + 0x49) = uVar13;
    *(ushort *)((longlong)param_1 + 0x4a) = uVar4;
    return;
  case 4:
    if (7 < local_40) {
      local_40 = local_40 - 8;
      pbVar3 = (byte *)((longlong)puVar17 + 7);
      puVar18 = puVar17 + 1;
      uVar16 = *puVar17;
      puVar17 = puVar17 + 2;
      puVar18 = (uint *)(((ulonglong)uVar16 << 8 | (ulonglong)(uint3)*puVar18 << 0x28) >> 8 |
                        (ulonglong)*pbVar3 << 0x38);
      uVar15 = 3;
      goto LAB_0074a899;
    }
    break;
  case 5:
    if (7 < local_40) {
      local_40 = local_40 - 8;
      pbVar3 = (byte *)((longlong)puVar17 + 7);
      puVar18 = puVar17 + 1;
      uVar16 = *puVar17;
      puVar17 = puVar17 + 2;
      puVar18 = (uint *)(((ulonglong)uVar16 << 8 | (ulonglong)(uint3)*puVar18 << 0x28) >> 8 |
                        (ulonglong)*pbVar3 << 0x38);
      uVar15 = 4;
      goto LAB_0074a899;
    }
    break;
  case 6:
    if (7 < local_40) {
      puVar18 = (uint *)(((ulonglong)*puVar17 << 8 | (ulonglong)(uint3)puVar17[1] << 0x28) >> 8 |
                        (ulonglong)*(byte *)((longlong)puVar17 + 7) << 0x38);
      if (uVar5 < 0xfffffff0) {
        if (3 < local_40 - 8) {
          local_40 = local_40 - 0xc;
          local_38 = (ulonglong)puVar17[2];
          puVar17 = puVar17 + 3;
          goto LAB_0074ac77;
        }
      }
      else if (7 < local_40 - 8) {
        local_40 = local_40 - 0x10;
        pbVar3 = (byte *)((longlong)puVar17 + 0xf);
        puVar9 = puVar17 + 3;
        puVar2 = puVar17 + 2;
        puVar17 = puVar17 + 4;
        local_38 = ((ulonglong)*puVar2 << 8 | (ulonglong)(uint3)*puVar9 << 0x28) >> 8 |
                   (ulonglong)*pbVar3 << 0x38;
LAB_0074ac77:
        uVar15 = 5;
        goto LAB_0074a899;
      }
LAB_0074ac87:
      puVar17 = puVar17 + 2;
    }
  }
LAB_0074a7cb:
  uVar14 = 0x13;
LAB_0074a7d1:
  uVar16 = 0;
  puVar18 = puVar17;
LAB_0074a7d4:
  *param_2 = 1;
  param_2[1] = 0;
  param_1[1] = uVar16 << 8 | uVar14;
  param_1[2] = puVar18;
  *param_1 = 0xffffffffffffffff;
  return;
}


