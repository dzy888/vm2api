// 000802e0 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* WARNING: Type propagation algorithm not settling */
/* <gimli[a7f20a324fd82d99]::read::line::FileEntryFormat>::parse::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
<gimli[a7f20a324fd82d99]::read::line::FileEntryFormat>::parse::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (undefined4 param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  Elf64_Ehdr *pEVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_50;
  int local_38;
  
  pbVar7 = (byte *)*param_3;
  if (param_3[1] == 0) {
    *(undefined2 *)(param_2 + 1) = 0x13;
    *(undefined2 *)((longlong)param_2 + 0xe) = 0;
    *(undefined4 *)((longlong)param_2 + 10) = 0;
    param_2[2] = (ulonglong)pbVar7;
    *param_2 = 0xffffffffffffffff;
  }
  else {
    pbVar16 = (byte *)(param_3[1] + -1);
    pbVar15 = pbVar7 + 1;
    *param_3 = (longlong)pbVar15;
    param_3[1] = (longlong)pbVar16;
    uVar10 = (ulonglong)*pbVar7;
    if (*pbVar7 == 0) {
      local_50 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      uVar5 = (*(code *)PTR___rust_alloc_000c3a90)();
      puVar3 = PTR_grow_one_000c4108;
      if (uVar5 == 0) {
        uVar18 = (*(code *)PTR_handle_error_000c3a98)();
        if (local_50 != 0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar18,2);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      local_38 = 0;
      uVar8 = 0;
      pbVar7 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 1);
      param_1 = extraout_XMM0_Da;
      do {
        if (pbVar16 == (byte *)0x0) {
LAB_000805e8:
          pbVar7 = pbVar15;
          uVar4 = 0x13;
LAB_000805ed:
          *(undefined1 *)(param_2 + 1) = uVar4;
          *(undefined1 *)((longlong)param_2 + 9) = 0;
          *(undefined2 *)((longlong)param_2 + 0xe) = 0;
          *(undefined4 *)((longlong)param_2 + 10) = 0;
          param_2[2] = (ulonglong)pbVar7;
          *param_2 = 0xffffffffffffffff;
          goto joined_r0x000805be;
        }
        uVar1 = uVar8 + 1;
        pEVar9 = (Elf64_Ehdr *)0x0;
        pbVar17 = (byte *)0x0;
        iVar6 = 0;
        while( true ) {
          bVar2 = pbVar15[(longlong)pEVar9];
          if ((iVar6 == 0x3f) && (1 < bVar2)) {
            *param_3 = (longlong)(pbVar15 + (longlong)pEVar9 + 1);
            param_3[1] = (longlong)(pbVar16 + ~(ulonglong)pEVar9);
            uVar4 = 6;
            goto LAB_000805ed;
          }
          pbVar17 = (byte *)((ulonglong)pbVar17 | (ulonglong)(bVar2 & 0x7f) << ((byte)iVar6 & 0x3f))
          ;
          if (-1 < (char)bVar2) break;
          iVar6 = iVar6 + 7;
          pEVar9 = (Elf64_Ehdr *)pEVar9->e_ident_magic_str;
          if ((Elf64_Ehdr *)pbVar16 == pEVar9) {
            *param_3 = (longlong)(pbVar15 + (longlong)pbVar16);
            param_3[1] = 0;
            pbVar15 = pbVar15 + (longlong)pbVar16;
            goto LAB_000805e8;
          }
        }
        pbVar7 = pbVar15 + (longlong)pEVar9 + 1;
        *param_3 = (longlong)pbVar7;
        param_3[1] = (longlong)(pbVar16 + ~(ulonglong)pEVar9);
        pbVar12 = zmij[d3c5782749dc14a3]::STATIC_DATA + 0x2bf;
        if (pbVar17 < zmij[d3c5782749dc14a3]::STATIC_DATA + 0x2bf) {
          pbVar12 = pbVar17;
        }
        if ((Elf64_Ehdr *)(pbVar16 + -1) == pEVar9) {
LAB_0008064d:
          local_68 = 0;
          uVar4 = 0x13;
          uVar18 = 0;
LAB_00080653:
          *(undefined1 *)(param_2 + 1) = uVar4;
          *(undefined1 *)((longlong)param_2 + 9) = 0;
          *(short *)((longlong)param_2 + 10) = (short)local_68;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar18;
          param_2[2] = (ulonglong)pbVar7;
          *param_2 = 0xffffffffffffffff;
          goto joined_r0x000805be;
        }
        *param_3 = (longlong)(pbVar15 + (longlong)pEVar9 + 2);
        param_3[1] = (longlong)(pbVar16 + (-2 - (longlong)pEVar9));
        bVar2 = (pbVar15 + 1)[(longlong)pEVar9];
        local_60 = (ulonglong)bVar2;
        pbVar13 = pbVar15 + (longlong)pEVar9 + 2;
        pbVar7 = pbVar16 + (-2 - (longlong)pEVar9);
        if ((char)bVar2 < '\0') {
          if ((Elf64_Ehdr *)(pbVar16 + -2) == pEVar9) {
            pbVar7 = pbVar15 + (longlong)pEVar9 + 2;
            goto LAB_0008064d;
          }
          pbVar7 = pbVar16 + (-3 - (longlong)pEVar9);
          pbVar13 = pbVar15 + (longlong)pEVar9 + 3;
          *param_3 = (longlong)pbVar13;
          param_3[1] = (longlong)pbVar7;
          uVar14 = ((pbVar15 + 2)[(longlong)pEVar9] & 0x7f) << 7;
          uVar11 = bVar2 & 0x7f | uVar14;
          if (-1 < (char)(pbVar15 + 2)[(longlong)pEVar9]) {
LAB_000804e8:
            local_60 = (ulonglong)uVar11;
            goto joined_r0x000804f3;
          }
          if ((Elf64_Ehdr *)(pbVar16 + -3) == pEVar9) {
            pbVar7 = pbVar15 + (longlong)pEVar9 + 3;
            goto LAB_0008064d;
          }
          pbVar7 = pbVar16 + (-4 - (longlong)pEVar9);
          pbVar13 = pbVar15 + (longlong)pEVar9 + 4;
          *param_3 = (longlong)pbVar13;
          param_3[1] = (longlong)pbVar7;
          if ((pbVar15 + 3)[(longlong)pEVar9] < 4) {
            uVar11 = bVar2 & 0x7f | uVar14 | ((ushort)(pbVar15 + 3)[(longlong)pEVar9] & 3) << 0xe;
            goto LAB_000804e8;
          }
          uVar18 = (undefined4)(local_68 >> 0x10);
          uVar4 = 6;
          goto LAB_00080653;
        }
joined_r0x000804f3:
        pbVar16 = pbVar7;
        pbVar15 = pbVar13;
        if (uVar8 == uVar10) {
          param_1 = (*(code *)puVar3)();
        }
        local_38 = local_38 + (uint)(pbVar17 == (byte *)Elf64_Ehdr_00000000.e_ident_magic_str);
        local_68 = local_68 & 0xffffffffffff0000 | local_60;
        *(short *)(uVar5 + uVar8 * 4) = (short)pbVar12;
        *(short *)(uVar5 + 2 + uVar8 * 4) = (short)local_60;
        uVar8 = uVar1;
        pbVar7 = pbVar17;
      } while (uVar1 != uVar10);
      local_50 = uVar10;
      if (local_38 == 1) {
        param_2[2] = uVar1;
        *param_2 = uVar10;
        param_2[1] = uVar5;
        return;
      }
    }
    *(undefined1 *)(param_2 + 1) = 0x47;
    *param_2 = 0xffffffffffffffff;
    uVar10 = local_50;
joined_r0x000805be:
    if (uVar10 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_1,2);
    }
  }
  return;
}


