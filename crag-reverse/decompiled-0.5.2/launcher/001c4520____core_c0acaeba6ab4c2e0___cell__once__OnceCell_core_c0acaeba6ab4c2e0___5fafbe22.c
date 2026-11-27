// 001c4520 <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::{closure#0}>::{closure#0},!>

/* <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::try_init::<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::{closure#0}>::{closure#0},
   !> */

int * __rustcall
<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>
::try_init::
<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::_closure_0_>::_closure_0_,_>
          (int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar20;
  int *local_158;
  int *local_150;
  int *piStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  int *local_128;
  undefined8 local_120;
  longlong local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  int *piStack_f8;
  int *local_f0;
  int *local_e8;
  int *local_e0;
  int *piStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  longlong local_b8;
  int *local_b0;
  int *local_a8;
  undefined1 local_a0;
  uint local_94;
  int local_90 [2];
  int *local_88;
  int *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *local_60;
  longlong local_58;
  uint local_4c;
  int *local_48;
  longlong local_40;
  int *local_38;
  
  piVar18 = *(int **)(*(longlong *)*param_2 + 0x40);
  piVar9 = (int *)((longlong *)param_2[2])[1];
  uVar11 = *(ulonglong *)(piVar9 + 0xc);
  bVar2 = *(byte *)((longlong)piVar9 + 0x49);
  uVar13 = (ulonglong)(bVar2 == 8);
  piVar16 = (int *)((*(longlong *)(piVar9 + 0xe) - uVar11) + uVar13 * 8 + 4);
  uVar15 = (longlong)piVar18 - (longlong)piVar16;
  local_128 = piVar18;
  if (piVar18 < piVar16 || (uVar11 < uVar15 || (int *)(uVar11 - uVar15) == (int *)0x0)) {
    piVar16 = (int *)0x3b;
    piVar17 = piVar9;
  }
  else {
    local_58 = CONCAT71(local_58._1_7_,*(undefined1 *)param_2[1]);
    local_40 = *(longlong *)param_2[2];
    local_60 = *(int **)param_2[3];
    lVar8 = *(longlong *)(piVar9 + 0x5c);
    uStack_138 = lVar8 + 0x10;
    local_150 = (int *)(uVar15 + *(longlong *)(piVar9 + 10));
    local_130 = 0;
    piVar12 = (int *)(uVar11 + *(longlong *)(piVar9 + 10));
    puVar7 = (undefined1 *)((longlong)piVar18 + (-*(longlong *)(piVar9 + 0xe) - (uVar13 * 8 + 4)));
    piVar17 = (int *)0x0;
    iVar10 = 0;
    do {
      bVar3 = *(byte *)((longlong)piVar12 + (longlong)puVar7);
      local_140 = piVar9;
      if ((iVar10 == 0x3f) && (1 < bVar3)) {
        piVar16 = (int *)0x6;
        goto LAB_001c465b;
      }
      piVar17 = (int *)((ulonglong)piVar17 | (ulonglong)(bVar3 & 0x7f) << ((byte)iVar10 & 0x3f));
      if (-1 < (char)bVar3) {
        local_150 = (int *)((longlong)piVar12 + (longlong)(puVar7 + 1));
        piStack_148 = (int *)~(ulonglong)puVar7;
        if (piVar17 == (int *)0x0) goto LAB_001c4c97;
        if ((undefined1 *)((longlong)piVar17 + -1) < *(undefined1 **)(lVar8 + 0x20)) {
          cVar4 = *(char *)(((longlong)piVar17 + -1) * 0x70 + *(longlong *)(lVar8 + 0x18) + 0x6a);
          goto code_r0x001c4703;
        }
        lVar14 = *(longlong *)(lVar8 + 0x28);
        piVar16 = (int *)0x12;
        if (lVar14 == 0) goto LAB_001c4663;
        piVar12 = *(int **)(lVar8 + 0x30);
        goto LAB_001c4923;
      }
      iVar10 = iVar10 + 7;
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined1 *)0x0);
    piVar16 = (int *)0x13;
LAB_001c465b:
    piVar17 = piVar12;
    piStack_148 = (int *)(uVar11 - uVar15);
  }
LAB_001c4663:
  uVar11 = 0;
  piVar9 = (int *)0x0;
  local_80 = piVar17;
  piVar17 = (int *)0x0;
