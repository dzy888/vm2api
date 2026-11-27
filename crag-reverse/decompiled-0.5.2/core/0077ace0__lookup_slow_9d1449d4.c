// 0077ace0 lookup_slow

/* core[c0acaeba6ab4c2e0]::unicode::unicode_data::cn_planes_0_3::lookup_slow */

ulonglong __rustcall
core[c0acaeba6ab4c2e0]::unicode::unicode_data::cn_planes_0_3::lookup_slow(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar1 = param_1 * 0x800;
  uVar3 = 0;
  lVar4 = 0x1b;
  if (param_1 < 0x1b2fc) {
    lVar4 = 0;
  }
  lVar6 = lVar4 + 0xd;
  if (uVar1 < (uint)(*(int *)(&DAT_001c299c + lVar4 * 4) * 0x800)) {
    lVar6 = lVar4;
  }
  lVar4 = lVar6 + 7;
  if (uVar1 < (uint)((&DAT_001c2984)[lVar6] * 0x800)) {
    lVar4 = lVar6;
  }
  lVar6 = lVar4 + 3;
  if (uVar1 < (uint)((&DAT_001c2974)[lVar4] * 0x800)) {
    lVar6 = lVar4;
  }
  lVar4 = lVar6 + 2;
  if (uVar1 < (uint)((&DAT_001c2970)[lVar6] * 0x800)) {
    lVar4 = lVar6;
  }
  lVar6 = lVar4 + 1;
  if (uVar1 < (uint)((&DAT_001c296c)[lVar4] * 0x800)) {
    lVar6 = lVar4;
  }
  uVar7 = (ulonglong)((&SHORT_OFFSET_RUNS)[lVar6] * 0x800 == uVar1) + lVar6 +
          (ulonglong)((uint)((&SHORT_OFFSET_RUNS)[lVar6] * 0x800) < uVar1);
  uVar2 = (ulonglong)((uint)(&SHORT_OFFSET_RUNS)[uVar7] >> 0x15);
  uVar5 = 0x5b5;
  if ((0x34 < uVar7) || (uVar5 = (ulonglong)((uint)(&DAT_001c296c)[uVar7] >> 0x15), uVar7 != 0)) {
    uVar3 = *(uint *)("\'" + uVar7 * 4) & 0x1fffff;
  }
  if (~uVar2 + uVar5 != 0) {
    uVar1 = 0;
    do {
      uVar1 = (byte)OFFSETS[uVar2] + uVar1;
      if (param_1 - uVar3 < uVar1) break;
      uVar2 = uVar2 + 1;
    } while (uVar5 - 1 != uVar2);
  }
  return uVar2 & 0xffffffffffffff01;
}


