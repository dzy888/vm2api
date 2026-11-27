// 001d5ea0 <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (undefined4 param_1,longlong param_2,ulonglong param_3,ulonglong *param_4,
          ulonglong param_5,undefined4 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong *puVar28;
  bool bVar29;
  undefined4 extraout_XMM0_Da;
  ulonglong auStack_320 [66];
  byte abStack_10b [67];
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined4 *local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined4 local_6c;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong *local_38;
  
  local_50 = param_7;
  local_6c = param_6;
  local_40 = param_2;
  if (param_3 < 2) {
    return;
  }
  local_a0 = (0x4000000000000000 / param_3 + 1) - (ulonglong)(0x4000000000000000U % param_3 == 0);
  local_38 = param_4;
  local_58 = param_3;
  if (param_3 < 0x1001) {
    param_3 = param_3 - (param_3 >> 1);
    local_48 = 0x40;
    if (param_3 < 0x40) {
      local_48 = param_3;
    }
  }
  else {
    local_48 = (*(code *)PTR_sqrt_approx_0021a7e0)();
    param_1 = extraout_XMM0_Da;
  }
  local_78 = local_40 + 0x50;
  local_90 = local_40 + 0x10;
  local_88 = local_40 + -0x10;
  local_98 = local_40 + -0x20;
  uVar24 = 0;
  uVar22 = 0;
  local_b8 = param_5;
  puVar18 = local_38;
  uVar25 = local_58;
  uVar13 = 1;
  if (local_58 == 0) goto LAB_001d5ff0;
