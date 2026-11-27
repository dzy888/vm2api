// 00736d70 <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<addr2line[f7adfda4b3430143]::line::LineSequence,
   <[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
          (undefined4 param_1,longlong param_2,ulonglong param_3,undefined4 *param_4,
          ulonglong param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined4 *puVar32;
  bool bVar33;
  undefined4 extraout_XMM0_Da;
  ulonglong auStack_320 [66];
  byte abStack_10b [67];
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  undefined4 *local_40;
  ulonglong local_38;
  
  local_58 = param_7;
  local_74 = param_6;
  local_50 = param_2;
  if (param_3 < 2) {
    return;
  }
  local_a0 = (0x4000000000000000 / param_3 + 1) - (ulonglong)(0x4000000000000000U % param_3 == 0);
  local_40 = param_4;
  local_60 = param_3;
  if (param_3 < 0x1001) {
    param_3 = param_3 - (param_3 >> 1);
    local_38 = 0x40;
    if (param_3 < 0x40) {
      local_38 = param_3;
    }
  }
  else {
    local_38 = (*(code *)PTR_sqrt_approx_007999c8)();
    param_1 = extraout_XMM0_Da;
  }
  local_80 = local_50 + 0x50;
  local_90 = local_50 + 0x10;
  local_88 = local_50 + -0x10;
  local_98 = local_50 + -0x20;
  uVar28 = 1;
  uVar27 = 0;
  uVar24 = 0;
  local_b8 = param_5;
  puVar16 = local_40;
  uVar19 = local_60;
  if (local_60 != 0) goto LAB_00736e70;
LAB_00736e50:
  uVar21 = 0;
  uVar19 = 1;
  uVar11 = uVar28;
  do {
    uVar28 = uVar19;
    if (1 < uVar24) {
      local_a8 = (undefined4 *)(local_50 + uVar27 * 0x20);
      local_b0 = (undefined4 *)(uVar27 * 0x20 + local_98);
      local_70 = uVar28;
      local_68 = uVar21;
      local_c8 = uVar27;
      do {
        while( true ) {
          if (abStack_10b[uVar24] < (byte)uVar21) goto LAB_00737216;
          uVar24 = uVar24 - 1;
          uVar25 = auStack_320[uVar24];
          uVar30 = uVar25 >> 1;
          uVar18 = uVar11 >> 1;
          uVar19 = uVar30 + uVar18;
          if ((param_5 < uVar19) || ((((uint)uVar25 | (uint)uVar11) & 1) != 0)) break;
          uVar11 = uVar19 * 2;
          if (uVar24 < 2) goto LAB_00737210;
        }
        puVar26 = (undefined4 *)((uVar27 - uVar19) * 0x20 + local_50);
        local_48 = uVar24;
        if ((uVar25 & 1) == 0) {
          lVar14 = 0x3f;
          if ((uVar30 | 1) != 0) {
            for (; (uVar30 | 1) >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          param_1 = (*(code *)
                      PTR_<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>_0079acb0
                    )(param_5,puVar16,((uint)lVar14 ^ 0x3f) * 2 ^ 0x7e,0);
          puVar16 = local_40;
          uVar28 = local_70;
          uVar21 = local_68;
        }
        lVar14 = local_c0;
        if ((uVar11 & 1) == 0) {
          lVar14 = 0x3f;
          if ((uVar18 | 1) != 0) {
            for (; (uVar18 | 1) >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          param_1 = (*(code *)
                      PTR_<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>_0079acb0
                    )(param_5,puVar16,((uint)lVar14 ^ 0x3f) * 2 ^ 0x7e,0);
          lVar14 = local_c0;
          uVar28 = local_70;
          uVar21 = local_68;
          puVar16 = local_40;
        }
        lVar31 = uVar30 + uVar18;
        if (uVar18 != 0) {
          local_c0 = uVar30 + uVar18;
          lVar31 = local_c0;
          if (uVar30 != 0) {
            uVar19 = uVar30;
            if (uVar18 < uVar30) {
              uVar19 = uVar18;
            }
            if (uVar19 <= param_5) {
              puVar32 = puVar26 + uVar30 * 8;
              (*(code *)PTR_memcpy_00799008)(param_1,uVar19 * 0x20);
              puVar29 = local_40 + uVar19 * 8;
              puVar16 = local_40;
              if (uVar18 < uVar30) {
                puVar12 = local_b0;
                do {
                  puVar15 = puVar32 + -8;
                  bVar33 = *(ulonglong *)(puVar29 + -4) < *(ulonglong *)(puVar32 + -4);
                  puVar17 = puVar29 + -8;
                  if (bVar33) {
                    puVar17 = puVar15;
                  }
                  uVar1 = *puVar17;
                  uVar2 = puVar17[1];
                  uVar3 = puVar17[2];
                  uVar4 = puVar17[3];
                  uVar5 = puVar17[5];
                  uVar6 = puVar17[6];
                  uVar7 = puVar17[7];
                  puVar12[4] = puVar17[4];
                  puVar12[5] = uVar5;
                  puVar12[6] = uVar6;
                  puVar12[7] = uVar7;
                  *puVar12 = uVar1;
                  puVar12[1] = uVar2;
                  puVar12[2] = uVar3;
                  puVar12[3] = uVar4;
                  puVar32 = puVar32 + (ulonglong)!bVar33 * 8 + -8;
                  puVar29 = puVar29 + (ulonglong)bVar33 * 8 + -8;
                } while ((puVar32 != puVar26) && (puVar12 = puVar12 + -8, puVar29 != local_40));
              }
              else {
                do {
                  bVar33 = *(ulonglong *)(puVar32 + 4) < *(ulonglong *)(puVar16 + 4);
                  puVar15 = (undefined4 *)CONCAT71((int7)(*(ulonglong *)(puVar32 + 4) >> 8),bVar33);
                  puVar12 = puVar16;
                  if (bVar33) {
                    puVar12 = puVar32;
                  }
                  uVar1 = *puVar12;
                  uVar2 = puVar12[1];
                  uVar3 = puVar12[2];
                  uVar4 = puVar12[3];
                  uVar5 = puVar12[5];
                  uVar6 = puVar12[6];
                  uVar7 = puVar12[7];
                  puVar26[4] = puVar12[4];
                  puVar26[5] = uVar5;
                  puVar26[6] = uVar6;
                  puVar26[7] = uVar7;
                  *puVar26 = uVar1;
                  puVar26[1] = uVar2;
                  puVar26[2] = uVar3;
                  puVar26[3] = uVar4;
                  puVar16 = puVar16 + (ulonglong)!bVar33 * 8;
                  puVar26 = puVar26 + 8;
                } while ((puVar16 != puVar29) &&
                        (puVar32 = puVar32 + (ulonglong)bVar33 * 8, puVar32 != local_a8));
              }
              param_1 = (*(code *)PTR_memcpy_00799008)
                                  (puVar15,(longlong)puVar29 - (longlong)puVar16);
              puVar16 = local_40;
              uVar28 = local_70;
              uVar21 = local_68;
              param_5 = local_b8;
              lVar31 = local_c0;
              lVar14 = local_c0;
            }
          }
        }
        local_c0 = lVar14;
        uVar11 = lVar31 * 2 + 1;
        uVar24 = local_48;
        uVar27 = local_c8;
      } while (1 < local_48);
LAB_00737210:
      uVar24 = 1;
    }
LAB_00737216:
    auStack_320[uVar24] = uVar11;
    abStack_10b[uVar24 + 1] = (byte)uVar21;
    if (local_60 <= uVar27) {
      if ((uVar11 & 1) != 0) {
        return;
      }
      lVar14 = 0x3f;
      if ((local_60 | 1) != 0) {
        for (; (local_60 | 1) >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      (*(code *)
        PTR_<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>_0079acb0
      )(param_5,puVar16,((uint)lVar14 ^ 0x3f) * 2 ^ 0x7e,0);
      return;
    }
    uVar24 = uVar24 + 1;
    uVar27 = uVar27 + (uVar28 >> 1);
    uVar19 = local_60 - uVar27;
    if (local_60 < uVar27 || uVar19 == 0) goto LAB_00736e50;
LAB_00736e70:
    lVar14 = uVar27 * 0x20;
    if (uVar19 < local_38) {
LAB_00736e85:
      if ((char)local_74 != '\0') {
        if (0x1f < uVar19) {
          uVar19 = 0x20;
        }
        param_1 = (*(code *)
                    PTR_<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>_0079acb0
                  )(param_5,puVar16,0,0);
        uVar13 = uVar19 & 0xffffffff;
        puVar16 = local_40;
        goto LAB_00736edd;
      }
      if (local_38 <= uVar19) {
        uVar19 = local_38;
      }
      uVar19 = uVar19 * 2;
    }
    else {
      if (uVar19 < 2) {
        uVar13 = uVar19;
      }
      else {
        uVar11 = *(ulonglong *)(local_50 + lVar14 + 0x10);
        uVar21 = *(ulonglong *)(local_50 + lVar14 + 0x30);
        if (uVar21 < uVar11) {
          if (uVar19 != 2) {
            local_48 = uVar24;
            puVar23 = (ulonglong *)(local_80 + lVar14);
            uVar18 = 2;
            uVar25 = uVar21;
            do {
              uVar30 = *puVar23;
              uVar13 = uVar18;
              if (uVar25 <= uVar30) break;
              uVar18 = uVar18 + 1;
              puVar23 = puVar23 + 4;
              uVar25 = uVar30;
              uVar13 = uVar19;
            } while (uVar19 != uVar18);
            goto joined_r0x0073733e;
          }
          if (2 < local_38) goto LAB_00736e85;
          uVar13 = 2;
          uVar19 = 1;
LAB_00737359:
          puVar20 = (undefined8 *)(local_90 + lVar14);
          puVar22 = (undefined8 *)(uVar13 * 0x20 + lVar14 + local_88);
          do {
            uVar8 = puVar20[-2];
            uVar9 = puVar20[-1];
            uVar10 = puVar22[-1];
            puVar20[-2] = puVar22[-2];
            puVar20[-1] = uVar10;
            puVar22[-2] = uVar8;
            puVar22[-1] = uVar9;
            param_1 = *(undefined4 *)puVar20;
            uVar1 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar2 = *(undefined4 *)(puVar20 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar8 = puVar22[1];
            *puVar20 = *puVar22;
            puVar20[1] = uVar8;
            *(undefined4 *)puVar22 = param_1;
            *(undefined4 *)((longlong)puVar22 + 4) = uVar1;
            *(undefined4 *)(puVar22 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar22 + 0xc) = uVar3;
            puVar20 = puVar20 + 4;
            puVar22 = puVar22 + -4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        else if (uVar19 == 2) {
          uVar13 = 2;
          if (2 < local_38) goto LAB_00736e85;
        }
        else {
          local_48 = uVar24;
          puVar23 = (ulonglong *)(local_80 + lVar14);
          uVar18 = 2;
          uVar25 = uVar21;
          do {
            uVar30 = *puVar23;
            uVar13 = uVar18;
            if (uVar30 < uVar25) break;
            uVar18 = uVar18 + 1;
            puVar23 = puVar23 + 4;
            uVar25 = uVar30;
            uVar13 = uVar19;
          } while (uVar19 != uVar18);
joined_r0x0073733e:
          local_48 = uVar24;
          if (uVar13 < local_38) goto LAB_00736e85;
          if ((uVar21 < uVar11) && (uVar19 = uVar13 >> 1, uVar19 != 0)) goto LAB_00737359;
        }
      }
LAB_00736edd:
      uVar19 = uVar13 * 2 + 1;
    }
    uVar11 = ((uVar19 >> 1) + uVar27 * 2) * local_a0 ^ (uVar27 * 2 - (uVar28 >> 1)) * local_a0;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar21 = (ulonglong)((uint)lVar14 ^ 0x3f);
    uVar11 = uVar28;
  } while( true );
}


