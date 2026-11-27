// 0073a290 <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<addr2line[f7adfda4b3430143]::function::FunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,int param_5,
          ulonglong *param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  bool bVar23;
  undefined4 uVar24;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  
  local_40 = param_4;
  local_38 = param_6;
  if (&DAT_00000020 < param_2) {
    do {
      puVar9 = param_2;
      while( true ) {
        if (param_5 == 0) {
          drift::sort::
          <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                    (param_1,puVar9,param_3,local_40,1,param_7);
          return;
        }
        puVar10 = param_1 + ((ulonglong)puVar9 >> 3) * 0xc;
        local_48._0_4_ = param_5;
        if (&DAT_0000003f < puVar9) {
          puVar10 = (ulonglong *)
                    shared::pivot::median3_rec::
                    <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                              (param_1,puVar10);
        }
        else {
          uVar21 = *param_1;
          uVar13 = *puVar10;
          uVar14 = param_1[((ulonglong)puVar9 >> 3) * 0x15];
          if (uVar13 < uVar14 != uVar21 < uVar13) {
            puVar10 = param_1 + ((ulonglong)puVar9 >> 3) * 0x15;
          }
          if (uVar21 < uVar14 != uVar21 < uVar13) {
            puVar10 = param_1;
          }
        }
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 + -1);
        puVar20 = (ulonglong *)
                  (((ulonglong)((longlong)puVar10 - (longlong)param_1) >> 3) * -0x5555555555555555);
        local_58 = puVar10[2];
        local_68 = *puVar10;
        uStack_60 = puVar10[1];
        if ((local_38 != (ulonglong *)0x0) && (*puVar10 <= *local_38)) break;
        if (local_40 < puVar9) goto LAB_0073abf8;
        puVar12 = param_3 + (longlong)puVar9 * 3;
        param_2 = (ulonglong *)0x0;
        puVar11 = param_1;
        puVar22 = puVar20;
        while( true ) {
          for (; puVar11 < param_1 + (longlong)puVar22 * 3; puVar11 = puVar11 + 3) {
            puVar12 = puVar12 + -3;
            uVar21 = *puVar11;
            uVar13 = *puVar10;
            puVar15 = puVar12;
            if (uVar21 < uVar13) {
              puVar15 = param_3;
            }
            puVar15[(longlong)param_2 * 3 + 2] = puVar11[2];
            uVar24 = *(undefined4 *)((longlong)puVar11 + 4);
            uVar14 = puVar11[1];
            uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
            puVar15 = puVar15 + (longlong)param_2 * 3;
            *(int *)puVar15 = (int)*puVar11;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar24;
            *(int *)(puVar15 + 1) = (int)uVar14;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
            param_2 = (ulonglong *)((longlong)param_2 + (ulonglong)(uVar21 < uVar13));
          }
          if (puVar22 == puVar9) break;
          puVar12[(longlong)param_2 * 3 + -1] = puVar11[2];
          uVar24 = *(undefined4 *)((longlong)puVar11 + 4);
          uVar21 = puVar11[1];
          uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
          puVar22 = puVar12 + (longlong)param_2 * 3 + -3;
          *(int *)puVar22 = (int)*puVar11;
          *(undefined4 *)((longlong)puVar22 + 4) = uVar24;
          *(int *)(puVar22 + 1) = (int)uVar21;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
          puVar12 = puVar12 + -3;
          puVar11 = puVar11 + 3;
          puVar22 = puVar9;
        }
        local_50 = puVar20;
        uVar24 = (*(code *)PTR_memcpy_00799008)();
        uVar21 = (longlong)puVar9 - (longlong)param_2;
        if (uVar21 != 0) {
          puVar20 = param_1 + (longlong)param_2 * 3;
          if (puVar9 == (ulonglong *)((longlong)param_2 + 1)) {
            uVar14 = 0;
          }
          else {
            puVar12 = param_3 + (longlong)puVar9 * 3 + -3;
            uVar13 = 0;
            puVar11 = puVar20;
            do {
              puVar11[2] = puVar12[2];
              uVar14 = puVar12[1];
              *puVar11 = *puVar12;
              puVar11[1] = uVar14;
              uVar14 = uVar13 + 2;
              puVar22 = param_3 + (longlong)puVar9 * 3 + (uVar13 ^ 0x1ffffffffffffffe) * 3;
              uVar24 = (undefined4)*puVar22;
              uVar5 = *(undefined4 *)((longlong)puVar22 + 4);
              uVar16 = puVar22[1];
              uVar6 = *(undefined4 *)((longlong)puVar22 + 0xc);
              *(undefined4 *)(puVar11 + 3) = uVar24;
              *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar5;
              *(int *)(puVar11 + 4) = (int)uVar16;
              *(undefined4 *)((longlong)puVar11 + 0x24) = uVar6;
              puVar11[5] = param_3[(longlong)puVar9 * 3 + (uVar13 ^ 0x1ffffffffffffffe) * 3 + 2];
              puVar11 = puVar11 + 6;
              puVar12 = puVar12 + -6;
              uVar13 = uVar14;
            } while ((uVar21 & 0xfffffffffffffffe) != uVar14);
            if ((uVar21 & 1) == 0) goto LAB_0073a6f1;
          }
          puVar20[uVar14 * 3 + 2] = param_3[(longlong)puVar9 * 3 + ~uVar14 * 3 + 2];
          puVar12 = param_3 + (longlong)puVar9 * 3 + ~uVar14 * 3;
          uVar24 = (undefined4)*puVar12;
          uVar5 = *(undefined4 *)((longlong)puVar12 + 4);
          uVar21 = puVar12[1];
          uVar6 = *(undefined4 *)((longlong)puVar12 + 0xc);
          puVar20 = puVar20 + uVar14 * 3;
          *(undefined4 *)puVar20 = uVar24;
          *(undefined4 *)((longlong)puVar20 + 4) = uVar5;
          *(int *)(puVar20 + 1) = (int)uVar21;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uVar6;
        }
LAB_0073a6f1:
        puVar20 = local_50;
        if (param_2 == (ulonglong *)0x0) break;
        if (puVar9 < param_2) {
          (*(code *)PTR_panic_fmt_007991a8)(uVar24,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796468)
          ;
          goto LAB_0073ac13;
        }
        param_5 = (int)local_48;
        (*(code *)
          PTR_<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>_0079acc0
        )(local_40,param_3,(int)local_48,&local_68);
        puVar9 = param_2;
        if (param_2 < &DAT_00000021) goto LAB_0073a2bc;
      }
      if (local_40 < puVar9) goto LAB_0073abf8;
      puVar12 = param_3 + (longlong)puVar9 * 3;
      puVar22 = (ulonglong *)0x0;
      puVar11 = param_1;
      while( true ) {
        for (; puVar11 < param_1 + (longlong)puVar20 * 3; puVar11 = puVar11 + 3) {
          uVar21 = *puVar10;
          puVar12 = puVar12 + -3;
          uVar13 = *puVar11;
          puVar15 = puVar12;
          if (uVar13 <= uVar21) {
            puVar15 = param_3;
          }
          puVar15[(longlong)puVar22 * 3 + 2] = puVar11[2];
          uVar24 = *(undefined4 *)((longlong)puVar11 + 4);
          uVar14 = puVar11[1];
          uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
          puVar15 = puVar15 + (longlong)puVar22 * 3;
          *(int *)puVar15 = (int)*puVar11;
          *(undefined4 *)((longlong)puVar15 + 4) = uVar24;
          *(int *)(puVar15 + 1) = (int)uVar14;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
          puVar22 = (ulonglong *)((longlong)puVar22 + (ulonglong)(uVar13 <= uVar21));
        }
        if (puVar20 == puVar9) break;
        puVar12 = puVar12 + -3;
        param_3[(longlong)puVar22 * 3 + 2] = puVar11[2];
        uVar24 = *(undefined4 *)((longlong)puVar11 + 4);
        uVar21 = puVar11[1];
        uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
        puVar20 = param_3 + (longlong)puVar22 * 3;
        *(int *)puVar20 = (int)*puVar11;
        *(undefined4 *)((longlong)puVar20 + 4) = uVar24;
        *(int *)(puVar20 + 1) = (int)uVar21;
        *(undefined4 *)((longlong)puVar20 + 0xc) = uVar5;
        puVar22 = (ulonglong *)((longlong)puVar22 + 1);
        puVar11 = puVar11 + 3;
        puVar20 = puVar9;
      }
      local_38 = param_1;
      (*(code *)PTR_memcpy_00799008)(puVar12,(longlong)puVar22 * 0x18);
      param_2 = (ulonglong *)((longlong)puVar9 - (longlong)puVar22);
      if (param_2 == (ulonglong *)0x0) {
        return;
      }
      param_1 = param_1 + (longlong)puVar22 * 3;
      if (puVar9 == (ulonglong *)((longlong)puVar22 + 1)) {
        uVar13 = 0;
LAB_0073a8a3:
        param_1[uVar13 * 3 + 2] = param_3[(longlong)puVar9 * 3 + ~uVar13 * 3 + 2];
        puVar10 = param_3 + (longlong)puVar9 * 3 + ~uVar13 * 3;
        uVar24 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar21 = puVar10[1];
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0xc);
        param_1 = param_1 + uVar13 * 3;
        *(int *)param_1 = (int)*puVar10;
        *(undefined4 *)((longlong)param_1 + 4) = uVar24;
        *(int *)(param_1 + 1) = (int)uVar21;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
      }
      else {
        puVar10 = param_3 + (longlong)puVar9 * 3 + -3;
        uVar21 = 0;
        puVar20 = param_1;
        do {
          puVar20[2] = puVar10[2];
          uVar13 = puVar10[1];
          *puVar20 = *puVar10;
          puVar20[1] = uVar13;
          uVar13 = uVar21 + 2;
          puVar12 = param_3 + (longlong)puVar9 * 3 + (uVar21 ^ 0x1ffffffffffffffe) * 3;
          uVar24 = *(undefined4 *)((longlong)puVar12 + 4);
          uVar14 = puVar12[1];
          uVar5 = *(undefined4 *)((longlong)puVar12 + 0xc);
          *(int *)(puVar20 + 3) = (int)*puVar12;
          *(undefined4 *)((longlong)puVar20 + 0x1c) = uVar24;
          *(int *)(puVar20 + 4) = (int)uVar14;
          *(undefined4 *)((longlong)puVar20 + 0x24) = uVar5;
          puVar20[5] = param_3[(longlong)puVar9 * 3 + (uVar21 ^ 0x1ffffffffffffffe) * 3 + 2];
          puVar20 = puVar20 + 6;
          puVar10 = puVar10 + -6;
          uVar21 = uVar13;
        } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar13);
        if (((ulonglong)param_2 & 1) != 0) goto LAB_0073a8a3;
      }
      if (puVar9 < puVar22) {
LAB_0073ac13:
        uVar24 = (*(code *)PTR_slice_index_fail_007993c8)
                           (&PTR_s__rustc_48a229ceaefd4985c50990b14_00796480,puVar9);
        (*(code *)PTR_memcpy_00799008)(uVar24,(longlong)param_2 * 0x18);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      param_1 = local_38 + (longlong)puVar22 * 3;
      local_38 = (ulonglong *)0x0;
      param_5 = (int)local_48;
    } while (&DAT_00000020 < param_2);
  }
