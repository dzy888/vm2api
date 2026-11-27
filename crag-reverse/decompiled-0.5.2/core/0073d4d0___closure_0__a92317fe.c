// 0073d4d0 {closure#0}

/* <addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::find_function_or_location::{closure#0}
    */

void __rustcall
<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::find_function_or_location::_closure_0_
          (undefined4 param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined4 uStack_48;
  undefined3 uStack_44;
  longlong *local_40;
  char local_31;
  
  cVar1 = *param_4;
  lVar4 = *(longlong *)(param_4 + 8);
  lVar5 = *(longlong *)(param_4 + 0x10);
  if (cVar1 == -1) {
    param_2[2] = lVar4;
    param_2[3] = lVar5;
    goto LAB_0073d78d;
  }
  lVar6 = *param_3;
  if (*(int *)(lVar6 + 0x1f0) == 1) {
    plVar14 = (longlong *)(lVar6 + 0x1f8);
    lVar7 = *plVar14;
  }
  else {
    local_40 = param_2;
    plVar14 = (longlong *)
              <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>
              ::try_init::
              <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunctions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::_closure_0_>::_closure_0_,_>
                        (lVar6 + 0x1f0,lVar4,lVar5);
    lVar7 = *plVar14;
    param_1 = extraout_XMM0_Da;
    param_2 = local_40;
  }
  plVar13 = plVar14;
  if (lVar7 == 0) {
    lVar7 = plVar14[1];
    plVar13 = (longlong *)plVar14[2];
    if ((char)lVar7 != -1) {
      uVar3 = *(undefined4 *)((longlong)plVar14 + 9);
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)plVar14 + 0xc);
      *(undefined4 *)((longlong)param_2 + 0x11) = uVar3;
      *(char *)(param_2 + 2) = (char)lVar7;
      param_2[3] = (longlong)plVar13;
      goto LAB_0073d78d;
    }
  }
  plVar15 = (longlong *)CONCAT44(local_68._4_4_,(int)local_68);
  uVar8 = param_3[2];
  plVar14 = (longlong *)plVar13[3];
  plVar16 = (longlong *)0x0;
  if (plVar14 == (longlong *)0x0) {
    plVar17 = (longlong *)0x0;
  }
  else {
    lVar7 = plVar13[2];
    if (plVar14 != (longlong *)0x1) {
      plVar15 = (longlong *)0x0;
      plVar17 = plVar14;
      do {
        plVar16 = (longlong *)((longlong)plVar15 + ((ulonglong)plVar17 >> 1));
        if (uVar8 < *(ulonglong *)(lVar7 + (longlong)plVar16 * 0x18)) {
          plVar16 = plVar15;
        }
        plVar17 = (longlong *)((longlong)plVar17 - ((ulonglong)plVar17 >> 1));
        plVar15 = plVar16;
      } while ((longlong *)0x1 < plVar17);
    }
    plVar17 = (longlong *)0x0;
    local_40 = param_3;
    if (uVar8 < *(ulonglong *)(lVar7 + (longlong)plVar16 * 0x18)) {
      plVar15 = (longlong *)CONCAT44(local_68._4_4_,(int)local_68);
      uStack_60 = (char *)CONCAT44(uStack_60._4_4_,(undefined4)uStack_60);
      uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    }
    else {
      plVar15 = (longlong *)CONCAT44(local_68._4_4_,(int)local_68);
      uStack_60 = (char *)CONCAT44(uStack_60._4_4_,(undefined4)uStack_60);
      uStack_58 = (undefined4 *)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
      if (uVar8 < *(ulonglong *)(lVar7 + 8 + (longlong)plVar16 * 0x18)) {
        if (plVar14 <= plVar16) {
          param_1 = (*(code *)PTR_panic_bounds_check_00799520)
                              (plVar14,&PTR_s__rust_deps_addr2line_0_25_1_src__00796548);
LAB_0073d7f4:
          (*(code *)PTR_panic_bounds_check_00799520)
                    (param_1,&PTR_s__rust_deps_addr2line_0_25_1_src__00796560);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar9 = *(ulonglong *)(lVar7 + (longlong)plVar16 * 0x18 + 0x10);
        if ((ulonglong)plVar13[1] <= uVar9) goto LAB_0073d7f4;
        plVar14 = (longlong *)(uVar9 * 9);
        local_90 = *plVar13 + uVar9 * 0x48;
        local_98 = param_3[1];
        local_88 = (undefined4)lVar4;
        uStack_84 = (undefined4)((ulonglong)lVar4 >> 0x20);
        uStack_80 = (undefined4)lVar5;
        uStack_7c = (undefined4)((ulonglong)lVar5 >> 0x20);
        local_68 = &local_90;
        uStack_60 = &local_31;
        uStack_58 = &local_88;
        local_50 = &local_98;
        local_31 = cVar1;
        if (*(int *)(*plVar13 + uVar9 * 0x48) == 1) {
          plVar17 = (longlong *)(local_90 + 8);
          lVar4 = *plVar17;
        }
        else {
          plVar17 = (longlong *)
                    <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>
                    ::try_init::
                    <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::_closure_0_>::_closure_0_,_>
                              (local_90,&local_68);
          lVar4 = *plVar17;
          param_1 = extraout_XMM0_Da_01;
        }
        plVar15 = local_68;
        if (lVar4 == 0) {
          lVar4 = plVar17[1];
          uStack_44 = (undefined3)((uint)*(undefined4 *)((longlong)plVar17 + 0xc) >> 8);
          uVar2 = *(uint *)((longlong)plVar17 + 9);
          plVar14 = (longlong *)(ulonglong)uVar2;
          plVar17 = (longlong *)plVar17[2];
          uStack_48 = uVar2;
          if ((char)lVar4 != -1) {
            uStack_48._3_1_ = (undefined1)(uVar2 >> 0x18);
            *(uint *)((longlong)param_2 + 0x14) = CONCAT31(uStack_44,uStack_48._3_1_);
            *(uint *)((longlong)param_2 + 0x11) = uVar2;
            *(char *)(param_2 + 2) = (char)lVar4;
            param_2[3] = (longlong)plVar17;
            goto LAB_0073d78d;
          }
        }
      }
    }
  }
  local_68._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
  if (*(int *)(lVar6 + 0x60) == -2) {
    local_50 = plVar14;
    plVar14 = (longlong *)CONCAT44(local_68._4_4_,2);
    pcVar12 = uStack_60;
    puVar10 = uStack_58;
    goto LAB_0073d6a6;
  }
  local_68 = plVar15;
  if (*(int *)(lVar6 + 0x1c8) == 1) {
    plVar14 = (longlong *)(lVar6 + 0x1d0);
    if (*plVar14 == 0) goto LAB_0073d761;
LAB_0073d689:
    (*(code *)PTR_find_location_0079ad10)(param_1,uVar8);
    puVar10 = uStack_58;
    if ((int)local_68 != -1) {
      plVar14 = local_68;
      pcVar12 = uStack_60;
LAB_0073d6a6:
      uStack_58._4_4_ = (undefined4)((ulonglong)puVar10 >> 0x20);
      uStack_58._0_4_ = SUB84(puVar10,0);
      uStack_60._4_4_ = (undefined4)((ulonglong)pcVar12 >> 0x20);
      uStack_60._0_4_ = SUB84(pcVar12,0);
      local_68._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_58._4_4_;
      *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44((undefined4)uStack_60,local_68._4_4_);
      *(ulonglong *)((longlong)param_2 + 0x14) = CONCAT44((undefined4)uStack_58,uStack_60._4_4_);
      *param_2 = (longlong)plVar17;
      *(int *)(param_2 + 1) = (int)plVar14;
      param_2[4] = (longlong)local_50;
      return;
    }
  }
  else {
    plVar14 = (longlong *)
              <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::line::Lines,gimli[a7f20a324fd82d99]::read::Error>>>
              ::try_init::
              <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::line::Lines,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::line::LazyLines>::borrow<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_0_>::_closure_0_,_>
                        (lVar6 + 0x1c8,*(longlong *)param_3[1] + 0x10,lVar6,lVar6 + 0x60);
    param_1 = extraout_XMM0_Da_00;
    if (*plVar14 != 0) goto LAB_0073d689;
LAB_0073d761:
    puVar10 = (undefined4 *)plVar14[2];
    if ((char)plVar14[1] == -1) goto LAB_0073d689;
    uStack_60._5_3_ = (undefined3)((uint)*(undefined4 *)((longlong)plVar14 + 0xc) >> 8);
    uStack_60._4_1_ = (undefined1)((uint)*(undefined4 *)((longlong)plVar14 + 9) >> 0x18);
    uStack_60 = (char *)CONCAT44(uStack_60._4_4_,
                                 CONCAT31((int3)*(undefined4 *)((longlong)plVar14 + 9),
                                          (char)plVar14[1]));
  }
  param_2[2] = (longlong)uStack_60;
  param_2[3] = (longlong)puVar10;
LAB_0073d78d:
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return;
}


