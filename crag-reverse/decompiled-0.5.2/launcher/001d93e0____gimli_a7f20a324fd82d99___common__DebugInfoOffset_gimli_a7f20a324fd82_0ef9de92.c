// 001d93e0 <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

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
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  undefined4 *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  undefined1 *puVar32;
  ulonglong *puVar33;
  undefined1 *puVar34;
  bool bVar35;
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
  if (&DAT_00000020 < param_2) {
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
        if (&DAT_0000003f < param_2) {
          puVar29 = (ulonglong *)
                    shared::pivot::median3_rec::
                    <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                              (param_1,puVar29);
        }
        else {
          uVar28 = *param_1;
          uVar24 = *puVar29;
          uVar18 = param_1[((ulonglong)param_2 >> 3) * 0xe];
          if (uVar24 < uVar18 != uVar28 < uVar24) {
            puVar29 = param_1 + ((ulonglong)param_2 >> 3) * 0xe;
          }
          if (uVar28 < uVar18 != uVar28 < uVar24) {
            puVar29 = param_1;
          }
        }
        puVar33 = local_50;
        local_58 = CONCAT44(local_58._4_4_,param_5 + -1);
        uVar28 = (longlong)puVar29 - (longlong)param_1;
        local_38 = (ulonglong *)(uVar28 >> 4);
        local_78 = (undefined4)*puVar29;
        uStack_74 = *(undefined4 *)((longlong)puVar29 + 4);
        uStack_70 = (undefined4)puVar29[1];
        uStack_6c = *(undefined4 *)((longlong)puVar29 + 0xc);
        if ((local_60 != (ulonglong *)0x0) && (*puVar29 <= *local_60)) break;
        if (param_4 < local_50) goto LAB_001d9e37;
        local_48 = param_3 + (longlong)local_50 * 2;
        param_2 = (ulonglong *)0x0;
        puVar29 = param_1;
        puVar20 = local_48;
        puVar21 = local_38;
        while( true ) {
          puVar23 = (undefined1 *)0x0;
          if ((ulonglong *)0x2 < puVar21) {
            puVar23 = (undefined1 *)((longlong)puVar21 + -3);
          }
          for (; puVar29 < param_1 + (longlong)puVar23 * 2; puVar29 = puVar29 + 8) {
            bVar36 = *puVar29 < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar27 = puVar20 + -2;
            if (bVar36) {
              puVar27 = param_3;
            }
            uVar18 = (ulonglong)bVar36;
            bVar36 = puVar29[2] < *(ulonglong *)((longlong)param_1 + uVar28);
            uVar24 = puVar29[1];
            puVar25 = puVar20 + -4;
            if (bVar36) {
              puVar25 = param_3;
            }
            puVar27[(longlong)param_2 * 2] = *puVar29;
            (puVar27 + (longlong)param_2 * 2)[1] = uVar24;
            uVar24 = puVar29[3];
            puVar34 = (undefined1 *)((longlong)param_2 + bVar36 + uVar18);
            puVar25[(longlong)((longlong)param_2 + uVar18) * 2] = puVar29[2];
            (puVar25 + (longlong)((longlong)param_2 + uVar18) * 2)[1] = uVar24;
            bVar36 = puVar29[4] < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar27 = puVar20 + -6;
            if (bVar36) {
              puVar27 = param_3;
            }
            uVar24 = puVar29[5];
            puVar27[(longlong)puVar34 * 2] = puVar29[4];
            (puVar27 + (longlong)puVar34 * 2)[1] = uVar24;
            puVar20 = puVar20 + -8;
            bVar35 = puVar29[6] < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar27 = puVar20;
            if (bVar35) {
              puVar27 = param_3;
            }
            uVar37 = *(undefined4 *)((longlong)puVar29 + 0x34);
            uVar24 = puVar29[7];
            uVar3 = *(undefined4 *)((longlong)puVar29 + 0x3c);
            puVar27 = puVar27 + (longlong)(puVar34 + bVar36) * 2;
            *(int *)puVar27 = (int)puVar29[6];
            *(undefined4 *)((longlong)puVar27 + 4) = uVar37;
            *(int *)(puVar27 + 1) = (int)uVar24;
            *(undefined4 *)((longlong)puVar27 + 0xc) = uVar3;
            param_2 = (ulonglong *)(puVar34 + (ulonglong)bVar35 + (ulonglong)bVar36);
          }
          for (; puVar29 < param_1 + (longlong)puVar21 * 2; puVar29 = puVar29 + 2) {
            puVar20 = puVar20 + -2;
            bVar36 = *puVar29 < *(ulonglong *)((longlong)param_1 + uVar28);
            puVar27 = puVar20;
            if (bVar36) {
              puVar27 = param_3;
            }
            uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
            uVar24 = puVar29[1];
            uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
            puVar27 = puVar27 + (longlong)param_2 * 2;
            *(int *)puVar27 = (int)*puVar29;
            *(undefined4 *)((longlong)puVar27 + 4) = uVar37;
            *(int *)(puVar27 + 1) = (int)uVar24;
            *(undefined4 *)((longlong)puVar27 + 0xc) = uVar3;
            param_2 = (ulonglong *)((longlong)param_2 + (ulonglong)bVar36);
          }
          if (puVar21 == local_50) break;
          uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
          uVar24 = puVar29[1];
          uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
          puVar21 = puVar20 + (longlong)param_2 * 2 + -2;
          *(int *)puVar21 = (int)*puVar29;
          *(undefined4 *)((longlong)puVar21 + 4) = uVar37;
          *(int *)(puVar21 + 1) = (int)uVar24;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uVar3;
          puVar20 = puVar20 + -2;
          puVar29 = puVar29 + 2;
          puVar21 = local_50;
        }
        local_40 = (ulonglong *)((longlong)param_2 << 4);
        uVar37 = (*(code *)PTR_memcpy_00219c60)();
        param_4 = local_68;
        uVar24 = (longlong)local_50 - (longlong)param_2;
        if (uVar24 != 0) {
          if (local_50 == (ulonglong *)((longlong)param_2 + 1)) {
            uVar19 = 0;
            puVar29 = param_3 + (longlong)puVar33 * 2;
          }
          else {
            puVar22 = (undefined4 *)((longlong)local_40 + (longlong)(param_1 + 2));
            puVar29 = param_3 + (longlong)puVar33 * 2 + -2;
            uVar18 = 0;
            do {
              uVar19 = puVar29[1];
              *(ulonglong *)(puVar22 + -4) = *puVar29;
              *(ulonglong *)(puVar22 + -2) = uVar19;
              uVar19 = uVar18 + 2;
              puVar33 = local_48 + (uVar18 ^ 0xffffffffffffffe) * 2;
              uVar37 = (undefined4)*puVar33;
              uVar3 = *(undefined4 *)((longlong)puVar33 + 4);
              uVar18 = puVar33[1];
              uVar4 = *(undefined4 *)((longlong)puVar33 + 0xc);
              *puVar22 = uVar37;
              puVar22[1] = uVar3;
              puVar22[2] = (int)uVar18;
              puVar22[3] = uVar4;
              puVar22 = puVar22 + 8;
              puVar29 = puVar29 + -4;
              uVar18 = uVar19;
            } while ((uVar24 & 0xfffffffffffffffe) != uVar19);
            puVar29 = local_48;
            if ((uVar24 & 1) == 0) goto LAB_001d9767;
          }
          puVar29 = puVar29 + ~uVar19 * 2;
          uVar37 = (undefined4)*puVar29;
          uVar3 = *(undefined4 *)((longlong)puVar29 + 4);
          uVar24 = puVar29[1];
          uVar4 = *(undefined4 *)((longlong)puVar29 + 0xc);
          puVar22 = (undefined4 *)
                    ((undefined1 *)((longlong)local_40 + (longlong)param_1) + uVar19 * 0x10);
          *puVar22 = uVar37;
          puVar22[1] = uVar3;
          puVar22[2] = (int)uVar24;
          puVar22[3] = uVar4;
        }
LAB_001d9767:
        if (param_2 == (ulonglong *)0x0) break;
        if (local_50 < param_2) {
          (*(code *)PTR_panic_fmt_0021a010)(uVar37,&PTR_s__rustc_48a229ceaefd4985c50990b14_002175d8)
          ;
          goto LAB_001d9e52;
        }
        param_5 = (int)local_58;
        (*(code *)
          PTR_<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a808
        )(local_68,param_3,(int)local_58,&local_78);
        if (param_2 < &DAT_00000021) goto LAB_001d9407;
      }
      if (param_4 < local_50) goto LAB_001d9e37;
      local_40 = (ulonglong *)((longlong)local_50 * 0x10);
      local_48 = param_3 + (longlong)local_50 * 2;
      puVar20 = (ulonglong *)0x0;
      puVar29 = param_1;
      puVar33 = local_48;
      puVar21 = local_38;
      while( true ) {
        puVar23 = (undefined1 *)0x0;
        if ((ulonglong *)0x2 < puVar21) {
          puVar23 = (undefined1 *)((longlong)puVar21 + -3);
        }
        for (; puVar29 < param_1 + (longlong)puVar23 * 2; puVar29 = puVar29 + 8) {
          bVar36 = *puVar29 <= *(ulonglong *)((longlong)param_1 + uVar28);
          puVar27 = puVar33 + -2;
          if (bVar36) {
            puVar27 = param_3;
          }
          puVar34 = (undefined1 *)((longlong)puVar20 + (ulonglong)bVar36);
          bVar36 = puVar29[2] <= *(ulonglong *)((longlong)param_1 + uVar28);
          uVar24 = puVar29[1];
          puVar25 = puVar33 + -4;
          if (bVar36) {
            puVar25 = param_3;
          }
          puVar27[(longlong)puVar20 * 2] = *puVar29;
          (puVar27 + (longlong)puVar20 * 2)[1] = uVar24;
          puVar32 = puVar34 + bVar36;
          bVar36 = puVar29[4] <= *(ulonglong *)((longlong)param_1 + uVar28);
          uVar24 = puVar29[3];
          puVar20 = puVar33 + -6;
          if (bVar36) {
            puVar20 = param_3;
          }
          puVar25[(longlong)puVar34 * 2] = puVar29[2];
          (puVar25 + (longlong)puVar34 * 2)[1] = uVar24;
          uVar24 = puVar29[5];
          puVar20[(longlong)puVar32 * 2] = puVar29[4];
          (puVar20 + (longlong)puVar32 * 2)[1] = uVar24;
          puVar33 = puVar33 + -8;
          bVar35 = puVar29[6] <= *(ulonglong *)((longlong)param_1 + uVar28);
          puVar20 = puVar33;
          if (bVar35) {
            puVar20 = param_3;
          }
          uVar37 = *(undefined4 *)((longlong)puVar29 + 0x34);
          uVar24 = puVar29[7];
          uVar3 = *(undefined4 *)((longlong)puVar29 + 0x3c);
          puVar20 = puVar20 + (longlong)(puVar32 + bVar36) * 2;
          *(int *)puVar20 = (int)puVar29[6];
          *(undefined4 *)((longlong)puVar20 + 4) = uVar37;
          *(int *)(puVar20 + 1) = (int)uVar24;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uVar3;
          puVar20 = (ulonglong *)(puVar32 + bVar36 + bVar35);
        }
        for (; puVar29 < param_1 + (longlong)puVar21 * 2; puVar29 = puVar29 + 2) {
          puVar33 = puVar33 + -2;
          bVar36 = *puVar29 <= *(ulonglong *)((longlong)param_1 + uVar28);
          puVar27 = puVar33;
          if (bVar36) {
            puVar27 = param_3;
          }
          uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
          uVar24 = puVar29[1];
          uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
          puVar27 = puVar27 + (longlong)puVar20 * 2;
          *(int *)puVar27 = (int)*puVar29;
          *(undefined4 *)((longlong)puVar27 + 4) = uVar37;
          *(int *)(puVar27 + 1) = (int)uVar24;
          *(undefined4 *)((longlong)puVar27 + 0xc) = uVar3;
          puVar20 = (ulonglong *)((longlong)puVar20 + (ulonglong)bVar36);
        }
        if (puVar21 == local_50) break;
        puVar33 = puVar33 + -2;
        uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
        uVar24 = puVar29[1];
        uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
        puVar21 = param_3 + (longlong)puVar20 * 2;
        *(int *)puVar21 = (int)*puVar29;
        *(undefined4 *)((longlong)puVar21 + 4) = uVar37;
        *(int *)(puVar21 + 1) = (int)uVar24;
        *(undefined4 *)((longlong)puVar21 + 0xc) = uVar3;
        puVar20 = (ulonglong *)((longlong)puVar20 + 1);
        puVar29 = puVar29 + 2;
        puVar21 = local_50;
      }
      (*(code *)PTR_memcpy_00219c60)(puVar33,(longlong)puVar20 * 0x10);
      param_2 = (ulonglong *)((longlong)local_50 - (longlong)puVar20);
      if (param_2 == (ulonglong *)0x0) {
        return;
      }
      local_38 = param_1 + (longlong)puVar20 * 2;
      if (local_50 == (ulonglong *)((longlong)puVar20 + 1)) {
        uVar24 = 0;
LAB_001d99d3:
        puVar29 = local_48 + ~uVar24 * 2;
        uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
        uVar28 = puVar29[1];
        uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
        puVar33 = local_38 + uVar24 * 2;
        *(int *)puVar33 = (int)*puVar29;
        *(undefined4 *)((longlong)puVar33 + 4) = uVar37;
        *(int *)(puVar33 + 1) = (int)uVar28;
        *(undefined4 *)((longlong)puVar33 + 0xc) = uVar3;
      }
      else {
        param_1 = param_1 + (longlong)puVar20 * 2 + 2;
        puVar29 = (ulonglong *)((longlong)local_40 + (longlong)(param_3 + -2));
        uVar28 = 0;
        do {
          uVar24 = puVar29[1];
          param_1[-2] = *puVar29;
          param_1[-1] = uVar24;
          uVar24 = uVar28 + 2;
          puVar33 = local_48 + (uVar28 ^ 0xffffffffffffffe) * 2;
          uVar37 = *(undefined4 *)((longlong)puVar33 + 4);
          uVar28 = puVar33[1];
          uVar3 = *(undefined4 *)((longlong)puVar33 + 0xc);
          *(int *)param_1 = (int)*puVar33;
          *(undefined4 *)((longlong)param_1 + 4) = uVar37;
          *(int *)(param_1 + 1) = (int)uVar28;
          *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          param_1 = param_1 + 4;
          puVar29 = puVar29 + -4;
          uVar28 = uVar24;
        } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar24);
        if (((ulonglong)param_2 & 1) != 0) goto LAB_001d99d3;
      }
      if (local_50 < puVar20) {
LAB_001d9e52:
        uVar37 = (*(code *)PTR_slice_index_fail_00219d80)
                           (&PTR_s__rustc_48a229ceaefd4985c50990b14_002175f0);
        (*(code *)PTR_memcpy_00219c60)(uVar37,local_58);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      local_60 = (ulonglong *)0x0;
      param_4 = local_68;
      param_1 = local_38;
      param_5 = (int)local_58;
    } while (&DAT_00000020 < param_2);
  }
  else {
LAB_001d9407:
    local_38 = param_1;
  }
  puVar29 = local_38;
  if (param_2 < (ulonglong *)0x2) {
    return;
  }
  if (param_4 < param_2 + 2) goto LAB_001d9e37;
  puVar33 = (ulonglong *)((ulonglong)param_2 >> 1);
  if (param_2 < &DAT_00000010) {
    if (param_2 < &DAT_00000008) {
      uVar28 = local_38[1];
      *param_3 = *local_38;
      param_3[1] = uVar28;
      uVar28 = (local_38 + (longlong)puVar33 * 2)[1];
      param_3[(longlong)puVar33 * 2] = local_38[(longlong)puVar33 * 2];
      (param_3 + (longlong)puVar33 * 2)[1] = uVar28;
      puVar20 = (ulonglong *)0x1;
      puVar21 = (ulonglong *)((longlong)param_2 - (longlong)puVar33);
      if ((ulonglong *)0x1 < puVar33) goto LAB_001d9c09;
    }
    else {
      uVar24 = (ulonglong)(local_38[2] < *local_38);
      uVar18 = (ulonglong)(local_38[2] >= *local_38);
      local_48 = local_38 + uVar18 * 2;
      uVar19 = (ulonglong)(local_38[6] < local_38[4]);
      puVar21 = local_38 + uVar19 * 2 + 4;
      uVar26 = (ulonglong)((local_38[6] < local_38[4] ^ 3) << 4);
      uVar28 = *(ulonglong *)((longlong)local_38 + uVar26);
      puVar20 = local_48;
      if (uVar28 < local_38[uVar18 * 2]) {
        puVar20 = puVar21;
      }
      local_40 = local_38 + uVar24 * 2;
      if (local_38[uVar19 * 2 + 4] < local_38[uVar24 * 2]) {
        local_40 = puVar21;
        puVar20 = local_38 + uVar24 * 2;
      }
      puVar27 = (ulonglong *)((longlong)local_38 + uVar26);
      if (local_38[uVar19 * 2 + 4] < local_38[uVar24 * 2]) {
        puVar21 = local_48;
      }
      if (uVar28 < local_38[uVar18 * 2]) {
        puVar21 = puVar27;
      }
      else {
        local_48 = puVar27;
      }
      puVar27 = puVar21;
      if (*puVar21 < *puVar20) {
        puVar27 = puVar20;
        puVar20 = puVar21;
      }
      uVar24 = (ulonglong)(local_38[(longlong)puVar33 * 2 + 2] < local_38[(longlong)puVar33 * 2]);
      uVar18 = (ulonglong)(local_38[(longlong)puVar33 * 2 + 2] >= local_38[(longlong)puVar33 * 2]);
      puVar21 = local_38 + (longlong)puVar33 * 2 + uVar18 * 2;
      uVar19 = (ulonglong)
               (local_38[(longlong)puVar33 * 2 + 6] < local_38[(longlong)puVar33 * 2 + 4]);
      puVar30 = local_38 + (longlong)puVar33 * 2 + uVar19 * 2 + 4;
      uVar26 = (ulonglong)
               ((local_38[(longlong)puVar33 * 2 + 6] < local_38[(longlong)puVar33 * 2 + 4] ^ 3) << 4
               );
      uVar28 = *(ulonglong *)((longlong)local_38 + uVar26 + (longlong)puVar33 * 0x10);
      puVar25 = puVar21;
      if (uVar28 < local_38[(longlong)puVar33 * 2 + uVar18 * 2]) {
        puVar25 = puVar30;
      }
      puVar31 = puVar30;
      puVar16 = local_38 + (longlong)puVar33 * 2 + uVar24 * 2;
      if (local_38[(longlong)puVar33 * 2 + uVar19 * 2 + 4] <
          local_38[(longlong)puVar33 * 2 + uVar24 * 2]) {
        puVar31 = puVar21;
        puVar16 = puVar30;
        puVar25 = local_38 + (longlong)puVar33 * 2 + uVar24 * 2;
      }
      uVar24 = local_40[1];
      puVar30 = (ulonglong *)((longlong)local_38 + uVar26 + (longlong)puVar33 * 0x10);
      if (uVar28 < local_38[(longlong)puVar33 * 2 + uVar18 * 2]) {
        puVar31 = puVar30;
      }
      else {
        puVar21 = puVar30;
      }
      uVar28 = *puVar20;
      uVar18 = puVar20[1];
      uVar19 = *puVar27;
      uVar26 = puVar27[1];
      puVar20 = puVar25;
      if (*puVar31 < *puVar25) {
        puVar20 = puVar31;
      }
      uVar5 = *local_48;
      uVar6 = local_48[1];
      if (*puVar31 < *puVar25) {
        puVar31 = puVar25;
      }
      uVar7 = *puVar16;
      uVar8 = puVar16[1];
      uVar9 = *puVar20;
      uVar10 = puVar20[1];
      uVar11 = *puVar31;
      uVar12 = puVar31[1];
      uVar13 = *puVar21;
      uVar14 = puVar21[1];
      *param_3 = *local_40;
      param_3[1] = uVar24;
      param_3[2] = uVar28;
      param_3[3] = uVar18;
      param_3[4] = uVar19;
      param_3[5] = uVar26;
      param_3[6] = uVar5;
      param_3[7] = uVar6;
      param_3[(longlong)puVar33 * 2] = uVar7;
      (param_3 + (longlong)puVar33 * 2)[1] = uVar8;
      param_3[(longlong)puVar33 * 2 + 2] = uVar9;
      (param_3 + (longlong)puVar33 * 2 + 2)[1] = uVar10;
      param_3[(longlong)puVar33 * 2 + 4] = uVar11;
      (param_3 + (longlong)puVar33 * 2 + 4)[1] = uVar12;
      param_3[(longlong)puVar33 * 2 + 6] = uVar13;
      (param_3 + (longlong)puVar33 * 2 + 6)[1] = uVar14;
      puVar20 = (ulonglong *)0x4;
      puVar21 = (ulonglong *)((longlong)param_2 - (longlong)puVar33);
      if ((ulonglong *)0x4 < puVar33) {
LAB_001d9c09:
        uVar28 = (ulonglong)(uint)((int)puVar20 << 4);
        puVar27 = puVar20;
        do {
          uVar24 = (puVar29 + (longlong)puVar27 * 2)[1];
          param_3[(longlong)puVar27 * 2] = puVar29[(longlong)puVar27 * 2];
          (param_3 + (longlong)puVar27 * 2)[1] = uVar24;
          uVar24 = param_3[(longlong)puVar27 * 2];
          if (uVar24 < param_3[(longlong)puVar27 * 2 + -2]) {
            uVar18 = param_3[(longlong)puVar27 * 2 + 1];
            uVar19 = uVar28;
            do {
              puVar1 = (undefined8 *)((longlong)param_3 + (uVar19 - 0x10));
              uVar15 = puVar1[1];
              *(undefined8 *)((longlong)param_3 + uVar19) = *puVar1;
              ((undefined8 *)((longlong)param_3 + uVar19))[1] = uVar15;
              if (uVar19 == 0x10) {
                puVar25 = param_3;
                goto LAB_001d9c23;
              }
              uVar26 = uVar19 - 0x10;
              lVar17 = uVar19 - 0x20;
              uVar19 = uVar26;
            } while (uVar24 < *(ulonglong *)((longlong)param_3 + lVar17));
            puVar25 = (ulonglong *)(uVar26 + (longlong)param_3);
LAB_001d9c23:
            *puVar25 = uVar24;
            puVar25[1] = uVar18;
          }
          puVar27 = (ulonglong *)((longlong)puVar27 + 1);
          uVar28 = uVar28 + 0x10;
        } while (puVar27 != puVar33);
      }
    }
  }
  else {
    shared::smallsort::sort8_stable::
    <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
              (local_38,param_3,param_3 + (longlong)param_2 * 2);
    shared::smallsort::sort8_stable::
    <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
              (puVar29 + (longlong)puVar33 * 2,param_3 + (longlong)puVar33 * 2,
               param_3 + (longlong)param_2 * 2 + 0x10);
    puVar20 = (ulonglong *)&DAT_00000008;
    puVar21 = (ulonglong *)((longlong)param_2 - (longlong)puVar33);
    if (&DAT_00000008 < puVar33) goto LAB_001d9c09;
  }
  puVar27 = param_3 + (longlong)puVar33 * 2;
  if (puVar20 < puVar21) {
    uVar28 = (ulonglong)(uint)((int)puVar20 << 4);
    do {
      uVar24 = (puVar29 + (longlong)puVar33 * 2 + (longlong)puVar20 * 2)[1];
      puVar27[(longlong)puVar20 * 2] = puVar29[(longlong)puVar33 * 2 + (longlong)puVar20 * 2];
      (puVar27 + (longlong)puVar20 * 2)[1] = uVar24;
      uVar24 = puVar27[(longlong)puVar20 * 2];
      if (uVar24 < puVar27[(longlong)puVar20 * 2 + -2]) {
        uVar18 = puVar27[(longlong)puVar20 * 2 + 1];
        uVar19 = uVar28;
        do {
          puVar1 = (undefined8 *)((longlong)puVar27 + (uVar19 - 0x10));
          uVar15 = puVar1[1];
          *(undefined8 *)((longlong)puVar27 + uVar19) = *puVar1;
          ((undefined8 *)((longlong)puVar27 + uVar19))[1] = uVar15;
          if (uVar19 == 0x10) {
            puVar25 = puVar27;
            goto LAB_001d9ca3;
          }
          uVar26 = uVar19 - 0x10;
          lVar17 = uVar19 - 0x20;
          uVar19 = uVar26;
        } while (uVar24 < *(ulonglong *)((longlong)puVar27 + lVar17));
        puVar25 = (ulonglong *)(uVar26 + (longlong)puVar27);
LAB_001d9ca3:
        *puVar25 = uVar24;
        puVar25[1] = uVar18;
      }
      puVar20 = (ulonglong *)((longlong)puVar20 + 1);
      uVar28 = uVar28 + 0x10;
    } while (puVar20 != puVar21);
  }
  local_58 = (longlong)param_2 * 0x10;
  puVar21 = param_3 + (longlong)param_2 * 2 + -2;
  puVar20 = puVar27 + -2;
  puVar25 = puVar29 + (longlong)param_2 * 2;
  do {
    local_50 = puVar33;
    puVar30 = puVar29;
    bVar36 = *puVar27 < *param_3;
    local_48 = (ulonglong *)CONCAT71(local_48._1_7_,!bVar36);
    local_40 = (ulonglong *)CONCAT71(local_40._1_7_,bVar36);
    puVar29 = puVar27;
    if (!bVar36) {
      puVar29 = param_3;
    }
    uVar28 = puVar29[1];
    *puVar30 = *puVar29;
    puVar30[1] = uVar28;
    uVar28 = *puVar21;
    uVar24 = *puVar20;
    puVar29 = puVar20;
    if (uVar28 >= uVar24) {
      puVar29 = puVar21;
    }
    puVar27 = puVar27 + (ulonglong)bVar36 * 2;
    param_3 = param_3 + (ulonglong)!bVar36 * 2;
    uVar37 = *(undefined4 *)((longlong)puVar29 + 4);
    uVar18 = puVar29[1];
    uVar3 = *(undefined4 *)((longlong)puVar29 + 0xc);
    *(int *)(puVar25 + -2) = (int)*puVar29;
    *(undefined4 *)((longlong)puVar25 + -0xc) = uVar37;
    *(int *)(puVar25 + -1) = (int)uVar18;
    *(undefined4 *)((longlong)puVar25 + -4) = uVar3;
    puVar21 = puVar21 + ((ulonglong)(uVar28 < uVar24) - 1) * 2;
    puVar20 = puVar20 + (ulonglong)(uVar28 < uVar24) * -2;
    puVar29 = puVar30 + 2;
    puVar33 = (ulonglong *)((longlong)local_50 + -1);
    puVar25 = puVar25 + -2;
  } while ((ulonglong *)((longlong)local_50 + -1) != (ulonglong *)0x0);
  if (((ulonglong)param_2 & 1) != 0) {
    bVar36 = param_3 < puVar20 + 2;
    puVar29 = puVar27;
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
    puVar27 = puVar27 + (ulonglong)!bVar36 * 2;
  }
  if ((param_3 == puVar20 + 2) && (puVar27 == puVar21 + 2)) {
    return;
  }
  (*(code *)PTR_panic_on_ord_violation_0021a7d8)();
LAB_001d9e37:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


