// 0008c060 <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset),
   <[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   <addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,int param_5,
          ulonglong *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  ulonglong *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  longlong lVar32;
  ulonglong *puVar33;
  ulonglong *puVar34;
  longlong lVar35;
  bool bVar36;
  undefined4 uVar37;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong *local_68;
  ulonglong *local_60;
  longlong local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  
  local_60 = param_6;
  if (&Elf64_Ehdr_00000000.e_phoff < param_2) {
    local_68 = param_4;
    do {
      param_4 = local_68;
      while( true ) {
        if (param_5 == 0) {
          drift::sort::
          <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                    (param_1,param_2,param_3,param_4,1,param_7);
          return;
        }
        puVar29 = param_1 + ((ulonglong)param_2 >> 3) * 8;
        local_50 = param_2;
        if ((ulonglong *)((longlong)&Elf64_Ehdr_00000000.e_shstrndx + 1) < param_2) {
          puVar29 = (ulonglong *)
                    shared::pivot::median3_rec::
                    <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                              (param_1,puVar29);
        }
        else {
          uVar28 = *param_1;
          uVar24 = *puVar29;
          uVar17 = param_1[((ulonglong)param_2 >> 3) * 0xe];
          if (uVar24 < uVar17 != uVar28 < uVar24) {
            puVar29 = param_1 + ((ulonglong)param_2 >> 3) * 0xe;
          }
          if (uVar28 < uVar17 != uVar28 < uVar24) {
            puVar29 = param_1;
          }
        }
        puVar34 = local_50;
        local_58 = CONCAT44(local_58._4_4_,param_5 + -1);
        uVar28 = (longlong)puVar29 - (longlong)param_1;
        local_38 = (ulonglong *)(uVar28 >> 4);
        local_78 = (undefined4)*puVar29;
        uStack_74 = *(undefined4 *)((longlong)puVar29 + 4);
        uStack_70 = (undefined4)puVar29[1];
        uStack_6c = *(undefined4 *)((longlong)puVar29 + 0xc);
        if ((local_60 != (ulonglong *)0x0) && (*puVar29 <= *local_60)) break;
        if (param_4 < local_50) goto LAB_0008cab7;
        local_48 = param_3 + (longlong)local_50 * 2;
        param_2 = (ulonglong *)0x0;
        puVar29 = param_1;
        puVar33 = local_48;
        puVar20 = local_38;
        while( true ) {
          lVar22 = 0;
          if (Elf64_Ehdr_00000000.e_ident_magic_str + 1 < puVar20) {
            lVar22 = (longlong)puVar20 + -3;
          }
          for (; puVar29 < param_1 + lVar22 * 2; puVar29 = puVar29 + 8) {
            bVar36 = *puVar29 < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar23 = puVar33 + -2;
            if (bVar36) {
              puVar23 = param_3;
            }
            uVar17 = (ulonglong)bVar36;
            bVar36 = puVar29[2] < *(ulonglong *)((longlong)param_1 + uVar28);
            uVar24 = puVar29[1];
            puVar25 = puVar33 + -4;
            if (bVar36) {
              puVar25 = param_3;
            }
            puVar23[(longlong)param_2 * 2] = *puVar29;
            (puVar23 + (longlong)param_2 * 2)[1] = uVar24;
            uVar24 = puVar29[3];
            lVar35 = (longlong)param_2 + bVar36 + uVar17;
            puVar25[((longlong)param_2 + uVar17) * 2] = puVar29[2];
            (puVar25 + ((longlong)param_2 + uVar17) * 2)[1] = uVar24;
            bVar36 = puVar29[4] < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar23 = puVar33 + -6;
            if (bVar36) {
              puVar23 = param_3;
            }
            uVar17 = (ulonglong)bVar36;
            uVar24 = puVar29[5];
            puVar23[lVar35 * 2] = puVar29[4];
            (puVar23 + lVar35 * 2)[1] = uVar24;
            puVar33 = puVar33 + -8;
            bVar36 = puVar29[6] < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar23 = puVar33;
            if (bVar36) {
              puVar23 = param_3;
            }
            uVar37 = *(undefined4 *)((longlong)puVar29 + 0x34);
            uVar24 = puVar29[7];
            uVar3 = *(undefined4 *)((longlong)puVar29 + 0x3c);
            puVar23 = puVar23 + (lVar35 + uVar17) * 2;
            *(int *)puVar23 = (int)puVar29[6];
            *(undefined4 *)((longlong)puVar23 + 4) = uVar37;
            *(int *)(puVar23 + 1) = (int)uVar24;
            *(undefined4 *)((longlong)puVar23 + 0xc) = uVar3;
            param_2 = (ulonglong *)(lVar35 + uVar17 + (ulonglong)bVar36);
          }
          for (; puVar29 < param_1 + (longlong)puVar20 * 2; puVar29 = puVar29 + 2) {
            puVar33 = puVar33 + -2;
            bVar36 = *puVar29 < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar23 = puVar33;
            if (bVar36) {
              puVar23 = param_3;
            }
            uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
            uVar24 = puVar29[1];
            uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
            puVar23 = puVar23 + (longlong)param_2 * 2;
            *(int *)puVar23 = (int)*puVar29;
            *(undefined4 *)((longlong)puVar23 + 4) = uVar37;
            *(int *)(puVar23 + 1) = (int)uVar24;
            *(undefined4 *)((longlong)puVar23 + 0xc) = uVar3;
            param_2 = (ulonglong *)((longlong)param_2 + (ulonglong)bVar36);
          }
          if (puVar20 == local_50) break;
          uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
          uVar24 = puVar29[1];
          uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
          puVar20 = puVar33 + (longlong)param_2 * 2 + -2;
          *(int *)puVar20 = (int)*puVar29;
          *(undefined4 *)((longlong)puVar20 + 4) = uVar37;
          *(int *)(puVar20 + 1) = (int)uVar24;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uVar3;
          puVar33 = puVar33 + -2;
          puVar29 = puVar29 + 2;
          puVar20 = local_50;
        }
        local_40 = (ulonglong *)((longlong)param_2 << 4);
        uVar37 = (*(code *)PTR_memcpy_000c3aa8)();
        param_4 = local_68;
        uVar24 = (longlong)local_50 - (longlong)param_2;
        if (uVar24 != 0) {
          if (local_50 == (ulonglong *)((longlong)param_2 + 1)) {
            uVar18 = 0;
            puVar29 = param_3 + (longlong)puVar34 * 2;
          }
          else {
            puVar21 = (undefined4 *)((longlong)local_40 + (longlong)(param_1 + 2));
            puVar29 = param_3 + (longlong)puVar34 * 2 + -2;
            uVar17 = 0;
            do {
              uVar18 = puVar29[1];
              *(ulonglong *)(puVar21 + -4) = *puVar29;
              *(ulonglong *)(puVar21 + -2) = uVar18;
              uVar18 = uVar17 + 2;
              puVar34 = local_48 + (uVar17 ^ 0xffffffffffffffe) * 2;
              uVar37 = (undefined4)*puVar34;
              uVar3 = *(undefined4 *)((longlong)puVar34 + 4);
              uVar17 = puVar34[1];
              uVar4 = *(undefined4 *)((longlong)puVar34 + 0xc);
              *puVar21 = uVar37;
              puVar21[1] = uVar3;
              puVar21[2] = (int)uVar17;
              puVar21[3] = uVar4;
              puVar21 = puVar21 + 8;
              puVar29 = puVar29 + -4;
              uVar17 = uVar18;
            } while ((uVar24 & 0xfffffffffffffffe) != uVar18);
            puVar29 = local_48;
            if ((uVar24 & 1) == 0) goto LAB_0008c3e7;
          }
          puVar29 = puVar29 + ~uVar18 * 2;
          uVar37 = (undefined4)*puVar29;
          uVar3 = *(undefined4 *)((longlong)puVar29 + 4);
          uVar24 = puVar29[1];
          uVar4 = *(undefined4 *)((longlong)puVar29 + 0xc);
          puVar21 = (undefined4 *)((longlong)local_40 + (longlong)param_1 + uVar18 * 0x10);
          *puVar21 = uVar37;
          puVar21[1] = uVar3;
          puVar21[2] = (int)uVar24;
          puVar21[3] = uVar4;
        }
LAB_0008c3e7:
        if (param_2 == (ulonglong *)0x0) break;
        if (local_50 < param_2) {
          (*(code *)PTR_panic_fmt_000c3e90)(uVar37,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1630)
          ;
          goto LAB_0008cad2;
        }
        param_5 = (int)local_58;
        (*(code *)
          PTR_<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_000c41b0
        )(local_68,param_3,(int)local_58,&local_78);
        if (param_2 < (ulonglong *)((longlong)&Elf64_Ehdr_00000000.e_phoff + 1)) goto LAB_0008c087;
      }
      if (param_4 < local_50) goto LAB_0008cab7;
      local_40 = (ulonglong *)((longlong)local_50 * 0x10);
      local_48 = param_3 + (longlong)local_50 * 2;
      puVar33 = (ulonglong *)0x0;
      puVar29 = param_1;
      puVar34 = local_48;
      puVar20 = local_38;
      while( true ) {
        lVar22 = 0;
        if (Elf64_Ehdr_00000000.e_ident_magic_str + 1 < puVar20) {
          lVar22 = (longlong)puVar20 + -3;
        }
        for (; puVar29 < param_1 + lVar22 * 2; puVar29 = puVar29 + 8) {
          bVar36 = *puVar29 <= *(ulonglong *)((longlong)param_1 + uVar28);
          puVar23 = puVar34 + -2;
          if (bVar36) {
            puVar23 = param_3;
          }
          lVar35 = (longlong)puVar33 + (ulonglong)bVar36;
          bVar36 = *(ulonglong *)((longlong)param_1 + uVar28) < puVar29[2];
          uVar24 = puVar29[1];
          puVar25 = puVar34 + -4;
          if (!bVar36) {
            puVar25 = param_3;
          }
          puVar23[(longlong)puVar33 * 2] = *puVar29;
          (puVar23 + (longlong)puVar33 * 2)[1] = uVar24;
          lVar32 = (lVar35 + 1) - (ulonglong)bVar36;
          bVar36 = *(ulonglong *)((longlong)param_1 + uVar28) < puVar29[4];
          uVar24 = puVar29[3];
          puVar33 = puVar34 + -6;
          if (!bVar36) {
            puVar33 = param_3;
          }
          puVar25[lVar35 * 2] = puVar29[2];
          (puVar25 + lVar35 * 2)[1] = uVar24;
          uVar24 = puVar29[5];
          lVar35 = (lVar32 + 1) - (ulonglong)bVar36;
          puVar33[lVar32 * 2] = puVar29[4];
          (puVar33 + lVar32 * 2)[1] = uVar24;
          puVar34 = puVar34 + -8;
          bVar36 = *(ulonglong *)((longlong)param_1 + uVar28) < puVar29[6];
          puVar33 = puVar34;
          if (!bVar36) {
            puVar33 = param_3;
          }
          uVar37 = *(undefined4 *)((longlong)puVar29 + 0x34);
          uVar24 = puVar29[7];
          uVar3 = *(undefined4 *)((longlong)puVar29 + 0x3c);
          puVar33 = puVar33 + lVar35 * 2;
          *(int *)puVar33 = (int)puVar29[6];
          *(undefined4 *)((longlong)puVar33 + 4) = uVar37;
          *(int *)(puVar33 + 1) = (int)uVar24;
          *(undefined4 *)((longlong)puVar33 + 0xc) = uVar3;
          puVar33 = (ulonglong *)((lVar35 + 1) - (ulonglong)bVar36);
        }
        for (; puVar29 < param_1 + (longlong)puVar20 * 2; puVar29 = puVar29 + 2) {
          puVar34 = puVar34 + -2;
          bVar36 = *puVar29 <= *(ulonglong *)((longlong)param_1 + uVar28);
          puVar23 = puVar34;
          if (bVar36) {
            puVar23 = param_3;
          }
          uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
          uVar24 = puVar29[1];
          uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
          puVar23 = puVar23 + (longlong)puVar33 * 2;
          *(int *)puVar23 = (int)*puVar29;
          *(undefined4 *)((longlong)puVar23 + 4) = uVar37;
          *(int *)(puVar23 + 1) = (int)uVar24;
          *(undefined4 *)((longlong)puVar23 + 0xc) = uVar3;
          puVar33 = (ulonglong *)((longlong)puVar33 + (ulonglong)bVar36);
        }
        if (puVar20 == local_50) break;
        puVar34 = puVar34 + -2;
        uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
        uVar24 = puVar29[1];
        uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
        puVar20 = param_3 + (longlong)puVar33 * 2;
        *(int *)puVar20 = (int)*puVar29;
        *(undefined4 *)((longlong)puVar20 + 4) = uVar37;
        *(int *)(puVar20 + 1) = (int)uVar24;
        *(undefined4 *)((longlong)puVar20 + 0xc) = uVar3;
        puVar33 = (ulonglong *)((longlong)puVar33 + 1);
        puVar29 = puVar29 + 2;
        puVar20 = local_50;
      }
      (*(code *)PTR_memcpy_000c3aa8)(puVar34,(longlong)puVar33 * 0x10);
      param_2 = (ulonglong *)((longlong)local_50 - (longlong)puVar33);
      if (param_2 == (ulonglong *)0x0) {
        return;
      }
      local_38 = param_1 + (longlong)puVar33 * 2;
      if (local_50 == (ulonglong *)((longlong)puVar33 + 1)) {
        uVar24 = 0;
LAB_0008c653:
        puVar29 = local_48 + ~uVar24 * 2;
        uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
        uVar28 = puVar29[1];
        uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
        puVar34 = local_38 + uVar24 * 2;
        *(int *)puVar34 = (int)*puVar29;
        *(undefined4 *)((longlong)puVar34 + 4) = uVar37;
        *(int *)(puVar34 + 1) = (int)uVar28;
        *(undefined4 *)((longlong)puVar34 + 0xc) = uVar3;
      }
      else {
        param_1 = param_1 + (longlong)puVar33 * 2 + 2;
        puVar29 = (ulonglong *)((longlong)local_40 + (longlong)(param_3 + -2));
        uVar28 = 0;
        do {
          uVar24 = puVar29[1];
          param_1[-2] = *puVar29;
          param_1[-1] = uVar24;
          uVar24 = uVar28 + 2;
          puVar34 = local_48 + (uVar28 ^ 0xffffffffffffffe) * 2;
          uVar37 = *(undefined4 *)((longlong)puVar34 + 4);
          uVar28 = puVar34[1];
          uVar3 = *(undefined4 *)((longlong)puVar34 + 0xc);
          *(int *)param_1 = (int)*puVar34;
          *(undefined4 *)((longlong)param_1 + 4) = uVar37;
          *(int *)(param_1 + 1) = (int)uVar28;
          *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          param_1 = param_1 + 4;
          puVar29 = puVar29 + -4;
          uVar28 = uVar24;
        } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar24);
        if (((ulonglong)param_2 & 1) != 0) goto LAB_0008c653;
      }
      if (local_50 < puVar33) {
LAB_0008cad2:
        uVar37 = (*(code *)PTR_slice_index_fail_000c3bb0)
                           (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1648);
        (*(code *)PTR_memcpy_000c3aa8)(uVar37,local_58);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      local_60 = (ulonglong *)0x0;
      param_4 = local_68;
      param_1 = local_38;
      param_5 = (int)local_58;
    } while (&Elf64_Ehdr_00000000.e_phoff < param_2);
  }
  else {
LAB_0008c087:
    local_38 = param_1;
  }
  puVar29 = local_38;
  if (param_2 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
    return;
  }
  if (param_2 + 2 <= param_4) {
    puVar34 = (ulonglong *)((ulonglong)param_2 >> 1);
    if (param_2 < &Elf64_Ehdr_00000000.e_type) {
      if (param_2 < &Elf64_Ehdr_00000000.e_ident_abiversion) {
        uVar28 = local_38[1];
        *param_3 = *local_38;
        param_3[1] = uVar28;
        uVar28 = (local_38 + (longlong)puVar34 * 2)[1];
        param_3[(longlong)puVar34 * 2] = local_38[(longlong)puVar34 * 2];
        (param_3 + (longlong)puVar34 * 2)[1] = uVar28;
        pbVar19 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        pbVar27 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
      }
      else {
        uVar24 = (ulonglong)(local_38[2] < *local_38);
        uVar17 = (ulonglong)(local_38[2] >= *local_38);
        local_48 = local_38 + uVar17 * 2;
        uVar18 = (ulonglong)(local_38[6] < local_38[4]);
        puVar20 = local_38 + uVar18 * 2 + 4;
        uVar26 = (ulonglong)((local_38[6] < local_38[4] ^ 3) << 4);
        uVar28 = *(ulonglong *)((longlong)local_38 + uVar26);
        puVar33 = local_48;
        if (uVar28 < local_38[uVar17 * 2]) {
          puVar33 = puVar20;
        }
        local_40 = local_38 + uVar24 * 2;
        if (local_38[uVar18 * 2 + 4] < local_38[uVar24 * 2]) {
          local_40 = puVar20;
          puVar33 = local_38 + uVar24 * 2;
        }
        puVar23 = (ulonglong *)((longlong)local_38 + uVar26);
        if (local_38[uVar18 * 2 + 4] < local_38[uVar24 * 2]) {
          puVar20 = local_48;
        }
        if (uVar28 < local_38[uVar17 * 2]) {
          puVar20 = puVar23;
        }
        else {
          local_48 = puVar23;
        }
        puVar23 = puVar20;
        if (*puVar20 < *puVar33) {
          puVar23 = puVar33;
          puVar33 = puVar20;
        }
        uVar24 = (ulonglong)(local_38[(longlong)puVar34 * 2 + 2] < local_38[(longlong)puVar34 * 2]);
        uVar17 = (ulonglong)(local_38[(longlong)puVar34 * 2 + 2] >= local_38[(longlong)puVar34 * 2])
        ;
        puVar20 = local_38 + (longlong)puVar34 * 2 + uVar17 * 2;
        uVar18 = (ulonglong)
                 (local_38[(longlong)puVar34 * 2 + 6] < local_38[(longlong)puVar34 * 2 + 4]);
        puVar30 = local_38 + (longlong)puVar34 * 2 + uVar18 * 2 + 4;
        uVar26 = (ulonglong)
                 ((local_38[(longlong)puVar34 * 2 + 6] < local_38[(longlong)puVar34 * 2 + 4] ^ 3) <<
                 4);
        uVar28 = *(ulonglong *)((longlong)local_38 + uVar26 + (longlong)puVar34 * 0x10);
        puVar25 = puVar20;
        if (uVar28 < local_38[(longlong)puVar34 * 2 + uVar17 * 2]) {
          puVar25 = puVar30;
        }
        puVar31 = puVar30;
        puVar16 = local_38 + (longlong)puVar34 * 2 + uVar24 * 2;
        if (local_38[(longlong)puVar34 * 2 + uVar18 * 2 + 4] <
            local_38[(longlong)puVar34 * 2 + uVar24 * 2]) {
          puVar31 = puVar20;
          puVar16 = puVar30;
          puVar25 = local_38 + (longlong)puVar34 * 2 + uVar24 * 2;
        }
        uVar24 = local_40[1];
        puVar30 = (ulonglong *)((longlong)local_38 + uVar26 + (longlong)puVar34 * 0x10);
        if (uVar28 < local_38[(longlong)puVar34 * 2 + uVar17 * 2]) {
          puVar31 = puVar30;
        }
        else {
          puVar20 = puVar30;
        }
        uVar28 = *puVar33;
        uVar17 = puVar33[1];
        uVar18 = *puVar23;
        uVar26 = puVar23[1];
        puVar33 = puVar25;
        if (*puVar31 < *puVar25) {
          puVar33 = puVar31;
        }
        uVar5 = *local_48;
        uVar6 = local_48[1];
        if (*puVar31 < *puVar25) {
          puVar31 = puVar25;
        }
        uVar7 = *puVar16;
        uVar8 = puVar16[1];
        uVar9 = *puVar33;
        uVar10 = puVar33[1];
        uVar11 = *puVar31;
        uVar12 = puVar31[1];
        uVar13 = *puVar20;
        uVar14 = puVar20[1];
        *param_3 = *local_40;
        param_3[1] = uVar24;
        param_3[2] = uVar28;
        param_3[3] = uVar17;
        param_3[4] = uVar18;
        param_3[5] = uVar26;
        param_3[6] = uVar5;
        param_3[7] = uVar6;
        param_3[(longlong)puVar34 * 2] = uVar7;
        (param_3 + (longlong)puVar34 * 2)[1] = uVar8;
        param_3[(longlong)puVar34 * 2 + 2] = uVar9;
        (param_3 + (longlong)puVar34 * 2 + 2)[1] = uVar10;
        param_3[(longlong)puVar34 * 2 + 4] = uVar11;
        (param_3 + (longlong)puVar34 * 2 + 4)[1] = uVar12;
        param_3[(longlong)puVar34 * 2 + 6] = uVar13;
        (param_3 + (longlong)puVar34 * 2 + 6)[1] = uVar14;
        pbVar19 = &Elf64_Ehdr_00000000.e_ident_class;
        pbVar27 = &Elf64_Ehdr_00000000.e_ident_class;
      }
    }
    else {
      shared::smallsort::sort8_stable::
      <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (local_38,param_3,param_3 + (longlong)param_2 * 2);
      shared::smallsort::sort8_stable::
      <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (puVar29 + (longlong)puVar34 * 2,param_3 + (longlong)puVar34 * 2,
                 param_3 + (longlong)param_2 * 2 + 0x10);
      pbVar19 = &Elf64_Ehdr_00000000.e_ident_abiversion;
      pbVar27 = &Elf64_Ehdr_00000000.e_ident_abiversion;
    }
    if (pbVar27 < puVar34) {
      uVar28 = (ulonglong)(uint)((int)pbVar19 << 4);
      pbVar27 = pbVar19;
      do {
        uVar24 = (puVar29 + (longlong)pbVar27 * 2)[1];
        param_3[(longlong)pbVar27 * 2] = puVar29[(longlong)pbVar27 * 2];
        (param_3 + (longlong)pbVar27 * 2)[1] = uVar24;
        uVar24 = param_3[(longlong)pbVar27 * 2];
        if (uVar24 < param_3[(longlong)pbVar27 * 2 + -2]) {
          uVar17 = param_3[(longlong)pbVar27 * 2 + 1];
          uVar18 = uVar28;
          do {
            puVar1 = (undefined8 *)((longlong)param_3 + (uVar18 - 0x10));
            uVar15 = puVar1[1];
            *(undefined8 *)((longlong)param_3 + uVar18) = *puVar1;
            ((undefined8 *)((longlong)param_3 + uVar18))[1] = uVar15;
            if (uVar18 == 0x10) {
              puVar33 = param_3;
              goto LAB_0008c8a3;
            }
            uVar26 = uVar18 - 0x10;
            lVar22 = uVar18 - 0x20;
            uVar18 = uVar26;
          } while (uVar24 < *(ulonglong *)((longlong)param_3 + lVar22));
          puVar33 = (ulonglong *)(uVar26 + (longlong)param_3);
LAB_0008c8a3:
          *puVar33 = uVar24;
          puVar33[1] = uVar17;
        }
        pbVar27 = pbVar27 + 1;
        uVar28 = uVar28 + 0x10;
      } while ((ulonglong *)pbVar27 != puVar34);
    }
    puVar33 = param_3 + (longlong)puVar34 * 2;
    if (pbVar19 < (ulonglong *)((longlong)param_2 - (longlong)puVar34)) {
      uVar28 = (ulonglong)(uint)((int)pbVar19 << 4);
      do {
        uVar24 = (puVar29 + (longlong)puVar34 * 2 + (longlong)pbVar19 * 2)[1];
        puVar33[(longlong)pbVar19 * 2] = puVar29[(longlong)puVar34 * 2 + (longlong)pbVar19 * 2];
        (puVar33 + (longlong)pbVar19 * 2)[1] = uVar24;
        uVar24 = puVar33[(longlong)pbVar19 * 2];
        if (uVar24 < puVar33[(longlong)pbVar19 * 2 + -2]) {
          uVar17 = puVar33[(longlong)pbVar19 * 2 + 1];
          uVar18 = uVar28;
          do {
            puVar1 = (undefined8 *)((longlong)puVar33 + (uVar18 - 0x10));
            uVar15 = puVar1[1];
            *(undefined8 *)((longlong)puVar33 + uVar18) = *puVar1;
            ((undefined8 *)((longlong)puVar33 + uVar18))[1] = uVar15;
            if (uVar18 == 0x10) {
              puVar20 = puVar33;
              goto LAB_0008c923;
            }
            uVar26 = uVar18 - 0x10;
            lVar22 = uVar18 - 0x20;
            uVar18 = uVar26;
          } while (uVar24 < *(ulonglong *)((longlong)puVar33 + lVar22));
          puVar20 = (ulonglong *)(uVar26 + (longlong)puVar33);
LAB_0008c923:
          *puVar20 = uVar24;
          puVar20[1] = uVar17;
        }
        pbVar19 = pbVar19 + 1;
        uVar28 = uVar28 + 0x10;
      } while ((ulonglong *)pbVar19 != (ulonglong *)((longlong)param_2 - (longlong)puVar34));
    }
    local_58 = (longlong)param_2 * 0x10;
    puVar23 = param_3 + (longlong)param_2 * 2 + -2;
    puVar20 = puVar33 + -2;
    puVar25 = puVar29 + (longlong)param_2 * 2;
    do {
      local_50 = puVar34;
      puVar30 = puVar29;
      bVar36 = *puVar33 < *param_3;
      local_48 = (ulonglong *)CONCAT71(local_48._1_7_,!bVar36);
      local_40 = (ulonglong *)CONCAT71(local_40._1_7_,bVar36);
      puVar29 = puVar33;
      if (!bVar36) {
        puVar29 = param_3;
      }
      uVar28 = puVar29[1];
      *puVar30 = *puVar29;
      puVar30[1] = uVar28;
      uVar28 = *puVar23;
      uVar24 = *puVar20;
      puVar29 = puVar20;
      if (uVar28 >= uVar24) {
        puVar29 = puVar23;
      }
      puVar33 = puVar33 + (ulonglong)bVar36 * 2;
      param_3 = param_3 + (ulonglong)!bVar36 * 2;
      uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
      uVar17 = puVar29[1];
      uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
      *(int *)(puVar25 + -2) = (int)*puVar29;
      *(undefined4 *)((longlong)puVar25 + -0xc) = uVar37;
      *(int *)(puVar25 + -1) = (int)uVar17;
      *(undefined4 *)((longlong)puVar25 + -4) = uVar3;
      puVar23 = puVar23 + ((ulonglong)(uVar28 < uVar24) - 1) * 2;
      puVar20 = puVar20 + (ulonglong)(uVar28 < uVar24) * -2;
      puVar29 = puVar30 + 2;
      puVar34 = (ulonglong *)((longlong)local_50 + -1);
      puVar25 = puVar25 + -2;
    } while ((ulonglong *)((longlong)local_50 + -1) != (ulonglong *)0x0);
    if (((ulonglong)param_2 & 1) != 0) {
      bVar36 = param_3 < puVar20 + 2;
      puVar29 = puVar33;
      if (bVar36) {
        puVar29 = param_3;
      }
      uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
      uVar28 = puVar29[1];
      uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
      *(int *)(puVar30 + 2) = (int)*puVar29;
      *(undefined4 *)((longlong)puVar30 + 0x14) = uVar37;
      *(int *)(puVar30 + 3) = (int)uVar28;
      *(undefined4 *)((longlong)puVar30 + 0x1c) = uVar3;
      param_3 = param_3 + (ulonglong)bVar36 * 2;
      puVar33 = puVar33 + (ulonglong)!bVar36 * 2;
    }
    if ((param_3 == puVar20 + 2) && (puVar33 == puVar23 + 2)) {
      return;
    }
    (*(code *)PTR_panic_on_ord_violation_000c3fb0)();
  }
LAB_0008cab7:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


