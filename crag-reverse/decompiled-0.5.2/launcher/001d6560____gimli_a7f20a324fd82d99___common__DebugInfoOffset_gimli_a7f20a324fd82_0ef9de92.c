// 001d6560 <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset),
   <[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   <addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (undefined4 param_1,longlong param_2,ulonglong param_3,ulonglong *param_4,
          ulonglong param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong *puVar20;
  bool bVar21;
  undefined4 extraout_XMM0_Da;
  ulonglong auStack_318 [66];
  byte abStack_103 [67];
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined4 *local_a8;
  ulonglong *local_a0;
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
  ulonglong local_40;
  ulonglong *local_38;
  
  local_58 = param_7;
  local_74 = param_6;
  local_50 = param_2;
  if (param_3 < 2) {
    return;
  }
  local_98 = (0x4000000000000000 / param_3 + 1) - (ulonglong)(0x4000000000000000U % param_3 == 0);
  local_38 = param_4;
  local_60 = param_3;
  if (param_3 < 0x1001) {
    param_3 = param_3 - (param_3 >> 1);
    local_40 = 0x40;
    if (param_3 < 0x40) {
      local_40 = param_3;
    }
  }
  else {
    local_40 = (*(code *)PTR_sqrt_approx_0021a7e0)();
    param_1 = extraout_XMM0_Da;
  }
  local_80 = local_50 + 0x20;
  local_90 = local_50 + 0x10;
  local_88 = local_50 + -0x10;
  uVar17 = 1;
  uVar16 = 0;
  uVar14 = 0;
  local_b0 = param_5;
  puVar8 = local_38;
  uVar11 = local_60;
  if (local_60 != 0) goto LAB_001d6650;
LAB_001d6630:
  uVar12 = 0;
  uVar11 = 1;
  uVar3 = uVar17;
  do {
    uVar17 = uVar11;
    if (1 < uVar14) {
      local_a0 = (ulonglong *)(local_50 + uVar16 * 0x10);
      local_a8 = (undefined4 *)(uVar16 * 0x10 + local_88);
      local_70 = uVar17;
      local_68 = uVar12;
      local_c0 = uVar16;
      do {
        while( true ) {
          if (abStack_103[uVar14] < (byte)uVar12) goto LAB_001d69d6;
          uVar14 = uVar14 - 1;
          uVar5 = auStack_318[uVar14];
          uVar18 = uVar5 >> 1;
          uVar10 = uVar3 >> 1;
          uVar11 = uVar18 + uVar10;
          if ((param_5 < uVar11) || ((((uint)uVar5 | (uint)uVar3) & 1) != 0)) break;
          uVar3 = uVar11 * 2;
          if (uVar14 < 2) goto LAB_001d69d0;
        }
        puVar15 = (ulonglong *)((uVar16 - uVar11) * 0x10 + local_50);
        local_48 = uVar14;
        if ((uVar5 & 1) == 0) {
          lVar6 = 0x3f;
          if ((uVar18 | 1) != 0) {
            for (; (uVar18 | 1) >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          param_1 = (*(code *)
                      PTR_<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a808
                    )(param_5,puVar8,((uint)lVar6 ^ 0x3f) * 2 ^ 0x7e,0);
          puVar8 = local_38;
          uVar17 = local_70;
          uVar12 = local_68;
        }
        lVar6 = local_b8;
        if ((uVar3 & 1) == 0) {
          lVar6 = 0x3f;
          if ((uVar10 | 1) != 0) {
            for (; (uVar10 | 1) >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          param_1 = (*(code *)
                      PTR_<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a808
                    )(param_5,puVar8,((uint)lVar6 ^ 0x3f) * 2 ^ 0x7e,0);
          lVar6 = local_b8;
          uVar17 = local_70;
          uVar12 = local_68;
          puVar8 = local_38;
        }
        lVar19 = uVar18 + uVar10;
        if (uVar10 != 0) {
          local_b8 = uVar18 + uVar10;
          lVar19 = local_b8;
          if (uVar18 != 0) {
            uVar11 = uVar18;
            if (uVar10 < uVar18) {
              uVar11 = uVar10;
            }
            if (uVar11 <= param_5) {
              puVar20 = puVar15 + uVar18 * 2;
              (*(code *)PTR_memcpy_00219c60)(param_1,uVar11 * 0x10);
              puVar13 = local_38 + uVar11 * 2;
              puVar8 = local_38;
              if (uVar10 < uVar18) {
                puVar4 = local_a8;
                do {
                  puVar7 = puVar20 + -2;
                  bVar21 = puVar13[-2] < puVar20[-2];
                  puVar9 = puVar13 + -2;
                  if (bVar21) {
                    puVar9 = puVar7;
                  }
                  uVar1 = *(undefined4 *)((longlong)puVar9 + 4);
                  uVar11 = puVar9[1];
                  uVar2 = *(undefined4 *)((longlong)puVar9 + 0xc);
                  *puVar4 = (int)*puVar9;
                  puVar4[1] = uVar1;
                  puVar4[2] = (int)uVar11;
                  puVar4[3] = uVar2;
                  puVar20 = puVar20 + (ulonglong)!bVar21 * 2 + -2;
                  puVar13 = puVar13 + (ulonglong)bVar21 * 2 + -2;
                } while ((puVar20 != puVar15) && (puVar4 = puVar4 + -4, puVar13 != local_38));
              }
              else {
                do {
                  bVar21 = *puVar20 < *puVar8;
                  puVar7 = (ulonglong *)CONCAT71((int7)(*puVar20 >> 8),bVar21);
                  puVar9 = puVar8;
                  if (bVar21) {
                    puVar9 = puVar20;
                  }
                  uVar1 = *(undefined4 *)((longlong)puVar9 + 4);
                  uVar11 = puVar9[1];
                  uVar2 = *(undefined4 *)((longlong)puVar9 + 0xc);
                  *(int *)puVar15 = (int)*puVar9;
                  *(undefined4 *)((longlong)puVar15 + 4) = uVar1;
                  *(int *)(puVar15 + 1) = (int)uVar11;
                  *(undefined4 *)((longlong)puVar15 + 0xc) = uVar2;
                  puVar8 = puVar8 + (ulonglong)!bVar21 * 2;
                  puVar15 = puVar15 + 2;
                } while ((puVar8 != puVar13) &&
                        (puVar20 = puVar20 + (ulonglong)bVar21 * 2, puVar20 != local_a0));
              }
              param_1 = (*(code *)PTR_memcpy_00219c60)(puVar7,(longlong)puVar13 - (longlong)puVar8);
              puVar8 = local_38;
              uVar17 = local_70;
              uVar12 = local_68;
              param_5 = local_b0;
              lVar19 = local_b8;
              lVar6 = local_b8;
            }
          }
        }
        local_b8 = lVar6;
        uVar3 = lVar19 * 2 + 1;
        uVar14 = local_48;
        uVar16 = local_c0;
      } while (1 < local_48);
LAB_001d69d0:
      uVar14 = 1;
    }
LAB_001d69d6:
    auStack_318[uVar14] = uVar3;
    abStack_103[uVar14 + 1] = (byte)uVar12;
    if (local_60 <= uVar16) {
      if ((uVar3 & 1) != 0) {
        return;
      }
      lVar6 = 0x3f;
      if ((local_60 | 1) != 0) {
        for (; (local_60 | 1) >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      (*(code *)
        PTR_<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a808
      )(param_5,puVar8,((uint)lVar6 ^ 0x3f) * 2 ^ 0x7e,0);
      return;
    }
    uVar14 = uVar14 + 1;
    uVar16 = uVar16 + (uVar17 >> 1);
    uVar11 = local_60 - uVar16;
    if (local_60 < uVar16 || uVar11 == 0) goto LAB_001d6630;
LAB_001d6650:
    lVar6 = uVar16 * 0x10;
    puVar15 = (ulonglong *)(local_50 + lVar6);
    if (uVar11 < local_40) {
LAB_001d6665:
      if ((char)local_74 != '\0') {
        if (0x1f < uVar11) {
          uVar11 = 0x20;
        }
        param_1 = (*(code *)
                    PTR_<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>_0021a808
                  )(param_5,puVar8,0,0);
        uVar18 = uVar11 & 0xffffffff;
        puVar8 = local_38;
        goto LAB_001d66bd;
      }
      if (local_40 <= uVar11) {
        uVar11 = local_40;
      }
      uVar11 = uVar11 * 2;
    }
    else {
      if (uVar11 < 2) {
        uVar18 = uVar11;
      }
      else {
        uVar3 = puVar15[2];
        if (uVar3 < *puVar15) {
          if (uVar11 != 2) {
            local_48 = uVar14;
            puVar13 = (ulonglong *)(local_80 + lVar6);
            uVar5 = 2;
            uVar12 = uVar3;
            do {
              uVar10 = *puVar13;
              uVar18 = uVar5;
              if (uVar12 <= uVar10) break;
              uVar5 = uVar5 + 1;
              puVar13 = puVar13 + 2;
              uVar12 = uVar10;
              uVar18 = uVar11;
            } while (uVar11 != uVar5);
            goto joined_r0x001d6afe;
          }
          if (2 < local_40) goto LAB_001d6665;
          uVar18 = 2;
          uVar11 = 1;
LAB_001d6b19:
          if (uVar11 == 1) {
            uVar3 = 0;
          }
          else {
            puVar8 = (ulonglong *)(local_90 + lVar6);
            puVar13 = (ulonglong *)(uVar18 * 0x10 + lVar6 + local_88);
            uVar3 = 0;
            do {
              uVar12 = puVar8[-2];
              uVar5 = puVar8[-1];
              uVar10 = puVar13[1];
              puVar8[-2] = *puVar13;
              puVar8[-1] = uVar10;
              *puVar13 = uVar12;
              puVar13[1] = uVar5;
              param_1 = (undefined4)*puVar8;
              uVar1 = *(undefined4 *)((longlong)puVar8 + 4);
              uVar5 = puVar8[1];
              uVar2 = *(undefined4 *)((longlong)puVar8 + 0xc);
              uVar12 = (puVar15 + uVar18 * 2 + (uVar3 ^ 0xffffffffffffffe) * 2)[1];
              *puVar8 = puVar15[uVar18 * 2 + (uVar3 ^ 0xffffffffffffffe) * 2];
              puVar8[1] = uVar12;
              puVar20 = puVar15 + uVar18 * 2 + (uVar3 ^ 0xffffffffffffffe) * 2;
              *(undefined4 *)puVar20 = param_1;
              *(undefined4 *)((longlong)puVar20 + 4) = uVar1;
              *(int *)(puVar20 + 1) = (int)uVar5;
              *(undefined4 *)((longlong)puVar20 + 0xc) = uVar2;
              uVar3 = uVar3 + 2;
              puVar8 = puVar8 + 4;
              puVar13 = puVar13 + -4;
            } while ((uVar11 & 0xfffffffffffffffe) != uVar3);
            puVar8 = local_38;
            if ((uVar11 & 1) == 0) goto LAB_001d66bd;
          }
          puVar13 = puVar15 + uVar3 * 2;
          param_1 = (undefined4)*puVar13;
          uVar1 = *(undefined4 *)((longlong)puVar13 + 4);
          uVar12 = puVar13[1];
          uVar2 = *(undefined4 *)((longlong)puVar13 + 0xc);
          uVar11 = (puVar15 + uVar18 * 2 + ~uVar3 * 2)[1];
          puVar15[uVar3 * 2] = puVar15[uVar18 * 2 + ~uVar3 * 2];
          (puVar15 + uVar3 * 2)[1] = uVar11;
          puVar15 = puVar15 + uVar18 * 2 + ~uVar3 * 2;
          *(undefined4 *)puVar15 = param_1;
          *(undefined4 *)((longlong)puVar15 + 4) = uVar1;
          *(int *)(puVar15 + 1) = (int)uVar12;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uVar2;
        }
        else if (uVar11 == 2) {
          uVar18 = 2;
          if (2 < local_40) goto LAB_001d6665;
        }
        else {
          local_48 = uVar14;
          puVar13 = (ulonglong *)(local_80 + lVar6);
          uVar5 = 2;
          uVar12 = uVar3;
          do {
            uVar10 = *puVar13;
            uVar18 = uVar5;
            if (uVar10 < uVar12) break;
            uVar5 = uVar5 + 1;
            puVar13 = puVar13 + 2;
            uVar12 = uVar10;
            uVar18 = uVar11;
          } while (uVar11 != uVar5);
joined_r0x001d6afe:
          local_48 = uVar14;
          if (uVar18 < local_40) goto LAB_001d6665;
          if ((uVar3 < *puVar15) && (uVar11 = uVar18 >> 1, uVar11 != 0)) goto LAB_001d6b19;
        }
      }
LAB_001d66bd:
      uVar11 = uVar18 * 2 + 1;
    }
    uVar3 = ((uVar11 >> 1) + uVar16 * 2) * local_98 ^ (uVar16 * 2 - (uVar17 >> 1)) * local_98;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = (ulonglong)((uint)lVar6 ^ 0x3f);
    uVar3 = uVar17;
  } while( true );
}


