// 0077afb0 lookup_slow

/* core[c0acaeba6ab4c2e0]::unicode::unicode_data::cf::lookup_slow */

ulonglong __rustcall core[c0acaeba6ab4c2e0]::unicode::unicode_data::cf::lookup_slow(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar1 = param_1 * 0x800;
  uVar3 = (ulonglong)(0x110bc < param_1);
  lVar4 = uVar3 * 5 + 3;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + uVar3 * 0x14 + 0xc) * 0x800)) {
    lVar4 = uVar3 * 5;
  }
  lVar6 = lVar4 + 1;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + lVar4 * 4 + 4) * 0x800)) {
    lVar6 = lVar4;
  }
  lVar4 = lVar6 + 1;
  if (uVar1 < (uint)(*(int *)(SHORT_OFFSET_RUNS + lVar6 * 4 + 4) * 0x800)) {
    lVar4 = lVar6;
  }
  uVar7 = (ulonglong)(*(int *)(SHORT_OFFSET_RUNS + lVar4 * 4) * 0x800 == uVar1) + lVar4 +
          (ulonglong)((uint)(*(int *)(SHORT_OFFSET_RUNS + lVar4 * 4) * 0x800) < uVar1);
  uVar2 = (ulonglong)(*(uint *)(SHORT_OFFSET_RUNS + uVar7 * 4) >> 0x15);
  uVar3 = 0x2b;
  if ((uVar7 < 10) &&
     (uVar3 = (ulonglong)(*(uint *)(SHORT_OFFSET_RUNS + uVar7 * 4 + 4) >> 0x15), uVar7 == 0)) {
    uVar1 = 0;
    lVar4 = ~uVar2 + uVar3;
  }
  else {
    uVar1 = *(uint *)(&DAT_001c2af0 + uVar7 * 4) & 0x1fffff;
    lVar4 = ~uVar2 + uVar3;
  }
  if (lVar4 != 0) {
    uVar5 = 0;
    do {
      uVar5 = (byte)OFFSETS[uVar2] + uVar5;
      if (param_1 - uVar1 < uVar5) break;
      uVar2 = uVar2 + 1;
    } while (uVar3 - 1 != uVar2);
  }
  return uVar2 & 0xffffffffffffff01;
}


