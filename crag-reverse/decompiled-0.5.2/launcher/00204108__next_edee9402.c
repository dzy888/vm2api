// 00204108 next

/* WARNING: Switch with 1 destination removed at 0x00204404 */
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
  undefined **ppuVar6;
  byte *pbVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  bool bVar11;
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
  pbVar7 = (byte *)*param_1;
  *param_1 = (longlong)(pbVar7 + uVar3);
  param_1[1] = lVar5;
  if (uVar3 == 2) {
    bVar10 = *pbVar7;
    uVar4 = bVar10 - 0x30;
    if (0x39 < bVar10) {
      uVar4 = (bVar10 - 0x41 & 0xffffffdf) + 10;
    }
    if (uVar4 < 0x10) {
      bVar10 = pbVar7[1];
      uVar8 = bVar10 - 0x30;
      if (0x39 < bVar10) {
        uVar8 = (bVar10 - 0x41 & 0xffffffdf) + 10;
      }
      if (uVar8 < 0x10) {
        bVar10 = (byte)uVar8 | (char)uVar4 << 4;
        if ((char)bVar10 < '\0') {
          if (bVar10 < 0xc0) {
            return 0xffffffff;
          }
          local_28 = 2;
          if (((0xdf < bVar10) && (local_28 = 3, 0xef < bVar10)) && (local_28 = 4, 0xf7 < bVar10)) {
            return 0xffffffff;
          }
          pbVar2 = local_1b;
          local_1b[0] = 0;
          local_1b[1] = 0;
          local_1b[2] = 0;
          lVar9 = 0;
          pbVar7 = pbVar7 + 2;
          do {
            if ((ulonglong)(lVar5 + lVar9) < 2) {
              return 0xffffffff;
            }
            *param_1 = (longlong)(pbVar7 + 2);
            param_1[1] = lVar5 + lVar9 + -2;
            bVar10 = *pbVar7;
            uVar4 = bVar10 - 0x30;
            if (0x39 < bVar10) {
              uVar4 = (bVar10 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar4) goto LAB_00204355;
            bVar10 = pbVar7[1];
            uVar8 = bVar10 - 0x30;
            if (0x39 < bVar10) {
              uVar8 = (bVar10 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar8) goto LAB_00204355;
            *pbVar2 = (byte)uVar8 | (char)uVar4 << 4;
            lVar9 = lVar9 + -2;
            pbVar2 = pbVar2 + 1;
            pbVar7 = pbVar7 + 2;
          } while (local_28 * 2 + -2 + lVar9 != 0);
        }
        else {
          local_1b[0] = 0;
          local_1b[1] = 0;
          local_1b[2] = 0;
          local_28 = 1;
        }
        (*(code *)PTR_from_utf8_00219d78)(lVar5,local_28);
        if (local_78 != '\0') {
          return 0xffffffff;
        }
        pbVar7 = local_70 + local_68;
        if (local_68 != 0) {
          bVar10 = *local_70;
          uVar3 = (ulonglong)bVar10;
          if ((char)bVar10 < '\0') {
            uVar4 = bVar10 & 0x1f;
            if (bVar10 < 0xe0) {
              pbVar2 = local_70 + 2;
              uVar3 = (ulonglong)(uVar4 << 6 | local_70[1] & 0x3f);
            }
            else {
              uVar8 = local_70[2] & 0x3f | (local_70[1] & 0x3f) << 6;
              if (bVar10 < 0xf0) {
                pbVar2 = local_70 + 3;
                uVar3 = (ulonglong)(uVar8 | uVar4 << 0xc);
              }
              else {
                pbVar2 = local_70 + 4;
                uVar3 = (ulonglong)(local_70[3] & 0x3f | uVar8 << 6 | (bVar10 & 7) << 0x12);
              }
            }
          }
          else {
            pbVar2 = local_70 + 1;
          }
          if (pbVar2 == pbVar7) {
            return uVar3;
          }
        }
        goto LAB_00204383;
      }
    }
LAB_00204355:
    (*(code *)PTR_unwrap_failed_00219e58)();
  }
  local_70 = &DAT_0012f1ab;
  pbVar7 = &DAT_00000028;
  (*(code *)PTR_panic_00219ca8)();
LAB_00204383:
  <core[c0acaeba6ab4c2e0]::str::iter::Chars_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
  ::count(local_70,pbVar7);
  ppuVar6 = &PTR_s__rust_deps_rustc_demangle_0_1_27_002185a8;
  (*(code *)PTR_panic_fmt_0021a010)();
  uVar3 = _DAT_00116025;
  bVar11 = _UNK_0011602d < ppuVar6;
  _UNK_0011602d = (undefined **)((longlong)_UNK_0011602d - (longlong)ppuVar6);
  _DAT_00116025 = (ulonglong)((bVar11 | DAT_00116025) & 1);
  if (bVar11 || (uVar3 & 1) != 0) {
    return CONCAT71((int7)((ulonglong)_UNK_0011602d >> 8),1);
  }
  uVar1 = *_UNK_00116035;
                    /* WARNING: Could not recover jumptable at 0x0020b90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(_UNK_00116035[1] + 0x18))(*(code **)(_UNK_00116035[1] + 0x18));
  return uVar3;
}


