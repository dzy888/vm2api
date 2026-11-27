// 0076d440 try_parse_uint

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_uint */

undefined ** __rustcall <rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_uint(void)

{
  byte *pbVar1;
  char cVar2;
  undefined1 auVar3 [16];
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte bVar8;
  undefined *puVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  
  puVar9 = &DAT_001c10f2;
  ppuVar11 = (undefined **)0x1;
  pbVar4 = (byte *)(*(code *)PTR_<&str>_0079b280)(1);
  if (puVar9 < (undefined *)0x11) {
    if (puVar9 != (undefined *)0x0) {
      pbVar7 = pbVar4 + (longlong)puVar9;
      uVar10 = 0;
      do {
        bVar8 = *pbVar4;
        plVar12 = (longlong *)(ulonglong)bVar8;
        if ((char)bVar8 < '\0') {
          uVar13 = bVar8 & 0x1f;
          pbVar1 = pbVar4 + 1;
          if (bVar8 < 0xe0) {
            pbVar4 = pbVar4 + 2;
            plVar12 = (longlong *)(ulonglong)(uVar13 << 6 | *pbVar1 & 0x3f);
          }
          else {
            uVar14 = pbVar4[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar8 < 0xf0) {
              pbVar4 = pbVar4 + 3;
              plVar12 = (longlong *)(ulonglong)(uVar14 | uVar13 << 0xc);
            }
            else {
              pbVar1 = pbVar4 + 3;
              pbVar4 = pbVar4 + 4;
              plVar12 = (longlong *)(ulonglong)(*pbVar1 & 0x3f | uVar14 << 6 | (bVar8 & 7) << 0x12);
            }
          }
        }
        else {
          pbVar4 = pbVar4 + 1;
        }
        uVar13 = (uint)plVar12;
        uVar14 = uVar13 - 0x30;
        if (0x39 < uVar13) {
          uVar14 = (uVar13 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar14) {
          (*(code *)PTR_unwrap_failed_00799278)(pbVar7,uVar10);
          uVar10 = plVar12[2];
          if ((uVar10 < (ulonglong)plVar12[1]) && (*(char *)(*plVar12 + uVar10) == '_')) {
            plVar12[2] = uVar10 + 1;
            _UNK_007978b0 = 0;
            goto LAB_0076d5d5;
          }
          uVar6 = 0;
          goto LAB_0076d56d;
        }
        uVar10 = (ulonglong)uVar14 | uVar10 << 4;
      } while (pbVar4 != pbVar7);
    }
  }
  else {
    ppuVar11 = (undefined **)0x0;
  }
  return ppuVar11;
LAB_0076d56d:
  if ((ulonglong)plVar12[1] <= uVar10) {
LAB_0076d5b9:
    PTR_s__rust_deps_rustc_demangle_0_1_27_007978a8._1_1_ = 0;
    PTR_s__rust_deps_rustc_demangle_0_1_27_007978a8._0_1_ = 1;
LAB_0076d5d7:
    return &PTR_s__rust_deps_rustc_demangle_0_1_27_007978a8;
  }
  cVar2 = *(char *)(*plVar12 + uVar10);
  if (cVar2 == '_') {
    plVar12[2] = uVar10 + 1;
    if (uVar6 != 0xffffffffffffffff) {
      _UNK_007978b0 = uVar6 + 1;
LAB_0076d5d5:
      PTR_s__rust_deps_rustc_demangle_0_1_27_007978a8._0_1_ = 0;
      goto LAB_0076d5d7;
    }
    goto LAB_0076d5b9;
  }
  bVar8 = cVar2 - 0x30;
  if (9 < bVar8) {
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      bVar8 = cVar2 + 0xa9;
    }
    else {
      if (0x19 < (byte)(cVar2 + 0xbfU)) goto LAB_0076d5b9;
      bVar8 = cVar2 - 0x1d;
    }
  }
  uVar10 = uVar10 + 1;
  plVar12[2] = uVar10;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0x3e),0);
  if ((SUB168(auVar3 * ZEXT816(0x3e),8) != 0) ||
     (uVar6 = uVar5 + bVar8, CARRY8(uVar5,(ulonglong)bVar8))) goto LAB_0076d5b9;
  goto LAB_0076d56d;
}


