// 0009daf0 next_entry

/* <gimli[a7f20a324fd82d99]::read::unit::EntriesCursor<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::next_entry
    */

void __rustcall
<gimli[a7f20a324fd82d99]::read::unit::EntriesCursor<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::next_entry(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  longlong lVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  int local_98 [2];
  undefined8 local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 *local_38;
  
  lVar17 = param_2[4];
  local_68 = param_2;
  local_38 = param_1;
  if (lVar17 == 0) {
    local_58 = param_2[1];
  }
  else if ((int)param_2[9] == 1) {
    uVar18 = param_2[10];
    local_58 = param_2[5] - uVar18;
    if ((ulonglong)param_2[5] < uVar18) {
      local_90 = 0x13;
      local_88 = lVar17;
LAB_0009dd35:
      *param_1 = local_90;
      param_1[1] = local_88;
      return;
    }
    *param_2 = lVar17 + uVar18;
    param_2[1] = local_58;
  }
  else {
    lVar4 = param_2[5];
    local_50 = (undefined4 *)(*(code *)PTR_deref_000c4060)();
    local_40 = param_2 + 4;
    local_60 = lVar17;
    local_58 = lVar4;
    if (param_3 != 0) {
      local_48 = param_3;
      do {
        lVar17 = local_48 + -1;
        puVar11 = local_50 + 4;
        local_78 = *local_50;
        uStack_74 = local_50[1];
        uStack_70 = local_50[2];
        uStack_6c = local_50[3];
        gimli[a7f20a324fd82d99]::read::unit::parse_attribute::
        <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                  (local_98,&local_60,*(undefined4 *)(local_40[3] + 0x48),&local_78);
        if (local_98[0] == -1) {
          param_1 = local_38;
          goto LAB_0009dd35;
        }
        local_50 = puVar11;
        local_48 = lVar17;
      } while (lVar17 != 0);
    }
    if ((char)local_40[5] == '\0') {
      local_40[5] = 1;
      local_40[6] = local_60 - *local_40;
    }
    *local_68 = local_60;
    local_68[1] = local_58;
  }
  if (local_58 == 0) {
    local_68[4] = 0;
    local_68[0xb] = 0;
    *(undefined2 *)local_38 = 0xff;
  }
  else {
    pbVar3 = (byte *)*local_68;
    lVar17 = local_68[2];
    cVar1 = *(char *)(lVar17 + 0x49);
    lVar4 = *(longlong *)(lVar17 + 0x38);
    lVar5 = *(longlong *)(lVar17 + 0x30);
    lVar6 = *(longlong *)(lVar17 + 0x28);
    lVar14 = local_68[3];
    lVar12 = 1 - local_58;
    pbVar13 = (byte *)0x0;
    iVar8 = 0;
    pbVar7 = pbVar3;
    do {
      pbVar10 = pbVar7 + 1;
      bVar2 = *pbVar7;
      if ((iVar8 == 0x3f) && (1 < bVar2)) {
        uVar9 = 6;
        goto LAB_0009dca8;
      }
      pbVar13 = (byte *)((ulonglong)pbVar13 | (ulonglong)(bVar2 & 0x7f) << ((byte)iVar8 & 0x3f));
      if (-1 < (char)bVar2) {
        *local_68 = (longlong)pbVar10;
        local_68[1] = -lVar12;
        if (pbVar13 == (byte *)0x0) {
          local_68[0xb] = -1;
          local_68[4] = 0;
          goto LAB_0009de09;
        }
        if (pbVar13 + -1 < *(byte **)(lVar14 + 0x10)) {
          lVar14 = (longlong)(pbVar13 + -1) * 0x70 + *(longlong *)(lVar14 + 8);
          goto LAB_0009dddf;
        }
        lVar15 = *(longlong *)(lVar14 + 0x18);
        uVar9 = 0x12;
        if (lVar15 == 0) goto LAB_0009dca8;
        lVar14 = *(longlong *)(lVar14 + 0x20);
        goto LAB_0009dd6c;
      }
      iVar8 = iVar8 + 7;
      lVar12 = lVar12 + 1;
      pbVar7 = pbVar10;
    } while (lVar12 != 1);
    uVar9 = 0x13;
    pbVar13 = pbVar3 + local_58;
LAB_0009dca8:
    *local_68 = 1;
    local_68[1] = 0;
    local_68[0xb] = 0;
    local_68[4] = 0;
    *local_38 = uVar9;
    local_38[1] = pbVar13;
  }
  return;
LAB_0009dd6c:
  uVar18 = (ulonglong)*(ushort *)(lVar15 + 0x532);
  uVar19 = 0xffffffffffffffff;
  lVar16 = 0;
  do {
    if (uVar18 * 0x70 + lVar16 == 0) goto LAB_0009ddc4;
    pbVar7 = *(byte **)(lVar15 + 0x4e0 + uVar19 * 8);
    lVar16 = lVar16 + -0x70;
    uVar19 = uVar19 + 1;
  } while ((char)((pbVar7 < pbVar13) - (pbVar13 < pbVar7)) == '\x01');
  uVar18 = uVar19;
  if (pbVar7 < pbVar13 == pbVar13 < pbVar7) {
    lVar14 = (lVar15 - lVar16) + -0x70;
LAB_0009dddf:
    local_68[0xb] = (ulonglong)(*(char *)(lVar14 + 0x6a) == '\x01');
    local_68[4] = (longlong)pbVar10;
    local_68[5] = -lVar12;
    local_68[6] = lVar14;
    local_68[7] = lVar17;
    local_68[8] = (longlong)
                  (pbVar3 + (((lVar4 - lVar5) + (ulonglong)(cVar1 == '\b') * 8) - lVar6) + 4);
    local_68[9] = 0;
LAB_0009de09:
    *(undefined2 *)local_38 = 0x1ff;
    return;
  }
LAB_0009ddc4:
  bVar20 = lVar14 == 0;
  lVar14 = lVar14 + -1;
  if (bVar20) goto LAB_0009dca8;
  lVar15 = *(longlong *)(lVar15 + 0x538 + uVar18 * 8);
  goto LAB_0009dd6c;
}