LAB_001c4666:
  do {
    local_100 = (int *)((ulonglong)piVar16 & 0xff | (uint)piVar17 & 0xff00 | uVar11);
    if (*param_1 != 1) {
      param_1[0] = 1;
      param_1[1] = 0;
      *(int **)(param_1 + 2) = piVar9;
      *(int **)(param_1 + 4) = local_100;
      *(int **)(param_1 + 6) = local_80;
      *(int **)(param_1 + 8) = piVar18;
      *(int **)(param_1 + 10) = local_128;
      *(int **)(param_1 + 0xc) = local_38;
      *(int **)(param_1 + 0xe) = local_48;
      return param_1 + 2;
    }
    param_1 = param_1 + 2;
    local_e8 = local_128;
    local_e0 = local_38;
    piStack_d8 = local_48;
    local_110 = param_1;
    local_108 = piVar9;
    piStack_f8 = local_80;
    local_f0 = piVar18;
    uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <core[c0acaeba6ab4c2e0]::result::Result<&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,(&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>)>>
                       (&local_110);
    (*(code *)PTR_panic_fmt_0021a010)(uVar20,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217170);
LAB_001c4c97:
    uVar20 = (*(code *)PTR_unwrap_failed_00219e58)();
LAB_001c4ca4:
    uVar20 = (*(code *)
               PTR_<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress>>_0021a6a8
             )(uVar20,&local_78);
LAB_001c4aea:
    piVar16 = local_100;
    if (local_100 < local_110) {
      if (local_100 == (int *)0x0) {
        uVar20 = (*(code *)PTR___rust_dealloc_00219c40)(uVar20,8);
        piVar9 = (int *)&DAT_00000008;
      }
      else {
        local_40 = (longlong)local_100 * 0x30;
        piVar9 = (int *)(*(code *)PTR___rust_realloc_0021a150)(local_40,8);
        uVar20 = extraout_XMM0_Da;
        if (piVar9 == (int *)0x0) {
          (*(code *)PTR_handle_error_00219c78)();
          goto LAB_001c4bd3;
        }
      }
    }
    else {
      piVar9 = local_108;
    }
    piVar18 = local_e8;
    if (local_e8 < piStack_f8) {
      if (local_e8 == (int *)0x0) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar20,8);
        local_80 = (int *)&DAT_00000008;
      }
      else {
        local_40 = (longlong)local_e8 << 5;
        local_60 = local_f0;
        local_58 = (longlong)piStack_f8 << 5;
        local_80 = (int *)(*(code *)PTR___rust_realloc_0021a150)(local_40,8);
        if (local_80 == (int *)0x0) {
          (*(code *)PTR_handle_error_00219c78)();
LAB_001c4bd3:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
      }
    }
    else {
      local_80 = local_f0;
    }
    uVar11 = (ulonglong)piVar16 & 0x3ffffffffff0000;
    piVar17 = piVar16;
  } while( true );