LAB_001d5f80:
  lVar10 = uVar24 * 0x20;
  puVar23 = (ulonglong *)(local_40 + lVar10);
  if (uVar25 < local_48) {
LAB_001d5f98:
    if ((char)local_6c == '\0') {
      if (local_48 <= uVar25) {
        uVar25 = local_48;
      }
      local_80 = uVar25 * 2;
    }
    else {
      if (0x1f < uVar25) {
        uVar25 = 0x20;
      }
      param_1 = (*(code *)
                  PTR_<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a800
                )(param_5,puVar18,0,0);
      local_80 = (uVar25 & 0xffffffff) * 2 + 1;
      puVar18 = local_38;
    }
  }
  else {
    uVar14 = uVar25;
    if (1 < uVar25) {
      uVar16 = puVar23[6];
      if ((uVar16 < puVar23[2]) || ((uVar16 <= puVar23[2] && (puVar23[4] < *puVar23)))) {
        bVar29 = true;
        uVar14 = 2;
        bVar1 = true;
        if (uVar25 != 2) {
          puVar23 = (ulonglong *)(local_78 + lVar10);
          uVar17 = 2;
          do {
            uVar26 = *puVar23;
            bVar1 = bVar29;
            if ((uVar16 <= uVar26) &&
               ((uVar14 = uVar17, uVar16 < uVar26 || (puVar23[-6] <= puVar23[-2])))) break;
            uVar17 = uVar17 + 1;
            puVar23 = puVar23 + 4;
            uVar14 = uVar25;
            uVar16 = uVar26;
          } while (uVar25 != uVar17);
        }
      }
      else if (uVar25 == 2) {
        uVar14 = 2;
        bVar1 = false;
      }
      else {
        puVar21 = (ulonglong *)(local_78 + lVar10);
        uVar14 = 2;
        uVar17 = puVar23[4];
        do {
          uVar26 = *puVar21;
          if ((uVar26 < uVar16) ||
             ((puVar23 = puVar21 + -2, uVar26 <= uVar16 && (*puVar23 < uVar17)))) {
            bVar1 = false;
            goto LAB_001d6491;
          }
          uVar14 = uVar14 + 1;
          puVar21 = puVar21 + 4;
          uVar16 = uVar26;
          uVar17 = *puVar23;
        } while (uVar25 != uVar14);
        bVar1 = false;
        uVar14 = uVar25;
      }
LAB_001d6491:
      if (uVar14 < local_48) goto LAB_001d5f98;
      if ((bVar1) && (uVar25 = uVar14 >> 1, uVar25 != 0)) {
        puVar19 = (undefined8 *)(local_90 + lVar10);
        puVar20 = (undefined8 *)(uVar14 * 0x20 + lVar10 + local_88);
        do {
          uVar6 = puVar19[-2];
          uVar7 = puVar19[-1];
          uVar8 = puVar20[-1];
          puVar19[-2] = puVar20[-2];
          puVar19[-1] = uVar8;
          puVar20[-2] = uVar6;
          puVar20[-1] = uVar7;
          param_1 = *(undefined4 *)puVar19;
          uVar2 = *(undefined4 *)((longlong)puVar19 + 4);
          uVar3 = *(undefined4 *)(puVar19 + 1);
          uVar4 = *(undefined4 *)((longlong)puVar19 + 0xc);
          uVar6 = puVar20[1];
          *puVar19 = *puVar20;
          puVar19[1] = uVar6;
          *(undefined4 *)puVar20 = param_1;
          *(undefined4 *)((longlong)puVar20 + 4) = uVar2;
          *(undefined4 *)(puVar20 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uVar4;
          puVar19 = puVar19 + 4;
          puVar20 = puVar20 + -4;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    local_80 = uVar14 * 2 + 1;
  }
  uVar25 = ((local_80 >> 1) + uVar24 * 2) * local_a0 ^ (uVar24 * 2 - (uVar13 >> 1)) * local_a0;
  lVar10 = 0x3f;
  if (uVar25 != 0) {
    for (; uVar25 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar25 = (ulonglong)((uint)lVar10 ^ 0x3f);
  do {
    if (1 < uVar22) {
      local_a8 = (ulonglong *)(local_40 + uVar24 * 0x20);
      local_b0 = (undefined4 *)(uVar24 * 0x20 + local_98);
      local_60 = uVar25;
      local_c8 = uVar24;
      do {
        while( true ) {
          if (abStack_10b[uVar22] < (byte)uVar25) goto LAB_001d6386;
          uVar22 = uVar22 - 1;
          uVar16 = auStack_320[uVar22];
          uVar26 = uVar16 >> 1;
          uVar17 = uVar13 >> 1;
          uVar14 = uVar26 + uVar17;
          if ((param_5 < uVar14) || ((((uint)uVar16 | (uint)uVar13) & 1) != 0)) break;
          uVar13 = uVar14 * 2;
          if (uVar22 < 2) goto LAB_001d6380;
        }
        puVar23 = (ulonglong *)((uVar24 - uVar14) * 0x20 + local_40);
        local_68 = uVar22;
        if ((uVar16 & 1) == 0) {
          lVar10 = 0x3f;
          if ((uVar26 | 1) != 0) {
            for (; (uVar26 | 1) >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          param_1 = (*(code *)
                      PTR_<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a800
                    )(param_5,puVar18,((uint)lVar10 ^ 0x3f) * 2 ^ 0x7e,0);
          uVar25 = local_60;
          puVar18 = local_38;
        }
        lVar10 = local_c0;
        if ((uVar13 & 1) == 0) {
          lVar10 = 0x3f;
          if ((uVar17 | 1) != 0) {
            for (; (uVar17 | 1) >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          param_1 = (*(code *)
                      PTR_<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a800
                    )(param_5,puVar18,((uint)lVar10 ^ 0x3f) * 2 ^ 0x7e,0);
          puVar18 = local_38;
          uVar25 = local_60;
          lVar10 = local_c0;
        }
        lVar27 = uVar26 + uVar17;
        if (uVar17 != 0) {
          local_c0 = uVar26 + uVar17;
          lVar27 = local_c0;
          if (uVar26 != 0) {
            uVar13 = uVar26;
            if (uVar17 < uVar26) {
              uVar13 = uVar17;
            }
            if (uVar13 <= param_5) {
              puVar28 = puVar23 + uVar26 * 4;
              (*(code *)PTR_memcpy_00219c60)(param_1,uVar13 * 0x20);
              puVar21 = local_38 + uVar13 * 4;
              puVar18 = local_38;
              if (uVar17 < uVar26) {
                puVar11 = local_b0;
                do {
                  uVar13 = puVar21[-2];
                  puVar21 = puVar21 + -4;
                  uVar22 = puVar28[-2];
                  puVar28 = puVar28 + -4;
                  bVar1 = true;
                  puVar15 = puVar28;
                  if ((uVar22 <= uVar13) &&
                     (bVar1 = *puVar21 < *puVar28 && uVar13 <= uVar22,
                     *puVar21 >= *puVar28 || uVar13 > uVar22)) {
                    puVar15 = puVar21;
                  }
                  uVar13 = *puVar15;
                  uVar2 = *(undefined4 *)((longlong)puVar15 + 4);
                  uVar22 = puVar15[1];
                  uVar3 = *(undefined4 *)((longlong)puVar15 + 0xc);
                  uVar4 = *(undefined4 *)((longlong)puVar15 + 0x14);
                  uVar24 = puVar15[3];
                  uVar5 = *(undefined4 *)((longlong)puVar15 + 0x1c);
                  puVar11[4] = (int)puVar15[2];
                  puVar11[5] = uVar4;
                  puVar11[6] = (int)uVar24;
                  puVar11[7] = uVar5;
                  *puVar11 = (int)uVar13;
                  puVar11[1] = uVar2;
                  puVar11[2] = (int)uVar22;
                  puVar11[3] = uVar3;
                  uVar13 = (ulonglong)(bVar1 ^ 1) * 0x20;
                  puVar28 = puVar28 + (ulonglong)(bVar1 ^ 1) * 4;
                  puVar21 = puVar21 + (ulonglong)bVar1 * 4;
                } while ((puVar28 != puVar23) && (puVar11 = puVar11 + -8, puVar21 != local_38));
              }
              else {
                do {
                  if (puVar28[2] < puVar18[2]) {
                    uVar9 = 1;
                    uVar12 = 0;
                    puVar15 = puVar28;
                  }
                  else {
                    bVar1 = puVar28[2] <= puVar18[2];
                    bVar29 = *puVar28 < *puVar18;
                    puVar15 = puVar18;
                    if (bVar29 && bVar1) {
                      puVar15 = puVar28;
                    }
                    uVar12 = (uint)(!bVar29 || !bVar1);
                    uVar9 = (uint)(bVar29 && bVar1);
                  }
                  uVar13 = *puVar15;
                  uVar2 = *(undefined4 *)((longlong)puVar15 + 4);
                  uVar22 = puVar15[1];
                  uVar3 = *(undefined4 *)((longlong)puVar15 + 0xc);
                  uVar4 = *(undefined4 *)((longlong)puVar15 + 0x14);
                  uVar24 = puVar15[3];
                  uVar5 = *(undefined4 *)((longlong)puVar15 + 0x1c);
                  *(int *)(puVar23 + 2) = (int)puVar15[2];
                  *(undefined4 *)((longlong)puVar23 + 0x14) = uVar4;
                  *(int *)(puVar23 + 3) = (int)uVar24;
                  *(undefined4 *)((longlong)puVar23 + 0x1c) = uVar5;
                  *(int *)puVar23 = (int)uVar13;
                  *(undefined4 *)((longlong)puVar23 + 4) = uVar2;
                  *(int *)(puVar23 + 1) = (int)uVar22;
                  *(undefined4 *)((longlong)puVar23 + 0xc) = uVar3;
                  uVar13 = (ulonglong)(uVar12 << 5);
                  puVar18 = (ulonglong *)((longlong)puVar18 + uVar13);
                  puVar23 = puVar23 + 4;
                } while ((puVar18 != puVar21) &&
                        (puVar28 = (ulonglong *)((longlong)puVar28 + (ulonglong)(uVar9 << 5)),
                        puVar28 != local_a8));
              }
              param_1 = (*(code *)PTR_memcpy_00219c60)(uVar13,(longlong)puVar21 - (longlong)puVar18)
              ;
              puVar18 = local_38;
              uVar25 = local_60;
              param_5 = local_b8;
              lVar27 = local_c0;
              lVar10 = local_c0;
            }
          }
        }
        local_c0 = lVar10;
        uVar13 = lVar27 * 2 + 1;
        uVar22 = local_68;
        uVar24 = local_c8;
      } while (1 < local_68);
LAB_001d6380:
      uVar22 = 1;
    }
LAB_001d6386:
    auStack_320[uVar22] = uVar13;
    abStack_10b[uVar22 + 1] = (byte)uVar25;
    if (local_58 <= uVar24) {
      if ((uVar13 & 1) != 0) {
        return;
      }
      lVar10 = 0x3f;
      if ((local_58 | 1) != 0) {
        for (; (local_58 | 1) >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      (*(code *)
        PTR_<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a800
      )(param_5,puVar18,((uint)lVar10 ^ 0x3f) * 2 ^ 0x7e,0);
      return;
    }
    uVar22 = uVar22 + 1;
    uVar24 = uVar24 + (local_80 >> 1);
    uVar25 = local_58 - uVar24;
    uVar13 = local_80;
    if (uVar24 <= local_58 && uVar25 != 0) goto LAB_001d5f80;
LAB_001d5ff0:
    uVar25 = 0;
    local_80 = 1;
  } while( true );
}


