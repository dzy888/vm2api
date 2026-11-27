// 0077ade0 lookup_slow

/* core[c0acaeba6ab4c2e0]::unicode::unicode_data::grapheme_extend::lookup_slow */

ulonglong __rustcall
core[c0acaeba6ab4c2e0]::unicode::unicode_data::grapheme_extend::lookup_slow(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = param_1 * 0x800;
  lVar4 = (ulonglong)(0x10eaa < param_1) * 0x10;
  lVar3 = lVar4 + 8;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + (ulonglong)(0x10eaa < param_1) * 0x40 + 0x20) *
                    0x800)) {
    lVar3 = lVar4;
  }
  lVar4 = lVar3 + 4;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + lVar3 * 4 + 0x10) * 0x800)) {
    lVar4 = lVar3;
  }
  lVar3 = lVar4 + 2;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + lVar4 * 4 + 8) * 0x800)) {
    lVar3 = lVar4;
  }
  lVar4 = lVar3 + 1;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + lVar3 * 4 + 4) * 0x800)) {
    lVar4 = lVar3;
  }
  lVar3 = lVar4 + 1;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + lVar4 * 4 + 4) * 0x800)) {
    lVar3 = lVar4;
  }
  uVar7 = (ulonglong)(*(int *)(SHORT_OFFSET_RUNS + lVar3 * 4) * 0x800 == uVar1) + lVar3 +
          (ulonglong)((uint)(*(int *)(SHORT_OFFSET_RUNS + lVar3 * 4) * 0x800) < uVar1);
  uVar2 = (ulonglong)(*(uint *)(SHORT_OFFSET_RUNS + uVar7 * 4) >> 0x15);
  uVar5 = 0x2ff;
  if ((uVar7 < 0x20) &&
     (uVar5 = (ulonglong)(*(uint *)(SHORT_OFFSET_RUNS + uVar7 * 4 + 4) >> 0x15), uVar7 == 0)) {
    uVar1 = 0;
    lVar3 = ~uVar2 + uVar5;
  }
  else {
    uVar1 = *(uint *)(&DAT_001c2a3c + uVar7 * 4) & 0x1fffff;
    lVar3 = ~uVar2 + uVar5;
  }
  if (lVar3 != 0) {
    uVar6 = 0;
    do {
      uVar6 = (byte)OFFSETS[uVar2] + uVar6;
      if (param_1 - uVar1 < uVar6) break;
      uVar2 = uVar2 + 1;
    } while (uVar5 - 1 != uVar2);
  }
  return uVar2 & 0xffffffffffffff01;
}


