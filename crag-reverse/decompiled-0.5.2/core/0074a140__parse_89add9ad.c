// 0074a140 parse

/* <gimli[a7f20a324fd82d99]::read::aranges::ArangeHeader<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>>::parse */

void __rustcall
<gimli[a7f20a324fd82d99]::read::aranges::ArangeHeader<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
::parse(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *puVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  uint *puVar11;
  ulonglong uVar12;
  ushort *puVar13;
  longlong lVar14;
  byte bVar15;
  
  puVar7 = (uint *)*param_2;
  uVar12 = param_2[1];
  if (uVar12 < 4) {
    uVar4 = 0x13;
  }
  else {
    uVar5 = uVar12 - 4;
    puVar11 = puVar7 + 1;
    *param_2 = (longlong)puVar11;
    param_2[1] = uVar5;
    uVar2 = *puVar7;
    uVar8 = (ulonglong)uVar2;
    if (uVar2 >> 4 < 0xfffffff) {
      cVar9 = '\x04';
      lVar14 = uVar5 - uVar8;
      if (uVar5 < uVar8) {
LAB_0074a267:
        *param_1 = 0x13;
      }
      else {
LAB_0074a1a3:
        *param_2 = (longlong)puVar11 + uVar8;
        param_2[1] = lVar14;
        if (uVar8 < 2) goto LAB_0074a267;
        uVar1 = (ushort)*puVar11;
        if ((uVar1 & 0xfffe) != 2) {
          *(undefined1 *)param_1 = 0x11;
          param_1[1] = (ulonglong)uVar1;
          goto LAB_0074a272;
        }
        if (uVar2 < 0xfffffff0) {
          if (uVar8 - 2 < 4) goto LAB_0074a2e1;
          lVar14 = uVar8 - 6;
          uVar12 = (ulonglong)*(uint *)((longlong)puVar11 + 2);
          puVar13 = (ushort *)((longlong)puVar11 + 6);
LAB_0074a2aa:
          if (lVar14 == 0) {
            uVar3 = 0x13;
            bVar10 = 0;
LAB_0074a307:
            *(undefined1 *)param_1 = uVar3;
            *(byte *)((longlong)param_1 + 1) = bVar10;
LAB_0074a30d:
            *(undefined2 *)((longlong)param_1 + 6) = 0;
            *(undefined4 *)((longlong)param_1 + 2) = 0;
          }
          else {
            bVar10 = (byte)*puVar13;
            if ((byte)(bVar10 ^ bVar10 - 1) <= (byte)(bVar10 - 1) || (bVar10 & 0xf) == 0) {
              uVar3 = 0x19;
              goto LAB_0074a307;
            }
            if (lVar14 == 1) {
              puVar13 = (ushort *)((longlong)puVar13 + 1);
              *(undefined2 *)param_1 = 0x13;
              goto LAB_0074a30d;
            }
            if (*(byte *)((longlong)puVar13 + 1) != 0) {
              *(undefined1 *)param_1 = 0x44;
              goto LAB_0074a272;
            }
            if (((char)bVar10 < '\0') || (bVar15 = bVar10 * '\x02', bVar15 == 0)) {
              *(undefined1 *)param_1 = 0x19;
              *(byte *)((longlong)param_1 + 1) = bVar10;
              goto LAB_0074a272;
            }
            puVar13 = puVar13 + 1;
            bVar6 = (byte)((0xffffffef < uVar2) * '\b' + cVar9 + 8U) % bVar15;
            bVar15 = bVar15 - bVar6;
            if (bVar6 == 0) {
              bVar15 = 0;
            }
            uVar5 = (ulonglong)bVar15;
            if (uVar5 <= lVar14 - 2U) {
              *param_1 = (byte *)((longlong)puVar13 + uVar5);
              param_1[1] = (lVar14 - 2U) - uVar5;
              param_1[2] = param_3;
              param_1[3] = uVar8;
              param_1[4] = uVar12;
              *(byte *)(param_1 + 5) = bVar10;
              *(char *)((longlong)param_1 + 0x29) = cVar9;
              *(ushort *)((longlong)param_1 + 0x2a) = uVar1;
              return;
            }
            *(undefined1 *)param_1 = 0x13;
          }
          param_1[1] = puVar13;
          goto LAB_0074a272;
        }
        if (7 < uVar8 - 2) {
          lVar14 = uVar8 - 10;
          puVar13 = (ushort *)((longlong)puVar11 + 10);
          uVar12 = ((ulonglong)*(uint *)((longlong)puVar11 + 2) << 8 |
                   (ulonglong)*(uint3 *)((longlong)puVar11 + 6) << 0x28) >> 8 |
                   (ulonglong)*(byte *)((longlong)puVar11 + 9) << 0x38;
          goto LAB_0074a2aa;
        }
LAB_0074a2e1:
        puVar11 = (uint *)((longlong)puVar11 + 2);
        *(undefined1 *)param_1 = 0x13;
        *(undefined1 *)((longlong)param_1 + 7) = 0;
        *(undefined2 *)((longlong)param_1 + 5) = 0;
        *(undefined4 *)((longlong)param_1 + 1) = 0;
      }
      param_1[1] = puVar11;
      goto LAB_0074a272;
    }
    if (uVar2 == 0xffffffff) {
      if (7 < uVar5) {
        uVar12 = uVar12 - 0xc;
        puVar11 = puVar7 + 3;
        *param_2 = (longlong)puVar11;
        param_2[1] = uVar12;
        uVar8 = ((ulonglong)puVar7[1] << 8 | (ulonglong)(uint3)puVar7[2] << 0x28) >> 8 |
                (ulonglong)*(byte *)((longlong)puVar7 + 0xb) << 0x38;
        cVar9 = '\b';
        lVar14 = uVar12 - uVar8;
        if (uVar8 <= uVar12) goto LAB_0074a1a3;
        goto LAB_0074a267;
      }
      uVar4 = 0x13;
      puVar7 = puVar11;
    }
    else {
      uVar4 = 0x10;
    }
  }
  *param_1 = uVar4;
  param_1[1] = puVar7;
LAB_0074a272:
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  return;
}