LAB_001c4923:
  uVar11 = (ulonglong)*(ushort *)(lVar14 + 0x532);
  uVar13 = 0xffffffffffffffff;
  lVar8 = 0;
  do {
    if (uVar11 * 0x70 + lVar8 == 0) goto LAB_001c4976;
    piVar5 = *(int **)(lVar14 + 0x4e0 + uVar13 * 8);
    lVar8 = lVar8 + -0x70;
    uVar13 = uVar13 + 1;
  } while ((char)((piVar5 < piVar17) - (piVar17 < piVar5)) == '\x01');
  uVar11 = uVar13;
  if (piVar5 < piVar17 == piVar17 < piVar5) {
    cVar4 = *(char *)((lVar14 - lVar8) + -6);
code_r0x001c4703:
    local_130 = (ulonglong)(cVar4 == '\x01');
    lVar8 = (*(code *)PTR_deref_0021a6a0)();
    if (piVar12 == (int *)0x0) {
      local_38 = (int *)0x0;
LAB_001c4992:
      local_c0 = local_130;
      local_d0 = (undefined4)local_140;
      uStack_cc = local_140._4_4_;
      uStack_c8 = (undefined4)uStack_138;
      uStack_c4 = uStack_138._4_4_;
      local_e0 = local_150;
      piStack_d8 = piStack_148;
      local_110 = (int *)0x0;
      local_108 = (int *)&DAT_00000008;
      local_100 = (int *)0x0;
      piStack_f8 = (int *)0x0;
      local_f0 = (int *)&DAT_00000008;
      local_e8 = (int *)0x0;
      local_a0 = (byte)local_58;
      local_b8 = local_40;
      local_a8 = local_60;
      local_b0 = piVar9;
      uVar20 = <addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
               ::parse_children(&local_78,&local_110,0,0);
      if ((char)local_78 == -1) {
        if (local_e8 < (int *)0x2) goto LAB_001c4aea;
        if ((int *)0x14 < local_e8) goto LAB_001c4ca4;
        uVar20 = core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
                 <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                           (local_f0);
        goto LAB_001c4aea;
      }
      piVar16 = (int *)CONCAT44(uStack_74,local_78);
      piVar17 = (int *)CONCAT44(uStack_6c,uStack_70);
      if (local_110 != (int *)0x0) {
        uVar20 = (*(code *)PTR___rust_dealloc_00219c40)(uVar20,8);
      }
      if (piStack_f8 != (int *)0x0) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar20,8);
      }
      uVar11 = (ulonglong)piVar16 & 0xffffffffffff0000;
      piVar9 = (int *)0x0;
      local_80 = piVar17;
      piVar17 = piVar16;
    }
    else {
      piVar18 = (int *)((longlong)piVar12 * 0x10);
      local_120 = *(undefined8 *)(piVar9 + 0x68);
      local_4c = (uint)bVar2;
      local_94 = (uint)(byte)local_58;
      piVar16 = (int *)0x0;
      local_38 = (int *)0x0;
      local_118 = lVar8;
      while( true ) {
        puVar1 = (undefined4 *)(lVar8 + (longlong)piVar16);
        local_78 = *puVar1;
        uStack_74 = puVar1[1];
        uStack_70 = puVar1[2];
        uStack_6c = puVar1[3];
        gimli[a7f20a324fd82d99]::read::unit::parse_attribute::
        <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                  (&local_110,&local_150,local_140[0x12],&local_78);
        if ((int)local_110 == -1) break;
        if ((ushort)piStack_f8 < 0x47) {
          if ((ushort)piStack_f8 == 3) {
            if (local_38 == (int *)0x0) {
              <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
              ::value(&local_78,&local_110);
              lVar8 = local_118;
              <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
              ::attr_string(local_90,local_40,local_4c,local_120,&local_78);
              if ((char)local_90[0] == '\0') {
                local_38 = local_88;
                local_158 = local_80;
              }
              else {
                local_38 = (int *)0x0;
              }
              local_48 = local_158;
            }
          }
          else if ((ushort)piStack_f8 == 0x31) goto LAB_001c482e;
        }
        else if ((ushort)piStack_f8 == 0x47) {
LAB_001c482e:
          if (local_38 == (int *)0x0) {
            <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            ::value(&local_78,&local_110);
            addr2line[f7adfda4b3430143]::function::name_attr::
            <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                      (local_90,CONCAT44(uStack_74,local_78),CONCAT44(uStack_6c,uStack_70),local_94,
                       local_40,piVar9,local_60,0x10);
            local_38 = local_88;
            if (local_90[0] == 1) {
              piVar16 = local_88;
              goto LAB_001c4ac0;
            }
            local_48 = local_80;
          }
        }
        else if (((ushort)piStack_f8 == 0x2007) || ((ushort)piStack_f8 == 0x6e)) {
          <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::value(&local_78,&local_110);
          <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::attr_string(local_90,local_40,local_4c,local_120,&local_78);
          if ((char)local_90[0] == '\0') {
            local_48 = local_80;
            local_38 = local_88;
          }
          lVar8 = local_118;
        }
        piVar16 = piVar16 + 4;
        if (piVar18 == piVar16) goto LAB_001c4992;
      }
      local_80 = local_100;
      piVar16 = local_108;
LAB_001c4ac0:
      uVar11 = (ulonglong)piVar16 & 0xffffffffffff0000;
      piVar9 = (int *)0x0;
      piVar17 = piVar16;
      local_48 = local_80;
    }
    goto LAB_001c4666;
  }
LAB_001c4976:
  bVar19 = piVar12 != (int *)0x0;
  piVar12 = (int *)((longlong)piVar12 + -1);
  if (bVar19) goto code_r0x001c4980;
  goto LAB_001c4663;
code_r0x001c4980:
  lVar14 = *(longlong *)(lVar14 + 0x538 + uVar11 * 8);
  goto LAB_001c4923;
}


