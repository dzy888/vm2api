// 000884c0 <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<addr2line[f7adfda4b3430143]::function::FunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
          (longlong param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4,
          undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
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
  longlong local_48;
  ulonglong *local_40;
  ulonglong local_38;
  
  local_50 = param_6;
  local_6c = param_5;
  local_48 = param_1;
  if (param_2 < 2) {
    return;
  }
  local_a0 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  local_40 = param_3;
  local_58 = param_2;
  if (param_2 < 0x1001) {
    param_2 = param_2 - (param_2 >> 1);
    local_38 = 0x40;
    if (param_2 < 0x40) {
      local_38 = param_2;
    }
  }
  else {
    local_38 = (*(code *)PTR_sqrt_approx_000c4188)();
  }
  local_78 = local_48 + 0x30;
  local_90 = local_48 + 0x10;
  local_88 = local_48 + -8;
  local_98 = local_48 + -0x18;
  uVar22 = 1;
  uVar24 = 0;
  uVar21 = 0;
  local_b8 = param_4;
  puVar10 = local_40;
  uVar19 = local_58;
  if (local_58 != 0) goto LAB_000885c0;
LAB_000885a0:
  uVar12 = 0;
  uVar19 = 1;
  uVar6 = uVar22;
  do {
    uVar22 = uVar19;
    if (1 < uVar21) {
      local_a8 = (ulonglong *)(local_48 + uVar24 * 0x18);
      local_b0 = (undefined4 *)(uVar24 * 0x18 + local_98);
      local_60 = uVar22;
      local_c8 = uVar24;
      local_80 = uVar12;
      do {
        while( true ) {
          if (abStack_10b[uVar21] < (byte)uVar12) goto LAB_00088956;
          uVar21 = uVar21 - 1;
          uVar18 = auStack_320[uVar21];
          uVar25 = uVar18 >> 1;
          uVar11 = uVar6 >> 1;
          uVar19 = uVar25 + uVar11;
          if ((param_4 < uVar19) || ((((uint)uVar18 | (uint)uVar6) & 1) != 0)) break;
          uVar6 = uVar19 * 2;
          if (uVar21 < 2) goto LAB_00088950;
        }
        puVar14 = (ulonglong *)(local_48 + (uVar24 - uVar19) * 0x18);
        local_68 = uVar21;
        if ((uVar18 & 1) == 0) {
          lVar9 = 0x3f;
          if ((uVar25 | 1) != 0) {
            for (; (uVar25 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          (*(code *)
            PTR_<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>_000c41a0
          )(param_4,puVar10,((uint)lVar9 ^ 0x3f) * 2 ^ 0x7e,0);
          puVar10 = local_40;
          uVar22 = local_60;
        }
        lVar9 = local_c0;
        if ((uVar6 & 1) == 0) {
          lVar9 = 0x3f;
          if ((uVar11 | 1) != 0) {
            for (; (uVar11 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          (*(code *)
            PTR_<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>_000c41a0
          )(param_4,puVar10,((uint)lVar9 ^ 0x3f) * 2 ^ 0x7e,0);
          lVar9 = local_c0;
          uVar22 = local_60;
          puVar10 = local_40;
        }
        lVar16 = uVar25 + uVar11;
        if (uVar11 != 0) {
          local_c0 = uVar25 + uVar11;
          lVar16 = local_c0;
          if (uVar25 != 0) {
            uVar19 = uVar25;
            if (uVar11 < uVar25) {
              uVar19 = uVar11;
            }
            if (uVar19 <= param_4) {
              puVar10 = puVar14 + uVar25 * 3;
              (*(code *)PTR_memcpy_000c3aa8)(uVar25 * 3,uVar19 * 0x18);
              puVar23 = local_40 + uVar19 * 3;
              puVar13 = local_40;
              if (uVar11 < uVar25) {
                puVar7 = local_b0;
                do {
                  bVar26 = puVar23[-3] < puVar10[-3];
                  puVar17 = puVar23;
                  if (bVar26) {
                    puVar17 = puVar10;
                  }
                  *(ulonglong *)(puVar7 + 4) = puVar17[-1];
                  uVar2 = *(undefined4 *)((longlong)puVar17 + -0x14);
                  uVar19 = puVar17[-2];
                  uVar3 = *(undefined4 *)((longlong)puVar17 + -0xc);
                  *puVar7 = (int)puVar17[-3];
                  puVar7[1] = uVar2;
                  puVar7[2] = (int)uVar19;
                  puVar7[3] = uVar3;
                  puVar10 = puVar10 + (ulonglong)!bVar26 * 3 + -3;
                  lVar9 = (ulonglong)bVar26 * 3;
                  puVar23 = puVar23 + (ulonglong)bVar26 * 3 + -3;
                } while ((puVar10 != puVar14) && (puVar7 = puVar7 + -6, puVar23 != local_40));
              }
              else {
                do {
                  bVar26 = *puVar10 < *puVar13;
                  lVar9 = CONCAT71((int7)(*puVar10 >> 8),bVar26);
                  puVar17 = puVar13;
                  if (bVar26) {
                    puVar17 = puVar10;
                  }
                  puVar14[2] = puVar17[2];
                  uVar2 = *(undefined4 *)((longlong)puVar17 + 4);
                  uVar19 = puVar17[1];
                  uVar3 = *(undefined4 *)((longlong)puVar17 + 0xc);
                  *(int *)puVar14 = (int)*puVar17;
                  *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
                  *(int *)(puVar14 + 1) = (int)uVar19;
                  *(undefined4 *)((longlong)puVar14 + 0xc) = uVar3;
                  puVar13 = puVar13 + (ulonglong)!bVar26 * 3;
                  puVar14 = puVar14 + 3;
                } while ((puVar13 != puVar23) &&
                        (puVar10 = puVar10 + (ulonglong)bVar26 * 3, puVar10 != local_a8));
              }
              (*(code *)PTR_memcpy_000c3aa8)(lVar9,(longlong)puVar23 - (longlong)puVar13);
              puVar10 = local_40;
              lVar16 = local_c0;
              uVar22 = local_60;
              param_4 = local_b8;
              lVar9 = local_c0;
            }
          }
        }
        local_c0 = lVar9;
        uVar6 = lVar16 * 2 + 1;
        uVar12 = local_80;
        uVar21 = local_68;
        uVar24 = local_c8;
      } while (1 < local_68);
LAB_00088950:
      uVar21 = 1;
    }
LAB_00088956:
    auStack_320[uVar21] = uVar6;
    abStack_10b[uVar21 + 1] = (byte)uVar12;
    if (local_58 <= uVar24) {
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar9 = 0x3f;
      if ((local_58 | 1) != 0) {
        for (; (local_58 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      (*(code *)
        PTR_<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>_000c41a0
      )(param_4,puVar10,((uint)lVar9 ^ 0x3f) * 2 ^ 0x7e,0);
      return;
    }
    uVar21 = uVar21 + 1;
    uVar24 = uVar24 + (uVar22 >> 1);
    uVar19 = local_58 - uVar24;
    if (local_58 < uVar24 || uVar19 == 0) goto LAB_000885a0;
LAB_000885c0:
    puVar14 = (ulonglong *)(local_48 + uVar24 * 0x18);
    if (uVar19 < local_38) {
LAB_000885d2:
      if ((char)local_6c != '\0') {
        if (0x1f < uVar19) {
          uVar19 = 0x20;
        }
        (*(code *)
          PTR_<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>_000c41a0
        )(param_4,puVar10,0,0);
        uVar8 = uVar19 & 0xffffffff;
        puVar10 = local_40;
        goto LAB_0008862d;
      }
      if (local_38 <= uVar19) {
        uVar19 = local_38;
      }
      uVar19 = uVar19 * 2;
    }
    else {
      if (uVar19 < 2) {
        uVar8 = uVar19;
      }
      else {
        uVar6 = *puVar14;
        uVar12 = puVar14[3];
        if (uVar12 < uVar6) {
          if (uVar19 != 2) {
            puVar14 = (ulonglong *)(local_78 + uVar24 * 0x18);
            uVar11 = 2;
            uVar18 = uVar12;
            do {
              uVar25 = *puVar14;
              uVar8 = uVar11;
              if (uVar18 <= uVar25) break;
              uVar11 = uVar11 + 1;
              puVar14 = puVar14 + 3;
              uVar18 = uVar25;
              uVar8 = uVar19;
            } while (uVar19 != uVar11);
            goto joined_r0x00088a60;
          }
          if (2 < local_38) goto LAB_000885d2;
          uVar8 = 2;
          uVar19 = 1;
LAB_00088a7b:
          puVar20 = (undefined8 *)(local_90 + uVar24 * 0x18);
          puVar15 = (undefined8 *)(uVar24 * 0x18 + uVar8 * 0x18 + local_88);
          do {
            uVar2 = *(undefined4 *)(puVar20 + -2);
            uVar3 = *(undefined4 *)((longlong)puVar20 + -0xc);
            uVar4 = *(undefined4 *)(puVar20 + -1);
            uVar5 = *(undefined4 *)((longlong)puVar20 + -4);
            uVar1 = puVar15[-1];
            puVar20[-2] = puVar15[-2];
            puVar20[-1] = uVar1;
            *(undefined4 *)(puVar15 + -2) = uVar2;
            *(undefined4 *)((longlong)puVar15 + -0xc) = uVar3;
            *(undefined4 *)(puVar15 + -1) = uVar4;
            *(undefined4 *)((longlong)puVar15 + -4) = uVar5;
            uVar1 = *puVar20;
            *puVar20 = *puVar15;
            *puVar15 = uVar1;
            puVar20 = puVar20 + 3;
            puVar15 = puVar15 + -3;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        else if (uVar19 == 2) {
          uVar8 = 2;
          if (2 < local_38) goto LAB_000885d2;
        }
        else {
          puVar14 = (ulonglong *)(local_78 + uVar24 * 0x18);
          uVar11 = 2;
          uVar18 = uVar12;
          do {
            uVar25 = *puVar14;
            uVar8 = uVar11;
            if (uVar25 < uVar18) break;
            uVar11 = uVar11 + 1;
            puVar14 = puVar14 + 3;
            uVar18 = uVar25;
            uVar8 = uVar19;
          } while (uVar19 != uVar11);
joined_r0x00088a60:
          if (uVar8 < local_38) goto LAB_000885d2;
          if ((uVar12 < uVar6) && (uVar19 = uVar8 >> 1, uVar19 != 0)) goto LAB_00088a7b;
        }
      }
LAB_0008862d:
      uVar19 = uVar8 * 2 + 1;
    }
    uVar6 = ((uVar19 >> 1) + uVar24 * 2) * local_a0 ^ (uVar24 * 2 - (uVar22 >> 1)) * local_a0;
    lVar9 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (ulonglong)((uint)lVar9 ^ 0x3f);
    uVar6 = uVar22;
  } while( true );
}


