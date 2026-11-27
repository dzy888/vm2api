// 00082e50 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* addr2line[f7adfda4b3430143]::function::name_entry::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
addr2line[f7adfda4b3430143]::function::name_entry::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (undefined8 *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
          ulonglong param_5,undefined8 param_6,longlong param_7)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  ushort local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  uint local_3c;
  undefined8 *local_38;
  
  uVar8 = *(ulonglong *)(param_4 + 0x30);
  bVar1 = *(byte *)(param_4 + 0x49);
  uVar7 = (ulonglong)(bVar1 == 8);
  uVar9 = (*(longlong *)(param_4 + 0x38) - uVar8) + uVar7 * 8 + 4;
  if (param_5 < uVar9 || uVar8 <= param_5 - uVar9) {
    param_1[1] = 0x3b;
    param_1[2] = param_4;
    goto LAB_00082f4a;
  }
  lVar5 = *(longlong *)(param_4 + 0x170);
  local_c0 = lVar5 + 0x10;
  uVar9 = *(longlong *)(param_4 + 0x28) + uVar8;
  local_d0 = (param_5 - (uVar7 * 8 + 4)) - *(longlong *)(param_4 + 0x38);
  uVar7 = 0;
  iVar6 = 0;
  do {
    bVar2 = *(byte *)(uVar9 + local_d0);
    if ((iVar6 == 0x3f) && (1 < bVar2)) {
      uVar4 = 6;
      goto LAB_00082f32;
    }
    uVar7 = uVar7 | (ulonglong)(bVar2 & 0x7f) << ((byte)iVar6 & 0x3f);
    if (-1 < (char)bVar2) {
      local_d8 = local_d0 + *(longlong *)(param_4 + 0x28) + uVar8 + 1;
      local_d0 = ~local_d0;
      if (uVar7 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x3a;
        goto LAB_00082f4a;
      }
      if (uVar7 - 1 < *(ulonglong *)(lVar5 + 0x20)) {
        lVar5 = (uVar7 - 1) * 0x70 + *(longlong *)(lVar5 + 0x18);
        goto LAB_0008301e;
      }
      lVar11 = *(longlong *)(lVar5 + 0x28);
      if (lVar11 == 0) goto LAB_000831da;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      goto LAB_00082fb1;
    }
    iVar6 = iVar6 + 7;
    local_d0 = local_d0 + 1;
  } while (local_d0 != 0);
  uVar4 = 0x13;
  goto LAB_00082f32;
LAB_00082fb1:
  uVar8 = (ulonglong)*(ushort *)(lVar11 + 0x532);
  uVar9 = 0xffffffffffffffff;
  lVar10 = 0;
  do {
    if (uVar8 * 0x70 + lVar10 == 0) goto LAB_00083003;
    uVar3 = *(ulonglong *)(lVar11 + 0x4e0 + uVar9 * 8);
    lVar10 = lVar10 + -0x70;
    uVar9 = uVar9 + 1;
  } while ((char)((uVar3 < uVar7) - (uVar7 < uVar3)) == '\x01');
  uVar8 = uVar9;
  if (uVar3 < uVar7 == uVar7 < uVar3) {
    lVar5 = (lVar11 - lVar10) + -0x70;
LAB_0008301e:
    local_b8 = (ulonglong)(*(char *)(lVar5 + 0x6a) == '\x01');
    local_c8 = param_4;
    local_90 = param_6;
    local_4c = param_2;
    local_48 = param_3;
    local_38 = param_1;
    lVar5 = (*(code *)PTR_deref_000c4060)();
    if (uVar7 == 0) goto LAB_00083220;
    lVar11 = uVar7 << 4;
    local_68 = *(undefined8 *)(param_4 + 0x1a0);
    local_60 = -1;
    local_58 = 0;
    local_3c = (uint)bVar1;
    do {
      gimli[a7f20a324fd82d99]::read::unit::parse_attribute::
      <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                (local_f8,&local_d8,*(undefined4 *)(local_c8 + 0x48),lVar5);
      if (local_f8[0] == -1) {
        local_38[1] = local_f0;
        local_38[2] = uStack_e8;
        *local_38 = 1;
        return;
      }
      if (local_e0 < 0x47) {
        if (local_e0 == 3) {
          <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::value(&local_b0,local_f8);
          <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::attr_string(local_80,local_48,local_3c,local_68,&local_b0);
          if (local_80[0] == '\0') {
            local_88 = uStack_70;
            local_58 = local_78;
          }
        }
        else if (local_e0 == 0x31) goto LAB_0008309e;
      }
      else if (local_e0 == 0x47) {
LAB_0008309e:
        <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
        ::value(&local_b0,local_f8);
        local_60 = local_b0;
        local_98 = local_a8;
      }
      else if ((local_e0 == 0x2007) || (local_e0 == 0x6e)) {
        <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
        ::value(&local_b0,local_f8);
        <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
        ::attr_string(local_80,local_48,local_3c,local_68,&local_b0);
        if (local_80[0] == '\0') {
          local_38[1] = local_78;
          local_38[2] = uStack_70;
          *local_38 = 0;
          return;
        }
      }
      lVar5 = lVar5 + 0x10;
      lVar11 = lVar11 + -0x10;
      if (lVar11 == 0) {
        if (local_58 != 0) {
          local_38[1] = local_58;
          local_38[2] = local_88;
          *local_38 = 0;
          return;
        }
        if (local_60 != -1) {
          name_attr::
          <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                    (local_38,local_60,local_98,(undefined1)local_4c,local_48,param_4,local_90,
                     param_7 + -1);
          return;
        }
LAB_00083220:
        *local_38 = 0;
        local_38[1] = 0;
        return;
      }
    } while( true );
  }
LAB_00083003:
  bVar12 = lVar5 == 0;
  lVar5 = lVar5 + -1;
  if (bVar12) goto LAB_000831da;
  lVar11 = *(longlong *)(lVar11 + 0x538 + uVar8 * 8);
  goto LAB_00082fb1;
LAB_000831da:
  uVar4 = 0x12;
  uVar9 = uVar7;
LAB_00082f32:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  param_1[2] = uVar9;
LAB_00082f4a:
  *param_1 = 1;
  return;
}


