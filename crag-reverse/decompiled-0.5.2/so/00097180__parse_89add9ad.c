// 00097180 parse

/* <gimli[a7f20a324fd82d99]::read::index::UnitIndex<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse
    */

void __rustcall
<gimli[a7f20a324fd82d99]::read::index::UnitIndex<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::parse(ulonglong *param_1,uint *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 uVar15;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  int local_48;
  byte local_40;
  uint local_38;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = (ulonglong)param_2;
    param_1[2] = 0;
    param_1[3] = (ulonglong)param_2;
    param_1[4] = 0;
    param_1[5] = (ulonglong)param_2;
    param_1[6] = 0;
    param_1[7] = (ulonglong)param_2;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
    return;
  }
  if (param_3 < 4) {
LAB_0009721c:
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)((longlong)param_1 + 9) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[2] = (ulonglong)param_2;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uVar13 = *param_2;
  uVar6 = 2;
  if ((uVar13 != 2) && (uVar6 = 5, (short)uVar13 != 5)) {
    *(undefined1 *)(param_1 + 1) = 0x11;
    param_1[2] = (ulonglong)(uVar13 & 0xffff);
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  uVar12 = param_3 & 0xfffffffffffffffc;
  if (uVar12 == 4) {
    param_2 = param_2 + 1;
    goto LAB_0009721c;
  }
  if (uVar12 == 8) {
    param_2 = param_2 + 2;
    goto LAB_0009721c;
  }
  if (uVar12 == 0xc) {
    param_2 = param_2 + 3;
    goto LAB_0009721c;
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar12 = (ulonglong)uVar5;
  if ((uVar12 != 0) && ((uVar5 <= uVar4 || ((uVar5 - 1 & uVar5) != 0)))) {
    *(undefined1 *)(param_1 + 1) = 0x4b;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  param_2 = param_2 + 4;
  uVar10 = (param_3 - 0x10) + uVar12 * -8;
  if (param_3 - 0x10 < uVar12 * 8) {
    param_1[1] = 0x13;
    param_1[2] = (ulonglong)param_2;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  puVar1 = param_2 + uVar12 * 2;
  uVar11 = uVar10 + uVar12 * -4;
  if (uVar10 < uVar12 * 4) {
    param_1[1] = 0x13;
    param_1[2] = (ulonglong)puVar1;
    goto LAB_000979e6;
  }
  if (8 < uVar3) {
    *(undefined1 *)(param_1 + 1) = 0x4a;
    goto LAB_000979e6;
  }
  puVar2 = puVar1 + uVar12;
  puVar14 = puVar2;
  if (uVar3 == 0) {
    uVar10 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_68 = 0;
LAB_00097537:
    lVar8 = (ulonglong)uVar4 * (ulonglong)uVar3;
    uVar9 = lVar8 * 4;
    if (uVar9 <= uVar11) {
      if (uVar9 <= uVar11 + lVar8 * -4) {
        *param_1 = local_68 & 0xff |
                   (ulonglong)((local_38 & 0xff) << 8) |
                   (ulonglong)local_40 << 0x10 |
                   (ulonglong)(uint)(local_48 << 0x18) |
                   (local_50 & 0xff) << 0x20 |
                   (local_58 & 0xff) << 0x28 | (local_60 & 0xff) << 0x30 | uVar10 << 0x38;
        param_1[1] = (ulonglong)param_2;
        param_1[2] = uVar12 * 8;
        param_1[3] = (ulonglong)puVar1;
        param_1[4] = uVar12 * 4;
        param_1[5] = (ulonglong)puVar14;
        param_1[6] = uVar9;
        param_1[7] = (ulonglong)(puVar14 + lVar8);
        param_1[8] = uVar9;
        *(uint *)(param_1 + 9) = uVar3;
        *(uint *)((longlong)param_1 + 0x4c) = uVar4;
        *(uint *)(param_1 + 10) = uVar5;
        *(undefined2 *)((longlong)param_1 + 0x54) = uVar6;
        return;
      }
      param_1[1] = 0x13;
      param_1[2] = (ulonglong)(puVar14 + lVar8);
      goto LAB_000979e6;
    }
    param_1[1] = 0x13;
  }
  else {
    if (uVar13 == 2) {
      if (3 < uVar11) {
        uVar13 = *puVar2;
        uVar15 = 0x4e;
        if (7 < uVar13 - 1) {
LAB_000976b6:
          *(undefined1 *)(param_1 + 1) = uVar15;
          *(uint *)((longlong)param_1 + 0xc) = uVar13;
          goto LAB_000979e6;
        }
        local_68 = 0x605080302000901 >> ((char)(uVar13 - 1) * '\b' & 0x3fU);
        if (uVar3 == 1) {
LAB_000975aa:
          uVar11 = uVar11 - 4;
          uVar10 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          puVar14 = puVar2 + 1;
          goto LAB_00097537;
        }
        puVar14 = puVar2 + 1;
        if (3 < uVar11 - 4) {
          uVar13 = puVar2[1];
          if (7 < uVar13 - 1) {
LAB_00097757:
            uVar15 = 0x4e;
            goto LAB_000976b6;
          }
          puVar14 = puVar1 + uVar12 + 2;
          local_38 = (uint)(0x605080302000901 >> ((char)(uVar13 - 1) * '\b' & 0x3fU));
          if (uVar3 == 2) {
LAB_00097717:
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            uVar10 = uVar11 - 8;
LAB_00097744:
            uVar11 = uVar10;
            uVar10 = 0;
            goto LAB_00097537;
          }
          if (3 < uVar11 - 8) {
            uVar13 = *puVar14;
            if (7 < uVar13 - 1) goto LAB_00097757;
            puVar14 = puVar1 + uVar12 + 3;
            local_40 = (byte)(0x605080302000901 >> ((char)(uVar13 - 1) * '\b' & 0x3fU));
            if (uVar3 == 3) {
LAB_000977b2:
              local_60 = 0;
              local_58 = 0;
              local_50 = 0;
              local_48 = 0;
              uVar10 = uVar11 - 0xc;
              goto LAB_00097744;
            }
            if (3 < uVar11 - 0xc) {
              uVar13 = *puVar14;
              if (7 < uVar13 - 1) goto LAB_00097757;
              puVar14 = puVar1 + uVar12 + 4;
              local_48 = (int)(0x605080302000901 >> ((char)(uVar13 - 1) * '\b' & 0x3fU));
              if (uVar3 == 4) {
LAB_0009782e:
                local_60 = 0;
                local_58 = 0;
                local_50 = 0;
                uVar10 = uVar11 - 0x10;
                goto LAB_00097744;
              }
              if (3 < uVar11 - 0x10) {
                uVar13 = *puVar14;
                if (7 < uVar13 - 1) goto LAB_00097757;
                puVar14 = puVar1 + uVar12 + 5;
                local_50 = 0x605080302000901 >> ((char)(uVar13 - 1) * '\b' & 0x3fU);
                if (uVar3 == 5) {
LAB_000978a1:
                  local_60 = 0;
                  local_58 = 0;
                  uVar10 = uVar11 - 0x14;
                  goto LAB_00097744;
                }
                if (3 < uVar11 - 0x14) {
                  uVar13 = *puVar14;
                  if (7 < uVar13 - 1) goto LAB_00097757;
                  puVar14 = puVar1 + uVar12 + 6;
                  local_58 = 0x605080302000901 >> ((char)(uVar13 - 1) * '\b' & 0x3fU);
                  if (uVar3 == 6) {
LAB_0009790b:
                    local_60 = 0;
                    uVar10 = uVar11 - 0x18;
                    goto LAB_00097744;
                  }
                  if (3 < uVar11 - 0x18) {
                    uVar13 = *puVar14;
                    if (7 < uVar13 - 1) goto LAB_00097757;
                    puVar14 = puVar1 + uVar12 + 7;
                    local_60 = 0x605080302000901 >> ((char)(uVar13 - 1) * '\b' & 0x3fU);
                    uVar10 = uVar11 - 0x1c;
                    if (uVar3 == 7) goto LAB_00097744;
                    if (3 < uVar11 - 0x1c) {
                      uVar13 = *puVar14;
                      uVar15 = 0x4e;
                      if (uVar13 - 1 < 8) {
                        bVar7 = (byte)(uVar13 - 1);
                        uVar10 = 0x605080302000901;
LAB_000979b2:
                        uVar11 = uVar11 - 0x20;
                        uVar10 = uVar10 >> (bVar7 * '\b' & 0x3f);
                        puVar14 = puVar1 + uVar12 + 8;
                        goto LAB_00097537;
                      }
                      goto LAB_000976b6;
                    }
                  }
                }
              }
            }
          }
LAB_000979ca:
        }
      }
    }
    else if (3 < uVar11) {
      uVar13 = *puVar2;
      bVar7 = (byte)(uVar13 - 1);
      if ((uVar13 - 1 < 8 & 0xfdU >> (bVar7 & 0x1f)) == 0) {
        uVar15 = 0x4d;
        goto LAB_000976b6;
      }
      puVar14 = puVar2 + 1;
      local_68 = 0x706080402000001 >> (bVar7 * '\b' & 0x3f);
      if (uVar3 == 1) goto LAB_000975aa;
      if (3 < uVar11 - 4) {
        uVar13 = *puVar14;
        bVar7 = (byte)(uVar13 - 1);
        if ((0xfdU >> (bVar7 & 0x1f) & uVar13 - 1 < 8) == 1) {
          puVar14 = puVar1 + uVar12 + 2;
          local_38 = (uint)(0x706080402000001 >> (bVar7 * '\b' & 0x3f));
          if (uVar3 == 2) goto LAB_00097717;
          if (3 < uVar11 - 8) {
            uVar13 = *puVar14;
            bVar7 = (byte)(uVar13 - 1);
            if ((0xfdU >> (bVar7 & 0x1f) & uVar13 - 1 < 8) != 1) goto LAB_000979bf;
            puVar14 = puVar1 + uVar12 + 3;
            local_40 = (byte)(0x706080402000001 >> (bVar7 * '\b' & 0x3f));
            if (uVar3 == 3) goto LAB_000977b2;
            if (3 < uVar11 - 0xc) {
              uVar13 = *puVar14;
              bVar7 = (byte)(uVar13 - 1);
              if ((0xfdU >> (bVar7 & 0x1f) & uVar13 - 1 < 8) != 1) goto LAB_000979bf;
              puVar14 = puVar1 + uVar12 + 4;
              local_48 = (int)(0x706080402000001 >> (bVar7 * '\b' & 0x3f));
              if (uVar3 == 4) goto LAB_0009782e;
              if (3 < uVar11 - 0x10) {
                uVar13 = *puVar14;
                bVar7 = (byte)(uVar13 - 1);
                if ((0xfdU >> (bVar7 & 0x1f) & uVar13 - 1 < 8) != 1) goto LAB_000979bf;
                puVar14 = puVar1 + uVar12 + 5;
                local_50 = 0x706080402000001 >> (bVar7 * '\b' & 0x3f);
                if (uVar3 == 5) goto LAB_000978a1;
                if (3 < uVar11 - 0x14) {
                  uVar13 = *puVar14;
                  bVar7 = (byte)(uVar13 - 1);
                  if ((0xfdU >> (bVar7 & 0x1f) & uVar13 - 1 < 8) != 1) goto LAB_000979bf;
                  puVar14 = puVar1 + uVar12 + 6;
                  local_58 = 0x706080402000001 >> (bVar7 * '\b' & 0x3f);
                  if (uVar3 == 6) goto LAB_0009790b;
                  if (3 < uVar11 - 0x18) {
                    uVar13 = *puVar14;
                    bVar7 = (byte)(uVar13 - 1);
                    if ((0xfdU >> (bVar7 & 0x1f) & uVar13 - 1 < 8) != 1) goto LAB_000979bf;
                    puVar14 = puVar1 + uVar12 + 7;
                    local_60 = 0x706080402000001 >> (bVar7 * '\b' & 0x3f);
                    uVar10 = uVar11 - 0x1c;
                    if (uVar3 == 7) goto LAB_00097744;
                    if (3 < uVar11 - 0x1c) {
                      uVar13 = *puVar14;
                      bVar7 = (byte)(uVar13 - 1);
                      uVar15 = 0x4d;
                      if ((0xfdU >> (bVar7 & 0x1f) & uVar13 - 1 < 8) == 1) {
                        uVar10 = 0x706080402000001;
                        goto LAB_000979b2;
                      }
                      goto LAB_000976b6;
                    }
                  }
                }
              }
            }
          }
          goto LAB_000979ca;
        }
LAB_000979bf:
        uVar15 = 0x4d;
        goto LAB_000976b6;
      }
    }
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    *(undefined2 *)((longlong)param_1 + 9) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  param_1[2] = (ulonglong)puVar14;
LAB_000979e6:
  *(undefined1 *)param_1 = 0xff;
  return;
}


