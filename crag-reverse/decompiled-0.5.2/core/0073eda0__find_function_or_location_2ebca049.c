// 0073eda0 find_function_or_location

/* <addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::find_function_or_location
    */

void __rustcall
<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::find_function_or_location
          (undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong **pplVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 uVar11;
  short sVar12;
  ulonglong uVar13;
  longlong *local_110;
  longlong *plStack_108;
  longlong *local_100;
  longlong *plStack_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *plStack_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong **local_68;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  cVar7 = (char)param_2[0x43];
  if (cVar7 == -2) {
    if ((int)param_2[10] == 1) {
      lVar2 = param_2[0x31];
      if (lVar2 != 0) {
        local_b0 = (longlong *)param_2[0x32];
      }
      plVar10 = (longlong *)param_2[0xb];
      plStack_f8 = (longlong *)(param_2[0x2e] + 0x10);
      local_110 = (longlong *)param_2[5];
      plStack_108 = (longlong *)param_2[6];
      local_f0 = (longlong *)0x0;
      local_b8 = 0;
      uVar11 = SUB81(&local_110,0);
      plVar9 = param_4;
      local_100 = param_2;
      local_90 = param_1;
      uVar8 = <gimli[a7f20a324fd82d99]::read::unit::EntriesCursor<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
              ::next_entry(&local_88);
      plVar4 = local_e8;
      plVar6 = local_f0;
      uVar13 = (ulonglong)local_88 & 0xff;
      if ((char)local_88 == -1) {
        local_a8 = plVar10;
        if (local_f0 == (longlong *)0x0) {
          local_48._0_1_ = 'E';
          local_40 = plVar9;
          local_48._1_1_ = uVar11;
          goto LAB_0073ee84;
        }
        sVar12 = 0x76;
        if (*(ushort *)((longlong)param_2 + 0x4a) < 5) {
          sVar12 = 0x2130;
        }
        local_a0 = param_3;
        local_98 = param_4;
        local_78 = (longlong *)(*(code *)PTR_deref_0079ab98)();
        local_88 = plVar6;
        plStack_80 = plVar4;
        local_68 = &local_f0;
        uStack_70 = uVar13;
        do {
          pplVar5 = local_68;
          plVar10 = local_78;
          uVar13 = uStack_70 - 1;
          if (uVar13 == 0xffffffffffffffff) {
            local_40 = plVar9;
            if (*(char *)(local_68 + 5) == '\0') {
              plVar10 = (longlong *)((longlong)local_88 - (longlong)*local_68);
              local_68[5] = (longlong *)0x1;
              pplVar5[6] = plVar10;
              local_40 = plVar10;
            }
            plVar10 = (longlong *)*local_98;
            plVar9 = (longlong *)0x0;
            param_3 = local_a0;
            param_1 = local_90;
            param_4 = local_98;
            goto LAB_0073f069;
          }
          gimli[a7f20a324fd82d99]::read::unit::parse_attribute::
          <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                    (&local_50,&local_88,(int)local_68[3][9],local_78);
          uVar8 = (ulonglong)local_48 >> 0x10;
          if (local_50 == (longlong *)0xffffffffffffffff) {
            param_3 = local_a0;
            param_4 = local_98;
            goto LAB_0073ee84;
          }
          local_78 = plVar10 + 2;
          plVar9 = (longlong *)((ulonglong)local_48 >> 0x30);
          uStack_70 = uVar13;
        } while (sVar12 != (short)uStack_38);
        local_88 = local_50;
        local_78 = local_40;
        uStack_70 = CONCAT44(uStack_34,uStack_38);
        <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
        ::value(&local_50,&local_88);
        param_1 = local_90;
        param_4 = local_98;
        param_3 = local_a0;
        uVar8 = (ulonglong)local_48 >> 0x10;
        if (local_50 == (longlong *)0xfffffffffffffffe) goto LAB_0073ee84;
        local_88 = local_50;
        plStack_80 = local_48;
        local_78 = local_40;
        plVar10 = (longlong *)*local_98;
        if (local_50 == (longlong *)0xffffffffffffffff) {
          plVar9 = (longlong *)0x0;
LAB_0073f069:
          LOCK();
          lVar1 = *plVar10;
          *plVar10 = *plVar10 + 1;
          UNLOCK();
          if (*plVar10 == 0 || SCARRY8(lVar1,1) != *plVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          plStack_108 = local_a8;
          plStack_f8 = local_b0;
          local_110 = plVar10;
          local_100 = (longlong *)lVar2;
          local_f0 = plVar9;
          local_e8 = local_40;
          local_e0 = param_2;
          plStack_d8 = param_4;
          local_d0 = param_2;
          local_c8 = param_2;
          local_48 = param_4;
          plVar6 = (longlong *)param_3;
          if (plVar10 != (longlong *)0x0) {
            param_1[2] = lVar2;
            param_1[3] = local_b0;
            *param_1 = plVar10;
            param_1[1] = local_a8;
            param_1[4] = plVar9;
            param_1[5] = local_40;
            param_1[6] = param_2;
            param_1[7] = param_4;
            param_1[8] = param_2;
            param_1[9] = param_2;
            param_1[10] = param_2;
            param_1[0xb] = param_4;
            param_1[0xc] = param_3;
            return;
          }
          goto LAB_0073f21b;
        }
        <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
        ::attr_string(&local_110,plVar10 + 2,*(undefined1 *)((longlong)param_2 + 0x49),param_2[0x34]
                      ,&local_88);
        plVar9 = plStack_108;
        local_40 = local_100;
        if ((int)local_110 != 1) goto LAB_0073f069;
      }
      else {
        uVar8 = (ulonglong)local_88 >> 0x10;
        local_40 = plStack_80;
        local_48._0_1_ = (char)local_88;
        local_48._1_1_ = local_88._1_1_;
LAB_0073ee84:
        plVar9 = (longlong *)(uVar8 << 0x10 | (ulonglong)CONCAT11(local_48._1_1_,(char)local_48));
        param_1 = local_90;
      }
      cVar7 = (char)param_2[0x43];
      local_88 = plVar9;
      plStack_80 = local_40;
      if (cVar7 != -2) goto LAB_0073eeb1;
      <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>
      ::try_init::
      <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::_closure_4_>::_closure_0_,_>
                (param_2 + 0x43,&local_88);
      cVar7 = (char)param_2[0x43];
    }
    else {
      <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>
      ::try_init::
      <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::_closure_2_>::_closure_0_,_>
                (param_2 + 0x43);
      cVar7 = (char)param_2[0x43];
    }
    if (cVar7 == -1) goto LAB_0073f1c8;
LAB_0073eeb9:
    local_100 = (longlong *)param_2[0x43];
    uVar11 = 0xff;
    plStack_f8 = (longlong *)param_2[0x44];
  }
  else {
LAB_0073eeb1:
    if (cVar7 != -1) goto LAB_0073eeb9;
LAB_0073f1c8:
    plStack_f8 = (longlong *)param_2[0x44];
    if (plStack_f8 == (longlong *)0x0) {
      local_100 = (longlong *)(*param_4 + 0x10);
      uVar11 = 0;
      plStack_f8 = param_2;
    }
    else {
      local_100 = (longlong *)(plStack_f8[0x38] + 0x10);
      uVar11 = 2;
    }
  }
  plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,uVar11);
  local_110 = (longlong *)0x0;
  local_48 = param_4;
  plVar6 = (longlong *)param_3;
LAB_0073f21b:
  local_40 = plVar6;
  local_50 = param_2;
  find_function_or_location::_closure_0_(param_1 + 1,&local_50,&plStack_108);
  *param_1 = 0;
  return;
}


