// 0073ac50 <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,int param_5,
          ulonglong *param_6,undefined8 param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  undefined4 *puVar20;
  longlong lVar21;
  bool bVar22;
  ulonglong *puVar23;
  bool bVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong *local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  int local_54;
  ulonglong *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  
  local_50 = param_6;
  if (param_2 <= &DAT_00000020) {
LAB_0073b207:
    if (param_2 < (ulonglong *)0x2) {
      return;
    }
    local_40 = param_1;
    if (param_2 + 2 <= param_4) {
      uVar29 = (ulonglong)param_2 >> 1;
      puVar15 = param_1 + uVar29 * 4;
      puVar26 = param_3 + uVar29 * 4;
      if (param_2 < &DAT_00000008) {
        uVar18 = *param_1;
        uVar13 = param_1[1];
        uVar12 = param_1[3];
        param_3[2] = param_1[2];
        param_3[3] = uVar12;
        *param_3 = uVar18;
        param_3[1] = uVar13;
        uVar18 = *puVar15;
        uVar13 = puVar15[1];
        uVar12 = puVar15[3];
        puVar26[2] = puVar15[2];
        puVar26[3] = uVar12;
        *puVar26 = uVar18;
        puVar26[1] = uVar13;
        uVar18 = 1;
      }
      else {
        shared::smallsort::sort4_stable::
        <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                  (param_1,param_3);
        shared::smallsort::sort4_stable::
        <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                  (puVar15,puVar26);
        uVar18 = 4;
      }
      if (uVar18 < uVar29) {
        lVar21 = (ulonglong)(uint)((int)uVar18 << 5) - 0x20;
        uVar13 = uVar18;
        do {
          uVar12 = local_40[uVar13 * 4];
          uVar11 = (local_40 + uVar13 * 4)[1];
          uVar2 = (local_40 + uVar13 * 4 + 2)[1];
          param_3[uVar13 * 4 + 2] = local_40[uVar13 * 4 + 2];
          (param_3 + uVar13 * 4 + 2)[1] = uVar2;
          param_3[uVar13 * 4] = uVar12;
          (param_3 + uVar13 * 4)[1] = uVar11;
          puVar25 = param_3 + uVar13 * 4 + -4;
          uVar12 = param_3[uVar13 * 4 + 2];
          uVar11 = param_3[uVar13 * 4];
          if ((uVar12 < param_3[uVar13 * 4 + -2]) ||
             ((uVar12 <= param_3[uVar13 * 4 + -2] && (uVar11 < *puVar25)))) {
            puVar28 = param_3 + uVar13 * 4;
            uVar2 = puVar28[1];
            uVar3 = puVar28[3];
            uVar4 = param_3[uVar13 * 4 + -3];
            uVar9 = param_3[uVar13 * 4 + -2];
            uVar10 = param_3[uVar13 * 4 + -1];
            *puVar28 = *puVar25;
            puVar28[1] = uVar4;
            puVar28[2] = uVar9;
            puVar28[3] = uVar10;
            if (uVar13 != 1) {
              lVar14 = lVar21;
              do {
                puVar25 = (ulonglong *)((longlong)param_3 + lVar14);
                puVar28 = (ulonglong *)((longlong)param_3 + lVar14 + -0x20);
                uVar4 = *(ulonglong *)((longlong)param_3 + lVar14 + -0x10);
                if ((uVar4 <= uVar12) && ((uVar4 < uVar12 || (*puVar28 <= uVar11)))) break;
                uVar4 = *puVar28;
                uVar9 = *(ulonglong *)((longlong)param_3 + lVar14 + -0x18);
                uVar10 = *(ulonglong *)((longlong)param_3 + lVar14 + -8);
                puVar25[2] = *(ulonglong *)((longlong)param_3 + lVar14 + -0x10);
                puVar25[3] = uVar10;
                *puVar25 = uVar4;
                puVar25[1] = uVar9;
                lVar14 = lVar14 + -0x20;
                puVar25 = param_3;
              } while (lVar14 != 0);
            }
            *puVar25 = uVar11;
            puVar25[1] = uVar2;
            puVar25[2] = uVar12;
            puVar25[3] = uVar3;
          }
          uVar13 = uVar13 + 1;
          lVar21 = lVar21 + 0x20;
          local_48 = puVar15;
        } while (uVar13 != uVar29);
      }
      if (uVar18 < (longlong)param_2 - uVar29) {
        lVar21 = (ulonglong)(uint)((int)uVar18 << 5) - 0x20;
        do {
          uVar13 = puVar15[uVar18 * 4];
          uVar12 = (puVar15 + uVar18 * 4)[1];
          uVar11 = (puVar15 + uVar18 * 4 + 2)[1];
          puVar26[uVar18 * 4 + 2] = puVar15[uVar18 * 4 + 2];
          (puVar26 + uVar18 * 4 + 2)[1] = uVar11;
          puVar26[uVar18 * 4] = uVar13;
          (puVar26 + uVar18 * 4)[1] = uVar12;
          puVar25 = puVar26 + uVar18 * 4 + -4;
          uVar13 = puVar26[uVar18 * 4 + 2];
          uVar12 = puVar26[uVar18 * 4];
          if ((uVar13 < puVar26[uVar18 * 4 + -2]) ||
             ((uVar13 <= puVar26[uVar18 * 4 + -2] && (uVar12 < *puVar25)))) {
            puVar28 = puVar26 + uVar18 * 4;
            uVar11 = puVar28[1];
            uVar2 = puVar28[3];
            uVar3 = puVar26[uVar18 * 4 + -3];
            uVar4 = puVar26[uVar18 * 4 + -2];
            uVar9 = puVar26[uVar18 * 4 + -1];
            *puVar28 = *puVar25;
            puVar28[1] = uVar3;
            puVar28[2] = uVar4;
            puVar28[3] = uVar9;
            if (uVar18 != 1) {
              lVar14 = lVar21;
              do {
                puVar25 = (ulonglong *)((longlong)puVar26 + lVar14);
                puVar28 = (ulonglong *)((longlong)puVar26 + lVar14 + -0x20);
                uVar3 = *(ulonglong *)((longlong)puVar26 + lVar14 + -0x10);
                if ((uVar3 <= uVar13) && ((uVar3 < uVar13 || (*puVar28 <= uVar12)))) break;
                uVar3 = *puVar28;
                uVar4 = *(ulonglong *)((longlong)puVar26 + lVar14 + -0x18);
                uVar9 = *(ulonglong *)((longlong)puVar26 + lVar14 + -8);
                puVar25[2] = *(ulonglong *)((longlong)puVar26 + lVar14 + -0x10);
                puVar25[3] = uVar9;
                *puVar25 = uVar3;
                puVar25[1] = uVar4;
                lVar14 = lVar14 + -0x20;
                puVar25 = puVar26;
              } while (lVar14 != 0);
            }
            *puVar25 = uVar12;
            puVar25[1] = uVar11;
            puVar25[2] = uVar13;
            puVar25[3] = uVar2;
          }
          uVar18 = uVar18 + 1;
          lVar21 = lVar21 + 0x20;
        } while (uVar18 != (longlong)param_2 - uVar29);
      }
      local_38 = (ulonglong *)((longlong)param_2 * 0x20);
      puVar25 = param_3 + (longlong)param_2 * 4;
      puVar15 = puVar26 + -4;
      puVar17 = local_40;
      puVar28 = local_40 + (longlong)param_2 * 4;
      do {
        puVar16 = puVar17;
        puVar27 = puVar25 + -4;
        uVar18 = puVar26[2];
        uVar13 = param_3[2];
        bVar22 = true;
        bVar24 = true;
        puVar17 = puVar26;
        if ((uVar13 <= uVar18) &&
           (bVar24 = *puVar26 < *param_3 && uVar18 <= uVar13,
           *puVar26 >= *param_3 || uVar18 > uVar13)) {
          puVar17 = param_3;
        }
        uVar18 = *puVar17;
        uVar13 = puVar17[1];
        uVar12 = puVar17[3];
        puVar16[2] = puVar17[2];
        puVar16[3] = uVar12;
        *puVar16 = uVar18;
        puVar16[1] = uVar13;
        uVar18 = puVar25[-2];
        uVar13 = puVar15[2];
        puVar25 = puVar15;
        if ((uVar13 <= uVar18) &&
           (bVar22 = *puVar27 < *puVar15 && uVar18 <= uVar13,
           *puVar27 >= *puVar15 || uVar18 > uVar13)) {
          puVar25 = puVar27;
        }
        puVar26 = puVar26 + (ulonglong)bVar24 * 4;
        param_3 = param_3 + (ulonglong)(bVar24 ^ 1) * 4;
        uVar18 = *puVar25;
        uVar30 = *(undefined4 *)((longlong)puVar25 + 4);
        uVar13 = puVar25[1];
        uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
        uVar7 = *(undefined4 *)((longlong)puVar25 + 0x14);
        uVar12 = puVar25[3];
        uVar8 = *(undefined4 *)((longlong)puVar25 + 0x1c);
        *(int *)(puVar28 + -2) = (int)puVar25[2];
        *(undefined4 *)((longlong)puVar28 + -0xc) = uVar7;
        *(int *)(puVar28 + -1) = (int)uVar12;
        *(undefined4 *)((longlong)puVar28 + -4) = uVar8;
        *(int *)(puVar28 + -4) = (int)uVar18;
        *(undefined4 *)((longlong)puVar28 + -0x1c) = uVar30;
        *(int *)(puVar28 + -3) = (int)uVar13;
        *(undefined4 *)((longlong)puVar28 + -0x14) = uVar6;
        puVar25 = puVar27 + (ulonglong)bVar22 * 4;
        puVar15 = puVar15 + (ulonglong)bVar22 * -4;
        uVar29 = uVar29 - 1;
        puVar17 = puVar16 + 4;
        puVar28 = puVar28 + -4;
      } while (uVar29 != 0);
      if (((ulonglong)param_2 & 1) != 0) {
        bVar22 = param_3 < puVar15 + 4;
        puVar28 = puVar26;
        if (bVar22) {
          puVar28 = param_3;
        }
        uVar29 = *puVar28;
        uVar30 = *(undefined4 *)((longlong)puVar28 + 4);
        uVar18 = puVar28[1];
        uVar6 = *(undefined4 *)((longlong)puVar28 + 0xc);
        uVar7 = *(undefined4 *)((longlong)puVar28 + 0x14);
        uVar13 = puVar28[3];
        uVar8 = *(undefined4 *)((longlong)puVar28 + 0x1c);
        *(int *)(puVar16 + 6) = (int)puVar28[2];
        *(undefined4 *)((longlong)puVar16 + 0x34) = uVar7;
        *(int *)(puVar16 + 7) = (int)uVar13;
        *(undefined4 *)((longlong)puVar16 + 0x3c) = uVar8;
        *(int *)(puVar16 + 4) = (int)uVar29;
        *(undefined4 *)((longlong)puVar16 + 0x24) = uVar30;
        *(int *)(puVar16 + 5) = (int)uVar18;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar6;
        param_3 = param_3 + (ulonglong)bVar22 * 4;
        puVar26 = puVar26 + (ulonglong)!bVar22 * 4;
      }
      if ((param_3 == puVar15 + 4) && (puVar26 == puVar25)) {
        return;
      }
      (*(code *)PTR_panic_on_ord_violation_007996f0)();
    }
LAB_0073b5dd:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_68 = param_4;
LAB_0073ac83:
  local_60 = param_1 + 4;
  local_38 = param_1;
  do {
    puVar15 = local_38;
    if (param_5 == 0) {
      drift::sort::
      <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                (local_38,param_2,param_3,param_4,1,param_7);
      return;
    }
    puVar26 = local_38 + ((ulonglong)param_2 >> 3) * 0x10;
    puVar25 = local_38 + ((ulonglong)param_2 >> 3) * 0x1c;
    local_40 = param_2;
    if (&DAT_0000003f < param_2) {
      puVar28 = (ulonglong *)
                shared::pivot::median3_rec::
                <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                          ();
    }
    else {
      uVar29 = *local_38;
      uVar18 = local_38[2];
      uVar13 = puVar26[2];
      puVar28 = local_38;
      if (uVar18 < uVar13) {
        uVar12 = *puVar25;
        uVar11 = puVar25[2];
        bVar24 = true;
        if ((uVar18 < uVar11) || ((uVar18 <= uVar11 && (uVar29 < uVar12)))) goto LAB_0073ad90;
      }
      else {
        bVar22 = uVar29 < *puVar26 && uVar18 <= uVar13;
        uVar12 = *puVar25;
        uVar11 = puVar25[2];
        if (uVar18 < uVar11) {
          bVar24 = true;
          if (bVar22) goto LAB_0073ad90;
        }
        else {
          bVar24 = bVar22;
          if (bVar22 == (uVar29 < uVar12 && uVar18 <= uVar11)) {
LAB_0073ad90:
            if ((bool)(bVar24 ^ (uVar13 < uVar11 || *puVar26 < uVar12 && uVar13 <= uVar11))) {
              puVar26 = puVar25;
            }
            puVar28 = puVar26;
          }
        }
      }
    }
    puVar26 = local_40;
    local_54 = param_5 + -1;
    puVar25 = (ulonglong *)((ulonglong)((longlong)puVar28 - (longlong)puVar15) >> 5);
    local_98 = (undefined4)*puVar28;
    uStack_94 = *(undefined4 *)((longlong)puVar28 + 4);
    uStack_90 = (undefined4)puVar28[1];
    uStack_8c = *(undefined4 *)((longlong)puVar28 + 0xc);
    local_88 = (undefined4)puVar28[2];
    uStack_84 = *(undefined4 *)((longlong)puVar28 + 0x14);
    uStack_80 = (undefined4)puVar28[3];
    uStack_7c = *(undefined4 *)((longlong)puVar28 + 0x1c);
    if (local_50 != (ulonglong *)0x0) {
      if (puVar28[2] <= local_50[2]) {
        if (puVar28[2] < local_50[2]) break;
        if (*puVar28 <= *local_50) break;
      }
    }
    if (param_4 < local_40) goto LAB_0073b5dd;
    puVar17 = param_3 + (longlong)local_40 * 4;
    param_2 = (ulonglong *)0x0;
    puVar27 = puVar15;
    puVar16 = puVar17;
    puVar19 = puVar25;
    while( true ) {
      for (; puVar27 < puVar15 + (longlong)puVar19 * 4; puVar27 = puVar27 + 4) {
        uVar29 = puVar27[2];
        uVar18 = puVar28[2];
        if (uVar29 < uVar18) {
          uVar29 = 1;
          puVar23 = param_3;
        }
        else {
          puVar23 = puVar16 + -4;
          if (*puVar27 < *puVar28 && uVar29 <= uVar18) {
            puVar23 = param_3;
          }
          uVar29 = (ulonglong)(*puVar27 < *puVar28 && uVar29 <= uVar18);
        }
        puVar16 = puVar16 + -4;
        uVar18 = *puVar27;
        uVar30 = *(undefined4 *)((longlong)puVar27 + 4);
        uVar13 = puVar27[1];
        uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
        uVar7 = *(undefined4 *)((longlong)puVar27 + 0x14);
        uVar12 = puVar27[3];
        uVar8 = *(undefined4 *)((longlong)puVar27 + 0x1c);
        puVar1 = puVar23 + (longlong)param_2 * 4 + 2;
        *(int *)puVar1 = (int)puVar27[2];
        *(undefined4 *)((longlong)puVar1 + 4) = uVar7;
        *(int *)(puVar1 + 1) = (int)uVar12;
        *(undefined4 *)((longlong)puVar1 + 0xc) = uVar8;
        puVar23 = puVar23 + (longlong)param_2 * 4;
        *(int *)puVar23 = (int)uVar18;
        *(undefined4 *)((longlong)puVar23 + 4) = uVar30;
        *(int *)(puVar23 + 1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar23 + 0xc) = uVar6;
        param_2 = (ulonglong *)(uVar29 + (longlong)param_2);
      }
      if (puVar19 == local_40) break;
      uVar29 = *puVar27;
      uVar30 = *(undefined4 *)((longlong)puVar27 + 4);
      uVar18 = puVar27[1];
      uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
      uVar7 = *(undefined4 *)((longlong)puVar27 + 0x14);
      uVar13 = puVar27[3];
      uVar8 = *(undefined4 *)((longlong)puVar27 + 0x1c);
      puVar19 = puVar16 + (longlong)param_2 * 4 + -2;
      *(int *)puVar19 = (int)puVar27[2];
      *(undefined4 *)((longlong)puVar19 + 4) = uVar7;
      *(int *)(puVar19 + 1) = (int)uVar13;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uVar8;
      puVar19 = puVar16 + (longlong)param_2 * 4 + -4;
      *(int *)puVar19 = (int)uVar29;
      *(undefined4 *)((longlong)puVar19 + 4) = uVar30;
      *(int *)(puVar19 + 1) = (int)uVar18;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uVar6;
      puVar16 = puVar16 + -4;
      puVar27 = puVar27 + 4;
      puVar19 = local_40;
    }
    local_48 = (ulonglong *)((longlong)param_2 << 5);
    local_70 = puVar25;
    uVar30 = (*(code *)PTR_memcpy_00799008)();
    param_5 = local_54;
    param_4 = local_68;
    uVar29 = (longlong)local_40 - (longlong)param_2;
    if (uVar29 != 0) {
      if (local_40 == (ulonglong *)((longlong)param_2 + 1)) {
        uVar11 = 0;
      }
      else {
        puVar20 = (undefined4 *)((longlong)local_48 + (longlong)local_60);
        puVar15 = param_3 + (longlong)puVar26 * 4 + -4;
        uVar18 = 0;
        do {
          uVar13 = *puVar15;
          uVar12 = puVar15[1];
          uVar11 = puVar15[3];
          *(ulonglong *)(puVar20 + -4) = puVar15[2];
          *(ulonglong *)(puVar20 + -2) = uVar11;
          *(ulonglong *)(puVar20 + -8) = uVar13;
          *(ulonglong *)(puVar20 + -6) = uVar12;
          uVar11 = uVar18 + 2;
          puVar26 = puVar17 + (uVar18 ^ 0x7fffffffffffffe) * 4;
          uVar30 = (undefined4)*puVar26;
          uVar6 = *(undefined4 *)((longlong)puVar26 + 4);
          uVar12 = puVar26[1];
          uVar7 = *(undefined4 *)((longlong)puVar26 + 0xc);
          uVar13 = puVar17[(uVar18 ^ 0x7fffffffffffffe) * 4 + 2];
          uVar18 = (puVar17 + (uVar18 ^ 0x7fffffffffffffe) * 4 + 2)[1];
          *puVar20 = uVar30;
          puVar20[1] = uVar6;
          puVar20[2] = (int)uVar12;
          puVar20[3] = uVar7;
          *(ulonglong *)(puVar20 + 4) = uVar13;
          *(ulonglong *)(puVar20 + 6) = uVar18;
          puVar20 = puVar20 + 0x10;
          puVar15 = puVar15 + -8;
          uVar18 = uVar11;
        } while ((uVar29 & 0xfffffffffffffffe) != uVar11);
        if ((uVar29 & 1) == 0) goto LAB_0073afbe;
      }
      puVar15 = puVar17 + ~uVar11 * 4;
      uVar30 = (undefined4)*puVar15;
      uVar6 = *(undefined4 *)((longlong)puVar15 + 4);
      uVar18 = puVar15[1];
      uVar7 = *(undefined4 *)((longlong)puVar15 + 0xc);
      uVar29 = (puVar17 + ~uVar11 * 4 + 2)[1];
      puVar15 = (ulonglong *)
                ((undefined1 *)((longlong)local_48 + (longlong)local_38) + uVar11 * 0x20 + 0x10);
      *puVar15 = puVar17[~uVar11 * 4 + 2];
      puVar15[1] = uVar29;
      puVar20 = (undefined4 *)
                ((undefined1 *)((longlong)local_48 + (longlong)local_38) + uVar11 * 0x20);
      *puVar20 = uVar30;
      puVar20[1] = uVar6;
      puVar20[2] = (int)uVar18;
      puVar20[3] = uVar7;
    }
LAB_0073afbe:
    puVar15 = local_38;
    puVar25 = local_70;
    if (param_2 == (ulonglong *)0x0) break;
    if (local_40 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar30,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796468);
      goto LAB_0073b5f8;
    }
    (*(code *)
      PTR_<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0079acc8
    )(local_68,param_3,local_54,&local_98);
    if (param_2 < &DAT_00000021) {
      param_1 = local_38;
      goto LAB_0073b207;
    }
  } while( true );
  if (param_4 < local_40) goto LAB_0073b5dd;
  local_50 = (ulonglong *)((longlong)local_40 * 0x20);
  local_48 = param_3 + (longlong)local_40 * 4;
  puVar27 = (ulonglong *)0x0;
  puVar26 = puVar15;
  puVar17 = local_48;
  while( true ) {
    for (; puVar26 < puVar15 + (longlong)puVar25 * 4; puVar26 = puVar26 + 4) {
      uVar29 = puVar26[2];
      uVar18 = puVar28[2];
      if (uVar18 < uVar29) {
        puVar16 = puVar17 + -4;
        uVar29 = 0;
      }
      else {
        puVar16 = puVar17 + -4;
        if (*puVar26 <= *puVar28 || uVar18 != uVar29) {
          puVar16 = param_3;
        }
        uVar29 = (ulonglong)(*puVar26 <= *puVar28 || uVar29 < uVar18);
      }
      puVar17 = puVar17 + -4;
      uVar13 = *puVar26;
      uVar30 = *(undefined4 *)((longlong)puVar26 + 4);
      uVar12 = puVar26[1];
      uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
      uVar18 = puVar26[3];
      puVar16[(longlong)puVar27 * 4 + 2] = puVar26[2];
      (puVar16 + (longlong)puVar27 * 4 + 2)[1] = uVar18;
      puVar16 = puVar16 + (longlong)puVar27 * 4;
      *(int *)puVar16 = (int)uVar13;
      *(undefined4 *)((longlong)puVar16 + 4) = uVar30;
      *(int *)(puVar16 + 1) = (int)uVar12;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uVar6;
      puVar27 = (ulonglong *)(uVar29 + (longlong)puVar27);
    }
    if (puVar25 == local_40) break;
    puVar17 = puVar17 + -4;
    uVar18 = *puVar26;
    uVar30 = *(undefined4 *)((longlong)puVar26 + 4);
    uVar13 = puVar26[1];
    uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
    uVar29 = puVar26[3];
    param_3[(longlong)puVar27 * 4 + 2] = puVar26[2];
    (param_3 + (longlong)puVar27 * 4 + 2)[1] = uVar29;
    puVar25 = param_3 + (longlong)puVar27 * 4;
    *(int *)puVar25 = (int)uVar18;
    *(undefined4 *)((longlong)puVar25 + 4) = uVar30;
    *(int *)(puVar25 + 1) = (int)uVar13;
    *(undefined4 *)((longlong)puVar25 + 0xc) = uVar6;
    puVar27 = (ulonglong *)((longlong)puVar27 + 1);
    puVar26 = puVar26 + 4;
    puVar25 = local_40;
  }
  (*(code *)PTR_memcpy_00799008)(puVar17,(longlong)puVar27 * 0x20);
  param_2 = (ulonglong *)((longlong)local_40 - (longlong)puVar27);
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  param_1 = local_38 + (longlong)puVar27 * 4;
  if (local_40 == (ulonglong *)((longlong)puVar27 + 1)) {
    uVar12 = 0;
  }
  else {
    puVar15 = local_38 + (longlong)puVar27 * 4 + 4;
    puVar26 = (ulonglong *)((longlong)local_50 + (longlong)(param_3 + -4));
    uVar29 = 0;
    do {
      uVar18 = *puVar26;
      uVar13 = puVar26[1];
      uVar12 = puVar26[3];
      puVar15[-2] = puVar26[2];
      puVar15[-1] = uVar12;
      puVar15[-4] = uVar18;
      puVar15[-3] = uVar13;
      uVar12 = uVar29 + 2;
      puVar25 = local_48 + (uVar29 ^ 0x7fffffffffffffe) * 4;
      uVar30 = *(undefined4 *)((longlong)puVar25 + 4);
      uVar13 = puVar25[1];
      uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
      uVar18 = local_48[(uVar29 ^ 0x7fffffffffffffe) * 4 + 2];
      uVar29 = (local_48 + (uVar29 ^ 0x7fffffffffffffe) * 4 + 2)[1];
      *(int *)puVar15 = (int)*puVar25;
      *(undefined4 *)((longlong)puVar15 + 4) = uVar30;
      *(int *)(puVar15 + 1) = (int)uVar13;
      *(undefined4 *)((longlong)puVar15 + 0xc) = uVar6;
      puVar15[2] = uVar18;
      puVar15[3] = uVar29;
      puVar15 = puVar15 + 8;
      puVar26 = puVar26 + -8;
      uVar29 = uVar12;
    } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar12);
    if (((ulonglong)param_2 & 1) == 0) goto LAB_0073b1bd;
  }
  puVar15 = local_48 + ~uVar12 * 4;
  uVar18 = *puVar15;
  uVar30 = *(undefined4 *)((longlong)puVar15 + 4);
  uVar13 = puVar15[1];
  uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
  uVar29 = (local_48 + ~uVar12 * 4 + 2)[1];
  param_1[uVar12 * 4 + 2] = local_48[~uVar12 * 4 + 2];
  (param_1 + uVar12 * 4 + 2)[1] = uVar29;
  puVar15 = param_1 + uVar12 * 4;
  *(int *)puVar15 = (int)uVar18;
  *(undefined4 *)((longlong)puVar15 + 4) = uVar30;
  *(int *)(puVar15 + 1) = (int)uVar13;
  *(undefined4 *)((longlong)puVar15 + 0xc) = uVar6;
LAB_0073b1bd:
  if (local_40 < puVar27) {
LAB_0073b5f8:
    uVar30 = (*(code *)PTR_slice_index_fail_007993c8)
                       (&PTR_s__rustc_48a229ceaefd4985c50990b14_00796480);
    (*(code *)PTR_memcpy_00799008)(uVar30,local_38);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_50 = (ulonglong *)0x0;
  param_5 = local_54;
  if (param_2 < &DAT_00000021) goto LAB_0073b207;
  goto LAB_0073ac83;
}


