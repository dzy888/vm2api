// 000af7b8 next

/* WARNING: Switch with 1 destination removed at 0x000afab4 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[c0acaeba6ab4c2e0]::iter::sources::from_fn::FromFn<<rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_str_chars::{closure#2}>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::iter::sources::from_fn::FromFn<<rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_str_chars::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(longlong *param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  qword *pqVar8;
  uint uVar9;
  longlong lVar10;
  byte bVar11;
  bool bVar12;
  char local_78;
  byte *local_70;
  longlong local_68;
  longlong local_28;
  byte local_1b [3];
  
  uVar3 = param_1[4];
  lVar5 = param_1[1] - uVar3;
  if ((ulonglong)param_1[1] < uVar3) {
    return 0xfffffffe;
  }
  pbVar6 = (byte *)*param_1;
  *param_1 = (longlong)(pbVar6 + uVar3);
  param_1[1] = lVar5;
  if (uVar3 == 2) {
    bVar11 = *pbVar6;
    uVar4 = bVar11 - 0x30;
    if (0x39 < bVar11) {
      uVar4 = (bVar11 - 0x41 & 0xffffffdf) + 10;
    }
    if (uVar4 < 0x10) {
      bVar11 = pbVar6[1];
      uVar9 = bVar11 - 0x30;
      if (0x39 < bVar11) {
        uVar9 = (bVar11 - 0x41 & 0xffffffdf) + 10;
      }
      if (uVar9 < 0x10) {
        bVar11 = (byte)uVar9 | (char)uVar4 << 4;
        if ((char)bVar11 < '\0') {
          if (bVar11 < 0xc0) {
            return 0xffffffff;
          }
          local_28 = 2;
          if (((0xdf < bVar11) && (local_28 = 3, 0xef < bVar11)) && (local_28 = 4, 0xf7 < bVar11)) {
            return 0xffffffff;
          }
          pbVar2 = local_1b;
          local_1b[0] = 0;
          local_1b[1] = 0;
          local_1b[2] = 0;
          lVar10 = 0;
          pbVar6 = pbVar6 + 2;
          do {
            if ((ulonglong)(lVar5 + lVar10) < 2) {
              return 0xffffffff;
            }
            *param_1 = (longlong)(pbVar6 + 2);
            param_1[1] = lVar5 + lVar10 + -2;
            bVar11 = *pbVar6;
            uVar4 = bVar11 - 0x30;
            if (0x39 < bVar11) {
              uVar4 = (bVar11 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar4) goto LAB_000afa05;
            bVar11 = pbVar6[1];
            uVar9 = bVar11 - 0x30;
            if (0x39 < bVar11) {
              uVar9 = (bVar11 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar9) goto LAB_000afa05;
            *pbVar2 = (byte)uVar9 | (char)uVar4 << 4;
            lVar10 = lVar10 + -2;
            pbVar2 = pbVar2 + 1;
            pbVar6 = pbVar6 + 2;
          } while (local_28 * 2 + -2 + lVar10 != 0);
        }
        else {
          local_1b[0] = 0;
          local_1b[1] = 0;
          local_1b[2] = 0;
          local_28 = 1;
        }
        (*(code *)PTR_from_utf8_000c3bd8)(lVar5,local_28);
        if (local_78 != '\0') {
          return 0xffffffff;
        }
        pqVar8 = (qword *)(local_70 + local_68);
        if (local_68 != 0) {
          bVar11 = *local_70;
          uVar3 = (ulonglong)bVar11;
          if ((char)bVar11 < '\0') {
            uVar4 = bVar11 & 0x1f;
            if (bVar11 < 0xe0) {
              pbVar6 = local_70 + 2;
              uVar3 = (ulonglong)(uVar4 << 6 | local_70[1] & 0x3f);
            }
            else {
              uVar9 = local_70[2] & 0x3f | (local_70[1] & 0x3f) << 6;
              if (bVar11 < 0xf0) {
                pbVar6 = local_70 + 3;
                uVar3 = (ulonglong)(uVar9 | uVar4 << 0xc);
              }
              else {
                pbVar6 = local_70 + 4;
                uVar3 = (ulonglong)(local_70[3] & 0x3f | uVar9 << 6 | (bVar11 & 7) << 0x12);
              }
            }
          }
          else {
            pbVar6 = local_70 + 1;
          }
          if ((qword *)pbVar6 == pqVar8) {
            return uVar3;
          }
        }
        goto LAB_000afa33;
      }
    }
LAB_000afa05:
    (*(code *)PTR_unwrap_failed_000c3b08)();
  }
  local_70 = &DAT_00016a7f;
  pqVar8 = &Elf64_Ehdr_00000000.e_shoff;
  (*(code *)PTR_panic_000c3b00)();
LAB_000afa33:
  <core[c0acaeba6ab4c2e0]::str::iter::Chars_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
  ::count(local_70,pqVar8);
  ppuVar7 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c24e8;
  (*(code *)PTR_panic_fmt_000c3e90)();
  uVar3 = _DAT_0000a916;
  bVar12 = _UNK_0000a91e < ppuVar7;
  _UNK_0000a91e = (undefined **)((longlong)_UNK_0000a91e - (longlong)ppuVar7);
  _DAT_0000a916 = (ulonglong)((bVar12 | DAT_0000a916) & 1);
  if (bVar12 || (uVar3 & 1) != 0) {
    return CONCAT71((int7)((ulonglong)_UNK_0000a91e >> 8),1);
  }
  uVar1 = *_UNK_0000a926;
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(_UNK_0000a926[1] + 0x18))(*(code **)(_UNK_0000a926[1] + 0x18));
  return uVar3;
}