LAB_0073a2bc:
  if (param_2 < (ulonglong *)0x2) {
    return;
  }
  if (local_40 < param_2 + 2) goto LAB_0073abf8;
  uVar21 = (ulonglong)param_2 >> 1;
  if (param_2 < &DAT_00000008) {
    param_3[2] = param_1[2];
    uVar13 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar13;
    param_3[uVar21 * 3 + 2] = param_1[uVar21 * 3 + 2];
    uVar13 = (param_1 + uVar21 * 3)[1];
    param_3[uVar21 * 3] = param_1[uVar21 * 3];
    (param_3 + uVar21 * 3)[1] = uVar13;
    uVar13 = 1;
    uVar14 = (longlong)param_2 - uVar21;
    if (1 < uVar21) goto LAB_0073a94d;
  }
  else {
    uVar13 = (ulonglong)(param_1[3] >= *param_1);
    uVar14 = (ulonglong)(param_1[3] < *param_1);
    puVar9 = param_1 + 6;
    if (param_1[9] < param_1[6]) {
      puVar9 = param_1 + 9;
    }
    local_50 = param_1 + uVar13 * 3;
    puVar10 = param_1 + 9;
    if (param_1[9] < param_1[6]) {
      puVar10 = param_1 + 6;
    }
    puVar20 = local_50;
    if (*puVar10 < param_1[uVar13 * 3]) {
      puVar20 = puVar9;
    }
    puVar12 = puVar9;
    local_40 = param_1 + uVar14 * 3;
    if (*puVar9 < param_1[uVar14 * 3]) {
      puVar12 = local_50;
      local_40 = puVar9;
      puVar20 = param_1 + uVar14 * 3;
    }
    if (*puVar10 < param_1[uVar13 * 3]) {
      puVar12 = puVar10;
    }
    else {
      local_50 = puVar10;
    }
    puVar9 = puVar12;
    if (*puVar12 < *puVar20) {
      puVar9 = puVar20;
      puVar20 = puVar12;
    }
    uVar13 = (ulonglong)(param_1[uVar21 * 3 + 3] >= param_1[uVar21 * 3]);
    uVar14 = (ulonglong)(param_1[uVar21 * 3 + 3] < param_1[uVar21 * 3]);
    puVar10 = param_1 + uVar21 * 3 + uVar13 * 3;
    puVar11 = param_1 + uVar21 * 3 + 9;
    puVar12 = param_1 + uVar21 * 3 + 6;
    if (param_1[uVar21 * 3 + 9] < param_1[uVar21 * 3 + 6]) {
      puVar11 = param_1 + uVar21 * 3 + 6;
      puVar12 = param_1 + uVar21 * 3 + 9;
    }
    uVar16 = *puVar11;
    uVar13 = param_1[uVar21 * 3 + uVar13 * 3];
    puVar22 = puVar10;
    if (uVar16 < uVar13) {
      puVar22 = puVar12;
    }
    puVar19 = puVar12;
    puVar15 = param_1 + uVar21 * 3 + uVar14 * 3;
    if (*puVar12 < param_1[uVar21 * 3 + uVar14 * 3]) {
      puVar19 = puVar10;
      puVar15 = puVar12;
      puVar22 = param_1 + uVar21 * 3 + uVar14 * 3;
    }
    param_3[2] = local_40[2];
    uVar14 = local_40[1];
    *param_3 = *local_40;
    param_3[1] = uVar14;
    param_3[5] = puVar20[2];
    uVar14 = puVar20[1];
    param_3[3] = *puVar20;
    param_3[4] = uVar14;
    param_3[8] = puVar9[2];
    uVar14 = puVar9[1];
    if (uVar13 <= uVar16) {
      puVar10 = puVar11;
    }
    param_3[6] = *puVar9;
    param_3[7] = uVar14;
    if (uVar13 > uVar16) {
      puVar19 = puVar11;
    }
    param_3[0xb] = local_50[2];
    uVar13 = *puVar19;
    uVar14 = *puVar22;
    uVar16 = local_50[1];
    puVar9 = puVar22;
    if (uVar13 < uVar14) {
      puVar9 = puVar19;
    }
    param_3[9] = *local_50;
    param_3[10] = uVar16;
    if (uVar13 < uVar14) {
      puVar19 = puVar22;
    }
    param_3[uVar21 * 3 + 2] = puVar15[2];
    uVar13 = puVar15[1];
    param_3[uVar21 * 3] = *puVar15;
    (param_3 + uVar21 * 3)[1] = uVar13;
    uVar13 = *puVar9;
    uVar14 = puVar9[1];
    param_3[uVar21 * 3 + 5] = puVar9[2];
    param_3[uVar21 * 3 + 3] = uVar13;
    (param_3 + uVar21 * 3 + 3)[1] = uVar14;
    uVar13 = *puVar19;
    uVar14 = puVar19[1];
    param_3[uVar21 * 3 + 8] = puVar19[2];
    param_3[uVar21 * 3 + 6] = uVar13;
    (param_3 + uVar21 * 3 + 6)[1] = uVar14;
    uVar13 = *puVar10;
    uVar14 = puVar10[1];
    param_3[uVar21 * 3 + 0xb] = puVar10[2];
    param_3[uVar21 * 3 + 9] = uVar13;
    (param_3 + uVar21 * 3 + 9)[1] = uVar14;
    uVar13 = 4;
    uVar14 = (longlong)param_2 - uVar21;
    if (4 < uVar21) {
LAB_0073a94d:
      lVar17 = (ulonglong)(uint)((int)uVar13 * 8) * 3;
      uVar16 = uVar13;
      do {
        uVar3 = (param_1 + uVar16 * 3)[1];
        param_3[uVar16 * 3] = param_1[uVar16 * 3];
        (param_3 + uVar16 * 3)[1] = uVar3;
        param_3[uVar16 * 3 + 2] = param_1[uVar16 * 3 + 2];
        uVar3 = param_3[uVar16 * 3];
        if (uVar3 < param_3[uVar16 * 3 + -3]) {
          local_68 = param_1[uVar16 * 3 + 1];
          uStack_60 = param_1[uVar16 * 3 + 2];
          lVar18 = lVar17;
          do {
            *(undefined8 *)((longlong)param_3 + lVar18 + 0x10) =
                 *(undefined8 *)((longlong)param_3 + lVar18 + -8);
            puVar2 = (undefined8 *)((longlong)param_3 + lVar18 + -0x18);
            uVar7 = puVar2[1];
            *(undefined8 *)((longlong)param_3 + lVar18) = *puVar2;
            ((undefined8 *)((longlong)param_3 + lVar18))[1] = uVar7;
            if (lVar18 == 0x18) {
              puVar9 = param_3;
              goto LAB_0073a963;
            }
            lVar1 = lVar18 + -0x18;
            lVar8 = lVar18 + -0x30;
            lVar18 = lVar1;
          } while (uVar3 < *(ulonglong *)((longlong)param_3 + lVar8));
          puVar9 = (ulonglong *)(lVar1 + (longlong)param_3);
LAB_0073a963:
          *puVar9 = uVar3;
          puVar9[1] = local_68;
          puVar9[2] = uStack_60;
        }
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x18;
      } while (uVar16 != uVar21);
    }
  }
  puVar9 = param_3 + uVar21 * 3;
  if (uVar13 < uVar14) {
    lVar17 = (ulonglong)(uint)((int)uVar13 * 8) * 3;
    do {
      uVar16 = (param_1 + uVar21 * 3 + uVar13 * 3)[1];
      puVar9[uVar13 * 3] = param_1[uVar21 * 3 + uVar13 * 3];
      (puVar9 + uVar13 * 3)[1] = uVar16;
      puVar9[uVar13 * 3 + 2] = param_1[uVar21 * 3 + uVar13 * 3 + 2];
      uVar16 = puVar9[uVar13 * 3];
      if (uVar16 < puVar9[uVar13 * 3 + -3]) {
        local_68 = param_1[uVar21 * 3 + uVar13 * 3 + 1];
        uStack_60 = param_1[uVar21 * 3 + uVar13 * 3 + 2];
        lVar18 = lVar17;
        do {
          *(undefined8 *)((longlong)puVar9 + lVar18 + 0x10) =
               *(undefined8 *)((longlong)puVar9 + lVar18 + -8);
          puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + -0x18);
          uVar7 = puVar2[1];
          *(undefined8 *)((longlong)puVar9 + lVar18) = *puVar2;
          ((undefined8 *)((longlong)puVar9 + lVar18))[1] = uVar7;
          if (lVar18 == 0x18) {
            puVar10 = puVar9;
            goto LAB_0073aa23;
          }
          lVar1 = lVar18 + -0x18;
          lVar8 = lVar18 + -0x30;
          lVar18 = lVar1;
        } while (uVar16 < *(ulonglong *)((longlong)puVar9 + lVar8));
        puVar10 = (ulonglong *)(lVar1 + (longlong)puVar9);
LAB_0073aa23:
        *puVar10 = uVar16;
        puVar10[1] = local_68;
        puVar10[2] = uStack_60;
      }
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 0x18;
    } while (uVar13 != uVar14);
  }
  puVar20 = param_3 + (longlong)param_2 * 3 + -3;
  puVar10 = puVar9 + -3;
  puVar11 = param_1;
  puVar12 = param_1 + (longlong)param_2 * 3;
  do {
    local_48 = uVar21;
    puVar22 = puVar11;
    bVar23 = *puVar9 < *param_3;
    local_40 = (ulonglong *)CONCAT71(local_40._1_7_,!bVar23);
    local_50 = (ulonglong *)CONCAT71(local_50._1_7_,bVar23);
    puVar11 = puVar9;
    if (!bVar23) {
      puVar11 = param_3;
    }
    puVar22[2] = puVar11[2];
    uVar21 = puVar11[1];
    *puVar22 = *puVar11;
    puVar22[1] = uVar21;
    uVar21 = *puVar20;
    uVar13 = *puVar10;
    puVar11 = puVar10;
    if (uVar21 >= uVar13) {
      puVar11 = puVar20;
    }
    puVar9 = puVar9 + (ulonglong)bVar23 * 3;
    param_3 = param_3 + (ulonglong)!bVar23 * 3;
    puVar12[-1] = puVar11[2];
    uVar24 = *(undefined4 *)((longlong)puVar11 + 4);
    uVar14 = puVar11[1];
    uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
    *(int *)(puVar12 + -3) = (int)*puVar11;
    *(undefined4 *)((longlong)puVar12 + -0x14) = uVar24;
    *(int *)(puVar12 + -2) = (int)uVar14;
    *(undefined4 *)((longlong)puVar12 + -0xc) = uVar5;
    puVar20 = puVar20 + ((ulonglong)(uVar21 < uVar13) - 1) * 3;
    puVar10 = puVar10 + (ulonglong)(uVar21 < uVar13) * -3;
    puVar11 = puVar22 + 3;
    uVar21 = local_48 - 1;
    puVar12 = puVar12 + -3;
  } while (local_48 - 1 != 0);
  if (((ulonglong)param_2 & 1) != 0) {
    bVar23 = param_3 < puVar10 + 3;
    puVar12 = puVar9;
    if (bVar23) {
      puVar12 = param_3;
    }
    puVar22[5] = puVar12[2];
    uVar24 = *(undefined4 *)((longlong)puVar12 + 4);
    uVar21 = puVar12[1];
    uVar5 = *(undefined4 *)((longlong)puVar12 + 0xc);
    *(int *)(puVar22 + 3) = (int)*puVar12;
    *(undefined4 *)((longlong)puVar22 + 0x1c) = uVar24;
    *(int *)(puVar22 + 4) = (int)uVar21;
    *(undefined4 *)((longlong)puVar22 + 0x24) = uVar5;
    param_3 = param_3 + (ulonglong)bVar23 * 3;
    puVar9 = puVar9 + (ulonglong)!bVar23 * 3;
  }
  if ((param_3 == puVar10 + 3) && (puVar9 == puVar20 + 3)) {
    return;
  }
  local_38 = param_1;
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
LAB_0073abf8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


